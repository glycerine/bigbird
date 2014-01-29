/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: optimizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file optimizer.c
   unit: optimizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[230];
static double C_possibly_force_alignment;


C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9408)
static void C_ccall f_9408(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9403)
static void C_fcall f_9403(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10368)
static void C_ccall f_10368(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4123)
static void C_fcall f_4123(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10367)
static void C_ccall f_10367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10361)
static void C_ccall f_10361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10360)
static void C_ccall f_10360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9097)
static void C_ccall f_9097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4110)
static void C_ccall f_4110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9069)
static void C_ccall f_9069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9435)
static void C_ccall f_9435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5865)
static void C_ccall f_5865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8629)
static void C_ccall f_8629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8623)
static void C_ccall f_8623(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7263)
static void C_ccall f_7263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5859)
static void C_fcall f_5859(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8639)
static void C_ccall f_8639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8637)
static void C_fcall f_8637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8633)
static void C_ccall f_8633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5851)
static void C_ccall f_5851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11244)
static void C_ccall f_11244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6188)
static void C_ccall f_6188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3747)
static void C_fcall f_3747(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_fcall f_3856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11227)
static void C_ccall f_11227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3732)
static void C_fcall f_3732(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11881)
static void C_ccall f_11881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11871)
static void C_ccall f_11871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8646)
static void C_ccall f_8646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11779)
static void C_ccall f_11779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11773)
static void C_ccall f_11773(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10419)
static void C_ccall f_10419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10405)
static void C_fcall f_10405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_fcall f_4163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4977)
static void C_ccall f_4977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7214)
static void C_ccall f_7214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8961)
static void C_ccall f_8961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7208)
static void C_ccall f_7208(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10471)
static void C_ccall f_10471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10476)
static void C_ccall f_10476(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8941)
static void C_ccall f_8941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10465)
static void C_ccall f_10465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7038)
static void C_ccall f_7038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10490)
static void C_ccall f_10490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10492)
static void C_ccall f_10492(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10498)
static void C_ccall f_10498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7032)
static void C_ccall f_7032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11618)
static void C_ccall f_11618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10482)
static void C_ccall f_10482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10484)
static void C_ccall f_10484(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4925)
static void C_fcall f_4925(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10898)
static void C_ccall f_10898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10892)
static void C_ccall f_10892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10890)
static void C_ccall f_10890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8938)
static void C_ccall f_8938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10884)
static void C_ccall f_10884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9089)
static void C_ccall f_9089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6166)
static void C_fcall f_6166(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5638)
static void C_ccall f_5638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5632)
static void C_ccall f_5632(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11666)
static void C_ccall f_11666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9055)
static void C_ccall f_9055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11660)
static void C_ccall f_11660(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7583)
static void C_fcall f_7583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8661)
static void C_ccall f_8661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9916)
static void C_ccall f_9916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11659)
static void C_ccall f_11659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8698)
static void C_ccall f_8698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9028)
static void C_ccall f_9028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11653)
static void C_ccall f_11653(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11652)
static void C_ccall f_11652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9927)
static void C_ccall f_9927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11646)
static void C_ccall f_11646(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10852)
static void C_fcall f_10852(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6242)
static void C_ccall f_6242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11643)
static void C_fcall f_11643(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9483)
static void C_fcall f_9483(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9488)
static void C_ccall f_9488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10841)
static void C_ccall f_10841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9048)
static void C_ccall f_9048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9049)
static void C_ccall f_9049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9041)
static void C_ccall f_9041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9042)
static void C_ccall f_9042(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9907)
static void C_fcall f_9907(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5676)
static void C_fcall f_5676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10870)
static void C_ccall f_10870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10876)
static void C_ccall f_10876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10862)
static void C_fcall f_10862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static C_word C_fcall f_4011(C_word t0);
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9035)
static void C_ccall f_9035(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9032)
static void C_fcall f_9032(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8720)
static void C_ccall f_8720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4016)
static void C_fcall f_4016(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8602)
static void C_ccall f_8602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8700)
static void C_ccall f_8700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8707)
static void C_ccall f_8707(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9630)
static void C_ccall f_9630(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7082)
static void C_ccall f_7082(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7084)
static void C_ccall f_7084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7099)
static void C_ccall f_7099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8668)
static void C_ccall f_8668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4507)
static void C_fcall f_4507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6263)
static void C_ccall f_6263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6265)
static void C_ccall f_6265(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7007)
static void C_ccall f_7007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7001)
static void C_ccall f_7001(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7560)
static void C_ccall f_7560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7544)
static void C_ccall f_7544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11695)
static void C_ccall f_11695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7556)
static void C_ccall f_7556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7558)
static void C_ccall f_7558(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11689)
static void C_ccall f_11689(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9682)
static void C_ccall f_9682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9686)
static void C_ccall f_9686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7524)
static void C_ccall f_7524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7522)
static void C_ccall f_7522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7069)
static void C_ccall f_7069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11672)
static void C_fcall f_11672(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11402)
static void C_ccall f_11402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9695)
static void C_fcall f_9695(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9698)
static void C_ccall f_9698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7063)
static void C_ccall f_7063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7538)
static void C_ccall f_7538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10920)
static void C_ccall f_10920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10929)
static void C_ccall f_10929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10926)
static void C_ccall f_10926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10923)
static void C_ccall f_10923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7502)
static void C_fcall f_7502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7077)
static void C_fcall f_7077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10912)
static void C_ccall f_10912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7505)
static void C_fcall f_7505(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7506)
static void C_ccall f_7506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10914)
static void C_ccall f_10914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11467)
static void C_ccall f_11467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7512)
static void C_ccall f_7512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7517)
static void C_ccall f_7517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10940)
static void C_ccall f_10940(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9711)
static void C_ccall f_9711(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9717)
static void C_ccall f_9717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9719)
static void C_ccall f_9719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3939)
static void C_fcall f_3939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8867)
static void C_ccall f_8867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11104)
static void C_ccall f_11104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11108)
static void C_ccall f_11108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9700)
static void C_ccall f_9700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9704)
static void C_ccall f_9704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9707)
static void C_ccall f_9707(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9706)
static void C_ccall f_9706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8091)
static void C_ccall f_8091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4599)
static void C_ccall f_4599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6297)
static void C_ccall f_6297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8842)
static void C_ccall f_8842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8841)
static void C_ccall f_8841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10906)
static void C_ccall f_10906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8897)
static void C_ccall f_8897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8894)
static void C_ccall f_8894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11110)
static void C_fcall f_11110(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9619)
static void C_ccall f_9619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9610)
static void C_ccall f_9610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10459)
static void C_fcall f_10459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8873)
static void C_ccall f_8873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6897)
static void C_ccall f_6897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10447)
static void C_fcall f_10447(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8882)
static void C_ccall f_8882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11164)
static void C_fcall f_11164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11456)
static void C_ccall f_11456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11162)
static void C_ccall f_11162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10090)
static void C_ccall f_10090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11443)
static void C_ccall f_11443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6868)
static void C_ccall f_6868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10084)
static void C_ccall f_10084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11189)
static void C_ccall f_11189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9662)
static void C_ccall f_9662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_fcall f_4525(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9668)
static void C_ccall f_9668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8017)
static void C_ccall f_8017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8011)
static void C_ccall f_8011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9670)
static void C_fcall f_9670(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_5562)
static void C_ccall f_5562(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9676)
static void C_ccall f_9676(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9674)
static void C_ccall f_9674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5568)
static void C_ccall f_5568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8076)
static void C_ccall f_8076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10056)
static void C_ccall f_10056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10052)
static void C_ccall f_10052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10054)
static void C_ccall f_10054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11194)
static void C_fcall f_11194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10050)
static void C_ccall f_10050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9332)
static void C_ccall f_9332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8088)
static void C_ccall f_8088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10043)
static void C_ccall f_10043(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10079)
static void C_ccall f_10079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10070)
static void C_ccall f_10070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8069)
static void C_ccall f_8069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8063)
static void C_ccall f_8063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6804)
static void C_ccall f_6804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10064)
static void C_ccall f_10064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6809)
static void C_ccall f_6809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6877)
static void C_ccall f_6877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9353)
static void C_ccall f_9353(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8351)
static void C_ccall f_8351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8352)
static void C_ccall f_8352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11483)
static void C_ccall f_11483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11473)
static void C_ccall f_11473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8902)
static void C_ccall f_8902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8900)
static void C_ccall f_8900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8907)
static void C_ccall f_8907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11146)
static void C_ccall f_11146(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_11141)
static void C_ccall f_11141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8914)
static void C_ccall f_8914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8919)
static void C_fcall f_8919(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11151)
static void C_ccall f_11151(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3660)
static C_word C_fcall f_3660(C_word t0);
C_noret_decl(f_3666)
static void C_fcall f_3666(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3679)
static void C_fcall f_3679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8345)
static void C_ccall f_8345(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10514)
static void C_ccall f_10514(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10506)
static void C_ccall f_10506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10500)
static void C_ccall f_10500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5162)
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5194)
static void C_fcall f_5194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5519)
static void C_ccall f_5519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10012)
static void C_ccall f_10012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10016)
static void C_ccall f_10016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10576)
static void C_fcall f_10576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9384)
static void C_ccall f_9384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10565)
static void C_ccall f_10565(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7323)
static void C_ccall f_7323(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7337)
static void C_ccall f_7337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11526)
static void C_ccall f_11526(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11523)
static void C_fcall f_11523(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10585)
static void C_ccall f_10585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10971)
static void C_ccall f_10971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7302)
static void C_ccall f_7302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10977)
static void C_ccall f_10977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7308)
static void C_ccall f_7308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11515)
static void C_ccall f_11515(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5118)
static void C_fcall f_5118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9801)
static void C_ccall f_9801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9803)
static void C_ccall f_9803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11546)
static void C_ccall f_11546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9809)
static void C_ccall f_9809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10996)
static void C_ccall f_10996(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11540)
static void C_ccall f_11540(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10994)
static void C_ccall f_10994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5022)
static void C_ccall f_5022(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6493)
static void C_ccall f_6493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9398)
static void C_ccall f_9398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11539)
static void C_ccall f_11539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8395)
static void C_ccall f_8395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11532)
static void C_ccall f_11532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11533)
static void C_ccall f_11533(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7497)
static void C_ccall f_7497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3699)
static void C_fcall f_3699(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9820)
static void C_fcall f_9820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11564)
static void C_ccall f_11564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8367)
static void C_ccall f_8367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9829)
static void C_ccall f_9829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5048)
static void C_ccall f_5048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10932)
static void C_ccall f_10932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10938)
static void C_ccall f_10938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6745)
static void C_fcall f_6745(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5034)
static void C_fcall f_5034(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10965)
static void C_ccall f_10965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9301)
static void C_ccall f_9301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10951)
static void C_ccall f_10951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10957)
static void C_ccall f_10957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9815)
static void C_ccall f_9815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10983)
static void C_ccall f_10983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10988)
static void C_ccall f_10988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8810)
static void C_ccall f_8810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8829)
static void C_ccall f_8829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8825)
static void C_ccall f_8825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8389)
static void C_ccall f_8389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8383)
static void C_ccall f_8383(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8801)
static void C_ccall f_8801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4649)
static void C_ccall f_4649(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9982)
static void C_ccall f_9982(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9988)
static void C_ccall f_9988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9981)
static void C_ccall f_9981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9957)
static void C_ccall f_9957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9958)
static void C_ccall f_9958(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9950)
static void C_ccall f_9950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7403)
static void C_ccall f_7403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9964)
static void C_ccall f_9964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6835)
static void C_fcall f_6835(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9944)
static void C_ccall f_9944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9941)
static void C_fcall f_9941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8549)
static void C_ccall f_8549(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10617)
static void C_ccall f_10617(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10616)
static void C_ccall f_10616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10614)
static void C_ccall f_10614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8555)
static void C_ccall f_8555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8556)
static void C_ccall f_8556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6468)
static void C_ccall f_6468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11586)
static void C_ccall f_11586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11587)
static void C_ccall f_11587(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11580)
static void C_ccall f_11580(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10608)
static void C_ccall f_10608(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10607)
static void C_ccall f_10607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10605)
static void C_ccall f_10605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5064)
static void C_fcall f_5064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5066)
static void C_ccall f_5066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7482)
static void C_ccall f_7482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11579)
static void C_ccall f_11579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11573)
static void C_ccall f_11573(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11570)
static void C_ccall f_11570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7451)
static void C_ccall f_7451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6445)
static void C_ccall f_6445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5085)
static void C_ccall f_5085(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6437)
static void C_ccall f_6437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7382)
static void C_ccall f_7382(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7389)
static void C_ccall f_7389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7388)
static void C_ccall f_7388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11593)
static void C_ccall f_11593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6789)
static void C_ccall f_6789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6428)
static void C_ccall f_6428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5912)
static void C_fcall f_5912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5918)
static void C_fcall f_5918(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7445)
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7415)
static void C_ccall f_7415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5092)
static void C_ccall f_5092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6713)
static void C_fcall f_6713(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10661)
static void C_ccall f_10661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10669)
static void C_ccall f_10669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10663)
static void C_ccall f_10663(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10696)
static void C_ccall f_10696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11949)
static void C_ccall f_11949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11937)
static void C_ccall f_11937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11968)
static void C_ccall f_11968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8584)
static void C_ccall f_8584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6756)
static void C_fcall f_6756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5003)
static void C_ccall f_5003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8582)
static void C_ccall f_8582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10536)
static void C_ccall f_10536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11955)
static void C_ccall f_11955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6327)
static void C_ccall f_6327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8592)
static void C_ccall f_8592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10520)
static void C_ccall f_10520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11983)
static void C_ccall f_11983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11986)
static void C_ccall f_11986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11980)
static void C_ccall f_11980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10557)
static void C_ccall f_10557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_fcall f_4264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6346)
static void C_ccall f_6346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10542)
static void C_ccall f_10542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10549)
static void C_ccall f_10549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10105)
static void C_ccall f_10105(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6337)
static void C_fcall f_6337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10175)
static void C_ccall f_10175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11993)
static void C_ccall f_11993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7997)
static void C_ccall f_7997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6357)
static void C_ccall f_6357(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6357)
static void C_ccall f_6357r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_10195)
static void C_ccall f_10195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7976)
static void C_ccall f_7976(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6954)
static void C_ccall f_6954(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6952)
static void C_ccall f_6952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8506)
static void C_ccall f_8506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8508)
static void C_ccall f_8508(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8500)
static void C_ccall f_8500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6946)
static void C_ccall f_6946(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7946)
static void C_ccall f_7946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6944)
static void C_ccall f_6944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10132)
static void C_ccall f_10132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10130)
static void C_ccall f_10130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8514)
static void C_ccall f_8514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12085)
static void C_fcall f_12085(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12080)
static void C_ccall f_12080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6976)
static void C_ccall f_6976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6970)
static void C_ccall f_6970(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12074)
static void C_ccall f_12074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7926)
static void C_ccall f_7926(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6968)
static void C_ccall f_6968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6960)
static void C_ccall f_6960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10153)
static void C_ccall f_10153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8576)
static void C_ccall f_8576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7938)
static void C_ccall f_7938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7935)
static void C_fcall f_7935(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10186)
static void C_fcall f_10186(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7916)
static void C_ccall f_7916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7910)
static void C_ccall f_7910(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3652)
static void C_fcall f_3652(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10147)
static void C_ccall f_10147(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8447)
static void C_ccall f_8447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9765)
static void C_ccall f_9765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6507)
static void C_ccall f_6507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3630)
static void C_fcall f_3630(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9762)
static void C_ccall f_9762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9736)
static void C_ccall f_9736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8417)
static void C_ccall f_8417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12000)
static void C_ccall f_12000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3637)
static void C_fcall f_3637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8424)
static void C_ccall f_8424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9790)
static void C_ccall f_9790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9772)
static void C_ccall f_9772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6533)
static void C_ccall f_6533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9778)
static void C_ccall f_9778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6531)
static void C_ccall f_6531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6363)
static void C_ccall f_6363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6365)
static void C_ccall f_6365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6367)
static void C_ccall f_6367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6369)
static void C_ccall f_6369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11080)
static void C_ccall f_11080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11082)
static void C_ccall f_11082(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6562)
static void C_fcall f_6562(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9782)
static void C_ccall f_9782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9785)
static void C_ccall f_9785(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9784)
static void C_ccall f_9784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6567)
static void C_ccall f_6567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9780)
static void C_ccall f_9780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11096)
static void C_ccall f_11096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11098)
static void C_ccall f_11098(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6551)
static void C_ccall f_6551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6380)
static void C_fcall f_6380(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6386)
static void C_fcall f_6386(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11088)
static void C_ccall f_11088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11061)
static void C_ccall f_11061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6589)
static void C_ccall f_6589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6378)
static void C_ccall f_6378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11074)
static void C_ccall f_11074(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11064)
static void C_ccall f_11064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11055)
static void C_ccall f_11055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6516)
static void C_ccall f_6516(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11021)
static void C_ccall f_11021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6543)
static void C_ccall f_6543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11036)
static void C_ccall f_11036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11039)
static void C_ccall f_11039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11010)
static void C_fcall f_11010(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10111)
static void C_ccall f_10111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11005)
static void C_ccall f_11005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11002)
static void C_ccall f_11002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10623)
static void C_ccall f_10623(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10629)
static void C_ccall f_10629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_ccall f_5436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10650)
static void C_ccall f_10650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10655)
static void C_ccall f_10655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10641)
static void C_ccall f_10641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6693)
static void C_fcall f_6693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5349)
static void C_ccall f_5349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5341)
static void C_ccall f_5341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10671)
static void C_fcall f_10671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5331)
static void C_ccall f_5331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8486)
static void C_ccall f_8486(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10288)
static void C_ccall f_10288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12094)
static void C_ccall f_12094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12098)
static void C_ccall f_12098(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10280)
static void C_ccall f_10280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10278)
static void C_ccall f_10278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8464)
static void C_ccall f_8464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8466)
static void C_ccall f_8466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8462)
static void C_ccall f_8462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10636)
static void C_ccall f_10636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10292)
static void C_ccall f_10292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10296)
static C_word C_fcall f_10296(C_word *a,C_word t0);
C_noret_decl(f_10290)
static void C_ccall f_10290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10241)
static void C_ccall f_10241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9538)
static void C_ccall f_9538(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9533)
static void C_ccall f_9533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10235)
static void C_ccall f_10235(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8402)
static void C_ccall f_8402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4353)
static void C_fcall f_4353(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9191)
static void C_ccall f_9191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_fcall f_5951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9546)
static void C_ccall f_9546(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7707)
static void C_ccall f_7707(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7706)
static void C_ccall f_7706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9544)
static void C_ccall f_9544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4335)
static void C_fcall f_4335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9552)
static void C_ccall f_9552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6603)
static void C_ccall f_6603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5970)
static void C_ccall f_5970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9527)
static void C_ccall f_9527(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9525)
static void C_ccall f_9525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5988)
static void C_ccall f_5988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5984)
static void C_ccall f_5984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5980)
static void C_ccall f_5980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7722)
static void C_ccall f_7722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7728)
static void C_ccall f_7728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6673)
static void C_fcall f_6673(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7773)
static void C_ccall f_7773(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7779)
static void C_ccall f_7779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11090)
static void C_ccall f_11090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7789)
static void C_ccall f_7789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7788)
static void C_fcall f_7788(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10715)
static void C_ccall f_10715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6651)
static void C_ccall f_6651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10709)
static void C_ccall f_10709(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10707)
static void C_ccall f_10707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10701)
static void C_ccall f_10701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6682)
static void C_ccall f_6682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_fcall f_3771(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6630)
static void C_ccall f_6630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7731)
static void C_ccall f_7731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8293)
static void C_ccall f_8293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11304)
static void C_ccall f_11304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5399)
static void C_ccall f_5399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9580)
static void C_ccall f_9580(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6614)
static void C_ccall f_6614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6616)
static void C_ccall f_6616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8299)
static void C_ccall f_8299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8272)
static void C_ccall f_8272(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8188)
static void C_ccall f_8188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10771)
static void C_ccall f_10771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10777)
static void C_ccall f_10777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8278)
static void C_ccall f_8278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8279)
static void C_ccall f_8279(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7608)
static void C_ccall f_7608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5368)
static void C_fcall f_5368(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8194)
static void C_ccall f_8194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10762)
static void C_ccall f_10762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11349)
static void C_ccall f_11349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10768)
static void C_ccall f_10768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11346)
static void C_ccall f_11346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10765)
static void C_ccall f_10765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11340)
static void C_ccall f_11340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10799)
static void C_ccall f_10799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10793)
static void C_ccall f_10793(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10220)
static void C_ccall f_10220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10785)
static void C_ccall f_10785(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7638)
static void C_ccall f_7638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10211)
static void C_fcall f_10211(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11316)
static void C_ccall f_11316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11318)
static void C_ccall f_11318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11310)
static void C_ccall f_11310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9154)
static void C_ccall f_9154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9159)
static void C_ccall f_9159(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11382)
static void C_ccall f_11382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7152)
static void C_ccall f_7152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5318)
static void C_fcall f_5318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9247)
static void C_ccall f_9247(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9240)
static void C_fcall f_9240(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9244)
static void C_fcall f_9244(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6020)
static void C_ccall f_6020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7159)
static void C_ccall f_7159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7158)
static void C_ccall f_7158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9165)
static void C_ccall f_9165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5225)
static void C_ccall f_5225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9254)
static void C_ccall f_9254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9253)
static void C_ccall f_9253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7888)
static void C_ccall f_7888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7885)
static void C_ccall f_7885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9519)
static void C_ccall f_9519(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9261)
static void C_ccall f_9261(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9260)
static void C_ccall f_9260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9267)
static void C_ccall f_9267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9148)
static void C_ccall f_9148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5241)
static void C_ccall f_5241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9204)
static void C_ccall f_9204(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11378)
static void C_ccall f_11378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_9214)
static void C_fcall f_9214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6050)
static void C_fcall f_6050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5792)
static void C_fcall f_5792(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9223)
static void C_ccall f_9223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11394)
static void C_ccall f_11394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11396)
static void C_ccall f_11396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9107)
static void C_ccall f_9107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7860)
static void C_ccall f_7860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5235)
static void C_ccall f_5235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7873)
static void C_ccall f_7873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9883)
static void C_ccall f_9883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9889)
static void C_ccall f_9889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9881)
static void C_ccall f_9881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7801)
static void C_ccall f_7801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7692)
static void C_ccall f_7692(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7180)
static void C_ccall f_7180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9873)
static void C_ccall f_9873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9875)
static void C_ccall f_9875(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7837)
static void C_ccall f_7837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8167)
static void C_ccall f_8167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7831)
static void C_ccall f_7831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8161)
static void C_ccall f_8161(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9840)
static void C_ccall f_9840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9897)
static void C_ccall f_9897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9891)
static void C_ccall f_9891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8146)
static void C_ccall f_8146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9867)
static void C_ccall f_9867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9865)
static void C_ccall f_9865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11337)
static void C_ccall f_11337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11331)
static void C_ccall f_11331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4493)
static void C_fcall f_4493(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6095)
static void C_ccall f_6095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9859)
static void C_ccall f_9859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11320)
static void C_ccall f_11320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8200)
static void C_ccall f_8200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6080)
static C_word C_fcall f_6080(C_word t0);
C_noret_decl(f_6085)
static void C_fcall f_6085(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7613)
static void C_fcall f_7613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11352)
static void C_ccall f_11352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7101)
static void C_ccall f_7101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7116)
static void C_ccall f_7116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10815)
static void C_ccall f_10815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4832)
static void C_ccall f_4832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7174)
static void C_ccall f_7174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4807)
static void C_fcall f_4807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10806)
static void C_fcall f_10806(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10832)
static void C_fcall f_10832(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4851)
static void C_fcall f_4851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8751)
static void C_ccall f_8751(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8759)
static void C_ccall f_8759(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8757)
static void C_ccall f_8757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7231)
static void C_ccall f_7231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8765)
static void C_ccall f_8765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11709)
static void C_ccall f_11709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8737)
static void C_ccall f_8737(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11235)
static void C_fcall f_11235(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7251)
static void C_ccall f_7251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externexport void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7245)
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8795)
static void C_ccall f_8795(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10731)
static void C_ccall f_10731(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10730)
static void C_ccall f_10730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10735)
static void C_ccall f_10735(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10734)
static void C_ccall f_10734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11219)
static void C_ccall f_11219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11717)
static void C_ccall f_11717(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11715)
static void C_ccall f_11715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10720)
static void C_ccall f_10720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10722)
static void C_ccall f_10722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10724)
static void C_ccall f_10724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10726)
static void C_ccall f_10726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10728)
static void C_ccall f_10728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11741)
static void C_ccall f_11741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10753)
static void C_ccall f_10753(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10751)
static void C_ccall f_10751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10759)
static void C_ccall f_10759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5765)
static void C_fcall f_5765(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11735)
static void C_ccall f_11735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10745)
static void C_ccall f_10745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5750)
static void C_ccall f_5750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11769)
static void C_ccall f_11769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6131)
static void C_fcall f_6131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11763)
static void C_ccall f_11763(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10374)
static void C_ccall f_10374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11287)
static void C_ccall f_11287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11853)
static void C_ccall f_11853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6158)
static void C_fcall f_6158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11865)
static void C_ccall f_11865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11868)
static void C_ccall f_11868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10392)
static void C_fcall f_10392(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6148)
static void C_fcall f_6148(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11267)
static void C_ccall f_11267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_11846)
static void C_ccall f_11846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9445)
static void C_ccall f_9445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9440)
static void C_fcall f_9440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10335)
static void C_ccall f_10335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11290)
static void C_ccall f_11290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4030)
static void C_fcall f_4030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11834)
static void C_ccall f_11834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10354)
static void C_ccall f_10354(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10351)
static void C_fcall f_10351(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4050)
static void C_fcall f_4050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4441)
static void C_fcall f_4441(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10349)
static void C_ccall f_10349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10341)
static void C_ccall f_10341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10343)
static void C_ccall f_10343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_9403)
static void C_fcall trf_9403(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9403(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9403(t0,t1);}

C_noret_decl(trf_4123)
static void C_fcall trf_4123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4123(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4123(t0,t1,t2);}

C_noret_decl(trf_5859)
static void C_fcall trf_5859(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5859(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5859(t0,t1);}

C_noret_decl(trf_8637)
static void C_fcall trf_8637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8637(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8637(t0,t1);}

C_noret_decl(trf_3747)
static void C_fcall trf_3747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3747(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3747(t0,t1);}

C_noret_decl(trf_3856)
static void C_fcall trf_3856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3856(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3856(t0,t1);}

C_noret_decl(trf_3732)
static void C_fcall trf_3732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3732(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3732(t0,t1);}

C_noret_decl(trf_10405)
static void C_fcall trf_10405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10405(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10405(t0,t1);}

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

C_noret_decl(trf_4925)
static void C_fcall trf_4925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4925(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4925(t0,t1);}

C_noret_decl(trf_6166)
static void C_fcall trf_6166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6166(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6166(t0,t1);}

C_noret_decl(trf_7583)
static void C_fcall trf_7583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7583(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7583(t0,t1,t2);}

C_noret_decl(trf_10852)
static void C_fcall trf_10852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10852(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10852(t0,t1,t2);}

C_noret_decl(trf_11643)
static void C_fcall trf_11643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11643(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_11643(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9483)
static void C_fcall trf_9483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9483(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9483(t0,t1);}

C_noret_decl(trf_9907)
static void C_fcall trf_9907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9907(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9907(t0,t1,t2);}

C_noret_decl(trf_5676)
static void C_fcall trf_5676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5676(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5676(t0,t1,t2);}

C_noret_decl(trf_10862)
static void C_fcall trf_10862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10862(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10862(t0,t1);}

C_noret_decl(trf_9032)
static void C_fcall trf_9032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9032(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9032(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4016)
static void C_fcall trf_4016(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4016(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4016(t0,t1);}

C_noret_decl(trf_4507)
static void C_fcall trf_4507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4507(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4507(t0,t1);}

C_noret_decl(trf_11672)
static void C_fcall trf_11672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11672(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11672(t0,t1);}

C_noret_decl(trf_9695)
static void C_fcall trf_9695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9695(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9695(t0,t1);}

C_noret_decl(trf_7502)
static void C_fcall trf_7502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7502(t0,t1);}

C_noret_decl(trf_7077)
static void C_fcall trf_7077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7077(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7077(t0,t1);}

C_noret_decl(trf_7505)
static void C_fcall trf_7505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7505(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7505(t0,t1);}

C_noret_decl(trf_3939)
static void C_fcall trf_3939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3939(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3939(t0,t1,t2);}

C_noret_decl(trf_11110)
static void C_fcall trf_11110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11110(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11110(t0,t1,t2);}

C_noret_decl(trf_10459)
static void C_fcall trf_10459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10459(t0,t1);}

C_noret_decl(trf_10447)
static void C_fcall trf_10447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10447(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10447(t0,t1);}

C_noret_decl(trf_11164)
static void C_fcall trf_11164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11164(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11164(t0,t1,t2);}

C_noret_decl(trf_4525)
static void C_fcall trf_4525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4525(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4525(t0,t1,t2);}

C_noret_decl(trf_9670)
static void C_fcall trf_9670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9670(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_9670(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_11194)
static void C_fcall trf_11194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11194(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11194(t0,t1,t2);}

C_noret_decl(trf_8919)
static void C_fcall trf_8919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8919(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8919(t0,t1,t2,t3);}

C_noret_decl(trf_3666)
static void C_fcall trf_3666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3666(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3666(t0,t1,t2,t3);}

C_noret_decl(trf_3679)
static void C_fcall trf_3679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3679(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3679(t0,t1,t2);}

C_noret_decl(trf_5162)
static void C_fcall trf_5162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5162(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5162(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5194)
static void C_fcall trf_5194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5194(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5194(t0,t1,t2);}

C_noret_decl(trf_10576)
static void C_fcall trf_10576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10576(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10576(t0,t1,t2);}

C_noret_decl(trf_11523)
static void C_fcall trf_11523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11523(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11523(t0,t1,t2,t3);}

C_noret_decl(trf_5118)
static void C_fcall trf_5118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5118(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5118(t0,t1,t2);}

C_noret_decl(trf_3699)
static void C_fcall trf_3699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3699(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3699(t0,t1,t2,t3);}

C_noret_decl(trf_9820)
static void C_fcall trf_9820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9820(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9820(t0,t1,t2);}

C_noret_decl(trf_6745)
static void C_fcall trf_6745(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6745(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6745(t0,t1,t2,t3);}

C_noret_decl(trf_5034)
static void C_fcall trf_5034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5034(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5034(t0,t1);}

C_noret_decl(trf_6835)
static void C_fcall trf_6835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6835(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6835(t0,t1);}

C_noret_decl(trf_3977)
static void C_fcall trf_3977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3977(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3977(t0,t1,t2,t3);}

C_noret_decl(trf_9941)
static void C_fcall trf_9941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9941(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9941(t0,t1,t2);}

C_noret_decl(trf_5064)
static void C_fcall trf_5064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5064(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5064(t0,t1);}

C_noret_decl(trf_5912)
static void C_fcall trf_5912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5912(void *dummy){
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
f_5912(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_5918)
static void C_fcall trf_5918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5918(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5918(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6713)
static void C_fcall trf_6713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6713(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6713(t0,t1,t2,t3);}

C_noret_decl(trf_6756)
static void C_fcall trf_6756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6756(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6756(t0,t1);}

C_noret_decl(trf_4264)
static void C_fcall trf_4264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4264(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4264(t0,t1);}

C_noret_decl(trf_6337)
static void C_fcall trf_6337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6337(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6337(t0,t1,t2);}

C_noret_decl(trf_12085)
static void C_fcall trf_12085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12085(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12085(t0,t1,t2);}

C_noret_decl(trf_7935)
static void C_fcall trf_7935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7935(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7935(t0,t1);}

C_noret_decl(trf_10186)
static void C_fcall trf_10186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10186(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10186(t0,t1,t2);}

C_noret_decl(trf_3652)
static void C_fcall trf_3652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3652(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3652(t0,t1,t2,t3);}

C_noret_decl(trf_3630)
static void C_fcall trf_3630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3630(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3630(t0,t1,t2);}

C_noret_decl(trf_3637)
static void C_fcall trf_3637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3637(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3637(t0,t1);}

C_noret_decl(trf_6562)
static void C_fcall trf_6562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6562(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6562(t0,t1);}

C_noret_decl(trf_6380)
static void C_fcall trf_6380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6380(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6380(t0,t1,t2,t3);}

C_noret_decl(trf_6386)
static void C_fcall trf_6386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6386(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6386(t0,t1,t2,t3);}

C_noret_decl(trf_11010)
static void C_fcall trf_11010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11010(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11010(t0,t1,t2,t3);}

C_noret_decl(trf_6693)
static void C_fcall trf_6693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6693(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6693(t0,t1,t2);}

C_noret_decl(trf_10671)
static void C_fcall trf_10671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10671(t0,t1,t2);}

C_noret_decl(trf_4353)
static void C_fcall trf_4353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4353(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4353(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5951)
static void C_fcall trf_5951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5951(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5951(t0,t1);}

C_noret_decl(trf_4335)
static void C_fcall trf_4335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4335(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4335(t0,t1,t2);}

C_noret_decl(trf_6673)
static void C_fcall trf_6673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6673(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6673(t0,t1,t2);}

C_noret_decl(trf_7788)
static void C_fcall trf_7788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7788(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7788(t0,t1);}

C_noret_decl(trf_3771)
static void C_fcall trf_3771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3771(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3771(t0,t1);}

C_noret_decl(trf_5368)
static void C_fcall trf_5368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5368(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5368(t0,t1,t2);}

C_noret_decl(trf_10211)
static void C_fcall trf_10211(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10211(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10211(t0,t1,t2);}

C_noret_decl(trf_5318)
static void C_fcall trf_5318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5318(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5318(t0,t1);}

C_noret_decl(trf_9240)
static void C_fcall trf_9240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9240(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_9240(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_9244)
static void C_fcall trf_9244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9244(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_9244(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9214)
static void C_fcall trf_9214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9214(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9214(t0,t1,t2);}

C_noret_decl(trf_6050)
static void C_fcall trf_6050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6050(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6050(t0,t1,t2);}

C_noret_decl(trf_5792)
static void C_fcall trf_5792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5792(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5792(t0,t1,t2);}

C_noret_decl(trf_4493)
static void C_fcall trf_4493(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4493(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4493(t0,t1);}

C_noret_decl(trf_6085)
static void C_fcall trf_6085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6085(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6085(t0,t1,t2,t3);}

C_noret_decl(trf_7613)
static void C_fcall trf_7613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7613(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7613(t0,t1,t2);}

C_noret_decl(trf_4807)
static void C_fcall trf_4807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4807(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4807(t0,t1);}

C_noret_decl(trf_10806)
static void C_fcall trf_10806(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10806(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10806(t0,t1,t2);}

C_noret_decl(trf_10832)
static void C_fcall trf_10832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10832(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10832(t0,t1,t2);}

C_noret_decl(trf_4851)
static void C_fcall trf_4851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4851(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4851(t0,t1,t2);}

C_noret_decl(trf_11235)
static void C_fcall trf_11235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11235(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11235(t0,t1,t2);}

C_noret_decl(trf_5765)
static void C_fcall trf_5765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5765(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5765(t0,t1);}

C_noret_decl(trf_6131)
static void C_fcall trf_6131(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6131(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6131(t0,t1);}

C_noret_decl(trf_6158)
static void C_fcall trf_6158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6158(t0,t1);}

C_noret_decl(trf_10392)
static void C_fcall trf_10392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10392(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10392(t0,t1);}

C_noret_decl(trf_6148)
static void C_fcall trf_6148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6148(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6148(t0,t1);}

C_noret_decl(trf_9440)
static void C_fcall trf_9440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9440(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9440(t0,t1);}

C_noret_decl(trf_4030)
static void C_fcall trf_4030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4030(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4030(t0,t1,t2);}

C_noret_decl(trf_10351)
static void C_fcall trf_10351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10351(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10351(t0,t1,t2,t3);}

C_noret_decl(trf_4050)
static void C_fcall trf_4050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4050(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4050(t0,t1,t2);}

C_noret_decl(trf_4441)
static void C_fcall trf_4441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4441(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4441(t0,t1);}

C_noret_decl(tr11)
static void C_fcall tr11(C_proc11 k) C_regparm C_noret;
C_regparm static void C_fcall tr11(C_proc11 k){
C_word t10=C_pick(0);
C_word t9=C_pick(1);
C_word t8=C_pick(2);
C_word t7=C_pick(3);
C_word t6=C_pick(4);
C_word t5=C_pick(5);
C_word t4=C_pick(6);
C_word t3=C_pick(7);
C_word t2=C_pick(8);
C_word t1=C_pick(9);
C_word t0=C_pick(10);
C_adjust_stack(-11);
(k)(11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

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

C_noret_decl(tr14)
static void C_fcall tr14(C_proc14 k) C_regparm C_noret;
C_regparm static void C_fcall tr14(C_proc14 k){
C_word t13=C_pick(0);
C_word t12=C_pick(1);
C_word t11=C_pick(2);
C_word t10=C_pick(3);
C_word t9=C_pick(4);
C_word t8=C_pick(5);
C_word t7=C_pick(6);
C_word t6=C_pick(7);
C_word t5=C_pick(8);
C_word t4=C_pick(9);
C_word t3=C_pick(10);
C_word t2=C_pick(11);
C_word t1=C_pick(12);
C_word t0=C_pick(13);
C_adjust_stack(-14);
(k)(14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}

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

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
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
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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

/* k3808 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:82: scan-each */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3666(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k3805 in k3802 in k3796 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:83: scan */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3699(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_9408 in k9401 in k9397 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9408(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9408,3,t0,t1,t2);}
/* optimizer.scm:1405: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9244(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k9401 in k9397 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9403(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9403,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1405: every */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3722,2,t0,t1);}
t2=C_eqp(t1,lf[3]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3732,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3747,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t3,((C_word*)t0)[6]))){
t6=t5;
f_3747(t6,C_SCHEME_FALSE);}
else{
t6=C_i_memq(t3,((C_word*)((C_word*)t0)[5])[1]);
t7=t5;
f_3747(t7,C_i_not(t6));}}
else{
t3=C_eqp(t1,lf[5]);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3771,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[5],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t3)){
t5=t4;
f_3771(t5,t3);}
else{
t5=C_eqp(t1,lf[21]);
t6=t4;
f_3771(t6,(C_truep(t5)?t5:C_eqp(t1,lf[22])));}}}

/* f_5814 in k5811 in k5781 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5814(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5814,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(t5,C_fix(1),C_SCHEME_FALSE));}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k5811 in k5781 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5813(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5813,2,t0,t1);}
t2=(C_truep(t1)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5830,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5790,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5792,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5792(t9,t5,t3);}

/* k3802 in k3796 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:83: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4055 in k4053 in simplify in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4053 in simplify in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4054,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4065,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:152: any */
t4=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}
else{
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:93: alist-ref */
t3=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[9])[1]);}

/* k4442 in k4439 */
static void C_ccall f_4443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:245: varnode */
t2=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4119 in k4072 */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_10368 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10368(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10368,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* map-loop224 in k4072 */
static void C_fcall f_4123(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4123,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:156: g230 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10368,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10374,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1600: g2540 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_10361 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10361,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10361,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10367,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1599: g2537 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3716,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:65: g73 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[11]);}

/* k9096 in k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9097,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9102,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1348: get-list */
t3=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],((C_word*)t0)[6],lf[78]);}
else{
t2=((C_word*)t0)[3];
f_9069(2,t2,C_SCHEME_FALSE);}}

/* f_3716 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3716,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_4432 in k4388 in k4383 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4432,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4441,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4457,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4463,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:243: g355 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,lf[54]);}
else{
t5=t4;
f_4441(t5,C_SCHEME_FALSE);}}

/* f_5830 in k5811 in k5781 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5830(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5830,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_set_i_slot(t5,C_fix(1),C_SCHEME_FALSE));}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* f_4110 in k4072 */
static void C_ccall f_4110(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4110,3,t0,t1,t2);}
t3=C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cdr(t3));}

/* f_3702 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3702(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3702,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9067 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm:1357: transform */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9670(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],((C_word*)((C_word*)t0)[9])[1]);}
else{
t2=C_i_car(((C_word*)t0)[10]);
/* optimizer.scm:1358: walk */
t3=((C_word*)((C_word*)t0)[11])[1];
f_9032(t3,((C_word*)t0)[3],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}}

/* k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3709,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3715,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:64: g65 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}

/* f_3709 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3709,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k4461 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(lf[53],t1);
t3=((C_word*)t0)[2];
f_4441(t3,C_i_not(t2));}

/* k9434 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9435,2,t0,t1);}
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9440(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(t4)){
t5=t3;
f_9440(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[7])+1,t5);
t7=t3;
f_9440(t7,C_SCHEME_TRUE);}}}

/* k5863 in k5857 in k5894 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5865,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5765(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:486: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3977(t3,t2,((C_word*)t0)[6],lf[78]);}}

/* k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8629,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1246: fifth */
t4=*((C_word*)lf[155]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_8623 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8623(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8623,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k7262 in k7212 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7263,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:994: g1586 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[145],((C_word*)t0)[5],t2);}

/* f_4457 */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4457,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* k5857 in k5894 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5859(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5859,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:485: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3977(t3,t2,((C_word*)t0)[6],lf[106]);}
else{
t2=((C_word*)t0)[2];
f_5765(t2,C_SCHEME_FALSE);}}

/* k8638 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8639(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8639,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8646,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8661,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1255: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8668,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t1;
t6=C_u_i_car(t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[2],t6);
/* optimizer.scm:1257: g2025 */
t8=t3;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[3],lf[12],t4,t7);}
else{
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8683,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8698,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8700,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1263: fold-inner */
t7=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t1);}}}

/* k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_8637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8637,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8737,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1250: remove */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[7]);}

/* k3843 in k3841 in k3839 in k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:104: remember */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3652(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3841 in k3839 in k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_memq(((C_word*)t0)[4],((C_word*)t0)[6]))){
/* optimizer.scm:104: remember */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3652(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* optimizer.scm:103: mark */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3630(t3,t2,((C_word*)t0)[4]);}}

/* k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8633(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8633,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8637,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[146]+1))){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=t3;
f_8637(t7,C_u_i_car(t6));}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=t3;
f_8637(t6,C_u_i_car(t5));}}

/* k5850 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5851,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:492: g856 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[13],((C_word*)t0)[4],t2);}

/* k3839 in k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3856,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t4=C_i_memq(((C_word*)t0)[4],((C_word*)((C_word*)t0)[8])[1]);
t5=t3;
f_3856(t5,C_i_not(t4));}
else{
t4=t3;
f_3856(t4,C_SCHEME_FALSE);}}

/* k11243 in for-each-loop2641 in k10606 in k10604 in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11235(t3,((C_word*)t0)[4],t2);}

/* k5876 in k5869 in k5863 in k5857 in k5894 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5765(t2,C_i_not(t1));}

/* k5869 in k5863 in k5857 in k5894 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5871,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5765(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* optimizer.scm:487: expression-has-side-effects? */
t4=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}}

/* k6187 in k6173 in k6171 in k6164 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6188,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:592: node-subexpressions-set! */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k3745 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3747(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3747,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_3732(t4,t3);}
else{
t2=((C_word*)t0)[4];
f_3732(t2,C_SCHEME_UNDEFINED);}}

/* k3857 in k3854 in k3839 in k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3863,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:101: g98 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k3854 in k3839 in k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3856,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:99: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[19],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_3842(2,t2,C_SCHEME_UNDEFINED);}}

/* k11225 in k10606 in k10604 in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_pairp(((C_word*)((C_word*)t0)[2])[1]);
/* optimizer.scm:1763: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k3731 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3732(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3732,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3738,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:72: remove */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k3734 in k3731 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_3738 in k3731 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3738(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3738,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(t3,((C_word*)t0)[2]));}

/* k11880 in k11844 */
static void C_ccall f_11881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11881,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11853,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t6=C_a_i_list1(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11865,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11868,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:678: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[7]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k11870 in k11867 in k11880 in k11844 */
static void C_ccall f_11871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:678: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_8646 in k8638 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8646,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k11777 in k11739 in k11733 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11779,2,t0,t1);}
t2=C_eqp(lf[13],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11763,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11769,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:726: g1180 */
t8=t5;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
t3=((C_word*)t0)[3];
f_11672(t3,C_SCHEME_FALSE);}}

/* f_11773 in k11739 in k11733 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11773(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11773,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k10418 in k10403 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10419,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* optimizer.scm:1628: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_10351(t3,((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k10403 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_10405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10405,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1623: walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_10351(t5,((C_word*)t0)[7],((C_word*)t0)[8],t4);}
else{
t2=f_10296(C_a_i(&a,6),((C_word*)((C_word*)t0)[9])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10419,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1627: walk */
t4=((C_word*)((C_word*)t0)[6])[1];
f_10351(t4,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* f_4177 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4177,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4177,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:173: g259 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4995,2,t0,t1);}
t2=C_i_caddr(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_car(t2);
/* optimizer.scm:341: test */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3977(t5,t3,t4,lf[60]);}
else{
t3=((C_word*)t0)[2];
f_4884(2,t3,C_SCHEME_FALSE);}}

/* f_4997 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4997,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_4989 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4989,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4159 in simplify in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:151: ##sys#hash-table-ref */
t2=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[30]+1),t1);}

/* walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4163,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_memq(t2,*((C_word*)lf[39]+1)))){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4176,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t4,a[9]=((C_word*)t0)[7],a[10]=t5,a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:172: walk1 */
t7=((C_word*)((C_word*)t0)[8])[1];
f_4353(t7,t6,t2,t3,t4);}}

/* f_6113 */
static void C_ccall f_6113(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6113,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k6117 */
static void C_ccall f_6119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6316,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cadr(t1);
/* optimizer.scm:565: g974 */
t5=t2;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4969 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4971,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_4925(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4977,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_u_i_car(((C_word*)t0)[3]);
/* optimizer.scm:343: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3977(t4,t2,t3,lf[77]);}}

/* k4976 in k4969 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 in ... */
static void C_ccall f_4977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4925(t2,C_i_not(t1));}

/* k7212 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
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
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7214,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[3]);
t5=C_i_not(t4);
t6=(C_truep(t5)?t5:C_eqp(t4,*((C_word*)lf[147]+1)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7231,tmp=(C_word)a,a+=2,tmp);
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7245,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7251,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=((C_word*)t0)[5],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t11=((C_word*)t0)[3];
t12=C_u_i_car(t11);
t13=C_a_i_list1(&a,1,t12);
t14=C_i_car(((C_word*)t0)[2]);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7263,a[2]=t14,a[3]=t9,a[4]=t10,a[5]=t13,tmp=(C_word)a,a+=6,tmp);
t16=((C_word*)t0)[3];
t17=C_u_i_cdr(t16);
t18=C_u_i_car(t17);
/* optimizer.scm:996: qnode */
t19=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t15,t18);}
else{
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8960 in loop */
static void C_ccall f_8961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8961,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_6102 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6102(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6102,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k6106 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6108,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6327,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:596: test */
t4=((C_word*)((C_word*)t0)[5])[1];
f_6085(t4,t3,lf[126],lf[127]);}
else{
t2=((C_word*)t0)[6];
f_6093(2,t2,C_SCHEME_UNDEFINED);}}

/* f_6109 in k6106 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6109,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6113,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:564: g970 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* f_7208 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7208(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7208,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k10470 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_10459(t3,C_i_length(t2));}
else{
t2=((C_word*)t0)[2];
f_10459(t2,C_fix(0));}}

/* f_10476 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10476(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10476,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4952 in k4932 in k4929 in k4923 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in ... */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:350: g555 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_5607 in k5594 in k5588 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5607(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5607,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k5601 in k5594 in k5588 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4807(t2,C_i_not(t1));}

/* f_4959 in k4923 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 in ... */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4959,3,t0,t1,t2);}
t3=*((C_word*)lf[76]+1);
/* optimizer.scm:344: g553 */
t4=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k8940 in k8937 in loop */
static void C_ccall f_8941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8941,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k10464 in k10458 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=C_i_length(t2);
t4=((C_word*)t0)[2];
f_10447(t4,C_eqp(((C_word*)t0)[3],t3));}
else{
t2=((C_word*)t0)[2];
f_10447(t2,C_eqp(((C_word*)t0)[3],C_fix(0)));}}

/* k4072 */
static void C_ccall f_4073(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4073,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4110,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[7],lf[35]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4121,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4123,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4123(t14,t10,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_4948 in k4932 in k4929 in k4923 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in ... */
static void C_ccall f_4948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4948,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7036 in k7005 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7038,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:953: g1527 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10490,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10476,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10482,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1616: g2573 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* f_10492 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10492(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10492,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10498,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10484,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1614: g2569 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}

/* f_7032 in k7005 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7032,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_4934 in k4932 in k4929 in k4923 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in ... */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4934,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4932 in k4929 in k4923 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in ... */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4934,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4948,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:352: g560 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k4929 in k4923 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 in ... */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4931,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_4884(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:346: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[75],((C_word*)t0)[4]);}}

/* k5620 in k5617 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_4800(2,t3,t2);}
else{
/* optimizer.scm:314: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3977(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[102]);}}

/* k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11618(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11618,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(((C_word*)t0)[2]);
t3=t1;
t4=C_u_i_car(t3);
t5=C_eqp(t2,t4);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[3]);
t7=C_a_i_list1(&a,1,t6);
t8=t1;
t9=C_u_i_cdr(t8);
t10=C_i_cadr(((C_word*)t0)[4]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11643,a[2]=t12,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_11643(t14,((C_word*)t0)[6],t7,t9,t10);}
else{
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4077 in k4072 */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4078,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_a_i_plus(&a,2,t4,C_fix(1));
t6=C_i_set_cdr(t3,t5);
t7=f_4011(((C_word*)((C_word*)t0)[4])[1]);
/* optimizer.scm:163: simplify */
t8=((C_word*)((C_word*)t0)[5])[1];
f_4050(t8,((C_word*)t0)[6],t1);}
else{
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,C_fix(1)),((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=f_4011(((C_word*)((C_word*)t0)[4])[1]);
/* optimizer.scm:163: simplify */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4050(t7,((C_word*)t0)[6],t1);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10482,2,t0,t1);}
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10459,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10471,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1617: get */
t6=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[6],((C_word*)t0)[2],lf[78]);}
else{
t3=((C_word*)t0)[4];
f_10405(t3,C_SCHEME_FALSE);}}

/* f_10484 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10484(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10484,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4923 in k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4925(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4925,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4959,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=C_u_i_cdr(((C_word*)t0)[6]);
/* optimizer.scm:344: any */
t5=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}
else{
t2=((C_word*)t0)[2];
f_4884(2,t2,C_SCHEME_FALSE);}}

/* k4921 in k4993 in k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_4925(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4971,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[7]);
/* optimizer.scm:342: test */
t5=((C_word*)((C_word*)t0)[8])[1];
f_3977(t5,t3,t4,lf[78]);}}

/* k5617 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5619,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_4800(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:313: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3977(t3,t2,((C_word*)t0)[4],lf[49]);}}

/* k5611 in k5594 in k5588 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:319: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3977(t3,((C_word*)t0)[3],t2,lf[70]);}

/* f_4065 in k4053 in simplify in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4065(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4065,3,t0,t1,t2);}
t3=C_i_cadr(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4073,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=t2;
t6=C_u_i_car(t5);
/* optimizer.scm:154: match-node */
t7=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[6],t6,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k10896 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10898,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1695: g2816 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* f_10892 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10892,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6171 in k6164 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_i_cdr(((C_word*)t0)[6]);
/* optimizer.scm:591: node-subexpressions-set! */
t4=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[7],t3);}

/* k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10892,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10898,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11064,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1701: gensym */
t5=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_8683 in k8638 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8683,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6175 in k6173 in k6171 in k6164 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:595: touch */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_6080(((C_word*)((C_word*)t0)[3])[1]));}

/* k6173 in k6171 in k6164 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6188,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_u_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:594: reverse */
t6=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k8937 in loop */
static void C_ccall f_8938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8941,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* optimizer.scm:1315: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8919(t5,t2,C_SCHEME_END_OF_LIST,t4);}

/* f_10884 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10884,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9089,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_9069(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9097,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1347: get */
t3=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],((C_word*)t0)[6],lf[49]);}
else{
t2=((C_word*)t0)[2];
f_9069(2,t2,C_SCHEME_FALSE);}}}

/* k6164 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_fcall f_6166(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6166,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:590: node-parameters-set! */
t5=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[8],lf[124]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4903,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4997,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:339: g536 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}
else{
t2=((C_word*)t0)[2];
f_4884(2,t2,C_SCHEME_FALSE);}}

/* k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5638,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* optimizer.scm:311: call-info */
t4=*((C_word*)lf[103]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[12],t2);}

/* f_5632 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5632(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5632,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_eqp(((C_word*)t0)[8],lf[6]);
if(C_truep(t3)){
t4=C_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11735,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t6=C_u_i_car(((C_word*)t0)[9]);
/* optimizer.scm:722: get */
t7=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,((C_word*)t0)[10],t6,lf[106]);}
else{
t5=t2;
f_11672(t5,C_SCHEME_FALSE);}}
else{
t4=t2;
f_11672(t4,C_SCHEME_FALSE);}}

/* k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9055(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9055,2,t0,t1);}
t2=C_eqp(t1,lf[11]);
if(C_truep(t2)){
t3=C_i_caddr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9069,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[6])){
t5=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_u_i_car(t5))){
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9089,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[14],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1345: get */
t7=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[14],((C_word*)t0)[6],lf[79]);}
else{
t6=t4;
f_9069(2,t6,C_SCHEME_FALSE);}}
else{
t5=t4;
f_9069(2,t5,C_SCHEME_FALSE);}}
else{
t3=C_eqp(t1,lf[13]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_car(((C_word*)t0)[11]);
/* optimizer.scm:1359: walk */
t6=((C_word*)((C_word*)t0)[12])[1];
f_9032(t6,((C_word*)t0)[4],t4,t5,C_SCHEME_FALSE);}
else{
t4=C_eqp(t1,lf[6]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9191,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_car(((C_word*)t0)[11]);
/* optimizer.scm:1361: walk */
t8=((C_word*)((C_word*)t0)[12])[1];
f_9032(t8,t5,t6,t7,((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9204,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t6=C_i_check_list_2(((C_word*)t0)[11],lf[2]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9214,a[2]=t8,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_9214(t10,((C_word*)t0)[4],((C_word*)t0)[11]);}}}}

/* f_11660 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11660(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11660,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* map-loop1694 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_7583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7583,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7608,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1039: g1700 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8660 in k8638 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8661,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1255: g2020 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k9915 in for-each-loop2407 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9907(t3,((C_word*)t0)[4],t2);}

/* k5661 in k5658 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k5658 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5662,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:469: invalidate-gae! */
f_4016(t2,((C_word*)t0)[4]);}

/* f_5667 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5667(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5667,3,t0,t1,t2);}
/* optimizer.scm:468: g815 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4163(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11660,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:719: g1165 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k8697 in k8638 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8698,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1259: g2030 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* ##compiler#transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9028,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9032,a[2]=t17,a[3]=t7,a[4]=t9,a[5]=t11,a[6]=t13,a[7]=t15,a[8]=t3,tmp=(C_word)a,a+=9,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9240,a[2]=t11,a[3]=t3,a[4]=t9,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t20=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9670,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10288,a[2]=t1,a[3]=t5,a[4]=t13,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1557: debugging */
t22=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t21,lf[28],lf[186]);}

/* f_6257 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6257(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6257,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* f_11653 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11653(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11653,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11653,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:718: g1162 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* f_9927 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9927,4,t0,t1,t2,t3);}
t4=C_i_cdr(t2);
t5=C_i_cdr(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_eqp(t4,t5));}

/* f_5654 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5654(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5654,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_11646 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11646(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11646,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_fcall f_10852(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10852,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11098,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11104,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1688: g2802 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6240 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6158(t2,C_eqp(lf[5],t1));}

/* loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_fcall f_11643(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11643,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11646,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11652,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:717: g1159 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}

/* k9481 in k9542 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9483(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9483,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm:1426: every */
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],t2,t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_9488 in k9481 in k9542 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9488,3,t0,t1,t2);}
/* optimizer.scm:1426: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9244(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10840 in for-each-loop2868 in k10729 in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10832(t3,((C_word*)t0)[4],t2);}

/* k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9049,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1340: g2130 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* f_9049 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9049,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_6236 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6236(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6236,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9042,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9048,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:1339: g2122 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_9042 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9042(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9042,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* for-each-loop2407 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9907(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9907,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9916,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1517: g2408 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5672 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:467: g785 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* map-loop792 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5676,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5701,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:468: g798 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_10870 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10870(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10870,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k10874 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1694: copy-node! */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6225,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6211,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6217,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:584: g1012 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4814,2,t0,t1);}
t2=C_i_caddr(t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:323: check-signature */
t4=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[11],((C_word*)t0)[8],t2);}

/* k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_fcall f_10862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10862,NULL,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:1692: descend */
t2=((C_word*)((C_word*)t0)[2])[1];
f_10852(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10870,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10876,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10884,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10890,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1699: g2821 */
t7=t5;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* k4191 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:170: simplify */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4050(t2,((C_word*)t0)[3],t1);}

/* k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[5]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
t5=C_i_car(((C_word*)t0)[6]);
/* optimizer.scm:177: constant-node? */
t6=((C_word*)((C_word*)t0)[11])[1];
f_3983(3,t6,t4,t5);}
else{
t4=C_eqp(t1,lf[12]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4320,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4326,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=t2,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t7=C_i_car(((C_word*)t0)[6]);
/* optimizer.scm:187: g275 */
t8=t5;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
t5=((C_word*)t0)[10];
/* optimizer.scm:170: simplify */
t6=((C_word*)((C_word*)t0)[2])[1];
f_4050(t6,((C_word*)t0)[3],t5);}}}

/* f_6219 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6219,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k6215 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6217,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6203,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:585: g1015 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[2];
f_6166(t3,C_SCHEME_FALSE);}}

/* k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4800,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4807,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],tmp=(C_word)a,a+=21,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5590,a[2]=t3,a[3]=((C_word*)t0)[15],a[4]=t1,a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:316: test */
t5=((C_word*)((C_word*)t0)[15])[1];
f_3977(t5,t4,((C_word*)t0)[10],lf[58]);}

/* f_6211 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6211,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:324: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[73],((C_word*)t0)[11]);}

/* touch in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static C_word C_fcall f_4011(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* f_4184 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4184,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4184,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:174: g267 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* f_6203 in k6215 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6203,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k6207 in k6215 in k6223 in k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
f_6166(t3,C_eqp(((C_word*)t0)[3],t2));}

/* f_9035 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9035(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9035,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9032(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9032,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9035,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9041,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:1338: g2119 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}

/* f_8720 */
static void C_ccall f_8720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8720,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_4019 in invalidate-gae! in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4019,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_set_cdr(t2,C_SCHEME_FALSE));}

/* invalidate-gae! in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4016(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4016,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4019,tmp=(C_word)a,a+=2,tmp);
t4=C_i_check_list_2(t2,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4030(t8,t1,t2);}

/* k8601 */
static void C_ccall f_8602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8602,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1233: append */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* f_8700 in k8638 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)tr4,(void*)f_8700,4,t0,t1,t2,t3);}
t4=C_eqp(*((C_word*)lf[147]+1),lf[148]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8707,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t7=C_a_i_list2(&a,2,t2,t3);
/* optimizer.scm:1266: g2037 */
t8=t5;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[145],t6,t7);}
else{
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8720,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t7=C_a_i_list2(&a,2,t2,t3);
/* optimizer.scm:1267: g2042 */
t8=t5;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[92],t6,t7);}}

/* f_8707 */
static void C_ccall f_8707(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8707,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_9630 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9630(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9630,3,t0,t1,t2);}
/* optimizer.scm:1438: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9244(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* f_7082 in k7075 in k7067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7082(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7082,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7084,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7099,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:967: gensym */
t6=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* f_7084 */
static void C_ccall f_7084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7084,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7098 */
static void C_ccall f_7099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7099,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* optimizer.scm:967: g1548 */
t4=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[5],lf[6],t2,t3);}

/* f_8668 in k8638 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8668,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_4508 in k4506 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4508,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4506 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4507(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4507,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4508,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4523,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4525,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4525(t12,t8,((C_word*)t0)[6]);}

/* k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6271,2,t0,t1);}
t2=C_i_caddr(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6257,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6263,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:573: g992 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[8]);}

/* k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6263,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6136,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:574: g996 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_6265 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6265(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6265,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k7005 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7007(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7007,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[146]+1));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7018,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7032,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7038,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_cdr(t9);
t11=C_u_i_car(t10);
t12=C_a_i_list1(&a,1,t11);
/* optimizer.scm:957: g1532 */
t13=t7;
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t8,lf[145],t12,((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7001 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7001(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7001,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_7018 in k7005 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7018(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7018,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_7560 */
static void C_ccall f_7560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7560,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k3912 in k3910 in k3908 in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3914,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3939,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3939(t8,((C_word*)t0)[3],t3);}

/* f_3914 in k3912 in k3910 in k3908 in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3914(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3914,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3916,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:112: g125 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[24]);}

/* k7542 in k7515 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1040: fold-right */
t2=*((C_word*)lf[138]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_3916 */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3916r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3916r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3916r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* k3910 in k3908 in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3966,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:111: delete-duplicates */
t4=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[27]+1));}
else{
t3=t2;
f_3913(2,t3,C_SCHEME_UNDEFINED);}}

/* k11693 in k11670 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11695,2,t0,t1);}
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=C_i_cdr(((C_word*)t0)[3]);
t5=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:727: loop2 */
t6=((C_word*)((C_word*)t0)[5])[1];
f_11643(t6,((C_word*)t0)[6],t3,t4,t5);}

/* k7554 in k7515 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7556,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1042: g1726 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k3908 in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:109: scan */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3699(t3,t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* f_7558 in k7515 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7558(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7558,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7560,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list2(&a,2,t2,t3);
/* optimizer.scm:1051: g1734 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,lf[145],((C_word*)t0)[2],t5);}

/* f_11689 in k11670 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11689(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11689,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9682,2,t0,t1);}
t2=C_i_caddr(t1);
t3=C_i_length(t2);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9686,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t5,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1453: get */
t7=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[9],((C_word*)t0)[3],lf[127]);}

/* k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9686(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9686,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=t4,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t6=C_u_i_length(((C_word*)t0)[2]);
t7=C_eqp(t6,C_fix(4));
if(C_truep(t7)){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=t5;
f_9695(t9,C_i_listp(t8));}
else{
t8=t5;
f_9695(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_9695(t6,C_SCHEME_FALSE);}}

/* f_7524 */
static void C_ccall f_7524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7524,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_7522 in k7515 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7522,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7524,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list1(&a,1,t3);
t7=C_a_i_list2(&a,2,t2,t4);
/* optimizer.scm:1041: g1721 */
t8=t5;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[6],t6,t7);}

/* k7067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7069(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7069,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7077,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_7077(t5,t3);}
else{
t5=C_i_length(((C_word*)t0)[4]);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=t4;
f_7077(t9,C_i_nequalp(t5,t8));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k11670 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_fcall f_11672(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11672,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11689,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:727: g1183 */
t5=t2;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11709,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11717,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:731: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[6],t2,t3);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k11400 in k11393 */
static void C_ccall f_11402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11402,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:785: g1225 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9695,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9698,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1457: caaddr */
t4=*((C_word*)lf[180]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
/* optimizer.scm:1555: bomb */
t2=*((C_word*)lf[157]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[8],lf[181],((C_word*)t0)[2]);}}

/* k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_9700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:1458: cdaddr */
t3=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3965 in k3910 in k3908 in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:111: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[18],lf[25],t1);}

/* f_7063 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7063,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_7538 in k7515 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7538,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k10918 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10920,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1700: g2826 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* k10928 in k10925 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1734: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10925 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10929,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10932,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10940,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1736: list-tabulate */
t5=*((C_word*)lf[189]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[3],t4);}

/* k10922 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1732: g2859 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],lf[190],t1);}

/* k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_7502(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7502,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_7505(t3,t1);}
else{
t3=C_eqp(*((C_word*)lf[147]+1),lf[148]);
t4=(C_truep(t3)?C_i_caddr(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;
f_7505(t5,t4);}
else{
t5=C_eqp(*((C_word*)lf[147]+1),lf[150]);
t6=t2;
f_7505(t6,(C_truep(t5)?C_i_cadddr(((C_word*)t0)[4]):C_SCHEME_FALSE));}}}

/* k7075 in k7067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7077,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7082,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7101,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7107,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7116,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[5];
t8=C_u_i_car(t7);
/* optimizer.scm:968: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t6,t8);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10912,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10914,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10920,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10923,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10926,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1734: varnode */
t6=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}

/* k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_7505(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7505,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7506,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[2];
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7512,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7613,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7613(t12,t8,t7);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7506 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7506(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7506,3,t0,t1,t2);}
/* optimizer.scm:1038: gensym */
t3=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* f_10914 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10914,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_11467 in k11482 */
static void C_ccall f_11467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11467,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7512(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7512,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[51]+1);
t7=C_i_check_list_2(t1,lf[35]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7583,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7583(t12,t8,t1);}

/* k3947 in for-each-loop109 in k3912 in k3910 in k3908 in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3939(t3,((C_word*)t0)[4],t2);}

/* k7515 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7517(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7522,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7538,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7544,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=C_eqp(*((C_word*)lf[147]+1),lf[148]);
t7=(C_truep(t6)?C_i_car(((C_word*)t0)[5]):C_i_cadr(((C_word*)t0)[5]));
t8=C_a_i_list1(&a,1,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7556,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7558,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1050: fold-boolean */
t11=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,t1);}

/* f_10940 in k10925 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10940(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10940,2,t0,t1);}
/* optimizer.scm:1736: qnode */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* f_9711 */
static void C_ccall f_9711(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9711,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9715 */
static void C_ccall f_9717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9719,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cdr(t1);
t4=C_i_length(t3);
t5=C_eqp(((C_word*)t0)[6],t4);
if(C_truep(t5)){
t6=t2;
f_9719(2,t6,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1522: quit */
t6=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,lf[169],((C_word*)t0)[7]);}}

/* k9718 in k9715 */
static void C_ccall f_9719(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9719,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9730,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9736,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list4(&a,4,C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6]);
t6=C_u_i_car(((C_word*)t0)[2]);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_u_i_cdr(t7);
t9=C_a_i_cons(&a,2,t6,t8);
/* optimizer.scm:1528: g2423 */
t10=t3;
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t4,lf[165],t5,t9);}

/* for-each-loop109 in k3912 in k3910 in k3908 in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3939,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3948,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:112: g110 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_8867 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8867,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11104,2,t0,t1);}
t2=C_i_cadr(t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11090,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11096,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1689: g2806 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k11106 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1681: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[192],lf[193],t1);}

/* k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9700,2,t0,t1);}
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_cdr(t2);
t4=C_i_setslot(t3,C_fix(0),t1);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9704,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:1462: node-class-set! */
t6=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[15],lf[69]);}

/* k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10235,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10241,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1465: g2402 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[14]);}

/* f_9707 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9707(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9707,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9711,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9717,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1520: g2420 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9762,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9927,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1532: lset-difference */
t5=*((C_word*)lf[170]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[9],((C_word*)((C_word*)t0)[10])[1]);}

/* k8090 in k8067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1133: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4597 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4599,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4583,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:259: g375 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)t0)[3];
f_4556(2,t3,C_SCHEME_FALSE);}}

/* f_6291 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6291(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6291,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k6295 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6131(t2,C_eqp(lf[11],t1));}

/* f_4593 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4593,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_8842 in k8799 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8842,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k8840 in k8799 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8841,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1284: g2065 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[145],t2,((C_word*)t0)[4]);}

/* f_10906 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10906,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k8896 in k8871 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8900,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8902,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8907,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1307: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* k8893 in k8871 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1302: g2082 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* map-loop2775 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_fcall f_11110(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_11110,NULL,3,t0,t1,t2);}
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

/* k9618 in k9608 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1437: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9244(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k9608 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9610,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9619,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1437: append */
t4=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4568 in k4554 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4570,2,t0,t1);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
f_4507(t3,C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],t2),((C_word*)t0)[4]));}

/* f_4564 in k4554 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4564(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4564,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k10458 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_10459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10459,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10465,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1618: get */
t3=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[127]);}

/* k8871 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8873(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8873,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_length(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
if(C_truep(C_i_greater_or_equalp(t3,t5))){
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8882,tmp=(C_word)a,a+=2,tmp);
t7=C_i_cadr(((C_word*)t0)[2]);
t8=C_a_i_list2(&a,2,C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8894,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8897,a[2]=t9,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
/* optimizer.scm:1305: varnode */
t14=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t10,t13);}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6895 in k6869 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6897,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:941: g1506 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_6891 in k6869 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6891,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4554 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4556,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4564,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[5]);
/* optimizer.scm:261: g378 */
t5=t2;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=((C_word*)t0)[2];
f_4507(t2,((C_word*)t0)[4]);}}

/* k4549 in map-loop388 in k4506 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4550,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4525(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4525(t6,((C_word*)t0)[5],t5);}}

/* k10445 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_10447(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10447,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10343,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10349,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1594: g2523 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
f_10405(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_10405(t2,C_SCHEME_FALSE);}}

/* f_8882 in k8871 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8882,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* map-loop2744 in k10721 in k10718 in k10615 in k10613 */
static void C_fcall f_11164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11164,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11189,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1676: g2750 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5588 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5590,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:317: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3977(t3,t2,((C_word*)t0)[5],lf[57]);}
else{
t2=((C_word*)t0)[2];
f_4807(t2,C_SCHEME_FALSE);}}

/* k5594 in k5588 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5596,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_4807(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5602,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5607,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:319: g479 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}}

/* f_11456 in k11482 */
static void C_ccall f_11456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11456,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k11160 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[195]+1),t1);}

/* k5126 in for-each-loop608 in k5065 in k5062 in k5056 */
static void C_ccall f_5127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5118(t3,((C_word*)t0)[4],t2);}

/* k10088 in k10051 in k10049 in k10109 */
static void C_ccall f_10090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(t1);
/* optimizer.scm:1494: take */
t3=*((C_word*)lf[174]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_fix(1));}

/* f_11443 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_11443,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
if(C_truep(C_i_equalp(t4,*((C_word*)lf[218]+1)))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11483,a[2]=t7,a[3]=t8,a[4]=t1,a[5]=t6,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:764: get-list */
t10=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,t2,t3,lf[78]);}}

/* k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6868(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6868,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_length(((C_word*)t0)[5]);
t4=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_nequalp(t3,t4))){
t5=C_i_car(((C_word*)t0)[5]);
t6=C_i_cadr(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6970,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6976,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:936: g1486 */
t9=t7;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t5);}
else{
t5=t2;
f_6870(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_10084 in k10051 in k10049 in k10109 */
static void C_ccall f_10084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10084,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_6862 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6862(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6862,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k11188 in map-loop2744 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11189(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11189,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11164(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11164(t6,((C_word*)t0)[5],t5);}}

/* k9660 in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9662,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1443: delete */
t3=*((C_word*)lf[167]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],*((C_word*)lf[27]+1));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4521 in k4506 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:264: g381 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[6],((C_word*)t0)[4],t1);}

/* map-loop388 in k4506 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4525(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4525,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4550,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:264: g394 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9667 in k9660 in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1443: lset= */
t2=*((C_word*)lf[166]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[27]+1),((C_word*)((C_word*)t0)[3])[1],t1);}

/* k8015 in k7980 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8017,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1116: g1831 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_8011 in k7980 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8011,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5146 in k5062 in k5056 */
static void C_ccall f_5148(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5148,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t2,((C_word*)t0)[3]))){
/* optimizer.scm:398: walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5912(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[15],a[9]=t4,a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[18],tmp=(C_word)a,a+=13,tmp));
t6=((C_word*)t4)[1];
f_5162(t6,((C_word*)t0)[5],((C_word*)t0)[19],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[20],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[6],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5436,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[20],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:425: test */
t4=((C_word*)((C_word*)t0)[18])[1];
f_3977(t4,t3,((C_word*)t0)[22],lf[64]);}}

/* transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9670(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9670,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9674,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t4,a[9]=t2,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10278,a[2]=t8,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10280,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1447: ##sys#make-promise */
t11=*((C_word*)lf[184]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
/* optimizer.scm:1448: debugging */
t9=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,lf[18],lf[185],t3,t7);}}

/* f_5562 in k5574 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5562(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5562,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_9676 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9676(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9676,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9674,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9676,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1450: g2280 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}

/* f_4516 in k4506 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4516(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4516,3,t0,t1,t2);}
/* optimizer.scm:264: g411 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4163(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5566 in k5574 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:453: g769 */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k4587 in k4597 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:259: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3977(t3,((C_word*)t0)[3],t2,lf[56]);}

/* f_4583 in k4597 in k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4583(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4583,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_8076 in k8067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8076,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k10055 in k10053 in k10051 in k10049 in k10109 */
static void C_ccall f_10056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1498: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9941(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10051 in k10049 in k10109 */
static void C_ccall f_10052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10079,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10084,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10090,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1494: g2345 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[8]);}

/* k10053 in k10051 in k10049 in k10109 */
static void C_ccall f_10054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10054,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10064,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10070,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list2(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
t6=C_i_cddr(((C_word*)t0)[7]);
/* optimizer.scm:1497: g2348 */
t7=t3;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,lf[172],t5,t6);}

/* map-loop2660 in k10615 in k10613 */
static void C_fcall f_11194(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11194,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11219,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1656: g2666 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10049 in k10109 */
static void C_ccall f_10050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1493: node-class-set! */
t3=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[6]);}

/* k9331 */
static void C_ccall f_9332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1386: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9244(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k8087 in k8067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1132: g1854 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* f_10043 in k10151 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in ... */
static void C_ccall f_10043(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10043,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10105,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10111,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1488: g2342 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k10078 in k10051 in k10049 in k10109 */
static void C_ccall f_10079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1494: node-parameters-set! */
t2=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10068 in k10053 in k10051 in k10049 in k10109 */
static void C_ccall f_10070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10070,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
/* optimizer.scm:1495: node-subexpressions-set! */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* f_9318 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9318,5,t0,t1,t2,t3,t4);}
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=C_i_car(((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9332,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1386: append */
t9=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t2,((C_word*)t0)[6]);}

/* k8067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8069(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8069,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(*((C_word*)lf[147]+1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8076,tmp=(C_word)a,a+=2,tmp);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8088,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8091,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_u_i_car(t11);
/* optimizer.scm:1133: varnode */
t13=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t8,t12);}
else{
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_eqp(*((C_word*)lf[147]+1),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8105,tmp=(C_word)a,a+=2,tmp);
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1135: g1859 */
t9=t6;
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],lf[12],t7,t8);}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_8063 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8063,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k6803 in k6794 in rewrite in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:918: ##sys#hash-table-set! */
t2=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[141]+1),((C_word*)t0)[3],t1);}

/* f_10064 in k10053 in k10051 in k10049 in k10109 */
static void C_ccall f_10064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10064,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* ##compiler#simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_6809,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
switch(t6){
case C_fix(1):
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6862,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6868,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:932: g1476 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);
case C_fix(2):
if(C_truep(*((C_word*)lf[144]+1))){
t9=C_i_length(t8);
t10=C_i_car(t7);
if(C_truep(C_i_nequalp(t9,t10))){
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7001,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7007,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:950: g1519 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t4);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(3):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7063,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7069,a[2]=t7,a[3]=t1,a[4]=t8,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:963: g1539 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(4):
if(C_truep(*((C_word*)lf[144]+1))){
if(C_truep(*((C_word*)lf[146]+1))){
t9=C_i_length(t8);
t10=C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7152,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7158,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:976: g1562 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t4);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(5):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7208,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7214,a[2]=t8,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:988: g1572 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(6):
t9=C_i_caddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[146]+1));
if(C_truep(t10)){
if(C_truep(*((C_word*)lf[144]+1))){
t11=C_i_length(t8);
t12=C_eqp(C_fix(1),t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7302,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7308,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1003: g1598 */
t15=t13;
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t4);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}
case C_fix(7):
t9=C_i_cadddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[146]+1));
if(C_truep(t10)){
if(C_truep(*((C_word*)lf[144]+1))){
t11=C_i_length(t8);
t12=t7;
t13=C_u_i_car(t12);
if(C_truep(C_i_nequalp(t11,t13))){
t14=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7382,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7388,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1015: g1623 */
t16=t14;
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,t4);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}
case C_fix(8):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7445,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7451,a[2]=t7,a[3]=t1,a[4]=t2,a[5]=t5,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1025: g1638 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(9):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7469,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7475,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1032: g1645 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(10):
if(C_truep(*((C_word*)lf[144]+1))){
t9=C_i_cadddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[146]+1));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7692,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7698,a[2]=t8,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1059: g1745 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t4);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(11):
if(C_truep(*((C_word*)lf[144]+1))){
t9=C_i_caddr(t7);
t10=(C_truep(t9)?t9:*((C_word*)lf[146]+1));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7773,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7779,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1076: g1761 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t4);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(12):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7831,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7837,a[2]=t7,a[3]=t8,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1089: g1776 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(13):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7910,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7916,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1102: g1802 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(14):
if(C_truep(*((C_word*)lf[144]+1))){
t9=C_i_cadr(t7);
t10=C_i_length(t8);
if(C_truep(C_i_nequalp(t9,t10))){
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7976,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7982,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1113: g1823 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t4);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(15):
if(C_truep(*((C_word*)lf[144]+1))){
t9=C_i_length(t8);
t10=C_eqp(C_fix(1),t9);
if(C_truep(t10)){
t11=*((C_word*)lf[146]+1);
t12=(C_truep(*((C_word*)lf[146]+1))?*((C_word*)lf[146]+1):C_i_cadddr(t7));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8063,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8069,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1130: g1848 */
t15=t13;
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t4);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(16):
t9=C_i_car(t7);
t10=C_i_length(t8);
t11=C_i_caddr(t7);
t12=C_i_cadddr(t7);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8146,a[2]=t9,a[3]=t10,a[4]=t11,a[5]=t5,a[6]=t1,a[7]=t12,a[8]=t8,a[9]=t7,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
t14=C_i_cddddr(t7);
if(C_truep(C_i_pairp(t14))){
/* optimizer.scm:1151: fifth */
t15=*((C_word*)lf[155]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t13,t7);}
else{
t15=t13;
f_8146(2,t15,C_SCHEME_FALSE);}
case C_fix(17):
if(C_truep(*((C_word*)lf[144]+1))){
t9=C_i_length(t8);
t10=C_i_car(t7);
if(C_truep(C_i_nequalp(t9,t10))){
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8272,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8278,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1173: g1901 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t4);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(18):
if(C_truep(*((C_word*)lf[144]+1))){
if(C_truep(C_i_nullp(t8))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8345,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8351,a[2]=t5,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1187: g1918 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(19):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8383,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8389,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1197: g1928 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(20):
t9=C_i_length(t8);
t10=C_i_cadddr(t7);
t11=(C_truep(t10)?t10:*((C_word*)lf[146]+1));
if(C_truep(t11)){
if(C_truep(*((C_word*)lf[144]+1))){
t12=t7;
t13=C_u_i_car(t12);
if(C_truep(C_i_nequalp(t9,t13))){
t14=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8549,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8555,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1226: g1978 */
t16=t14;
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,t4);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(21):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8623,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8629,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1244: g2001 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(22):
t9=C_i_car(t7);
t10=C_i_length(t8);
t11=C_i_cadddr(t7);
if(C_truep(*((C_word*)lf[144]+1))){
if(C_truep(C_i_nequalp(t10,t9))){
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8795,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8801,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1278: g2053 */
t14=t12;
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t4);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(23):
if(C_truep(*((C_word*)lf[144]+1))){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8867,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8873,a[2]=t7,a[3]=t8,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1299: g2077 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
default:
/* optimizer.scm:1319: bomb */
t9=*((C_word*)lf[157]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,lf[158]);}}

/* f_6877 in k6869 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6877,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6869 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6870(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6870,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(*((C_word*)lf[144]+1))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6877,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6891,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6897,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(((C_word*)t0)[4]);
t7=C_a_i_list1(&a,1,t6);
/* optimizer.scm:943: g1511 */
t8=t4;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,lf[145],t7,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* f_9353 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9353(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9353,3,t0,t1,t2);}
/* optimizer.scm:1391: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9244(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k8349 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8351,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8352,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8367,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:1188: qnode */
t6=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_8352 in k8349 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8352,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k11482 */
static void C_ccall f_11483(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11483,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11456,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11467,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[6]);
/* optimizer.scm:767: g1208 */
t8=t5;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,lf[145],t7,((C_word*)t0)[7]);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k11471 in k11482 */
static void C_ccall f_11473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11473,2,t0,t1);}
t2=C_a_i_list3(&a,3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);
/* optimizer.scm:765: g1203 */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],lf[5],((C_word*)t0)[6],t2);}

/* f_8902 in k8896 in k8871 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8902,2,t0,t1);}
/* optimizer.scm:1307: split-at */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k8899 in k8896 in k8871 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1304: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_8907 in k8896 in k8871 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8907,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8914,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8919,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_8919(t9,t4,t3,t5);}

/* f_11146 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11146(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11146,2,t0,t1);}
/* optimizer.scm:1678: gensym */
t2=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,lf[194]);}

/* k11140 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11141,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* optimizer.scm:1677: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t1,t2);}

/* k8913 */
static void C_ccall f_8914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1308: append */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop */
static void C_fcall f_8919(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8919,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8938,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
if(C_truep(C_i_symbolp(t5))){
/* optimizer.scm:923: varnode */
t6=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6835,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
t8=t6;
f_6835(t8,C_eqp(lf[34],t7));}
else{
t7=t6;
f_6835(t7,C_SCHEME_FALSE);}}}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8961,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_i_cdr(t3);
/* optimizer.scm:1317: loop */
t14=t5;
t15=t7;
t16=t8;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}}

/* k4692 in k4689 in k4653 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4693,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* optimizer.scm:282: build-lambda-list */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_FALSE);}

/* k4689 in k4653 */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4691,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:280: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[63],((C_word*)t0)[5]);}
else{
/* optimizer.scm:283: build-lambda-list */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k3687 in for-each-loop42 in scan-each in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3679(t3,((C_word*)t0)[4],t2);}

/* f_11151 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11151(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11151,3,t0,t1,t2);}
t3=C_i_caddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_length(t3));}

/* touch in scan-toplevel-assignments in k3623 in k3621 */
static C_word C_fcall f_3660(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_stack_overflow_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
return(t2);}

/* scan-each in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3666(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3666,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3679,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3679(t9,t1,t2);}

/* for-each-loop42 in scan-each in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3679,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3688,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:41: g43 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_8345 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8345(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8345,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_3669 in scan-each in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3669,3,t0,t1,t2);}
/* optimizer.scm:60: scan */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3699(t3,t1,t2,((C_word*)t0)[3]);}

/* f_10514 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10514(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10514,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_5174 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5174(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5174,3,t0,t1,t2);}
/* optimizer.scm:403: g682 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4163(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10506,2,t0,t1);}
t2=C_eqp(lf[13],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10492,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1613: g2566 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
f_10405(t3,C_SCHEME_FALSE);}}

/* f_10500 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10500,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* loop in k5146 in k5062 in k5056 */
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5162,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_nullp(t2);
t7=(C_truep(t6)?t6:C_i_zerop(t3));
if(C_truep(t7)){
t8=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5225,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=t12,a[8]=t10,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:406: append-reverse */
t15=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,t5,t4);}
else{
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5231,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
t9=C_i_car(t2);
/* optimizer.scm:409: test */
t10=((C_word*)((C_word*)t0)[12])[1];
f_3977(t10,t8,t9,lf[60]);}}

/* k5504 */
static void C_ccall f_5506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:363: g580 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* f_5500 */
static void C_ccall f_5500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5500,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* map-loop659 in k5224 in loop in k5146 in k5062 in k5056 */
static void C_fcall f_5194(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5194,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5219,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:403: g665 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5181 in k5224 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:407: invalidate-gae! */
f_4016(t2,((C_word*)t0)[5]);}

/* f_5186 in k5184 in k5181 in k5224 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5186,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5184 in k5181 in k5224 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5186,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:408: g691 */
t3=t2;
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[12],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_5519 in k5513 in k5510 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5519,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5510 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5512,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5535,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5541,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:456: g775 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[7]);}
else{
/* optimizer.scm:463: walk-generic */
t2=((C_word*)((C_word*)t0)[10])[1];
f_5912(t2,((C_word*)t0)[3],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[8],((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_TRUE);}}

/* k5513 in k5510 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5519,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t0)[6]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[7],t4);
/* optimizer.scm:458: g778 */
t6=t2;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,lf[12],((C_word*)t0)[8],t5);}

/* k7341 in k7306 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7343,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1006: g1606 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[145],((C_word*)t0)[4],t2);}

/* k10011 in k10151 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in ... */
static void C_ccall f_10012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1482: node-class-set! */
t3=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[172]);}

/* k10013 in k10011 in k10151 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in ... */
static void C_ccall f_10014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,((C_word*)t0)[5]);
/* optimizer.scm:1483: node-parameters-set! */
t4=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}

/* k10015 in k10013 in k10011 in k10151 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in ... */
static void C_ccall f_10016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
/* optimizer.scm:1484: node-subexpressions-set! */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k5539 in k5510 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:455: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[80],lf[100],((C_word*)t0)[3],t2);}

/* for-each-loop2615 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_10576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10576,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10585,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1640: g2616 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9383 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9384,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_10565 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10565(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10565,3,t0,t1,t2);}
/* optimizer.scm:1640: g2631 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10351(t3,t1,t2,((C_word*)t0)[3]);}

/* f_5535 in k5510 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5535,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_7323 in k7306 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7323(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7323,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7327 in k7306 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7329,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1004: g1601 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_7337 in k7306 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7337,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_5551 in k5574 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5551(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5551,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_11526 in loop1 */
static void C_ccall f_11526(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11526,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* loop1 */
static void C_fcall f_11523(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11523,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11526,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11532,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:698: g1119 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k10584 in for-each-loop2615 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10576(t3,((C_word*)t0)[4],t2);}

/* k10969 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10971,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1706: g2836 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[11],((C_word*)t0)[4],t2);}

/* f_7302 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7302,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k10976 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1711: g2841 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[22],((C_word*)t0)[4],t1);}

/* f_7309 in k7306 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7309,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7306 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7308(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7308,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7309,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7323,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7329,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[4];
t7=C_u_i_car(t6);
t8=C_a_i_list1(&a,1,t7);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7337,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7343,a[2]=t4,a[3]=t5,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t11=C_i_cadr(((C_word*)t0)[4]);
t12=C_a_i_list1(&a,1,t11);
/* optimizer.scm:1007: g1611 */
t13=t9;
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t10,lf[145],t12,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_5581 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5581,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_11515 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11515(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11515,5,t0,t1,t2,t3,t4);}
t5=C_a_i_list1(&a,1,t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11523,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_11523(t9,t1,t5,t4);}

/* k5585 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5034(t2,C_eqp(lf[11],t1));}

/* k6701 in for-each-loop1349 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6693(t3,((C_word*)t0)[4],t2);}

/* k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7475(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7475,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7482,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7497,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1034: qnode */
t6=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[146]+1))){
t4=C_eqp(*((C_word*)lf[147]+1),lf[151]);
t5=t3;
f_7502(t5,C_i_not(t4));}
else{
t4=t3;
f_7502(t4,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* for-each-loop608 in k5065 in k5062 in k5056 */
static void C_fcall f_5118(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5118,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5127,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:379: g609 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5114 */
static void C_ccall f_5116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:391: inline-lambda-bindings */
t3=*((C_word*)lf[71]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_TRUE,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* f_5110 */
static void C_ccall f_5110(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5110,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k5574 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5576,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5551,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5562,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5568,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:453: g772 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_5512(2,t3,C_SCHEME_FALSE);}}

/* k9799 in k9789 */
static void C_ccall f_9801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9803,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9809,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1553: g2486 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* f_9803 in k9799 in k9789 */
static void C_ccall f_9803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9803,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_5570 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5570(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5570,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11546,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],lf[6]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11564,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t5=C_u_i_car(((C_word*)t0)[3]);
/* optimizer.scm:703: get */
t6=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[7],t5,lf[106]);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k9807 in k9799 in k9789 */
static void C_ccall f_9809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_car(((C_word*)t0)[3],t1));}

/* f_10996 in k11054 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10996(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10996,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11002,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(t2);
/* optimizer.scm:1718: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_11540 in k11537 in k11530 in loop1 */
static void C_ccall f_11540(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11540,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k10992 in k10982 in k11054 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(t1);
/* optimizer.scm:1714: append */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5028,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5014,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:336: g531 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_4884(2,t3,C_SCHEME_FALSE);}}

/* f_5022 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5022(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5022,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k6492 in k6485 */
static void C_ccall f_6493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6493,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5020,2,t0,t1);}
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5006,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:337: test */
t5=((C_word*)((C_word*)t0)[7])[1];
f_3977(t5,t4,t2,lf[79]);}
else{
t3=((C_word*)t0)[2];
f_4884(2,t3,C_SCHEME_FALSE);}}

/* k5099 */
static void C_ccall f_5100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
/* optimizer.scm:395: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4163(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* f_6495 in k6485 */
static void C_ccall f_6495(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6495,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6507,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
/* optimizer.scm:870: lset<= */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,*((C_word*)lf[27]+1),t5,((C_word*)t0)[3]);}}

/* k9397 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9398,2,t0,t1);}
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9403(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(t4)){
t5=t3;
f_9403(t5,C_SCHEME_FALSE);}
else{
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[7])+1,t5);
t7=t3;
f_9403(t7,C_SCHEME_TRUE);}}}

/* k11537 in k11530 in loop1 */
static void C_ccall f_11539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11540,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11546,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:700: g1125 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k8394 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8395(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8395,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8402,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8417,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1206: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8424,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t1;
t6=C_u_i_car(t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[2],t6);
/* optimizer.scm:1208: g1950 */
t8=t3;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[3],lf[12],t4,t7);}
else{
t3=C_i_cadddr(((C_word*)t0)[5]);
t4=(C_truep(t3)?t3:C_eqp(*((C_word*)lf[147]+1),lf[148]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8447,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8462,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8464,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1214: fold-inner */
t9=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t1);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* k5523 in k5513 in k5510 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:457: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4163(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k11530 in loop1 */
static void C_ccall f_11532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11533,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11539,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:699: g1122 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* f_11533 in k11530 in loop1 */
static void C_ccall f_11533(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11533,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6480(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6480,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6481,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_i_check_list_2(t5,lf[2]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6531,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6673,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_6673(t11,t7,t5);}

/* k7496 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7497,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1034: g1648 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_6481 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6481(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6481,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6486,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6516,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
/* optimizer.scm:863: append-map */
t8=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,t5,t7);}

/* f_5014 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5014(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5014,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3699(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3699,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3702,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3708,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t2,a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:63: g62 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k6485 */
static void C_ccall f_6486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6495,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:869: filter-map */
t4=*((C_word*)lf[135]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[6])[1]);}

/* for-each-loop2471 in k9783 in k9781 in k9779 in k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in ... */
static void C_fcall f_9820(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9820,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9829,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1549: g2472 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11564,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:704: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[7],t3,lf[78]);}}

/* k8366 in k8349 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8367,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1188: g1921 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k9828 in for-each-loop2471 in k9783 in k9781 in k9779 in k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in ... */
static void C_ccall f_9829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9820(t3,((C_word*)t0)[4],t2);}

/* f_5048 in k5039 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5048,5,t0,t1,t2,t3,t4);}
t5=C_i_car(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5052,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=t1,a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[2],a[19]=t5,a[20]=t3,a[21]=((C_word*)t0)[18],a[22]=((C_word*)t0)[19],a[23]=((C_word*)t0)[20],a[24]=t2,a[25]=((C_word*)t0)[21],tmp=(C_word)a,a+=26,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5500,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5506,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:363: g583 */
t10=t8;
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,((C_word*)t0)[17],lf[99]);}

/* k10931 in k10925 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10938,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1737: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(0));}

/* k5039 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5041,2,t0,t1);}
t2=C_i_caddr(t1);
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5048,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t2,a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],tmp=(C_word)a,a+=22,tmp);
/* optimizer.scm:359: decompose-lambda-list */
t4=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[20],t2,t3);}

/* k10937 in k10931 in k10925 in k10910 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10938,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1735: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* map-loop1278 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_6745(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6745,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6756,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_6756(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_6756(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_5035 in k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5035,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k5032 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5034(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5034,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5035,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* optimizer.scm:357: g571 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[14]);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5512,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[14])){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5570,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5576,a[2]=t2,a[3]=((C_word*)t0)[14],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:452: g766 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[14]);}
else{
t3=t2;
f_5512(2,t3,C_SCHEME_FALSE);}}}

/* f_10965 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10965,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k9300 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9301,2,t0,t1);}
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_i_memq(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],C_fix(2));
t7=C_mutate(((C_word *)((C_word*)t0)[6])+1,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}}}}

/* f_10951 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10951,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k10955 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10957,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1703: g2831 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[13],((C_word*)t0)[4],t2);}

/* k9814 */
static void C_ccall f_9815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9815,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1552: node-parameters-set! */
t3=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k5056 */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t1,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],tmp=(C_word)a,a+=27,tmp);
if(C_truep(*((C_word*)lf[95]+1))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5448,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[18],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[23],a[7]=((C_word*)t0)[19],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:365: test */
t4=((C_word*)((C_word*)t0)[23])[1];
f_3977(t4,t3,((C_word*)t0)[17],lf[98]);}
else{
t3=t2;
f_5064(t3,C_SCHEME_FALSE);}}

/* f_5052 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5052,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[14]));}

/* k10982 in k11054 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10988,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1728: g2856 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_10988 in k10982 in k11054 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10988,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* f_8810 in k8799 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8810,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4606 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4608,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:253: test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3977(t3,t2,((C_word*)t0)[4],lf[57]);}
else{
t2=((C_word*)t0)[2];
f_4493(t2,C_SCHEME_FALSE);}}

/* f_8829 in k8799 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8829,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4246 in k4314 in k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4248,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4256,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:192: constant-form-eval */
t4=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[7],((C_word*)t0)[8],t2,t3);}
else{
t2=((C_word*)t0)[4];
/* optimizer.scm:170: simplify */
t3=((C_word*)((C_word*)t0)[9])[1];
f_4050(t3,((C_word*)t0)[10],t2);}}

/* k8824 in k8799 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8825,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1280: g2060 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8389,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(C_truep(*((C_word*)lf[146]+1))?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8395,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8486,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1201: remove */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_8383 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8383(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8383,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k4627 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4629,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:270: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[9],((C_word*)t0)[10],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:286: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3977(t3,t2,((C_word*)t0)[6],lf[64]);}}

/* k8799 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8801(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8801,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[146]+1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8810,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8825,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(*((C_word*)lf[147]+1),lf[148]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8829,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8841,a[2]=t8,a[3]=t6,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1286: fifth */
t10=*((C_word*)lf[155]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[2]);}
else{
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8842,tmp=(C_word)a,a+=2,tmp);
t9=C_i_cadr(((C_word*)t0)[2]);
t10=C_a_i_list2(&a,2,t9,((C_word*)t0)[6]);
/* optimizer.scm:1288: g2070 */
t11=t8;
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t6,lf[92],t10,((C_word*)t0)[5]);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4613 in k4606 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4493(t2,C_i_not(t1));}

/* f_9975 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 in ... */
static void C_ccall f_9975(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9975,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_4256 in k4246 in k4314 in k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4256,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(t2)){
t6=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4273,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:204: qnode */
t8=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
t7=t6;
f_4264(t7,C_SCHEME_UNDEFINED);}
else{
t7=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_FALSE);
t8=t6;
f_4264(t8,t7);}}}

/* f_4644 */
static void C_ccall f_4644(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4644,3,t0,t1,t2);}
/* optimizer.scm:273: test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3977(t3,t1,t2,lf[60]);}

/* f_4649 */
static void C_ccall f_4649(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4649,4,t0,t1,t2,t3);}
t4=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4654,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:275: debugging */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[18],lf[65],t2);}

/* f_9982 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in ... */
static void C_ccall f_9982(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9982,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in ... */
static void C_ccall f_9988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10147,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:1474: g2323 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[13]);}

/* k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 in ... */
static void C_ccall f_9981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9982,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9988,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:1473: g2320 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[13]);}

/* f_4634 in k4627 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4634(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4634,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:272: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* f_4639 */
static void C_ccall f_4639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:273: partition */
t3=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* k7407 in k7386 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7409,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1016: g1626 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9958,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9964,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:1468: g2310 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* f_9958 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9958(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9958,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_9951 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9951(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9951,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9951,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm:1467: g2302 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* f_7403 in k7386 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7403(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7403,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k3993 in constant-node? in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(lf[34],t1));}

/* constant-node? in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3983,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3989,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3995,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:143: g177 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9964(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9964,2,t0,t1);}
t2=C_eqp(t1,lf[12]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9975,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9981,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t3,a[13]=t4,tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:1472: g2316 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
t3=C_eqp(t1,lf[6]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[12]);
t5=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_memq(t4,((C_word*)t0)[13]))){
t6=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t4,t5),((C_word*)((C_word*)t0)[10])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[10])+1,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10175,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:1510: copy-node! */
t10=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,((C_word*)t0)[4]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10186,a[2]=t7,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_10186(t9,((C_word*)t0)[7],((C_word*)t0)[2]);}}
else{
t4=C_i_check_list_2(((C_word*)t0)[2],lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10211,a[2]=t6,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10211(t8,((C_word*)t0)[7],((C_word*)t0)[2]);}}}

/* f_3989 in constant-node? in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3989,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_4655 in k4653 */
static void C_ccall f_4655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4655,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4653 */
static void C_ccall f_4654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4654,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4655,tmp=(C_word)a,a+=2,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4685,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[10])){
/* optimizer.scm:279: test */
t7=((C_word*)((C_word*)t0)[11])[1];
f_3977(t7,t6,((C_word*)t0)[5],lf[64]);}
else{
t7=t6;
f_4691(2,t7,C_SCHEME_FALSE);}}

/* ##compiler#perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[86],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3973,4,t0,t1,t2,t3);}
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
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
t34=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3977,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3983,tmp=(C_word)a,a+=2,tmp));
t36=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4011,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t37=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4016,tmp=(C_word)a,a+=2,tmp));
t38=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4050,a[2]=t13,a[3]=t21,a[4]=t25,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t39=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4163,a[2]=t15,a[3]=t25,a[4]=t7,a[5]=t21,a[6]=t27,a[7]=t19,a[8]=t31,tmp=(C_word)a,a+=9,tmp));
t40=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4335,a[2]=t3,a[3]=t29,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4353,a[2]=t21,a[3]=t17,a[4]=t9,a[5]=t29,a[6]=t5,a[7]=t27,a[8]=t33,a[9]=t3,a[10]=t23,a[11]=t11,tmp=(C_word)a,a+=12,tmp));
t42=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5912,a[2]=t23,a[3]=t27,tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5970,a[2]=t1,a[3]=t2,a[4]=t15,a[5]=t7,a[6]=t5,a[7]=t9,a[8]=t13,a[9]=t27,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:519: perform-pre-optimization! */
t44=*((C_word*)lf[120]+1);
f_6076(4,t44,t43,t2,t3);}

/* k3968 in k3623 in k3621 */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
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
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3970,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1 /* (set! ##compiler#simplifications ...) */,t1);
t3=C_set_block_item(lf[31] /* ##compiler#simplified-ops */,0,C_SCHEME_END_OF_LIST);
t4=C_mutate((C_word*)lf[32]+1 /* (set! ##compiler#perform-high-level-optimizations ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3973,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[120]+1 /* (set! ##compiler#perform-pre-optimization! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6076,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[129]+1 /* (set! register-simplifications ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6357,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list(&a,1,lf[194]);
t9=C_a_i_list(&a,2,lf[3],t8);
t10=C_a_i_cons(&a,2,lf[228],lf[229]);
t11=C_a_i_cons(&a,2,t9,t10);
t12=C_a_i_cons(&a,2,lf[224],t11);
t13=C_a_i_cons(&a,2,lf[12],t12);
t14=C_a_i_list(&a,4,lf[194],lf[228],lf[229],lf[224]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12074,tmp=(C_word)a,a+=2,tmp);
t16=C_a_i_list(&a,3,t13,t14,t15);
t17=C_a_i_list(&a,1,t16);
/* optimizer.scm:605: ##sys#hash-table-set! */
t18=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t18+1)))(5,t18,t7,*((C_word*)lf[30]+1),lf[12],t17);}

/* k6833 in loop */
static void C_fcall f_6835(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:924: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}
else{
/* optimizer.scm:925: qnode */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* test in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3977,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm:142: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* k4684 in k4653 */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4685,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4670,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[7]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[9]);
/* optimizer.scm:285: walk */
t7=((C_word*)((C_word*)t0)[10])[1];
f_4163(t7,t4,t5,t6,C_SCHEME_END_OF_LIST);}

/* f_9944 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9944,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9941(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9941,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9944,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9950,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1466: g2299 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4669 in k4684 in k4653 */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4670,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:276: g431 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[11],((C_word*)t0)[4],t2);}

/* f_7469 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7469(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7469,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* ##compiler#rewrite in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6791(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6791r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6791r(t0,t1,t2,t3);}}

static void C_ccall f_6791r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6795,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:917: ##sys#hash-table-ref */
t5=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[141]+1),t2);}

/* k6794 in rewrite in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6795,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[4]);
/* optimizer.scm:918: append */
t5=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}

/* f_8549 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8549(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8549,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_10617 in k10615 in k10613 */
static void C_ccall f_10617(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10617,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10709,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10715,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1659: g2679 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10615 in k10613 */
static void C_ccall f_10616(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10616,2,t0,t1);}
t2=C_fix(1);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10617,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[2],lf[35]);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10720,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11194,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_11194(t14,t10,((C_word*)t0)[2]);}

/* k10613 */
static void C_ccall f_10614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10616,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1653: gensym */
t3=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[80]);}

/* k8553 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8555(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8555,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8556,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8570,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8576,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(((C_word*)t0)[4]);
t7=C_a_i_list1(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8582,a[2]=t4,a[3]=t5,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8584,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8592,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1232: ##sys#call-with-values */
C_call_with_values(4,0,t8,t9,t10);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_8556 in k8553 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8556,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6466 */
static void C_ccall f_6468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm:851: find-path */
t2=((C_word*)t0)[2];
f_6380(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11587,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:708: g1146 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* f_11587 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11587(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11587,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_11580 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11580(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11580,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* f_10608 in k10606 in k10604 in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10608(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10608,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10614,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1652: gensym */
t7=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[197]);}

/* k10606 in k10604 in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10607(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11227,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11235,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_11235(t9,t5,t3);}

/* k10604 in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1645: walk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_10351(t3,t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k5062 in k5056 */
static void C_fcall f_5064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5064,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(C_truep(((C_word*)t0)[18])?lf[84]:lf[85]);
t4=C_i_cadddr(((C_word*)t0)[19]);
/* optimizer.scm:373: debugging */
t5=*((C_word*)lf[17]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t2,lf[80],t3,((C_word*)t0)[10],((C_word*)t0)[20],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5148,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[16],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[22],a[15]=((C_word*)t0)[23],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[10],a[18]=((C_word*)t0)[24],a[19]=((C_word*)t0)[25],a[20]=((C_word*)t0)[26],a[21]=((C_word*)t0)[13],a[22]=((C_word*)t0)[20],tmp=(C_word)a,a+=23,tmp);
/* optimizer.scm:396: test */
t3=((C_word*)((C_word*)t0)[24])[1];
f_3977(t3,t2,((C_word*)t0)[20],lf[68]);}}

/* k5065 in k5062 in k5056 */
static void C_ccall f_5066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
t4=C_i_check_list_2(t3,lf[2]);
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5118,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5118(t9,t5,t3);}

/* f_5067 in k5065 in k5062 in k5056 */
static void C_ccall f_5067(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5067,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
/* optimizer.scm:379: g624 */
t4=*((C_word*)lf[47]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[2],t2,lf[70],C_SCHEME_TRUE);}

/* k6450 in k6436 */
static void C_ccall f_6451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6451,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t1,t2),((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6445,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* optimizer.scm:854: append */
t7=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,t6,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1]);}

/* f_7482 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7482,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_6456 */
static void C_ccall f_6456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6456,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6468,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:851: find-path */
t5=((C_word*)t0)[3];
f_6380(t5,t4,((C_word*)t0)[2],t2);}}

/* k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11580,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:707: g1138 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* f_11573 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11573(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11573,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11570,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11573,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11579,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:706: g1134 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k7449 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1024: g1641 */
t3=t2;
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6443 in k6450 in k6436 */
static void C_ccall f_6445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7420 in k7386 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7421,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1019: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k5079 in k5077 in k5074 in k5065 in k5062 in k5056 */
static void C_ccall f_5080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:382: call/cc */
t3=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[16],t2);}

/* f_5085 in k5079 in k5077 in k5074 in k5065 in k5062 in k5056 */
static void C_ccall f_5085(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5085,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5088,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5100,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5110,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5116,a[2]=t4,a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:392: g636 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[15]);}

/* cfk */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5088,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5092,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:385: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[80],lf[81],((C_word*)t0)[10],t2);}

/* k6436 */
static void C_ccall f_6437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6451,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:853: gensym */
t3=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_7382 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7382(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7382,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_7389 in k7386 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7389,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7386 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7388(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7388,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7389,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7403,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cadr(((C_word*)t0)[4]);
t7=C_a_i_list1(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7415,a[2]=t4,a[3]=t5,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7421,a[2]=t8,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_i_caddr(((C_word*)t0)[4]);
/* optimizer.scm:1020: qnode */
t11=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11593,2,t0,t1);}
t2=C_eqp(t1,lf[16]);
if(C_truep(t2)){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:709: loop1 */
t6=((C_word*)((C_word*)t0)[5])[1];
f_11523(t6,((C_word*)t0)[6],t4,t5);}
else{
t3=C_eqp(t1,lf[13]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11618,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:711: reverse */
t5=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6789,2,t0,t1);}
t2=C_mutate((C_word*)lf[141]+1 /* (set! ##compiler#substitution-table ...) */,t1);
t3=C_mutate((C_word*)lf[142]+1 /* (set! ##compiler#rewrite ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6791,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[143]+1 /* (set! ##compiler#simplify-named-call ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6809,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[159]+1 /* (set! ##compiler#transform-direct-lambdas! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9028,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[187]+1 /* (set! ##compiler#determine-loop-and-dispatch ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10292,tmp=(C_word)a,a+=2,tmp));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}

/* k5074 in k5065 in k5062 in k5056 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:380: check-signature */
t3=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[17],((C_word*)t0)[13],((C_word*)t0)[12]);}

/* k6424 */
static void C_ccall f_6425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6425,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5077 in k5074 in k5065 in k5062 in k5056 */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:381: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[83],((C_word*)t0)[9]);}

/* k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6428(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6428,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6429,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=((C_word*)t0)[3];
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6480,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6693,a[2]=t10,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6693(t12,t8,t7);}

/* f_6429 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6429(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6429,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6437,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6456,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:850: filter */
t5=*((C_word*)lf[133]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[5]);}}

/* walk-generic in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5912,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5918,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=t10,a[9]=((C_word*)t0)[3],a[10]=t6,tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_5918(t12,t1,C_SCHEME_TRUE,t5,C_SCHEME_END_OF_LIST);}

/* lp in walk-generic in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5918(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5918,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5927,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* optimizer.scm:511: invalidate-gae! */
f_4016(t5,((C_word*)t0)[7]);}
else{
t6=t5;
f_5927(2,t6,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5945,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t3);
/* optimizer.scm:515: walk */
t7=((C_word*)((C_word*)t0)[9])[1];
f_4163(t7,t5,t6,((C_word*)t0)[10],((C_word*)t0)[7]);}}

/* f_7445 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7445,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_6417 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6417,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6425,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:841: scan-used-variables */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[3]);}

/* k6721 in for-each-loop1309 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6713(t4,((C_word*)t0)[5],t2,t3);}

/* k7414 in k7386 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1018: g1631 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[145],((C_word*)t0)[4],t1);}

/* k5091 in cfk */
static void C_ccall f_5092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5092,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:390: walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5912(t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_TRUE);}

/* f_6407 in find in find-path in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6407(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6407,3,t0,t1,t2);}
/* optimizer.scm:837: find */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6386(t3,t1,t2,((C_word*)t0)[3]);}

/* k5097 in k5091 in cfk */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:389: return */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* for-each-loop1309 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_6713(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6713,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6722,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* optimizer.scm:827: g1310 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k10659 in k10667 */
static void C_ccall f_10661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1670: copy-node! */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k10667 */
static void C_ccall f_10669(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10669,2,t0,t1);}
t2=C_i_car(t1);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10650,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10655,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10661,a[2]=t6,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1671: g2726 */
t9=t7;
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* f_10663 */
static void C_ccall f_10663(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10663,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k10695 in map-loop2694 in k10627 in k10705 in k10713 */
static void C_ccall f_10696(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10696,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10671(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_10671(t6,((C_word*)t0)[5],t5);}}

/* f_4274 in k4272 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4274,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k11947 */
static void C_ccall f_11949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11949,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:647: immediate? */
t3=*((C_word*)lf[220]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4272 */
static void C_ccall f_4273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4274,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,t4,t1);
/* optimizer.scm:205: g297 */
t6=t2;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[3],lf[12],t3,t5);}

/* f_11937 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13){
C_word tmp;
C_word t14;
C_word t15;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr14,(void*)f_11937,14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}
if(C_truep(C_i_equalp(t6,*((C_word*)lf[218]+1)))){
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11949,a[2]=t9,a[3]=t10,a[4]=t13,a[5]=t1,a[6]=t8,a[7]=t7,a[8]=t3,a[9]=t2,a[10]=t5,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:646: immediate? */
t15=*((C_word*)lf[220]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t7);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}

/* k4294 in k4314 in k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4296,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:190: foldable? */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
f_4248(2,t2,C_SCHEME_FALSE);}}

/* f_11968 in k11992 in k11999 in k11953 in k11947 */
static void C_ccall f_11968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11968,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_8584 in k8553 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8584,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
/* optimizer.scm:1232: split-at */
t3=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[3],t2);}

/* k5004 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_4903(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm:338: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3977(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[49]);}}

/* k6755 in map-loop1278 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_6756(C_word t0,C_word t1){
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
f_6745(t5,((C_word*)t0)[7],t3,t4);}

/* f_4290 in k4314 in k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4290,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k5001 in k4902 in k5018 in k5026 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5003,2,t0,t1);}
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4989,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:340: g540 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[8]);}
else{
t3=((C_word*)t0)[2];
f_4884(2,t3,C_SCHEME_FALSE);}}

/* k8581 in k8553 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1230: g1986 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[145],((C_word*)t0)[4],t1);}

/* f_10536 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10536,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10542,a[2]=t10,a[3]=((C_word*)t0)[2],a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10549,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10557,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t12,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1632: ##sys#dynamic-wind */
t16=*((C_word*)lf[188]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t1,t13,t14,t15);}

/* k11953 in k11947 */
static void C_ccall f_11955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11955,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:648: get-list */
t3=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[9],((C_word*)t0)[11],lf[78]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6326 in k6106 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6327,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_i_check_list_2(t2,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6337,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6337(t7,((C_word*)t0)[3],t2);}

/* k6320 in k6117 */
static void C_ccall f_6322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6322,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6308,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:566: test */
t5=((C_word*)((C_word*)t0)[8])[1];
f_6085(t5,t4,t2,lf[79]);}

/* f_8592 in k8553 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8592,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8602,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm:1234: qnode */
t6=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k10518 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10392(t2,C_eqp(lf[16],t1));}

/* k11982 in k11979 in k11992 in k11999 in k11953 in k11947 */
static void C_ccall f_11983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11986,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:656: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k11985 in k11982 in k11979 in k11992 in k11999 in k11953 in k11947 */
static void C_ccall f_11986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11986,2,t0,t1);}
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);
/* optimizer.scm:650: g1082 */
t3=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[8],lf[22],lf[219],t2);}

/* k11979 in k11992 in k11999 in k11953 in k11947 */
static void C_ccall f_11980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11983,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:654: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* f_6316 in k6117 */
static void C_ccall f_6316(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6316,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_10557 */
static void C_ccall f_10557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10557,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[7])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k4263 */
static void C_fcall f_4264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4264,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:199: lset-adjoin */
t3=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[27]+1),*((C_word*)lf[39]+1),((C_word*)t0)[2]);}

/* k4266 in k4263 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate((C_word*)lf[39]+1 /* (set! ##compiler#broken-constant-nodes ...) */,t1);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6345 in for-each-loop957 in k6326 in k6106 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6337(t3,((C_word*)t0)[4],t2);}

/* f_10542 */
static void C_ccall f_10542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10542,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[7])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* f_10549 */
static void C_ccall f_10549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10549,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1636: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10351(t3,t1,t2,((C_word*)t0)[4]);}

/* f_10105 */
static void C_ccall f_10105(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10105,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* for-each-loop957 in k6326 in k6106 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_fcall f_6337(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6337,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6346,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:561: g958 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7980 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7982(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7982,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_eqp(*((C_word*)lf[147]+1),t3);
if(C_truep(t4)){
t5=C_i_cadddr(((C_word*)t0)[2]);
t6=(C_truep(t5)?t5:*((C_word*)lf[146]+1));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7997,tmp=(C_word)a,a+=2,tmp);
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8011,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8017,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[146]+1))){
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
t13=C_u_i_cdr(t12);
t14=C_u_i_cdr(t13);
t15=C_u_i_car(t14);
t16=C_a_i_list1(&a,1,t15);
/* optimizer.scm:1119: g1836 */
t17=t9;
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t10,lf[145],t16,((C_word*)t0)[5]);}
else{
t11=((C_word*)t0)[2];
t12=C_u_i_cdr(t11);
t13=C_u_i_cdr(t12);
t14=C_u_i_car(t13);
t15=C_a_i_list1(&a,1,t14);
/* optimizer.scm:1119: g1836 */
t16=t9;
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t10,lf[145],t15,((C_word*)t0)[5]);}}
else{
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10174 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 in ... */
static void C_ccall f_10175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1511: rec */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9941(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4200 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4202(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4202,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=f_4011(((C_word*)((C_word*)t0)[3])[1]);
t5=C_u_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4003,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:144: g181 */
t8=t6;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t5);}
else{
t2=((C_word*)t0)[9];
/* optimizer.scm:170: simplify */
t3=((C_word*)((C_word*)t0)[10])[1];
f_4050(t3,((C_word*)t0)[11],t2);}}

/* k11992 in k11999 in k11953 in k11947 */
static void C_ccall f_11993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11993,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11968,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:653: varnode */
t6=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[8]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* f_7997 in k7980 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7997,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* register-simplifications in k3968 in k3623 in k3621 */
static void C_ccall f_6357(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_6357r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6357r(t0,t1,t2,t3);}}

static void C_ccall f_6357r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* optimizer.scm:605: ##sys#hash-table-set! */
t4=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[30]+1),t2,t3);}

/* k10194 in for-each-loop2369 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in ... */
static void C_ccall f_10195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10186(t3,((C_word*)t0)[4],t2);}

/* f_7976 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7976(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7976,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_6954 in k6950 in k6966 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6954(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6954,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k6950 in k6966 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6954,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6960,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:938: g1497 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k8504 in k8512 */
static void C_ccall f_8506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(((C_word*)t0)[3],t2));}

/* f_8508 */
static void C_ccall f_8508(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8508,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_8500 in k8512 */
static void C_ccall f_8500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8500,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_6946 in k6966 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6946(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6946,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k7944 in k7934 in k7914 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1106: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6943 in k6958 in k6950 in k6966 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6944,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:939: g1500 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_7940 in k7934 in k7914 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7940,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k10131 in k10129 in k10151 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in ... */
static void C_ccall f_10132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm:1503: node-subexpressions-set! */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k10129 in k10151 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in ... */
static void C_ccall f_10130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1502: node-parameters-set! */
t3=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k8512 */
static void C_ccall f_8514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8514,2,t0,t1);}
t2=C_eqp(lf[34],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8500,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1204: g1939 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop in k12079 */
static void C_fcall f_12085(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12085,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12094,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_caar(t2);
t5=t2;
t6=C_u_i_car(t5);
t7=C_u_i_cdr(t6);
/* optimizer.scm:616: simplify-named-call */
t8=*((C_word*)lf[143]+1);
f_6809(9,t8,t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[6],t4,t7,((C_word*)t0)[7]);}}

/* k12079 */
static void C_ccall f_12080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12080,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12085,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_12085(t6,((C_word*)t0)[7],t2);}

/* k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6976,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6962,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:937: g1490 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_6870(2,t3,C_SCHEME_FALSE);}}

/* f_6970 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6970(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6970,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_12074 in k3968 in k3623 in k3621 */
static void C_ccall f_12074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_12074,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12080,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:614: ##sys#hash-table-ref */
t8=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,*((C_word*)lf[141]+1),t3);}

/* f_7926 in k7914 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7926(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7926,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6966 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6968,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6946,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:938: g1494 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
f_6870(2,t3,C_SCHEME_FALSE);}}

/* k6958 in k6950 in k6966 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6960,2,t0,t1);}
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6929,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6944,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:939: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[4];
f_6870(2,t2,C_SCHEME_FALSE);}}

/* f_6962 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6962(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6962,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k10151 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in ... */
static void C_ccall f_10153(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10153,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_eqp(((C_word*)t0)[3],t3);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[4]),((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
t7=C_i_car(((C_word*)t0)[6]);
t8=C_eqp(((C_word*)t0)[7],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10012,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t10=C_u_i_cdr(((C_word*)t0)[8]);
t11=C_i_length(t10);
t12=C_eqp(((C_word*)t0)[11],t11);
if(C_truep(t12)){
t13=t9;
f_10012(2,t13,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1479: quit */
t13=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t9,lf[173],((C_word*)t0)[3]);}}
else{
t9=C_u_i_car(((C_word*)t0)[6]);
t10=C_i_assq(t9,((C_word*)((C_word*)t0)[12])[1]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10043,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1477: g2337 */
t12=t11;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,((C_word*)t0)[9],t10);}
else{
/* optimizer.scm:1499: bomb */
t11=*((C_word*)lf[157]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,((C_word*)t0)[9],lf[176],((C_word*)t0)[6]);}}}
else{
t5=C_u_i_car(((C_word*)t0)[2]);
t6=C_eqp(((C_word*)t0)[7],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10130,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1501: node-class-set! */
t8=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[4],lf[177]);}
else{
/* optimizer.scm:1504: bomb */
t7=*((C_word*)lf[157]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[9],lf[178]);}}}
else{
t3=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k8574 in k8553 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8576,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1227: g1981 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_8570 in k8553 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8570,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7937 in k7934 in k7914 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1105: g1810 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* k7934 in k7914 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_7935(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7935,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7940,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7946,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list2(&a,2,((C_word*)t0)[6],C_SCHEME_TRUE);
/* optimizer.scm:1106: g1815 */
t6=t3;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[153],t5,C_SCHEME_END_OF_LIST);}

/* for-each-loop2369 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 in ... */
static void C_fcall f_10186(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10186,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10195,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1512: g2370 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9941(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7914 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7916(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7916,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[146]+1));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7926,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7935,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t8=((C_word*)t0)[6];
t9=C_u_i_cdr(t8);
t10=t7;
f_7935(t10,C_a_i_cons(&a,2,C_SCHEME_TRUE,t9));}
else{
t8=t7;
f_7935(t8,((C_word*)t0)[6]);}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7910 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7910(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7910,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* remember in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3652(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3652,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:53: alist-update! */
t5=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* f_6929 in k6958 in k6950 in k6966 in k6974 in k6866 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6929,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k3656 in remember in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_10147 in k9986 in k9979 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in ... */
static void C_ccall f_10147(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10147,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_8447 in k8394 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8447,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9765,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9772,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9778,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1536: g2438 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k6505 */
static void C_ccall f_6507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_car(t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* mark in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3630(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3630,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3637,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_3637(t5,C_SCHEME_FALSE);}
else{
t5=C_i_memq(t2,((C_word*)((C_word*)t0)[4])[1]);
t6=t3;
f_3637(t6,C_i_not(t5));}}

/* k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9907,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9907(t6,t2,t1);}

/* k3623 in k3621 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3624,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#scan-toplevel-assignments ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3626,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:131: make-vector */
t4=*((C_word*)lf[199]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k9734 in k9718 in k9715 */
static void C_ccall f_9736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9736,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1525: node-subexpressions-set! */
t3=*((C_word*)lf[122]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k3621 */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k8416 in k8394 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8417,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1206: g1945 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_9730 in k9718 in k9715 */
static void C_ccall f_9730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9730,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k11999 in k11953 in k11947 */
static void C_ccall f_12000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12000,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:649: get-list */
t5=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[9],((C_word*)t0)[10],lf[78]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k3635 in mark in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3637,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_8424 in k8394 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8424,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* ##compiler#scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3626(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3626,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
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
t21=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3630,a[2]=t4,a[3]=t8,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3652,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3660,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3699,a[2]=t10,a[3]=t6,a[4]=t16,a[5]=t20,a[6]=t18,a[7]=t14,a[8]=t12,tmp=(C_word)a,a+=9,tmp));
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3909,a[2]=t4,a[3]=t1,a[4]=t20,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:108: debugging */
t27=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t26,lf[28],lf[29]);}

/* f_9795 in k9789 */
static void C_ccall f_9795(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9795,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9789 */
static void C_ccall f_9790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9795,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1553: g2483 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* f_9772 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9772,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6532 in k6529 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6533,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6535,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6551,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:881: fold */
t6=*((C_word*)lf[139]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[6],t1);}

/* k6534 in k6532 in k6529 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6535,2,t0,t1);}
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6543,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:907: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[137],((C_word*)((C_word*)t0)[2])[1]);}
else{
/* optimizer.scm:909: values */
C_values(4,0,((C_word*)t0)[3],t1,C_SCHEME_FALSE);}}

/* k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1537: copy-node! */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],t1);}

/* k6529 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:876: topological-sort */
t3=*((C_word*)lf[140]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[7])[1],*((C_word*)lf[27]+1));}

/* k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6363(C_word c,C_word t0,C_word t1){
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
C_word ab[446],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[210]);
t4=C_a_i_list(&a,1,lf[206]);
t5=C_a_i_list(&a,1,lf[211]);
t6=C_a_i_list(&a,2,lf[3],t5);
t7=C_a_i_list(&a,1,lf[212]);
t8=C_a_i_list(&a,2,lf[34],t7);
t9=C_a_i_list(&a,4,lf[145],t4,t6,t8);
t10=C_a_i_list(&a,1,lf[210]);
t11=C_a_i_list(&a,2,lf[3],t10);
t12=C_a_i_list(&a,1,lf[213]);
t13=C_a_i_list(&a,1,lf[206]);
t14=C_a_i_list(&a,1,lf[211]);
t15=C_a_i_list(&a,2,lf[3],t14);
t16=C_a_i_list(&a,1,lf[214]);
t17=C_a_i_list(&a,2,lf[34],t16);
t18=C_a_i_list(&a,4,lf[145],t13,t15,t17);
t19=C_a_i_list(&a,1,lf[213]);
t20=C_a_i_list(&a,2,lf[3],t19);
t21=C_a_i_list(&a,5,lf[5],lf[201],t20,lf[215],lf[216]);
t22=C_a_i_list(&a,4,lf[6],t12,t18,t21);
t23=C_a_i_list(&a,5,lf[5],lf[205],t11,lf[217],t22);
t24=C_a_i_list(&a,4,lf[6],t3,t9,t23);
t25=C_a_i_list(&a,11,lf[211],lf[210],lf[213],lf[206],lf[212],lf[214],lf[217],lf[215],lf[205],lf[201],lf[216]);
t26=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11937,tmp=(C_word)a,a+=2,tmp);
t27=C_a_i_list(&a,3,t24,t25,t26);
t28=C_a_i_list(&a,1,lf[200]);
t29=C_a_i_list(&a,1,lf[206]);
t30=C_a_i_list(&a,1,lf[211]);
t31=C_a_i_list(&a,2,lf[3],t30);
t32=C_a_i_list(&a,1,lf[221]);
t33=C_a_i_list(&a,2,lf[34],t32);
t34=C_a_i_list(&a,4,lf[145],t29,t31,t33);
t35=C_a_i_list(&a,1,lf[200]);
t36=C_a_i_list(&a,2,lf[3],t35);
t37=C_a_i_list(&a,1,lf[222]);
t38=C_a_i_list(&a,1,lf[211]);
t39=C_a_i_list(&a,2,lf[3],t38);
t40=C_a_i_cons(&a,2,t39,lf[223]);
t41=C_a_i_cons(&a,2,t37,t40);
t42=C_a_i_cons(&a,2,lf[22],t41);
t43=C_a_i_list(&a,5,lf[5],lf[224],t36,lf[225],t42);
t44=C_a_i_list(&a,4,lf[6],t28,t34,t43);
t45=C_a_i_list(&a,8,lf[200],lf[206],lf[211],lf[221],lf[224],lf[225],lf[222],lf[223]);
t46=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11834,tmp=(C_word)a,a+=2,tmp);
t47=C_a_i_list(&a,3,t44,t45,t46);
t48=C_a_i_list(&a,1,lf[210]);
t49=C_a_i_list(&a,2,lf[16],C_SCHEME_END_OF_LIST);
t50=C_a_i_list(&a,4,lf[6],t48,t49,lf[226]);
t51=C_a_i_list(&a,2,lf[210],lf[226]);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11515,tmp=(C_word)a,a+=2,tmp);
t53=C_a_i_list(&a,3,t50,t51,t52);
t54=C_a_i_list(&a,1,lf[200]);
t55=C_a_i_list(&a,1,lf[206]);
t56=C_a_i_cons(&a,2,t55,lf[227]);
t57=C_a_i_cons(&a,2,lf[145],t56);
t58=C_a_i_list(&a,1,lf[200]);
t59=C_a_i_list(&a,2,lf[3],t58);
t60=C_a_i_list(&a,5,lf[5],lf[224],t59,lf[192],lf[202]);
t61=C_a_i_list(&a,4,lf[6],t54,t57,t60);
t62=C_a_i_list(&a,6,lf[200],lf[206],lf[227],lf[224],lf[192],lf[202]);
t63=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11443,tmp=(C_word)a,a+=2,tmp);
t64=C_a_i_list(&a,3,t61,t62,t63);
t65=C_a_i_list(&a,4,t27,t47,t53,t64);
/* optimizer.scm:605: ##sys#hash-table-set! */
t66=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t66+1)))(5,t66,t2,*((C_word*)lf[30]+1),lf[6],t65);}

/* k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6365(C_word c,C_word t0,C_word t1){
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
C_word ab[166],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[200]);
t4=C_a_i_list(&a,2,lf[3],t3);
t5=C_a_i_list(&a,4,lf[12],lf[201],t4,lf[202]);
t6=C_a_i_list(&a,1,lf[200]);
t7=C_a_i_list(&a,2,lf[3],t6);
t8=C_a_i_list(&a,4,lf[12],lf[203],t7,lf[204]);
t9=C_a_i_list(&a,5,lf[5],lf[205],lf[192],t5,t8);
t10=C_a_i_list(&a,7,lf[205],lf[201],lf[203],lf[192],lf[202],lf[204],lf[200]);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11378,tmp=(C_word)a,a+=2,tmp);
t12=C_a_i_list(&a,3,t9,t10,t11);
t13=C_a_i_list(&a,1,lf[206]);
t14=C_a_i_list(&a,1,lf[207]);
t15=C_a_i_list(&a,2,lf[34],t14);
t16=C_a_i_list(&a,4,lf[145],t13,lf[192],t15);
t17=C_a_i_list(&a,5,lf[5],lf[205],t16,lf[202],lf[204]);
t18=C_a_i_list(&a,6,lf[205],lf[206],lf[192],lf[207],lf[202],lf[204]);
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11267,tmp=(C_word)a,a+=2,tmp);
t20=C_a_i_list(&a,3,t17,t18,t19);
t21=C_a_i_list(&a,2,t12,t20);
/* optimizer.scm:605: ##sys#hash-table-set! */
t22=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t22+1)))(5,t22,t2,*((C_word*)lf[30]+1),lf[5],t21);}

/* k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6367,2,t0,t1);}
t2=C_mutate((C_word*)lf[131]+1 /* (set! ##compiler#reorganize-recursive-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6369,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:914: make-vector */
t4=*((C_word*)lf[199]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* ##compiler#reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6369,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=t2;
t12=t3;
t13=C_i_check_list_2(t11,lf[35]);
t14=C_i_check_list_2(t12,lf[35]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6378,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6745,a[2]=t10,a[3]=t17,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_6745(t19,t15,t11,t12);}

/* k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5619,a[2]=t2,a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:312: test */
t4=((C_word*)((C_word*)t0)[14])[1];
f_3977(t4,t3,((C_word*)t0)[9],lf[79]);}

/* k11078 in k11086 in k11094 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10862(t2,C_eqp(lf[16],t1));}

/* f_11082 in k11094 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11082(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11082,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k6560 */
static void C_fcall f_6562(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6562,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6567,tmp=(C_word)a,a+=2,tmp);
t5=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[4]);
t6=C_i_cdr(t5);
t7=C_a_i_list2(&a,2,t6,((C_word*)t0)[5]);
/* optimizer.scm:888: g1407 */
t8=t4;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[6],lf[6],((C_word*)t0)[7],t7);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6587,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6612,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6614,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:895: fold-right */
t5=*((C_word*)lf[138]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[5],((C_word*)t0)[7]);}}

/* k9781 in k9779 in k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 in ... */
static void C_ccall f_9782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1548: copy-node! */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}

/* f_9785 in k9783 in k9781 in k9779 in k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in ... */
static void C_ccall f_9785(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9785,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9790,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9815,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1552: gensym */
t6=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k9783 in k9781 in k9779 in k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in ... */
static void C_ccall f_9784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9785,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9820,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_9820(t7,((C_word*)t0)[3],t3);}

/* f_6567 in k6560 */
static void C_ccall f_6567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6567,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k9779 in k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9840,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1539: fold-right */
t4=*((C_word*)lf[138]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k11094 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11096,2,t0,t1);}
t2=C_eqp(lf[6],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11082,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11088,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1690: g2810 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_10862(t3,C_SCHEME_FALSE);}}

/* f_11098 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11098(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11098,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* f_6551 in k6532 in k6529 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6551,4,t0,t1,t2,t3);}
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_cdr(t4);
t6=C_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6562,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_u_i_cdr(t5);
if(C_truep(C_i_nullp(t8))){
t9=C_i_assq(t6,((C_word*)((C_word*)t0)[5])[1]);
t10=C_i_cdr(t9);
t11=C_i_memq(t6,t10);
t12=t7;
f_6562(t12,C_i_not(t11));}
else{
t9=t7;
f_6562(t9,C_SCHEME_FALSE);}}

/* find-path in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_6380(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6380,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6386,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6386(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* find in find-path in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_6386(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6386,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_memq(t2,t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_cdr(t4);
t6=C_i_memq(((C_word*)t0)[3],t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_a_i_cons(&a,2,t2,t3);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6407,a[2]=((C_word*)t0)[4],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:837: any */
t9=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t8,t5);}}}

/* k11086 in k11094 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11088,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11074,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1691: g2813 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11061,2,t0,t1);}
t2=C_a_i_list4(&a,4,t1,C_SCHEME_TRUE,((C_word*)t0)[2],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10965,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t6=C_a_i_list1(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10977,a[2]=t3,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11055,a[2]=t7,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1715: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[8]);}

/* f_6587 in k6560 */
static void C_ccall f_6587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6587,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6589,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,t2);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6603,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6609,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:894: g1420 */
t8=t6;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* f_6589 */
static void C_ccall f_6589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6589,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6378(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6428,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6713,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6713(t10,t6,t4,t5);}

/* f_11074 in k11086 in k11094 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11074(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11074,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k5800 in for-each-loop863 in k5811 in k5781 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5792(t3,((C_word*)t0)[4],t2);}

/* k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11064,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10906,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10951,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10957,a[2]=t3,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11061,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=t7,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1708: gensym */
t9=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[191]);}

/* f_6521 */
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6521,3,t0,t1,t2);}
/* optimizer.scm:864: find-path */
t3=((C_word*)t0)[2];
f_6380(t3,t1,((C_word*)t0)[3],t2);}

/* k11054 in k11060 in k11063 in k10888 in k10860 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11055,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10983,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10996,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1716: append-map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[5]);}

/* f_6516 */
static void C_ccall f_6516(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6516,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6521,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:864: filter */
t4=*((C_word*)lf[133]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[3]);}

/* k5404 */
static void C_ccall f_5405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5405,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:438: append */
t3=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* f_11021 in loop in k11001 */
static void C_ccall f_11021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11021,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6542 in k6534 in k6532 in k6529 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:908: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}

/* k11035 in loop in k11001 */
static void C_ccall f_11036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11039,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
t5=((C_word*)t0)[6];
t6=C_u_i_cdr(t5);
/* optimizer.scm:1726: loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_11010(t7,t2,t4,t6);}

/* k11038 in k11035 in loop in k11001 */
static void C_ccall f_11039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11039,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1723: g2850 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* loop in k11001 */
static void C_fcall f_11010(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11010,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_cadddr(((C_word*)t0)[2]));}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11021,tmp=(C_word)a,a+=2,tmp);
t5=C_i_car(t3);
t6=C_a_i_list1(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11036,a[2]=t4,a[3]=t1,a[4]=t6,a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t8=C_i_car(t2);
/* optimizer.scm:1725: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}

/* f_5412 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5412,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k10109 */
static void C_ccall f_10111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10111,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cdr(((C_word*)t0)[6]);
t5=C_i_length(t4);
t6=C_eqp(((C_word*)t0)[8],t5);
if(C_truep(t6)){
t7=t3;
f_10050(2,t7,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm:1490: quit */
t7=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,lf[175],((C_word*)t0)[9]);}}

/* k6306 in k6320 in k6117 */
static void C_ccall f_6308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6123(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm:566: test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6085(t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[49]);}}

/* k5446 in k5056 */
static void C_ccall f_5448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5448,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:366: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3977(t3,t2,((C_word*)t0)[7],lf[70]);}
else{
t2=((C_word*)t0)[2];
f_5064(t2,C_SCHEME_FALSE);}}

/* k11004 in k11001 */
static void C_ccall f_11005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11005,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k11001 */
static void C_ccall f_11002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11005,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11010,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_11010(t7,t2,((C_word*)t0)[4],t3);}

/* f_10623 in k10705 in k10713 */
static void C_ccall f_10623(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10623,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k10627 in k10705 in k10713 */
static void C_ccall f_10629(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10629,2,t0,t1);}
t2=C_i_caddr(t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[87]+1);
t8=C_i_check_list_2(t2,lf[35]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10671,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_10671(t13,t9,t2);}

/* k5434 in k5146 in k5062 in k5056 */
static void C_ccall f_5436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_memq(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];
f_5318(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[4];
f_5318(t2,C_SCHEME_FALSE);}}

/* k10649 in k10667 */
static void C_ccall f_10650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10650,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]));}

/* f_10655 in k10667 */
static void C_ccall f_10655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10655,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5458 in k5452 in k5446 in k5056 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5460,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5064(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5461,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:368: g599 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],lf[54]);}}

/* f_5461 in k5458 in k5452 in k5446 in k5056 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5461,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* k5465 in k5458 in k5452 in k5446 in k5056 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(t1,lf[96]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_5064(t3,C_SCHEME_TRUE);}
else{
t3=C_eqp(t1,lf[53]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
f_5064(t4,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[3])){
t4=((C_word*)t0)[2];
f_5064(t4,((C_word*)t0)[3]);}
else{
t4=C_i_cadddr(((C_word*)t0)[4]);
t5=((C_word*)t0)[2];
f_5064(t5,C_i_lessp(t4,*((C_word*)lf[97]+1)));}}}}

/* f_10641 in k10634 in k10627 in k10705 in k10713 */
static void C_ccall f_10641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10641,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10663,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10669,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1667: g2723 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[6]);}

/* for-each-loop1349 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_6693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6693,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6702,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:845: g1350 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5347 */
static void C_ccall f_5349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5349,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:448: invalidate-gae! */
f_4016(t4,((C_word*)t0)[5]);}

/* f_5341 in k5330 in k5319 in k5316 in k5146 in k5062 in k5056 */
static void C_ccall f_5341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5341,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5343,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5349,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5357,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5399,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=t5,a[5]=((C_word*)t0)[8],a[6]=t9,a[7]=t7,a[8]=t10,tmp=(C_word)a,a+=9,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5405,a[2]=t11,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* optimizer.scm:442: qnode */
t13=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,C_SCHEME_END_OF_LIST);}
else{
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5412,tmp=(C_word)a,a+=2,tmp);
t14=C_i_length(t3);
t15=C_a_i_times(&a,2,C_fix(3),t14);
t16=C_a_i_list2(&a,2,lf[91],t15);
/* optimizer.scm:443: g749 */
t17=t13;
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t12,lf[92],t16,t3);}}

/* f_5343 */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5343,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5452 in k5446 in k5056 */
static void C_ccall f_5454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5454,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5064(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:367: test */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3977(t3,t2,((C_word*)t0)[7],lf[64]);}}

/* map-loop2694 in k10627 in k10705 in k10713 */
static void C_fcall f_10671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10671,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10696,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1663: g2700 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5336 in k5330 in k5319 in k5316 in k5146 in k5062 in k5056 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5336,2,t0,t1);}
/* optimizer.scm:432: split-at */
t2=*((C_word*)lf[90]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5330 in k5319 in k5316 in k5146 in k5062 in k5056 */
static void C_ccall f_5331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5341,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:432: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[11],t2,t3);}

/* f_8486 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8486(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8486,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8508,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8514,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1203: g1936 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10287 in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1558: walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9032(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k12093 in loop in k12079 */
static void C_ccall f_12094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12094,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:613: g1053 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
/* optimizer.scm:623: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_12085(t4,((C_word*)t0)[3],t3);}}

/* f_12098 in k12093 in loop in k12079 */
static void C_ccall f_12098(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12098,3,t0,t1,t2);}
t3=C_i_assq(((C_word*)t0)[2],*((C_word*)lf[31]+1));
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_a_i_plus(&a,2,t4,C_fix(1));
t6=C_i_set_cdr(t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],C_fix(1)),*((C_word*)lf[31]+1));
t5=C_mutate((C_word*)lf[31]+1 /* (set! ##compiler#simplified-ops ...) */,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}}

/* f_10280 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10280,2,t0,t1);}
/* optimizer.scm:1447: unzip1 */
t2=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k5354 in k5347 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k10277 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1447: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[18],lf[182],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* f_5357 */
static void C_ccall f_5357(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5357,3,t0,t1,t2);}
/* optimizer.scm:436: g747 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4163(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_8464 in k8394 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8464,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8466,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,t2,t3);
/* optimizer.scm:1216: g1965 */
t7=t4;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,lf[145],t5,t6);}

/* f_8466 */
static void C_ccall f_8466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8466,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k8461 in k8394 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8462,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1210: g1958 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k10634 in k10627 in k10705 in k10713 */
static void C_ccall f_10636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1664: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[7],((C_word*)t0)[4],t2);}

/* ##compiler#determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10292,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10296,a[2]=t9,a[3]=t7,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10351,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t11,a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10605,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t13,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1642: debugging */
t17=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,lf[28],lf[198]);}

/* close in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static C_word C_fcall f_10296(C_word *a,C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t1=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greaterp(t1,C_fix(1)))){
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]),((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
return(t5);}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t3=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
return(t3);}}
else{
t1=C_SCHEME_UNDEFINED;
return(t1);}}

/* k10289 in k10287 in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10241,2,t0,t1);}
t2=C_i_car(t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_9941(t6,((C_word*)t0)[9],t2);}

/* k5319 in k5316 in k5146 in k5062 in k5056 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5320,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t2,t1))){
/* optimizer.scm:429: walk-generic */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5912(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5331,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:431: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[18],lf[93],((C_word*)t0)[14],t1);}}

/* f_9538 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9538(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9538,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9531 in k9542 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9533,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9519,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1422: g2253 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t3=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t4=((C_word*)t0)[4];
f_9483(t4,C_SCHEME_TRUE);}}

/* k4345 */
static void C_ccall f_4346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4348,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:219: put! */
t3=*((C_word*)lf[47]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[48],t1);}

/* k4347 in k4345 */
static void C_ccall f_4348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_4343 in k4338 in replace-var in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4343,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4346,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:217: replace-var */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4335(t4,t3,t2);}

/* f_10235 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10235(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10235,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4326,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4310,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_u_i_car(((C_word*)t0)[2]);
/* optimizer.scm:188: g279 */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t3=((C_word*)t0)[4];
/* optimizer.scm:170: simplify */
t4=((C_word*)((C_word*)t0)[8])[1];
f_4050(t4,((C_word*)t0)[9],t3);}}

/* f_5931 in k5926 in lp in walk-generic in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5931,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_4320 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4320,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4736 in k4751 in k4720 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4737,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:292: g446 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[11],((C_word*)t0)[4],t2);}

/* f_8402 in k8394 in k8387 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8402,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_4356 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4356(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4356,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4353(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4353,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4356,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4362,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=((C_word*)t0)[8],a[12]=t2,a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm:224: g320 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k5926 in lp in walk-generic in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5927,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5931,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5940,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:513: reverse */
t4=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}}

/* f_4722 in k4720 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4722,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4720 */
static void C_ccall f_4721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4722,tmp=(C_word)a,a+=2,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4752,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t6=C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1));
/* optimizer.scm:296: build-lambda-list */
t7=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,((C_word*)t0)[9],t6,C_SCHEME_FALSE);}

/* k9190 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:1362: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9032(t3,((C_word*)t0)[4],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k5950 in k5944 in lp in walk-generic in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5951,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* optimizer.scm:516: lp */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5918(t5,((C_word*)t0)[6],t1,t3,t4);}

/* f_4716 in k4709 in k4627 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4716,5,t0,t1,t2,t3,t4);}
t5=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4721,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:291: debugging */
t7=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[18],lf[67],t4);}

/* f_9546 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9546(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9546,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_7707 in k7704 in k7696 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7707(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7707,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4709 in k4627 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:287: decompose-lambda-list */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[8],((C_word*)t0)[9],t2);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* optimizer.scm:299: walk-generic */
t3=((C_word*)((C_word*)t0)[10])[1];
f_5912(t3,((C_word*)t0)[8],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}}

/* k7704 in k7696 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7706(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7706,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7707,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_a_i_list2(&a,2,C_SCHEME_FALSE,t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7722,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
/* optimizer.scm:1063: varnode */
t9=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t6,t8);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9542 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9544(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9544,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,((C_word*)t0)[6]);
if(C_truep(t4)){
if(C_truep(C_i_zerop(((C_word*)((C_word*)t0)[7])[1]))){
t5=C_i_cadr(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9527,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9533,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1421: g2250 */
t8=t6;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t5);}
else{
t5=t3;
f_9483(t5,C_SCHEME_FALSE);}}
else{
t5=t3;
f_9483(t5,C_eqp(t2,((C_word*)t0)[10]));}}

/* k4338 in replace-var in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4339,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:134: g309 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* replace-var in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4335(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4335,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4339,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:215: test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3977(t4,t3,t2,lf[48]);}

/* k5944 in lp in walk-generic in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=t2;
f_5951(t5,C_eqp(t1,t4));}
else{
t3=t2;
f_5951(t3,C_SCHEME_FALSE);}}

/* k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4788,2,t0,t1);}
t2=C_eqp(t1,lf[3]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5632,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:310: g464 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[14]);}
else{
t3=C_eqp(t1,lf[11]);
if(C_truep(t3)){
if(C_truep(C_i_car(((C_word*)t0)[12]))){
/* optimizer.scm:466: walk-generic */
t4=((C_word*)((C_word*)t0)[9])[1];
f_5912(t4,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5654,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5660,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_cdr(((C_word*)t0)[12]);
t7=C_a_i_cons(&a,2,C_SCHEME_TRUE,t6);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5667,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5674,a[2]=t4,a[3]=t5,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5676,a[2]=t11,a[3]=t15,a[4]=t9,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_5676(t17,t13,((C_word*)t0)[2]);}}
else{
/* optimizer.scm:471: walk-generic */
t4=((C_word*)((C_word*)t0)[9])[1];
f_5912(t4,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[8],C_SCHEME_TRUE);}}}

/* k5939 in k5926 in lp in walk-generic in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:513: g895 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9552,2,t0,t1);}
t2=C_eqp(lf[3],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9538,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1417: g2242 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[11]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_4782 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4782(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4782,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_6603 */
static void C_ccall f_6603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6603,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5975,2,t0,t1);}
t2=C_set_block_item(lf[31] /* ##compiler#simplified-ops */,0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:524: walk */
t4=((C_word*)((C_word*)t0)[8])[1];
f_4163(t4,t3,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k5977 in k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5980,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[7])[1]))){
/* optimizer.scm:525: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[118],((C_word*)((C_word*)t0)[7])[1]);}
else{
t3=t2;
f_5980(2,t3,C_SCHEME_UNDEFINED);}}

/* k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5970,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:520: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5975,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:522: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[28],lf[119]);}}

/* f_9527 in k9542 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9527(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9527,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k9523 in k9531 in k9542 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9525,2,t0,t1);}
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t6=((C_word*)t0)[4];
f_9483(t6,C_SCHEME_TRUE);}

/* k6607 */
static void C_ccall f_6609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6609,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
/* optimizer.scm:892: g1415 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* k4751 in k4720 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4752,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4737,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[7]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[9]);
/* optimizer.scm:298: walk */
t7=((C_word*)((C_word*)t0)[10])[1];
f_4163(t7,t4,t5,t6,C_SCHEME_END_OF_LIST);}

/* k5985 in k5983 in k5981 in k5979 in k5977 in k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[5])[1],C_fix(0)))){
/* optimizer.scm:540: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[109],((C_word*)((C_word*)t0)[5])[1]);}
else{
/* optimizer.scm:541: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k5987 in k5985 in k5983 in k5981 in k5979 in k5977 in k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:541: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5981 in k5979 in k5977 in k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[7])[1],C_fix(0)))){
/* optimizer.scm:538: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[111],((C_word*)((C_word*)t0)[7])[1]);}
else{
t3=t2;
f_5984(2,t3,C_SCHEME_UNDEFINED);}}

/* k5983 in k5981 in k5979 in k5977 in k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[6])[1],C_fix(0)))){
/* optimizer.scm:539: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[110],((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=t2;
f_5986(2,t3,C_SCHEME_UNDEFINED);}}

/* k5979 in k5977 in k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[31]+1)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6017,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:527: with-debugging-output */
t4=*((C_word*)lf[117]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[18],t3);}
else{
t3=t2;
f_5982(2,t3,C_SCHEME_UNDEFINED);}}

/* k7721 in k7704 in k7696 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7722,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7728,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=C_i_cadr(((C_word*)t0)[7]);
/* optimizer.scm:1066: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k7727 in k7721 in k7704 in k7696 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[8];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=C_i_caddr(((C_word*)t0)[9]);
/* optimizer.scm:1068: varnode */
t6=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,t5);}
else{
t5=t2;
f_7731(2,t5,C_i_cadr(((C_word*)t0)[8]));}}

/* for-each-loop1373 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_6673(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6673,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6682,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:858: g1374 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_7773 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7773(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7773,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k7777 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7779(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7779,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_7788(t6,t4);}
else{
t6=C_i_length(((C_word*)t0)[5]);
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
t9=t5;
f_7788(t9,C_i_nequalp(t6,t8));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_11090 in k11102 in descend in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_11090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11090,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k3796 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:83: last */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k3867 in k3857 in k3854 in k3839 in k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:100: copy-node! */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_7789 in k7786 in k7777 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7789,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7786 in k7777 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_7788(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7788,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7789,tmp=(C_word)a,a+=2,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,C_SCHEME_TRUE,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7801,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7804,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
t9=C_u_i_car(t8);
/* optimizer.scm:1081: varnode */
t10=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t6,t9);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10713 */
static void C_ccall f_10715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10715,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10701,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10707,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1660: g2683 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* k6650 */
static void C_ccall f_6651(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6651,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6630,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t6=C_i_assq(((C_word*)t0)[5],((C_word*)t0)[6]);
t7=C_i_cdr(t6);
t8=C_a_i_list1(&a,1,t7);
/* optimizer.scm:899: g1432 */
t9=t3;
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t4,lf[13],t5,t8);}

/* f_3863 in k3857 in k3854 in k3839 in k3837 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3863(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3863,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_10709 */
static void C_ccall f_10709(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10709,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k10705 in k10713 */
static void C_ccall f_10707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10707,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10623,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1661: g2687 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_10701 in k10713 */
static void C_ccall f_10701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10701,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k6681 in for-each-loop1373 in k6478 in k6426 in k6376 in reorganize-recursive-bindings in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_6682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6673(t3,((C_word*)t0)[4],t2);}

/* k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_fcall f_3771(C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3771,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:75: scan */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3699(t4,t2,t3,((C_word*)t0)[7]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3797,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3809,a[2]=((C_word*)t0)[10],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:82: butlast */
t5=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=C_eqp(((C_word*)t0)[8],lf[10]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[11]));
if(C_truep(t4)){
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
t5=C_eqp(((C_word*)t0)[8],lf[12]);
if(C_truep(t5)){
/* optimizer.scm:87: touch */
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_3660(((C_word*)((C_word*)t0)[2])[1]));}
else{
t6=C_eqp(((C_word*)t0)[8],lf[13]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[9]);
t8=C_i_car(((C_word*)t0)[4]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[6],a[4]=t7,a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:92: scan */
t10=((C_word*)((C_word*)t0)[5])[1];
f_3699(t10,t9,t8,((C_word*)t0)[7]);}
else{
/* optimizer.scm:106: scan-each */
t7=((C_word*)((C_word*)t0)[10])[1];
f_3666(t7,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}}}}}}

/* k3772 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3773,2,t0,t1);}
t2=f_3660(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_car(((C_word*)t0)[4]);
/* optimizer.scm:77: scan */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3699(t5,t3,t4,((C_word*)t0)[7]);}

/* k3776 in k3772 in k3769 in k3720 in k3713 in k3706 in scan in scan-toplevel-assignments in k3623 in k3621 */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t3=C_i_cadr(((C_word*)t0)[3]);
/* optimizer.scm:79: scan */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3699(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* k6634 in k6650 */
static void C_ccall f_6636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6636,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
/* optimizer.scm:897: g1427 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* f_6630 in k6650 */
static void C_ccall f_6630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6630,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7730 in k7727 in k7721 in k7704 in k7696 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7731,2,t0,t1);}
t2=C_a_i_list5(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
/* optimizer.scm:1062: g1750 */
t3=((C_word*)t0)[6];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[7],lf[12],((C_word*)t0)[8],t2);}

/* f_8293 in k8276 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8293,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_11304 in k11286 */
static void C_ccall f_11304(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11304,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5392 in map-loop724 in k5398 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5393,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5368(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5368(t6,((C_word*)t0)[5],t5);}}

/* k5398 */
static void C_ccall f_5399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5399,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5366,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5368,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5368(t7,t3,t2);}

/* f_9580 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9580(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9580,3,t0,t1,t2);}
/* optimizer.scm:1433: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9244(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k6611 in k6560 */
static void C_ccall f_6612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:890: fold-right */
t2=*((C_word*)lf[138]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* f_6614 in k6560 */
static void C_ccall f_6614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6614,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6616,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6651,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:898: gensym */
t6=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* f_6616 */
static void C_ccall f_6616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6616,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k8297 in k8276 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8299,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1174: g1904 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* f_8272 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8272(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8272,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_8188 in k8165 in k8145 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8188,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k10770 in k10764 in k10757 in k10797 */
static void C_ccall f_10771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:1757: qnode */
t4=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k10776 in k10770 in k10764 in k10757 in k10797 */
static void C_ccall f_10777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10777,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* optimizer.scm:1752: append */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k8276 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8278(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8278,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8279,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8293,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8299,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[146]+1))){
t6=C_i_cddr(((C_word*)t0)[4]);
t7=C_i_pairp(t6);
t8=(C_truep(t7)?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t9=C_a_i_list1(&a,1,t8);
/* optimizer.scm:1177: g1909 */
t10=t4;
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t5,lf[145],t9,((C_word*)t0)[5]);}
else{
t6=C_i_cadr(((C_word*)t0)[4]);
t7=C_a_i_list1(&a,1,t6);
/* optimizer.scm:1177: g1909 */
t8=t4;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,lf[145],t7,((C_word*)t0)[5]);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_8279 in k8276 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8279(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8279,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7607 in map-loop1694 in k7510 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7608(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7608,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7583(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7583(t6,((C_word*)t0)[5],t5);}}

/* k5364 in k5398 */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:433: g717 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* map-loop724 in k5398 */
static void C_fcall f_5368(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5368,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5393,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:436: g730 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8192 in k8165 in k8145 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8194,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:1156: g1883 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k10761 in k10757 in k10797 */
static void C_ccall f_10762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1749: g2898 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* k11348 in k11345 */
static void C_ccall f_11349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11349,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:816: g1265 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[145],((C_word*)t0)[5],t2);}

/* k10767 in k10764 in k10757 in k10797 */
static void C_ccall f_10768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1751: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k11345 */
static void C_ccall f_11346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11349,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:816: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k10764 in k10757 in k10797 */
static void C_ccall f_10765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10768,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10771,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_i_length(((C_word*)t0)[3]);
t5=C_a_i_minus(&a,2,((C_word*)t0)[5],t4);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10785,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1754: list-tabulate */
t7=*((C_word*)lf[189]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t5,t6);}

/* k4383 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:231: test */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3977(t3,t2,t1,lf[55]);}

/* k11339 in k11335 */
static void C_ccall f_11340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11340,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],t1,((C_word*)t0)[3]);
/* optimizer.scm:813: g1260 */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],lf[21],C_SCHEME_END_OF_LIST,t2);}

/* k10797 */
static void C_ccall f_10799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10799,2,t0,t1);}
t2=C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10745,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10753,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10759,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:1750: g2903 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}

/* f_10793 */
static void C_ccall f_10793(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10793,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k10219 in for-each-loop2386 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in ... */
static void C_ccall f_10220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10211(t3,((C_word*)t0)[4],t2);}

/* f_10785 in k10764 in k10757 in k10797 */
static void C_ccall f_10785(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10785,2,t0,t1);}
/* optimizer.scm:1756: qnode */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4370,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* optimizer.scm:226: g326 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[13]);}

/* k7637 in map-loop1666 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7638(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7638,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7613(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7613(t6,((C_word*)t0)[5],t5);}}

/* for-each-loop2386 in k9962 in k9955 in k9948 in rec in k10239 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 in ... */
static void C_fcall f_10211(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10211,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10220,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1514: g2387 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_9941(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4363,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:225: g323 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[12]);}

/* f_4363 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4363(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4363,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k11315 in k11286 */
static void C_ccall f_11316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11316,2,t0,t1);}
t2=C_a_i_list3(&a,3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);
/* optimizer.scm:808: g1253 */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],lf[5],((C_word*)t0)[6],t2);}

/* f_11318 in k11286 */
static void C_ccall f_11318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11318,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11320,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11331,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11337,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11346,a[2]=t5,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:816: varnode */
t8=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}

/* k4393 in k4388 in k4383 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4402,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4411,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:234: test */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3977(t5,t4,((C_word*)t0)[4],lf[49]);}

/* k11308 in k11286 */
static void C_ccall f_11310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11310,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:804: g1248 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* k4388 in k4383 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4390,2,t0,t1);}
if(C_truep(t1)){
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4394,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:233: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[18],lf[50],((C_word*)t0)[5]);}
else{
t2=C_u_i_car(((C_word*)t0)[6]);
t3=C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
t4=C_i_assq(((C_word*)t0)[5],((C_word*)t0)[7]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:230: g347 */
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,((C_word*)t0)[3],t4);}
else{
/* optimizer.scm:247: varnode */
t5=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],((C_word*)t0)[5]);}}
else{
t4=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[8])+1,t5);
/* optimizer.scm:238: varnode */
t7=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[3],((C_word*)t0)[5]);}}}

/* k9152 in k9106 in k9101 in k9096 in k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9154,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_9069(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_length(((C_word*)t0)[3]);
t3=C_i_length(((C_word*)t0)[4]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[5]);
t6=C_i_car(((C_word*)t0)[6]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
/* optimizer.scm:1356: scan */
t8=((C_word*)((C_word*)t0)[8])[1];
f_9240(t8,((C_word*)t0)[2],t5,t6,((C_word*)t0)[7],((C_word*)t0)[9],t7);}
else{
t5=((C_word*)t0)[2];
f_9069(2,t5,C_SCHEME_FALSE);}}}

/* f_9159 in k9106 in k9101 in k9096 in k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9159(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9159,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_11382 */
static void C_ccall f_11382(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11382,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_7152 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7152,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k5316 in k5146 in k5062 in k5056 */
static void C_fcall f_5318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5318,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm:427: llist-length */
t3=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[15]);}
else{
/* optimizer.scm:450: walk-generic */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5912(t2,((C_word*)t0)[4],((C_word*)t0)[16],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}}

/* f_9247 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9247(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9247,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9240(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9240,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9244,a[2]=t6,a[3]=t10,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t8,a[7]=t12,a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=t4,a[11]=((C_word*)t0)[5],a[12]=t3,tmp=(C_word)a,a+=13,tmp));
t14=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9662,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1442: rec */
t18=((C_word*)t12)[1];
f_9244(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* k6023 */
static void C_ccall f_6024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_greaterp(t3,C_fix(1)))){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* optimizer.scm:535: print */
t6=*((C_word*)lf[112]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],C_make_character(9),t5);}
else{
/* optimizer.scm:536: newline */
t4=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* f_6021 in k6019 */
static void C_ccall f_6021(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6021,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6024,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* optimizer.scm:533: print* */
t5=*((C_word*)lf[114]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[115],t4);}

/* rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9244(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9244,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9247,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_9253,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t5,a[11]=t4,a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=t2,tmp=(C_word)a,a+=18,tmp);
/* optimizer.scm:1369: g2184 */
t8=t6;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k6019 */
static void C_ccall f_6020(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6021,tmp=(C_word)a,a+=2,tmp);
t3=*((C_word*)lf[31]+1);
t4=C_i_check_list_2(*((C_word*)lf[31]+1),lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6050,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6050(t8,((C_word*)t0)[2],*((C_word*)lf[31]+1));}

/* f_7159 in k7156 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7159,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k7156 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7158(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7158,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7159,tmp=(C_word)a,a+=2,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,C_SCHEME_FALSE,t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_car(t6);
/* optimizer.scm:978: varnode */
t8=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t5,t7);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9163 in k9106 in k9101 in k9096 in k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:1352: g2143 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,lf[160]);}

/* k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4376(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4376,2,t0,t1);}
t2=C_eqp(t1,lf[3]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:230: replace-var */
t5=((C_word*)((C_word*)t0)[8])[1];
f_4335(t5,t3,t4);}
else{
t3=C_eqp(t1,lf[6]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[5],a[10]=t4,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:251: test */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3977(t6,t5,t4,lf[59]);}
else{
t4=C_eqp(t1,lf[11]);
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[5]);
t6=C_u_i_car(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4629,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[10],a[6]=t6,a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[3],a[10]=t5,a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=t1,tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm:269: test */
t8=((C_word*)((C_word*)t0)[4])[1];
f_3977(t8,t7,t6,lf[68]);}
else{
t5=C_eqp(t1,lf[69]);
if(C_truep(t5)){
/* optimizer.scm:302: walk-generic */
t6=((C_word*)((C_word*)t0)[13])[1];
f_5912(t6,((C_word*)t0)[3],((C_word*)t0)[14],t1,((C_word*)t0)[5],((C_word*)t0)[10],((C_word*)t0)[12],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t6=C_eqp(t1,lf[12]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[10]);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4782,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4788,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=t1,a[12]=((C_word*)t0)[5],a[13]=((C_word*)t0)[4],a[14]=t7,a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm:306: g455 */
t10=t8;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t7);}
else{
t7=C_eqp(t1,lf[13]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[5]);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[15],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:475: test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_3977(t10,t9,t8,lf[58]);}
else{
/* optimizer.scm:504: walk-generic */
t8=((C_word*)((C_word*)t0)[13])[1];
f_5912(t8,((C_word*)t0)[3],((C_word*)t0)[14],t1,((C_word*)t0)[5],((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[6],C_SCHEME_FALSE);}}}}}}}

/* k5224 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5225,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5183,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5194(t7,t3,t2);}

/* f_9254 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9254,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9254,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_9260,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
/* optimizer.scm:1370: g2187 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[17]);}

/* k7887 in k7835 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1096: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* f_4370 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4370,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k7884 in k7835 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1095: g1795 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* f_9519 in k9531 in k9542 in k9550 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9519(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9519,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k5256 in k5271 in k5239 in k5234 in k5229 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5257(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5260,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
t5=C_a_i_minus(&a,2,((C_word*)t0)[6],C_fix(1));
t6=((C_word*)t0)[7];
t7=C_u_i_cdr(t6);
/* optimizer.scm:419: loop */
t8=((C_word*)((C_word*)t0)[8])[1];
f_5162(t8,t2,t4,t5,t7,((C_word*)t0)[9]);}

/* f_9261 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9261(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9261,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9261,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_9267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
/* optimizer.scm:1371: g2195 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[18]);}

/* k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9267(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9267,2,t0,t1);}
t2=C_eqp(t1,lf[3]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9301,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1374: get */
t5=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[7],t3,lf[161]);}
else{
t3=C_eqp(t1,lf[11]);
if(C_truep(t3)){
if(C_truep(((C_word*)t0)[8])){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1382: decompose-lambda-list */
t6=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],t4,t5);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=C_eqp(t1,lf[92]);
if(C_truep(t4)){
t5=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],t6);
t8=C_mutate(((C_word *)((C_word*)t0)[6])+1,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9353,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1391: every */
t10=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,((C_word*)t0)[3],t9,((C_word*)t0)[10]);}}
else{
t5=C_eqp(t1,lf[69]);
if(C_truep(t5)){
if(C_truep(((C_word*)t0)[13])){
if(C_truep(((C_word*)t0)[14])){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9384,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(((C_word*)t0)[10]);
/* optimizer.scm:1394: scan-used-variables */
t8=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[12]);}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t6=C_eqp(t1,lf[162]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9398,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm:1399: estimate-foreign-result-size */
t9=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}
else{
t7=C_eqp(t1,lf[164]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9435,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t9=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1407: estimate-foreign-result-size */
t10=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t8=C_eqp(t1,lf[12]);
if(C_truep(t8)){
t9=C_i_car(((C_word*)t0)[10]);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9546,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9552,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[18],a[11]=t9,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:1416: g2237 */
t12=t10;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t9);}
else{
t9=C_eqp(t1,lf[165]);
if(C_truep(t9)){
t10=C_i_cadddr(((C_word*)t0)[2]);
t11=C_i_zerop(t10);
if(C_truep(t11)){
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t12=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t12)){
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}
else{
t13=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],t10);
t14=C_mutate(((C_word *)((C_word*)t0)[6])+1,t13);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9580,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1433: every */
t16=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,((C_word*)t0)[3],t15,((C_word*)t0)[10]);}}}
else{
t10=C_eqp(t1,lf[13]);
if(C_truep(t10)){
t11=C_i_car(((C_word*)t0)[10]);
t12=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1434: rec */
t13=((C_word*)((C_word*)t0)[11])[1];
f_9244(t13,((C_word*)t0)[3],t11,t12,C_SCHEME_FALSE,((C_word*)t0)[12]);}
else{
t11=C_eqp(t1,lf[6]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9610,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t13=C_i_car(((C_word*)t0)[10]);
t14=C_i_car(((C_word*)t0)[2]);
/* optimizer.scm:1436: rec */
t15=((C_word*)((C_word*)t0)[11])[1];
f_9244(t15,t12,t13,t14,((C_word*)t0)[19],((C_word*)t0)[12]);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9630,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1438: every */
t13=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,((C_word*)t0)[3],t12,((C_word*)t0)[10]);}}}}}}}}}}}

/* f_9148 in k9106 in k9101 in k9096 in k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9148,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* k5239 in k5234 in k5229 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5241(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5241,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5242,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5272,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:417: gensym */
t4=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[88]);}
else{
t2=((C_word*)t0)[3];
t3=C_u_i_cdr(t2);
t4=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* optimizer.scm:420: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_5162(t7,((C_word*)t0)[2],t3,t4,t6,((C_word*)t0)[7]);}}

/* f_5242 in k5239 in k5234 in k5229 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5242(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5242,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4300 in k4294 in k4314 in k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_cddr(((C_word*)t0)[2]);
/* optimizer.scm:191: every */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],t2);}
else{
t2=((C_word*)t0)[3];
f_4248(2,t2,C_SCHEME_FALSE);}}

/* f_9204 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9204(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9204,3,t0,t1,t2);}
/* optimizer.scm:1363: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9032(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* f_11378 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_11378,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
if(C_truep(*((C_word*)lf[144]+1))){
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11382,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11394,a[2]=t10,a[3]=t1,a[4]=t4,a[5]=t6,a[6]=t7,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:787: varnode */
t12=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t9);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* for-each-loop2154 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9214,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9223,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1363: g2155 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop907 in k6019 */
static void C_fcall f_6050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6050,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6059,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:531: g908 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop863 in k5811 in k5781 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5792(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5792,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5801,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:492: g864 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5788 in k5811 in k5781 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6058 in for-each-loop907 in k6019 */
static void C_ccall f_6059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6050(t3,((C_word*)t0)[4],t2);}

/* k9222 in for-each-loop2154 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9214(t3,((C_word*)t0)[4],t2);}

/* k11393 */
static void C_ccall f_11394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11396,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11402,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_list3(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);
/* optimizer.scm:788: g1230 */
t5=t2;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,lf[21],C_SCHEME_END_OF_LIST,t4);}

/* f_11396 in k11393 */
static void C_ccall f_11396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11396,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k9106 in k9101 in k9096 in k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9107,2,t0,t1);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9148,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9154,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9159,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9165,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1353: g2147 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[4];
f_9069(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_9069(2,t2,C_SCHEME_FALSE);}}

/* k9101 in k9096 in k9087 in k9053 in k9046 in k9039 in walk in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9102,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm:1349: get-list */
t3=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[10],((C_word*)t0)[7],lf[127]);}
else{
t2=((C_word*)t0)[4];
f_9069(2,t2,C_SCHEME_FALSE);}}

/* k4314 in k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4316,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4290,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4296,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:189: g283 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* f_4310 in k4324 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4310,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_7860 in k7835 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7860,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5234 in k5229 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_i_car(((C_word*)t0)[5]);
/* optimizer.scm:414: expression-has-side-effects? */
t4=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[11]);}

/* k5229 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5231,2,t0,t1);}
if(C_truep(t1)){
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5235,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_car(t4);
/* optimizer.scm:411: debugging */
t6=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t3,lf[18],lf[89],t5,((C_word*)t0)[13]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_cdr(t2);
t4=C_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t5=C_i_cdr(((C_word*)t0)[6]);
t6=((C_word*)t0)[6];
t7=C_u_i_car(t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[8]);
/* optimizer.scm:421: loop */
t9=((C_word*)((C_word*)t0)[7])[1];
f_5162(t9,((C_word*)t0)[3],t3,t4,t5,t8);}}

/* f_7873 in k7835 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7873,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_9883 in k9879 in k9871 in k9895 */
static void C_ccall f_9883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9883,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9887 in k9879 in k9871 in k9895 */
static void C_ccall f_9889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1544: g2455 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9879 in k9871 in k9895 */
static void C_ccall f_9881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9883,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1544: g2466 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k7803 in k7786 in k7777 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1081: cons* */
t2=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k7800 in k7786 in k7777 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1080: g1769 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[12],((C_word*)t0)[4],t1);}

/* f_7692 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7692(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7692,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k7179 in k7173 in k7156 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7180,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2);
/* optimizer.scm:977: g1565 */
t4=((C_word*)t0)[6];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[7],lf[12],((C_word*)t0)[8],t3);}

/* k9871 in k9895 */
static void C_ccall f_9873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9875,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1544: g2463 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_9875 in k9871 in k9895 */
static void C_ccall f_9875(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9875,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k7696 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7698,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7706,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1061: < */
C_lessp(5,0,t3,C_fix(0),t2,C_fix(3));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7835 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7837(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7837,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:*((C_word*)lf[146]+1));
if(C_truep(t3)){
t4=C_i_length(((C_word*)t0)[3]);
t5=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_less_or_equalp(t4,t5))){
t6=C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7860,tmp=(C_word)a,a+=2,tmp);
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* optimizer.scm:1094: g1790 */
t10=t7;
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[5],lf[12],t8,t9);}
else{
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7873,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
t10=C_a_i_list2(&a,2,C_SCHEME_TRUE,t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7885,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7888,a[2]=t11,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t13=((C_word*)t0)[2];
t14=C_u_i_car(t13);
/* optimizer.scm:1096: varnode */
t15=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t12,t14);}}
else{
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8165 in k8145 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8167,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[146]+1);
t3=(C_truep(*((C_word*)lf[146]+1))?*((C_word*)lf[146]+1):((C_word*)t0)[2]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8174,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8188,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8194,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8200,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t9=(C_truep(((C_word*)t0)[8])?(C_truep(C_fixnum_greaterp(((C_word*)t0)[6],C_fix(0)))?C_fixnum_less_or_equal_p(((C_word*)t0)[6],C_fix(8)):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[9]);
/* optimizer.scm:1162: conc */
t11=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t10,((C_word*)t0)[6]);}
else{
t10=t8;
f_8200(2,t10,C_i_cadr(((C_word*)t0)[9]));}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7831 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7831,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_9842 */
static void C_ccall f_9842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9842,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_8161 in k8145 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8161(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8161,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* f_9840 in k9779 in k9776 in k9763 in k9761 in k9705 in k9703 in k9699 in k9697 in k9693 in k9685 in k9680 in k9673 in transform in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 in ... */
static void C_ccall f_9840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)tr4,(void*)f_9840,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9842,tmp=(C_word)a,a+=2,tmp);
t5=C_i_car(t2);
t6=C_a_i_list1(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9891,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9897,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=C_u_i_cdr(t9);
/* optimizer.scm:1543: g2452 */
t11=t7;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t8,t10);}

/* f_8174 in k8165 in k8145 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8174,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k9895 */
static void C_ccall f_9897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9897,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9859,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9867,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9873,a[2]=t3,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1544: g2460 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* f_9891 */
static void C_ccall f_9891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9891,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k8145 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8146,2,t0,t1);}
if(C_truep(*((C_word*)lf[144]+1))){
t2=C_i_not(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[2]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8161,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8167,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1154: g1876 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[10]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_9867 in k9895 */
static void C_ccall f_9867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9867,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k9863 in k9895 */
static void C_ccall f_9865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9865,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
/* optimizer.scm:1541: g2446 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* k11335 */
static void C_ccall f_11337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11340,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:817: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* f_11331 */
static void C_ccall f_11331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11331,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_4493(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4608,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:252: test */
t4=((C_word*)((C_word*)t0)[11])[1];
f_3977(t4,t3,((C_word*)t0)[10],lf[58]);}}

/* k4491 in k4489 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4493(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4493,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm:256: walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4163(t6,((C_word*)t0)[6],t5,((C_word*)t0)[7],((C_word*)t0)[8]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4556,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4593,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4599,a[2]=((C_word*)t0)[11],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:258: g372 */
t7=t4;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}

/* k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6102,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:560: g952 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[126]);}

/* k6092 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[4])[1],C_fix(0)))){
/* optimizer.scm:598: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[18],lf[121],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[3])[1]);}}

/* k6094 in k6092 in k6090 in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* f_9859 in k9895 */
static void C_ccall f_9859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9859,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_11320 */
static void C_ccall f_11320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11320,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k8199 in k8165 in k8145 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8200(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8200,2,t0,t1);}
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=C_a_i_list2(&a,2,t1,t3);
/* optimizer.scm:1159: g1888 */
t5=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[5],lf[92],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_times(&a,2,((C_word*)t0)[3],t3);
t5=C_a_i_list2(&a,2,t1,t4);
/* optimizer.scm:1159: g1888 */
t6=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[5],lf[92],t5,((C_word*)t0)[6]);}
else{
t3=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
/* optimizer.scm:1159: g1888 */
t4=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[5],lf[92],t3,((C_word*)t0)[6]);}}}

/* touch in perform-pre-optimization! in k3968 in k3623 in k3621 */
static C_word C_fcall f_6080(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* test in perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_fcall f_6085(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6085,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm:555: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* f_8105 in k8067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8105,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* map-loop1666 in k7503 in k7501 in k7473 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_7613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7613,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7638,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1038: g1672 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11351 in k11286 */
static void C_ccall f_11352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:811: fold-right */
t2=*((C_word*)lf[138]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* f_7101 in k7075 in k7067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7101,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* ##compiler#perform-pre-optimization! in k3968 in k3623 in k3621 */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6076,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6080,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6085,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6091,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t3,a[7]=t11,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:557: debugging */
t15=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,lf[28],lf[128]);}

/* k7105 in k7075 in k7067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:965: fold-right */
t2=*((C_word*)lf[138]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k7115 in k7075 in k7067 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7116,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:968: g1553 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k5259 in k5256 in k5271 in k5239 in k5234 in k5229 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5260,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:415: g698 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[6],((C_word*)t0)[5],t2);}

/* k10814 in for-each-loop2882 in k10733 */
static void C_ccall f_10815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10806(t3,((C_word*)t0)[4],t2);}

/* k4830 in k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4843,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4849,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:329: g512 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}

/* k7173 in k7156 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7174,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7180,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=C_i_cadr(((C_word*)t0)[7]);
/* optimizer.scm:981: qnode */
t5=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_4808 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4808,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4807(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4807,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4808,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:321: g483 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4873,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[3],a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[5],a[16]=((C_word*)t0)[9],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* optimizer.scm:332: g519 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[11],lf[101]);}}

/* for-each-loop2882 in k10733 */
static void C_fcall f_10806(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10806,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10815,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1742: g2883 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4823 in k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4823(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4823,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
/* optimizer.scm:326: g505 */
t4=*((C_word*)lf[47]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[2],t2,lf[70],C_SCHEME_TRUE);}

/* k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4820(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4820,2,t0,t1);}
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[4];
t5=C_i_check_list_2(t4,lf[2]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4832,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4851,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_4851(t10,t6,t4);}

/* k4837 in k4830 in k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:327: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4163(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* for-each-loop2868 in k10729 in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_fcall f_10832(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10832,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10841,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1741: g2869 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop489 in k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4851(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4851,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4860,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:326: g490 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4843 in k4830 in k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4843,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* f_6017 in k5979 in k5977 in k5974 in k5968 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6020,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:530: print */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[116]);}

/* f_8751 in k8763 */
static void C_ccall f_8751(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8751,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_8759 */
static void C_ccall f_8759(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8759,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_4873 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4873,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* k8755 in k8763 */
static void C_ccall f_8757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(((C_word*)t0)[3],t2));}

/* k4847 in k4830 in k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:328: inline-lambda-bindings */
t3=*((C_word*)lf[71]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_FALSE,((C_word*)t0)[5],*((C_word*)lf[72]+1));}

/* k5700 in map-loop792 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5701(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5701,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5676(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5676(t6,((C_word*)t0)[5],t5);}}

/* f_7231 in k7212 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7231,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k4859 in for-each-loop489 in k4819 in k4817 in k4812 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4851(t3,((C_word*)t0)[4],t2);}

/* k8763 */
static void C_ccall f_8765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8765,2,t0,t1);}
t2=C_eqp(lf[34],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8751,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1253: g2014 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4879,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4884,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5022,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5028,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:335: g527 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t4=t3;
f_4884(2,t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5034,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[2],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[13],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[3],tmp=(C_word)a,a+=21,tmp);
if(C_truep(((C_word*)t0)[16])){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5581,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5587,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:355: g567 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[16]);}
else{
t3=t2;
f_5034(t3,C_SCHEME_FALSE);}}}

/* f_11709 in k11670 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11715,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:732: reverse */
t3=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5271 in k5239 in k5234 in k5229 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5272,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=((C_word*)t0)[6];
t5=C_u_i_car(t4);
/* optimizer.scm:418: walk */
t6=((C_word*)((C_word*)t0)[9])[1];
f_4163(t6,t3,t5,((C_word*)t0)[10],((C_word*)t0)[11]);}

/* f_8737 in k8636 in k8632 in k8627 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8737(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8737,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8759,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8765,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:1252: g2011 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* for-each-loop2641 in k10606 in k10604 in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_11235(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11235,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11244,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:1648: g2642 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5727,2,t0,t1);}
if(C_truep(t1)){
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5731,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5741,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:477: test */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3977(t5,t4,((C_word*)t0)[4],lf[56]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm:480: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3977(t3,t2,((C_word*)t0)[4],lf[48]);}}

/* k7249 in k7212 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7251,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* optimizer.scm:992: g1581 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[12],((C_word*)t0)[5],t2);}

/* k4882 in k4877 in k4805 in k4799 in k4797 in k5636 in k4786 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* optimizer.scm:353: walk-generic */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5912(t2,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_FALSE);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("optimizer_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1859)){
C_save(t1);
C_rereclaim2(1859*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,230);
lf[0]=C_h_intern(&lf[0],34,"\010compilerscan-toplevel-assignments");
lf[1]=C_h_intern(&lf[1],13,"alist-update!");
lf[2]=C_h_intern(&lf[2],8,"for-each");
lf[3]=C_h_intern(&lf[3],13,"\004corevariable");
lf[4]=C_h_intern(&lf[4],6,"remove");
lf[5]=C_h_intern(&lf[5],2,"if");
lf[6]=C_h_intern(&lf[6],3,"let");
lf[7]=C_h_intern(&lf[7],6,"append");
lf[8]=C_h_intern(&lf[8],4,"last");
lf[9]=C_h_intern(&lf[9],7,"butlast");
lf[10]=C_h_intern(&lf[10],6,"lambda");
lf[11]=C_h_intern(&lf[11],11,"\004corelambda");
lf[12]=C_h_intern(&lf[12],9,"\004corecall");
lf[13]=C_h_intern(&lf[13],4,"set!");
lf[14]=C_h_intern(&lf[14],4,"node");
lf[15]=C_h_intern(&lf[15],19,"\010compilercopy-node!");
lf[16]=C_h_intern(&lf[16],14,"\004coreundefined");
lf[17]=C_h_intern(&lf[17],18,"\010compilerdebugging");
lf[18]=C_h_intern(&lf[18],1,"o");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000&dropping redundant toplevel assignment");
lf[20]=C_h_intern(&lf[20],9,"alist-ref");
lf[21]=C_h_intern(&lf[21],9,"\004corecond");
lf[22]=C_h_intern(&lf[22],11,"\004coreswitch");
lf[23]=C_h_intern(&lf[23],8,"\003sysput!");
lf[24]=C_h_intern(&lf[24],21,"\010compileralways-bound");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\014safe globals");
lf[26]=C_h_intern(&lf[26],17,"delete-duplicates");
lf[27]=C_h_intern(&lf[27],3,"eq\077");
lf[28]=C_h_intern(&lf[28],1,"p");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000 scanning toplevel assignments...");
lf[30]=C_h_intern(&lf[30],24,"\010compilersimplifications");
lf[31]=C_h_intern(&lf[31],23,"\010compilersimplified-ops");
lf[32]=C_h_intern(&lf[32],41,"\010compilerperform-high-level-optimizations");
lf[33]=C_h_intern(&lf[33],12,"\010compilerget");
lf[34]=C_h_intern(&lf[34],5,"quote");
lf[35]=C_h_intern(&lf[35],3,"map");
lf[36]=C_h_intern(&lf[36],19,"\010compilermatch-node");
lf[37]=C_h_intern(&lf[37],3,"any");
lf[38]=C_h_intern(&lf[38],18,"\003syshash-table-ref");
lf[39]=C_h_intern(&lf[39],30,"\010compilerbroken-constant-nodes");
lf[40]=C_h_intern(&lf[40],14,"\010compilerqnode");
lf[41]=C_h_intern(&lf[41],11,"lset-adjoin");
lf[42]=C_h_intern(&lf[42],27,"\010compilerconstant-form-eval");
lf[43]=C_h_intern(&lf[43],7,"\003sysget");
lf[44]=C_h_intern(&lf[44],18,"\010compilerintrinsic");
lf[45]=C_h_intern(&lf[45],5,"every");
lf[46]=C_h_intern(&lf[46],9,"foldable\077");
lf[47]=C_h_intern(&lf[47],13,"\010compilerput!");
lf[48]=C_h_intern(&lf[48],10,"replacable");
lf[49]=C_h_intern(&lf[49],5,"value");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\035substituted constant variable");
lf[51]=C_h_intern(&lf[51],16,"\010compilervarnode");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\032propagated global variable");
lf[53]=C_h_intern(&lf[53],2,"no");
lf[54]=C_h_intern(&lf[54],15,"\010compilerinline");
lf[55]=C_h_intern(&lf[55],11,"collapsable");
lf[56]=C_h_intern(&lf[56],6,"global");
lf[57]=C_h_intern(&lf[57],9,"replacing");
lf[58]=C_h_intern(&lf[58],12,"contractable");
lf[59]=C_h_intern(&lf[59],9,"removable");
lf[60]=C_h_intern(&lf[60],6,"unused");
lf[61]=C_h_intern(&lf[61],9,"partition");
lf[62]=C_h_intern(&lf[62],26,"\010compilerbuild-lambda-list");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[64]=C_h_intern(&lf[64],13,"explicit-rest");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000 removed unused formal parameters");
lf[66]=C_h_intern(&lf[66],30,"\010compilerdecompose-lambda-list");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[68]=C_h_intern(&lf[68],21,"has-unused-parameters");
lf[69]=C_h_intern(&lf[69],18,"\004coredirect_lambda");
lf[70]=C_h_intern(&lf[70],13,"inline-target");
lf[71]=C_h_intern(&lf[71],31,"\010compilerinline-lambda-bindings");
lf[72]=C_h_intern(&lf[72],4,"void");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\024contracted procedure");
lf[74]=C_h_intern(&lf[74],24,"\010compilercheck-signature");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\0001removed call to pure procedure with unused result");
lf[76]=C_h_intern(&lf[76],37,"\010compilerexpression-has-side-effects\077");
lf[77]=C_h_intern(&lf[77],8,"assigned");
lf[78]=C_h_intern(&lf[78],10,"references");
lf[79]=C_h_intern(&lf[79],7,"unknown");
lf[80]=C_h_intern(&lf[80],1,"i");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\0008not inlining procedure because it refers to contractable");
lf[82]=C_h_intern(&lf[82],7,"call/cc");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\022inlining procedure");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\017global inlining");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\010inlining");
lf[86]=C_h_intern(&lf[86],14,"append-reverse");
lf[87]=C_h_intern(&lf[87],6,"gensym");
lf[88]=C_h_intern(&lf[88],1,"t");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000+removed unused parameter to known procedure");
lf[90]=C_h_intern(&lf[90],8,"split-at");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[92]=C_h_intern(&lf[92],20,"\004coreinline_allocate");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\042consed rest parameter at call site");
lf[94]=C_h_intern(&lf[94],21,"\010compilerllist-length");
lf[95]=C_h_intern(&lf[95],23,"\010compilerinline-locally");
lf[96]=C_h_intern(&lf[96],3,"yes");
lf[97]=C_h_intern(&lf[97],24,"\010compilerinline-max-size");
lf[98]=C_h_intern(&lf[98],9,"inlinable");
lf[99]=C_h_intern(&lf[99],22,"\010compilerinline-global");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000 inlining call to intrinsic alias");
lf[101]=C_h_intern(&lf[101],13,"\010compilerpure");
lf[102]=C_h_intern(&lf[102],11,"local-value");
lf[103]=C_h_intern(&lf[103],18,"\010compilercall-info");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\034removing global contractable");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\0006removed side-effect free assignment to unused variable");
lf[106]=C_h_intern(&lf[106],16,"inline-transient");
lf[107]=C_h_intern(&lf[107],26,"\010compilervariable-visible\077");
lf[108]=C_h_intern(&lf[108],7,"reverse");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\031removed conditional forms");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\025removed binding forms");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\022replaced variables");
lf[112]=C_h_intern(&lf[112],5,"print");
lf[113]=C_h_intern(&lf[113],7,"newline");
lf[114]=C_h_intern(&lf[114],6,"print\052");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\004    ");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\027  call simplifications:");
lf[117]=C_h_intern(&lf[117],30,"\010compilerwith-debugging-output");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\017simplifications");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\022traversal phase...");
lf[120]=C_h_intern(&lf[120],34,"\010compilerperform-pre-optimization!");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\023Removed `not\047 forms");
lf[122]=C_h_intern(&lf[122],24,"node-subexpressions-set!");
lf[123]=C_h_intern(&lf[123],20,"node-parameters-set!");
lf[124]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[125]=C_h_intern(&lf[125],17,"\010compilerget-list");
lf[126]=C_h_intern(&lf[126],3,"not");
lf[127]=C_h_intern(&lf[127],10,"call-sites");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\031pre-optimization phase...");
lf[129]=C_h_intern(&lf[129],24,"register-simplifications");
lf[130]=C_h_intern(&lf[130],19,"\003syshash-table-set!");
lf[131]=C_h_intern(&lf[131],38,"\010compilerreorganize-recursive-bindings");
lf[132]=C_h_intern(&lf[132],28,"\010compilerscan-used-variables");
lf[133]=C_h_intern(&lf[133],6,"filter");
lf[134]=C_h_intern(&lf[134],6,"lset<=");
lf[135]=C_h_intern(&lf[135],10,"filter-map");
lf[136]=C_h_intern(&lf[136],10,"append-map");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000!converted assignments to bindings");
lf[138]=C_h_intern(&lf[138],10,"fold-right");
lf[139]=C_h_intern(&lf[139],4,"fold");
lf[140]=C_h_intern(&lf[140],16,"topological-sort");
lf[141]=C_h_intern(&lf[141],27,"\010compilersubstitution-table");
lf[142]=C_h_intern(&lf[142],16,"\010compilerrewrite");
lf[143]=C_h_intern(&lf[143],28,"\010compilersimplify-named-call");
lf[144]=C_h_intern(&lf[144],37,"\010compilerinline-substitutions-enabled");
lf[145]=C_h_intern(&lf[145],11,"\004coreinline");
lf[146]=C_h_intern(&lf[146],6,"unsafe");
lf[147]=C_h_intern(&lf[147],11,"number-type");
lf[148]=C_h_intern(&lf[148],6,"fixnum");
lf[149]=C_h_intern(&lf[149],21,"\010compilerfold-boolean");
lf[150]=C_h_intern(&lf[150],6,"flonum");
lf[151]=C_h_intern(&lf[151],7,"generic");
lf[152]=C_h_intern(&lf[152],5,"cons\052");
lf[153]=C_h_intern(&lf[153],9,"\004coreproc");
lf[154]=C_h_intern(&lf[154],4,"conc");
lf[155]=C_h_intern(&lf[155],5,"fifth");
lf[156]=C_h_intern(&lf[156],19,"\010compilerfold-inner");
lf[157]=C_h_intern(&lf[157],13,"\010compilerbomb");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\023bad type (optimize)");
lf[159]=C_h_intern(&lf[159],34,"\010compilertransform-direct-lambdas!");
lf[160]=C_h_intern(&lf[160],24,"\010compilercallback-lambda");
lf[161]=C_h_intern(&lf[161],5,"boxed");
lf[162]=C_h_intern(&lf[162],15,"\004coreinline_ref");
lf[163]=C_h_intern(&lf[163],37,"\010compilerestimate-foreign-result-size");
lf[164]=C_h_intern(&lf[164],19,"\004coreinline_loc_ref");
lf[165]=C_h_intern(&lf[165],16,"\004coredirect_call");
lf[166]=C_h_intern(&lf[166],5,"lset=");
lf[167]=C_h_intern(&lf[167],6,"delete");
lf[168]=C_h_intern(&lf[168],13,"\010compilerquit");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000;known procedure called with wrong number of arguments: `~A\047");
lf[170]=C_h_intern(&lf[170],15,"lset-difference");
lf[171]=C_h_intern(&lf[171],15,"node-class-set!");
lf[172]=C_h_intern(&lf[172],12,"\004corerecurse");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[174]=C_h_intern(&lf[174],4,"take");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\014missing kvar");
lf[177]=C_h_intern(&lf[177],11,"\004corereturn");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\017bad call (leaf)");
lf[179]=C_h_intern(&lf[179],6,"cdaddr");
lf[180]=C_h_intern(&lf[180],6,"caaddr");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid parameter list");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\0006direct leaf routine with hoistable closures/allocation");
lf[183]=C_h_intern(&lf[183],6,"unzip1");
lf[184]=C_h_intern(&lf[184],16,"\003sysmake-promise");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\036direct leaf routine/allocation");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000(direct leaf routine optimization pass...");
lf[187]=C_h_intern(&lf[187],36,"\010compilerdetermine-loop-and-dispatch");
lf[188]=C_h_intern(&lf[188],16,"\003sysdynamic-wind");
lf[189]=C_h_intern(&lf[189],13,"list-tabulate");
lf[190]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[191]=C_h_intern(&lf[191],2,"f_");
lf[192]=C_h_intern(&lf[192],1,"x");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\012clustering");
lf[194]=C_h_intern(&lf[194],1,"a");
lf[195]=C_h_intern(&lf[195],3,"max");
lf[196]=C_h_intern(&lf[196],1,"k");
lf[197]=C_h_intern(&lf[197],8,"dispatch");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\027collecting clusters ...");
lf[199]=C_h_intern(&lf[199],11,"make-vector");
lf[200]=C_h_intern(&lf[200],3,"var");
lf[201]=C_h_intern(&lf[201],2,"d2");
lf[202]=C_h_intern(&lf[202],1,"y");
lf[203]=C_h_intern(&lf[203],2,"d3");
lf[204]=C_h_intern(&lf[204],1,"z");
lf[205]=C_h_intern(&lf[205],2,"d1");
lf[206]=C_h_intern(&lf[206],2,"op");
lf[207]=C_h_intern(&lf[207],5,"clist");
lf[208]=C_h_intern(&lf[208],34,"\010compilermembership-test-operators");
lf[209]=C_h_intern(&lf[209],32,"\010compilermembership-unfold-limit");
lf[210]=C_h_intern(&lf[210],4,"var1");
lf[211]=C_h_intern(&lf[211],4,"var0");
lf[212]=C_h_intern(&lf[212],6,"const1");
lf[213]=C_h_intern(&lf[213],4,"var2");
lf[214]=C_h_intern(&lf[214],6,"const2");
lf[215]=C_h_intern(&lf[215],5,"body2");
lf[216]=C_h_intern(&lf[216],4,"rest");
lf[217]=C_h_intern(&lf[217],5,"body1");
lf[218]=C_h_intern(&lf[218],27,"\010compilereq-inline-operator");
lf[219]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\002\376\377\016");
lf[220]=C_h_intern(&lf[220],19,"\010compilerimmediate\077");
lf[221]=C_h_intern(&lf[221],5,"const");
lf[222]=C_h_intern(&lf[222],1,"n");
lf[223]=C_h_intern(&lf[223],7,"clauses");
lf[224]=C_h_intern(&lf[224],1,"d");
lf[225]=C_h_intern(&lf[225],4,"body");
lf[226]=C_h_intern(&lf[226],4,"more");
lf[227]=C_h_intern(&lf[227],4,"args");
lf[228]=C_h_intern(&lf[228],1,"b");
lf[229]=C_h_intern(&lf[229],1,"c");
C_register_lf2(lf,230,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3622,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f_7245 in k7212 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7245,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_8795 in simplify-named-call in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_8795(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8795,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[44]);}

/* k5218 in map-loop659 in k5224 in loop in k5146 in k5062 in k5056 */
static void C_ccall f_5219(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5219,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5194(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5194(t6,((C_word*)t0)[5],t5);}}

/* f_10731 in k10729 in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10731(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10731,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10734,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* optimizer.scm:1743: get */
t5=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[4],t4,lf[127]);}

/* k10729 in k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10832,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_10832(t6,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* f_10735 in k10733 */
static void C_ccall f_10735(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10735,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10793,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10799,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:1747: g2895 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k10733 */
static void C_ccall f_10734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_check_list_2(t1,lf[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10806,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_10806(t7,((C_word*)t0)[5],t1);}

/* k11218 in map-loop2660 in k10615 in k10613 */
static void C_ccall f_11219(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11219,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11194(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_11194(t6,((C_word*)t0)[5],t5);}}

/* k5739 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5741,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm:478: debugging */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[80],lf[104],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record4(&a,4,lf[14],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}}

/* f_11717 in k11670 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11717(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11717,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:C_SCHEME_FALSE));}

/* k11714 */
static void C_ccall f_11715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:732: reorganize-recursive-bindings */
t2=*((C_word*)lf[131]+1);
f_6369(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k10718 in k10615 in k10613 */
static void C_ccall f_10720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:1675: gensym */
t3=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[196]);}

/* k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10722(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11151,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[5],lf[35]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11162,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11164,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_11164(t13,t9,((C_word*)t0)[5]);}

/* k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10726,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11141,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11146,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:1678: list-tabulate */
t5=*((C_word*)lf[189]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t1,t4);}

/* k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10726(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11108,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11110,a[2]=t6,a[3]=t9,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_11110(t11,t7,((C_word*)t0)[6]);}

/* k10727 in k10725 in k10723 in k10721 in k10718 in k10615 in k10613 */
static void C_ccall f_10728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10852,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_10852(t6,t2,((C_word*)t0)[10]);}

/* k5730 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5732,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:479: g829 */
t3=t2;
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* f_5732 in k5730 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5732,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k11739 in k11733 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11741,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11672(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11773,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11779,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* optimizer.scm:725: g1177 */
t5=t2;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=((C_word*)t0)[2];
f_11672(t2,C_SCHEME_FALSE);}}}

/* f_10753 in k10797 */
static void C_ccall f_10753(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10753,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k10749 in k10797 */
static void C_ccall f_10751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:1748: copy-node! */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k10757 in k10797 */
static void C_ccall f_10759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10765,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1751: varnode */
t4=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_5765(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5765,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5769,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:489: debugging */
t4=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[18],lf[105],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5777,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5783,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5851,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(((C_word*)t0)[8]);
/* optimizer.scm:492: walk */
t6=((C_word*)((C_word*)t0)[9])[1];
f_4163(t6,t4,t5,((C_word*)t0)[10],((C_word*)t0)[5]);}}

/* k5768 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5770,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:490: g848 */
t3=t2;
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k11733 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11735,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11672(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_car(((C_word*)t0)[5]);
/* optimizer.scm:723: get */
t4=*((C_word*)lf[33]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[6],t3,lf[78]);}}

/* f_10745 in k10797 */
static void C_ccall f_10745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10745,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_5753 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5753,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5750,2,t0,t1);}
if(C_truep(t1)){
t2=f_4011(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5753,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm:482: g836 */
t4=t3;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[16],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5895,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm:483: test */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3977(t4,t3,((C_word*)t0)[4],lf[56]);}}

/* k11767 in k11777 in k11739 in k11733 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
f_11672(t3,C_eqp(((C_word*)t0)[3],t2));}

/* f_6136 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6136(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6136,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_fcall f_6131(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6131,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6265,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:572: g988 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_11763 in k11777 in k11739 in k11733 in k11664 in k11657 in k11650 in loop2 in k11617 in k11591 in k11584 in k11577 in k11568 in k11562 in k11544 in k11537 in k11530 in loop1 */
static void C_ccall f_11763(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11763,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k5781 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:494: test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3977(t3,t2,((C_word*)t0)[2],lf[56]);}

/* k5894 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5895,2,t0,t1);}
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_5859(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5892,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:484: variable-visible? */
t5=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}}

/* k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10374(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10374,2,t0,t1);}
t2=C_eqp(t1,lf[6]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_car(((C_word*)t0)[3]);
t5=C_i_cadr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10392,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t5,a[9]=t4,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t7=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t7)){
t8=t6;
f_10392(t8,C_SCHEME_FALSE);}
else{
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10514,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10520,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1607: g2555 */
t10=t8;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t4);}}
else{
t3=C_eqp(t1,lf[11]);
t4=(C_truep(t3)?t3:C_eqp(t1,lf[69]));
if(C_truep(t4)){
t5=C_i_caddr(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10536,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1630: decompose-lambda-list */
t7=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[8],t5,t6);}
else{
t5=f_10296(C_a_i(&a,6),((C_word*)((C_word*)t0)[10])[1]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10565,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[2]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10576,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_10576(t11,((C_word*)t0)[8],((C_word*)t0)[3]);}}}

/* k5891 in k5894 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5859(t2,C_i_not(t1));}

/* k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6125(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
if(C_truep(t1)){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_length(((C_word*)t0)[5]);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6291,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6297,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:571: g984 */
t9=t7;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,((C_word*)t0)[8]);}
else{
t7=t2;
f_6131(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_6131(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6131(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6131(t3,C_SCHEME_FALSE);}}

/* k6122 in k6320 in k6117 */
static void C_ccall f_6123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:567: get-list */
t3=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[7],((C_word*)t0)[8],lf[78]);}

/* k11286 */
static void C_ccall f_11287(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11287,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_list1(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11290,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,t1);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11304,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11310,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11316,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t6,a[5]=t7,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11318,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11352,a[2]=t8,a[3]=t9,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm:819: qnode */
t11=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,C_SCHEME_FALSE);}

/* f_5770 in k5768 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5770(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5770,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_11853 in k11880 in k11844 */
static void C_ccall f_11853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11853,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* f_5777 in k5763 in k5748 in k5725 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5777,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* k6156 in k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_fcall f_6158(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6158,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6219,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:582: g1008 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k6151 in k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6236,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6242,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:580: g1004 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[6]);}
else{
t5=t2;
f_6158(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6158(t3,C_SCHEME_FALSE);}}

/* k11864 in k11880 in k11844 */
static void C_ccall f_11865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:675: g1102 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[22],((C_word*)t0)[4],t1);}

/* k11867 in k11880 in k11844 */
static void C_ccall f_11868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11871,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:679: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_10392(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10392,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
/* optimizer.scm:1610: walk */
t4=((C_word*)((C_word*)t0)[6])[1];
f_10351(t4,((C_word*)t0)[7],((C_word*)t0)[8],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10405,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10500,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10506,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm:1612: g2561 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}
else{
t3=t2;
f_10405(t3,C_SCHEME_FALSE);}}}

/* k6146 in k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_fcall f_6148(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6148,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:578: get-list */
t4=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[10],t2,lf[78]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k6140 in k6261 in k6269 in k6129 in k6124 in k6122 in k6320 in k6117 */
static void C_ccall f_6142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t2;
f_6148(t4,C_i_nullp(t3));}
else{
t3=t2;
f_6148(t3,C_SCHEME_FALSE);}}

/* f_11267 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_11267,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_i_assoc(t4,*((C_word*)lf[208]+1));
if(C_truep(t9)){
if(C_truep(C_i_listp(t6))){
t10=C_i_length(t6);
if(C_truep(C_i_lessp(t10,*((C_word*)lf[209]+1)))){
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11287,a[2]=t9,a[3]=t5,a[4]=t1,a[5]=t7,a[6]=t8,a[7]=t3,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm:802: gensym */
t12=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k11844 */
static void C_ccall f_11846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11846,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm:674: get-list */
t3=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[8],((C_word*)t0)[9],lf[78]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_9445 in k9438 in k9434 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_9445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9445,3,t0,t1,t2);}
/* optimizer.scm:1413: rec */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9244(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k9438 in k9434 in k9265 in k9258 in k9251 in rec in scan in transform-direct-lambdas! in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_9440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9440,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:1413: every */
t3=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_10335 in k10347 in k10445 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10335(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10335,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_11290 in k11286 */
static void C_ccall f_11290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11290,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[14],t2,t3,t4));}

/* for-each-loop187 in invalidate-gae! in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4030(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4030,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4039,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* optimizer.scm:134: g188 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_11834 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_11834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr11,(void*)f_11834,11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
if(C_truep(C_i_equalp(t4,*((C_word*)lf[218]+1)))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11846,a[2]=t9,a[3]=t1,a[4]=t8,a[5]=t10,a[6]=t6,a[7]=t5,a[8]=t2,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:673: immediate? */
t12=*((C_word*)lf[220]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t6);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k4406 in k4393 in k4388 in k4383 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* optimizer.scm:234: qnode */
t3=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_4402 in k4393 in k4388 in k4383 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4402,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_4003 in k4200 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4003(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4003,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4007 in k4200 in k4188 in k4181 in k4175 in walk in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(t1);
t3=(C_truep(t2)?C_i_cadr(((C_word*)t0)[2]):C_i_caddr(((C_word*)t0)[2]));
/* optimizer.scm:180: walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4163(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k4410 in k4393 in k4388 in k4383 in k4374 in k4367 in k4360 in walk1 in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm:234: g339 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* f_4155 in simplify in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4155,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_10354 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10354(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10354,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_fcall f_10351(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10351,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10354,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10360,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm:1598: g2534 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k4038 in for-each-loop187 in invalidate-gae! in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4030(t3,((C_word*)t0)[4],t2);}

/* simplify in perform-high-level-optimizations in k3968 in k3623 in k3621 */
static void C_fcall f_4050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4050,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4054,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4155,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4161,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:151: g215 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k4147 in map-loop224 in k4072 */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4148,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4123(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4123(t6,((C_word*)t0)[5],t5);}}

/* k4439 */
static void C_fcall f_4441(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4441,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm:244: debugging */
t3=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[18],lf[52],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* optimizer.scm:246: varnode */
t2=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k10347 in k10445 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10349,2,t0,t1);}
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10335,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm:1595: g2526 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_10405(t3,C_SCHEME_FALSE);}}

/* k10339 in k10347 in k10445 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caddr(t1);
t3=((C_word*)t0)[2];
f_10405(t3,C_i_listp(t2));}

/* f_10343 in k10445 in k10480 in k10488 in k10496 in k10504 in k10390 in k10372 in k10365 in k10358 in walk in determine-loop-and-dispatch in k6787 in k6366 in k6364 in k6362 in k3968 in k3623 in k3621 */
static void C_ccall f_10343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10343,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[982] = {
{"f_3809:optimizer_2escm",(void*)f_3809},
{"f_3806:optimizer_2escm",(void*)f_3806},
{"f_9408:optimizer_2escm",(void*)f_9408},
{"f_9403:optimizer_2escm",(void*)f_9403},
{"f_3722:optimizer_2escm",(void*)f_3722},
{"f_5814:optimizer_2escm",(void*)f_5814},
{"f_5813:optimizer_2escm",(void*)f_5813},
{"f_3803:optimizer_2escm",(void*)f_3803},
{"f_4057:optimizer_2escm",(void*)f_4057},
{"f_4054:optimizer_2escm",(void*)f_4054},
{"f_3838:optimizer_2escm",(void*)f_3838},
{"f_4443:optimizer_2escm",(void*)f_4443},
{"f_4121:optimizer_2escm",(void*)f_4121},
{"f_10368:optimizer_2escm",(void*)f_10368},
{"f_4123:optimizer_2escm",(void*)f_4123},
{"f_10367:optimizer_2escm",(void*)f_10367},
{"f_10361:optimizer_2escm",(void*)f_10361},
{"f_10360:optimizer_2escm",(void*)f_10360},
{"f_3715:optimizer_2escm",(void*)f_3715},
{"f_9097:optimizer_2escm",(void*)f_9097},
{"f_3716:optimizer_2escm",(void*)f_3716},
{"f_4432:optimizer_2escm",(void*)f_4432},
{"f_5830:optimizer_2escm",(void*)f_5830},
{"f_4110:optimizer_2escm",(void*)f_4110},
{"f_3702:optimizer_2escm",(void*)f_3702},
{"f_9069:optimizer_2escm",(void*)f_9069},
{"f_3708:optimizer_2escm",(void*)f_3708},
{"f_3709:optimizer_2escm",(void*)f_3709},
{"f_4463:optimizer_2escm",(void*)f_4463},
{"f_9435:optimizer_2escm",(void*)f_9435},
{"f_5865:optimizer_2escm",(void*)f_5865},
{"f_8629:optimizer_2escm",(void*)f_8629},
{"f_8623:optimizer_2escm",(void*)f_8623},
{"f_7263:optimizer_2escm",(void*)f_7263},
{"f_4457:optimizer_2escm",(void*)f_4457},
{"f_5859:optimizer_2escm",(void*)f_5859},
{"f_8639:optimizer_2escm",(void*)f_8639},
{"f_8637:optimizer_2escm",(void*)f_8637},
{"f_3844:optimizer_2escm",(void*)f_3844},
{"f_3842:optimizer_2escm",(void*)f_3842},
{"f_8633:optimizer_2escm",(void*)f_8633},
{"f_5851:optimizer_2escm",(void*)f_5851},
{"f_3840:optimizer_2escm",(void*)f_3840},
{"f_11244:optimizer_2escm",(void*)f_11244},
{"f_5877:optimizer_2escm",(void*)f_5877},
{"f_5871:optimizer_2escm",(void*)f_5871},
{"f_6188:optimizer_2escm",(void*)f_6188},
{"f_3747:optimizer_2escm",(void*)f_3747},
{"f_3858:optimizer_2escm",(void*)f_3858},
{"f_3856:optimizer_2escm",(void*)f_3856},
{"f_11227:optimizer_2escm",(void*)f_11227},
{"f_3732:optimizer_2escm",(void*)f_3732},
{"f_3736:optimizer_2escm",(void*)f_3736},
{"f_3738:optimizer_2escm",(void*)f_3738},
{"f_11881:optimizer_2escm",(void*)f_11881},
{"f_11871:optimizer_2escm",(void*)f_11871},
{"f_8646:optimizer_2escm",(void*)f_8646},
{"f_11779:optimizer_2escm",(void*)f_11779},
{"f_11773:optimizer_2escm",(void*)f_11773},
{"f_10419:optimizer_2escm",(void*)f_10419},
{"f_10405:optimizer_2escm",(void*)f_10405},
{"f_4177:optimizer_2escm",(void*)f_4177},
{"f_4176:optimizer_2escm",(void*)f_4176},
{"f_4995:optimizer_2escm",(void*)f_4995},
{"f_4997:optimizer_2escm",(void*)f_4997},
{"f_4989:optimizer_2escm",(void*)f_4989},
{"f_4161:optimizer_2escm",(void*)f_4161},
{"f_4163:optimizer_2escm",(void*)f_4163},
{"f_6113:optimizer_2escm",(void*)f_6113},
{"f_6119:optimizer_2escm",(void*)f_6119},
{"f_4971:optimizer_2escm",(void*)f_4971},
{"f_4977:optimizer_2escm",(void*)f_4977},
{"f_7214:optimizer_2escm",(void*)f_7214},
{"f_8961:optimizer_2escm",(void*)f_8961},
{"f_6102:optimizer_2escm",(void*)f_6102},
{"f_6108:optimizer_2escm",(void*)f_6108},
{"f_6109:optimizer_2escm",(void*)f_6109},
{"f_7208:optimizer_2escm",(void*)f_7208},
{"f_10471:optimizer_2escm",(void*)f_10471},
{"f_10476:optimizer_2escm",(void*)f_10476},
{"f_4954:optimizer_2escm",(void*)f_4954},
{"f_5607:optimizer_2escm",(void*)f_5607},
{"f_5602:optimizer_2escm",(void*)f_5602},
{"f_4959:optimizer_2escm",(void*)f_4959},
{"f_8941:optimizer_2escm",(void*)f_8941},
{"f_10465:optimizer_2escm",(void*)f_10465},
{"f_4073:optimizer_2escm",(void*)f_4073},
{"f_4948:optimizer_2escm",(void*)f_4948},
{"f_7038:optimizer_2escm",(void*)f_7038},
{"f_10490:optimizer_2escm",(void*)f_10490},
{"f_10492:optimizer_2escm",(void*)f_10492},
{"f_10498:optimizer_2escm",(void*)f_10498},
{"f_7032:optimizer_2escm",(void*)f_7032},
{"f_4934:optimizer_2escm",(void*)f_4934},
{"f_4933:optimizer_2escm",(void*)f_4933},
{"f_4931:optimizer_2escm",(void*)f_4931},
{"f_5621:optimizer_2escm",(void*)f_5621},
{"f_11618:optimizer_2escm",(void*)f_11618},
{"f_4078:optimizer_2escm",(void*)f_4078},
{"f_10482:optimizer_2escm",(void*)f_10482},
{"f_10484:optimizer_2escm",(void*)f_10484},
{"f_4925:optimizer_2escm",(void*)f_4925},
{"f_4922:optimizer_2escm",(void*)f_4922},
{"f_5619:optimizer_2escm",(void*)f_5619},
{"f_5613:optimizer_2escm",(void*)f_5613},
{"f_4065:optimizer_2escm",(void*)f_4065},
{"f_10898:optimizer_2escm",(void*)f_10898},
{"f_10892:optimizer_2escm",(void*)f_10892},
{"f_6172:optimizer_2escm",(void*)f_6172},
{"f_10890:optimizer_2escm",(void*)f_10890},
{"f_8683:optimizer_2escm",(void*)f_8683},
{"f_6176:optimizer_2escm",(void*)f_6176},
{"f_6174:optimizer_2escm",(void*)f_6174},
{"f_8938:optimizer_2escm",(void*)f_8938},
{"f_10884:optimizer_2escm",(void*)f_10884},
{"f_9089:optimizer_2escm",(void*)f_9089},
{"f_6166:optimizer_2escm",(void*)f_6166},
{"f_4903:optimizer_2escm",(void*)f_4903},
{"f_5638:optimizer_2escm",(void*)f_5638},
{"f_5632:optimizer_2escm",(void*)f_5632},
{"f_11666:optimizer_2escm",(void*)f_11666},
{"f_9055:optimizer_2escm",(void*)f_9055},
{"f_11660:optimizer_2escm",(void*)f_11660},
{"f_7583:optimizer_2escm",(void*)f_7583},
{"f_8661:optimizer_2escm",(void*)f_8661},
{"f_9916:optimizer_2escm",(void*)f_9916},
{"f_5662:optimizer_2escm",(void*)f_5662},
{"f_5660:optimizer_2escm",(void*)f_5660},
{"f_5667:optimizer_2escm",(void*)f_5667},
{"f_11659:optimizer_2escm",(void*)f_11659},
{"f_8698:optimizer_2escm",(void*)f_8698},
{"f_9028:optimizer_2escm",(void*)f_9028},
{"f_6257:optimizer_2escm",(void*)f_6257},
{"f_11653:optimizer_2escm",(void*)f_11653},
{"f_11652:optimizer_2escm",(void*)f_11652},
{"f_9927:optimizer_2escm",(void*)f_9927},
{"f_5654:optimizer_2escm",(void*)f_5654},
{"f_11646:optimizer_2escm",(void*)f_11646},
{"f_10852:optimizer_2escm",(void*)f_10852},
{"f_6242:optimizer_2escm",(void*)f_6242},
{"f_11643:optimizer_2escm",(void*)f_11643},
{"f_9483:optimizer_2escm",(void*)f_9483},
{"f_9488:optimizer_2escm",(void*)f_9488},
{"f_10841:optimizer_2escm",(void*)f_10841},
{"f_9048:optimizer_2escm",(void*)f_9048},
{"f_9049:optimizer_2escm",(void*)f_9049},
{"f_6236:optimizer_2escm",(void*)f_6236},
{"f_9041:optimizer_2escm",(void*)f_9041},
{"f_9042:optimizer_2escm",(void*)f_9042},
{"f_9907:optimizer_2escm",(void*)f_9907},
{"f_5674:optimizer_2escm",(void*)f_5674},
{"f_5676:optimizer_2escm",(void*)f_5676},
{"f_10870:optimizer_2escm",(void*)f_10870},
{"f_10876:optimizer_2escm",(void*)f_10876},
{"f_6225:optimizer_2escm",(void*)f_6225},
{"f_4814:optimizer_2escm",(void*)f_4814},
{"f_10862:optimizer_2escm",(void*)f_10862},
{"f_4193:optimizer_2escm",(void*)f_4193},
{"f_4190:optimizer_2escm",(void*)f_4190},
{"f_6219:optimizer_2escm",(void*)f_6219},
{"f_6217:optimizer_2escm",(void*)f_6217},
{"f_4800:optimizer_2escm",(void*)f_4800},
{"f_6211:optimizer_2escm",(void*)f_6211},
{"f_4818:optimizer_2escm",(void*)f_4818},
{"f_4011:optimizer_2escm",(void*)f_4011},
{"f_4184:optimizer_2escm",(void*)f_4184},
{"f_4183:optimizer_2escm",(void*)f_4183},
{"f_6203:optimizer_2escm",(void*)f_6203},
{"f_6209:optimizer_2escm",(void*)f_6209},
{"f_9035:optimizer_2escm",(void*)f_9035},
{"f_9032:optimizer_2escm",(void*)f_9032},
{"f_8720:optimizer_2escm",(void*)f_8720},
{"f_4019:optimizer_2escm",(void*)f_4019},
{"f_4016:optimizer_2escm",(void*)f_4016},
{"f_8602:optimizer_2escm",(void*)f_8602},
{"f_8700:optimizer_2escm",(void*)f_8700},
{"f_8707:optimizer_2escm",(void*)f_8707},
{"f_9630:optimizer_2escm",(void*)f_9630},
{"f_7082:optimizer_2escm",(void*)f_7082},
{"f_7084:optimizer_2escm",(void*)f_7084},
{"f_7099:optimizer_2escm",(void*)f_7099},
{"f_8668:optimizer_2escm",(void*)f_8668},
{"f_4508:optimizer_2escm",(void*)f_4508},
{"f_4507:optimizer_2escm",(void*)f_4507},
{"f_6271:optimizer_2escm",(void*)f_6271},
{"f_6263:optimizer_2escm",(void*)f_6263},
{"f_6265:optimizer_2escm",(void*)f_6265},
{"f_7007:optimizer_2escm",(void*)f_7007},
{"f_7001:optimizer_2escm",(void*)f_7001},
{"f_7018:optimizer_2escm",(void*)f_7018},
{"f_7560:optimizer_2escm",(void*)f_7560},
{"f_3913:optimizer_2escm",(void*)f_3913},
{"f_3914:optimizer_2escm",(void*)f_3914},
{"f_7544:optimizer_2escm",(void*)f_7544},
{"f_3916:optimizer_2escm",(void*)f_3916},
{"f_3911:optimizer_2escm",(void*)f_3911},
{"f_11695:optimizer_2escm",(void*)f_11695},
{"f_7556:optimizer_2escm",(void*)f_7556},
{"f_3909:optimizer_2escm",(void*)f_3909},
{"f_7558:optimizer_2escm",(void*)f_7558},
{"f_11689:optimizer_2escm",(void*)f_11689},
{"f_9682:optimizer_2escm",(void*)f_9682},
{"f_9686:optimizer_2escm",(void*)f_9686},
{"f_7524:optimizer_2escm",(void*)f_7524},
{"f_7522:optimizer_2escm",(void*)f_7522},
{"f_7069:optimizer_2escm",(void*)f_7069},
{"f_11672:optimizer_2escm",(void*)f_11672},
{"f_11402:optimizer_2escm",(void*)f_11402},
{"f_9695:optimizer_2escm",(void*)f_9695},
{"f_9698:optimizer_2escm",(void*)f_9698},
{"f_3966:optimizer_2escm",(void*)f_3966},
{"f_7063:optimizer_2escm",(void*)f_7063},
{"f_7538:optimizer_2escm",(void*)f_7538},
{"f_10920:optimizer_2escm",(void*)f_10920},
{"f_10929:optimizer_2escm",(void*)f_10929},
{"f_10926:optimizer_2escm",(void*)f_10926},
{"f_10923:optimizer_2escm",(void*)f_10923},
{"f_7502:optimizer_2escm",(void*)f_7502},
{"f_7077:optimizer_2escm",(void*)f_7077},
{"f_10912:optimizer_2escm",(void*)f_10912},
{"f_7505:optimizer_2escm",(void*)f_7505},
{"f_7506:optimizer_2escm",(void*)f_7506},
{"f_10914:optimizer_2escm",(void*)f_10914},
{"f_11467:optimizer_2escm",(void*)f_11467},
{"f_7512:optimizer_2escm",(void*)f_7512},
{"f_3948:optimizer_2escm",(void*)f_3948},
{"f_7517:optimizer_2escm",(void*)f_7517},
{"f_10940:optimizer_2escm",(void*)f_10940},
{"f_9711:optimizer_2escm",(void*)f_9711},
{"f_9717:optimizer_2escm",(void*)f_9717},
{"f_9719:optimizer_2escm",(void*)f_9719},
{"f_3939:optimizer_2escm",(void*)f_3939},
{"f_8867:optimizer_2escm",(void*)f_8867},
{"f_11104:optimizer_2escm",(void*)f_11104},
{"f_11108:optimizer_2escm",(void*)f_11108},
{"f_9700:optimizer_2escm",(void*)f_9700},
{"f_9704:optimizer_2escm",(void*)f_9704},
{"f_9707:optimizer_2escm",(void*)f_9707},
{"f_9706:optimizer_2escm",(void*)f_9706},
{"f_8091:optimizer_2escm",(void*)f_8091},
{"f_4599:optimizer_2escm",(void*)f_4599},
{"f_6291:optimizer_2escm",(void*)f_6291},
{"f_6297:optimizer_2escm",(void*)f_6297},
{"f_4593:optimizer_2escm",(void*)f_4593},
{"f_8842:optimizer_2escm",(void*)f_8842},
{"f_8841:optimizer_2escm",(void*)f_8841},
{"f_10906:optimizer_2escm",(void*)f_10906},
{"f_8897:optimizer_2escm",(void*)f_8897},
{"f_8894:optimizer_2escm",(void*)f_8894},
{"f_11110:optimizer_2escm",(void*)f_11110},
{"f_9619:optimizer_2escm",(void*)f_9619},
{"f_9610:optimizer_2escm",(void*)f_9610},
{"f_4570:optimizer_2escm",(void*)f_4570},
{"f_4564:optimizer_2escm",(void*)f_4564},
{"f_10459:optimizer_2escm",(void*)f_10459},
{"f_8873:optimizer_2escm",(void*)f_8873},
{"f_6897:optimizer_2escm",(void*)f_6897},
{"f_6891:optimizer_2escm",(void*)f_6891},
{"f_4556:optimizer_2escm",(void*)f_4556},
{"f_4550:optimizer_2escm",(void*)f_4550},
{"f_10447:optimizer_2escm",(void*)f_10447},
{"f_8882:optimizer_2escm",(void*)f_8882},
{"f_11164:optimizer_2escm",(void*)f_11164},
{"f_5590:optimizer_2escm",(void*)f_5590},
{"f_5596:optimizer_2escm",(void*)f_5596},
{"f_11456:optimizer_2escm",(void*)f_11456},
{"f_11162:optimizer_2escm",(void*)f_11162},
{"f_5127:optimizer_2escm",(void*)f_5127},
{"f_10090:optimizer_2escm",(void*)f_10090},
{"f_11443:optimizer_2escm",(void*)f_11443},
{"f_6868:optimizer_2escm",(void*)f_6868},
{"f_10084:optimizer_2escm",(void*)f_10084},
{"f_6862:optimizer_2escm",(void*)f_6862},
{"f_11189:optimizer_2escm",(void*)f_11189},
{"f_9662:optimizer_2escm",(void*)f_9662},
{"f_4523:optimizer_2escm",(void*)f_4523},
{"f_4525:optimizer_2escm",(void*)f_4525},
{"f_9668:optimizer_2escm",(void*)f_9668},
{"f_8017:optimizer_2escm",(void*)f_8017},
{"f_8011:optimizer_2escm",(void*)f_8011},
{"f_5148:optimizer_2escm",(void*)f_5148},
{"f_9670:optimizer_2escm",(void*)f_9670},
{"f_5562:optimizer_2escm",(void*)f_5562},
{"f_9676:optimizer_2escm",(void*)f_9676},
{"f_9674:optimizer_2escm",(void*)f_9674},
{"f_4516:optimizer_2escm",(void*)f_4516},
{"f_5568:optimizer_2escm",(void*)f_5568},
{"f_4589:optimizer_2escm",(void*)f_4589},
{"f_4583:optimizer_2escm",(void*)f_4583},
{"f_8076:optimizer_2escm",(void*)f_8076},
{"f_10056:optimizer_2escm",(void*)f_10056},
{"f_10052:optimizer_2escm",(void*)f_10052},
{"f_10054:optimizer_2escm",(void*)f_10054},
{"f_11194:optimizer_2escm",(void*)f_11194},
{"f_10050:optimizer_2escm",(void*)f_10050},
{"f_9332:optimizer_2escm",(void*)f_9332},
{"f_8088:optimizer_2escm",(void*)f_8088},
{"f_10043:optimizer_2escm",(void*)f_10043},
{"f_10079:optimizer_2escm",(void*)f_10079},
{"f_10070:optimizer_2escm",(void*)f_10070},
{"f_9318:optimizer_2escm",(void*)f_9318},
{"f_8069:optimizer_2escm",(void*)f_8069},
{"f_8063:optimizer_2escm",(void*)f_8063},
{"f_6804:optimizer_2escm",(void*)f_6804},
{"f_10064:optimizer_2escm",(void*)f_10064},
{"f_6809:optimizer_2escm",(void*)f_6809},
{"f_6877:optimizer_2escm",(void*)f_6877},
{"f_6870:optimizer_2escm",(void*)f_6870},
{"f_9353:optimizer_2escm",(void*)f_9353},
{"f_8351:optimizer_2escm",(void*)f_8351},
{"f_8352:optimizer_2escm",(void*)f_8352},
{"f_11483:optimizer_2escm",(void*)f_11483},
{"f_11473:optimizer_2escm",(void*)f_11473},
{"f_8902:optimizer_2escm",(void*)f_8902},
{"f_8900:optimizer_2escm",(void*)f_8900},
{"f_8907:optimizer_2escm",(void*)f_8907},
{"f_11146:optimizer_2escm",(void*)f_11146},
{"f_11141:optimizer_2escm",(void*)f_11141},
{"f_8914:optimizer_2escm",(void*)f_8914},
{"f_8919:optimizer_2escm",(void*)f_8919},
{"f_4693:optimizer_2escm",(void*)f_4693},
{"f_4691:optimizer_2escm",(void*)f_4691},
{"f_3688:optimizer_2escm",(void*)f_3688},
{"f_11151:optimizer_2escm",(void*)f_11151},
{"f_3660:optimizer_2escm",(void*)f_3660},
{"f_3666:optimizer_2escm",(void*)f_3666},
{"f_3679:optimizer_2escm",(void*)f_3679},
{"f_8345:optimizer_2escm",(void*)f_8345},
{"f_3669:optimizer_2escm",(void*)f_3669},
{"f_10514:optimizer_2escm",(void*)f_10514},
{"f_5174:optimizer_2escm",(void*)f_5174},
{"f_10506:optimizer_2escm",(void*)f_10506},
{"f_10500:optimizer_2escm",(void*)f_10500},
{"f_5162:optimizer_2escm",(void*)f_5162},
{"f_5506:optimizer_2escm",(void*)f_5506},
{"f_5500:optimizer_2escm",(void*)f_5500},
{"f_5194:optimizer_2escm",(void*)f_5194},
{"f_5183:optimizer_2escm",(void*)f_5183},
{"f_5186:optimizer_2escm",(void*)f_5186},
{"f_5185:optimizer_2escm",(void*)f_5185},
{"f_5519:optimizer_2escm",(void*)f_5519},
{"f_5512:optimizer_2escm",(void*)f_5512},
{"f_5514:optimizer_2escm",(void*)f_5514},
{"f_7343:optimizer_2escm",(void*)f_7343},
{"f_10012:optimizer_2escm",(void*)f_10012},
{"f_10014:optimizer_2escm",(void*)f_10014},
{"f_10016:optimizer_2escm",(void*)f_10016},
{"f_5541:optimizer_2escm",(void*)f_5541},
{"f_10576:optimizer_2escm",(void*)f_10576},
{"f_9384:optimizer_2escm",(void*)f_9384},
{"f_10565:optimizer_2escm",(void*)f_10565},
{"f_5535:optimizer_2escm",(void*)f_5535},
{"f_7323:optimizer_2escm",(void*)f_7323},
{"f_7329:optimizer_2escm",(void*)f_7329},
{"f_7337:optimizer_2escm",(void*)f_7337},
{"f_5551:optimizer_2escm",(void*)f_5551},
{"f_11526:optimizer_2escm",(void*)f_11526},
{"f_11523:optimizer_2escm",(void*)f_11523},
{"f_10585:optimizer_2escm",(void*)f_10585},
{"f_10971:optimizer_2escm",(void*)f_10971},
{"f_7302:optimizer_2escm",(void*)f_7302},
{"f_10977:optimizer_2escm",(void*)f_10977},
{"f_7309:optimizer_2escm",(void*)f_7309},
{"f_7308:optimizer_2escm",(void*)f_7308},
{"f_5581:optimizer_2escm",(void*)f_5581},
{"f_11515:optimizer_2escm",(void*)f_11515},
{"f_5587:optimizer_2escm",(void*)f_5587},
{"f_6702:optimizer_2escm",(void*)f_6702},
{"f_7475:optimizer_2escm",(void*)f_7475},
{"f_5118:optimizer_2escm",(void*)f_5118},
{"f_5116:optimizer_2escm",(void*)f_5116},
{"f_5110:optimizer_2escm",(void*)f_5110},
{"f_5576:optimizer_2escm",(void*)f_5576},
{"f_9801:optimizer_2escm",(void*)f_9801},
{"f_9803:optimizer_2escm",(void*)f_9803},
{"f_5570:optimizer_2escm",(void*)f_5570},
{"f_11546:optimizer_2escm",(void*)f_11546},
{"f_9809:optimizer_2escm",(void*)f_9809},
{"f_10996:optimizer_2escm",(void*)f_10996},
{"f_11540:optimizer_2escm",(void*)f_11540},
{"f_10994:optimizer_2escm",(void*)f_10994},
{"f_5028:optimizer_2escm",(void*)f_5028},
{"f_5022:optimizer_2escm",(void*)f_5022},
{"f_6493:optimizer_2escm",(void*)f_6493},
{"f_5020:optimizer_2escm",(void*)f_5020},
{"f_5100:optimizer_2escm",(void*)f_5100},
{"f_6495:optimizer_2escm",(void*)f_6495},
{"f_9398:optimizer_2escm",(void*)f_9398},
{"f_11539:optimizer_2escm",(void*)f_11539},
{"f_8395:optimizer_2escm",(void*)f_8395},
{"f_5525:optimizer_2escm",(void*)f_5525},
{"f_11532:optimizer_2escm",(void*)f_11532},
{"f_11533:optimizer_2escm",(void*)f_11533},
{"f_6480:optimizer_2escm",(void*)f_6480},
{"f_7497:optimizer_2escm",(void*)f_7497},
{"f_6481:optimizer_2escm",(void*)f_6481},
{"f_5014:optimizer_2escm",(void*)f_5014},
{"f_3699:optimizer_2escm",(void*)f_3699},
{"f_6486:optimizer_2escm",(void*)f_6486},
{"f_9820:optimizer_2escm",(void*)f_9820},
{"f_11564:optimizer_2escm",(void*)f_11564},
{"f_8367:optimizer_2escm",(void*)f_8367},
{"f_9829:optimizer_2escm",(void*)f_9829},
{"f_5048:optimizer_2escm",(void*)f_5048},
{"f_10932:optimizer_2escm",(void*)f_10932},
{"f_5041:optimizer_2escm",(void*)f_5041},
{"f_10938:optimizer_2escm",(void*)f_10938},
{"f_6745:optimizer_2escm",(void*)f_6745},
{"f_5035:optimizer_2escm",(void*)f_5035},
{"f_5034:optimizer_2escm",(void*)f_5034},
{"f_10965:optimizer_2escm",(void*)f_10965},
{"f_9301:optimizer_2escm",(void*)f_9301},
{"f_10951:optimizer_2escm",(void*)f_10951},
{"f_10957:optimizer_2escm",(void*)f_10957},
{"f_9815:optimizer_2escm",(void*)f_9815},
{"f_5058:optimizer_2escm",(void*)f_5058},
{"f_5052:optimizer_2escm",(void*)f_5052},
{"f_10983:optimizer_2escm",(void*)f_10983},
{"f_10988:optimizer_2escm",(void*)f_10988},
{"f_8810:optimizer_2escm",(void*)f_8810},
{"f_4608:optimizer_2escm",(void*)f_4608},
{"f_8829:optimizer_2escm",(void*)f_8829},
{"f_4248:optimizer_2escm",(void*)f_4248},
{"f_8825:optimizer_2escm",(void*)f_8825},
{"f_8389:optimizer_2escm",(void*)f_8389},
{"f_8383:optimizer_2escm",(void*)f_8383},
{"f_4629:optimizer_2escm",(void*)f_4629},
{"f_8801:optimizer_2escm",(void*)f_8801},
{"f_4614:optimizer_2escm",(void*)f_4614},
{"f_9975:optimizer_2escm",(void*)f_9975},
{"f_4256:optimizer_2escm",(void*)f_4256},
{"f_4644:optimizer_2escm",(void*)f_4644},
{"f_4649:optimizer_2escm",(void*)f_4649},
{"f_9982:optimizer_2escm",(void*)f_9982},
{"f_9988:optimizer_2escm",(void*)f_9988},
{"f_9981:optimizer_2escm",(void*)f_9981},
{"f_4634:optimizer_2escm",(void*)f_4634},
{"f_4639:optimizer_2escm",(void*)f_4639},
{"f_7409:optimizer_2escm",(void*)f_7409},
{"f_9957:optimizer_2escm",(void*)f_9957},
{"f_9958:optimizer_2escm",(void*)f_9958},
{"f_9951:optimizer_2escm",(void*)f_9951},
{"f_9950:optimizer_2escm",(void*)f_9950},
{"f_7403:optimizer_2escm",(void*)f_7403},
{"f_3995:optimizer_2escm",(void*)f_3995},
{"f_3983:optimizer_2escm",(void*)f_3983},
{"f_9964:optimizer_2escm",(void*)f_9964},
{"f_3989:optimizer_2escm",(void*)f_3989},
{"f_4655:optimizer_2escm",(void*)f_4655},
{"f_4654:optimizer_2escm",(void*)f_4654},
{"f_3973:optimizer_2escm",(void*)f_3973},
{"f_3970:optimizer_2escm",(void*)f_3970},
{"f_6835:optimizer_2escm",(void*)f_6835},
{"f_3977:optimizer_2escm",(void*)f_3977},
{"f_4685:optimizer_2escm",(void*)f_4685},
{"f_9944:optimizer_2escm",(void*)f_9944},
{"f_9941:optimizer_2escm",(void*)f_9941},
{"f_4670:optimizer_2escm",(void*)f_4670},
{"f_7469:optimizer_2escm",(void*)f_7469},
{"f_6791:optimizer_2escm",(void*)f_6791},
{"f_6795:optimizer_2escm",(void*)f_6795},
{"f_8549:optimizer_2escm",(void*)f_8549},
{"f_10617:optimizer_2escm",(void*)f_10617},
{"f_10616:optimizer_2escm",(void*)f_10616},
{"f_10614:optimizer_2escm",(void*)f_10614},
{"f_8555:optimizer_2escm",(void*)f_8555},
{"f_8556:optimizer_2escm",(void*)f_8556},
{"f_6468:optimizer_2escm",(void*)f_6468},
{"f_11586:optimizer_2escm",(void*)f_11586},
{"f_11587:optimizer_2escm",(void*)f_11587},
{"f_11580:optimizer_2escm",(void*)f_11580},
{"f_10608:optimizer_2escm",(void*)f_10608},
{"f_10607:optimizer_2escm",(void*)f_10607},
{"f_10605:optimizer_2escm",(void*)f_10605},
{"f_5064:optimizer_2escm",(void*)f_5064},
{"f_5066:optimizer_2escm",(void*)f_5066},
{"f_5067:optimizer_2escm",(void*)f_5067},
{"f_6451:optimizer_2escm",(void*)f_6451},
{"f_7482:optimizer_2escm",(void*)f_7482},
{"f_6456:optimizer_2escm",(void*)f_6456},
{"f_11579:optimizer_2escm",(void*)f_11579},
{"f_11573:optimizer_2escm",(void*)f_11573},
{"f_11570:optimizer_2escm",(void*)f_11570},
{"f_7451:optimizer_2escm",(void*)f_7451},
{"f_6445:optimizer_2escm",(void*)f_6445},
{"f_7421:optimizer_2escm",(void*)f_7421},
{"f_5080:optimizer_2escm",(void*)f_5080},
{"f_5085:optimizer_2escm",(void*)f_5085},
{"f_5088:optimizer_2escm",(void*)f_5088},
{"f_6437:optimizer_2escm",(void*)f_6437},
{"f_7382:optimizer_2escm",(void*)f_7382},
{"f_7389:optimizer_2escm",(void*)f_7389},
{"f_7388:optimizer_2escm",(void*)f_7388},
{"f_11593:optimizer_2escm",(void*)f_11593},
{"f_6789:optimizer_2escm",(void*)f_6789},
{"f_5076:optimizer_2escm",(void*)f_5076},
{"f_6425:optimizer_2escm",(void*)f_6425},
{"f_5078:optimizer_2escm",(void*)f_5078},
{"f_6428:optimizer_2escm",(void*)f_6428},
{"f_6429:optimizer_2escm",(void*)f_6429},
{"f_5912:optimizer_2escm",(void*)f_5912},
{"f_5918:optimizer_2escm",(void*)f_5918},
{"f_7445:optimizer_2escm",(void*)f_7445},
{"f_6417:optimizer_2escm",(void*)f_6417},
{"f_6722:optimizer_2escm",(void*)f_6722},
{"f_7415:optimizer_2escm",(void*)f_7415},
{"f_5092:optimizer_2escm",(void*)f_5092},
{"f_6407:optimizer_2escm",(void*)f_6407},
{"f_5098:optimizer_2escm",(void*)f_5098},
{"f_6713:optimizer_2escm",(void*)f_6713},
{"f_10661:optimizer_2escm",(void*)f_10661},
{"f_10669:optimizer_2escm",(void*)f_10669},
{"f_10663:optimizer_2escm",(void*)f_10663},
{"f_10696:optimizer_2escm",(void*)f_10696},
{"f_4274:optimizer_2escm",(void*)f_4274},
{"f_11949:optimizer_2escm",(void*)f_11949},
{"f_4273:optimizer_2escm",(void*)f_4273},
{"f_11937:optimizer_2escm",(void*)f_11937},
{"f_4296:optimizer_2escm",(void*)f_4296},
{"f_11968:optimizer_2escm",(void*)f_11968},
{"f_8584:optimizer_2escm",(void*)f_8584},
{"f_5006:optimizer_2escm",(void*)f_5006},
{"f_6756:optimizer_2escm",(void*)f_6756},
{"f_4290:optimizer_2escm",(void*)f_4290},
{"f_5003:optimizer_2escm",(void*)f_5003},
{"f_8582:optimizer_2escm",(void*)f_8582},
{"f_10536:optimizer_2escm",(void*)f_10536},
{"f_11955:optimizer_2escm",(void*)f_11955},
{"f_6327:optimizer_2escm",(void*)f_6327},
{"f_6322:optimizer_2escm",(void*)f_6322},
{"f_8592:optimizer_2escm",(void*)f_8592},
{"f_10520:optimizer_2escm",(void*)f_10520},
{"f_11983:optimizer_2escm",(void*)f_11983},
{"f_11986:optimizer_2escm",(void*)f_11986},
{"f_11980:optimizer_2escm",(void*)f_11980},
{"f_6316:optimizer_2escm",(void*)f_6316},
{"f_10557:optimizer_2escm",(void*)f_10557},
{"f_4264:optimizer_2escm",(void*)f_4264},
{"f_4268:optimizer_2escm",(void*)f_4268},
{"f_6346:optimizer_2escm",(void*)f_6346},
{"f_10542:optimizer_2escm",(void*)f_10542},
{"f_10549:optimizer_2escm",(void*)f_10549},
{"f_10105:optimizer_2escm",(void*)f_10105},
{"f_6337:optimizer_2escm",(void*)f_6337},
{"f_7982:optimizer_2escm",(void*)f_7982},
{"f_10175:optimizer_2escm",(void*)f_10175},
{"f_4202:optimizer_2escm",(void*)f_4202},
{"f_11993:optimizer_2escm",(void*)f_11993},
{"f_7997:optimizer_2escm",(void*)f_7997},
{"f_6357:optimizer_2escm",(void*)f_6357},
{"f_10195:optimizer_2escm",(void*)f_10195},
{"f_7976:optimizer_2escm",(void*)f_7976},
{"f_6954:optimizer_2escm",(void*)f_6954},
{"f_6952:optimizer_2escm",(void*)f_6952},
{"f_8506:optimizer_2escm",(void*)f_8506},
{"f_8508:optimizer_2escm",(void*)f_8508},
{"f_8500:optimizer_2escm",(void*)f_8500},
{"f_6946:optimizer_2escm",(void*)f_6946},
{"f_7946:optimizer_2escm",(void*)f_7946},
{"f_6944:optimizer_2escm",(void*)f_6944},
{"f_7940:optimizer_2escm",(void*)f_7940},
{"f_10132:optimizer_2escm",(void*)f_10132},
{"f_10130:optimizer_2escm",(void*)f_10130},
{"f_8514:optimizer_2escm",(void*)f_8514},
{"f_12085:optimizer_2escm",(void*)f_12085},
{"f_12080:optimizer_2escm",(void*)f_12080},
{"f_6976:optimizer_2escm",(void*)f_6976},
{"f_6970:optimizer_2escm",(void*)f_6970},
{"f_12074:optimizer_2escm",(void*)f_12074},
{"f_7926:optimizer_2escm",(void*)f_7926},
{"f_6968:optimizer_2escm",(void*)f_6968},
{"f_6960:optimizer_2escm",(void*)f_6960},
{"f_6962:optimizer_2escm",(void*)f_6962},
{"f_10153:optimizer_2escm",(void*)f_10153},
{"f_8576:optimizer_2escm",(void*)f_8576},
{"f_8570:optimizer_2escm",(void*)f_8570},
{"f_7938:optimizer_2escm",(void*)f_7938},
{"f_7935:optimizer_2escm",(void*)f_7935},
{"f_10186:optimizer_2escm",(void*)f_10186},
{"f_7916:optimizer_2escm",(void*)f_7916},
{"f_7910:optimizer_2escm",(void*)f_7910},
{"f_3652:optimizer_2escm",(void*)f_3652},
{"f_6929:optimizer_2escm",(void*)f_6929},
{"f_3658:optimizer_2escm",(void*)f_3658},
{"f_10147:optimizer_2escm",(void*)f_10147},
{"f_8447:optimizer_2escm",(void*)f_8447},
{"f_9765:optimizer_2escm",(void*)f_9765},
{"f_6507:optimizer_2escm",(void*)f_6507},
{"f_3630:optimizer_2escm",(void*)f_3630},
{"f_9762:optimizer_2escm",(void*)f_9762},
{"f_3624:optimizer_2escm",(void*)f_3624},
{"f_9736:optimizer_2escm",(void*)f_9736},
{"f_3622:optimizer_2escm",(void*)f_3622},
{"f_8417:optimizer_2escm",(void*)f_8417},
{"f_9730:optimizer_2escm",(void*)f_9730},
{"f_12000:optimizer_2escm",(void*)f_12000},
{"f_3637:optimizer_2escm",(void*)f_3637},
{"f_8424:optimizer_2escm",(void*)f_8424},
{"f_3626:optimizer_2escm",(void*)f_3626},
{"f_9795:optimizer_2escm",(void*)f_9795},
{"f_9790:optimizer_2escm",(void*)f_9790},
{"f_9772:optimizer_2escm",(void*)f_9772},
{"f_6533:optimizer_2escm",(void*)f_6533},
{"f_6535:optimizer_2escm",(void*)f_6535},
{"f_9778:optimizer_2escm",(void*)f_9778},
{"f_6531:optimizer_2escm",(void*)f_6531},
{"f_6363:optimizer_2escm",(void*)f_6363},
{"f_6365:optimizer_2escm",(void*)f_6365},
{"f_6367:optimizer_2escm",(void*)f_6367},
{"f_6369:optimizer_2escm",(void*)f_6369},
{"f_4798:optimizer_2escm",(void*)f_4798},
{"f_11080:optimizer_2escm",(void*)f_11080},
{"f_11082:optimizer_2escm",(void*)f_11082},
{"f_6562:optimizer_2escm",(void*)f_6562},
{"f_9782:optimizer_2escm",(void*)f_9782},
{"f_9785:optimizer_2escm",(void*)f_9785},
{"f_9784:optimizer_2escm",(void*)f_9784},
{"f_6567:optimizer_2escm",(void*)f_6567},
{"f_9780:optimizer_2escm",(void*)f_9780},
{"f_11096:optimizer_2escm",(void*)f_11096},
{"f_11098:optimizer_2escm",(void*)f_11098},
{"f_6551:optimizer_2escm",(void*)f_6551},
{"f_6380:optimizer_2escm",(void*)f_6380},
{"f_6386:optimizer_2escm",(void*)f_6386},
{"f_11088:optimizer_2escm",(void*)f_11088},
{"f_11061:optimizer_2escm",(void*)f_11061},
{"f_6587:optimizer_2escm",(void*)f_6587},
{"f_6589:optimizer_2escm",(void*)f_6589},
{"f_6378:optimizer_2escm",(void*)f_6378},
{"f_11074:optimizer_2escm",(void*)f_11074},
{"f_5801:optimizer_2escm",(void*)f_5801},
{"f_11064:optimizer_2escm",(void*)f_11064},
{"f_6521:optimizer_2escm",(void*)f_6521},
{"f_11055:optimizer_2escm",(void*)f_11055},
{"f_6516:optimizer_2escm",(void*)f_6516},
{"f_5405:optimizer_2escm",(void*)f_5405},
{"f_11021:optimizer_2escm",(void*)f_11021},
{"f_6543:optimizer_2escm",(void*)f_6543},
{"f_11036:optimizer_2escm",(void*)f_11036},
{"f_11039:optimizer_2escm",(void*)f_11039},
{"f_11010:optimizer_2escm",(void*)f_11010},
{"f_5412:optimizer_2escm",(void*)f_5412},
{"f_10111:optimizer_2escm",(void*)f_10111},
{"f_6308:optimizer_2escm",(void*)f_6308},
{"f_5448:optimizer_2escm",(void*)f_5448},
{"f_11005:optimizer_2escm",(void*)f_11005},
{"f_11002:optimizer_2escm",(void*)f_11002},
{"f_10623:optimizer_2escm",(void*)f_10623},
{"f_10629:optimizer_2escm",(void*)f_10629},
{"f_5436:optimizer_2escm",(void*)f_5436},
{"f_10650:optimizer_2escm",(void*)f_10650},
{"f_10655:optimizer_2escm",(void*)f_10655},
{"f_5460:optimizer_2escm",(void*)f_5460},
{"f_5461:optimizer_2escm",(void*)f_5461},
{"f_5467:optimizer_2escm",(void*)f_5467},
{"f_10641:optimizer_2escm",(void*)f_10641},
{"f_6693:optimizer_2escm",(void*)f_6693},
{"f_5349:optimizer_2escm",(void*)f_5349},
{"f_5341:optimizer_2escm",(void*)f_5341},
{"f_5343:optimizer_2escm",(void*)f_5343},
{"f_5454:optimizer_2escm",(void*)f_5454},
{"f_10671:optimizer_2escm",(void*)f_10671},
{"f_5336:optimizer_2escm",(void*)f_5336},
{"f_5331:optimizer_2escm",(void*)f_5331},
{"f_8486:optimizer_2escm",(void*)f_8486},
{"f_10288:optimizer_2escm",(void*)f_10288},
{"f_12094:optimizer_2escm",(void*)f_12094},
{"f_12098:optimizer_2escm",(void*)f_12098},
{"f_10280:optimizer_2escm",(void*)f_10280},
{"f_5355:optimizer_2escm",(void*)f_5355},
{"f_10278:optimizer_2escm",(void*)f_10278},
{"f_5357:optimizer_2escm",(void*)f_5357},
{"f_8464:optimizer_2escm",(void*)f_8464},
{"f_8466:optimizer_2escm",(void*)f_8466},
{"f_8462:optimizer_2escm",(void*)f_8462},
{"f_10636:optimizer_2escm",(void*)f_10636},
{"f_10292:optimizer_2escm",(void*)f_10292},
{"f_10296:optimizer_2escm",(void*)f_10296},
{"f_10290:optimizer_2escm",(void*)f_10290},
{"f_10241:optimizer_2escm",(void*)f_10241},
{"f_5320:optimizer_2escm",(void*)f_5320},
{"f_9538:optimizer_2escm",(void*)f_9538},
{"f_9533:optimizer_2escm",(void*)f_9533},
{"f_4346:optimizer_2escm",(void*)f_4346},
{"f_4348:optimizer_2escm",(void*)f_4348},
{"f_4343:optimizer_2escm",(void*)f_4343},
{"f_10235:optimizer_2escm",(void*)f_10235},
{"f_4326:optimizer_2escm",(void*)f_4326},
{"f_5931:optimizer_2escm",(void*)f_5931},
{"f_4320:optimizer_2escm",(void*)f_4320},
{"f_4737:optimizer_2escm",(void*)f_4737},
{"f_8402:optimizer_2escm",(void*)f_8402},
{"f_4356:optimizer_2escm",(void*)f_4356},
{"f_4353:optimizer_2escm",(void*)f_4353},
{"f_5927:optimizer_2escm",(void*)f_5927},
{"f_4722:optimizer_2escm",(void*)f_4722},
{"f_4721:optimizer_2escm",(void*)f_4721},
{"f_9191:optimizer_2escm",(void*)f_9191},
{"f_5951:optimizer_2escm",(void*)f_5951},
{"f_4716:optimizer_2escm",(void*)f_4716},
{"f_9546:optimizer_2escm",(void*)f_9546},
{"f_7707:optimizer_2escm",(void*)f_7707},
{"f_4711:optimizer_2escm",(void*)f_4711},
{"f_7706:optimizer_2escm",(void*)f_7706},
{"f_9544:optimizer_2escm",(void*)f_9544},
{"f_4339:optimizer_2escm",(void*)f_4339},
{"f_4335:optimizer_2escm",(void*)f_4335},
{"f_5945:optimizer_2escm",(void*)f_5945},
{"f_4788:optimizer_2escm",(void*)f_4788},
{"f_5940:optimizer_2escm",(void*)f_5940},
{"f_9552:optimizer_2escm",(void*)f_9552},
{"f_4782:optimizer_2escm",(void*)f_4782},
{"f_6603:optimizer_2escm",(void*)f_6603},
{"f_5975:optimizer_2escm",(void*)f_5975},
{"f_5978:optimizer_2escm",(void*)f_5978},
{"f_5970:optimizer_2escm",(void*)f_5970},
{"f_9527:optimizer_2escm",(void*)f_9527},
{"f_9525:optimizer_2escm",(void*)f_9525},
{"f_6609:optimizer_2escm",(void*)f_6609},
{"f_4752:optimizer_2escm",(void*)f_4752},
{"f_5986:optimizer_2escm",(void*)f_5986},
{"f_5988:optimizer_2escm",(void*)f_5988},
{"f_5982:optimizer_2escm",(void*)f_5982},
{"f_5984:optimizer_2escm",(void*)f_5984},
{"f_5980:optimizer_2escm",(void*)f_5980},
{"f_7722:optimizer_2escm",(void*)f_7722},
{"f_7728:optimizer_2escm",(void*)f_7728},
{"f_6673:optimizer_2escm",(void*)f_6673},
{"f_7773:optimizer_2escm",(void*)f_7773},
{"f_7779:optimizer_2escm",(void*)f_7779},
{"f_11090:optimizer_2escm",(void*)f_11090},
{"f_3797:optimizer_2escm",(void*)f_3797},
{"f_3869:optimizer_2escm",(void*)f_3869},
{"f_7789:optimizer_2escm",(void*)f_7789},
{"f_7788:optimizer_2escm",(void*)f_7788},
{"f_10715:optimizer_2escm",(void*)f_10715},
{"f_6651:optimizer_2escm",(void*)f_6651},
{"f_3863:optimizer_2escm",(void*)f_3863},
{"f_10709:optimizer_2escm",(void*)f_10709},
{"f_10707:optimizer_2escm",(void*)f_10707},
{"f_10701:optimizer_2escm",(void*)f_10701},
{"f_6682:optimizer_2escm",(void*)f_6682},
{"f_3771:optimizer_2escm",(void*)f_3771},
{"f_3773:optimizer_2escm",(void*)f_3773},
{"f_3777:optimizer_2escm",(void*)f_3777},
{"f_6636:optimizer_2escm",(void*)f_6636},
{"f_6630:optimizer_2escm",(void*)f_6630},
{"f_7731:optimizer_2escm",(void*)f_7731},
{"f_8293:optimizer_2escm",(void*)f_8293},
{"f_11304:optimizer_2escm",(void*)f_11304},
{"f_5393:optimizer_2escm",(void*)f_5393},
{"f_5399:optimizer_2escm",(void*)f_5399},
{"f_9580:optimizer_2escm",(void*)f_9580},
{"f_6612:optimizer_2escm",(void*)f_6612},
{"f_6614:optimizer_2escm",(void*)f_6614},
{"f_6616:optimizer_2escm",(void*)f_6616},
{"f_8299:optimizer_2escm",(void*)f_8299},
{"f_8272:optimizer_2escm",(void*)f_8272},
{"f_8188:optimizer_2escm",(void*)f_8188},
{"f_10771:optimizer_2escm",(void*)f_10771},
{"f_10777:optimizer_2escm",(void*)f_10777},
{"f_8278:optimizer_2escm",(void*)f_8278},
{"f_8279:optimizer_2escm",(void*)f_8279},
{"f_7608:optimizer_2escm",(void*)f_7608},
{"f_5366:optimizer_2escm",(void*)f_5366},
{"f_5368:optimizer_2escm",(void*)f_5368},
{"f_8194:optimizer_2escm",(void*)f_8194},
{"f_10762:optimizer_2escm",(void*)f_10762},
{"f_11349:optimizer_2escm",(void*)f_11349},
{"f_10768:optimizer_2escm",(void*)f_10768},
{"f_11346:optimizer_2escm",(void*)f_11346},
{"f_10765:optimizer_2escm",(void*)f_10765},
{"f_4384:optimizer_2escm",(void*)f_4384},
{"f_11340:optimizer_2escm",(void*)f_11340},
{"f_10799:optimizer_2escm",(void*)f_10799},
{"f_10793:optimizer_2escm",(void*)f_10793},
{"f_10220:optimizer_2escm",(void*)f_10220},
{"f_10785:optimizer_2escm",(void*)f_10785},
{"f_4369:optimizer_2escm",(void*)f_4369},
{"f_7638:optimizer_2escm",(void*)f_7638},
{"f_10211:optimizer_2escm",(void*)f_10211},
{"f_4362:optimizer_2escm",(void*)f_4362},
{"f_4363:optimizer_2escm",(void*)f_4363},
{"f_11316:optimizer_2escm",(void*)f_11316},
{"f_11318:optimizer_2escm",(void*)f_11318},
{"f_4394:optimizer_2escm",(void*)f_4394},
{"f_11310:optimizer_2escm",(void*)f_11310},
{"f_4390:optimizer_2escm",(void*)f_4390},
{"f_9154:optimizer_2escm",(void*)f_9154},
{"f_9159:optimizer_2escm",(void*)f_9159},
{"f_11382:optimizer_2escm",(void*)f_11382},
{"f_7152:optimizer_2escm",(void*)f_7152},
{"f_5318:optimizer_2escm",(void*)f_5318},
{"f_9247:optimizer_2escm",(void*)f_9247},
{"f_9240:optimizer_2escm",(void*)f_9240},
{"f_6024:optimizer_2escm",(void*)f_6024},
{"f_6021:optimizer_2escm",(void*)f_6021},
{"f_9244:optimizer_2escm",(void*)f_9244},
{"f_6020:optimizer_2escm",(void*)f_6020},
{"f_7159:optimizer_2escm",(void*)f_7159},
{"f_7158:optimizer_2escm",(void*)f_7158},
{"f_9165:optimizer_2escm",(void*)f_9165},
{"f_4376:optimizer_2escm",(void*)f_4376},
{"f_5225:optimizer_2escm",(void*)f_5225},
{"f_9254:optimizer_2escm",(void*)f_9254},
{"f_9253:optimizer_2escm",(void*)f_9253},
{"f_7888:optimizer_2escm",(void*)f_7888},
{"f_4370:optimizer_2escm",(void*)f_4370},
{"f_7885:optimizer_2escm",(void*)f_7885},
{"f_9519:optimizer_2escm",(void*)f_9519},
{"f_5257:optimizer_2escm",(void*)f_5257},
{"f_9261:optimizer_2escm",(void*)f_9261},
{"f_9260:optimizer_2escm",(void*)f_9260},
{"f_9267:optimizer_2escm",(void*)f_9267},
{"f_9148:optimizer_2escm",(void*)f_9148},
{"f_5241:optimizer_2escm",(void*)f_5241},
{"f_5242:optimizer_2escm",(void*)f_5242},
{"f_4302:optimizer_2escm",(void*)f_4302},
{"f_9204:optimizer_2escm",(void*)f_9204},
{"f_11378:optimizer_2escm",(void*)f_11378},
{"f_9214:optimizer_2escm",(void*)f_9214},
{"f_6050:optimizer_2escm",(void*)f_6050},
{"f_5792:optimizer_2escm",(void*)f_5792},
{"f_5790:optimizer_2escm",(void*)f_5790},
{"f_6059:optimizer_2escm",(void*)f_6059},
{"f_9223:optimizer_2escm",(void*)f_9223},
{"f_11394:optimizer_2escm",(void*)f_11394},
{"f_11396:optimizer_2escm",(void*)f_11396},
{"f_9107:optimizer_2escm",(void*)f_9107},
{"f_9102:optimizer_2escm",(void*)f_9102},
{"f_4316:optimizer_2escm",(void*)f_4316},
{"f_4310:optimizer_2escm",(void*)f_4310},
{"f_7860:optimizer_2escm",(void*)f_7860},
{"f_5235:optimizer_2escm",(void*)f_5235},
{"f_5231:optimizer_2escm",(void*)f_5231},
{"f_7873:optimizer_2escm",(void*)f_7873},
{"f_9883:optimizer_2escm",(void*)f_9883},
{"f_9889:optimizer_2escm",(void*)f_9889},
{"f_9881:optimizer_2escm",(void*)f_9881},
{"f_7804:optimizer_2escm",(void*)f_7804},
{"f_7801:optimizer_2escm",(void*)f_7801},
{"f_7692:optimizer_2escm",(void*)f_7692},
{"f_7180:optimizer_2escm",(void*)f_7180},
{"f_9873:optimizer_2escm",(void*)f_9873},
{"f_9875:optimizer_2escm",(void*)f_9875},
{"f_7698:optimizer_2escm",(void*)f_7698},
{"f_7837:optimizer_2escm",(void*)f_7837},
{"f_8167:optimizer_2escm",(void*)f_8167},
{"f_7831:optimizer_2escm",(void*)f_7831},
{"f_9842:optimizer_2escm",(void*)f_9842},
{"f_8161:optimizer_2escm",(void*)f_8161},
{"f_9840:optimizer_2escm",(void*)f_9840},
{"f_8174:optimizer_2escm",(void*)f_8174},
{"f_9897:optimizer_2escm",(void*)f_9897},
{"f_9891:optimizer_2escm",(void*)f_9891},
{"f_8146:optimizer_2escm",(void*)f_8146},
{"f_9867:optimizer_2escm",(void*)f_9867},
{"f_9865:optimizer_2escm",(void*)f_9865},
{"f_11337:optimizer_2escm",(void*)f_11337},
{"f_11331:optimizer_2escm",(void*)f_11331},
{"f_4490:optimizer_2escm",(void*)f_4490},
{"f_4493:optimizer_2escm",(void*)f_4493},
{"f_6091:optimizer_2escm",(void*)f_6091},
{"f_6093:optimizer_2escm",(void*)f_6093},
{"f_6095:optimizer_2escm",(void*)f_6095},
{"f_9859:optimizer_2escm",(void*)f_9859},
{"f_11320:optimizer_2escm",(void*)f_11320},
{"f_8200:optimizer_2escm",(void*)f_8200},
{"f_6080:optimizer_2escm",(void*)f_6080},
{"f_6085:optimizer_2escm",(void*)f_6085},
{"f_8105:optimizer_2escm",(void*)f_8105},
{"f_7613:optimizer_2escm",(void*)f_7613},
{"f_11352:optimizer_2escm",(void*)f_11352},
{"f_7101:optimizer_2escm",(void*)f_7101},
{"f_6076:optimizer_2escm",(void*)f_6076},
{"f_7107:optimizer_2escm",(void*)f_7107},
{"f_7116:optimizer_2escm",(void*)f_7116},
{"f_5260:optimizer_2escm",(void*)f_5260},
{"f_10815:optimizer_2escm",(void*)f_10815},
{"f_4832:optimizer_2escm",(void*)f_4832},
{"f_7174:optimizer_2escm",(void*)f_7174},
{"f_4808:optimizer_2escm",(void*)f_4808},
{"f_4807:optimizer_2escm",(void*)f_4807},
{"f_10806:optimizer_2escm",(void*)f_10806},
{"f_4823:optimizer_2escm",(void*)f_4823},
{"f_4820:optimizer_2escm",(void*)f_4820},
{"f_4838:optimizer_2escm",(void*)f_4838},
{"f_10832:optimizer_2escm",(void*)f_10832},
{"f_4851:optimizer_2escm",(void*)f_4851},
{"f_4843:optimizer_2escm",(void*)f_4843},
{"f_6017:optimizer_2escm",(void*)f_6017},
{"f_8751:optimizer_2escm",(void*)f_8751},
{"f_8759:optimizer_2escm",(void*)f_8759},
{"f_4873:optimizer_2escm",(void*)f_4873},
{"f_8757:optimizer_2escm",(void*)f_8757},
{"f_4849:optimizer_2escm",(void*)f_4849},
{"f_5701:optimizer_2escm",(void*)f_5701},
{"f_7231:optimizer_2escm",(void*)f_7231},
{"f_4860:optimizer_2escm",(void*)f_4860},
{"f_8765:optimizer_2escm",(void*)f_8765},
{"f_4879:optimizer_2escm",(void*)f_4879},
{"f_11709:optimizer_2escm",(void*)f_11709},
{"f_5272:optimizer_2escm",(void*)f_5272},
{"f_8737:optimizer_2escm",(void*)f_8737},
{"f_11235:optimizer_2escm",(void*)f_11235},
{"f_5727:optimizer_2escm",(void*)f_5727},
{"f_7251:optimizer_2escm",(void*)f_7251},
{"f_4884:optimizer_2escm",(void*)f_4884},
{"toplevel:optimizer_2escm",(void*)C_optimizer_toplevel},
{"f_7245:optimizer_2escm",(void*)f_7245},
{"f_8795:optimizer_2escm",(void*)f_8795},
{"f_5219:optimizer_2escm",(void*)f_5219},
{"f_10731:optimizer_2escm",(void*)f_10731},
{"f_10730:optimizer_2escm",(void*)f_10730},
{"f_10735:optimizer_2escm",(void*)f_10735},
{"f_10734:optimizer_2escm",(void*)f_10734},
{"f_11219:optimizer_2escm",(void*)f_11219},
{"f_5741:optimizer_2escm",(void*)f_5741},
{"f_11717:optimizer_2escm",(void*)f_11717},
{"f_11715:optimizer_2escm",(void*)f_11715},
{"f_10720:optimizer_2escm",(void*)f_10720},
{"f_10722:optimizer_2escm",(void*)f_10722},
{"f_10724:optimizer_2escm",(void*)f_10724},
{"f_10726:optimizer_2escm",(void*)f_10726},
{"f_10728:optimizer_2escm",(void*)f_10728},
{"f_5731:optimizer_2escm",(void*)f_5731},
{"f_5732:optimizer_2escm",(void*)f_5732},
{"f_11741:optimizer_2escm",(void*)f_11741},
{"f_10753:optimizer_2escm",(void*)f_10753},
{"f_10751:optimizer_2escm",(void*)f_10751},
{"f_10759:optimizer_2escm",(void*)f_10759},
{"f_5765:optimizer_2escm",(void*)f_5765},
{"f_5769:optimizer_2escm",(void*)f_5769},
{"f_11735:optimizer_2escm",(void*)f_11735},
{"f_10745:optimizer_2escm",(void*)f_10745},
{"f_5753:optimizer_2escm",(void*)f_5753},
{"f_5750:optimizer_2escm",(void*)f_5750},
{"f_11769:optimizer_2escm",(void*)f_11769},
{"f_6136:optimizer_2escm",(void*)f_6136},
{"f_6131:optimizer_2escm",(void*)f_6131},
{"f_11763:optimizer_2escm",(void*)f_11763},
{"f_5783:optimizer_2escm",(void*)f_5783},
{"f_5895:optimizer_2escm",(void*)f_5895},
{"f_10374:optimizer_2escm",(void*)f_10374},
{"f_5892:optimizer_2escm",(void*)f_5892},
{"f_6125:optimizer_2escm",(void*)f_6125},
{"f_6123:optimizer_2escm",(void*)f_6123},
{"f_11287:optimizer_2escm",(void*)f_11287},
{"f_5770:optimizer_2escm",(void*)f_5770},
{"f_11853:optimizer_2escm",(void*)f_11853},
{"f_5777:optimizer_2escm",(void*)f_5777},
{"f_6158:optimizer_2escm",(void*)f_6158},
{"f_6152:optimizer_2escm",(void*)f_6152},
{"f_11865:optimizer_2escm",(void*)f_11865},
{"f_11868:optimizer_2escm",(void*)f_11868},
{"f_10392:optimizer_2escm",(void*)f_10392},
{"f_6148:optimizer_2escm",(void*)f_6148},
{"f_6142:optimizer_2escm",(void*)f_6142},
{"f_11267:optimizer_2escm",(void*)f_11267},
{"f_11846:optimizer_2escm",(void*)f_11846},
{"f_9445:optimizer_2escm",(void*)f_9445},
{"f_9440:optimizer_2escm",(void*)f_9440},
{"f_10335:optimizer_2escm",(void*)f_10335},
{"f_11290:optimizer_2escm",(void*)f_11290},
{"f_4030:optimizer_2escm",(void*)f_4030},
{"f_11834:optimizer_2escm",(void*)f_11834},
{"f_4408:optimizer_2escm",(void*)f_4408},
{"f_4402:optimizer_2escm",(void*)f_4402},
{"f_4003:optimizer_2escm",(void*)f_4003},
{"f_4009:optimizer_2escm",(void*)f_4009},
{"f_4411:optimizer_2escm",(void*)f_4411},
{"f_4155:optimizer_2escm",(void*)f_4155},
{"f_10354:optimizer_2escm",(void*)f_10354},
{"f_10351:optimizer_2escm",(void*)f_10351},
{"f_4039:optimizer_2escm",(void*)f_4039},
{"f_4050:optimizer_2escm",(void*)f_4050},
{"f_4148:optimizer_2escm",(void*)f_4148},
{"f_4441:optimizer_2escm",(void*)f_4441},
{"f_10349:optimizer_2escm",(void*)f_10349},
{"f_10341:optimizer_2escm",(void*)f_10341},
{"f_10343:optimizer_2escm",(void*)f_10343},
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
S|  o		1
S|  map		12
S|  for-each		20
o|eliminated procedure checks: 280 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (set-car! pair *)
o|  2 (cddr (pair * pair))
o|  1 (length list)
o|  1 (<= fixnum fixnum)
o|  1 (positive? fixnum)
o|  3 (third (pair * (pair * pair)))
o|  1 (fourth (pair * (pair * (pair * pair))))
o|  1 (eqv? (not float) *)
o|  1 (< fixnum fixnum)
o|  7 (second (pair * pair))
o|  1 (cdar (pair pair *))
o|  17 (= fixnum fixnum)
o|  2 (set-cdr! pair *)
o|  29 (cdr pair)
o|  13 (##sys#check-list (or pair list) *)
o|  14 (car pair)
o|  32 (first pair)
o|  64 (eqv? * (not float))
o|safe globals: (##compiler#scan-toplevel-assignments) 
o|Removed `not' forms: 31 
o|inlining procedure: k3633 
o|inlining procedure: k3633 
o|contracted procedure: k3642 
o|inlining procedure: k3682 
o|inlining procedure: k3682 
o|inlining procedure: k3723 
o|inlining procedure: k3723 
o|inlining procedure: k3790 
o|inlining procedure: k3790 
o|inlining procedure: k3818 
o|inlining procedure: k3818 
o|inlining procedure: k3843 
o|inlining procedure: k3843 
o|substituted constant variable: a3880 
o|substituted constant variable: a3882 
o|substituted constant variable: a3887 
o|substituted constant variable: a3889 
o|substituted constant variable: a3891 
o|inlining procedure: k3894 
o|inlining procedure: k3894 
o|substituted constant variable: a3901 
o|substituted constant variable: a3903 
o|substituted constant variable: a3905 
o|substituted constant variable: a3907 
o|inlining procedure: k3942 
o|inlining procedure: k3942 
o|inlining procedure: k4033 
o|inlining procedure: k4033 
o|inlining procedure: k4058 
o|inlining procedure: k4058 
o|inlining procedure: k4069 
o|inlining procedure: k4079 
o|inlining procedure: k4079 
o|inlining procedure: k4126 
o|inlining procedure: k4126 
o|inlining procedure: k4069 
o|inlining procedure: k4166 
o|inlining procedure: k4166 
o|inlining procedure: k4191 
o|inlining procedure: k4213 
o|inlining procedure: k4213 
o|contracted procedure: "(optimizer.scm:180) node-value166" 
o|inlining procedure: k4191 
o|inlining procedure: k4235 
o|contracted procedure: k4260 
o|inlining procedure: k4258 
o|inlining procedure: k4258 
o|inlining procedure: k4297 
o|inlining procedure: k4297 
o|inlining procedure: k4235 
o|substituted constant variable: a4331 
o|substituted constant variable: a4333 
o|inlining procedure: k4340 
o|inlining procedure: k4340 
o|inlining procedure: k4377 
o|inlining procedure: k4412 
o|inlining procedure: k4436 
o|inlining procedure: k4436 
o|inlining procedure: k4412 
o|inlining procedure: k4377 
o|inlining procedure: k4486 
o|inlining procedure: k4486 
o|inlining procedure: k4528 
o|inlining procedure: k4528 
o|inlining procedure: k4603 
o|inlining procedure: k4603 
o|inlining procedure: k4615 
o|inlining procedure: k4706 
o|inlining procedure: k4706 
o|inlining procedure: k4615 
o|inlining procedure: k4774 
o|propagated global variable: g505506 ##compiler#put! 
o|inlining procedure: k4802 
o|inlining procedure: k4854 
o|inlining procedure: k4854 
o|inlining procedure: k4802 
o|inlining procedure: k4885 
o|inlining procedure: k4885 
o|inlining procedure: k4891 
o|inlining procedure: k4904 
o|inlining procedure: k4915 
o|inlining procedure: k4926 
o|inlining procedure: k4926 
o|propagated global variable: g553554 ##compiler#expression-has-side-effects? 
o|inlining procedure: k4966 
o|inlining procedure: k4966 
o|inlining procedure: k4915 
o|inlining procedure: k4904 
o|inlining procedure: k4891 
o|inlining procedure: k5029 
o|propagated global variable: g624625 ##compiler#put! 
o|inlining procedure: k5059 
o|inlining procedure: k5121 
o|inlining procedure: k5121 
o|inlining procedure: k5059 
o|inlining procedure: k5149 
o|inlining procedure: k5149 
o|inlining procedure: k5165 
o|inlining procedure: k5197 
o|inlining procedure: k5197 
o|inlining procedure: k5165 
o|inlining procedure: k5236 
o|inlining procedure: k5236 
o|inlining procedure: k5313 
o|inlining procedure: k5371 
o|inlining procedure: k5371 
o|inlining procedure: k5404 
o|inlining procedure: k5404 
o|inlining procedure: k5313 
o|inlining procedure: k5443 
o|inlining procedure: k5455 
o|inlining procedure: k5455 
o|inlining procedure: k5474 
o|inlining procedure: k5474 
o|substituted constant variable: a5490 
o|substituted constant variable: a5492 
o|inlining procedure: k5443 
o|inlining procedure: k5029 
o|inlining procedure: k5545 
o|inlining procedure: k5545 
o|inlining procedure: k5591 
o|inlining procedure: k5591 
o|inlining procedure: k5622 
o|inlining procedure: k5622 
o|inlining procedure: k5639 
o|inlining procedure: k5679 
o|inlining procedure: k5679 
o|inlining procedure: k5639 
o|substituted constant variable: a5711 
o|substituted constant variable: a5713 
o|inlining procedure: k4774 
o|inlining procedure: k5722 
o|inlining procedure: k5722 
o|inlining procedure: k5760 
o|inlining procedure: k5760 
o|inlining procedure: k5795 
o|inlining procedure: k5795 
o|inlining procedure: k5817 
o|substituted constant variable: a5826 
o|inlining procedure: k5817 
o|inlining procedure: k5833 
o|substituted constant variable: a5842 
o|inlining procedure: k5833 
o|inlining procedure: k5860 
o|inlining procedure: k5860 
o|substituted constant variable: a5900 
o|substituted constant variable: a5902 
o|substituted constant variable: a5904 
o|substituted constant variable: a5906 
o|substituted constant variable: a5908 
o|substituted constant variable: a5910 
o|inlining procedure: k5921 
o|inlining procedure: k5921 
o|inlining procedure: k5965 
o|inlining procedure: k5965 
o|inlining procedure: k6025 
o|inlining procedure: k6025 
o|inlining procedure: k6053 
o|inlining procedure: k6053 
o|propagated global variable: g914916 ##compiler#simplified-ops 
o|inlining procedure: k6094 
o|inlining procedure: k6094 
o|inlining procedure: k6126 
o|inlining procedure: k6153 
o|inlining procedure: k6153 
o|inlining procedure: k6226 
o|inlining procedure: k6226 
o|substituted constant variable: a6243 
o|inlining procedure: k6126 
o|inlining procedure: k6272 
o|inlining procedure: k6281 
o|inlining procedure: k6281 
o|substituted constant variable: a6298 
o|substituted constant variable: a6302 
o|inlining procedure: k6272 
o|inlining procedure: k6340 
o|inlining procedure: k6340 
o|inlining procedure: k6389 
o|inlining procedure: k6389 
o|inlining procedure: k6431 
o|inlining procedure: k6431 
o|inlining procedure: k6458 
o|inlining procedure: k6458 
o|inlining procedure: k6497 
o|inlining procedure: k6497 
o|inlining procedure: k6536 
o|inlining procedure: k6536 
o|inlining procedure: k6557 
o|inlining procedure: k6557 
o|inlining procedure: k6676 
o|inlining procedure: k6676 
o|inlining procedure: k6696 
o|inlining procedure: k6696 
o|inlining procedure: k6716 
o|inlining procedure: k6716 
o|inlining procedure: k6748 
o|inlining procedure: k6748 
o|removed side-effect free assignment to unused variable: test1465 
o|inlining procedure: k6853 
o|inlining procedure: k6871 
o|inlining procedure: k6871 
o|inlining procedure: k6911 
o|inlining procedure: k6923 
o|inlining procedure: k6923 
o|inlining procedure: k6911 
o|inlining procedure: k6853 
o|inlining procedure: k6989 
o|inlining procedure: k6998 
o|inlining procedure: k6998 
o|inlining procedure: k6989 
o|inlining procedure: k7051 
o|inlining procedure: k7060 
o|inlining procedure: k7060 
o|inlining procedure: k7051 
o|inlining procedure: k7137 
o|inlining procedure: k7143 
o|inlining procedure: k7143 
o|substituted constant variable: a7192 
o|inlining procedure: k7137 
o|inlining procedure: k7196 
o|inlining procedure: k7205 
o|inlining procedure: k7221 
o|inlining procedure: k7221 
o|substituted constant variable: a7272 
o|inlining procedure: k7205 
o|inlining procedure: k7196 
o|inlining procedure: k7282 
o|inlining procedure: k7293 
o|inlining procedure: k7293 
o|substituted constant variable: a7352 
o|inlining procedure: k7282 
o|inlining procedure: k7356 
o|inlining procedure: k7370 
o|inlining procedure: k7379 
o|inlining procedure: k7379 
o|inlining procedure: k7370 
o|inlining procedure: k7356 
o|inlining procedure: k7439 
o|inlining procedure: k7439 
o|inlining procedure: k7457 
o|inlining procedure: k7466 
o|inlining procedure: k7498 
o|inlining procedure: k7571 
o|inlining procedure: k7571 
o|inlining procedure: k7586 
o|inlining procedure: k7586 
o|inlining procedure: k7616 
o|inlining procedure: k7616 
o|inlining procedure: k7498 
o|inlining procedure: k7644 
o|inlining procedure: k7644 
o|substituted constant variable: a7671 
o|inlining procedure: k7466 
o|inlining procedure: k7457 
o|inlining procedure: k7678 
o|inlining procedure: k7689 
o|inlining procedure: k7730 
o|inlining procedure: k7730 
o|inlining procedure: k7689 
o|inlining procedure: k7678 
o|inlining procedure: k7753 
o|inlining procedure: k7762 
o|inlining procedure: k7781 
o|inlining procedure: k7781 
o|inlining procedure: k7762 
o|inlining procedure: k7753 
o|inlining procedure: k7825 
o|inlining procedure: k7838 
o|inlining procedure: k7854 
o|inlining procedure: k7854 
o|substituted constant variable: a7894 
o|inlining procedure: k7838 
o|inlining procedure: k7825 
o|inlining procedure: k7898 
o|inlining procedure: k7907 
o|inlining procedure: k7907 
o|inlining procedure: k7898 
o|inlining procedure: k7964 
o|inlining procedure: k7973 
o|inlining procedure: k7989 
o|inlining procedure: k8022 
o|inlining procedure: k8022 
o|inlining procedure: k7989 
o|inlining procedure: k7973 
o|inlining procedure: k7964 
o|inlining procedure: k8039 
o|inlining procedure: k8048 
o|inlining procedure: k8060 
o|inlining procedure: k8099 
o|inlining procedure: k8099 
o|inlining procedure: k8060 
o|propagated global variable: tmp18441846 unsafe 
o|propagated global variable: tmp18441846 unsafe 
o|inlining procedure: k8048 
o|substituted constant variable: a8127 
o|inlining procedure: k8039 
o|inlining procedure: k8147 
o|inlining procedure: k8158 
o|inlining procedure: k8202 
o|inlining procedure: k8202 
o|inlining procedure: k8233 
o|substituted constant variable: a8241 
o|inlining procedure: k8233 
o|propagated global variable: tmp18801882 unsafe 
o|propagated global variable: tmp18801882 unsafe 
o|inlining procedure: k8158 
o|inlining procedure: k8147 
o|inlining procedure: k8254 
o|inlining procedure: k8263 
o|inlining procedure: k8304 
o|inlining procedure: k8304 
o|inlining procedure: k8263 
o|inlining procedure: k8254 
o|inlining procedure: k8333 
o|inlining procedure: k8342 
o|inlining procedure: k8342 
o|inlining procedure: k8333 
o|inlining procedure: k8371 
o|inlining procedure: k8380 
o|inlining procedure: k8418 
o|inlining procedure: k8418 
o|inlining procedure: k8488 
o|inlining procedure: k8488 
o|inlining procedure: k8380 
o|inlining procedure: k8371 
o|inlining procedure: k8529 
o|inlining procedure: k8540 
o|inlining procedure: k8540 
o|inlining procedure: k8529 
o|inlining procedure: k8611 
o|inlining procedure: k8620 
o|inlining procedure: k8662 
o|inlining procedure: k8662 
o|inlining procedure: k8702 
o|inlining procedure: k8702 
o|inlining procedure: k8739 
o|inlining procedure: k8739 
o|inlining procedure: k8620 
o|inlining procedure: k8611 
o|inlining procedure: k8783 
o|inlining procedure: k8792 
o|inlining procedure: k8824 
o|inlining procedure: k8824 
o|inlining procedure: k8792 
o|inlining procedure: k8783 
o|inlining procedure: k8855 
o|inlining procedure: k8864 
o|inlining procedure: k8922 
o|contracted procedure: "(optimizer.scm:1315) defarg1466" 
o|inlining procedure: k6822 
o|inlining procedure: k6822 
o|inlining procedure: k8922 
o|inlining procedure: k8864 
o|inlining procedure: k8855 
o|substituted constant variable: a8982 
o|substituted constant variable: a8984 
o|substituted constant variable: a8986 
o|substituted constant variable: a8988 
o|substituted constant variable: a8990 
o|substituted constant variable: a8992 
o|substituted constant variable: a8994 
o|substituted constant variable: a8996 
o|substituted constant variable: a8998 
o|substituted constant variable: a9000 
o|substituted constant variable: a9002 
o|substituted constant variable: a9004 
o|substituted constant variable: a9006 
o|substituted constant variable: a9008 
o|substituted constant variable: a9010 
o|substituted constant variable: a9012 
o|substituted constant variable: a9014 
o|substituted constant variable: a9016 
o|substituted constant variable: a9018 
o|substituted constant variable: a9020 
o|substituted constant variable: a9022 
o|substituted constant variable: a9024 
o|substituted constant variable: a9026 
o|inlining procedure: k9056 
o|inlining procedure: k9079 
o|inlining procedure: k9090 
o|inlining procedure: k9103 
o|inlining procedure: k9111 
o|contracted procedure: k9120 
o|inlining procedure: k9123 
o|inlining procedure: k9123 
o|inlining procedure: k9111 
o|inlining procedure: k9103 
o|inlining procedure: k9090 
o|inlining procedure: k9079 
o|inlining procedure: k9056 
o|inlining procedure: k9184 
o|inlining procedure: k9184 
o|inlining procedure: k9217 
o|inlining procedure: k9217 
o|substituted constant variable: a9234 
o|substituted constant variable: a9236 
o|substituted constant variable: a9238 
o|inlining procedure: k9268 
o|inlining procedure: k9283 
o|inlining procedure: k9283 
o|contracted procedure: k9289 
o|inlining procedure: k9268 
o|inlining procedure: k9308 
o|inlining procedure: k9308 
o|inlining procedure: k9333 
o|contracted procedure: k9342 
o|inlining procedure: k9333 
o|inlining procedure: k9366 
o|inlining procedure: k9372 
o|inlining procedure: k9372 
o|inlining procedure: k9366 
o|inlining procedure: k9388 
o|contracted procedure: k9415 
o|inlining procedure: k9412 
o|inlining procedure: k9412 
o|inlining procedure: k9388 
o|inlining procedure: k9431 
o|inlining procedure: k9431 
o|contracted procedure: k9452 
o|inlining procedure: k9449 
o|inlining procedure: k9449 
o|inlining procedure: k9462 
o|inlining procedure: k9476 
o|inlining procedure: k9476 
o|inlining procedure: k9497 
o|inlining procedure: k9497 
o|inlining procedure: k9462 
o|inlining procedure: k9563 
o|inlining procedure: k9563 
o|contracted procedure: k9569 
o|inlining procedure: k9584 
o|inlining procedure: k9584 
o|inlining procedure: k9605 
o|inlining procedure: k9605 
o|substituted constant variable: a9635 
o|substituted constant variable: a9637 
o|substituted constant variable: a9639 
o|substituted constant variable: a9641 
o|substituted constant variable: a9643 
o|substituted constant variable: a9645 
o|substituted constant variable: a9647 
o|substituted constant variable: a9649 
o|substituted constant variable: a9651 
o|substituted constant variable: a9653 
o|inlining procedure: k9657 
o|inlining procedure: k9657 
o|inlining procedure: k9690 
o|inlining procedure: k9823 
o|inlining procedure: k9823 
o|inlining procedure: k9910 
o|inlining procedure: k9910 
o|inlining procedure: k9965 
o|inlining procedure: k9995 
o|inlining procedure: k10040 
o|inlining procedure: k10040 
o|inlining procedure: k9995 
o|inlining procedure: k9965 
o|inlining procedure: k10164 
o|inlining procedure: k10164 
o|inlining procedure: k10189 
o|inlining procedure: k10189 
o|inlining procedure: k10214 
o|inlining procedure: k10214 
o|substituted constant variable: a10231 
o|substituted constant variable: a10233 
o|inlining procedure: k9690 
o|inlining procedure: k10252 
o|inlining procedure: k10252 
o|substituted constant variable: a10266 
o|inlining procedure: k10299 
o|substituted constant variable: a10318 
o|inlining procedure: k10299 
o|inlining procedure: k10375 
o|inlining procedure: k10400 
o|inlining procedure: k10400 
o|inlining procedure: k10426 
o|inlining procedure: k10442 
o|contracted procedure: "(optimizer.scm:1620) user-lambda?2517" 
o|inlining procedure: k10323 
o|inlining procedure: k10323 
o|inlining procedure: k10442 
o|inlining procedure: k10466 
o|inlining procedure: k10466 
o|inlining procedure: k10472 
o|inlining procedure: k10472 
o|inlining procedure: k10426 
o|contracted procedure: k10507 
o|inlining procedure: k10375 
o|inlining procedure: k10579 
o|inlining procedure: k10579 
o|substituted constant variable: a10599 
o|substituted constant variable: a10601 
o|substituted constant variable: a10603 
o|inlining procedure: k10674 
o|inlining procedure: k10674 
o|inlining procedure: k10809 
o|inlining procedure: k10809 
o|inlining procedure: k10835 
o|inlining procedure: k10835 
o|inlining procedure: k10857 
o|inlining procedure: k10857 
o|inlining procedure: k11013 
o|inlining procedure: k11013 
o|inlining procedure: k11113 
o|inlining procedure: k11113 
o|inlining procedure: k11167 
o|inlining procedure: k11167 
o|inlining procedure: k11197 
o|inlining procedure: k11197 
o|inlining procedure: k11238 
o|inlining procedure: k11238 
o|inlining procedure: "(optimizer.scm:771) register-simplifications" 
o|inlining procedure: k11271 
o|inlining procedure: k11280 
o|inlining procedure: k11280 
o|inlining procedure: k11271 
o|inlining procedure: k11380 
o|inlining procedure: k11380 
o|inlining procedure: "(optimizer.scm:626) register-simplifications" 
o|inlining procedure: k11445 
o|inlining procedure: k11445 
o|substituted constant variable: a11477 
o|inlining procedure: k11547 
o|inlining procedure: k11559 
o|inlining procedure: k11559 
o|inlining procedure: k11594 
o|inlining procedure: k11594 
o|inlining procedure: k11619 
o|inlining procedure: k11667 
o|inlining procedure: k11667 
o|inlining procedure: k11719 
o|inlining procedure: k11719 
o|inlining procedure: k11724 
o|inlining procedure: k11736 
o|inlining procedure: k11736 
o|inlining procedure: k11748 
o|inlining procedure: k11748 
o|inlining procedure: k11724 
o|inlining procedure: k11619 
o|substituted constant variable: a11805 
o|substituted constant variable: a11807 
o|inlining procedure: k11547 
o|inlining procedure: k11836 
o|inlining procedure: k11847 
o|inlining procedure: k11847 
o|substituted constant variable: a11875 
o|inlining procedure: k11836 
o|inlining procedure: k11939 
o|inlining procedure: k11950 
o|inlining procedure: k11962 
o|inlining procedure: k11962 
o|substituted constant variable: a11987 
o|substituted constant variable: a11994 
o|inlining procedure: k11950 
o|inlining procedure: k11939 
o|inlining procedure: "(optimizer.scm:608) register-simplifications" 
o|inlining procedure: k12088 
o|inlining procedure: k12088 
o|inlining procedure: k12102 
o|inlining procedure: k12102 
o|replaced variables: 1666 
o|removed binding forms: 180 
o|substituted constant variable: r408012175 
o|substituted constant variable: r407012178 
o|inlining procedure: k4191 
o|inlining procedure: k4191 
o|substituted constant variable: r429812191 
o|inlining procedure: k4191 
o|inlining procedure: k4191 
o|substituted constant variable: r460412206 
o|substituted constant variable: r492712221 
o|substituted constant variable: r496712223 
o|substituted constant variable: r491612225 
o|substituted constant variable: r490512226 
o|substituted constant variable: r489212227 
o|converted assignments to bindings: (cfk632) 
o|substituted constant variable: r545612248 
o|substituted constant variable: r547512250 
o|substituted constant variable: r544412252 
o|substituted constant variable: r554612255 
o|substituted constant variable: r559212256 
o|substituted constant variable: r586112275 
o|substituted constant variable: r622712291 
o|substituted constant variable: r628212295 
o|substituted constant variable: r627312296 
o|substituted constant variable: f_638812299 
o|substituted constant variable: f_645712303 
o|substituted constant variable: f_649612305 
o|converted assignments to bindings: (find-path1318) 
o|substituted constant variable: r692412324 
o|substituted constant variable: r691212325 
o|substituted constant variable: r699912329 
o|substituted constant variable: r699012330 
o|substituted constant variable: r706112333 
o|substituted constant variable: r714412337 
o|substituted constant variable: r713812338 
o|substituted constant variable: r722212342 
o|substituted constant variable: r720612343 
o|substituted constant variable: r729412347 
o|substituted constant variable: r728312348 
o|substituted constant variable: r738012352 
o|substituted constant variable: r737112353 
o|substituted constant variable: r744012356 
o|substituted constant variable: r749912366 
o|substituted constant variable: r746712369 
o|substituted constant variable: r769012375 
o|substituted constant variable: r767912376 
o|substituted constant variable: r778212380 
o|substituted constant variable: r776312381 
o|substituted constant variable: r783912387 
o|substituted constant variable: r782612388 
o|substituted constant variable: r790812391 
o|substituted constant variable: r799012398 
o|substituted constant variable: r797412399 
o|substituted constant variable: r796512400 
o|substituted constant variable: r810012405 
o|substituted constant variable: r806112406 
o|substituted constant variable: r804912407 
o|inlining procedure: k8202 
o|substituted constant variable: r823412414 
o|substituted constant variable: r815912415 
o|substituted constant variable: r814812416 
o|substituted constant variable: r826412421 
o|substituted constant variable: r834312425 
o|substituted constant variable: r833412426 
o|substituted constant variable: f_848712432 
o|substituted constant variable: r838112433 
o|substituted constant variable: r854112437 
o|substituted constant variable: r853012438 
o|substituted constant variable: f_873812446 
o|substituted constant variable: r862112447 
o|substituted constant variable: r879312453 
o|substituted constant variable: r878412454 
o|substituted constant variable: r886512461 
o|substituted constant variable: r912412469 
o|substituted constant variable: r911212470 
o|substituted constant variable: r910412471 
o|substituted constant variable: r909112472 
o|substituted constant variable: r908012473 
o|substituted constant variable: r930912484 
o|substituted constant variable: r937312488 
o|substituted constant variable: r937312489 
o|substituted constant variable: r936712490 
o|substituted constant variable: r941312492 
o|substituted constant variable: r941312493 
o|substituted constant variable: r943212496 
o|substituted constant variable: r945012497 
o|substituted constant variable: r945012498 
o|substituted constant variable: r947712501 
o|substituted constant variable: r949812502 
o|inlining procedure: k9505 
o|inlining procedure: k9505 
o|substituted constant variable: r949812503 
o|substituted constant variable: r960612510 
o|substituted constant variable: r965812512 
o|substituted constant variable: r1025312532 
o|inlining procedure: k10304 
o|inlining procedure: k10304 
o|substituted constant variable: f_1032212541 
o|substituted constant variable: r1044312542 
o|substituted constant variable: r1046712545 
o|substituted constant variable: r1046712545 
o|folded constant expression: (length (quote ())) 
o|substituted constant variable: r1047312549 
o|substituted constant variable: r1047312549 
o|folded constant expression: (length (quote ())) 
o|substituted constant variable: r1042712551 
o|substituted constant variable: class103612574 
o|substituted constant variable: r1128112581 
o|substituted constant variable: r1127212582 
o|substituted constant variable: f_1137912584 
o|substituted constant variable: class103612586 
o|substituted constant variable: f_1144412591 
o|substituted constant variable: r1156012594 
o|substituted constant variable: f_1171812602 
o|substituted constant variable: r1173712604 
o|substituted constant variable: r1174912607 
o|substituted constant variable: r1172512608 
o|substituted constant variable: r1162012609 
o|substituted constant variable: r1154812610 
o|substituted constant variable: r1184812613 
o|substituted constant variable: f_1183512614 
o|substituted constant variable: r1196312618 
o|substituted constant variable: r1195112619 
o|substituted constant variable: f_1193812620 
o|substituted constant variable: class103612622 
o|substituted constant variable: f_1208712627 
o|simplifications: ((let . 2)) 
o|replaced variables: 29 
o|removed binding forms: 1378 
o|inlining procedure: k3918 
o|inlining procedure: k4086 
o|inlining procedure: k4055 
o|inlining procedure: k5987 
o|inlining procedure: k8306 
o|substituted constant variable: r94981250212712 
o|substituted constant variable: r94981250212715 
o|inlining procedure: k10461 
o|replaced variables: 4 
o|removed binding forms: 142 
o|substituted constant variable: r391912784 
o|substituted constant variable: r405612795 
o|substituted constant variable: r405612795 
o|substituted constant variable: r405612795 
o|substituted constant variable: r830712835 
o|substituted constant variable: a1046012852 
o|removed binding forms: 8 
o|removed conditional forms: 2 
o|removed binding forms: 4 
o|simplifications: ((if . 34) (##core#call . 1224)) 
o|  call simplifications:
o|    ##sys#cons	9
o|    ##sys#list	73
o|    assoc
o|    -
o|    fx>
o|    list?	3
o|    set-car!
o|    >=
o|    symbol?
o|    cddddr
o|    fx<=
o|    <=
o|    fx<
o|    =	10
o|    equal?	4
o|    proper-list?	3
o|    >	5
o|    values	6
o|    *	2
o|    length	40
o|    <	5
o|    zero?	5
o|    sub1	5
o|    ##sys#structure?
o|    ##sys#call-with-values	5
o|    fourth	16
o|    +	7
o|    cddr	6
o|    list	144
o|    caddr	2
o|    cadr	3
o|    third	29
o|    ##sys#setslot	15
o|    apply	2
o|    caar	2
o|    assq	10
o|    alist-cons	10
o|    cdr	31
o|    add1	9
o|    set-cdr!	3
o|    null?	21
o|    ##sys#make-structure	98
o|    second	44
o|    first	94
o|    car	25
o|    eq?	142
o|    ##sys#check-list	21
o|    pair?	49
o|    ##sys#slot	178
o|    memq	14
o|    not	19
o|    cons	44
o|contracted procedure: k3639 
o|contracted procedure: k3649 
o|contracted procedure: k3673 
o|contracted procedure: k3684 
o|contracted procedure: k3693 
o|contracted procedure: k3696 
o|contracted procedure: k3726 
o|contracted procedure: k3729 
o|contracted procedure: k3743 
o|contracted procedure: k3749 
o|contracted procedure: k3752 
o|contracted procedure: k3759 
o|contracted procedure: k3767 
o|contracted procedure: k3783 
o|contracted procedure: k3788 
o|contracted procedure: k3793 
o|contracted procedure: k3813 
o|contracted procedure: k3815 
o|contracted procedure: k3821 
o|contracted procedure: k3830 
o|contracted procedure: k3833 
o|contracted procedure: k3835 
o|contracted procedure: k3848 
o|contracted procedure: k3874 
o|contracted procedure: k3892 
o|contracted procedure: k3924 
o|contracted procedure: k3918 
o|contracted procedure: k3933 
o|contracted procedure: k3944 
o|contracted procedure: k3953 
o|contracted procedure: k3956 
o|contracted procedure: k3958 
o|contracted procedure: k4024 
o|contracted procedure: k4035 
o|contracted procedure: k4044 
o|contracted procedure: k4047 
o|contracted procedure: k4067 
o|contracted procedure: k4082 
o|contracted procedure: k4084 
o|contracted procedure: k4100 
o|contracted procedure: k4097 
o|contracted procedure: k4086 
o|contracted procedure: k4103 
o|contracted procedure: k4107 
o|contracted procedure: k4115 
o|contracted procedure: k4117 
o|contracted procedure: k4128 
o|contracted procedure: k4131 
o|contracted procedure: k4140 
o|contracted procedure: k4150 
o|contracted procedure: k4168 
o|contracted procedure: k4194 
o|contracted procedure: k4204 
o|contracted procedure: k4215 
o|contracted procedure: k4213 
o|contracted procedure: k4227 
o|contracted procedure: k4232 
o|contracted procedure: k4238 
o|contracted procedure: k4241 
o|contracted procedure: k4253 
o|contracted procedure: k4282 
o|contracted procedure: k4288 
o|contracted procedure: k4285 
o|contracted procedure: k4307 
o|contracted procedure: k4328 
o|contracted procedure: k4380 
o|contracted procedure: k4399 
o|contracted procedure: k4415 
o|contracted procedure: k4427 
o|contracted procedure: k4434 
o|contracted procedure: k4454 
o|contracted procedure: k4421 
o|contracted procedure: k4476 
o|contracted procedure: k4481 
o|contracted procedure: k4484 
o|contracted procedure: k4497 
o|contracted procedure: k4504 
o|contracted procedure: k4530 
o|contracted procedure: k4533 
o|contracted procedure: k4542 
o|contracted procedure: k4552 
o|contracted procedure: k4561 
o|contracted procedure: k4573 
o|contracted procedure: k4580 
o|contracted procedure: k4601 
o|contracted procedure: k4618 
o|contracted procedure: k4621 
o|contracted procedure: k4678 
o|contracted procedure: k4681 
o|contracted procedure: k4687 
o|contracted procedure: k4663 
o|contracted procedure: k4666 
o|contracted procedure: k4672 
o|contracted procedure: k4675 
o|contracted procedure: k4698 
o|contracted procedure: k4745 
o|contracted procedure: k4748 
o|contracted procedure: k4754 
o|contracted procedure: k4730 
o|contracted procedure: k4733 
o|contracted procedure: k4739 
o|contracted procedure: k4742 
o|contracted procedure: k4757 
o|contracted procedure: k4763 
o|contracted procedure: k4768 
o|contracted procedure: k4777 
o|contracted procedure: k4780 
o|contracted procedure: k4792 
o|contracted procedure: k4795 
o|contracted procedure: k4815 
o|contracted procedure: k4828 
o|contracted procedure: k4840 
o|contracted procedure: k4856 
o|contracted procedure: k4865 
o|contracted procedure: k4868 
o|contracted procedure: k4880 
o|contracted procedure: k4894 
o|contracted procedure: k4897 
o|contracted procedure: k4910 
o|contracted procedure: k4913 
o|contracted procedure: k4942 
o|contracted procedure: k4945 
o|contracted procedure: k4986 
o|contracted procedure: k5042 
o|contracted procedure: k5050 
o|contracted procedure: k5072 
o|contracted procedure: k5107 
o|contracted procedure: k5123 
o|contracted procedure: k5132 
o|contracted procedure: k5135 
o|contracted procedure: k5138 
o|contracted procedure: k5141 
o|contracted procedure: k5311 
o|contracted procedure: k5152 
o|contracted procedure: k5167 
o|contracted procedure: k5169 
o|contracted procedure: k5179 
o|contracted procedure: k5199 
o|contracted procedure: k5202 
o|contracted procedure: k5211 
o|contracted procedure: k5221 
o|contracted procedure: k5250 
o|contracted procedure: k5253 
o|contracted procedure: k5264 
o|contracted procedure: k5279 
o|contracted procedure: k5284 
o|contracted procedure: k5294 
o|contracted procedure: k5297 
o|contracted procedure: k5300 
o|contracted procedure: k5305 
o|contracted procedure: k5429 
o|contracted procedure: k5324 
o|contracted procedure: k5351 
o|contracted procedure: k5362 
o|contracted procedure: k5373 
o|contracted procedure: k5376 
o|contracted procedure: k5385 
o|contracted procedure: k5395 
o|contracted procedure: k5401 
o|contracted procedure: k5406 
o|contracted procedure: k5426 
o|contracted procedure: k5423 
o|contracted procedure: k5420 
o|contracted procedure: k5441 
o|contracted procedure: k5471 
o|contracted procedure: k5477 
o|contracted procedure: k5487 
o|contracted procedure: k5527 
o|contracted procedure: k5532 
o|contracted procedure: k5548 
o|contracted procedure: k5559 
o|contracted procedure: k5604 
o|contracted procedure: k5642 
o|contracted procedure: k5648 
o|contracted procedure: k5664 
o|contracted procedure: k5681 
o|contracted procedure: k5684 
o|contracted procedure: k5693 
o|contracted procedure: k5703 
o|contracted procedure: k5717 
o|contracted procedure: k5720 
o|inlining procedure: k5730 
o|contracted procedure: k5784 
o|contracted procedure: k5828 
o|contracted procedure: k5819 
o|contracted procedure: k5844 
o|contracted procedure: k5835 
o|contracted procedure: k5786 
o|contracted procedure: k5797 
o|contracted procedure: k5806 
o|contracted procedure: k5809 
o|contracted procedure: k5847 
o|contracted procedure: k5853 
o|contracted procedure: k5855 
o|contracted procedure: k5879 
o|contracted procedure: k5923 
o|contracted procedure: k5955 
o|contracted procedure: k5963 
o|contracted procedure: k5992 
o|contracted procedure: k5998 
o|contracted procedure: k6004 
o|contracted procedure: k6010 
o|contracted procedure: k6028 
o|contracted procedure: k6042 
o|contracted procedure: k6044 
o|contracted procedure: k6055 
o|contracted procedure: k6064 
o|contracted procedure: k6067 
o|propagated global variable: g914916 ##compiler#simplified-ops 
o|contracted procedure: k6069 
o|contracted procedure: k6096 
o|contracted procedure: k6111 
o|contracted procedure: k6120 
o|contracted procedure: k6132 
o|contracted procedure: k6134 
o|contracted procedure: k6149 
o|contracted procedure: k6159 
o|contracted procedure: k6168 
o|contracted procedure: k6184 
o|contracted procedure: k6181 
o|contracted procedure: k6193 
o|contracted procedure: k6200 
o|contracted procedure: k6245 
o|contracted procedure: k6229 
o|contracted procedure: k6247 
o|contracted procedure: k6254 
o|contracted procedure: k6304 
o|contracted procedure: k6278 
o|contracted procedure: k6300 
o|contracted procedure: k6284 
o|contracted procedure: k6324 
o|contracted procedure: k6328 
o|contracted procedure: k6331 
o|contracted procedure: k6342 
o|contracted procedure: k6351 
o|contracted procedure: k6354 
o|contracted procedure: k6372 
o|contracted procedure: k6374 
o|contracted procedure: k6391 
o|contracted procedure: k6412 
o|contracted procedure: k6394 
o|contracted procedure: k6396 
o|contracted procedure: k6401 
o|contracted procedure: k6420 
o|contracted procedure: k6433 
o|contracted procedure: k6453 
o|contracted procedure: k6439 
o|contracted procedure: k6447 
o|contracted procedure: k6460 
o|contracted procedure: k6483 
o|contracted procedure: k6488 
o|contracted procedure: k6499 
o|contracted procedure: k6510 
o|contracted procedure: k6527 
o|contracted procedure: k6539 
o|contracted procedure: k6670 
o|contracted procedure: k6553 
o|contracted procedure: k6555 
o|contracted procedure: k6564 
o|contracted procedure: k6581 
o|contracted procedure: k6578 
o|contracted procedure: k6575 
o|contracted procedure: k6597 
o|contracted procedure: k6600 
o|contracted procedure: k6624 
o|contracted procedure: k6627 
o|contracted procedure: k6638 
o|contracted procedure: k6647 
o|contracted procedure: k6644 
o|contracted procedure: k6641 
o|contracted procedure: k6652 
o|contracted procedure: k6665 
o|contracted procedure: k6662 
o|contracted procedure: k6659 
o|contracted procedure: k6678 
o|contracted procedure: k6687 
o|contracted procedure: k6690 
o|contracted procedure: k6698 
o|contracted procedure: k6707 
o|contracted procedure: k6710 
o|contracted procedure: k6738 
o|contracted procedure: k6718 
o|contracted procedure: k6727 
o|contracted procedure: k6730 
o|contracted procedure: k6733 
o|contracted procedure: k6736 
o|contracted procedure: k6780 
o|contracted procedure: k6750 
o|contracted procedure: k6775 
o|contracted procedure: k6778 
o|contracted procedure: k6772 
o|contracted procedure: k6753 
o|contracted procedure: k6762 
o|contracted procedure: k6765 
o|contracted procedure: k6796 
o|contracted procedure: k6806 
o|contracted procedure: k6856 
o|contracted procedure: k6885 
o|contracted procedure: k6888 
o|contracted procedure: k6902 
o|contracted procedure: k6899 
o|contracted procedure: k6978 
o|contracted procedure: k6981 
o|contracted procedure: k6904 
o|contracted procedure: k6907 
o|contracted procedure: k6909 
o|contracted procedure: k6914 
o|contracted procedure: k6920 
o|contracted procedure: k6926 
o|contracted procedure: k6937 
o|contracted procedure: k6940 
o|contracted procedure: k6986 
o|contracted procedure: k7046 
o|contracted procedure: k7049 
o|contracted procedure: k6995 
o|contracted procedure: k7011 
o|contracted procedure: k7013 
o|contracted procedure: k7016 
o|contracted procedure: k7026 
o|contracted procedure: k7029 
o|contracted procedure: k7040 
o|contracted procedure: k7054 
o|contracted procedure: k7129 
o|contracted procedure: k7073 
o|contracted procedure: k7092 
o|contracted procedure: k7095 
o|contracted procedure: k7109 
o|contracted procedure: k7112 
o|contracted procedure: k7123 
o|contracted procedure: k7134 
o|contracted procedure: k7194 
o|contracted procedure: k7146 
o|contracted procedure: k7190 
o|contracted procedure: k7167 
o|contracted procedure: k7176 
o|contracted procedure: k7182 
o|contracted procedure: k7170 
o|contracted procedure: k7185 
o|contracted procedure: k7199 
o|contracted procedure: k7274 
o|contracted procedure: k7218 
o|contracted procedure: k7224 
o|contracted procedure: k7226 
o|contracted procedure: k7228 
o|contracted procedure: k7239 
o|contracted procedure: k7242 
o|contracted procedure: k7253 
o|contracted procedure: k7259 
o|contracted procedure: k7256 
o|contracted procedure: k7279 
o|contracted procedure: k7285 
o|contracted procedure: k7287 
o|contracted procedure: k7354 
o|contracted procedure: k7296 
o|contracted procedure: k7317 
o|contracted procedure: k7320 
o|contracted procedure: k7331 
o|contracted procedure: k7334 
o|contracted procedure: k7348 
o|contracted procedure: k7345 
o|contracted procedure: k7359 
o|contracted procedure: k7365 
o|contracted procedure: k7367 
o|contracted procedure: k7429 
o|contracted procedure: k7376 
o|contracted procedure: k7397 
o|contracted procedure: k7400 
o|contracted procedure: k7426 
o|contracted procedure: k7411 
o|contracted procedure: k7417 
o|contracted procedure: k7423 
o|contracted procedure: k7436 
o|contracted procedure: k7452 
o|contracted procedure: k7460 
o|contracted procedure: k7669 
o|contracted procedure: k7479 
o|contracted procedure: k7490 
o|contracted procedure: k7493 
o|contracted procedure: k7513 
o|contracted procedure: k7532 
o|contracted procedure: k7535 
o|contracted procedure: k7546 
o|contracted procedure: k7573 
o|contracted procedure: k7571 
o|contracted procedure: k7552 
o|contracted procedure: k7549 
o|contracted procedure: k7568 
o|contracted procedure: k7588 
o|contracted procedure: k7591 
o|contracted procedure: k7600 
o|contracted procedure: k7610 
o|contracted procedure: k7618 
o|contracted procedure: k7621 
o|contracted procedure: k7630 
o|contracted procedure: k7640 
o|contracted procedure: k7656 
o|contracted procedure: k7642 
o|contracted procedure: k7650 
o|contracted procedure: k7666 
o|contracted procedure: k7675 
o|contracted procedure: k7684 
o|contracted procedure: k7686 
o|contracted procedure: k7699 
o|contracted procedure: k7715 
o|contracted procedure: k7724 
o|contracted procedure: k7718 
o|contracted procedure: k7732 
o|contracted procedure: k7739 
o|contracted procedure: k7747 
o|contracted procedure: k7756 
o|contracted procedure: k7765 
o|contracted procedure: k7767 
o|contracted procedure: k7784 
o|contracted procedure: k7809 
o|contracted procedure: k7797 
o|contracted procedure: k7815 
o|contracted procedure: k7822 
o|contracted procedure: k7841 
o|contracted procedure: k7843 
o|contracted procedure: k7846 
o|contracted procedure: k7896 
o|contracted procedure: k7851 
o|contracted procedure: k7857 
o|contracted procedure: k7868 
o|contracted procedure: k7871 
o|contracted procedure: k7881 
o|contracted procedure: k7901 
o|contracted procedure: k7920 
o|contracted procedure: k7922 
o|contracted procedure: k7948 
o|contracted procedure: k7950 
o|contracted procedure: k7961 
o|contracted procedure: k8034 
o|contracted procedure: k8037 
o|contracted procedure: k7970 
o|contracted procedure: k7986 
o|contracted procedure: k7992 
o|contracted procedure: k7994 
o|contracted procedure: k8005 
o|contracted procedure: k8008 
o|inlining procedure: k8019 
o|inlining procedure: k8019 
o|contracted procedure: k8042 
o|contracted procedure: k8129 
o|contracted procedure: k8051 
o|contracted procedure: k8057 
o|contracted procedure: k8122 
o|contracted procedure: k8073 
o|contracted procedure: k8097 
o|contracted procedure: k8084 
o|contracted procedure: k8119 
o|contracted procedure: k8102 
o|contracted procedure: k8113 
o|contracted procedure: k8116 
o|contracted procedure: k8134 
o|contracted procedure: k8137 
o|contracted procedure: k8139 
o|contracted procedure: k8141 
o|contracted procedure: k8143 
o|contracted procedure: k8153 
o|contracted procedure: k8155 
o|contracted procedure: k8171 
o|contracted procedure: k8182 
o|contracted procedure: k8185 
o|inlining procedure: k8196 
o|contracted procedure: k8204 
o|contracted procedure: k8213 
o|inlining procedure: k8196 
o|contracted procedure: k8228 
o|contracted procedure: k8252 
o|contracted procedure: k8245 
o|contracted procedure: k8257 
o|contracted procedure: k8322 
o|contracted procedure: k8325 
o|contracted procedure: k8266 
o|contracted procedure: k8287 
o|contracted procedure: k8290 
o|contracted procedure: k8301 
o|contracted procedure: k8319 
o|contracted procedure: k8306 
o|contracted procedure: k8330 
o|contracted procedure: k8339 
o|contracted procedure: k8360 
o|contracted procedure: k8363 
o|contracted procedure: k8369 
o|contracted procedure: k8374 
o|contracted procedure: k8390 
o|contracted procedure: k8392 
o|contracted procedure: k8399 
o|contracted procedure: k8410 
o|contracted procedure: k8413 
o|contracted procedure: k8483 
o|contracted procedure: k8421 
o|contracted procedure: k8432 
o|contracted procedure: k8435 
o|contracted procedure: k8442 
o|contracted procedure: k8444 
o|contracted procedure: k8455 
o|contracted procedure: k8458 
o|contracted procedure: k8474 
o|contracted procedure: k8477 
o|contracted procedure: k8490 
o|contracted procedure: k8497 
o|contracted procedure: k8524 
o|contracted procedure: k8527 
o|contracted procedure: k8532 
o|contracted procedure: k8534 
o|contracted procedure: k8543 
o|contracted procedure: k8564 
o|contracted procedure: k8567 
o|contracted procedure: k8607 
o|contracted procedure: k8578 
o|contracted procedure: k8589 
o|contracted procedure: k8598 
o|contracted procedure: k8604 
o|contracted procedure: k8614 
o|contracted procedure: k8630 
o|contracted procedure: k8634 
o|contracted procedure: k8643 
o|contracted procedure: k8654 
o|contracted procedure: k8657 
o|contracted procedure: k8734 
o|contracted procedure: k8665 
o|contracted procedure: k8676 
o|contracted procedure: k8679 
o|contracted procedure: k8691 
o|contracted procedure: k8694 
o|contracted procedure: k8704 
o|contracted procedure: k8715 
o|contracted procedure: k8718 
o|contracted procedure: k8728 
o|contracted procedure: k8731 
o|contracted procedure: k8741 
o|contracted procedure: k8748 
o|contracted procedure: k8774 
o|contracted procedure: k8777 
o|contracted procedure: k8779 
o|contracted procedure: k8781 
o|contracted procedure: k8789 
o|contracted procedure: k8805 
o|contracted procedure: k8807 
o|contracted procedure: k8818 
o|contracted procedure: k8821 
o|contracted procedure: k8826 
o|contracted procedure: k8837 
o|contracted procedure: k8853 
o|contracted procedure: k8850 
o|contracted procedure: k8858 
o|contracted procedure: k8874 
o|contracted procedure: k8974 
o|contracted procedure: k8879 
o|contracted procedure: k8971 
o|contracted procedure: k8890 
o|contracted procedure: k8916 
o|contracted procedure: k8924 
o|contracted procedure: k8930 
o|contracted procedure: k8945 
o|contracted procedure: k6824 
o|contracted procedure: k6840 
o|contracted procedure: k6845 
o|contracted procedure: k8950 
o|contracted procedure: k8957 
o|contracted procedure: k8965 
o|contracted procedure: k9059 
o|contracted procedure: k9062 
o|contracted procedure: k9077 
o|contracted procedure: k9093 
o|contracted procedure: k9114 
o|contracted procedure: k9142 
o|contracted procedure: k9145 
o|contracted procedure: k9126 
o|contracted procedure: k9133 
o|contracted procedure: k9136 
o|contracted procedure: k9139 
o|contracted procedure: k9156 
o|contracted procedure: k9172 
o|contracted procedure: k9179 
o|contracted procedure: k9182 
o|contracted procedure: k9187 
o|contracted procedure: k9196 
o|contracted procedure: k9199 
o|contracted procedure: k9202 
o|contracted procedure: k9208 
o|contracted procedure: k9219 
o|contracted procedure: k9228 
o|contracted procedure: k9231 
o|contracted procedure: k9271 
o|contracted procedure: k9274 
o|contracted procedure: k9276 
o|contracted procedure: k9297 
o|contracted procedure: k9281 
o|contracted procedure: k9293 
o|contracted procedure: k9305 
o|contracted procedure: k9315 
o|contracted procedure: k9321 
o|contracted procedure: k9328 
o|contracted procedure: k9336 
o|contracted procedure: k9358 
o|contracted procedure: k9346 
o|contracted procedure: k9363 
o|contracted procedure: k9375 
o|contracted procedure: k9379 
o|contracted procedure: k9386 
o|contracted procedure: k9391 
o|contracted procedure: k9399 
o|contracted procedure: k9419 
o|contracted procedure: k9423 
o|contracted procedure: k9428 
o|contracted procedure: k9436 
o|contracted procedure: k9456 
o|contracted procedure: k9460 
o|contracted procedure: k9465 
o|contracted procedure: k9468 
o|contracted procedure: k9473 
o|contracted procedure: k9479 
o|contracted procedure: k9494 
o|contracted procedure: k9500 
o|contracted procedure: k9503 
o|contracted procedure: k9508 
o|contracted procedure: k9516 
o|contracted procedure: k9512 
o|contracted procedure: k9556 
o|contracted procedure: k9559 
o|contracted procedure: k9561 
o|contracted procedure: k9573 
o|contracted procedure: k9587 
o|contracted procedure: k9594 
o|contracted procedure: k9597 
o|contracted procedure: k9602 
o|contracted procedure: k9615 
o|contracted procedure: k9621 
o|contracted procedure: k9624 
o|contracted procedure: k10268 
o|contracted procedure: k9683 
o|contracted procedure: k9687 
o|contracted procedure: k9701 
o|contracted procedure: k9709 
o|contracted procedure: k9727 
o|contracted procedure: k9724 
o|contracted procedure: k9738 
o|contracted procedure: k9741 
o|contracted procedure: k9759 
o|contracted procedure: k9756 
o|contracted procedure: k9748 
o|contracted procedure: k9769 
o|contracted procedure: k9787 
o|contracted procedure: k9811 
o|contracted procedure: k9825 
o|contracted procedure: k9834 
o|contracted procedure: k9837 
o|contracted procedure: k9901 
o|contracted procedure: k9850 
o|contracted procedure: k9853 
o|contracted procedure: k9855 
o|contracted procedure: k9912 
o|contracted procedure: k9921 
o|contracted procedure: k9924 
o|contracted procedure: k9932 
o|contracted procedure: k9935 
o|contracted procedure: k9938 
o|contracted procedure: k9968 
o|contracted procedure: k9971 
o|contracted procedure: k9973 
o|contracted procedure: k9992 
o|contracted procedure: k10144 
o|contracted procedure: k9998 
o|contracted procedure: k10002 
o|contracted procedure: k10121 
o|contracted procedure: k10008 
o|contracted procedure: k10021 
o|contracted procedure: k10024 
o|contracted procedure: k10034 
o|contracted procedure: k10026 
o|contracted procedure: k10038 
o|contracted procedure: k10045 
o|contracted procedure: k10047 
o|contracted procedure: k10061 
o|contracted procedure: k10072 
o|contracted procedure: k10075 
o|contracted procedure: k10081 
o|contracted procedure: k10102 
o|contracted procedure: k10099 
o|contracted procedure: k10091 
o|contracted procedure: k10126 
o|contracted procedure: k10157 
o|contracted procedure: k10160 
o|contracted procedure: k10162 
o|contracted procedure: k10167 
o|contracted procedure: k10171 
o|contracted procedure: k10180 
o|contracted procedure: k10191 
o|contracted procedure: k10200 
o|contracted procedure: k10203 
o|contracted procedure: k10205 
o|contracted procedure: k10216 
o|contracted procedure: k10225 
o|contracted procedure: k10228 
o|contracted procedure: k10249 
o|contracted procedure: k10255 
o|contracted procedure: k10262 
o|contracted procedure: k10270 
o|contracted procedure: k10301 
o|contracted procedure: k10316 
o|contracted procedure: k10308 
o|contracted procedure: k10312 
o|contracted procedure: k10378 
o|contracted procedure: k10381 
o|contracted procedure: k10383 
o|contracted procedure: k10385 
o|contracted procedure: k10398 
o|contracted procedure: k10407 
o|contracted procedure: k10414 
o|contracted procedure: k10424 
o|contracted procedure: k10429 
o|contracted procedure: k10432 
o|contracted procedure: k10434 
o|contracted procedure: k10439 
o|contracted procedure: k10451 
o|contracted procedure: k10325 
o|contracted procedure: k10332 
o|contracted procedure: k10461 
o|contracted procedure: k10524 
o|contracted procedure: k10526 
o|contracted procedure: k10533 
o|contracted procedure: k10554 
o|contracted procedure: k10570 
o|contracted procedure: k10581 
o|contracted procedure: k10590 
o|contracted procedure: k10593 
o|contracted procedure: k10610 
o|contracted procedure: k10619 
o|contracted procedure: k10621 
o|contracted procedure: k10630 
o|contracted procedure: k10632 
o|contracted procedure: k10643 
o|contracted procedure: k10646 
o|contracted procedure: k10676 
o|contracted procedure: k10679 
o|contracted procedure: k10688 
o|contracted procedure: k10698 
o|contracted procedure: k10716 
o|contracted procedure: k10737 
o|contracted procedure: k10739 
o|contracted procedure: k10773 
o|contracted procedure: k10779 
o|contracted procedure: k10790 
o|contracted procedure: k10782 
o|contracted procedure: k10800 
o|contracted procedure: k10811 
o|contracted procedure: k10820 
o|contracted procedure: k10823 
o|contracted procedure: k10826 
o|contracted procedure: k10837 
o|contracted procedure: k10846 
o|contracted procedure: k10849 
o|contracted procedure: k10855 
o|contracted procedure: k10878 
o|contracted procedure: k10881 
o|contracted procedure: k10900 
o|contracted procedure: k10903 
o|contracted procedure: k10934 
o|contracted procedure: k10945 
o|contracted procedure: k10948 
o|contracted procedure: k10959 
o|contracted procedure: k10962 
o|contracted procedure: k11057 
o|contracted procedure: k10973 
o|contracted procedure: k10979 
o|contracted procedure: k10985 
o|contracted procedure: k11007 
o|contracted procedure: k11015 
o|contracted procedure: k11048 
o|contracted procedure: k11029 
o|contracted procedure: k11032 
o|contracted procedure: k11045 
o|contracted procedure: k11051 
o|contracted procedure: k11065 
o|contracted procedure: k11068 
o|contracted procedure: k11115 
o|contracted procedure: k11137 
o|contracted procedure: k11134 
o|contracted procedure: k11118 
o|contracted procedure: k11127 
o|contracted procedure: k11143 
o|contracted procedure: k11156 
o|contracted procedure: k11158 
o|contracted procedure: k11169 
o|contracted procedure: k11172 
o|contracted procedure: k11181 
o|contracted procedure: k11191 
o|contracted procedure: k11199 
o|contracted procedure: k11202 
o|contracted procedure: k11211 
o|contracted procedure: k11221 
o|contracted procedure: k11223 
o|contracted procedure: k11232 
o|contracted procedure: k11240 
o|contracted procedure: k11249 
o|contracted procedure: k11252 
o|contracted procedure: k11422 
o|contracted procedure: k11419 
o|contracted procedure: k11407 
o|contracted procedure: k11416 
o|contracted procedure: k11413 
o|contracted procedure: k11410 
o|contracted procedure: k11372 
o|contracted procedure: k11375 
o|contracted procedure: k11390 
o|contracted procedure: k11404 
o|contracted procedure: k11255 
o|contracted procedure: k11363 
o|contracted procedure: k11369 
o|contracted procedure: k11366 
o|contracted procedure: k11360 
o|contracted procedure: k11261 
o|contracted procedure: k11264 
o|contracted procedure: k11269 
o|contracted procedure: k11277 
o|contracted procedure: k11357 
o|contracted procedure: k11283 
o|contracted procedure: k11354 
o|contracted procedure: k11288 
o|contracted procedure: k11298 
o|contracted procedure: k11301 
o|contracted procedure: k11312 
o|contracted procedure: k11328 
o|contracted procedure: k11342 
o|contracted procedure: k11258 
o|contracted procedure: k12002 
o|contracted procedure: k12050 
o|contracted procedure: k12062 
o|contracted procedure: k12053 
o|contracted procedure: k12059 
o|contracted procedure: k12056 
o|contracted procedure: k12005 
o|contracted procedure: k12047 
o|contracted procedure: k12011 
o|contracted procedure: k12017 
o|contracted procedure: k12032 
o|contracted procedure: k12044 
o|contracted procedure: k12035 
o|contracted procedure: k12041 
o|contracted procedure: k12038 
o|contracted procedure: k12020 
o|contracted procedure: k12029 
o|contracted procedure: k12026 
o|contracted procedure: k12023 
o|contracted procedure: k12014 
o|contracted procedure: k12008 
o|contracted procedure: k11931 
o|contracted procedure: k11934 
o|contracted procedure: k11941 
o|contracted procedure: k11996 
o|contracted procedure: k11959 
o|contracted procedure: k11989 
o|contracted procedure: k11965 
o|contracted procedure: k11976 
o|contracted procedure: k11425 
o|contracted procedure: k11883 
o|contracted procedure: k11916 
o|contracted procedure: k11928 
o|contracted procedure: k11919 
o|contracted procedure: k11925 
o|contracted procedure: k11922 
o|contracted procedure: k11886 
o|contracted procedure: k11913 
o|contracted procedure: k11892 
o|contracted procedure: k11901 
o|contracted procedure: k11910 
o|contracted procedure: k11907 
o|contracted procedure: k11904 
o|contracted procedure: k11898 
o|contracted procedure: k11895 
o|contracted procedure: k11889 
o|contracted procedure: k11828 
o|contracted procedure: k11831 
o|contracted procedure: k11838 
o|contracted procedure: k11877 
o|contracted procedure: k11850 
o|contracted procedure: k11873 
o|contracted procedure: k11861 
o|contracted procedure: k11428 
o|contracted procedure: k11822 
o|contracted procedure: k11825 
o|contracted procedure: k11509 
o|contracted procedure: k11512 
o|contracted procedure: k11520 
o|contracted procedure: k11550 
o|contracted procedure: k11819 
o|contracted procedure: k11556 
o|contracted procedure: k11571 
o|contracted procedure: k11597 
o|contracted procedure: k11604 
o|contracted procedure: k11607 
o|contracted procedure: k11614 
o|contracted procedure: k11622 
o|contracted procedure: k11800 
o|contracted procedure: k11628 
o|contracted procedure: k11797 
o|contracted procedure: k11635 
o|contracted procedure: k11640 
o|contracted procedure: k11686 
o|contracted procedure: k11677 
o|contracted procedure: k11680 
o|contracted procedure: k11683 
o|contracted procedure: k11697 
o|contracted procedure: k11702 
o|contracted procedure: k11721 
o|contracted procedure: k11794 
o|contracted procedure: k11727 
o|contracted procedure: k11745 
o|contracted procedure: k11751 
o|contracted procedure: k11760 
o|contracted procedure: k11781 
o|contracted procedure: k11431 
o|contracted procedure: k11488 
o|contracted procedure: k11506 
o|contracted procedure: k11503 
o|contracted procedure: k11491 
o|contracted procedure: k11500 
o|contracted procedure: k11497 
o|contracted procedure: k11494 
o|contracted procedure: k11437 
o|contracted procedure: k11440 
o|contracted procedure: k11447 
o|contracted procedure: k11479 
o|contracted procedure: k11453 
o|contracted procedure: k11464 
o|contracted procedure: k11475 
o|contracted procedure: k11434 
o|contracted procedure: k12145 
o|contracted procedure: k12139 
o|contracted procedure: k12142 
o|contracted procedure: k12136 
o|contracted procedure: k12133 
o|contracted procedure: k12068 
o|contracted procedure: k12071 
o|contracted procedure: k12081 
o|contracted procedure: k12090 
o|contracted procedure: k12100 
o|contracted procedure: k12112 
o|contracted procedure: k12109 
o|contracted procedure: k12102 
o|contracted procedure: k12115 
o|contracted procedure: k12127 
o|contracted procedure: k12065 
o|simplifications: ((let . 120)) 
o|removed binding forms: 940 
o|inlining procedure: k4133 
o|inlining procedure: k4133 
o|inlining procedure: k4535 
o|inlining procedure: k4535 
o|inlining procedure: k5204 
o|inlining procedure: k5204 
o|inlining procedure: k5378 
o|inlining procedure: k5378 
o|inlining procedure: k5686 
o|inlining procedure: k5686 
o|contracted procedure: "(optimizer.scm:479) g82983013253" 
o|inlining procedure: k7593 
o|inlining procedure: k7593 
o|inlining procedure: k7623 
o|inlining procedure: k7623 
o|inlining procedure: k8202 
o|inlining procedure: k8202 
o|inlining procedure: k8304 
o|inlining procedure: k8304 
o|inlining procedure: k10681 
o|inlining procedure: k10681 
o|inlining procedure: k11120 
o|inlining procedure: k11120 
o|inlining procedure: k11174 
o|inlining procedure: k11174 
o|inlining procedure: k11204 
o|inlining procedure: k11204 
o|replaced variables: 21 
o|removed binding forms: 4 
o|substituted constant variable: c83113249 
o|substituted constant variable: p83213250 
o|substituted constant variable: s83313251 
o|simplifications: ((if . 3)) 
o|removed binding forms: 42 
o|contracted procedure: k8221 
o|removed binding forms: 4 
o|direct leaf routine/allocation: touch30 0 
o|direct leaf routine/allocation: touch167 0 
o|direct leaf routine/allocation: touch947 0 
o|direct leaf routine/allocation: close2516 6 
o|contracted procedure: "(optimizer.scm:76) k3774" 
o|contracted procedure: "(optimizer.scm:162) k4088" 
o|contracted procedure: "(optimizer.scm:162) k408812792" 
o|contracted procedure: "(optimizer.scm:179) k4207" 
o|contracted procedure: "(optimizer.scm:202) k4270" 
o|contracted procedure: "(optimizer.scm:232) k4391" 
o|contracted procedure: "(optimizer.scm:236) k4418" 
o|contracted procedure: "(optimizer.scm:254) k4494" 
o|contracted procedure: "(optimizer.scm:274) k4651" 
o|contracted procedure: "(optimizer.scm:290) k4718" 
o|contracted procedure: "(optimizer.scm:325) k4821" 
o|contracted procedure: "(optimizer.scm:394) k5101" 
o|contracted procedure: "(optimizer.scm:401) k5172" 
o|contracted procedure: "(optimizer.scm:410) k5232" 
o|contracted procedure: "(optimizer.scm:476) k5728" 
o|contracted procedure: "(optimizer.scm:481) k5751" 
o|contracted procedure: "(optimizer.scm:488) k5766" 
o|contracted procedure: "(optimizer.scm:1626) k10416" 
o|contracted procedure: "(optimizer.scm:1639) k10563" 
o|removed binding forms: 19 
o|customizable procedures: (loop1046 k11670 loop21152 loop11113 for-each-loop26412919 map-loop26602733 map-loop27442764 map-loop27752792 k10860 loop2847 descend2799 for-each-loop28682912 for-each-loop28822907 map-loop26942711 for-each-loop26152633 k10390 k10458 k10445 k10403 walk2518 k9693 for-each-loop23862396 for-each-loop23692379 rec2295 for-each-loop24072431 for-each-loop24712492 k9481 k9438 k9401 rec2177 for-each-loop21542165 scan2112 walk2111 transform2113 k6833 loop2095 k8636 k7934 k7786 k7501 k7503 map-loop16661684 map-loop16941711 k7075 k6755 map-loop12781297 for-each-loop13091337 for-each-loop13491365 for-each-loop13731391 k6560 find-path1318 find1321 for-each-loop9571025 test948 k6129 k6146 k6156 k6164 for-each-loop907919 k5950 lp888 k5857 k5763 for-each-loop863875 map-loop792817 k4805 k5032 k5062 k5316 map-loop724754 loop645 map-loop659684 invalidate-gae!168 for-each-loop608626 k4923 for-each-loop489507 walk-generic173 k4491 k4506 map-loop388413 k4439 test164 replace-var171 walk1172 k4263 walk170 map-loop224242 simplify169 for-each-loop187205 for-each-loop109140 k3769 k3854 mark28 remember29 scan-each31 k3745 k3731 for-each-loop4253 scan32 k3635) 
o|calls to known targets: 381 
o|identified direct recursive calls: f_8919 1 
o|unused rest argument: _2906 f_10785 
o|unused rest argument: _2864 f_10940 
o|identified direct recursive calls: f_11110 2 
o|unused rest argument: _2772 f_11146 
o|fast box initializations: 64 
o|dropping unused closure argument: f_4016 
*/
/* end of file */
