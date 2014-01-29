/* Generated from chicken-install.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken-install.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-install.c
   used units: library eval srfi_2d1 posix data_2dstructures utils irregex ports extras srfi_2d13 files chicken_2dsyntax chicken_2dffi_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[421];
static double C_possibly_force_alignment;


C_noret_decl(f_4649)
static void C_ccall f_4649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4814)
static void C_fcall f_4814(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5555)
static void C_fcall f_5555(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5559)
static void C_ccall f_5559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5055)
static void C_ccall f_5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4625)
static void C_ccall f_4625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4620)
static void C_ccall f_4620(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5941)
static void C_ccall f_5941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5070)
static void C_ccall f_5070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4134)
static void C_ccall f_4134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_fcall f_4136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5698)
static void C_ccall f_5698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7222)
static void C_ccall f7222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7227)
static void C_ccall f7227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7232)
static void C_ccall f7232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7237)
static void C_ccall f7237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7242)
static void C_ccall f7242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7247)
static void C_ccall f7247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7252)
static void C_ccall f7252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7259)
static void C_ccall f7259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4547)
static void C_fcall f_4547(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4112)
static void C_ccall f_4112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7200)
static void C_ccall f7200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7205)
static void C_ccall f7205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7212)
static void C_ccall f7212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7217)
static void C_ccall f7217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_fcall f_4911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f7264)
static void C_ccall f7264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6569)
static void C_fcall f_6569(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5634)
static void C_fcall f_5634(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6554)
static void C_ccall f_6554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5664)
static void C_fcall f_5664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5861)
static void C_fcall f_5861(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6531)
static void C_ccall f_6531(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_fcall f_3466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3093)
static void C_fcall f_3093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5432)
static void C_ccall f_5432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_fcall f_5439(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_fcall f_3262(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5459)
static void C_fcall f_5459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5241)
static void C_ccall f_5241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_fcall f_5249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6735)
static void C_ccall f_6735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3691)
static void C_ccall f_3691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3697)
static void C_fcall f_3697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6738)
static void C_ccall f_6738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3473)
static void C_fcall f_3473(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3475)
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6713)
static void C_ccall f_6713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6139)
static void C_ccall f_6139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2781)
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3912)
static void C_fcall f_3912(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6310)
static void C_ccall f_6310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5217)
static void C_ccall f_5217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6700)
static void C_ccall f_6700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6708)
static void C_ccall f_6708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5010)
static void C_ccall f_5010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2589)
static void C_fcall f_2589(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5005)
static void C_ccall f_5005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3763)
static void C_fcall f_3763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5023)
static void C_fcall f_5023(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6015)
static void C_ccall f_6015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5365)
static void C_fcall f_5365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5184)
static void C_ccall f_5184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5182)
static void C_ccall f_5182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2919)
static void C_fcall f_2919(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6392)
static void C_ccall f_6392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6596)
static void C_ccall f_6596(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3713)
static void C_ccall f_3713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6592)
static void C_ccall f_6592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6063)
static void C_ccall f_6063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_fcall f_3504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6575)
static void C_ccall f_6575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_fcall f_2711(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_fcall f_2948(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4377)
static void C_fcall f_4377(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6523)
static void C_ccall f_6523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2450)
static void C_fcall f_2450(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4195)
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4960)
static void C_fcall f_4960(C_word t0) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2411)
static void C_fcall f_2411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5815)
static void C_fcall f_5815(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4999)
static void C_ccall f_4999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4561)
static void C_ccall f_4561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4531)
static void C_fcall f_4531(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5575)
static void C_fcall f_5575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5775)
static void C_ccall f_5775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_fcall f_3045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5799)
static void C_ccall f_5799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3037)
static void C_fcall f_3037(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4259)
static void C_ccall f_4259(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4427)
static void C_ccall f_4427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3007)
static void C_fcall f_3007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_fcall f_4239(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4215)
static void C_fcall f_4215(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5142)
static void C_fcall f_5142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5533)
static void C_ccall f_5533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5536)
static void C_ccall f_5536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5530)
static void C_ccall f_5530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5112)
static void C_fcall f_5112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7195)
static void C_ccall f7195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f7190)
static void C_ccall f7190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5756)
static void C_ccall f_5756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5731)
static void C_fcall f_5731(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_fcall f_3386(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3375)
static void C_fcall f_3375(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6463)
static void C_fcall f_6463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_fcall f_3364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5351)
static void C_ccall f_5351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6256)
static void C_ccall f_6256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4008)
static void C_ccall f_4008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5335)
static void C_ccall f_5335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6608)
static void C_ccall f_6608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static C_word C_fcall f_2876(C_word t0,C_word t1);
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2895)
static void C_ccall f_2895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6611)
static void C_ccall f_6611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_fcall f_2670(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6678)
static void C_ccall f_6678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_fcall f_2851(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6673)
static void C_ccall f_6673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6498)
static void C_fcall f_6498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5280)
static void C_fcall f_5280(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5284)
static void C_fcall f_5284(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3811)
static void C_fcall f_3811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6281)
static void C_ccall f_6281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5297)
static void C_ccall f_5297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6688)
static void C_ccall f_6688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6681)
static void C_ccall f_6681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_fcall f_2807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6698)
static void C_ccall f_6698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6696)
static void C_ccall f_6696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6693)
static void C_ccall f_6693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_fcall f_3120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_fcall f_3309(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4673)
static void C_ccall f_4673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3937)
static void C_fcall f_3937(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_fcall f_2939(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_fcall f_4065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5717)
static void C_ccall f_5717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4879)
static void C_fcall f_4879(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5729)
static void C_ccall f_5729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5521)
static void C_ccall f_5521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4814)
static void C_fcall trf_4814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4814(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4814(t0,t1);}

C_noret_decl(trf_5555)
static void C_fcall trf_5555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5555(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5555(t0,t1,t2);}

C_noret_decl(trf_4136)
static void C_fcall trf_4136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4136(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4136(t0,t1,t2);}

C_noret_decl(trf_4547)
static void C_fcall trf_4547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4547(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4547(t0,t1);}

C_noret_decl(trf_4911)
static void C_fcall trf_4911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4911(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4911(t0,t1,t2);}

C_noret_decl(trf_6569)
static void C_fcall trf_6569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6569(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6569(t0,t1);}

C_noret_decl(trf_5634)
static void C_fcall trf_5634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5634(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5634(t0,t1,t2,t3);}

C_noret_decl(trf_5664)
static void C_fcall trf_5664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5664(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5664(t0,t1);}

C_noret_decl(trf_5861)
static void C_fcall trf_5861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5861(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5861(t0,t1);}

C_noret_decl(trf_3466)
static void C_fcall trf_3466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3466(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3466(t0,t1);}

C_noret_decl(trf_3093)
static void C_fcall trf_3093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3093(t0,t1);}

C_noret_decl(trf_5439)
static void C_fcall trf_5439(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5439(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5439(t0,t1,t2);}

C_noret_decl(trf_3262)
static void C_fcall trf_3262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3262(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3262(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5459)
static void C_fcall trf_5459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5459(t0,t1);}

C_noret_decl(trf_5249)
static void C_fcall trf_5249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5249(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5249(t0,t1,t2);}

C_noret_decl(trf_3697)
static void C_fcall trf_3697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3697(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3697(t0,t1);}

C_noret_decl(trf_3473)
static void C_fcall trf_3473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3473(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3473(t0,t1);}

C_noret_decl(trf_3475)
static void C_fcall trf_3475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3475(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3475(t0,t1,t2);}

C_noret_decl(trf_2781)
static void C_fcall trf_2781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2781(t0,t1,t2);}

C_noret_decl(trf_3912)
static void C_fcall trf_3912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3912(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3912(t0,t1);}

C_noret_decl(trf_2589)
static void C_fcall trf_2589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2589(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2589(t0,t1,t2);}

C_noret_decl(trf_3763)
static void C_fcall trf_3763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3763(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3763(t0,t1,t2);}

C_noret_decl(trf_5023)
static void C_fcall trf_5023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5023(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5023(t0,t1,t2);}

C_noret_decl(trf_5365)
static void C_fcall trf_5365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5365(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5365(t0,t1,t2);}

C_noret_decl(trf_2919)
static void C_fcall trf_2919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2919(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2919(t0,t1,t2);}

C_noret_decl(trf_3504)
static void C_fcall trf_3504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3504(t0,t1);}

C_noret_decl(trf_2711)
static void C_fcall trf_2711(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2711(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2711(t0,t1);}

C_noret_decl(trf_2948)
static void C_fcall trf_2948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2948(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2948(t0,t1);}

C_noret_decl(trf_4377)
static void C_fcall trf_4377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4377(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4377(t0,t1);}

C_noret_decl(trf_2450)
static void C_fcall trf_2450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2450(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2450(t0,t1,t2);}

C_noret_decl(trf_4195)
static void C_fcall trf_4195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4195(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4195(t0,t1,t2);}

C_noret_decl(trf_4960)
static void C_fcall trf_4960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4960(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_4960(t0);}

C_noret_decl(trf_2411)
static void C_fcall trf_2411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2411(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2411(t0,t1);}

C_noret_decl(trf_5815)
static void C_fcall trf_5815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5815(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5815(t0,t1,t2);}

C_noret_decl(trf_4531)
static void C_fcall trf_4531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4531(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4531(t0,t1);}

C_noret_decl(trf_5575)
static void C_fcall trf_5575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5575(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5575(t0,t1);}

C_noret_decl(trf_3045)
static void C_fcall trf_3045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3045(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3045(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3037)
static void C_fcall trf_3037(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3037(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3037(t0,t1);}

C_noret_decl(trf_3007)
static void C_fcall trf_3007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3007(t0,t1);}

C_noret_decl(trf_4239)
static void C_fcall trf_4239(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4239(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4239(t0,t1);}

C_noret_decl(trf_4215)
static void C_fcall trf_4215(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4215(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4215(t0,t1,t2);}

C_noret_decl(trf_5142)
static void C_fcall trf_5142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5142(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5142(t0,t1,t2);}

C_noret_decl(trf_5112)
static void C_fcall trf_5112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5112(t0,t1,t2);}

C_noret_decl(trf_5731)
static void C_fcall trf_5731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5731(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5731(t0,t1,t2);}

C_noret_decl(trf_3386)
static void C_fcall trf_3386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3386(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3386(t0,t1);}

C_noret_decl(trf_3375)
static void C_fcall trf_3375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3375(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3375(t0,t1);}

C_noret_decl(trf_6463)
static void C_fcall trf_6463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6463(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6463(t0,t1);}

C_noret_decl(trf_3364)
static void C_fcall trf_3364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3364(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3364(t0,t1);}

C_noret_decl(trf_3869)
static void C_fcall trf_3869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3869(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3869(t0,t1,t2);}

C_noret_decl(trf_2670)
static void C_fcall trf_2670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2670(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2670(t0,t1,t2);}

C_noret_decl(trf_2851)
static void C_fcall trf_2851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2851(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2851(t0,t1);}

C_noret_decl(trf_6498)
static void C_fcall trf_6498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6498(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6498(t0,t1,t2);}

C_noret_decl(trf_5280)
static void C_fcall trf_5280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5280(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5280(t0,t1);}

C_noret_decl(trf_5284)
static void C_fcall trf_5284(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5284(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5284(t0,t1);}

C_noret_decl(trf_3811)
static void C_fcall trf_3811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3811(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3811(t0,t1,t2);}

C_noret_decl(trf_2807)
static void C_fcall trf_2807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2807(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2807(t0,t1);}

C_noret_decl(trf_3120)
static void C_fcall trf_3120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3120(t0,t1);}

C_noret_decl(trf_3309)
static void C_fcall trf_3309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3309(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3309(t0,t1,t2);}

C_noret_decl(trf_4292)
static void C_fcall trf_4292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4292(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4292(t0,t1);}

C_noret_decl(trf_3937)
static void C_fcall trf_3937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3937(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3937(t0,t1);}

C_noret_decl(trf_2939)
static void C_fcall trf_2939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2939(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2939(t0,t1);}

C_noret_decl(trf_4065)
static void C_fcall trf_4065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4065(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4065(t0,t1,t2);}

C_noret_decl(trf_4879)
static void C_fcall trf_4879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4879(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4879(t0,t1,t2,t3);}

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

/* f_4649 */
static void C_ccall f_4649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4649,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_4849 */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4849,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=C_i_car(((C_word*)t0)[2]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_equalp(t4,t5));}
else{
t3=t2;
t4=C_i_car(((C_word*)t0)[2]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_equalp(t3,t4));}}

/* k4846 */
static void C_ccall f_4847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4547(t2,C_i_not(t1));}

/* f_4644 */
static void C_ccall f_4644(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4644r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4644r(t0,t1,t2);}}

static void C_ccall f_4644r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4649,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:626: k1145 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k5560 in k5558 in main#command in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_5561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:755: $system */
f_5459(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4815 in k4812 in k4546 */
static void C_ccall f_4816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4818,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:595: cleanup */
f_4960(t2);}

/* k4817 in k4815 in k4812 in k4546 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:596: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k4812 in k4546 */
static void C_fcall f_4814(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4814,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:594: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[311]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4549(2,t3,t2);}}

/* k5051 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5055,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* chicken-install.scm:677: symbol->string */
t4=*((C_word*)lf[195]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* main#command in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_5555(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5555,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5559,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[210]+1),t2,t3);}

/* k5558 in main#command in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:754: print */
t3=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[209],t1);}

/* k5054 in k5051 */
static void C_ccall f_5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:677: string<? */
t2=*((C_word*)lf[228]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4627 */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:626: print-error-message */
t3=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* f_4625 */
static void C_ccall f_4625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4628,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:626: print */
t3=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[256],lf[257],((C_word*)t0)[3],lf[258]);}

/* f_4620 */
static void C_ccall f_4620(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4620,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4625,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:626: k1145 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k4826 in k4546 */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4814(t2,C_i_not(t1));}

/* f_5063 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5063,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5068,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:669: ##sys#module-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[235]))(3,*((C_word*)lf[235]+1),t4,t3);}

/* k5067 */
static void C_ccall f_5068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5070,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:670: print* */
t3=*((C_word*)lf[233]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[234],t1);}

/* k5940 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(&lf[14] /* (set! main#*default-location* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:900: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5634(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k5069 in k5067 */
static void C_ccall f_5070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:671: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* f_5075 in k5069 in k5067 */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5075,2,t0,t1);}
/* chicken-install.scm:671: ##sys#module-exports */
((C_proc3)C_fast_retrieve_symbol_proc(lf[230]))(3,*((C_word*)lf[230]+1),t1,((C_word*)t0)[2]);}

/* k4605 in k4596 in k4592 in k4586 in k4580 in k4576 */
static void C_ccall f_4607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=lf[21] /* main#*running-test* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5676 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:866: display */
t2=*((C_word*)lf[98]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_4615 in k4596 in k4592 in k4586 in k4580 in k4576 */
static void C_ccall f_4615(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4615,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4620,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:626: with-exception-handler */
t5=C_fast_retrieve(lf[129]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k4609 in k4596 in k4592 in k4586 in k4580 in k4576 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:626: g1149 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_4120 in k4030 */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4120,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4128 in k4030 */
static void C_ccall f_4129(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4129,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[146]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4136(t7,t3,t1);}

/* k5911 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-install.scm:893: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5634(t4,((C_word*)t0)[4],t3,((C_word*)((C_word*)t0)[5])[1]);}

/* k4132 in k4128 in k4030 */
static void C_ccall f_4134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4134,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[64],"main#\052dependencies\052"));
t4=C_mutate(&lf[64] /* (set! main#*dependencies* ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4038,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[6])[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4106,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4112,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:474: string-intersperse */
t8=C_fast_retrieve(lf[151]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)((C_word*)t0)[6])[1],lf[173]);}
else{
t6=t5;
f_4038(2,t6,C_SCHEME_UNDEFINED);}}

/* map-loop840 in k4128 in k4030 */
static void C_fcall f_4136(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4136,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4161,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:467: g846 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5695,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4531,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[6],"main#\052keep-existing\052"))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4946,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4948,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:571: remove */
t8=C_fast_retrieve(lf[319]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t4)[1]);}
else{
t6=t5;
f_4531(t6,C_SCHEME_UNDEFINED);}}

/* k5697 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:874: apply-mappings */
f_5280(((C_word*)t0)[2],t1);}

/* k5971 in k5968 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate(&lf[15] /* (set! main#*default-transport* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-install.scm:904: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_5634(t6,((C_word*)t0)[4],t5,((C_word*)((C_word*)t0)[5])[1]);}

/* f7222 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7227 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k5870 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:884: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5876 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:883: print */
t2=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5968 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:903: string->symbol */
t4=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* f7232 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7237 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7242 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7247 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7252 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7259 in k6475 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k4100 in k4097 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:478: yes-or-no? */
t2=C_fast_retrieve(lf[154]);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[155],lf[156],t1);}

/* k4105 in k4132 in k4128 in k4030 */
static void C_ccall f_4106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:475: retrieve */
f_3912(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}

/* k4546 */
static void C_fcall f_4547(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4547,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4549,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[5])?C_SCHEME_FALSE:t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4814,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[10],"main#\052no-install\052"))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4827,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4830,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[312]))(4,*((C_word*)lf[312]+1),t6,lf[313],lf[314]);}
else{
t5=t4;
f_4814(t5,C_SCHEME_FALSE);}}
else{
t4=t2;
f_4549(2,t4,C_SCHEME_UNDEFINED);}}

/* k4548 in k4546 */
static void C_ccall f_4549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_caddr(((C_word*)t0)[2]);
/* chicken-install.scm:597: print */
t5=*((C_word*)lf[69]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t2,lf[309],t3,C_make_character(58),t4,lf[310]);}

/* k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:580: pp */
t3=C_fast_retrieve(lf[249]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4543(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4863,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[4];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4870,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4911,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4911(t13,t9,t8);}

/* f_4544 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4544,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4547,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4847,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:584: find */
t7=C_fast_retrieve(lf[201]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)((C_word*)t0)[3])[1]);}
else{
t5=t4;
f_4547(t5,C_SCHEME_FALSE);}}

/* k4111 in k4132 in k4128 in k4030 */
static void C_ccall f_4112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:474: print */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[172],t1);}

/* f7200 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7205 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7212 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7217 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* map-loop1202 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_4911(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4911,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:639: g1208 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f7264 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k5844 in k5788 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:857: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k5839 in map-loop1606 in k5788 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5840(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5840,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5815(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5815(t6,((C_word*)t0)[5],t5);}}

/* k6568 in k6553 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_6569(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6569,NULL,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));
t3=C_mutate(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* chicken-install.scm:1024: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5634(t7,((C_word*)t0)[6],t5,t6);}

/* loop in k5628 in k5626 in k6721 */
static void C_fcall f_5634(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5634,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(t2))){
t5=(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?C_i_not(C_retrieve2(lf[27],"main#\052prefix\052")):C_SCHEME_FALSE);
if(C_truep(t5)){
/* chicken-install.scm:828: error */
t6=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,lf[223]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=t1;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4978,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5275,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5278,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:648: repository-path */
t10=C_fast_retrieve(lf[225]);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=t1;
t7=((C_word*)((C_word*)t0)[3])[1];
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5418,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5432,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:711: setup-download#gather-egg-information */
((C_proc3)C_fast_retrieve_symbol_proc(lf[251]))(3,*((C_word*)lf[251]+1),t9,t7);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5664,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2448,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2805,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:127: chicken-home */
t9=C_fast_retrieve(lf[348]);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}}
else{
t5=C_i_car(t2);
t6=C_i_string_equal_p(t5,lf[349]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5861,a[2]=t1,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t6)){
t8=t7;
f_5861(t8,t6);}
else{
t8=C_u_i_string_equal_p(t5,lf[408]);
if(C_truep(t8)){
t9=t7;
f_5861(t9,t8);}
else{
t9=C_u_i_string_equal_p(t5,lf[409]);
t10=t7;
f_5861(t10,t9);}}}}

/* k6553 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6569,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6572,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1016: pathname-directory */
t4=C_fast_retrieve(lf[406]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k5663 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_5664(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5664,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[4])[1]))){
if(C_truep(C_retrieve2(lf[35],"main#\052reinstall\052"))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5717,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5488,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5490,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5530,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5533,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5536,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[30],"main#\052host-extension\052")):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2392,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t11=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* chicken-install.scm:117: repository-path */
t10=C_fast_retrieve(lf[225]);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t8);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t3)){
t4=t2;
f_5666(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5789,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:846: glob */
t5=C_fast_retrieve(lf[247]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[336]);}}}
else{
t3=t2;
f_5666(2,t3,C_SCHEME_UNDEFINED);}}

/* k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5668(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5668,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5677,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[15],"main#\052default-transport\052");
t4=C_retrieve2(lf[14],"main#\052default-location\052");
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5544,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:739: with-default-sources */
f_3466(t2,t5);}
else{
if(C_truep(C_retrieve2(lf[36],"main#\052show-depends\052"))){
/* chicken-install.scm:870: show-depends */
f_3763(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,1,lf[86]));}
else{
if(C_truep(C_retrieve2(lf[37],"main#\052show-foreign-depends\052"))){
/* chicken-install.scm:872: show-depends */
f_3763(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,1,lf[101]));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5698,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:874: reverse */
t4=*((C_word*)lf[144]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}}}}

/* k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_5668(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5700,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[15],"main#\052default-transport\052"))){
if(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))){
t4=C_SCHEME_UNDEFINED;
t5=t2;
f_5668(2,t5,t4);}
else{
/* chicken-install.scm:863: error */
t4=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[320]);}}
else{
/* chicken-install.scm:860: error */
t4=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[321]);}}}

/* f_3286 in loop in k3255 in k3245 */
static void C_ccall f_3286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3286,2,t0,t1);}
/* chicken-install.scm:300: check-dependency */
f_3007(t1,((C_word*)t0)[2]);}

/* k5859 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_5861(C_word t0,C_word t1){
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
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5861,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7190,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[350]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[351]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5877,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:883: repository-path */
t4=C_fast_retrieve(lf[225]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[352]))){
t2=lf[7] /* main#*force* */ =C_SCHEME_TRUE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-install.scm:887: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5634(t5,((C_word*)t0)[2],t4,((C_word*)((C_word*)t0)[6])[1]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[353]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[354]));
if(C_truep(t3)){
t4=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-install.scm:890: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5634(t7,((C_word*)t0)[2],t6,((C_word*)((C_word*)t0)[6])[1]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[355]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[356]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5912,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:892: setup-api#sudo-install */
((C_proc3)C_fast_retrieve_symbol_proc(lf[296]))(3,*((C_word*)lf[296]+1),t6,C_SCHEME_TRUE);}
else{
t6=C_u_i_string_equal_p(((C_word*)t0)[3],lf[357]);
t7=(C_truep(t6)?t6:C_u_i_string_equal_p(((C_word*)t0)[3],lf[358]));
if(C_truep(t7)){
t8=lf[9] /* main#*retrieve-only* */ =C_SCHEME_TRUE;;
t9=((C_word*)t0)[4];
t10=C_u_i_cdr(t9);
/* chicken-install.scm:896: loop */
t11=((C_word*)((C_word*)t0)[5])[1];
f_5634(t11,((C_word*)t0)[2],t10,((C_word*)((C_word*)t0)[6])[1]);}
else{
t8=C_u_i_string_equal_p(((C_word*)t0)[3],lf[359]);
t9=(C_truep(t8)?t8:C_u_i_string_equal_p(((C_word*)t0)[3],lf[360]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5941,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t11=((C_word*)t0)[4];
t12=C_u_i_cdr(t11);
if(C_truep(C_i_pairp(t12))){
t13=t10;
f_5941(2,t13,C_SCHEME_UNDEFINED);}
else{
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7195,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t14=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,lf[350]);}}
else{
t10=C_u_i_string_equal_p(((C_word*)t0)[3],lf[361]);
t11=(C_truep(t10)?t10:C_u_i_string_equal_p(((C_word*)t0)[3],lf[362]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t13=((C_word*)t0)[4];
t14=C_u_i_cdr(t13);
if(C_truep(C_i_pairp(t14))){
t15=t12;
f_5969(2,t15,C_SCHEME_UNDEFINED);}
else{
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7200,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t16=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,lf[350]);}}
else{
t12=C_u_i_string_equal_p(((C_word*)t0)[3],lf[363]);
t13=(C_truep(t12)?t12:C_u_i_string_equal_p(((C_word*)t0)[3],lf[364]));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6000,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t15=((C_word*)t0)[4];
t16=C_u_i_cdr(t15);
if(C_truep(C_i_pairp(t16))){
t17=t14;
f_6000(2,t17,C_SCHEME_UNDEFINED);}
else{
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7205,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t18=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t18+1)))(3,t18,t17,lf[350]);}}
else{
t14=C_u_i_string_equal_p(((C_word*)t0)[3],lf[365]);
t15=(C_truep(t14)?t14:C_u_i_string_equal_p(((C_word*)t0)[3],lf[366]));
if(C_truep(t15)){
t16=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t17=lf[10] /* main#*no-install* */ =C_SCHEME_TRUE;;
t18=((C_word*)t0)[4];
t19=C_u_i_cdr(t18);
/* chicken-install.scm:917: loop */
t20=((C_word*)((C_word*)t0)[5])[1];
f_5634(t20,((C_word*)t0)[2],t19,((C_word*)((C_word*)t0)[6])[1]);}
else{
t16=C_u_i_string_equal_p(((C_word*)t0)[3],lf[367]);
t17=(C_truep(t16)?t16:C_u_i_string_equal_p(((C_word*)t0)[3],lf[368]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6063,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:920: chicken-version */
t20=C_fast_retrieve(lf[45]);
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t19);}
else{
t18=C_u_i_string_equal_p(((C_word*)t0)[3],lf[369]);
t19=(C_truep(t18)?t18:C_u_i_string_equal_p(((C_word*)t0)[3],lf[370]));
if(C_truep(t19)){
t20=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t21=((C_word*)t0)[4];
t22=C_u_i_cdr(t21);
/* chicken-install.scm:924: loop */
t23=((C_word*)((C_word*)t0)[5])[1];
f_5634(t23,((C_word*)t0)[2],t22,((C_word*)((C_word*)t0)[6])[1]);}
else{
t20=C_u_i_string_equal_p(((C_word*)t0)[3],lf[371]);
t21=(C_truep(t20)?t20:C_u_i_string_equal_p(((C_word*)t0)[3],lf[372]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;
f_6087(2,t25,C_SCHEME_UNDEFINED);}
else{
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7212,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t26=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t26+1)))(3,t26,t25,lf[350]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[379],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[4];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;
f_6110(2,t25,C_SCHEME_UNDEFINED);}
else{
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7217,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t26=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t26+1)))(3,t26,t25,lf[350]);}}
else{
t22=C_u_i_string_equal_p(lf[380],((C_word*)t0)[3]);
t23=(C_truep(t22)?t22:C_u_i_string_equal_p(lf[381],((C_word*)t0)[3]));
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6139,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;
f_6139(2,t27,C_SCHEME_UNDEFINED);}
else{
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7222,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t28=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,lf[350]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[382],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6170,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;
f_6170(2,t27,C_SCHEME_UNDEFINED);}
else{
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7227,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t28=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,lf[350]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[383],((C_word*)t0)[3]))){
t24=lf[8] /* main#*run-tests* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:945: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_5634(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[384],((C_word*)t0)[3]))){
t24=lf[31] /* main#*target-extension* */ =C_SCHEME_FALSE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:948: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_5634(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[385],((C_word*)t0)[3]))){
t24=lf[30] /* main#*host-extension* */ =C_SCHEME_FALSE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:951: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_5634(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[386],((C_word*)t0)[3]))){
t24=lf[32] /* main#*debug-setup* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:954: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_5634(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[387],((C_word*)t0)[3]))){
t24=lf[23] /* main#*deploy* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:957: loop */
t27=((C_word*)((C_word*)t0)[5])[1];
f_5634(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[388],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6256,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;
f_6256(2,t27,C_SCHEME_UNDEFINED);}
else{
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7232,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t28=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,lf[350]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[389],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6281,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;
f_6281(2,t27,C_SCHEME_UNDEFINED);}
else{
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7237,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t28=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,lf[350]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[390],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6306,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[4];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;
f_6306(2,t27,C_SCHEME_UNDEFINED);}
else{
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7242,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t28=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,lf[350]);}}
else{
t24=C_u_i_string_equal_p(lf[391],((C_word*)t0)[3]);
t25=(C_truep(t24)?t24:C_u_i_string_equal_p(lf[392],((C_word*)t0)[3]));
if(C_truep(t25)){
t26=lf[6] /* main#*keep-existing* */ =C_SCHEME_TRUE;;
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
/* chicken-install.scm:972: loop */
t29=((C_word*)((C_word*)t0)[5])[1];
f_5634(t29,((C_word*)t0)[2],t28,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[393],((C_word*)t0)[3]))){
t26=lf[35] /* main#*reinstall* */ =C_SCHEME_TRUE;;
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
/* chicken-install.scm:975: loop */
t29=((C_word*)((C_word*)t0)[5])[1];
f_5634(t29,((C_word*)t0)[2],t28,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[394],((C_word*)t0)[3]))){
t26=lf[24] /* main#*trunk* */ =C_SCHEME_TRUE;;
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
/* chicken-install.scm:978: loop */
t29=((C_word*)((C_word*)t0)[5])[1];
f_5634(t29,((C_word*)t0)[2],t28,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[395],((C_word*)t0)[3]))){
t26=lf[33] /* main#*keep-going* */ =C_SCHEME_TRUE;;
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
/* chicken-install.scm:981: loop */
t29=((C_word*)((C_word*)t0)[5])[1];
f_5634(t29,((C_word*)t0)[2],t28,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[396],((C_word*)t0)[3]))){
t26=C_set_block_item(((C_word*)t0)[9],0,C_SCHEME_TRUE);
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
/* chicken-install.scm:984: loop */
t29=((C_word*)((C_word*)t0)[5])[1];
f_5634(t29,((C_word*)t0)[2],t28,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[397],((C_word*)t0)[3]))){
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6392,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
if(C_truep(C_i_pairp(t28))){
t29=t26;
f_6392(2,t29,C_SCHEME_UNDEFINED);}
else{
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7247,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t30=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t30+1)))(3,t30,t29,lf[350]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[398],((C_word*)t0)[3]))){
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6417,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
if(C_truep(C_i_pairp(t28))){
t29=t26;
f_6417(2,t29,C_SCHEME_UNDEFINED);}
else{
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7252,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t30=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t30+1)))(3,t30,t29,lf[350]);}}
else{
if(C_truep(C_u_i_string_equal_p(lf[399],((C_word*)t0)[3]))){
t26=lf[36] /* main#*show-depends* */ =C_SCHEME_TRUE;;
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
/* chicken-install.scm:995: loop */
t29=((C_word*)((C_word*)t0)[5])[1];
f_5634(t29,((C_word*)t0)[2],t28,((C_word*)((C_word*)t0)[6])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[400],((C_word*)t0)[3]))){
t26=lf[37] /* main#*show-foreign-depends* */ =C_SCHEME_TRUE;;
t27=((C_word*)t0)[4];
t28=C_u_i_cdr(t27);
/* chicken-install.scm:998: loop */
t29=((C_word*)((C_word*)t0)[5])[1];
f_5634(t29,((C_word*)t0)[2],t28,((C_word*)((C_word*)t0)[6])[1]);}
else{
t26=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6463,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t27=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t27,C_fix(0)))){
t28=C_subchar(((C_word*)t0)[3],C_fix(0));
t29=t26;
f_6463(t29,C_i_char_equalp(C_make_character(45),t28));}
else{
t28=t26;
f_6463(t28,C_SCHEME_FALSE);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k3277 in k3274 in loop in k3255 in k3245 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:297: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_6531 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6531(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6531,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_memq(t2,lf[401]));}

/* k3274 in loop in k3255 in k3245 */
static void C_ccall f_3275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:297: reverse */
t3=*((C_word*)lf[144]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k6537 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[402]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_3466(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3466,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3473,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))?C_retrieve2(lf[15],"main#\052default-transport\052"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2848,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2851,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_retrieve2(lf[15],"main#\052default-transport\052"),lf[83]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2866,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:193: absolute-pathname? */
t9=C_fast_retrieve(lf[84]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,C_retrieve2(lf[14],"main#\052default-location\052"));}
else{
t8=t6;
f_2851(t8,C_SCHEME_FALSE);}}
else{
t5=C_retrieve2(lf[13],"main#\052default-sources\052");
t6=t3;
f_3473(t6,C_retrieve2(lf[13],"main#\052default-sources\052"));}}

/* f_3461 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3461,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k3092 */
static void C_fcall f_3093(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_truep(((C_word*)t0)[2])?C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
/* chicken-install.scm:256: scan */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3045(t4,((C_word*)t0)[5],((C_word*)t0)[6],t1,t3);}
else{
t3=((C_word*)t0)[3];
/* chicken-install.scm:256: scan */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3045(t4,((C_word*)t0)[5],((C_word*)t0)[6],t1,t3);}}

/* f_3291 in loop in k3255 in k3245 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3291,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?C_a_i_cons(&a,2,t2,((C_word*)t0)[2]):((C_word*)t0)[2]);
if(C_truep(t3)){
t5=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* chicken-install.scm:301: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3262(t6,t1,((C_word*)t0)[5],t4,t5);}
else{
t5=((C_word*)t0)[3];
/* chicken-install.scm:301: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3262(t6,t1,((C_word*)t0)[5],t4,t5);}}

/* k3489 */
static void C_ccall f_3490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:349: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f_3495 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
/* chicken-install.scm:346: print */
t2=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,lf[70],lf[71],lf[72]);}

/* k4317 in k4290 in loop in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:510: fail */
t2=((C_word*)t0)[2];
f_4239(t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_3487 in trying-sources in k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3490,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3495,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:344: with-output-to-port */
t4=C_fast_retrieve(lf[73]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,*((C_word*)lf[74]+1),t3);}

/* k5431 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5432,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[89]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5439,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5439(t6,((C_word*)t0)[3],t1);}

/* k5429 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* chicken-install.scm:710: pp */
t3=C_fast_retrieve(lf[249]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* for-each-loop1469 in k5431 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_5439(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5439,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5448,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:707: g1470 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3681 in k3936 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3682,2,t0,t1);}
t2=C_i_assq(t1,C_retrieve2(lf[34],"main#\052override\052"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3688,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:396: g667 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],t2);}
else{
t3=C_i_pairp(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
f_3939(2,t4,(C_truep(t3)?C_u_i_cdr(((C_word*)t0)[2]):C_SCHEME_FALSE));}}

/* f_3688 in k3681 in k3936 */
static void C_ccall f_3688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3688,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3691,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3697,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t5=C_i_cadr(t2);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_i_equalp(t5,t6);
t8=t4;
f_3697(t8,C_i_not(t7));}
else{
t5=t4;
f_3697(t5,C_SCHEME_FALSE);}}

/* f_3066 in scan in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3066,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:253: check-dependency */
f_3007(t1,t2);}

/* f_5222 */
static void C_ccall f_5222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5231,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5234,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:661: irregex-match-substring */
t4=C_fast_retrieve(lf[212]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],C_fix(1));}

/* k4334 in k4290 in loop in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* chicken-install.scm:512: fail */
t2=((C_word*)t0)[3];
f_4239(t2,((C_word*)t0)[2]);}}

/* k3669 */
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3670,2,t0,t1);}
t2=C_i_assq(t1,C_retrieve2(lf[34],"main#\052override\052"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:378: g635 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],t2);}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_car(t6);
/* chicken-install.scm:389: extension-information */
t8=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}}

/* loop in k3255 in k3245 */
static void C_fcall f_3262(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_save_and_reclaim((void*)trf_3262,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3275,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:297: reverse */
t6=*((C_word*)lf[144]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_i_car(t2);
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3286,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3291,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:298: ##sys#call-with-values */
C_call_with_values(4,0,t1,t8,t9);}}

/* k3953 in k3951 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3954,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));
t4=C_mutate(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t3);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3951 */
static void C_ccall f_3952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:447: print */
t3=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[132],((C_word*)t0)[2],lf[133],((C_word*)t0)[3]);}

/* k2394 in k2391 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2395,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:116: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[332],t2);}

/* k2391 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:116: open-output-string */
t3=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2396 in k2394 in k2391 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:116: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix((C_word)C_BINARY_VERSION),((C_word*)t0)[5]);}

/* k5257 in for-each-loop1263 */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5249(t3,((C_word*)t0)[4],t2);}

/* main#$system in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_5459(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5459,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5463,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5476,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))){
/* chicken-install.scm:716: string-append */
t5=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[206],t2,lf[207]);}
else{
t5=t2;
/* chicken-install.scm:714: system */
t6=C_fast_retrieve(lf[205]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}}

/* f_3949 in k3938 in k3936 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3949,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_not(t2);
if(C_truep(t5)){
if(C_truep(t5)){
/* chicken-install.scm:446: error */
t6=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,lf[134]);}
else{
t6=t4;
f_3952(2,t6,C_SCHEME_UNDEFINED);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3975,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:445: directory */
t7=C_fast_retrieve(lf[135]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}

/* f_3944 in k3938 in k3936 */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3944,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3547,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:362: with-default-sources */
f_3466(t2,t5);}

/* k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2368,2,t0,t1);}
t2=C_mutate(&lf[29] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate(&lf[30] /* (set! main#*host-extension* ...) */,C_retrieve2(lf[29],"main#\052cross-chicken\052"));
t4=C_mutate(&lf[31] /* (set! main#*target-extension* ...) */,C_retrieve2(lf[29],"main#\052cross-chicken\052"));
t5=lf[32] /* main#*debug-setup* */ =C_SCHEME_FALSE;;
t6=lf[33] /* main#*keep-going* */ =C_SCHEME_FALSE;;
t7=lf[34] /* main#*override* */ =C_SCHEME_END_OF_LIST;;
t8=lf[35] /* main#*reinstall* */ =C_SCHEME_FALSE;;
t9=lf[36] /* main#*show-depends* */ =C_SCHEME_FALSE;;
t10=lf[37] /* main#*show-foreign-depends* */ =C_SCHEME_FALSE;;
t11=lf[38] /* main#*hacks* */ =C_SCHEME_END_OF_LIST;;
t12=C_mutate(&lf[39] /* (set! main#get-prefix ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2411,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[41] /* (set! main#resolve-location ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2807,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[42] /* (set! main#deps ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2876,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[43] /* (set! main#ext-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2939,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[53] /* (set! main#check-dependency ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3007,tmp=(C_word)a,a+=2,tmp));
t17=lf[63] /* main#*eggs+dirs+vers* */ =C_SCHEME_END_OF_LIST;;
t18=lf[64] /* main#*dependencies* */ =C_SCHEME_END_OF_LIST;;
t19=lf[65] /* main#*checked* */ =C_SCHEME_END_OF_LIST;;
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3334,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6735,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6738,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t23=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_CSI_PROGRAM),C_fix(0));}

/* f_5241 */
static void C_ccall f_5241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5241,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* for-each-loop1263 */
static void C_fcall f_5249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5249,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5258,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:653: g1264 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5447 in for-each-loop1469 in k5431 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5439(t3,((C_word*)t0)[4],t2);}

/* k6734 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_6735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:310: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[280]))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],t1);}

/* k3690 */
static void C_ccall f_3691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_cadr(((C_word*)t0)[3]));}

/* k3695 */
static void C_fcall f_3697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3697,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:402: open-output-string */
t3=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* chicken-install.scm:406: print */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[142],((C_word*)t0)[5]);}}

/* k6737 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_6738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:310: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[4],"main#\052program-path\052"),t1);}

/* f_3074 in scan in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_3074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_3074,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_not(t3));
if(C_truep(t5)){
/* chicken-install.scm:255: values */
C_values(4,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(((C_word*)t0)[2]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3093,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t8=((C_word*)t0)[5];
t9=t7;
f_3093(t9,(C_truep(t8)?((C_word*)t0)[5]:t2));}
else{
t8=t7;
f_3093(t8,((C_word*)t0)[5]);}}}

/* k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_fcall f_3473(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3473,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3475(t5,((C_word*)t0)[3],t1);}

/* trying-sources in k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3475,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3487,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:342: proc */
t4=((C_word*)t0)[2];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,t3);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3502,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=C_i_assq(lf[79],t3);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3536,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t7=C_i_cadr(t5);
/* chicken-install.scm:351: resolve-location */
f_2807(t4,t7);}
else{
/* chicken-install.scm:353: error */
t7=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,lf[80],t3);}}}

/* k5043 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5046,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:665: sort */
t3=C_fast_retrieve(lf[229]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* f_5046 in k5043 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5046,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5052,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-install.scm:677: symbol->string */
t6=*((C_word*)lf[195]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k3877 in for-each-loop718 in k3775 in k3773 in k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in ... */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3869(t3,((C_word*)t0)[4],t2);}

/* f_6713 */
static void C_ccall f_6713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6716,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6722,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1043: command-line-arguments */
t4=C_fast_retrieve(lf[412]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6138 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:936: string->symbol */
t4=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* for-each-loop280 in k2775 in k2460 in k2447 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2781,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2790,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:132: g281 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_3912(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3912,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3916,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:433: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[192]);}

/* f_3917 in k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3917,3,t0,t1,t2);}
t3=C_i_assoc(t2,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3924,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:435: g789 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3937,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t5=t2;
t6=t4;
f_3937(t6,C_u_i_car(t5));}
else{
t5=t4;
f_3937(t5,t2);}}}

/* k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3917,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[89]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3984,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4215,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4215(t9,t5,t3);}

/* k6308 in k6305 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[34] /* (set! main#*override* ...) */,t1);
t3=C_i_cddr(((C_word*)t0)[2]);
/* chicken-install.scm:969: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5634(t4,((C_word*)t0)[4],t3,((C_word*)((C_word*)t0)[5])[1]);}

/* k6715 */
static void C_ccall f_6716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:1044: cleanup */
f_4960(((C_word*)t0)[2]);}

/* k5210 in k5208 in k5206 in k5204 */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5212,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:660: get-output-string */
t3=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* f_5217 */
static void C_ccall f_5217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:655: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k5213 in k5210 in k5208 in k5206 in k5204 */
static void C_ccall f_5215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:658: print-error-message */
t2=C_fast_retrieve(lf[111]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],*((C_word*)lf[74]+1),t1);}

/* f_5418 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5418(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5418,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5430,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:710: cadadr */
t5=*((C_word*)lf[250]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6699 in k6697 in k6695 */
static void C_ccall f_6700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve2(lf[21],"main#\052running-test\052"))){
/* chicken-install.scm:1042: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(2));}
else{
/* chicken-install.scm:1042: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}}

/* f_6708 */
static void C_ccall f_6708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6713,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1037: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k5206 in k5204 */
static void C_ccall f_5207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:660: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* k5204 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5205,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:660: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[239],t2);}

/* k6109 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:931: setup-proxy */
f_5575(t2,t3);}

/* k5208 in k5206 in k5204 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[137]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[5]);}

/* k6305 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:968: read-file */
t4=C_fast_retrieve(lf[329]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k6111 in k6109 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
/* chicken-install.scm:932: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5634(t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[5])[1]);}

/* f_5401 */
static void C_ccall f_5401(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5401,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* chicken-install.scm:697: find */
t5=C_fast_retrieve(lf[201]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_5406 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5406,3,t0,t1,t2);}
/* chicken-install.scm:697: g1431 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5317(4,t3,t1,((C_word*)t0)[3],t2);}

/* f_2577 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2577,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(lf[342],t2));}

/* k3974 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_nullp(t1))){
/* chicken-install.scm:446: error */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[134]);}
else{
t2=((C_word*)t0)[2];
f_3952(2,t2,C_SCHEME_UNDEFINED);}}

/* f_5012 */
static void C_ccall f_5012(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5012,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5015,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:681: write */
t4=*((C_word*)lf[226]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_5010 in k4994 in k4992 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5010,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5012,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5023,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5023(t7,t1,t3);}

/* k5014 */
static void C_ccall f_5015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:681: newline */
t2=*((C_word*)lf[222]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k5230 */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5231,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[240],t1);
/* chicken-install.scm:661: eval */
t3=C_fast_retrieve(lf[241]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k5233 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:661: string->symbol */
t2=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_5236 */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5236r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5236r(t0,t1,t2);}}

static void C_ccall f_5236r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5241,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:655: k1275 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* map-loop319 in k2465 */
static void C_fcall f_2589(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2589,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:155: g325 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2585 in k2465 */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:153: append */
t2=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[22],"main#\052mappings\052"),t1);}

/* k5007 in k4996 in k4994 in k4992 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:682: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[0],"main#constant191"));}

/* k5004 in k4996 in k4994 in k4992 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:682: setup-api#copy-file */
((C_proc4)C_fast_retrieve_symbol_proc(lf[224]))(4,*((C_word*)lf[224]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6169 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:941: string->symbol */
t4=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k3534 in trying-sources in k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(t1);
/* chicken-install.scm:351: resolve-location */
f_2807(((C_word*)t0)[2],t2);}

/* k5031 in for-each-loop1384 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5023(t3,((C_word*)t0)[4],t2);}

/* main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_3763(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3763,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3767,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:412: print */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[104]);}

/* k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_3769(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3769,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[86]:C_i_car(t2));
t5=*((C_word*)lf[87]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3774,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(t4,lf[86]);
if(C_truep(t7)){
/* chicken-install.scm:414: display */
t8=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[100],*((C_word*)lf[87]+1));}
else{
t8=C_eqp(t4,lf[101]);
if(C_truep(t8)){
/* chicken-install.scm:414: display */
t9=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,lf[102],t5);}
else{
t9=C_SCHEME_UNDEFINED;
/* chicken-install.scm:414: display */
t10=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t6,t9,t5);}}}

/* k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:413: retrieve */
f_3912(t2,((C_word*)t0)[4]);}

/* f_3566 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3566,4,t0,t1,t2,t3);}
if(C_truep(t2)){
/* chicken-install.scm:368: values */
C_values(4,0,t1,t2,t3);}
else{
/* chicken-install.scm:369: next */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}}

/* f_3561 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3561,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:312: call-with-current-continuation */
t7=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k2789 in for-each-loop280 in k2775 in k2460 in k2447 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2781(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1384 */
static void C_fcall f_5023(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5023,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5032,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:680: g1385 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6151 in k6138 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6152,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[25],"main#\052csc-features\052"));
t3=C_mutate(&lf[25] /* (set! main#*csc-features* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:937: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5634(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k6020 in k6013 in k5999 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:911: normalize-pathname */
t2=C_fast_retrieve(lf[289]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6023 in k6013 in k5999 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:912: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2775 in k2460 in k2447 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2776,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2781,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2781(t5,((C_word*)t0)[3],t1);}

/* f_3547 */
static void C_ccall f_3547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3547,5,t0,t1,t2,t3,t4);}
t5=t2;
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3561,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:366: ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}
else{
/* chicken-install.scm:365: values */
C_values(4,0,t1,C_SCHEME_FALSE,lf[131]);}}

/* f_6724 */
static void C_ccall f_6724(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6724r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6724r(t0,t1,t2);}}

static void C_ccall f_6724r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6729,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1037: k1784 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k6721 */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6722,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5627,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:823: irregex */
t9=C_fast_retrieve(lf[244]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[411]);}

/* k6182 in k6169 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6183,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[26],"main#\052csc-nonfeatures\052"));
t3=C_mutate(&lf[26] /* (set! main#*csc-nonfeatures* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:942: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5634(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* f_5172 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[238]));
t3=C_mutate((C_word*)lf[238]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_6729 */
static void C_ccall f_6729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6729,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k6013 in k5999 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6015,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6006(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6024,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:912: current-directory */
t4=C_fast_retrieve(lf[82]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop1438 */
static void C_fcall f_5365(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5365,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5390,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:699: g1444 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5166 in map-loop1327 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5167,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5142(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5142(t6,((C_word*)t0)[5],t5);}}

/* k2706 in k2465 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[34] /* (set! main#*override* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5999 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6000,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6015,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:909: absolute-pathname? */
t5=C_fast_retrieve(lf[84]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5183 in k5181 */
static void C_ccall f_5184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:655: g1279 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5181 */
static void C_ccall f_5182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5184,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5189,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:655: call-with-current-continuation */
t4=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k2911 */
static void C_ccall f_2912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:215: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[280]))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],t1);}

/* f_5177 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5179,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5249,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5249(t7,t1,t3);}

/* k3719 in k3716 in k3714 in k3712 in k3710 in k3708 in k3706 in k3704 in k3702 in k3695 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:401: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_5179 */
static void C_ccall f_5179(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5179,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5182,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:656: irregex-match */
t4=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* for-each-loop432 in k2898 in k2894 in k6086 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_2919(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2919,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2928,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:213: g433 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6391 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(&lf[66] /* (set! main#*csi* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:988: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5634(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k3522 in k3501 in trying-sources in k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in ... */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3504(t2,C_i_cadr(t1));}

/* f_6596 in k6591 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6596(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6596,3,t0,t1,t2);}
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1030: irregex-match-substring */
t5=C_fast_retrieve(lf[212]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(1));}

/* f_5194 */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5194,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5199,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:655: k1275 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3716 in k3714 in k3712 in k3710 in k3708 in k3706 in k3704 in k3702 in k3695 */
static void C_ccall f_3718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3721,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:402: get-output-string */
t3=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3714 in k3712 in k3710 in k3708 in k3706 in k3704 in k3702 in k3695 */
static void C_ccall f_3715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[137]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[4]);}

/* k3712 in k3710 in k3708 in k3706 in k3704 in k3702 in k3695 */
static void C_ccall f_3713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[5]);
/* chicken-install.scm:402: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k3710 in k3708 in k3706 in k3704 in k3702 in k3695 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:402: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[138],((C_word*)t0)[4]);}

/* k6591 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6592,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:877: g1779 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1]);
/* chicken-install.scm:1033: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5634(t5,((C_word*)t0)[5],t3,t4);}}

/* f_5189 in k5181 */
static void C_ccall f_5189(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5189,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5217,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:655: with-exception-handler */
t5=C_fast_retrieve(lf[129]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k6004 in k5999 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate(&lf[27] /* (set! main#*prefix* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-install.scm:913: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_5634(t6,((C_word*)t0)[4],t5,((C_word*)((C_word*)t0)[5])[1]);}

/* k2927 in for-each-loop432 in k2898 in k2894 in k6086 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2919(t3,((C_word*)t0)[4],t2);}

/* k6586 in k6579 in k6571 in k6553 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:1020: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k6062 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:920: print */
t2=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3708 in k3706 in k3704 in k3702 in k3695 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:402: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[4]);}

/* k3704 in k3702 in k3695 */
static void C_ccall f_3705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
/* chicken-install.scm:402: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k5389 in map-loop1438 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5390,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5365(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5365(t6,((C_word*)t0)[5],t5);}}

/* k3706 in k3704 in k3702 in k3695 */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:402: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[139],((C_word*)t0)[4]);}

/* k6579 in k6571 in k6553 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6581,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
f_6569(t3,C_a_i_list2(&a,2,t2,lf[405]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6587,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:1020: current-directory */
t3=C_fast_retrieve(lf[82]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_5199 */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5205,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:660: open-output-string */
t3=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3702 in k3695 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3703,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:402: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[140],t2);}

/* f_3509 in k3503 in k3501 in trying-sources in k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in ... */
static void C_ccall f_3509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:200: delete */
t3=C_fast_retrieve(lf[75]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],C_retrieve2(lf[13],"main#\052default-sources\052"),*((C_word*)lf[76]+1));}

/* k2978 in main#ext-version in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_member(t1,C_fast_retrieve(lf[51]));
t3=((C_word*)t0)[2];
f_2948(t3,(C_truep(t2)?t2:C_i_member(t1,C_fast_retrieve(lf[52]))));}

/* k3503 in k3501 in trying-sources in k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in ... */
static void C_fcall f_3504(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3504,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:356: proc */
t3=((C_word*)t0)[5];
((C_proc5)C_fast_retrieve_proc(t3))(5,t3,((C_word*)t0)[6],t1,((C_word*)t0)[7],t2);}

/* k3501 in trying-sources in k3472 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=C_i_assq(lf[77],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=t2;
f_3504(t5,C_i_cadr(t3));}
else{
/* chicken-install.scm:355: error */
t5=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[78],((C_word*)t0)[4]);}}

/* k2502 in k2500 in k2498 in k2496 in k2494 in k2465 */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[137]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[5]);}

/* k2500 in k2498 in k2496 in k2494 in k2465 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:141: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[5]);}

/* k2737 in k2465 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[38] /* (set! main#*hacks* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6573 in k6571 in k6553 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6575,2,t0,t1);}
t2=((C_word*)t0)[2];
f_6569(t2,C_a_i_list2(&a,2,t1,lf[405]));}

/* k2507 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2465 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:140: error */
t3=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t1,t2);}

/* f_2900 in k2898 in k2894 in k6086 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2900,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2906,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2912,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:215: make-pathname */
t5=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],t2);}

/* k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2465 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:141: get-output-string */
t3=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k6571 in k6553 in k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6581,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:1018: absolute-pathname? */
t4=C_fast_retrieve(lf[84]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}
else{
/* chicken-install.scm:1021: current-directory */
t3=C_fast_retrieve(lf[82]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2908 in k2905 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
/* chicken-install.scm:215: command */
f_5555(((C_word*)t0)[2],lf[375],C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k2905 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2906,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:215: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[280]))(3,*((C_word*)lf[280]+1),t2,((C_word*)t0)[4]);}

/* f_2550 in k2465 */
static void C_ccall f_2550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2550,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2553,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2577,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:156: list-index */
t5=C_fast_retrieve(lf[343]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* k2552 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_2555(2,t3,C_SCHEME_UNDEFINED);}
else{
/* chicken-install.scm:157: broken */
t3=((C_word*)t0)[4];
f_2450(t3,t2,((C_word*)t0)[5]);}}

/* k2554 in k2552 */
static void C_ccall f_2555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2565,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:158: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* f_3436 */
static void C_ccall f_3436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3442,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
/* chicken-install.scm:317: current-directory */
t3=C_fast_retrieve(lf[82]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_3442(2,t3,C_SCHEME_FALSE);}}

/* k2952 in k2946 in main#ext-version in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2953,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2957,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:218: g466 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6056 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:921: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k2709 in k2465 */
static void C_fcall f_2711(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:173: read-file */
t3=C_fast_retrieve(lf[329]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_mutate(&lf[34] /* (set! main#*override* ...) */,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_2957 in k2952 in k2946 in main#ext-version in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2957,3,t0,t1,t2);}
t3=C_i_assq(lf[46],t2);
if(C_truep(t3)){
t4=C_i_cadr(t3);
/* chicken-install.scm:229: ->string */
t5=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[48]);}}

/* f_2560 in k2554 in k2552 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2560,2,t0,t1);}
/* chicken-install.scm:158: split-at */
t2=C_fast_retrieve(lf[341]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_2565 in k2554 in k2552 */
static void C_ccall f_2565(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2565,4,t0,t1,t2,t3);}
t4=C_i_cdr(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,t2,t4));}

/* k3441 */
static void C_ccall f_3442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_retrieve2(lf[9],"main#\052retrieve-only\052");
t3=(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[5],"main#\052keep\052")));
/* chicken-install.scm:314: setup-download#retrieve-extension */
((C_proc25)C_fast_retrieve_symbol_proc(lf[118]))(25,*((C_word*)lf[118]+1),((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],lf[119],((C_word*)t0)[6],lf[120],t1,lf[121],C_retrieve2(lf[8],"main#\052run-tests\052"),lf[122],C_retrieve2(lf[11],"main#\052username\052"),lf[123],C_retrieve2(lf[12],"main#\052password\052"),lf[124],C_retrieve2(lf[24],"main#\052trunk\052"),lf[125],C_retrieve2(lf[18],"main#\052proxy-host\052"),lf[126],C_retrieve2(lf[19],"main#\052proxy-port\052"),lf[127],C_retrieve2(lf[20],"main#\052proxy-user-pass\052"),lf[128],t3);}

/* k2531 in k2465 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[13] /* (set! main#*default-sources* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_3456 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3456r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3456r(t0,t1,t2);}}

static void C_ccall f_3456r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3461,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:312: k568 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k2546 in k2465 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[22] /* (set! main#*mappings* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2946 in main#ext-version in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_2948(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2948,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken-install.scm:224: chicken-version */
t2=C_fast_retrieve(lf[45]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:225: extension-information */
t3=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k4376 */
static void C_fcall f_4377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4377,NULL,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[32],"main#\052debug-setup\052"))?lf[266]:lf[267]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:528: open-output-string */
t4=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4160 in map-loop840 in k4128 in k4030 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4161,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4136(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4136(t6,((C_word*)t0)[5],t5);}}

/* k6522 in map-loop1743 in k6475 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6523(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6523,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6498(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6498(t6,((C_word*)t0)[5],t5);}}

/* k4382 in k4376 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4383,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* chicken-install.scm:528: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[299],t2);}

/* k4384 in k4382 in k4376 */
static void C_ccall f_4385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* chicken-install.scm:528: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[8]);}

/* k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-install.scm:528: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[298],((C_word*)t0)[8]);}

/* k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_caddr(((C_word*)t0)[6]);
/* chicken-install.scm:528: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[8]);}

/* k4175 in k4004 in k3999 */
static void C_ccall f_4176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:491: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6086 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2895,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:208: repository-path */
t5=C_fast_retrieve(lf[225]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4397,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:528: get-output-string */
t3=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:530: setup-api#sudo-install */
((C_proc2)C_fast_retrieve_symbol_proc(lf[296]))(2,*((C_word*)lf[296]+1),t2);}

/* k6088 in k6086 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:928: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k2455 in k2447 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5664(t2,C_i_pairp(C_retrieve2(lf[13],"main#\052default-sources\052")));}

/* broken in k2447 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_2450(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2450,NULL,3,t0,t1,t2);}
/* chicken-install.scm:129: error */
t3=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[337],((C_word*)t0)[2],t2);}

/* k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:528: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[297],((C_word*)t0)[8]);}

/* k2447 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2450,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2462,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:130: file-exists? */
t5=C_fast_retrieve(lf[95]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}

/* f_3431 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:312: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* for-each-loop814 in k3982 in k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4195,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4204,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:451: g815 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3847 in k3780 */
static void C_ccall f_3849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:421: with-input-from-file */
t2=C_fast_retrieve(lf[93]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],*((C_word*)lf[94]+1));}
else{
t2=((C_word*)t0)[2];
f_3783(2,t2,C_SCHEME_FALSE);}}

/* k4965 in main#cleanup in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_4966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:645: setup-api#remove-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[193]))(3,*((C_word*)lf[193]+1),((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* main#cleanup in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_4960(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4960,NULL,1,t1);}
if(C_truep(C_retrieve2(lf[5],"main#\052keep\052"))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4966,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:644: setup-download#temporary-directory */
((C_proc2)C_fast_retrieve_symbol_proc(lf[194]))(2,*((C_word*)lf[194]+1),t2);}}

/* k2401 in k2398 in k2396 in k2394 in k2391 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:116: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2398 in k2396 in k2394 in k2391 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:116: get-output-string */
t3=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* f_4774 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4774,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[23],"main#\052deploy\052"));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[27],"main#\052prefix\052"));
t4=C_mutate(&lf[23] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(&lf[27] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4980,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:649: create-temporary-directory */
t3=C_fast_retrieve(lf[246]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* main#get-prefix in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_2411(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2411,NULL,2,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[30],"main#\052host-extension\052")):C_SCHEME_FALSE);
if(C_truep(t5)){
if(C_truep(t4)){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,C_mpointer(&a,(void*)C_TARGET_PREFIX),C_fix(0));}
else{
t6=C_retrieve2(lf[27],"main#\052prefix\052");
if(C_truep(C_retrieve2(lf[27],"main#\052prefix\052"))){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_retrieve2(lf[27],"main#\052prefix\052"));}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,C_mpointer(&a,(void*)C_TARGET_PREFIX),C_fix(0));}}}
else{
t6=C_retrieve2(lf[27],"main#\052prefix\052");
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_retrieve2(lf[27],"main#\052prefix\052"));}}

/* k4783 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4784,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))?lf[304]:lf[305]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:607: make-pathname */
t4=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[307]);}

/* k4580 in k4576 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[33],"main#\052keep-going\052"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4683,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:616: call-with-current-continuation */
t6=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-install.scm:616: tmp1108 */
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4582 in k4580 in k4576 */
static void C_ccall f_4582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4582,2,t0,t1);}
/* chicken-install.scm:618: $system */
f_5459(t1,((C_word*)t0)[2]);}

/* k4586 in k4580 in k4576 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[8],"main#\052run-tests\052"))){
t3=((C_word*)t0)[5];
if(C_truep(t3)){
t4=t2;
f_4594(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4667,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:621: file-exists? */
t5=C_fast_retrieve(lf[95]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[263]);}}
else{
t3=t2;
f_4594(2,t3,C_SCHEME_FALSE);}}

/* k4792 in k4783 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4793,2,t0,t1);}
/* chicken-install.scm:604: command */
f_5555(((C_word*)t0)[2],lf[306],C_a_i_list(&a,3,((C_word*)t0)[3],t1,((C_word*)t0)[4]));}

/* k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:650: make-pathname */
t3=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_retrieve2(lf[0],"main#constant191"));}

/* k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:651: irregex */
t3=C_fast_retrieve(lf[244]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[245]);}

/* k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:652: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[243]);}

/* k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4986(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4986,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5172,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5177,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5269,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:653: ##sys#dynamic-wind */
t10=*((C_word*)lf[242]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4991,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:663: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[237]);}

/* map-loop1606 in k5788 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_5815(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5815,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:850: g1612 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5811 in k5788 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:849: append */
t2=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));}

/* k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5044,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5063,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:666: append-map */
t5=C_fast_retrieve(lf[202]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_fast_retrieve(lf[236]));}

/* k4992 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:678: newline */
t3=*((C_word*)lf[222]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4994 in k4992 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5010,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:679: with-output-to-file */
t4=C_fast_retrieve(lf[227]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}

/* k4996 in k4994 in k4992 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5005,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5008,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:682: repository-path */
t5=C_fast_retrieve(lf[225]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5603 in k5595 */
static void C_ccall f_5604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5604,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_mutate(&lf[19] /* (set! main#*proxy-port* ...) */,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4998 in k4996 in k4994 in k4992 in k4990 in k4987 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:683: setup-api#remove-directory */
((C_proc3)C_fast_retrieve_symbol_proc(lf[193]))(3,*((C_word*)lf[193]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5806 */
static void C_ccall f_5807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5807,2,t0,t1);}
t2=C_a_i_list2(&a,2,lf[333],lf[334]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* f_5801 in k5788 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5801(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5801,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5807,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:852: pathname-file */
t4=C_fast_retrieve(lf[328]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* main#info->egg in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_5609(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5609,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[218]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[219]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[220]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t4=t2;
t5=C_u_i_car(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4576 */
static void C_ccall f_4577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4577,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4581,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:615: print */
t4=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[265],t1);}

/* f_4574 in k4560 */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_greaterp(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)t0)[2];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4377,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_retrieve2(lf[23],"main#\052deploy\052");
if(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))){
t7=C_retrieve2(lf[23],"main#\052deploy\052");
t8=t5;
f_4377(t8,(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?lf[300]:lf[301]));}
else{
if(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))){
t7=C_retrieve2(lf[30],"main#\052host-extension\052");
t8=t5;
f_4377(t8,(C_truep(C_retrieve2(lf[30],"main#\052host-extension\052"))?lf[301]:lf[300]));}
else{
t7=t5;
f_4377(t7,lf[301]);}}}

/* k4935 in map-loop1202 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4936(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4936,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4911(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4911(t6,((C_word*)t0)[5],t5);}}

/* k5626 in k6721 */
static void C_ccall f_5627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6669,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:824: get-environment-variable */
t4=C_fast_retrieve(lf[215]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[410]);}

/* k4944 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4531(t3,t2);}

/* f_4948 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4948(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4948,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
/* chicken-install.scm:572: extension-information */
t5=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t3=t2;
/* chicken-install.scm:572: extension-information */
t4=C_fast_retrieve(lf[49]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k4941 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:576: reverse */
t2=*((C_word*)lf[144]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5628 in k5626 in k6721 */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5629,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5634(t5,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* f_4598 in k4596 in k4592 in k4586 in k4580 in k4576 */
static void C_ccall f_4598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4598,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
/* chicken-install.scm:628: command */
f_5555(t1,lf[254],C_a_i_list(&a,3,C_retrieve2(lf[66],"main#\052csi\052"),((C_word*)t0)[3],t2));}

/* k4596 in k4592 in k4586 in k4580 in k4576 */
static void C_ccall f_4597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4607,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[33],"main#\052keep-going\052"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4610,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4615,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:626: call-with-current-continuation */
t6=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-install.scm:626: tmp1135 */
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4592 in k4586 in k4580 in k4576 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4594,2,t0,t1);}
if(C_truep(t1)){
t2=lf[21] /* main#*running-test* */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:625: current-directory */
t4=C_fast_retrieve(lf[82]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[259]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4566 in k4564 */
static void C_ccall f_4567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4560 */
static void C_ccall f_4561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)tr2,(void*)f_4561,2,t0,t1);}
t2=C_fast_retrieve(lf[82]);
t3=((C_word*)t0)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4562,a[2]=t4,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:612: ##sys#dynamic-wind */
t9=*((C_word*)lf[242]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[6],t7,t8,t7);}

/* k4564 */
static void C_ccall f_4565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4567,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:612: current-directory10941095 */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}

/* f_4562 in k4560 */
static void C_ccall f_4562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:612: current-directory10941095 */
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4538,2,t0,t1);}
t2=t1;
t3=C_u_i_length(t2);
t4=C_retrieve2(lf[7],"main#\052force\052");
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4541,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:579: print */
t6=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[316]);}

/* k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_4531(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4531,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:574: retrieve */
f_3912(t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4533,2,t0,t1);}
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4942,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:576: topological-sort */
t4=C_fast_retrieve(lf[317]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[64],"main#\052dependencies\052"),*((C_word*)lf[318]+1));}}

/* f_4707 */
static void C_ccall f_4707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4707,2,t0,t1);}
/* chicken-install.scm:616: tmp1108 */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* f_4702 */
static void C_ccall f_4702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4707,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:616: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k4699 in k4697 in k4695 */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k4500 in k4489 in k4487 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:536: display */
t2=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3199 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:288: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* f_4717 */
static void C_ccall f_4717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4717,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_4712 */
static void C_ccall f_4712(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4712r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4712r(t0,t1,t2);}}

static void C_ccall f_4712r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4717,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:616: k1118 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3021 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:241: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* f_4558 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4558(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4558,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4561,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:611: print */
t4=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[302],t2);}

/* k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4728,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[31],"main#\052target-extension\052"))?C_retrieve2(lf[30],"main#\052host-extension\052"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4762,a[2]=t10,a[3]=t12,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4769,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4774,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t12,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:631: ##sys#dynamic-wind */
t16=*((C_word*)lf[242]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t3,t13,t14,t15);}
else{
/* chicken-install.scm:634: setup */
t5=t2;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,((C_word*)t0)[7]);}}

/* k4550 in k4548 in k4546 */
static void C_ccall f_4551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[31],"main#\052target-extension\052"))){
if(C_truep(C_retrieve2(lf[30],"main#\052host-extension\052"))){
/* chicken-install.scm:600: create-temporary-directory */
t3=C_fast_retrieve(lf[246]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_4553(2,t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_4553(2,t3,C_SCHEME_FALSE);}}

/* k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4553,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4784,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:603: print */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[308]);}
else{
t4=t3;
f_4557(2,t4,C_SCHEME_UNDEFINED);}}

/* k4727 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4728,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[31],"main#\052target-extension\052"))?C_retrieve2(lf[30],"main#\052host-extension\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:636: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[303]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* main#setup-proxy in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_5575(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5575,NULL,2,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5586,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:803: get-environment-variable */
t4=C_fast_retrieve(lf[215]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[216]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3023 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:241: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
/* chicken-install.scm:243: ->string */
t2=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k5776 in k5773 in k5771 in k5769 in k5767 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:838: yes-or-no? */
t2=C_fast_retrieve(lf[154]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[156],C_SCHEME_FALSE);}

/* k4735 in k4727 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4736,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4741,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4751,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:637: ##sys#dynamic-wind */
t9=*((C_word*)lf[242]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[4],t6,t7,t8);}

/* k5584 in main#setup-proxy in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5586,2,t0,t1);}
t2=C_mutate(&lf[20] /* (set! main#*proxy-user-pass* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: irregex-match */
t4=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[214],((C_word*)t0)[3]);}

/* k5773 in k5771 in k5769 in k5767 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:839: get-output-string */
t3=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5771 in k5769 in k5767 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:839: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[322],((C_word*)t0)[4]);}

/* k5769 in k5767 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_length(((C_word*)t0)[5]);
/* chicken-install.scm:839: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* f_4746 in k4735 in k4727 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4746,2,t0,t1);}
/* chicken-install.scm:638: setup */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* f_4741 in k4735 in k4727 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4741,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[30],"main#\052host-extension\052"));
t3=C_mutate(&lf[30] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_5592 in k5587 in k5584 in main#setup-proxy in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_5592(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5592,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5597,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:806: irregex-match-substring */
t4=C_fast_retrieve(lf[212]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(1));}

/* k5587 in k5584 in main#setup-proxy in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_5588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5588,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5592,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:804: g1527 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* f_3247 in k3245 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3247,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3252,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:293: h */
t4=t2;
((C_proc4)C_fast_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k3245 */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3246,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3247,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve2(lf[38],"main#\052hacks\052");
t5=C_i_check_list_2(C_retrieve2(lf[38],"main#\052hacks\052"),lf[89]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3309,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3309(t10,t6,C_retrieve2(lf[38],"main#\052hacks\052"));}

/* scan in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_fcall f_3045(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3045,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(t4)){
/* chicken-install.scm:248: values */
C_values(4,0,t1,C_SCHEME_FALSE,t4);}
else{
if(C_truep(t3)){
t5=t3;
/* chicken-install.scm:248: values */
C_values(4,0,t1,t5,t4);}
else{
/* chicken-install.scm:248: values */
C_values(4,0,t1,C_SCHEME_FALSE,t4);}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3066,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3074,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:253: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* k5797 in k5788 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t1);
t3=((C_word*)t0)[2];
f_5666(2,t3,t2);}

/* f_4751 in k4735 in k4727 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4751,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[30],"main#\052host-extension\052"));
t3=C_mutate(&lf[30] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5595 */
static void C_ccall f_5597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5597,2,t0,t1);}
t2=C_mutate(&lf[18] /* (set! main#*proxy-host* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:807: irregex-match-substring */
t4=C_fast_retrieve(lf[212]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],C_fix(2));}

/* k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_3037(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3037,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3045(t6,((C_word*)t0)[3],t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=C_eqp(C_fix(2),t4);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_stringp(t6);
if(C_truep(t7)){
t8=t2;
f_3120(t8,t7);}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
t10=t2;
f_3120(t10,C_i_symbolp(t9));}}
else{
t6=t2;
f_3120(t6,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3120(t3,C_SCHEME_FALSE);}}}

/* k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4510,2,t0,t1);}
t2=(C_truep(t1)?lf[268]:lf[269]);
t3=(C_truep(C_retrieve2(lf[5],"main#\052keep\052"))?lf[270]:lf[271]);
t4=(C_truep(C_retrieve2(lf[10],"main#\052no-install\052"))?(C_truep(((C_word*)t0)[2])?lf[272]:lf[273]):lf[272]);
t5=(C_truep(C_retrieve2(lf[30],"main#\052host-extension\052"))?lf[274]:lf[275]);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4412,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t3,a[8]=t4,a[9]=t5,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-install.scm:534: get-prefix */
f_2411(t6,C_SCHEME_END_OF_LIST);}

/* f_4769 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4769,2,t0,t1);}
/* chicken-install.scm:633: setup */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* f_4762 in k4556 in k4552 in k4550 in k4548 in k4546 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4762,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[23],"main#\052deploy\052"));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[27],"main#\052prefix\052"));
t4=C_mutate(&lf[23] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(&lf[27] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k4451 in k4449 in k4447 in k4445 in k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:548: get-output-string */
t2=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* loop in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4259(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4259,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4268,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:504: feature? */
t4=C_fast_retrieve(lf[179]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4292,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=C_eqp(lf[184],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_cdr(t6);
t8=t3;
f_4292(t8,C_i_pairp(t7));}
else{
t6=t3;
f_4292(t6,C_SCHEME_FALSE);}}
else{
t3=C_i_cadr(((C_word*)t0)[4]);
/* chicken-install.scm:506: error */
t4=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[185],((C_word*)t0)[5],t3);}}}

/* k4449 in k4447 in k4445 in k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:548: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[282],((C_word*)t0)[4]);}

/* k3255 in k3245 */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3257,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3262,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3262(t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k5788 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5789(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5789,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5801,tmp=(C_word)a,a+=2,tmp);
t8=t1;
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5813,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5815,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5815(t13,t9,t8);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5845,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:856: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[335]);}}

/* k3250 */
static void C_ccall f_3252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4223 in for-each-loop773 in k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4215(t3,((C_word*)t0)[4],t2);}

/* k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[26],"main#\052csc-nonfeatures\052")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:548: open-output-string */
t4=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_4427(2,t3,lf[284]);}}

/* k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[25],"main#\052csc-features\052")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4461,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:545: open-output-string */
t4=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_4424(2,t3,lf[287]);}}

/* k4426 in k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4427,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?lf[276]:lf[277]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=t2,tmp=(C_word)a,a+=15,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4436,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[13]);
t6=C_u_i_car(((C_word*)t0)[13]);
/* chicken-install.scm:552: make-pathname */
t7=C_fast_retrieve(lf[81]);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,t5,t6,lf[281]);}

/* main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_3007(C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3007,NULL,2,t1,t2);}
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t3:C_i_stringp(t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3025,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:242: ext-version */
f_2939(t6,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3037,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t6=C_i_car(t2);
t7=t5;
f_3037(t7,C_eqp(lf[62],t6));}
else{
t6=t5;
f_3037(t6,C_SCHEME_FALSE);}}}

/* k4435 in k4426 in k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:552: setup-api#shellpath */
((C_proc3)C_fast_retrieve_symbol_proc(lf[280]))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],t1);}

/* k4432 in k4426 in k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:516: conc */
t2=C_fast_retrieve(lf[166]);
((C_proc19)(void*)(*((C_word*)t2+1)))(19,t2,((C_word*)t0)[2],C_retrieve2(lf[66],"main#\052csi\052"),lf[278],((C_word*)t0)[3],lf[279],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13],((C_word*)t0)[14],C_make_character(32),t1);}

/* fail in k4009 in k4007 in k4004 in k3999 */
static void C_fcall f_4239(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4239,NULL,2,t0,t1);}
/* chicken-install.scm:499: error */
t2=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[177],((C_word*)t0)[2]);}

/* k4203 in for-each-loop814 in k3982 in k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in ... */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4195(t3,((C_word*)t0)[4],t2);}

/* for-each-loop773 in k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_fcall f_4215(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4215,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4224,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:434: g774 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4488,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:536: open-output-string */
t4=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_4415(2,t3,lf[295]);}}

/* k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-install.scm:539: get-prefix */
f_2411(t2,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4473,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:541: open-output-string */
t4=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_4421(2,t3,lf[292]);}}

/* f_4639 */
static void C_ccall f_4639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4639,2,t0,t1);}
/* chicken-install.scm:626: tmp1135 */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* k4629 in k4627 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:626: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[255]);}

/* k4631 in k4629 in k4627 */
static void C_ccall f_4632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_4634 */
static void C_ccall f_4634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:626: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k4445 in k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4446,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:548: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[283],t2);}

/* k4447 in k4445 in k4423 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:548: write */
t3=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[26],"main#\052csc-nonfeatures\052"),((C_word*)t0)[4]);}

/* f_4863 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4863,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_assoc(t2,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052")));}

/* map-loop1327 */
static void C_fcall f_5142(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5142,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:673: g1333 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5544 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5544,5,t0,t1,t2,t3,t4);}
if(C_truep(t2)){
/* chicken-install.scm:742: setup-download#list-extensions */
((C_proc16)C_fast_retrieve_symbol_proc(lf[252]))(16,*((C_word*)lf[252]+1),t1,t2,t3,lf[253],C_SCHEME_TRUE,lf[122],C_retrieve2(lf[11],"main#\052username\052"),lf[123],C_retrieve2(lf[12],"main#\052password\052"),lf[125],C_retrieve2(lf[18],"main#\052proxy-host\052"),lf[126],C_retrieve2(lf[19],"main#\052proxy-port\052"),lf[127],C_retrieve2(lf[20],"main#\052proxy-user-pass\052"));}
else{
/* chicken-install.scm:750: next */
t5=t4;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t1);}}

/* k5136 in map-loop1354 in k5095 */
static void C_ccall f_5137(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5137,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5112(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5112(t6,((C_word*)t0)[5],t5);}}

/* k5532 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:735: glob */
t2=C_fast_retrieve(lf[247]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5535 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:735: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[330],lf[331]);}

/* k5529 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:723: filter-map */
t2=C_fast_retrieve(lf[171]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

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
if(!C_demand_2(1618)){
C_save(t1);
C_rereclaim2(1618*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,421);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\016setup.defaults");
lf[16]=C_h_intern(&lf[16],4,"http");
lf[40]=C_h_intern(&lf[40],17,"\003syspeek-c-string");
lf[44]=C_h_intern(&lf[44],7,"chicken");
lf[45]=C_h_intern(&lf[45],15,"chicken-version");
lf[46]=C_h_intern(&lf[46],7,"version");
lf[47]=C_h_intern(&lf[47],8,"->string");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\0050.0.0");
lf[49]=C_h_intern(&lf[49],21,"extension-information");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[51]=C_h_intern(&lf[51],24,"\003syscore-library-modules");
lf[52]=C_h_intern(&lf[52],23,"\003syscore-syntax-modules");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[55]=C_h_intern(&lf[55],5,"error");
lf[56]=C_h_intern(&lf[56],13,"string-append");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000JYour CHICKEN version is not recent enough to use this extension - version ");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\025 or newer is required");
lf[59]=C_h_intern(&lf[59],20,"setup-api#version>=\077");
lf[60]=C_h_intern(&lf[60],7,"warning");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\0007invalid dependency syntax in extension meta information");
lf[62]=C_h_intern(&lf[62],2,"or");
lf[68]=C_h_intern(&lf[68],4,"exit");
lf[69]=C_h_intern(&lf[69],5,"print");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000,Could not determine a source of extensions. ");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000/Please, specify a location and a transport for ");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\011a source.");
lf[73]=C_h_intern(&lf[73],19,"with-output-to-port");
lf[74]=C_h_intern(&lf[74],18,"\003sysstandard-error");
lf[75]=C_h_intern(&lf[75],6,"delete");
lf[76]=C_h_intern(&lf[76],3,"eq\077");
lf[77]=C_h_intern(&lf[77],9,"transport");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\027missing transport entry");
lf[79]=C_h_intern(&lf[79],8,"location");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\026missing location entry");
lf[81]=C_h_intern(&lf[81],13,"make-pathname");
lf[82]=C_h_intern(&lf[82],17,"current-directory");
lf[83]=C_h_intern(&lf[83],5,"local");
lf[84]=C_h_intern(&lf[84],18,"absolute-pathname\077");
lf[86]=C_h_intern(&lf[86],7,"depends");
lf[87]=C_h_intern(&lf[87],19,"\003sysstandard-output");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\001\011");
lf[89]=C_h_intern(&lf[89],8,"for-each");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[91]=C_h_intern(&lf[91],5,"needs");
lf[92]=C_h_intern(&lf[92],6,"append");
lf[93]=C_h_intern(&lf[93],20,"with-input-from-file");
lf[94]=C_h_intern(&lf[94],4,"read");
lf[95]=C_h_intern(&lf[95],12,"file-exists\077");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[98]=C_h_intern(&lf[98],7,"display");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000$ dependencies as reported in .meta:\012");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\003Egg");
lf[101]=C_h_intern(&lf[101],15,"foreign-depends");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\007Foreign");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\034fetching meta information...");
lf[105]=C_h_intern(&lf[105],9,"condition");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\023TCP connect timeout");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\023HTTP protocol error");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[111]=C_h_intern(&lf[111],19,"print-error-message");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\015Server error:");
lf[113]=C_h_intern(&lf[113],5,"abort");
lf[114]=C_h_intern(&lf[114],3,"exn");
lf[115]=C_h_intern(&lf[115],20,"setup-download-error");
lf[116]=C_h_intern(&lf[116],10,"http-fetch");
lf[117]=C_h_intern(&lf[117],3,"net");
lf[118]=C_h_intern(&lf[118],33,"setup-download#retrieve-extension");
lf[119]=C_h_intern(&lf[119],8,"\000version");
lf[120]=C_h_intern(&lf[120],12,"\000destination");
lf[121]=C_h_intern(&lf[121],6,"\000tests");
lf[122]=C_h_intern(&lf[122],9,"\000username");
lf[123]=C_h_intern(&lf[123],9,"\000password");
lf[124]=C_h_intern(&lf[124],6,"\000trunk");
lf[125]=C_h_intern(&lf[125],11,"\000proxy-host");
lf[126]=C_h_intern(&lf[126],11,"\000proxy-port");
lf[127]=C_h_intern(&lf[127],16,"\000proxy-user-pass");
lf[128]=C_h_intern(&lf[128],6,"\000clean");
lf[129]=C_h_intern(&lf[129],22,"with-exception-handler");
lf[130]=C_h_intern(&lf[130],30,"call-with-current-continuation");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\014 located at ");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\036extension or version not found");
lf[135]=C_h_intern(&lf[135],9,"directory");
lf[136]=C_h_intern(&lf[136],17,"get-output-string");
lf[137]=C_h_intern(&lf[137],19,"\003syswrite-char/port");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000&\047 overrides explicitly given version `");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\020\047 of extension `");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\011version `");
lf[141]=C_h_intern(&lf[141],18,"open-output-string");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\014overriding: ");
lf[143]=C_h_intern(&lf[143],14,"string->symbol");
lf[144]=C_h_intern(&lf[144],7,"reverse");
lf[145]=C_h_intern(&lf[145],12,"test-depends");
lf[146]=C_h_intern(&lf[146],3,"map");
lf[147]=C_h_intern(&lf[147],26,"setup-api#remove-extension");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000)removing previously installed extension `");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\012 upgrade: ");
lf[151]=C_h_intern(&lf[151],18,"string-intersperse");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[153]=C_h_intern(&lf[153],6,"unzip1");
lf[154]=C_h_intern(&lf[154],10,"yes-or-no\077");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[156]=C_h_intern(&lf[156],6,"\000abort");
lf[157]=C_h_intern(&lf[157],21,"setup-api#abort-setup");
lf[158]=C_h_intern(&lf[158],18,"string-concatenate");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000:The following installed extensions are outdated, because `");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\033\047 requires later versions:\012");
lf[161]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\0000\012Do you want to replace the existing extensions\077\376\377\016");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\036\047 overrides required version `");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\020\047 of extension `");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\011version `");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\003\077\077\077");
lf[166]=C_h_intern(&lf[166],4,"conc");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\002 (");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[171]=C_h_intern(&lf[171],10,"filter-map");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\012 missing: ");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\033checking dependencies for `");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000)extension is not targeted for this system");
lf[178]=C_h_intern(&lf[178],8,"platform");
lf[179]=C_h_intern(&lf[179],8,"feature\077");
lf[180]=C_h_intern(&lf[180],3,"and");
lf[181]=C_h_intern(&lf[181],5,"every");
lf[182]=C_h_intern(&lf[182],3,"any");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[184]=C_h_intern(&lf[184],3,"not");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\027checking platform for `");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\013extension `");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\024\047 has no .meta file ");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000!- assuming it has no dependencies");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\016retrieving ...");
lf[193]=C_h_intern(&lf[193],26,"setup-api#remove-directory");
lf[194]=C_h_intern(&lf[194],34,"setup-download#temporary-directory");
lf[195]=C_h_intern(&lf[195],14,"symbol->string");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\035internal error - bad egg spec");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\007mapped ");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\004 to ");
lf[199]=C_h_intern(&lf[199],5,"lset=");
lf[200]=C_h_intern(&lf[200],17,"delete-duplicates");
lf[201]=C_h_intern(&lf[201],4,"find");
lf[202]=C_h_intern(&lf[202],10,"append-map");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000/shell command terminated with nonzero exit code");
lf[205]=C_h_intern(&lf[205],6,"system");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[210]=C_h_intern(&lf[210],7,"sprintf");
lf[212]=C_h_intern(&lf[212],23,"irregex-match-substring");
lf[213]=C_h_intern(&lf[213],13,"irregex-match");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\016(.+)\134:([0-9]+)");
lf[215]=C_h_intern(&lf[215],24,"get-environment-variable");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\012proxy_auth");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\007unknown");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[221]=C_h_intern(&lf[221],25,"\003sysimplicit-exit-handler");
lf[222]=C_h_intern(&lf[222],7,"newline");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000B`-deploy\047 only makes sense in combination with `-prefix DIRECTORY`");
lf[224]=C_h_intern(&lf[224],19,"setup-api#copy-file");
lf[225]=C_h_intern(&lf[225],15,"repository-path");
lf[226]=C_h_intern(&lf[226],5,"write");
lf[227]=C_h_intern(&lf[227],19,"with-output-to-file");
lf[228]=C_h_intern(&lf[228],8,"string<\077");
lf[229]=C_h_intern(&lf[229],4,"sort");
lf[230]=C_h_intern(&lf[230],18,"\003sysmodule-exports");
lf[231]=C_h_intern(&lf[231],6,"syntax");
lf[232]=C_h_intern(&lf[232],5,"value");
lf[233]=C_h_intern(&lf[233],6,"print\052");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[235]=C_h_intern(&lf[235],15,"\003sysmodule-name");
lf[236]=C_h_intern(&lf[236],16,"\003sysmodule-table");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\023generating database");
lf[238]=C_h_intern(&lf[238],20,"\003syswarnings-enabled");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\027Failed to import from `");
lf[240]=C_h_intern(&lf[240],6,"import");
lf[241]=C_h_intern(&lf[241],4,"eval");
lf[242]=C_h_intern(&lf[242],16,"\003sysdynamic-wind");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\034loading import libraries ...");
lf[244]=C_h_intern(&lf[244],7,"irregex");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\034.\052/([^/]+)\134.import\134.(scm|so)");
lf[246]=C_h_intern(&lf[246],26,"create-temporary-directory");
lf[247]=C_h_intern(&lf[247],4,"glob");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\012\052.import.\052");
lf[249]=C_h_intern(&lf[249],2,"pp");
lf[250]=C_h_intern(&lf[250],6,"cadadr");
lf[251]=C_h_intern(&lf[251],37,"setup-download#gather-egg-information");
lf[252]=C_h_intern(&lf[252],30,"setup-download#list-extensions");
lf[253]=C_h_intern(&lf[253],6,"\000quiet");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\023~a -s run.scm ~a ~a");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000$\012nevertheless trying to continue ...");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\007testing");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\014 extension `");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\011\047 failed:");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\015tests/run.scm");
lf[261]=C_h_intern(&lf[261],10,"directory\077");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\012installing");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\034-e \042(setup-error-handling)\042 ");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(sudo-install #t)\042");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(keep-intermediates #t)\042");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(setup-install-mode #f)\042");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(host-extension #t)\042");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\032 -e \042(deployment-mode #t)\042");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\006 -bnq ");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\0009-e \042(require-library setup-api)\042 -e \042(import setup-api)\042 ");
lf[280]=C_h_intern(&lf[280],19,"setup-api#shellpath");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\005setup");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(extra-nonfeatures \047");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\026 -e \042(extra-features \047");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[289]=C_h_intern(&lf[289],18,"normalize-pathname");
lf[290]=C_h_intern(&lf[290],4,"unix");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(runtime-prefix \134\042");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\033 -e \042(destination-prefix \134\042");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[296]=C_h_intern(&lf[296],22,"setup-api#sudo-install");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042))\042");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042 \134\042");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000$-e \042(extension-name-and-version \047(\134\042");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\014-setup-mode ");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\036changing current directory to ");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\031installing for target ...");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\005xcopy");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\047copying sources for target installation");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\013installing ");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\026aborting installation.");
lf[312]=C_h_intern(&lf[312],17,"\003sysstring-append");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000@You specified `-no-install\047, but this extension has dependencies");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000C that are required for building.\012Do you still want to install them\077");
lf[315]=C_h_intern(&lf[315],4,"iota");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\016install order:");
lf[317]=C_h_intern(&lf[317],16,"topological-sort");
lf[318]=C_h_intern(&lf[318],8,"string=\077");
lf[319]=C_h_intern(&lf[319],6,"remove");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000;no default location defined - please use `-location\047 option");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000=no default transport defined - please use `-transport\047 option");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\0009 currently installed extensions - do you want to proceed\077");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\030About to re-install all ");
lf[324]=C_h_intern(&lf[324],6,"equal\077");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[326]=C_h_intern(&lf[326],8,"egg-name");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000Dinstalled extension has no information about which egg it belongs to");
lf[328]=C_h_intern(&lf[328],13,"pathname-file");
lf[329]=C_h_intern(&lf[329],9,"read-file");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\033no setup-scripts to process");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\007\052.setup");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid entry in defaults file");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match setup-API version (");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\026version of installed `");
lf[340]=C_h_intern(&lf[340],6,"server");
lf[341]=C_h_intern(&lf[341],8,"split-at");
lf[342]=C_h_intern(&lf[342],2,"->");
lf[343]=C_h_intern(&lf[343],10,"list-index");
lf[344]=C_h_intern(&lf[344],5,"alias");
lf[345]=C_h_intern(&lf[345],7,"string\077");
lf[346]=C_h_intern(&lf[346],8,"override");
lf[347]=C_h_intern(&lf[347],4,"hack");
lf[348]=C_h_intern(&lf[348],12,"chicken-home");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\012\007usage: chicken-install [OPTION | EXTENSION[:VERSION]] ...\012\012  -h   -help    "
"                show this message and exit\012       -version                 show "
"version and exit\012       -force                   don\047t ask, install even if vers"
"ions don\047t match\012  -k   -keep                    keep temporary files\012  -x   -ke"
"ep-installed          install only if not already installed\012       -reinstall   "
"            reinstall all currently installed extensions\012  -l   -location LOCATI"
"ON       install from given location instead of default\012  -t   -transport TRANSP"
"ORT     use given transport instead of default\012       -proxy HOST[:PORT]       d"
"ownload via HTTP proxy\012  -s   -sudo                    use sudo(1) for filesyste"
"m operations\012  -r   -retrieve                only retrieve egg into current dire"
"ctory, don\047t install\012  -n   -no-install              do not install, just build "
"(implies `-keep\047)\012  -p   -prefix PREFIX           change installation prefix to "
"PREFIX\012       -list                    list extensions available over selected t"
"ransport and location\012       -host                    when cross-compiling, comp"
"ile extension only for host\012       -target                  when cross-compiling"
", compile extension only for target\012       -test                    run included"
" test-cases, if available\012       -username USER           set username for trans"
"ports that require this\012       -password PASS           set password for transpo"
"rts that require this\012  -i   -init DIRECTORY          initialize empty alternati"
"ve repository\012  -u   -update-db               update export database\012       -rep"
"ository              print path used for egg installation\012       -deploy        "
"          build extensions for deployment\012       -trunk                   build "
"trunk instead of tagged version (only local)\012  -D   -feature FEATURE         fea"
"tures to pass to sub-invocations of `csc\047\012       -debug                   enable"
" full display of error message information\012       -keep-going              conti"
"nue installation even if dependency fails\012       -scan DIRECTORY          scan l"
"ocal directory for highest available egg versions\012       -override FILENAME     "
"  override versions for installed eggs with information from file\012       -csi FI"
"LENAME            use given pathname for invocations of \042csi\042\012       -show-depen"
"ds            display a list of egg dependencies for the given egg(s)\012       -sh"
"ow-foreign-depends    display a list of foreign dependencies for the given egg(s"
")\012\012chicken-install recognizes the http_proxy, and proxy_auth environment variabl"
"es, if set.\012");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\013-repository");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\005-keep");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\002-r");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\011-retrieve");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\011-location");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\002-t");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\012-transport");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\007-prefix");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\002-n");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-install");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\002-u");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\012-update-db");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\002-i");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\005-init");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[376]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014setup-api.so\376\003\000\000\002\376B\000\000\023setup-api.import.so\376\003\000\000\002\376B\000\000\021setup-download.so\376\003"
"\000\000\002\376B\000\000\030setup-download.import.so\376\003\000\000\002\376B\000\000\021chicken.import.so\376\003\000\000\002\376B\000\000\021lolevel.imp"
"ort.so\376\003\000\000\002\376B\000\000\020srfi-1.import.so\376\003\000\000\002\376B\000\000\020srfi-4.import.so\376\003\000\000\002\376B\000\000\031data-structu"
"res.import.so\376\003\000\000\002\376B\000\000\017ports.import.so\376\003\000\000\002\376B\000\000\017files.import.so\376\003\000\000\002\376B\000\000\017posix.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-13.import.so\376\003\000\000\002\376B\000\000\021srfi-69.import.so\376\003\000\000\002\376B\000\000\020extras.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-14.import.so\376\003\000\000\002\376B\000\000\015tcp.import.so\376\003\000\000\002\376B\000\000\021foreign.impo"
"rt.so\376\003\000\000\002\376B\000\000\021srfi-18.import.so\376\003\000\000\002\376B\000\000\017utils.import.so\376\003\000\000\002\376B\000\000\015csi.import.so"
"\376\003\000\000\002\376B\000\000\021irregex.import.so\376\003\000\000\002\376B\000\000\010types.db\376\377\016");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\032copying required files to ");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\006-proxy");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\005-test");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\006-debug");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\007-deploy");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\011-username");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\005-scan");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\011-override");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\002-x");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\017-keep-installed");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\012-reinstall");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\006-trunk");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\013-keep-going");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\005-list");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\004-csi");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\011-password");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\015-show-depends");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\025-show-foreign-depends");
lf[401]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000l\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\003\000\000\002\376\377\012\000\000r\376\003\000"
"\000\002\376\377\012\000\000n\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000D\376\377\016");
lf[402]=C_h_intern(&lf[402],16,"\003sysstring->list");
lf[403]=C_h_intern(&lf[403],9,"substring");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\005setup");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[406]=C_h_intern(&lf[406],18,"pathname-directory");
lf[407]=C_h_intern(&lf[407],18,"pathname-extension");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\012http_proxy");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\014([^:]+):(.+)");
lf[412]=C_h_intern(&lf[412],22,"command-line-arguments");
lf[413]=C_h_intern(&lf[413],17,"register-feature!");
lf[414]=C_h_intern(&lf[414],15,"chicken-install");
lf[415]=C_h_intern(&lf[415],14,"\000cross-chicken");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[418]=C_h_intern(&lf[418],11,"\003sysrequire");
lf[419]=C_h_intern(&lf[419],9,"setup-api");
lf[420]=C_h_intern(&lf[420],14,"setup-download");
C_register_lf2(lf,421,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* map-loop1354 in k5095 */
static void C_fcall f_5112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5112,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5137,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:674: g1360 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5108 in k5095 */
static void C_ccall f_5110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:672: append */
t2=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f7195 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f7190 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f7190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:798: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5755 in map-loop1576 in k5721 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5756(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5756,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5731(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5731(t6,((C_word*)t0)[5],t5);}}

/* map-loop1576 in k5721 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_5731(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5731,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5756,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:843: g1582 */
t5=C_retrieve2(lf[217],"main#info->egg");
f_5609(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3191 in k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:270: setup-api#version>=? */
((C_proc4)C_fast_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5767 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5768,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5770,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:839: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[323],t2);}

/* k3389 in k3387 in k3384 in k3373 in k3362 */
static void C_ccall f_3390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:335: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[110]);}

/* k4030 */
static void C_ccall f_4032(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4032,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4120,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4129,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=t5,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
/* chicken-install.scm:471: append */
t10=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[5]);}

/* k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4038(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_retrieve2(lf[7],"main#\052force\052");
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
t4=C_retrieve2(lf[7],"main#\052force\052");
t5=t2;
f_4044(2,t5,C_retrieve2(lf[7],"main#\052force\052"));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4098,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t8=C_i_car(t5);
t9=C_a_i_list3(&a,3,lf[159],t8,lf[160]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3591,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3593,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:377: filter-map */
t12=C_fast_retrieve(lf[171]);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t11,t6);}}
else{
t3=t2;
f_4044(2,t3,C_SCHEME_FALSE);}}

/* k3387 in k3384 in k3373 in k3362 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:334: print-error-message */
t3=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3384 in k3373 in k3362 */
static void C_fcall f_3386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3386,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3388,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:333: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[112]);}
else{
t2=((C_word*)t0)[2];
/* chicken-install.scm:337: abort */
t3=C_fast_retrieve(lf[113]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}}

/* k3175 in k3172 in k3148 in k3140 in k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in ... */
static void C_ccall f_3176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3176,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* chicken-install.scm:280: values */
C_values(4,0,((C_word*)t0)[3],C_SCHEME_FALSE,t2);}

/* k3172 in k3148 in k3140 in k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in ... */
static void C_ccall f_3173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3176,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:282: ->string */
t4=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4044,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:482: unzip1 */
t3=C_fast_retrieve(lf[153]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4045 in k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4048,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4086,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:483: string-intersperse */
t4=C_fast_retrieve(lf[151]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[152]);}

/* f_4049 in k4047 in k4045 in k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4049,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4052,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:486: print */
t4=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[148],t2,lf[149]);}

/* k4047 in k4045 in k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4049,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[89]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4065,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4065(t9,t5,t3);}

/* k3376 in k3373 in k3362 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:331: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[108]);}

/* k3373 in k3362 */
static void C_fcall f_3375(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3375,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:330: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[109]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3386,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_memv(lf[114],((C_word*)t0)[4]);
t4=t2;
f_3386(t4,(C_truep(t3)?C_i_memv(lf[115],((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3386(t3,C_SCHEME_FALSE);}}}

/* k3160 in k3148 in k3140 in k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in ... */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:274: error */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4011 in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-install.scm:460: print */
t5=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[175],t4,lf[176]);}

/* k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4010(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4010,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=((C_word*)t0)[3];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4239,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[29],"main#\052cross-chicken\052"))){
t7=C_SCHEME_UNDEFINED;
t8=t2;
f_4012(2,t8,t7);}
else{
t7=C_i_assq(lf[178],t5);
if(C_truep(t7)){
t8=C_i_cadr(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4259,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4259(3,t12,t2,t8);}
else{
t8=t2;
f_4012(2,t8,C_SCHEME_FALSE);}}}

/* k4013 in k4011 in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:461: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_6463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6463,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6471,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6538,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1002: substring */
t5=*((C_word*)lf[403]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7264,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t5=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[350]);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6625,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:1010: pathname-extension */
t3=C_fast_retrieve(lf[407]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* f_4019 in k4013 in k4011 in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4019,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3246,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=f_2876(lf[86],t4);
t7=f_2876(lf[91],t4);
if(C_truep(C_retrieve2(lf[8],"main#\052run-tests\052"))){
t8=f_2876(lf[145],t4);
/* chicken-install.scm:234: append */
t9=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t5,t6,t7,t8);}
else{
/* chicken-install.scm:234: append */
t8=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,t6,t7,C_SCHEME_END_OF_LIST);}}

/* k3365 in k3362 */
static void C_ccall f_3366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:328: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,lf[106]);}

/* k3362 */
static void C_fcall f_3364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3364,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:327: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_memv(lf[114],((C_word*)t0)[4]);
t4=t2;
f_3375(t4,(C_truep(t3)?C_i_memv(lf[116],((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3375(t3,C_SCHEME_FALSE);}}}

/* f_4027 in k4013 in k4011 in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4027,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4032,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:463: apply-mappings */
f_5280(t6,((C_word*)t5)[1]);}

/* k5350 */
static void C_ccall f_5351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5351,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5355,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:696: g1433 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list1(&a,1,((C_word*)t0)[3]));}}

/* f_5355 in k5350 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5355,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fast_retrieve(lf[47]);
t8=C_i_cdr(t2);
t9=C_i_check_list_2(t8,lf[146]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5365,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5365(t13,t1,t8);}

/* k3773 in k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:414: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[99],((C_word*)t0)[4]);}

/* k3775 in k3773 in k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in ... */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052");
t4=C_i_check_list_2(C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"),lf[89]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3869(t9,t5,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));}

/* f_3778 in k3775 in k3773 in k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in ... */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3778,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3781,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(t2);
t5=t2;
t6=C_u_i_car(t5);
/* chicken-install.scm:420: make-pathname */
t7=C_fast_retrieve(lf[81]);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,t6,lf[96]);}

/* k5338 in k5334 in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_5340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
/* chicken-install.scm:704: print */
t2=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[197],((C_word*)t0)[5],lf[198],((C_word*)t0)[3]);}}

/* k2460 in k2447 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2462,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2776,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:178: read-file */
t4=C_fast_retrieve(lf[329]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
f_5664(t2,C_i_pairp(C_retrieve2(lf[13],"main#\052default-sources\052")));}}

/* f_2463 in k2460 in k2447 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2463,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2466,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
if(C_truep(C_fixnum_greaterp(t5,C_fix(0)))){
t6=t3;
f_2466(2,t6,C_SCHEME_UNDEFINED);}
else{
/* chicken-install.scm:135: broken */
t6=((C_word*)t0)[2];
f_2450(t6,t3,t2);}}
else{
/* chicken-install.scm:135: broken */
t4=((C_word*)t0)[2];
f_2450(t4,t3,t2);}}

/* f_5348 in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5348(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5348,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5351,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5401,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:697: find */
t5=C_fast_retrieve(lf[201]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[22],"main#\052mappings\052"));}

/* k2465 */
static void C_ccall f_2466(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2466,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[46]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_nequalp(t6,C_fix(1)))){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:141: open-output-string */
t8=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}
else{
/* chicken-install.scm:138: broken */
t6=((C_word*)t0)[4];
f_2450(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
t4=C_eqp(t2,lf[340]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_a_i_list1(&a,1,t7);
/* chicken-install.scm:150: append */
t9=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,C_retrieve2(lf[13],"main#\052default-sources\052"),t8);}
else{
t5=C_eqp(t2,lf[146]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2548,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2550,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_i_check_list_2(t13,lf[146]);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2587,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2589,a[2]=t10,a[3]=t17,a[4]=t8,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_2589(t19,t15,t13);}
else{
t6=C_eqp(t2,lf[344]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t13=((C_word*)t0)[2];
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[146]);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2668,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2670,a[2]=t11,a[3]=t18,a[4]=t9,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_2670(t20,t16,t14);}
else{
t7=C_eqp(t2,lf[346]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t11))){
t12=C_i_cadr(((C_word*)t0)[2]);
t13=t9;
f_2711(t13,C_i_stringp(t12));}
else{
t12=t9;
f_2711(t12,C_SCHEME_FALSE);}}
else{
t8=C_eqp(t2,lf[347]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:176: eval */
t12=C_fast_retrieve(lf[241]);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}
else{
/* chicken-install.scm:177: broken */
t9=((C_word*)t0)[4];
f_2450(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}}}}}}}

/* k5345 in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:694: delete-duplicates */
t2=C_fast_retrieve(lf[200]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k6255 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(&lf[11] /* (set! main#*username* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:961: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5634(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* f_3593 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3593,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3670,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* chicken-install.scm:379: string->symbol */
t5=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4004 in k3999 */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4006,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:457: with-input-from-file */
t3=C_fast_retrieve(lf[93]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],*((C_word*)lf[94]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4176,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-install.scm:492: string-append */
t5=*((C_word*)lf[56]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,lf[188],t4,lf[189],lf[190]);}}

/* k3999 */
static void C_ccall f_4000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:456: file-exists? */
t3=C_fast_retrieve(lf[95]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3590 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:373: append */
t2=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,lf[161]);}

/* k6668 in k5626 in k6721 */
static void C_ccall f_6669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:824: setup-proxy */
f_5575(((C_word*)t0)[2],t1);}

/* k4007 in k4004 in k3999 */
static void C_ccall f_4008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4010,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* chicken-install.scm:458: print */
t5=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[186],t4,lf[187]);}

/* k5329 in k5332 in same? in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_equalp(((C_word*)t0)[3],t2));}

/* k5336 in k5334 in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_5337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5334 in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5337,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:703: lset= */
t4=C_fast_retrieve(lf[199]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],t1);}

/* k5332 in same? in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_5333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5333,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5330,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:692: canonical */
f_5284(t3,((C_word*)t0)[4]);}

/* k2494 in k2465 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:141: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[339],t2);}

/* same? in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5317,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5333,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:692: canonical */
f_5284(t4,t2);}

/* k2498 in k2496 in k2494 in k2465 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:141: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[338],((C_word*)t0)[5]);}

/* k2496 in k2494 in k2465 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:141: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[2],"main#constant195"),((C_word*)t0)[5]);}

/* k2694 in map-loop364 in k2465 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2695,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2670(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2670(t6,((C_word*)t0)[5],t5);}}

/* k6624 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6625,2,t0,t1);}
if(C_truep(C_i_equalp(lf[404],t1))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1011: pathname-file */
t3=C_fast_retrieve(lf[328]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1025: irregex-match */
t3=C_fast_retrieve(lf[213]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[6]);}}

/* k3798 in k3787 in k3782 in k3780 */
static void C_ccall f_3799(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3800,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[89]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3811,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3811(t8,((C_word*)t0)[3],t3);}

/* k3584 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:372: string-concatenate */
t2=C_fast_retrieve(lf[158]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3782 in k3780 */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(((C_word*)t0)[4],lf[86]);
if(C_truep(t3)){
t4=f_2876(lf[91],t1);
t5=f_2876(((C_word*)t0)[4],t1);
/* chicken-install.scm:423: append */
t6=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t4,t5);}
else{
/* chicken-install.scm:424: deps */
t4=t2;
f_3788(2,t4,f_2876(((C_word*)t0)[4],t1));}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3780 */
static void C_ccall f_3781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3849,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:421: file-exists? */
t4=C_fast_retrieve(lf[95]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k3787 in k3782 in k3780 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3788,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_nullp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3799,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* chicken-install.scm:426: print */
t5=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,lf[90]);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6607 */
static void C_ccall f_6608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6611,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1031: irregex-match-substring */
t3=C_fast_retrieve(lf[212]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],C_fix(2));}

/* k3602 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_3600 in k3669 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3600,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(t2);
t5=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3612,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:383: open-output-string */
t7=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2872 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[13] /* (set! main#*default-sources* ...) */,t1);
t3=C_i_cdr(((C_word*)t0)[2]);
/* chicken-install.scm:359: trying-sources */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3475(t4,((C_word*)t0)[4],t3);}

/* main#deps in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static C_word C_fcall f_2876(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
t3=C_i_assq(t1,t2);
if(C_truep(t3)){
t4=C_i_cdr(t3);
return((C_truep(t4)?t4:C_SCHEME_END_OF_LIST));}
else{
return(C_SCHEME_END_OF_LIST);}}

/* k3863 in k3860 in k3775 in k3773 in k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in ... */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:430: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3860 in k3775 in k3773 in k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in ... */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:429: cleanup */
f_4960(t2);}

/* for-each-loop718 in k3775 in k3773 in k3768 in k3766 in main#show-depends in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in ... */
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3869,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3878,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:418: g719 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_3800 in k3798 in k3787 in k3782 in k3780 */
static void C_ccall f_3800(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3800,3,t0,t1,t2);}
/* chicken-install.scm:427: g751 */
t3=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[88],t2);}

/* k3625 in k3623 in k3621 in k3619 in k3617 in k3615 in k3613 in k3611 */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:383: get-output-string */
t3=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3621 in k3619 in k3617 in k3615 in k3613 in k3611 */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
/* chicken-install.scm:383: display */
t5=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[4]);}

/* k3623 in k3621 in k3619 in k3617 in k3615 in k3613 in k3611 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[137]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[4]);}

/* k3619 in k3617 in k3615 in k3613 in k3611 */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:383: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[162],((C_word*)t0)[4]);}

/* k2898 in k2894 in k6086 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(lf[376],lf[89]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2919,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2919(t7,((C_word*)t0)[5],lf[376]);}

/* k2894 in k6086 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2895,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))?lf[373]:lf[374]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2899,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:212: print */
t4=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[377],((C_word*)t0)[2],lf[378]);}

/* k3615 in k3613 in k3611 */
static void C_ccall f_3616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:383: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[163],((C_word*)t0)[4]);}

/* k3617 in k3615 in k3613 in k3611 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* chicken-install.scm:383: display */
t5=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[4]);}

/* k3611 */
static void C_ccall f_3612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3612,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3614,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:383: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[164],t2);}

/* k3613 in k3611 */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[6]);
/* chicken-install.scm:383: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k6610 in k6607 */
static void C_ccall f_6611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6611,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
/* chicken-install.scm:1027: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5634(t3,((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k3819 in for-each-loop735 in k3798 in k3787 in k3782 in k3780 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3811(t3,((C_word*)t0)[4],t2);}

/* k5462 in main#$system in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=t1;
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* chicken-install.scm:719: error */
t4=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],lf[204],t1,((C_word*)t0)[3]);}}

/* map-loop364 in k2465 */
static void C_fcall f_2670(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2670,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:165: g370 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5269 in k4985 in k4983 in k4981 in k4979 in k4977 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5269,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[238]));
t3=C_mutate((C_word*)lf[238]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5274 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:648: glob */
t2=C_fast_retrieve(lf[247]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6677 in k6674 in k6672 in k6670 in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_6678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k2849 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_fcall f_2851(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2851,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:194: current-directory */
t3=C_fast_retrieve(lf[82]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_retrieve2(lf[14],"main#\052default-location\052");
t3=C_a_i_list(&a,2,lf[79],C_retrieve2(lf[14],"main#\052default-location\052"));
t4=C_a_i_list(&a,2,lf[77],C_retrieve2(lf[15],"main#\052default-transport\052"));
t5=C_a_i_list(&a,2,t3,t4);
t6=((C_word*)t0)[3];
f_3473(t6,C_a_i_list(&a,1,t5));}}

/* k6672 in k6670 in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_6673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1037: g1788 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k6674 in k6672 in k6670 in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_6676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6681,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[221]))(2,*((C_word*)lf[221]+1),t3);}

/* k3628 in k3625 in k3623 in k3621 in k3619 in k3617 in k3615 in k3613 in k3611 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:382: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5277 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:648: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[248]);}

/* k3982 in k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3984,2,t0,t1);}
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3988,tmp=(C_word)a,a+=2,tmp);
t3=C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052");
t4=C_i_check_list_2(C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"),lf[89]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4195,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4195(t8,((C_word*)t0)[2],C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"));}}

/* f_3988 in k3982 in k3915 in main#retrieve in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3988(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3988,3,t0,t1,t2);}
t3=C_i_car(t2);
if(C_truep(C_i_member(t3,C_retrieve2(lf[65],"main#\052checked\052")))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,C_retrieve2(lf[65],"main#\052checked\052"));
t7=C_mutate(&lf[65] /* (set! main#*checked* ...) */,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4000,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_i_cadr(t2);
t10=t2;
t11=C_u_i_car(t10);
/* chicken-install.scm:455: make-pathname */
t12=C_fast_retrieve(lf[81]);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t8,t9,t11,lf[191]);}}

/* map-loop1743 in k6475 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_6498(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6498,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6523,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:1005: g1749 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6670 in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_6671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6683,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:1037: call-with-current-continuation */
t4=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k2847 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_2848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2848,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[79],t1);
t3=C_a_i_list(&a,2,lf[77],C_retrieve2(lf[15],"main#\052default-transport\052"));
t4=C_a_i_list(&a,2,t2,t3);
t5=((C_word*)t0)[2];
f_3473(t5,C_a_i_list(&a,1,t4));}

/* k5475 in main#$system in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:714: system */
t2=C_fast_retrieve(lf[205]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6492 in k6475 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-install.scm:1004: append */
t4=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6531,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:1003: every */
t4=C_fast_retrieve(lf[181]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_5280(C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5280,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5284,tmp=(C_word)a,a+=2,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5335,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5346,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5348,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:695: append-map */
t12=C_fast_retrieve(lf[202]);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t11,t2);}

/* canonical in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_fcall f_5284(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5284,NULL,2,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5297,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:687: symbol->string */
t4=*((C_word*)lf[195]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
if(C_truep(C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t2,C_SCHEME_FALSE));}
else{
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* chicken-install.scm:690: error */
t3=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[196],t2);}}}}

/* k3664 in k3669 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_assq(lf[46],t1);
t3=(C_truep(t2)?C_i_cadr(t2):lf[165]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* chicken-install.scm:387: conc */
t6=C_fast_retrieve(lf[166]);
((C_proc10)(void*)(*((C_word*)t6+1)))(10,t6,((C_word*)t0)[3],lf[167],((C_word*)t0)[4],lf[168],t3,lf[169],t5,lf[170],C_make_character(10));}

/* k2613 in map-loop319 in k2465 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2614,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2589(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2589(t6,((C_word*)t0)[5],t5);}}

/* k2856 in k2849 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:194: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[14],"main#\052default-location\052"));}

/* k5487 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:722: delete-duplicates */
t2=C_fast_retrieve(lf[200]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[324]+1));}

/* f_6485 in k6475 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6485(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6485,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,2,C_make_character(45),t2));}

/* k6482 in k6475 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:1004: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5634(t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);}

/* k2666 in k2465 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:163: append */
t2=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[28],"main#\052aliases\052"),t1);}

/* for-each-loop735 in k3798 in k3787 in k3782 in k3780 */
static void C_fcall f_3811(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3811,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3820,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:427: g736 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6280 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:965: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5634(t7,((C_word*)t0)[5],t6,((C_word*)((C_word*)t0)[6])[1]);}

/* f_5490 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5490(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5490,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5527,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:725: read-file */
t4=C_fast_retrieve(lf[329]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5296 in canonical in main#apply-mappings in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_5297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5297,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,t1,C_SCHEME_FALSE));}

/* k2865 in main#with-default-sources in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2851(t2,C_i_not(t1));}

/* k6475 in k6470 in k6461 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6477(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6477,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6485,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[5];
t9=C_i_check_list_2(t8,lf[146]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6494,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6498,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6498(t14,t10,t8);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f7259,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:758: print */
t4=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[350]);}}

/* f_3355 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3355,2,t0,t1);}
t2=C_i_structurep(((C_word*)t0)[2],lf[105]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3364,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=C_i_memv(lf[114],t3);
t6=t4;
f_3364(t6,(C_truep(t5)?C_i_memv(lf[117],t3):C_SCHEME_FALSE));}
else{
t5=t4;
f_3364(t5,C_SCHEME_FALSE);}}

/* f_5080 in k5069 in k5067 */
static void C_ccall f_5080(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5080,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_i_check_list_2(t4,lf[146]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5097,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5142,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5142(t15,t11,t4);}

/* f_3350 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3350,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3355,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:312: k568 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_6688 */
static void C_ccall f_6688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6688,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6693,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1037: k1784 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_5086 */
static void C_ccall f_5086(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5086,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list3(&a,3,t3,lf[231],((C_word*)t0)[2]));}

/* f_6683 in k6670 in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6683,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6688,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6708,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1037: with-exception-handler */
t5=C_fast_retrieve(lf[129]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k2633 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}
else{
/* chicken-install.scm:168: broken */
t2=((C_word*)t0)[4];
f_2450(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k6679 in k6674 in k6672 in k6670 in k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_6681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_3345 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3345,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3350,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:312: with-exception-handler */
t5=C_fast_retrieve(lf[129]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k3148 in k3140 in k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in ... */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3149,2,t0,t1);}
if(C_truep(C_u_i_string_equal_p(lf[54],t1))){
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
/* chicken-install.scm:273: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:275: string-append */
t4=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[57],t3,lf[58]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* chicken-install.scm:282: ->string */
t5=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}}

/* f_5099 in k5095 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5099,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list3(&a,3,t3,lf[232],((C_word*)t0)[2]));}

/* k3339 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:312: g572 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5095 */
static void C_ccall f_5097(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5097,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[146]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5112,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5112(t12,t8,((C_word*)t0)[3]);}

/* k3140 in k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3142,2,t0,t1);}
if(C_truep(t1)){
/* chicken-install.scm:283: values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* chicken-install.scm:271: ->string */
t5=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}}

/* k2804 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:127: make-pathname */
t2=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[2],"main#constant195"));}

/* main#resolve-location in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_2807(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2807,NULL,2,t1,t2);}
t3=C_i_assoc(t2,C_retrieve2(lf[28],"main#\052aliases\052"));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2815,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:181: g407 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3332 in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3334,2,t0,t1);}
t2=C_mutate(&lf[66] /* (set! main#*csi* ...) */,t1);
t3=C_mutate(&lf[67] /* (set! main#with-default-sources ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3466,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[85] /* (set! main#show-depends ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3763,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[103] /* (set! main#retrieve ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3912,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[97] /* (set! main#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4960,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[174] /* (set! main#apply-mappings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5280,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[203] /* (set! main#$system ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5459,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[208] /* (set! main#command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5555,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[211] /* (set! main#setup-proxy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5575,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[217] /* (set! main#info->egg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5609,tmp=(C_word)a,a+=2,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1035: register-feature! */
t13=C_fast_retrieve(lf[413]);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,lf[414]);}

/* k3133 in k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in ... */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:267: values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* f_2815 in main#resolve-location in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2815,3,t0,t1,t2);}
t3=C_i_cdr(t2);
/* chicken-install.scm:186: resolve-location */
f_2807(t1,t3);}

/* f_2629 in k2465 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2629,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2635,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
t6=C_eqp(C_fix(2),t5);
if(C_truep(t6)){
/* chicken-install.scm:166: every */
t7=C_fast_retrieve(lf[181]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,*((C_word*)lf[345]+1),t2);}
else{
t7=t3;
f_2635(2,t7,C_SCHEME_FALSE);}}
else{
t4=t3;
f_2635(2,t4,C_SCHEME_FALSE);}}

/* k2625 in k2465 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[28] /* (set! main#*aliases* ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6697 in k6695 */
static void C_ccall f_6698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1041: cleanup */
f_4960(t2);}

/* k6695 */
static void C_ccall f_6696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1040: print-error-message */
t3=C_fast_retrieve(lf[111]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],*((C_word*)lf[74]+1));}

/* f_6693 */
static void C_ccall f_6693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6696,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:1039: newline */
t3=*((C_word*)lf[222]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[74]+1));}

/* k3121 in k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in ... */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3122,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3192,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:270: ->string */
t6=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* chicken-install.scm:268: ->string */
t6=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,t5);}}

/* k3118 in k3035 in main#check-dependency in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 in ... */
static void C_fcall f_3120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3120,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* chicken-install.scm:265: ext-version */
f_2939(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3200,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:285: warning */
t3=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[61],((C_word*)t0)[3]);}}

/* k3317 in for-each-loop520 in k3245 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3309(t3,((C_word*)t0)[4],t2);}

/* k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2341(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2341,2,t0,t1);}
t2=C_mutate(&lf[4] /* (set! main#*program-path* ...) */,t1);
t3=lf[5] /* main#*keep* */ =C_SCHEME_FALSE;;
t4=lf[6] /* main#*keep-existing* */ =C_SCHEME_FALSE;;
t5=lf[7] /* main#*force* */ =C_SCHEME_FALSE;;
t6=lf[8] /* main#*run-tests* */ =C_SCHEME_FALSE;;
t7=lf[9] /* main#*retrieve-only* */ =C_SCHEME_FALSE;;
t8=lf[10] /* main#*no-install* */ =C_SCHEME_FALSE;;
t9=lf[11] /* main#*username* */ =C_SCHEME_FALSE;;
t10=lf[12] /* main#*password* */ =C_SCHEME_FALSE;;
t11=lf[13] /* main#*default-sources* */ =C_SCHEME_END_OF_LIST;;
t12=lf[14] /* main#*default-location* */ =C_SCHEME_FALSE;;
t13=C_mutate(&lf[15] /* (set! main#*default-transport* ...) */,lf[16]);
t14=C_mutate(&lf[17] /* (set! main#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t15=lf[18] /* main#*proxy-host* */ =C_SCHEME_FALSE;;
t16=lf[19] /* main#*proxy-port* */ =C_SCHEME_FALSE;;
t17=lf[20] /* main#*proxy-user-pass* */ =C_SCHEME_FALSE;;
t18=lf[21] /* main#*running-test* */ =C_SCHEME_FALSE;;
t19=lf[22] /* main#*mappings* */ =C_SCHEME_END_OF_LIST;;
t20=lf[23] /* main#*deploy* */ =C_SCHEME_FALSE;;
t21=lf[24] /* main#*trunk* */ =C_SCHEME_FALSE;;
t22=lf[25] /* main#*csc-features* */ =C_SCHEME_END_OF_LIST;;
t23=lf[26] /* main#*csc-nonfeatures* */ =C_SCHEME_END_OF_LIST;;
t24=lf[27] /* main#*prefix* */ =C_SCHEME_FALSE;;
t25=lf[28] /* main#*aliases* */ =C_SCHEME_END_OF_LIST;;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:103: feature? */
t27=C_fast_retrieve(lf[179]);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,lf[415]);}

/* for-each-loop520 in k3245 */
static void C_fcall f_3309(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3309,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3318,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:290: g521 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6416 in k5859 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_6417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(&lf[12] /* (set! main#*password* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:992: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5634(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k4290 in loop in k4009 in k4007 in k4004 in k3999 */
static void C_fcall f_4292(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4292,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* chicken-install.scm:508: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4259(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(lf[180],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[4];
t7=C_u_i_cdr(t6);
/* chicken-install.scm:510: every */
t8=C_fast_retrieve(lf[181]);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)((C_word*)t0)[5])[1],t7);}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_car(t5);
t7=C_eqp(lf[62],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[4];
t10=C_u_i_cdr(t9);
/* chicken-install.scm:512: any */
t11=C_fast_retrieve(lf[182]);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,((C_word*)((C_word*)t0)[5])[1],t10);}
else{
t8=C_i_cadr(((C_word*)t0)[6]);
/* chicken-install.scm:513: error */
t9=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],lf[183],((C_word*)t0)[7],t8);}}}}

/* k4296 in k4290 in loop in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* chicken-install.scm:508: fail */
t2=((C_word*)t0)[3];
f_4239(t2,((C_word*)t0)[2]);}}

/* k4491 in k4489 in k4487 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:536: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[293],((C_word*)t0)[4]);}

/* k4493 in k4491 in k4489 in k4487 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:536: get-output-string */
t2=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4489 in k4487 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4501,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:537: normalize-pathname */
t4=C_fast_retrieve(lf[289]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[290]);}

/* k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2325,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[418]))(3,*((C_word*)lf[418]+1),t2,lf[420]);}

/* k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[418]))(3,*((C_word*)lf[418]+1),t2,lf[419]);}

/* k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2329,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! main#constant191 ...) */,lf[1]);
t3=C_mutate(&lf[2] /* (set! main#constant195 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:76: get-environment-variable */
t5=C_fast_retrieve(lf[215]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[417]);}

/* k4267 in loop in k4009 in k4007 in k4004 in k3999 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* chicken-install.scm:504: fail */
t2=((C_word*)t0)[3];
f_4239(t2,((C_word*)t0)[2]);}}

/* k4464 in k4462 in k4460 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:545: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[285],((C_word*)t0)[4]);}

/* k4462 in k4460 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:545: write */
t3=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[25],"main#\052csc-features\052"),((C_word*)t0)[4]);}

/* k4466 in k4464 in k4462 in k4460 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:545: get-output-string */
t2=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4097 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:481: setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[157]))(2,*((C_word*)lf[157]+1),t2);}

/* k4460 in k4419 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4461,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:545: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[286],t2);}

/* k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* chicken-install.scm:77: make-pathname */
t3=C_fast_retrieve(lf[81]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[416]);}
else{
t3=t2;
f_2338(2,t3,C_SCHEME_FALSE);}}

/* k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_2341(2,t3,t1);}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}}

/* k4474 in k4472 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4486,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:542: normalize-pathname */
t4=C_fast_retrieve(lf[289]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[290]);}

/* k4472 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4473,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4475,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:541: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[291],t2);}

/* k4476 in k4474 in k4472 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:541: display */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[288],((C_word*)t0)[4]);}

/* k2302 in k2300 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2300 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2304 in k2302 in k2300 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2744 in k2465 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2745,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* chicken-install.scm:176: append */
t3=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],C_retrieve2(lf[38],"main#\052hacks\052"),t2);}

/* k4073 in for-each-loop873 in k4047 in k4045 in k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4065(t3,((C_word*)t0)[4],t2);}

/* k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4085 in k4045 in k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:483: print */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[150],t1);}

/* k4677 in k4580 in k4576 */
static void C_ccall f_4678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:616: g1122 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k4671 in k4665 in k4586 in k4580 in k4576 */
static void C_ccall f_4673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-install.scm:623: file-exists? */
t2=C_fast_retrieve(lf[95]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[260]);}
else{
t2=((C_word*)t0)[2];
f_4594(2,t2,C_SCHEME_FALSE);}}

/* k4051 */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:487: setup-api#remove-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[147]))(3,*((C_word*)lf[147]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3931 */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3932,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_mutate(&lf[63] /* (set! main#*eggs+dirs+vers* ...) */,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3936 */
static void C_fcall f_3937(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3937,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3939,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3682,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=C_u_i_car(t3);
/* chicken-install.scm:397: string->symbol */
t6=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* chicken-install.scm:397: string->symbol */
t5=*((C_word*)lf[143]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k3938 in k3936 */
static void C_ccall f_3939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3944,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:441: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}

/* main#ext-version in k2366 in k2339 in k2336 in k2334 in k2328 in k2326 in k2324 in k2322 in k2320 in k2318 in k2316 in k2314 in k2312 in k2310 in k2308 in k2306 in k2304 in k2302 in k2300 */
static void C_fcall f_2939(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2939,NULL,2,t1,t2);}
t3=C_eqp(t2,lf[44]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2948,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2948(t5,t3);}
else{
t5=C_i_equalp(t2,lf[50]);
if(C_truep(t5)){
t6=t4;
f_2948(t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:221: ->string */
t7=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}}

/* for-each-loop873 in k4047 in k4045 in k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_fcall f_4065(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4065,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4074,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:484: g874 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4058 in k4047 in k4045 in k4042 in k4037 in k4132 in k4128 in k4030 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:489: retrieve */
f_3912(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_3924 */
static void C_ccall f_3924(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3924,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3932,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:439: delete */
t4=C_fast_retrieve(lf[75]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_retrieve2(lf[63],"main#\052eggs+dirs+vers\052"),*((C_word*)lf[76]+1));}

/* k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5717,2,t0,t1);}
t2=C_retrieve2(lf[7],"main#\052force\052");
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5723,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
t4=t3;
f_5723(2,t4,C_retrieve2(lf[7],"main#\052force\052"));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5768,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:839: open-output-string */
t5=C_fast_retrieve(lf[141]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4485 in k4474 in k4472 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:541: display */
t2=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4487 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4488,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:536: display */
t4=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[294],t2);}

/* k4478 in k4476 in k4474 in k4472 in k4417 in k4413 in k4411 in k4508 in k4395 in k4392 in k4390 in k4388 in k4386 in k4384 in k4382 in k4376 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:541: get-output-string */
t2=C_fast_retrieve(lf[136]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4871 in k4868 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4872,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[89]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4879,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4879(t6,((C_word*)t0)[4],((C_word*)t0)[2],t1);}

/* k4868 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4872,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:640: iota */
t3=C_fast_retrieve(lf[315]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[4],C_fix(-1));}

/* for-each-loop1064 in k4871 in k4868 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_fcall f_4879(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4879,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4888,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-install.scm:581: g1065 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_4688 */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4688,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4693,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:616: k1118 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_4683 in k4580 in k4576 */
static void C_ccall f_4683(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4683,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4702,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:616: with-exception-handler */
t5=C_fast_retrieve(lf[129]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k5727 in k5721 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5666(2,t3,t2);}

/* k4887 in for-each-loop1064 in k4871 in k4868 in k4542 in k4540 in k4537 in k4532 in k4530 in k5694 in k5667 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_4888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4879(t4,((C_word*)t0)[5],t2,t3);}

/* k5721 in k5716 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5723(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5723,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_retrieve2(lf[217],"main#info->egg");
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[146]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5729,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5731,a[2]=t5,a[3]=t11,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5731(t13,t9,t7);}
else{
/* chicken-install.scm:844: exit */
t2=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],C_fix(1));}}

/* k5526 */
static void C_ccall f_5527(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5527,2,t0,t1);}
t2=C_i_car(t1);
t3=C_i_assq(lf[46],t2);
t4=(C_truep(t3)?C_i_cadr(t3):lf[325]);
t5=C_i_assq(lf[326],t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5504,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:724: g1502 */
t7=t6;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[2],t5);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5521,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:733: pathname-file */
t8=C_fast_retrieve(lf[328]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}}

/* k5520 in k5526 */
static void C_ccall f_5521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:731: warning */
t2=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[327],t1);}

/* k4697 in k4695 */
static void C_ccall f_4698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:616: print */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[255]);}

/* k4695 */
static void C_ccall f_4696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:616: print-error-message */
t3=C_fast_retrieve(lf[111]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* f_4693 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4696,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:616: print */
t3=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[264],lf[257],((C_word*)t0)[3],lf[258]);}

/* k5517 in k5526 */
static void C_ccall f_5518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k5512 */
static void C_ccall f_5513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5513,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4665 in k4586 in k4580 in k4576 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:622: directory? */
t3=C_fast_retrieve(lf[261]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[262]);}
else{
t2=((C_word*)t0)[2];
f_4594(2,t2,C_SCHEME_FALSE);}}

/* k5699 in k5665 in k5663 in loop in k5628 in k5626 in k6721 */
static void C_ccall f_5700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_5668(2,t3,t2);}
else{
/* chicken-install.scm:863: error */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[320]);}}

/* f_5504 in k5526 */
static void C_ccall f_5504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5504,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5513,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:729: ->string */
t5=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k4829 in k4546 */
static void C_ccall f_4830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:593: setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[157]))(2,*((C_word*)lf[157]+1),t2);}

/* k4832 in k4829 in k4546 */
static void C_ccall f_4833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-install.scm:589: yes-or-no? */
t2=C_fast_retrieve(lf[154]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[156],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[578] = {
{"f_4649:chicken_2dinstall_2escm",(void*)f_4649},
{"f_4849:chicken_2dinstall_2escm",(void*)f_4849},
{"f_4847:chicken_2dinstall_2escm",(void*)f_4847},
{"f_4644:chicken_2dinstall_2escm",(void*)f_4644},
{"f_5561:chicken_2dinstall_2escm",(void*)f_5561},
{"f_4816:chicken_2dinstall_2escm",(void*)f_4816},
{"f_4818:chicken_2dinstall_2escm",(void*)f_4818},
{"f_4814:chicken_2dinstall_2escm",(void*)f_4814},
{"f_5052:chicken_2dinstall_2escm",(void*)f_5052},
{"f_5555:chicken_2dinstall_2escm",(void*)f_5555},
{"f_5559:chicken_2dinstall_2escm",(void*)f_5559},
{"f_5055:chicken_2dinstall_2escm",(void*)f_5055},
{"f_4628:chicken_2dinstall_2escm",(void*)f_4628},
{"f_4625:chicken_2dinstall_2escm",(void*)f_4625},
{"f_4620:chicken_2dinstall_2escm",(void*)f_4620},
{"f_4827:chicken_2dinstall_2escm",(void*)f_4827},
{"f_5063:chicken_2dinstall_2escm",(void*)f_5063},
{"f_5068:chicken_2dinstall_2escm",(void*)f_5068},
{"f_5941:chicken_2dinstall_2escm",(void*)f_5941},
{"f_5070:chicken_2dinstall_2escm",(void*)f_5070},
{"f_5075:chicken_2dinstall_2escm",(void*)f_5075},
{"f_4607:chicken_2dinstall_2escm",(void*)f_4607},
{"f_5677:chicken_2dinstall_2escm",(void*)f_5677},
{"f_4615:chicken_2dinstall_2escm",(void*)f_4615},
{"f_4610:chicken_2dinstall_2escm",(void*)f_4610},
{"f_4120:chicken_2dinstall_2escm",(void*)f_4120},
{"f_4129:chicken_2dinstall_2escm",(void*)f_4129},
{"f_5912:chicken_2dinstall_2escm",(void*)f_5912},
{"f_4134:chicken_2dinstall_2escm",(void*)f_4134},
{"f_4136:chicken_2dinstall_2escm",(void*)f_4136},
{"f_5695:chicken_2dinstall_2escm",(void*)f_5695},
{"f_5698:chicken_2dinstall_2escm",(void*)f_5698},
{"f_5973:chicken_2dinstall_2escm",(void*)f_5973},
{"f7222:chicken_2dinstall_2escm",(void*)f7222},
{"f7227:chicken_2dinstall_2escm",(void*)f7227},
{"f_5871:chicken_2dinstall_2escm",(void*)f_5871},
{"f_5877:chicken_2dinstall_2escm",(void*)f_5877},
{"f_5969:chicken_2dinstall_2escm",(void*)f_5969},
{"f7232:chicken_2dinstall_2escm",(void*)f7232},
{"f7237:chicken_2dinstall_2escm",(void*)f7237},
{"f7242:chicken_2dinstall_2escm",(void*)f7242},
{"f7247:chicken_2dinstall_2escm",(void*)f7247},
{"f7252:chicken_2dinstall_2escm",(void*)f7252},
{"f7259:chicken_2dinstall_2escm",(void*)f7259},
{"f_4101:chicken_2dinstall_2escm",(void*)f_4101},
{"f_4106:chicken_2dinstall_2escm",(void*)f_4106},
{"f_4547:chicken_2dinstall_2escm",(void*)f_4547},
{"f_4549:chicken_2dinstall_2escm",(void*)f_4549},
{"f_4541:chicken_2dinstall_2escm",(void*)f_4541},
{"f_4543:chicken_2dinstall_2escm",(void*)f_4543},
{"f_4544:chicken_2dinstall_2escm",(void*)f_4544},
{"f_4112:chicken_2dinstall_2escm",(void*)f_4112},
{"f7200:chicken_2dinstall_2escm",(void*)f7200},
{"f7205:chicken_2dinstall_2escm",(void*)f7205},
{"f7212:chicken_2dinstall_2escm",(void*)f7212},
{"f7217:chicken_2dinstall_2escm",(void*)f7217},
{"f_4911:chicken_2dinstall_2escm",(void*)f_4911},
{"f7264:chicken_2dinstall_2escm",(void*)f7264},
{"f_5845:chicken_2dinstall_2escm",(void*)f_5845},
{"f_5840:chicken_2dinstall_2escm",(void*)f_5840},
{"f_6569:chicken_2dinstall_2escm",(void*)f_6569},
{"f_5634:chicken_2dinstall_2escm",(void*)f_5634},
{"f_6554:chicken_2dinstall_2escm",(void*)f_6554},
{"f_5664:chicken_2dinstall_2escm",(void*)f_5664},
{"f_5668:chicken_2dinstall_2escm",(void*)f_5668},
{"f_5666:chicken_2dinstall_2escm",(void*)f_5666},
{"f_3286:chicken_2dinstall_2escm",(void*)f_3286},
{"f_5861:chicken_2dinstall_2escm",(void*)f_5861},
{"f_3278:chicken_2dinstall_2escm",(void*)f_3278},
{"f_6531:chicken_2dinstall_2escm",(void*)f_6531},
{"f_3275:chicken_2dinstall_2escm",(void*)f_3275},
{"f_6538:chicken_2dinstall_2escm",(void*)f_6538},
{"f_3466:chicken_2dinstall_2escm",(void*)f_3466},
{"f_3461:chicken_2dinstall_2escm",(void*)f_3461},
{"f_3093:chicken_2dinstall_2escm",(void*)f_3093},
{"f_3291:chicken_2dinstall_2escm",(void*)f_3291},
{"f_3490:chicken_2dinstall_2escm",(void*)f_3490},
{"f_3495:chicken_2dinstall_2escm",(void*)f_3495},
{"f_4319:chicken_2dinstall_2escm",(void*)f_4319},
{"f_3487:chicken_2dinstall_2escm",(void*)f_3487},
{"f_5432:chicken_2dinstall_2escm",(void*)f_5432},
{"f_5430:chicken_2dinstall_2escm",(void*)f_5430},
{"f_5439:chicken_2dinstall_2escm",(void*)f_5439},
{"f_3682:chicken_2dinstall_2escm",(void*)f_3682},
{"f_3688:chicken_2dinstall_2escm",(void*)f_3688},
{"f_3066:chicken_2dinstall_2escm",(void*)f_3066},
{"f_5222:chicken_2dinstall_2escm",(void*)f_5222},
{"f_4336:chicken_2dinstall_2escm",(void*)f_4336},
{"f_3670:chicken_2dinstall_2escm",(void*)f_3670},
{"f_3262:chicken_2dinstall_2escm",(void*)f_3262},
{"f_3954:chicken_2dinstall_2escm",(void*)f_3954},
{"f_3952:chicken_2dinstall_2escm",(void*)f_3952},
{"f_2395:chicken_2dinstall_2escm",(void*)f_2395},
{"f_2392:chicken_2dinstall_2escm",(void*)f_2392},
{"f_2397:chicken_2dinstall_2escm",(void*)f_2397},
{"f_5258:chicken_2dinstall_2escm",(void*)f_5258},
{"f_5459:chicken_2dinstall_2escm",(void*)f_5459},
{"f_3949:chicken_2dinstall_2escm",(void*)f_3949},
{"f_3944:chicken_2dinstall_2escm",(void*)f_3944},
{"f_2368:chicken_2dinstall_2escm",(void*)f_2368},
{"f_5241:chicken_2dinstall_2escm",(void*)f_5241},
{"f_5249:chicken_2dinstall_2escm",(void*)f_5249},
{"f_5448:chicken_2dinstall_2escm",(void*)f_5448},
{"f_6735:chicken_2dinstall_2escm",(void*)f_6735},
{"f_3691:chicken_2dinstall_2escm",(void*)f_3691},
{"f_3697:chicken_2dinstall_2escm",(void*)f_3697},
{"f_6738:chicken_2dinstall_2escm",(void*)f_6738},
{"f_3074:chicken_2dinstall_2escm",(void*)f_3074},
{"f_3473:chicken_2dinstall_2escm",(void*)f_3473},
{"f_3475:chicken_2dinstall_2escm",(void*)f_3475},
{"f_5044:chicken_2dinstall_2escm",(void*)f_5044},
{"f_5046:chicken_2dinstall_2escm",(void*)f_5046},
{"f_3878:chicken_2dinstall_2escm",(void*)f_3878},
{"f_6713:chicken_2dinstall_2escm",(void*)f_6713},
{"f_6139:chicken_2dinstall_2escm",(void*)f_6139},
{"f_2781:chicken_2dinstall_2escm",(void*)f_2781},
{"f_3912:chicken_2dinstall_2escm",(void*)f_3912},
{"f_3917:chicken_2dinstall_2escm",(void*)f_3917},
{"f_3916:chicken_2dinstall_2escm",(void*)f_3916},
{"f_6310:chicken_2dinstall_2escm",(void*)f_6310},
{"f_6716:chicken_2dinstall_2escm",(void*)f_6716},
{"f_5212:chicken_2dinstall_2escm",(void*)f_5212},
{"f_5217:chicken_2dinstall_2escm",(void*)f_5217},
{"f_5215:chicken_2dinstall_2escm",(void*)f_5215},
{"f_5418:chicken_2dinstall_2escm",(void*)f_5418},
{"f_6700:chicken_2dinstall_2escm",(void*)f_6700},
{"f_6708:chicken_2dinstall_2escm",(void*)f_6708},
{"f_5207:chicken_2dinstall_2escm",(void*)f_5207},
{"f_5205:chicken_2dinstall_2escm",(void*)f_5205},
{"f_6110:chicken_2dinstall_2escm",(void*)f_6110},
{"f_5209:chicken_2dinstall_2escm",(void*)f_5209},
{"f_6306:chicken_2dinstall_2escm",(void*)f_6306},
{"f_6112:chicken_2dinstall_2escm",(void*)f_6112},
{"f_5401:chicken_2dinstall_2escm",(void*)f_5401},
{"f_5406:chicken_2dinstall_2escm",(void*)f_5406},
{"f_2577:chicken_2dinstall_2escm",(void*)f_2577},
{"f_3975:chicken_2dinstall_2escm",(void*)f_3975},
{"f_5012:chicken_2dinstall_2escm",(void*)f_5012},
{"f_5010:chicken_2dinstall_2escm",(void*)f_5010},
{"f_5015:chicken_2dinstall_2escm",(void*)f_5015},
{"f_5231:chicken_2dinstall_2escm",(void*)f_5231},
{"f_5234:chicken_2dinstall_2escm",(void*)f_5234},
{"f_5236:chicken_2dinstall_2escm",(void*)f_5236},
{"f_2589:chicken_2dinstall_2escm",(void*)f_2589},
{"f_2587:chicken_2dinstall_2escm",(void*)f_2587},
{"f_5008:chicken_2dinstall_2escm",(void*)f_5008},
{"f_5005:chicken_2dinstall_2escm",(void*)f_5005},
{"f_6170:chicken_2dinstall_2escm",(void*)f_6170},
{"f_3536:chicken_2dinstall_2escm",(void*)f_3536},
{"f_5032:chicken_2dinstall_2escm",(void*)f_5032},
{"f_3763:chicken_2dinstall_2escm",(void*)f_3763},
{"f_3769:chicken_2dinstall_2escm",(void*)f_3769},
{"f_3767:chicken_2dinstall_2escm",(void*)f_3767},
{"f_3566:chicken_2dinstall_2escm",(void*)f_3566},
{"f_3561:chicken_2dinstall_2escm",(void*)f_3561},
{"f_2790:chicken_2dinstall_2escm",(void*)f_2790},
{"f_5023:chicken_2dinstall_2escm",(void*)f_5023},
{"f_6152:chicken_2dinstall_2escm",(void*)f_6152},
{"f_6021:chicken_2dinstall_2escm",(void*)f_6021},
{"f_6024:chicken_2dinstall_2escm",(void*)f_6024},
{"f_2776:chicken_2dinstall_2escm",(void*)f_2776},
{"f_3547:chicken_2dinstall_2escm",(void*)f_3547},
{"f_6724:chicken_2dinstall_2escm",(void*)f_6724},
{"f_6722:chicken_2dinstall_2escm",(void*)f_6722},
{"f_6183:chicken_2dinstall_2escm",(void*)f_6183},
{"f_5172:chicken_2dinstall_2escm",(void*)f_5172},
{"f_6729:chicken_2dinstall_2escm",(void*)f_6729},
{"f_6015:chicken_2dinstall_2escm",(void*)f_6015},
{"f_5365:chicken_2dinstall_2escm",(void*)f_5365},
{"f_5167:chicken_2dinstall_2escm",(void*)f_5167},
{"f_2708:chicken_2dinstall_2escm",(void*)f_2708},
{"f_6000:chicken_2dinstall_2escm",(void*)f_6000},
{"f_5184:chicken_2dinstall_2escm",(void*)f_5184},
{"f_5182:chicken_2dinstall_2escm",(void*)f_5182},
{"f_2912:chicken_2dinstall_2escm",(void*)f_2912},
{"f_5177:chicken_2dinstall_2escm",(void*)f_5177},
{"f_3721:chicken_2dinstall_2escm",(void*)f_3721},
{"f_5179:chicken_2dinstall_2escm",(void*)f_5179},
{"f_2919:chicken_2dinstall_2escm",(void*)f_2919},
{"f_6392:chicken_2dinstall_2escm",(void*)f_6392},
{"f_3524:chicken_2dinstall_2escm",(void*)f_3524},
{"f_6596:chicken_2dinstall_2escm",(void*)f_6596},
{"f_5194:chicken_2dinstall_2escm",(void*)f_5194},
{"f_3718:chicken_2dinstall_2escm",(void*)f_3718},
{"f_3715:chicken_2dinstall_2escm",(void*)f_3715},
{"f_3713:chicken_2dinstall_2escm",(void*)f_3713},
{"f_3711:chicken_2dinstall_2escm",(void*)f_3711},
{"f_6592:chicken_2dinstall_2escm",(void*)f_6592},
{"f_5189:chicken_2dinstall_2escm",(void*)f_5189},
{"f_6006:chicken_2dinstall_2escm",(void*)f_6006},
{"f_2928:chicken_2dinstall_2escm",(void*)f_2928},
{"f_6587:chicken_2dinstall_2escm",(void*)f_6587},
{"f_6063:chicken_2dinstall_2escm",(void*)f_6063},
{"f_3709:chicken_2dinstall_2escm",(void*)f_3709},
{"f_3705:chicken_2dinstall_2escm",(void*)f_3705},
{"f_5390:chicken_2dinstall_2escm",(void*)f_5390},
{"f_3707:chicken_2dinstall_2escm",(void*)f_3707},
{"f_6581:chicken_2dinstall_2escm",(void*)f_6581},
{"f_5199:chicken_2dinstall_2escm",(void*)f_5199},
{"f_3703:chicken_2dinstall_2escm",(void*)f_3703},
{"f_3509:chicken_2dinstall_2escm",(void*)f_3509},
{"f_2979:chicken_2dinstall_2escm",(void*)f_2979},
{"f_3504:chicken_2dinstall_2escm",(void*)f_3504},
{"f_3502:chicken_2dinstall_2escm",(void*)f_3502},
{"f_2503:chicken_2dinstall_2escm",(void*)f_2503},
{"f_2501:chicken_2dinstall_2escm",(void*)f_2501},
{"f_2739:chicken_2dinstall_2escm",(void*)f_2739},
{"f_6575:chicken_2dinstall_2escm",(void*)f_6575},
{"f_2509:chicken_2dinstall_2escm",(void*)f_2509},
{"f_2900:chicken_2dinstall_2escm",(void*)f_2900},
{"f_2506:chicken_2dinstall_2escm",(void*)f_2506},
{"f_6572:chicken_2dinstall_2escm",(void*)f_6572},
{"f_2909:chicken_2dinstall_2escm",(void*)f_2909},
{"f_2906:chicken_2dinstall_2escm",(void*)f_2906},
{"f_2550:chicken_2dinstall_2escm",(void*)f_2550},
{"f_2553:chicken_2dinstall_2escm",(void*)f_2553},
{"f_2555:chicken_2dinstall_2escm",(void*)f_2555},
{"f_3436:chicken_2dinstall_2escm",(void*)f_3436},
{"f_2953:chicken_2dinstall_2escm",(void*)f_2953},
{"f_6057:chicken_2dinstall_2escm",(void*)f_6057},
{"f_2711:chicken_2dinstall_2escm",(void*)f_2711},
{"f_2957:chicken_2dinstall_2escm",(void*)f_2957},
{"f_2560:chicken_2dinstall_2escm",(void*)f_2560},
{"f_2565:chicken_2dinstall_2escm",(void*)f_2565},
{"f_3442:chicken_2dinstall_2escm",(void*)f_3442},
{"f_2533:chicken_2dinstall_2escm",(void*)f_2533},
{"f_3456:chicken_2dinstall_2escm",(void*)f_3456},
{"f_2548:chicken_2dinstall_2escm",(void*)f_2548},
{"f_2948:chicken_2dinstall_2escm",(void*)f_2948},
{"f_4377:chicken_2dinstall_2escm",(void*)f_4377},
{"f_4161:chicken_2dinstall_2escm",(void*)f_4161},
{"f_6523:chicken_2dinstall_2escm",(void*)f_6523},
{"f_4383:chicken_2dinstall_2escm",(void*)f_4383},
{"f_4385:chicken_2dinstall_2escm",(void*)f_4385},
{"f_4387:chicken_2dinstall_2escm",(void*)f_4387},
{"f_4389:chicken_2dinstall_2escm",(void*)f_4389},
{"f_4176:chicken_2dinstall_2escm",(void*)f_4176},
{"f_6087:chicken_2dinstall_2escm",(void*)f_6087},
{"f_4394:chicken_2dinstall_2escm",(void*)f_4394},
{"f_4397:chicken_2dinstall_2escm",(void*)f_4397},
{"f_6089:chicken_2dinstall_2escm",(void*)f_6089},
{"f_2456:chicken_2dinstall_2escm",(void*)f_2456},
{"f_2450:chicken_2dinstall_2escm",(void*)f_2450},
{"f_4391:chicken_2dinstall_2escm",(void*)f_4391},
{"f_2448:chicken_2dinstall_2escm",(void*)f_2448},
{"f_3431:chicken_2dinstall_2escm",(void*)f_3431},
{"f_4195:chicken_2dinstall_2escm",(void*)f_4195},
{"f_3849:chicken_2dinstall_2escm",(void*)f_3849},
{"f_4966:chicken_2dinstall_2escm",(void*)f_4966},
{"f_4960:chicken_2dinstall_2escm",(void*)f_4960},
{"f_2403:chicken_2dinstall_2escm",(void*)f_2403},
{"f_2400:chicken_2dinstall_2escm",(void*)f_2400},
{"f_4774:chicken_2dinstall_2escm",(void*)f_4774},
{"f_4978:chicken_2dinstall_2escm",(void*)f_4978},
{"f_2411:chicken_2dinstall_2escm",(void*)f_2411},
{"f_4784:chicken_2dinstall_2escm",(void*)f_4784},
{"f_4581:chicken_2dinstall_2escm",(void*)f_4581},
{"f_4582:chicken_2dinstall_2escm",(void*)f_4582},
{"f_4588:chicken_2dinstall_2escm",(void*)f_4588},
{"f_4793:chicken_2dinstall_2escm",(void*)f_4793},
{"f_4980:chicken_2dinstall_2escm",(void*)f_4980},
{"f_4982:chicken_2dinstall_2escm",(void*)f_4982},
{"f_4984:chicken_2dinstall_2escm",(void*)f_4984},
{"f_4986:chicken_2dinstall_2escm",(void*)f_4986},
{"f_4989:chicken_2dinstall_2escm",(void*)f_4989},
{"f_5815:chicken_2dinstall_2escm",(void*)f_5815},
{"f_5813:chicken_2dinstall_2escm",(void*)f_5813},
{"f_4991:chicken_2dinstall_2escm",(void*)f_4991},
{"f_4993:chicken_2dinstall_2escm",(void*)f_4993},
{"f_4995:chicken_2dinstall_2escm",(void*)f_4995},
{"f_4997:chicken_2dinstall_2escm",(void*)f_4997},
{"f_5604:chicken_2dinstall_2escm",(void*)f_5604},
{"f_4999:chicken_2dinstall_2escm",(void*)f_4999},
{"f_5807:chicken_2dinstall_2escm",(void*)f_5807},
{"f_5801:chicken_2dinstall_2escm",(void*)f_5801},
{"f_5609:chicken_2dinstall_2escm",(void*)f_5609},
{"f_4577:chicken_2dinstall_2escm",(void*)f_4577},
{"f_4574:chicken_2dinstall_2escm",(void*)f_4574},
{"f_4936:chicken_2dinstall_2escm",(void*)f_4936},
{"f_5627:chicken_2dinstall_2escm",(void*)f_5627},
{"f_4946:chicken_2dinstall_2escm",(void*)f_4946},
{"f_4948:chicken_2dinstall_2escm",(void*)f_4948},
{"f_4942:chicken_2dinstall_2escm",(void*)f_4942},
{"f_5629:chicken_2dinstall_2escm",(void*)f_5629},
{"f_4598:chicken_2dinstall_2escm",(void*)f_4598},
{"f_4597:chicken_2dinstall_2escm",(void*)f_4597},
{"f_4594:chicken_2dinstall_2escm",(void*)f_4594},
{"f_4567:chicken_2dinstall_2escm",(void*)f_4567},
{"f_4561:chicken_2dinstall_2escm",(void*)f_4561},
{"f_4565:chicken_2dinstall_2escm",(void*)f_4565},
{"f_4562:chicken_2dinstall_2escm",(void*)f_4562},
{"f_4538:chicken_2dinstall_2escm",(void*)f_4538},
{"f_4531:chicken_2dinstall_2escm",(void*)f_4531},
{"f_4533:chicken_2dinstall_2escm",(void*)f_4533},
{"f_4707:chicken_2dinstall_2escm",(void*)f_4707},
{"f_4702:chicken_2dinstall_2escm",(void*)f_4702},
{"f_4700:chicken_2dinstall_2escm",(void*)f_4700},
{"f_4501:chicken_2dinstall_2escm",(void*)f_4501},
{"f_3200:chicken_2dinstall_2escm",(void*)f_3200},
{"f_4717:chicken_2dinstall_2escm",(void*)f_4717},
{"f_4712:chicken_2dinstall_2escm",(void*)f_4712},
{"f_3022:chicken_2dinstall_2escm",(void*)f_3022},
{"f_4558:chicken_2dinstall_2escm",(void*)f_4558},
{"f_4557:chicken_2dinstall_2escm",(void*)f_4557},
{"f_4551:chicken_2dinstall_2escm",(void*)f_4551},
{"f_4553:chicken_2dinstall_2escm",(void*)f_4553},
{"f_4728:chicken_2dinstall_2escm",(void*)f_4728},
{"f_5575:chicken_2dinstall_2escm",(void*)f_5575},
{"f_3025:chicken_2dinstall_2escm",(void*)f_3025},
{"f_5778:chicken_2dinstall_2escm",(void*)f_5778},
{"f_4736:chicken_2dinstall_2escm",(void*)f_4736},
{"f_5586:chicken_2dinstall_2escm",(void*)f_5586},
{"f_5775:chicken_2dinstall_2escm",(void*)f_5775},
{"f_5772:chicken_2dinstall_2escm",(void*)f_5772},
{"f_5770:chicken_2dinstall_2escm",(void*)f_5770},
{"f_4746:chicken_2dinstall_2escm",(void*)f_4746},
{"f_4741:chicken_2dinstall_2escm",(void*)f_4741},
{"f_5592:chicken_2dinstall_2escm",(void*)f_5592},
{"f_5588:chicken_2dinstall_2escm",(void*)f_5588},
{"f_3247:chicken_2dinstall_2escm",(void*)f_3247},
{"f_3246:chicken_2dinstall_2escm",(void*)f_3246},
{"f_3045:chicken_2dinstall_2escm",(void*)f_3045},
{"f_5799:chicken_2dinstall_2escm",(void*)f_5799},
{"f_4751:chicken_2dinstall_2escm",(void*)f_4751},
{"f_5597:chicken_2dinstall_2escm",(void*)f_5597},
{"f_3037:chicken_2dinstall_2escm",(void*)f_3037},
{"f_4510:chicken_2dinstall_2escm",(void*)f_4510},
{"f_4769:chicken_2dinstall_2escm",(void*)f_4769},
{"f_4762:chicken_2dinstall_2escm",(void*)f_4762},
{"f_4453:chicken_2dinstall_2escm",(void*)f_4453},
{"f_4259:chicken_2dinstall_2escm",(void*)f_4259},
{"f_4450:chicken_2dinstall_2escm",(void*)f_4450},
{"f_3257:chicken_2dinstall_2escm",(void*)f_3257},
{"f_5789:chicken_2dinstall_2escm",(void*)f_5789},
{"f_3252:chicken_2dinstall_2escm",(void*)f_3252},
{"f_4224:chicken_2dinstall_2escm",(void*)f_4224},
{"f_4424:chicken_2dinstall_2escm",(void*)f_4424},
{"f_4421:chicken_2dinstall_2escm",(void*)f_4421},
{"f_4427:chicken_2dinstall_2escm",(void*)f_4427},
{"f_3007:chicken_2dinstall_2escm",(void*)f_3007},
{"f_4436:chicken_2dinstall_2escm",(void*)f_4436},
{"f_4433:chicken_2dinstall_2escm",(void*)f_4433},
{"f_4239:chicken_2dinstall_2escm",(void*)f_4239},
{"f_4204:chicken_2dinstall_2escm",(void*)f_4204},
{"f_4215:chicken_2dinstall_2escm",(void*)f_4215},
{"f_4412:chicken_2dinstall_2escm",(void*)f_4412},
{"f_4415:chicken_2dinstall_2escm",(void*)f_4415},
{"f_4418:chicken_2dinstall_2escm",(void*)f_4418},
{"f_4639:chicken_2dinstall_2escm",(void*)f_4639},
{"f_4630:chicken_2dinstall_2escm",(void*)f_4630},
{"f_4632:chicken_2dinstall_2escm",(void*)f_4632},
{"f_4634:chicken_2dinstall_2escm",(void*)f_4634},
{"f_4446:chicken_2dinstall_2escm",(void*)f_4446},
{"f_4448:chicken_2dinstall_2escm",(void*)f_4448},
{"f_4863:chicken_2dinstall_2escm",(void*)f_4863},
{"f_5142:chicken_2dinstall_2escm",(void*)f_5142},
{"f_5544:chicken_2dinstall_2escm",(void*)f_5544},
{"f_5137:chicken_2dinstall_2escm",(void*)f_5137},
{"f_5533:chicken_2dinstall_2escm",(void*)f_5533},
{"f_5536:chicken_2dinstall_2escm",(void*)f_5536},
{"f_5530:chicken_2dinstall_2escm",(void*)f_5530},
{"toplevel:chicken_2dinstall_2escm",(void*)C_toplevel},
{"f_5112:chicken_2dinstall_2escm",(void*)f_5112},
{"f_5110:chicken_2dinstall_2escm",(void*)f_5110},
{"f7195:chicken_2dinstall_2escm",(void*)f7195},
{"f7190:chicken_2dinstall_2escm",(void*)f7190},
{"f_5756:chicken_2dinstall_2escm",(void*)f_5756},
{"f_5731:chicken_2dinstall_2escm",(void*)f_5731},
{"f_3192:chicken_2dinstall_2escm",(void*)f_3192},
{"f_5768:chicken_2dinstall_2escm",(void*)f_5768},
{"f_3390:chicken_2dinstall_2escm",(void*)f_3390},
{"f_4032:chicken_2dinstall_2escm",(void*)f_4032},
{"f_4038:chicken_2dinstall_2escm",(void*)f_4038},
{"f_3388:chicken_2dinstall_2escm",(void*)f_3388},
{"f_3386:chicken_2dinstall_2escm",(void*)f_3386},
{"f_3176:chicken_2dinstall_2escm",(void*)f_3176},
{"f_3173:chicken_2dinstall_2escm",(void*)f_3173},
{"f_4044:chicken_2dinstall_2escm",(void*)f_4044},
{"f_4046:chicken_2dinstall_2escm",(void*)f_4046},
{"f_4049:chicken_2dinstall_2escm",(void*)f_4049},
{"f_4048:chicken_2dinstall_2escm",(void*)f_4048},
{"f_3377:chicken_2dinstall_2escm",(void*)f_3377},
{"f_3375:chicken_2dinstall_2escm",(void*)f_3375},
{"f_3161:chicken_2dinstall_2escm",(void*)f_3161},
{"f_4012:chicken_2dinstall_2escm",(void*)f_4012},
{"f_4010:chicken_2dinstall_2escm",(void*)f_4010},
{"f_4014:chicken_2dinstall_2escm",(void*)f_4014},
{"f_6463:chicken_2dinstall_2escm",(void*)f_6463},
{"f_4019:chicken_2dinstall_2escm",(void*)f_4019},
{"f_3366:chicken_2dinstall_2escm",(void*)f_3366},
{"f_3364:chicken_2dinstall_2escm",(void*)f_3364},
{"f_4027:chicken_2dinstall_2escm",(void*)f_4027},
{"f_5351:chicken_2dinstall_2escm",(void*)f_5351},
{"f_5355:chicken_2dinstall_2escm",(void*)f_5355},
{"f_3774:chicken_2dinstall_2escm",(void*)f_3774},
{"f_3777:chicken_2dinstall_2escm",(void*)f_3777},
{"f_3778:chicken_2dinstall_2escm",(void*)f_3778},
{"f_5340:chicken_2dinstall_2escm",(void*)f_5340},
{"f_2462:chicken_2dinstall_2escm",(void*)f_2462},
{"f_2463:chicken_2dinstall_2escm",(void*)f_2463},
{"f_5348:chicken_2dinstall_2escm",(void*)f_5348},
{"f_2466:chicken_2dinstall_2escm",(void*)f_2466},
{"f_5346:chicken_2dinstall_2escm",(void*)f_5346},
{"f_6256:chicken_2dinstall_2escm",(void*)f_6256},
{"f_3593:chicken_2dinstall_2escm",(void*)f_3593},
{"f_4006:chicken_2dinstall_2escm",(void*)f_4006},
{"f_4000:chicken_2dinstall_2escm",(void*)f_4000},
{"f_3591:chicken_2dinstall_2escm",(void*)f_3591},
{"f_6669:chicken_2dinstall_2escm",(void*)f_6669},
{"f_4008:chicken_2dinstall_2escm",(void*)f_4008},
{"f_5330:chicken_2dinstall_2escm",(void*)f_5330},
{"f_5337:chicken_2dinstall_2escm",(void*)f_5337},
{"f_5335:chicken_2dinstall_2escm",(void*)f_5335},
{"f_5333:chicken_2dinstall_2escm",(void*)f_5333},
{"f_2495:chicken_2dinstall_2escm",(void*)f_2495},
{"f_5317:chicken_2dinstall_2escm",(void*)f_5317},
{"f_2499:chicken_2dinstall_2escm",(void*)f_2499},
{"f_2497:chicken_2dinstall_2escm",(void*)f_2497},
{"f_2695:chicken_2dinstall_2escm",(void*)f_2695},
{"f_6625:chicken_2dinstall_2escm",(void*)f_6625},
{"f_3799:chicken_2dinstall_2escm",(void*)f_3799},
{"f_3585:chicken_2dinstall_2escm",(void*)f_3585},
{"f_3783:chicken_2dinstall_2escm",(void*)f_3783},
{"f_3781:chicken_2dinstall_2escm",(void*)f_3781},
{"f_3788:chicken_2dinstall_2escm",(void*)f_3788},
{"f_6608:chicken_2dinstall_2escm",(void*)f_6608},
{"f_3603:chicken_2dinstall_2escm",(void*)f_3603},
{"f_3600:chicken_2dinstall_2escm",(void*)f_3600},
{"f_2874:chicken_2dinstall_2escm",(void*)f_2874},
{"f_2876:chicken_2dinstall_2escm",(void*)f_2876},
{"f_3864:chicken_2dinstall_2escm",(void*)f_3864},
{"f_3862:chicken_2dinstall_2escm",(void*)f_3862},
{"f_3869:chicken_2dinstall_2escm",(void*)f_3869},
{"f_3800:chicken_2dinstall_2escm",(void*)f_3800},
{"f_3627:chicken_2dinstall_2escm",(void*)f_3627},
{"f_3622:chicken_2dinstall_2escm",(void*)f_3622},
{"f_3624:chicken_2dinstall_2escm",(void*)f_3624},
{"f_3620:chicken_2dinstall_2escm",(void*)f_3620},
{"f_2899:chicken_2dinstall_2escm",(void*)f_2899},
{"f_2895:chicken_2dinstall_2escm",(void*)f_2895},
{"f_3616:chicken_2dinstall_2escm",(void*)f_3616},
{"f_3618:chicken_2dinstall_2escm",(void*)f_3618},
{"f_3612:chicken_2dinstall_2escm",(void*)f_3612},
{"f_3614:chicken_2dinstall_2escm",(void*)f_3614},
{"f_6611:chicken_2dinstall_2escm",(void*)f_6611},
{"f_3820:chicken_2dinstall_2escm",(void*)f_3820},
{"f_5463:chicken_2dinstall_2escm",(void*)f_5463},
{"f_2670:chicken_2dinstall_2escm",(void*)f_2670},
{"f_5269:chicken_2dinstall_2escm",(void*)f_5269},
{"f_5275:chicken_2dinstall_2escm",(void*)f_5275},
{"f_6678:chicken_2dinstall_2escm",(void*)f_6678},
{"f_2851:chicken_2dinstall_2escm",(void*)f_2851},
{"f_6673:chicken_2dinstall_2escm",(void*)f_6673},
{"f_6676:chicken_2dinstall_2escm",(void*)f_6676},
{"f_3630:chicken_2dinstall_2escm",(void*)f_3630},
{"f_5278:chicken_2dinstall_2escm",(void*)f_5278},
{"f_3984:chicken_2dinstall_2escm",(void*)f_3984},
{"f_3988:chicken_2dinstall_2escm",(void*)f_3988},
{"f_6498:chicken_2dinstall_2escm",(void*)f_6498},
{"f_6671:chicken_2dinstall_2escm",(void*)f_6671},
{"f_2848:chicken_2dinstall_2escm",(void*)f_2848},
{"f_5476:chicken_2dinstall_2escm",(void*)f_5476},
{"f_6494:chicken_2dinstall_2escm",(void*)f_6494},
{"f_6471:chicken_2dinstall_2escm",(void*)f_6471},
{"f_5280:chicken_2dinstall_2escm",(void*)f_5280},
{"f_5284:chicken_2dinstall_2escm",(void*)f_5284},
{"f_3665:chicken_2dinstall_2escm",(void*)f_3665},
{"f_2614:chicken_2dinstall_2escm",(void*)f_2614},
{"f_2857:chicken_2dinstall_2escm",(void*)f_2857},
{"f_5488:chicken_2dinstall_2escm",(void*)f_5488},
{"f_6485:chicken_2dinstall_2escm",(void*)f_6485},
{"f_6483:chicken_2dinstall_2escm",(void*)f_6483},
{"f_2668:chicken_2dinstall_2escm",(void*)f_2668},
{"f_3811:chicken_2dinstall_2escm",(void*)f_3811},
{"f_6281:chicken_2dinstall_2escm",(void*)f_6281},
{"f_5490:chicken_2dinstall_2escm",(void*)f_5490},
{"f_5297:chicken_2dinstall_2escm",(void*)f_5297},
{"f_2866:chicken_2dinstall_2escm",(void*)f_2866},
{"f_6477:chicken_2dinstall_2escm",(void*)f_6477},
{"f_3355:chicken_2dinstall_2escm",(void*)f_3355},
{"f_5080:chicken_2dinstall_2escm",(void*)f_5080},
{"f_3350:chicken_2dinstall_2escm",(void*)f_3350},
{"f_6688:chicken_2dinstall_2escm",(void*)f_6688},
{"f_5086:chicken_2dinstall_2escm",(void*)f_5086},
{"f_6683:chicken_2dinstall_2escm",(void*)f_6683},
{"f_2635:chicken_2dinstall_2escm",(void*)f_2635},
{"f_6681:chicken_2dinstall_2escm",(void*)f_6681},
{"f_3345:chicken_2dinstall_2escm",(void*)f_3345},
{"f_3149:chicken_2dinstall_2escm",(void*)f_3149},
{"f_5099:chicken_2dinstall_2escm",(void*)f_5099},
{"f_3340:chicken_2dinstall_2escm",(void*)f_3340},
{"f_5097:chicken_2dinstall_2escm",(void*)f_5097},
{"f_3142:chicken_2dinstall_2escm",(void*)f_3142},
{"f_2805:chicken_2dinstall_2escm",(void*)f_2805},
{"f_2807:chicken_2dinstall_2escm",(void*)f_2807},
{"f_3334:chicken_2dinstall_2escm",(void*)f_3334},
{"f_3134:chicken_2dinstall_2escm",(void*)f_3134},
{"f_2815:chicken_2dinstall_2escm",(void*)f_2815},
{"f_2629:chicken_2dinstall_2escm",(void*)f_2629},
{"f_2627:chicken_2dinstall_2escm",(void*)f_2627},
{"f_6698:chicken_2dinstall_2escm",(void*)f_6698},
{"f_6696:chicken_2dinstall_2escm",(void*)f_6696},
{"f_6693:chicken_2dinstall_2escm",(void*)f_6693},
{"f_3122:chicken_2dinstall_2escm",(void*)f_3122},
{"f_3120:chicken_2dinstall_2escm",(void*)f_3120},
{"f_3318:chicken_2dinstall_2escm",(void*)f_3318},
{"f_2341:chicken_2dinstall_2escm",(void*)f_2341},
{"f_3309:chicken_2dinstall_2escm",(void*)f_3309},
{"f_6417:chicken_2dinstall_2escm",(void*)f_6417},
{"f_4292:chicken_2dinstall_2escm",(void*)f_4292},
{"f_4298:chicken_2dinstall_2escm",(void*)f_4298},
{"f_4492:chicken_2dinstall_2escm",(void*)f_4492},
{"f_4495:chicken_2dinstall_2escm",(void*)f_4495},
{"f_4490:chicken_2dinstall_2escm",(void*)f_4490},
{"f_2323:chicken_2dinstall_2escm",(void*)f_2323},
{"f_2325:chicken_2dinstall_2escm",(void*)f_2325},
{"f_2321:chicken_2dinstall_2escm",(void*)f_2321},
{"f_2327:chicken_2dinstall_2escm",(void*)f_2327},
{"f_2329:chicken_2dinstall_2escm",(void*)f_2329},
{"f_4268:chicken_2dinstall_2escm",(void*)f_4268},
{"f_4465:chicken_2dinstall_2escm",(void*)f_4465},
{"f_4463:chicken_2dinstall_2escm",(void*)f_4463},
{"f_4468:chicken_2dinstall_2escm",(void*)f_4468},
{"f_4098:chicken_2dinstall_2escm",(void*)f_4098},
{"f_4461:chicken_2dinstall_2escm",(void*)f_4461},
{"f_2335:chicken_2dinstall_2escm",(void*)f_2335},
{"f_2338:chicken_2dinstall_2escm",(void*)f_2338},
{"f_4475:chicken_2dinstall_2escm",(void*)f_4475},
{"f_4473:chicken_2dinstall_2escm",(void*)f_4473},
{"f_4477:chicken_2dinstall_2escm",(void*)f_4477},
{"f_2303:chicken_2dinstall_2escm",(void*)f_2303},
{"f_2301:chicken_2dinstall_2escm",(void*)f_2301},
{"f_2307:chicken_2dinstall_2escm",(void*)f_2307},
{"f_2305:chicken_2dinstall_2escm",(void*)f_2305},
{"f_2309:chicken_2dinstall_2escm",(void*)f_2309},
{"f_2745:chicken_2dinstall_2escm",(void*)f_2745},
{"f_4074:chicken_2dinstall_2escm",(void*)f_4074},
{"f_2313:chicken_2dinstall_2escm",(void*)f_2313},
{"f_2311:chicken_2dinstall_2escm",(void*)f_2311},
{"f_2317:chicken_2dinstall_2escm",(void*)f_2317},
{"f_2315:chicken_2dinstall_2escm",(void*)f_2315},
{"f_2319:chicken_2dinstall_2escm",(void*)f_2319},
{"f_4086:chicken_2dinstall_2escm",(void*)f_4086},
{"f_4678:chicken_2dinstall_2escm",(void*)f_4678},
{"f_4673:chicken_2dinstall_2escm",(void*)f_4673},
{"f_4052:chicken_2dinstall_2escm",(void*)f_4052},
{"f_3932:chicken_2dinstall_2escm",(void*)f_3932},
{"f_3937:chicken_2dinstall_2escm",(void*)f_3937},
{"f_3939:chicken_2dinstall_2escm",(void*)f_3939},
{"f_2939:chicken_2dinstall_2escm",(void*)f_2939},
{"f_4065:chicken_2dinstall_2escm",(void*)f_4065},
{"f_4060:chicken_2dinstall_2escm",(void*)f_4060},
{"f_3924:chicken_2dinstall_2escm",(void*)f_3924},
{"f_5717:chicken_2dinstall_2escm",(void*)f_5717},
{"f_4486:chicken_2dinstall_2escm",(void*)f_4486},
{"f_4488:chicken_2dinstall_2escm",(void*)f_4488},
{"f_4480:chicken_2dinstall_2escm",(void*)f_4480},
{"f_4872:chicken_2dinstall_2escm",(void*)f_4872},
{"f_4870:chicken_2dinstall_2escm",(void*)f_4870},
{"f_4879:chicken_2dinstall_2escm",(void*)f_4879},
{"f_4688:chicken_2dinstall_2escm",(void*)f_4688},
{"f_4683:chicken_2dinstall_2escm",(void*)f_4683},
{"f_5729:chicken_2dinstall_2escm",(void*)f_5729},
{"f_4888:chicken_2dinstall_2escm",(void*)f_4888},
{"f_5723:chicken_2dinstall_2escm",(void*)f_5723},
{"f_5527:chicken_2dinstall_2escm",(void*)f_5527},
{"f_5521:chicken_2dinstall_2escm",(void*)f_5521},
{"f_4698:chicken_2dinstall_2escm",(void*)f_4698},
{"f_4696:chicken_2dinstall_2escm",(void*)f_4696},
{"f_4693:chicken_2dinstall_2escm",(void*)f_4693},
{"f_5518:chicken_2dinstall_2escm",(void*)f_5518},
{"f_5513:chicken_2dinstall_2escm",(void*)f_5513},
{"f_4667:chicken_2dinstall_2escm",(void*)f_4667},
{"f_5700:chicken_2dinstall_2escm",(void*)f_5700},
{"f_5504:chicken_2dinstall_2escm",(void*)f_5504},
{"f_4830:chicken_2dinstall_2escm",(void*)f_4830},
{"f_4833:chicken_2dinstall_2escm",(void*)f_4833},
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
o|hiding nonexported module bindings: main#+default-repository-files+ 
o|hiding nonexported module bindings: main#constant191 
o|hiding nonexported module bindings: main#constant195 
o|hiding nonexported module bindings: main#*program-path* 
o|hiding nonexported module bindings: main#*keep* 
o|hiding nonexported module bindings: main#*keep-existing* 
o|hiding nonexported module bindings: main#*force* 
o|hiding nonexported module bindings: main#*run-tests* 
o|hiding nonexported module bindings: main#*retrieve-only* 
o|hiding nonexported module bindings: main#*no-install* 
o|hiding nonexported module bindings: main#*username* 
o|hiding nonexported module bindings: main#*password* 
o|hiding nonexported module bindings: main#*default-sources* 
o|hiding nonexported module bindings: main#*default-location* 
o|hiding nonexported module bindings: main#*default-transport* 
o|hiding nonexported module bindings: main#*windows-shell* 
o|hiding nonexported module bindings: main#*proxy-host* 
o|hiding nonexported module bindings: main#*proxy-port* 
o|hiding nonexported module bindings: main#*proxy-user-pass* 
o|hiding nonexported module bindings: main#*running-test* 
o|hiding nonexported module bindings: main#*mappings* 
o|hiding nonexported module bindings: main#*deploy* 
o|hiding nonexported module bindings: main#*trunk* 
o|hiding nonexported module bindings: main#*csc-features* 
o|hiding nonexported module bindings: main#*csc-nonfeatures* 
o|hiding nonexported module bindings: main#*prefix* 
o|hiding nonexported module bindings: main#*aliases* 
o|hiding nonexported module bindings: main#*cross-chicken* 
o|hiding nonexported module bindings: main#*host-extension* 
o|hiding nonexported module bindings: main#*target-extension* 
o|hiding nonexported module bindings: main#*debug-setup* 
o|hiding nonexported module bindings: main#*keep-going* 
o|hiding nonexported module bindings: main#*override* 
o|hiding nonexported module bindings: main#*reinstall* 
o|hiding nonexported module bindings: main#*show-depends* 
o|hiding nonexported module bindings: main#*show-foreign-depends* 
o|hiding nonexported module bindings: main#*hacks* 
o|hiding nonexported module bindings: main#repo-path 
o|hiding nonexported module bindings: main#get-prefix 
o|hiding nonexported module bindings: main#load-defaults 
o|hiding nonexported module bindings: main#resolve-location 
o|hiding nonexported module bindings: main#known-default-sources 
o|hiding nonexported module bindings: main#invalidate-default-source! 
o|hiding nonexported module bindings: main#deps 
o|hiding nonexported module bindings: main#init-repository 
o|hiding nonexported module bindings: main#ext-version 
o|hiding nonexported module bindings: main#meta-dependencies 
o|hiding nonexported module bindings: main#check-dependency 
o|hiding nonexported module bindings: main#outdated-dependencies 
o|hiding nonexported module bindings: main#*eggs+dirs+vers* 
o|hiding nonexported module bindings: main#*dependencies* 
o|hiding nonexported module bindings: main#*checked* 
o|hiding nonexported module bindings: main#*csi* 
o|hiding nonexported module bindings: main#try-extension 
o|hiding nonexported module bindings: main#with-default-sources 
o|hiding nonexported module bindings: main#try-default-sources 
o|hiding nonexported module bindings: main#make-replace-extension-question 
o|hiding nonexported module bindings: main#override-version 
o|hiding nonexported module bindings: main#show-depends 
o|hiding nonexported module bindings: main#retrieve 
o|hiding nonexported module bindings: main#check-platform 
o|hiding nonexported module bindings: main#make-install-command 
o|hiding nonexported module bindings: main#keep-going 
o|hiding nonexported module bindings: main#install 
o|hiding nonexported module bindings: main#cleanup 
o|hiding nonexported module bindings: main#update-db 
o|hiding nonexported module bindings: main#apply-mappings 
o|hiding nonexported module bindings: main#scan-directory 
o|hiding nonexported module bindings: main#$system 
o|hiding nonexported module bindings: main#installed-extensions 
o|hiding nonexported module bindings: main#list-available-extensions 
o|hiding nonexported module bindings: main#command 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#setup-proxy 
o|hiding nonexported module bindings: main#info->egg 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  printf		1
S|  map		10
S|  for-each		12
S|  sprintf		11
o|eliminated procedure checks: 83 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (string-ref string fixnum)
o|  2 (string-length string)
o|  9 (cddr (pair * pair))
o|  1 (zero? fixnum)
o|  1 (string-append string string)
o|  4 (current-error-port)
o|  47 (string=? string string)
o|  24 (car pair)
o|  6 (##sys#check-list (or pair list) *)
o|  2 (= fixnum fixnum)
o|  47 (cdr pair)
o|  8 (eqv? * (not float))
o|  2 (positive? fixnum)
o|  4 (length list)
o|Removed `not' forms: 16 
o|merged explicitly consed rest parameter: tmp256257 
o|inlining procedure: k2417 
o|contracted procedure: k2431 
o|inlining procedure: k2417 
o|propagated global variable: r24186746 main#*prefix* 
o|inlining procedure: k2812 
o|inlining procedure: k2812 
o|inlining procedure: k2884 
o|inlining procedure: k2884 
o|inlining procedure: k2942 
o|inlining procedure: k2942 
o|inlining procedure: k2961 
o|inlining procedure: k2961 
o|inlining procedure: k2975 
o|inlining procedure: k2975 
o|inlining procedure: k3010 
o|inlining procedure: k3021 
o|inlining procedure: k3021 
o|inlining procedure: k3010 
o|inlining procedure: k3048 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|inlining procedure: k3048 
o|inlining procedure: k3076 
o|inlining procedure: k3076 
o|inlining procedure: k3095 
o|inlining procedure: k3095 
o|inlining procedure: k3103 
o|inlining procedure: k3103 
o|contracted procedure: k3109 
o|inlining procedure: k3115 
o|contracted procedure: k3126 
o|inlining procedure: k3137 
o|inlining procedure: k3137 
o|substituted constant variable: a3146 
o|inlining procedure: k3150 
o|inlining procedure: k3150 
o|inlining procedure: k3115 
o|inlining procedure: k3207 
o|inlining procedure: k3207 
o|substituted constant variable: a3226 
o|inlining procedure: k3478 
o|inlining procedure: k3478 
o|contracted procedure: "(chicken-install.scm:358) main#invalidate-default-source!" 
o|inlining procedure: k3522 
o|inlining procedure: k3522 
o|inlining procedure: k3534 
o|inlining procedure: k3534 
o|contracted procedure: "(chicken-install.scm:340) main#known-default-sources" 
o|inlining procedure: k2829 
o|inlining procedure: k2847 
o|inlining procedure: k2847 
o|propagated global variable: a28466791 main#*default-location* 
o|inlining procedure: k2829 
o|propagated global variable: f_28286792 main#*default-sources* 
o|merged explicitly consed rest parameter: type696 
o|inlining procedure: k3784 
o|inlining procedure: k3792 
o|inlining procedure: k3792 
o|inlining procedure: k3814 
o|inlining procedure: k3814 
o|inlining procedure: k3784 
o|inlining procedure: k3872 
o|inlining procedure: k3872 
o|propagated global variable: g725727 main#*eggs+dirs+vers* 
o|inlining procedure: k3889 
o|inlining procedure: k3889 
o|substituted constant variable: a3902 
o|substituted constant variable: a3904 
o|inlining procedure: k3921 
o|inlining procedure: k3921 
o|contracted procedure: "(chicken-install.scm:443) main#try-default-sources" 
o|contracted procedure: k3551 
o|inlining procedure: k3549 
o|contracted procedure: "(chicken-install.scm:366) main#try-extension" 
o|inlining procedure: k3359 
o|inlining procedure: k3359 
o|inlining procedure: k3381 
o|inlining procedure: k3381 
o|inlining procedure: k3397 
o|inlining procedure: k3397 
o|inlining procedure: k3406 
o|inlining procedure: k3406 
o|inlining procedure: k3415 
o|inlining procedure: k3415 
o|contracted procedure: k3446 
o|propagated global variable: r3447 main#*retrieve-only* 
o|inlining procedure: k3568 
o|inlining procedure: k3568 
o|inlining procedure: k3549 
o|contracted procedure: "(chicken-install.scm:442) main#override-version" 
o|inlining procedure: k3690 
o|inlining procedure: k3690 
o|inlining procedure: k3685 
o|inlining procedure: k3685 
o|inlining procedure: k3756 
o|inlining procedure: k3756 
o|inlining procedure: k3985 
o|inlining procedure: k3990 
o|inlining procedure: k3990 
o|contracted procedure: "(chicken-install.scm:462) main#outdated-dependencies" 
o|inlining procedure: k3265 
o|inlining procedure: k3265 
o|inlining procedure: k3300 
o|inlining procedure: k3300 
o|inlining procedure: k3312 
o|inlining procedure: k3312 
o|propagated global variable: g527529 main#*hacks* 
o|contracted procedure: "(chicken-install.scm:291) main#meta-dependencies" 
o|inlining procedure: k3001 
o|inlining procedure: k3001 
o|inlining procedure: k4039 
o|inlining procedure: k4068 
o|inlining procedure: k4068 
o|inlining procedure: k4039 
o|propagated global variable: tmp867869 main#*force* 
o|inlining procedure: k4090 
o|propagated global variable: tmp867869 main#*force* 
o|inlining procedure: k4090 
o|contracted procedure: "(chicken-install.scm:479) main#make-replace-extension-question" 
o|inlining procedure: k3602 
o|inlining procedure: k3602 
o|inlining procedure: k3597 
o|inlining procedure: k3597 
o|inlining procedure: k4122 
o|inlining procedure: k4122 
o|inlining procedure: k4139 
o|inlining procedure: k4139 
o|contracted procedure: "(chicken-install.scm:459) main#check-platform" 
o|inlining procedure: k4244 
o|inlining procedure: k4244 
o|inlining procedure: k4262 
o|inlining procedure: k4262 
o|inlining procedure: k4287 
o|inlining procedure: k4287 
o|inlining procedure: k4314 
o|inlining procedure: k4314 
o|inlining procedure: k4325 
o|inlining procedure: k4325 
o|inlining procedure: k3985 
o|inlining procedure: k4198 
o|inlining procedure: k4198 
o|propagated global variable: g821823 main#*eggs+dirs+vers* 
o|inlining procedure: k4218 
o|inlining procedure: k4218 
o|inlining procedure: k4963 
o|inlining procedure: k4963 
o|inlining procedure: k5287 
o|inlining procedure: k5287 
o|inlining procedure: k5307 
o|inlining procedure: k5307 
o|inlining procedure: k5336 
o|inlining procedure: k5336 
o|inlining procedure: k5368 
o|inlining procedure: k5368 
o|inlining procedure: k5352 
o|inlining procedure: k5352 
o|inlining procedure: k5464 
o|inlining procedure: k5464 
o|inlining procedure: k5475 
o|inlining procedure: k5475 
o|merged explicitly consed rest parameter: args1514 
o|inlining procedure: k5578 
o|inlining procedure: k5578 
o|inlining procedure: k5612 
o|inlining procedure: k5612 
o|inlining procedure: k6705 
o|inlining procedure: k6705 
o|contracted procedure: "(chicken-install.scm:1043) main#main" 
o|inlining procedure: k5637 
o|inlining procedure: k5651 
o|contracted procedure: "(chicken-install.scm:830) main#update-db" 
o|inlining procedure: k5026 
o|inlining procedure: k5026 
o|inlining procedure: k5115 
o|inlining procedure: k5115 
o|inlining procedure: k5145 
o|inlining procedure: k5145 
o|inlining procedure: k5252 
o|inlining procedure: k5252 
o|inlining procedure: k5651 
o|contracted procedure: "(chicken-install.scm:831) main#scan-directory" 
o|inlining procedure: k5442 
o|inlining procedure: k5442 
o|inlining procedure: k5669 
o|contracted procedure: "(chicken-install.scm:867) main#list-available-extensions" 
o|inlining procedure: k5546 
o|inlining procedure: k5546 
o|inlining procedure: k5669 
o|consed rest parameter at call site: "(chicken-install.scm:870) main#show-depends" 2 
o|inlining procedure: k5684 
o|consed rest parameter at call site: "(chicken-install.scm:872) main#show-depends" 2 
o|inlining procedure: k5684 
o|contracted procedure: "(chicken-install.scm:874) main#install" 
o|inlining procedure: k4534 
o|consed rest parameter at call site: "(chicken-install.scm:628) main#command" 2 
o|inlining procedure: k4589 
o|inlining procedure: k4589 
o|contracted procedure: k4659 
o|inlining procedure: k4656 
o|inlining procedure: k4656 
o|inlining procedure: k4668 
o|inlining procedure: k4668 
o|contracted procedure: "(chicken-install.scm:613) main#make-install-command" 
o|consed rest parameter at call site: "(chicken-install.scm:539) main#get-prefix" 1 
o|consed rest parameter at call site: "(chicken-install.scm:534) main#get-prefix" 1 
o|inlining procedure: k4502 
o|inlining procedure: k4502 
o|propagated global variable: tmp928930 main#*deploy* 
o|inlining procedure: k4517 
o|propagated global variable: tmp928930 main#*deploy* 
o|inlining procedure: k4517 
o|inlining procedure: k4729 
o|inlining procedure: k4729 
o|consed rest parameter at call site: "(chicken-install.scm:604) main#command" 2 
o|inlining procedure: k4794 
o|inlining procedure: k4794 
o|inlining procedure: k4809 
o|inlining procedure: k4809 
o|substituted constant variable: a4834 
o|substituted constant variable: a4835 
o|contracted procedure: k4836 
o|inlining procedure: k4854 
o|inlining procedure: k4854 
o|inlining procedure: k4534 
o|inlining procedure: k4882 
o|inlining procedure: k4882 
o|inlining procedure: k4914 
o|inlining procedure: k4914 
o|inlining procedure: k4953 
o|inlining procedure: k4953 
o|inlining procedure: k5701 
o|inlining procedure: k5701 
o|inlining procedure: k5713 
o|inlining procedure: k5734 
o|inlining procedure: k5734 
o|propagated global variable: tmp15561558 main#*force* 
o|propagated global variable: tmp15561558 main#*force* 
o|contracted procedure: "(chicken-install.scm:836) main#installed-extensions" 
o|inlining procedure: k5501 
o|inlining procedure: k5501 
o|contracted procedure: "(chicken-install.scm:735) main#repo-path" 
o|inlining procedure: k2382 
o|inlining procedure: k2382 
o|inlining procedure: k5713 
o|contracted procedure: k5785 
o|inlining procedure: k5790 
o|inlining procedure: k5818 
o|inlining procedure: k5818 
o|inlining procedure: k5790 
o|contracted procedure: "(chicken-install.scm:833) main#load-defaults" 
o|inlining procedure: k2469 
o|inlining procedure: k2484 
o|inlining procedure: k2484 
o|inlining procedure: k2469 
o|inlining procedure: k2539 
o|inlining procedure: k2592 
o|inlining procedure: k2592 
o|inlining procedure: k2539 
o|inlining procedure: k2631 
o|inlining procedure: k2631 
o|inlining procedure: k2651 
o|inlining procedure: k2651 
o|substituted constant variable: a2660 
o|inlining procedure: k2673 
o|inlining procedure: k2673 
o|inlining procedure: k2699 
o|inlining procedure: k2699 
o|substituted constant variable: a2753 
o|substituted constant variable: a2755 
o|substituted constant variable: a2757 
o|substituted constant variable: a2759 
o|substituted constant variable: a2761 
o|substituted constant variable: a2763 
o|inlining procedure: k2455 
o|inlining procedure: k2784 
o|inlining procedure: k2784 
o|inlining procedure: k2455 
o|inlining procedure: k5637 
o|substituted constant variable: a5869 
o|inlining procedure: k5865 
o|inlining procedure: k5865 
o|substituted constant variable: a5882 
o|substituted constant variable: a5893 
o|inlining procedure: k5889 
o|inlining procedure: k5889 
o|substituted constant variable: a5907 
o|substituted constant variable: a5922 
o|inlining procedure: k5918 
o|inlining procedure: k5918 
o|substituted constant variable: a5936 
o|substituted constant variable: a5964 
o|inlining procedure: k5960 
o|inlining procedure: k5960 
o|substituted constant variable: a5995 
o|substituted constant variable: a6037 
o|inlining procedure: k6033 
o|inlining procedure: k6033 
o|substituted constant variable: a6052 
o|substituted constant variable: a6068 
o|inlining procedure: k6064 
o|inlining procedure: k6064 
o|substituted constant variable: a6082 
o|contracted procedure: "(chicken-install.scm:927) main#init-repository" 
o|consed rest parameter at call site: "(chicken-install.scm:215) main#command" 2 
o|substituted constant variable: main#+default-repository-files+ 
o|inlining procedure: k2922 
o|inlining procedure: k2922 
o|substituted constant variable: main#+default-repository-files+ 
o|substituted constant variable: main#+default-repository-files+ 
o|substituted constant variable: a6107 
o|inlining procedure: k6104 
o|inlining procedure: k6104 
o|substituted constant variable: a6133 
o|substituted constant variable: a6167 
o|inlining procedure: k6164 
o|inlining procedure: k6164 
o|substituted constant variable: a6198 
o|substituted constant variable: a6209 
o|inlining procedure: k6206 
o|inlining procedure: k6206 
o|substituted constant variable: a6220 
o|substituted constant variable: a6231 
o|inlining procedure: k6228 
o|inlining procedure: k6228 
o|substituted constant variable: a6242 
o|substituted constant variable: a6253 
o|inlining procedure: k6250 
o|inlining procedure: k6250 
o|substituted constant variable: a6278 
o|substituted constant variable: a6303 
o|inlining procedure: k6300 
o|inlining procedure: k6300 
o|substituted constant variable: a6331 
o|substituted constant variable: a6345 
o|inlining procedure: k6342 
o|inlining procedure: k6342 
o|substituted constant variable: a6356 
o|substituted constant variable: a6367 
o|inlining procedure: k6364 
o|inlining procedure: k6364 
o|substituted constant variable: a6378 
o|substituted constant variable: a6389 
o|inlining procedure: k6386 
o|inlining procedure: k6386 
o|substituted constant variable: a6414 
o|substituted constant variable: a6439 
o|inlining procedure: k6436 
o|inlining procedure: k6436 
o|substituted constant variable: a6450 
o|inlining procedure: k6458 
o|inlining procedure: k6472 
o|inlining procedure: k6501 
o|inlining procedure: k6501 
o|inlining procedure: k6472 
o|substituted constant variable: main#*short-options* 
o|substituted constant variable: a6545 
o|inlining procedure: k6458 
o|inlining procedure: k6573 
o|inlining procedure: k6573 
o|inlining procedure: k6593 
o|inlining procedure: k6593 
o|substituted constant variable: a6634 
o|substituted constant variable: a6636 
o|substituted constant variable: a6638 
o|substituted constant variable: a6641 
o|substituted constant variable: a6643 
o|substituted constant variable: a6645 
o|substituted constant variable: a6647 
o|substituted constant variable: a6649 
o|substituted constant variable: a6651 
o|substituted constant variable: a6653 
o|substituted constant variable: a6655 
o|substituted constant variable: a6657 
o|substituted constant variable: a6659 
o|substituted constant variable: a6661 
o|inlining procedure: k6662 
o|inlining procedure: k6662 
o|substituted constant variable: a6666 
o|replaced variables: 608 
o|removed binding forms: 212 
o|Removed `not' forms: 2 
o|removed side-effect free assignment to unused variable: main#+default-repository-files+ 
o|substituted constant variable: r28856750 
o|substituted constant variable: r29626754 
o|substituted constant variable: a30206758 
o|substituted constant variable: a30566762 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|contracted procedure: k3103 
o|substituted constant variable: r31046770 
o|substituted constant variable: r32086778 
o|substituted constant variable: r37856798 
o|substituted constant variable: r38906801 
o|substituted constant variable: r38906801 
o|inlining procedure: k3889 
o|inlining procedure: k3889 
o|substituted constant variable: r33986813 
o|substituted constant variable: r34076815 
o|substituted constant variable: r34166817 
o|substituted constant variable: a30006843 
o|propagated global variable: r40916848 main#*force* 
o|substituted constant variable: r43156865 
o|converted assignments to bindings: (fail909) 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|substituted constant variable: a67046893 
o|substituted constant variable: a67046894 
o|substituted constant variable: r46576917 
o|substituted constant variable: r46696920 
o|contracted procedure: k4502 
o|substituted constant variable: r45036922 
o|propagated global variable: r45186923 main#*deploy* 
o|inlining procedure: k4517 
o|substituted constant variable: r47956928 
o|substituted constant variable: r55026952 
o|substituted constant variable: r26526971 
o|inlining procedure: k2706 
o|converted assignments to bindings: (broken276) 
o|inlining procedure: k6573 
o|simplifications: ((let . 2)) 
o|replaced variables: 48 
o|removed binding forms: 647 
o|removed conditional forms: 2 
o|Removed `not' forms: 1 
o|inlining procedure: k2423 
o|inlining procedure: k2423 
o|propagated global variable: tmp2672697126 main#*prefix* 
o|propagated global variable: tmp2672697126 main#*prefix* 
o|inlining procedure: k2881 
o|substituted constant variable: a30567036 
o|inlining procedure: k3511 
o|inlining procedure: k3964 
o|contracted procedure: k4517 
o|propagated global variable: r4518 main#*host-extension* 
o|substituted constant variable: r45187090 
o|inlining procedure: k5699 
o|inlining procedure: k2764 
o|inlining procedure: k2764 
o|inlining procedure: "(chicken-install.scm:881) main#usage" 
o|inlining procedure: "(chicken-install.scm:898) main#usage" 
o|inlining procedure: "(chicken-install.scm:902) main#usage" 
o|inlining procedure: "(chicken-install.scm:906) main#usage" 
o|inlining procedure: "(chicken-install.scm:926) main#usage" 
o|inlining procedure: "(chicken-install.scm:930) main#usage" 
o|inlining procedure: "(chicken-install.scm:934) main#usage" 
o|inlining procedure: "(chicken-install.scm:939) main#usage" 
o|inlining procedure: "(chicken-install.scm:959) main#usage" 
o|inlining procedure: "(chicken-install.scm:963) main#usage" 
o|inlining procedure: "(chicken-install.scm:967) main#usage" 
o|inlining procedure: "(chicken-install.scm:986) main#usage" 
o|inlining procedure: "(chicken-install.scm:990) main#usage" 
o|inlining procedure: "(chicken-install.scm:1008) main#usage" 
o|inlining procedure: "(chicken-install.scm:1009) main#usage" 
o|replaced variables: 1 
o|removed binding forms: 65 
o|removed conditional forms: 1 
o|substituted constant variable: tmp2672697125 
o|substituted constant variable: tmp2672697125 
o|substituted constant variable: r28827127 
o|substituted constant variable: r28827127 
o|substituted constant variable: r28827127 
o|substituted constant variable: r38907047 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: r27657184 
o|substituted constant variable: code15187188 
o|substituted constant variable: code15187193 
o|substituted constant variable: code15187198 
o|substituted constant variable: code15187203 
o|substituted constant variable: code15187210 
o|substituted constant variable: code15187215 
o|substituted constant variable: code15187220 
o|substituted constant variable: code15187225 
o|substituted constant variable: code15187230 
o|substituted constant variable: code15187235 
o|substituted constant variable: code15187240 
o|substituted constant variable: code15187245 
o|substituted constant variable: code15187250 
o|substituted constant variable: code15187257 
o|substituted constant variable: code15187262 
o|simplifications: ((let . 1)) 
o|replaced variables: 12 
o|removed binding forms: 9 
o|removed conditional forms: 3 
o|removed binding forms: 32 
o|simplifications: ((if . 34) (##core#call . 400)) 
o|  call simplifications:
o|    string=?
o|    char=?
o|    alist-cons	2
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    cddr	2
o|    =
o|    first
o|    length
o|    >
o|    caddr	3
o|    string->number
o|    apply
o|    ##sys#setslot	10
o|    write-char	4
o|    list	10
o|    ##sys#apply	5
o|    ##sys#structure?
o|    memv	6
o|    ##sys#check-list	17
o|    pair?	54
o|    ##sys#slot	47
o|    ##sys#list	6
o|    list?	5
o|    string?	5
o|    symbol?	4
o|    cons	29
o|    ##sys#call-with-values	12
o|    values	17
o|    eq?	19
o|    equal?	7
o|    member	4
o|    cadr	42
o|    assq	10
o|    assoc	3
o|    cdr	12
o|    null?	9
o|    car	30
o|    not	11
o|contracted procedure: k2437 
o|contracted procedure: k2414 
o|contracted procedure: k2420 
o|contracted procedure: k2810 
o|contracted procedure: k2817 
o|contracted procedure: k2879 
o|contracted procedure: k2881 
o|contracted procedure: k2944 
o|contracted procedure: k2959 
o|contracted procedure: k2968 
o|contracted procedure: k2973 
o|contracted procedure: k2980 
o|contracted procedure: k3012 
o|contracted procedure: k3014 
o|contracted procedure: k3042 
o|contracted procedure: k3050 
o|contracted procedure: k3071 
o|contracted procedure: k3079 
o|contracted procedure: k3089 
o|contracted procedure: k3097 
o|contracted procedure: k3163 
o|contracted procedure: k3169 
o|contracted procedure: k3178 
o|contracted procedure: k3194 
o|contracted procedure: k3197 
o|contracted procedure: k3204 
o|contracted procedure: k3210 
o|contracted procedure: k3224 
o|contracted procedure: k3213 
o|contracted procedure: k3229 
o|contracted procedure: k3236 
o|contracted procedure: k3480 
o|contracted procedure: k3499 
o|contracted procedure: k35177135 
o|contracted procedure: k3520 
o|contracted procedure: k3532 
o|inlining procedure: k3529 
o|inlining procedure: k3529 
o|contracted procedure: k2831 
o|contracted procedure: k2844 
o|contracted procedure: k2838 
o|contracted procedure: k2858 
o|contracted procedure: k3905 
o|contracted procedure: k3770 
o|contracted procedure: k3795 
o|contracted procedure: k3805 
o|contracted procedure: k3816 
o|contracted procedure: k3825 
o|contracted procedure: k3828 
o|contracted procedure: k3832 
o|contracted procedure: k3854 
o|contracted procedure: k3858 
o|contracted procedure: k3874 
o|contracted procedure: k3883 
o|contracted procedure: k3886 
o|propagated global variable: g725727 main#*eggs+dirs+vers* 
o|contracted procedure: k3892 
o|propagated global variable: out705709 ##sys#standard-output 
o|contracted procedure: k3898 
o|contracted procedure: k3919 
o|contracted procedure: k3927 
o|contracted procedure: k3424 
o|contracted procedure: k3357 
o|contracted procedure: k3400 
o|contracted procedure: k3409 
o|contracted procedure: k3418 
o|contracted procedure: k3444 
o|contracted procedure: k3960 
o|contracted procedure: k3956 
o|contracted procedure: k3962 
o|contracted procedure: k3964 
o|contracted procedure: k3683 
o|contracted procedure: k3723 
o|contracted procedure: k3726 
o|contracted procedure: k3731 
o|contracted procedure: k3741 
o|contracted procedure: k3738 
o|contracted procedure: k3751 
o|contracted procedure: k3758 
o|contracted procedure: k3976 
o|contracted procedure: k3980 
o|contracted procedure: k4187 
o|contracted procedure: k3992 
o|contracted procedure: k3996 
o|contracted procedure: k4024 
o|contracted procedure: k3253 
o|contracted procedure: k3267 
o|contracted procedure: k3279 
o|contracted procedure: k3297 
o|contracted procedure: k3300 
o|contracted procedure: k3314 
o|contracted procedure: k3323 
o|contracted procedure: k3326 
o|propagated global variable: g527529 main#*hacks* 
o|contracted procedure: k4117 
o|contracted procedure: k4124 
o|contracted procedure: k4130 
o|contracted procedure: k4114 
o|contracted procedure: k4034 
o|contracted procedure: k4056 
o|contracted procedure: k4070 
o|contracted procedure: k4079 
o|contracted procedure: k4082 
o|contracted procedure: k4087 
o|contracted procedure: k3675 
o|contracted procedure: k3587 
o|contracted procedure: k3595 
o|contracted procedure: k3639 
o|contracted procedure: k3642 
o|contracted procedure: k3604 
o|contracted procedure: k3636 
o|contracted procedure: k3653 
o|contracted procedure: k3655 
o|contracted procedure: k3672 
o|contracted procedure: k4102 
o|contracted procedure: k4141 
o|contracted procedure: k4144 
o|contracted procedure: k4153 
o|contracted procedure: k4163 
o|contracted procedure: k4247 
o|contracted procedure: k4256 
o|contracted procedure: k4264 
o|contracted procedure: k4278 
o|contracted procedure: k4306 
o|contracted procedure: k4311 
o|contracted procedure: k4328 
o|contracted procedure: k4349 
o|contracted procedure: k4364 
o|contracted procedure: k4355 
o|contracted procedure: k4285 
o|contracted procedure: k4180 
o|contracted procedure: k4189 
o|contracted procedure: k4200 
o|contracted procedure: k4209 
o|contracted procedure: k4212 
o|propagated global variable: g821823 main#*eggs+dirs+vers* 
o|contracted procedure: k4220 
o|contracted procedure: k4229 
o|contracted procedure: k4232 
o|contracted procedure: k5289 
o|contracted procedure: k5301 
o|contracted procedure: k5310 
o|contracted procedure: k5323 
o|contracted procedure: k5326 
o|contracted procedure: k5357 
o|contracted procedure: k5359 
o|contracted procedure: k5370 
o|contracted procedure: k5373 
o|contracted procedure: k5382 
o|contracted procedure: k5392 
o|contracted procedure: k5412 
o|contracted procedure: k5467 
o|contracted procedure: k5580 
o|contracted procedure: k5599 
o|contracted procedure: k5619 
o|contracted procedure: k5614 
o|contracted procedure: k5639 
o|contracted procedure: k5645 
o|contracted procedure: k5028 
o|contracted procedure: k5037 
o|contracted procedure: k5040 
o|contracted procedure: k5057 
o|contracted procedure: k5060 
o|contracted procedure: k5065 
o|contracted procedure: k5091 
o|contracted procedure: k5093 
o|contracted procedure: k5104 
o|contracted procedure: k5106 
o|contracted procedure: k5117 
o|contracted procedure: k5120 
o|contracted procedure: k5129 
o|contracted procedure: k5139 
o|contracted procedure: k5147 
o|contracted procedure: k5150 
o|contracted procedure: k5159 
o|contracted procedure: k5169 
o|contracted procedure: k5227 
o|contracted procedure: k5254 
o|contracted procedure: k5263 
o|contracted procedure: k5266 
o|contracted procedure: k5426 
o|contracted procedure: k5423 
o|contracted procedure: k5433 
o|contracted procedure: k5444 
o|contracted procedure: k5453 
o|contracted procedure: k5456 
o|contracted procedure: k4554 
o|contracted procedure: k4578 
o|contracted procedure: k4603 
o|contracted procedure: k4725 
o|contracted procedure: k4379 
o|contracted procedure: k4399 
o|contracted procedure: k4402 
o|contracted procedure: k4408 
o|contracted procedure: k4429 
o|contracted procedure: k4438 
o|contracted procedure: k4442 
o|contracted procedure: k4457 
o|contracted procedure: k4512 
o|contracted procedure: k4515 
o|contracted procedure: k4732 
o|contracted procedure: k4755 
o|contracted procedure: k4789 
o|contracted procedure: k4801 
o|contracted procedure: k4804 
o|contracted procedure: k4806 
o|contracted procedure: k4839 
o|contracted procedure: k4859 
o|contracted procedure: k48576934 
o|contracted procedure: k48576938 
o|contracted procedure: k4873 
o|contracted procedure: k4904 
o|contracted procedure: k4884 
o|contracted procedure: k4893 
o|contracted procedure: k4896 
o|contracted procedure: k4899 
o|contracted procedure: k4902 
o|contracted procedure: k4916 
o|contracted procedure: k4919 
o|contracted procedure: k4928 
o|contracted procedure: k4938 
o|contracted procedure: k4955 
o|contracted procedure: k5710 
o|contracted procedure: k5725 
o|contracted procedure: k5736 
o|contracted procedure: k5739 
o|contracted procedure: k5748 
o|contracted procedure: k5758 
o|contracted procedure: k5780 
o|contracted procedure: k5492 
o|contracted procedure: k5494 
o|contracted procedure: k5496 
o|contracted procedure: k5499 
o|contracted procedure: k5509 
o|contracted procedure: k2384 
o|contracted procedure: k5793 
o|contracted procedure: k5809 
o|contracted procedure: k5820 
o|contracted procedure: k5823 
o|contracted procedure: k5832 
o|contracted procedure: k5842 
o|contracted procedure: k2467 
o|contracted procedure: k2472 
o|contracted procedure: k2478 
o|contracted procedure: k2517 
o|contracted procedure: k2487 
o|contracted procedure: k2511 
o|contracted procedure: k2527 
o|contracted procedure: k2535 
o|contracted procedure: k2542 
o|contracted procedure: k2571 
o|contracted procedure: k2583 
o|contracted procedure: k2594 
o|contracted procedure: k2597 
o|contracted procedure: k2606 
o|contracted procedure: k2616 
o|contracted procedure: k2621 
o|contracted procedure: k2640 
o|contracted procedure: k2643 
o|contracted procedure: k2648 
o|contracted procedure: k2654 
o|contracted procedure: k2664 
o|contracted procedure: k2675 
o|contracted procedure: k2678 
o|contracted procedure: k2687 
o|contracted procedure: k2697 
o|contracted procedure: k2702 
o|contracted procedure: k2716 
o|contracted procedure: k2719 
o|contracted procedure: k2726 
o|contracted procedure: k2733 
o|contracted procedure: k2741 
o|contracted procedure: k2747 
o|contracted procedure: k2770 
o|contracted procedure: k2786 
o|contracted procedure: k2795 
o|contracted procedure: k2798 
o|contracted procedure: k5852 
o|contracted procedure: k5857 
o|contracted procedure: k5943 
o|contracted procedure: k5952 
o|contracted procedure: k5981 
o|contracted procedure: k5983 
o|contracted procedure: k6002 
o|contracted procedure: k6025 
o|contracted procedure: k6094 
o|contracted procedure: k2896 
o|contracted procedure: k2913 
o|contracted procedure: k2924 
o|contracted procedure: k2933 
o|contracted procedure: k2936 
o|contracted procedure: k6096 
o|contracted procedure: k6117 
o|contracted procedure: k6120 
o|contracted procedure: k6122 
o|contracted procedure: k6141 
o|contracted procedure: k6154 
o|contracted procedure: k6156 
o|contracted procedure: k6172 
o|contracted procedure: k6185 
o|contracted procedure: k6187 
o|contracted procedure: k6258 
o|contracted procedure: k6267 
o|contracted procedure: k6283 
o|contracted procedure: k6292 
o|contracted procedure: k6315 
o|contracted procedure: k6318 
o|contracted procedure: k6320 
o|contracted procedure: k6394 
o|contracted procedure: k6403 
o|contracted procedure: k6419 
o|contracted procedure: k6428 
o|contracted procedure: k6543 
o|contracted procedure: k6467 
o|contracted procedure: k6490 
o|contracted procedure: k6503 
o|contracted procedure: k6506 
o|contracted procedure: k6515 
o|contracted procedure: k6525 
o|contracted procedure: k6550 
o|contracted procedure: k6556 
o|contracted procedure: k6565 
o|contracted procedure: k6601 
o|contracted procedure: k6604 
o|contracted procedure: k6621 
o|contracted procedure: k6627 
o|simplifications: ((if . 1) (let . 70)) 
o|removed binding forms: 320 
o|inlining procedure: k2841 
o|inlining procedure: k2841 
o|inlining procedure: k4146 
o|inlining procedure: k4146 
o|inlining procedure: k5375 
o|inlining procedure: k5375 
o|inlining procedure: k5122 
o|inlining procedure: k5122 
o|inlining procedure: k5152 
o|inlining procedure: k5152 
o|inlining procedure: k4921 
o|inlining procedure: k4921 
o|inlining procedure: k5741 
o|inlining procedure: k5741 
o|inlining procedure: k5825 
o|inlining procedure: k5825 
o|inlining procedure: k2599 
o|inlining procedure: k2599 
o|inlining procedure: k2680 
o|inlining procedure: k2680 
o|inlining procedure: k6508 
o|inlining procedure: k6508 
o|replaced variables: 66 
o|removed binding forms: 1 
o|simplifications: ((if . 14)) 
o|removed binding forms: 85 
o|contracted procedure: k4405 
o|contracted procedure: k5894 
o|contracted procedure: k5908 
o|contracted procedure: k5923 
o|contracted procedure: k5937 
o|contracted procedure: k5965 
o|contracted procedure: k5996 
o|contracted procedure: k6038 
o|contracted procedure: k6053 
o|contracted procedure: k6069 
o|contracted procedure: k6083 
o|contracted procedure: k6135 
o|contracted procedure: k6333 
o|removed binding forms: 13 
o|direct leaf routine/allocation: main#deps 0 
o|contracted procedure: "(chicken-install.scm:423) k3839" 
o|contracted procedure: "(chicken-install.scm:423) k3842" 
o|contracted procedure: "(chicken-install.scm:235) k2995" 
o|contracted procedure: "(chicken-install.scm:236) k2998" 
o|contracted procedure: "(chicken-install.scm:237) k3001" 
o|removed binding forms: 5 
o|customizable procedures: (k5859 k6461 k6568 map-loop17431768 main#setup-proxy for-each-loop432443 loop1541 for-each-loop280393 k2709 map-loop364384 map-loop319355 broken276 k5663 map-loop16061624 map-loop15761593 k4530 map-loop12021227 for-each-loop10641234 k4546 k4812 k4376 main#get-prefix main#command main#show-depends for-each-loop14691480 for-each-loop12631302 map-loop13271345 map-loop13541372 for-each-loop13841396 main#$system map-loop14381455 canonical1409 for-each-loop773807 for-each-loop814899 k4290 fail909 main#apply-mappings map-loop840858 for-each-loop873885 for-each-loop520531 loop536 k3936 k3695 main#with-default-sources k3362 k3373 k3384 main#retrieve for-each-loop718759 main#cleanup for-each-loop735753 k2849 k3472 k3503 trying-sources598 k3035 k3118 k3092 scan482 main#check-dependency main#ext-version k2946 main#resolve-location) 
o|calls to known targets: 243 
o|fast box initializations: 29 
o|fast global references: 176 
o|fast global assignments: 103 
o|dropping unused closure argument: f_5555 
o|dropping unused closure argument: f_3466 
o|dropping unused closure argument: f_5459 
o|dropping unused closure argument: f_3912 
o|dropping unused closure argument: f_3763 
o|dropping unused closure argument: f_4960 
o|dropping unused closure argument: f_2411 
o|dropping unused closure argument: f_5575 
o|dropping unused closure argument: f_3007 
o|dropping unused closure argument: f_2876 
o|dropping unused closure argument: f_5280 
o|dropping unused closure argument: f_5284 
o|dropping unused closure argument: f_2807 
o|dropping unused closure argument: f_2939 
*/
/* end of file */
