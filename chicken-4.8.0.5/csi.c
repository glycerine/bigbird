/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file csi.c -extend ./private-namespace.scm
   used units: library eval chicken_2dsyntax ports extras
*/

#include "chicken.h"

#include <signal.h>

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[409];
static double C_possibly_force_alignment;


/* from k1986 */
static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3526)
static void C_fcall f_3526(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5648)
static void C_ccall f_5648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static C_word C_fcall f_3177(C_word t0,C_word t1);
C_noret_decl(f_1958)
static void C_fcall f_1958(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4650)
static void C_fcall f_4650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6112)
static void C_ccall f_6112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5017)
static void C_fcall f_5017(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_fcall f_3868(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5328)
static void C_ccall f_5328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6155)
static void C_fcall f_6155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_fcall f_5317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5319)
static void C_ccall f_5319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2957)
static void C_fcall f_2957(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5313)
static void C_fcall f_5313(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3210)
static C_word C_fcall f_3210(C_word t0);
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_fcall f_2968(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5611)
static void C_fcall f_5611(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4207)
static void C_fcall f_4207(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_fcall f_2463(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3589)
static void C_fcall f_3589(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_fcall f_3599(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5965)
static void C_ccall f_5965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4601)
static void C_fcall f_4601(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5956)
static void C_ccall f_5956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_fcall f_4280(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5057)
static void C_fcall f_5057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_fcall f_4455(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4459)
static void C_fcall f_4459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5363)
static void C_fcall f_5363(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4487)
static void C_fcall f_4487(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5358)
static void C_fcall f_5358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5350)
static void C_ccall f_5350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2688)
static void C_ccall f_2688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5342)
static void C_ccall f_5342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4687)
static void C_fcall f_4687(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5335)
static void C_ccall f_5335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_fcall f_3257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6184)
static void C_ccall f_6184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3286)
static void C_fcall f_3286(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2856)
static void C_fcall f_2856(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5375)
static void C_ccall f_5375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_fcall f_5906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4412)
static void C_fcall f_4412(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_fcall f_5728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4990)
static void C_fcall f_4990(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6072)
static void C_fcall f_6072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3996)
static void C_fcall f_3996(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4479)
static void C_fcall f_4479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6050)
static void C_ccall f_6050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6023)
static void C_ccall f_6023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2092)
static void C_fcall f_2092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5758)
static void C_fcall f_5758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2001)
static void C_ccall f_2001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6224)
static void C_ccall f_6224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5127)
static C_word C_fcall f_5127(C_word t0);
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6206)
static void C_ccall f_6206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_fcall f_3950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_fcall f_3900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2020)
static C_word C_fcall f_2020(C_word t0,C_word t1);
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4555)
static void C_fcall f_4555(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1834)
static void C_ccall f_1834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_fcall f_2996(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1860)
static void C_fcall f_1860(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_fcall f_2515(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5788)
static void C_fcall f_5788(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4146)
static void C_fcall f_4146(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4335)
static void C_fcall f_4335(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6063)
static void C_ccall f_6063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_fcall f_4736(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5169)
static void C_fcall f_5169(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_ccall f_5162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5164)
static void C_fcall f_5164(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4738)
static void C_fcall f_4738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6869)
static void C_ccall f6869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4772)
static void C_ccall f_4772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5543)
static void C_ccall f_5543(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_fcall f_2332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5195)
static void C_ccall f_5195(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5187)
static void C_fcall f_5187(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5181)
static void C_fcall f_5181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5553)
static void C_ccall f_5553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5174)
static void C_fcall f_5174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_fcall f_4381(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4848)
static void C_ccall f_4848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5851)
static void C_ccall f_5851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6742)
static void C_ccall f6742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_fcall f_2736(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4569)
static void C_ccall f_4569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4884)
static void C_fcall f_4884(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5899)
static void C_ccall f_5899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5265)
static void C_ccall f_5265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_fcall f_3112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5258)
static void C_fcall f_5258(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4518)
static void C_ccall f_4518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6738)
static void C_ccall f6738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5241)
static void C_ccall f_5241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_fcall f_4944(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4938)
static void C_fcall f_4938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4820)
static void C_fcall f_4820(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4815)
static void C_ccall f_4815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5291)
static void C_ccall f_5291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_fcall f_4956(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5282)
static void C_ccall f_5282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5828)
static void C_fcall f_5828(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5273)
static void C_fcall f_5273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4768)
static void C_fcall f_4768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4893)
static void C_ccall f_4893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4785)
static void C_fcall f_4785(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_fcall f_2184(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5808)
static void C_fcall f_5808(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1992)
static void C_fcall f_1992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_fcall f_5562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_fcall f_2142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3136)
static void C_fcall f_3136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3526)
static void C_fcall trf_3526(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3526(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3526(t0,t1,t2);}

C_noret_decl(trf_1958)
static void C_fcall trf_1958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1958(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1958(t0,t1);}

C_noret_decl(trf_4650)
static void C_fcall trf_4650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4650(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4650(t0,t1);}

C_noret_decl(trf_5017)
static void C_fcall trf_5017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5017(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5017(t0,t1);}

C_noret_decl(trf_3868)
static void C_fcall trf_3868(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3868(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3868(t0,t1,t2);}

C_noret_decl(trf_6155)
static void C_fcall trf_6155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6155(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6155(t0,t1);}

C_noret_decl(trf_5317)
static void C_fcall trf_5317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5317(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5317(t0,t1);}

C_noret_decl(trf_2957)
static void C_fcall trf_2957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2957(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2957(t0,t1);}

C_noret_decl(trf_5313)
static void C_fcall trf_5313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5313(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5313(t0,t1);}

C_noret_decl(trf_2968)
static void C_fcall trf_2968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2968(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2968(t0,t1);}

C_noret_decl(trf_5611)
static void C_fcall trf_5611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5611(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5611(t0,t1);}

C_noret_decl(trf_2914)
static void C_fcall trf_2914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2914(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2914(t0,t1,t2,t3);}

C_noret_decl(trf_4207)
static void C_fcall trf_4207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4207(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4207(t0,t1);}

C_noret_decl(trf_2463)
static void C_fcall trf_2463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2463(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2463(t0,t1,t2);}

C_noret_decl(trf_3589)
static void C_fcall trf_3589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3589(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3589(t0,t1);}

C_noret_decl(trf_4063)
static void C_fcall trf_4063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4063(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4063(t0,t1,t2);}

C_noret_decl(trf_3599)
static void C_fcall trf_3599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3599(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3599(t0,t1,t2,t3);}

C_noret_decl(trf_4601)
static void C_fcall trf_4601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4601(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4601(t0,t1,t2,t3);}

C_noret_decl(trf_4280)
static void C_fcall trf_4280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4280(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4280(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5057)
static void C_fcall trf_5057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5057(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5057(t0,t1,t2);}

C_noret_decl(trf_4455)
static void C_fcall trf_4455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4455(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4455(t0,t1);}

C_noret_decl(trf_4459)
static void C_fcall trf_4459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4459(t0,t1);}

C_noret_decl(trf_5363)
static void C_fcall trf_5363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5363(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5363(t0,t1,t2);}

C_noret_decl(trf_4487)
static void C_fcall trf_4487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4487(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4487(t0,t1,t2,t3);}

C_noret_decl(trf_5358)
static void C_fcall trf_5358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5358(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5358(t0,t1);}

C_noret_decl(trf_4687)
static void C_fcall trf_4687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4687(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4687(t0,t1);}

C_noret_decl(trf_3257)
static void C_fcall trf_3257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3257(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3257(t0,t1,t2);}

C_noret_decl(trf_3286)
static void C_fcall trf_3286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3286(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3286(t0,t1,t2,t3);}

C_noret_decl(trf_2856)
static void C_fcall trf_2856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2856(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2856(t0,t1,t2);}

C_noret_decl(trf_5906)
static void C_fcall trf_5906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5906(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5906(t0,t1,t2);}

C_noret_decl(trf_4412)
static void C_fcall trf_4412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4412(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4412(t0,t1,t2);}

C_noret_decl(trf_5728)
static void C_fcall trf_5728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5728(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5728(t0,t1,t2);}

C_noret_decl(trf_4996)
static void C_fcall trf_4996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4996(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4996(t0,t1,t2);}

C_noret_decl(trf_4990)
static void C_fcall trf_4990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4990(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4990(t0,t1);}

C_noret_decl(trf_6072)
static void C_fcall trf_6072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6072(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6072(t0,t1);}

C_noret_decl(trf_3996)
static void C_fcall trf_3996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3996(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3996(t0,t1,t2);}

C_noret_decl(trf_4479)
static void C_fcall trf_4479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4479(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4479(t0,t1);}

C_noret_decl(trf_2092)
static void C_fcall trf_2092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2092(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2092(t0,t1,t2);}

C_noret_decl(trf_5758)
static void C_fcall trf_5758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5758(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5758(t0,t1,t2);}

C_noret_decl(trf_4307)
static void C_fcall trf_4307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4307(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4307(t0,t1,t2);}

C_noret_decl(trf_3950)
static void C_fcall trf_3950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3950(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3950(t0,t1,t2);}

C_noret_decl(trf_3900)
static void C_fcall trf_3900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3900(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3900(t0,t1,t2);}

C_noret_decl(trf_4555)
static void C_fcall trf_4555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4555(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4555(t0,t1,t2,t3);}

C_noret_decl(trf_2996)
static void C_fcall trf_2996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2996(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2996(t0,t1);}

C_noret_decl(trf_1860)
static void C_fcall trf_1860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1860(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1860(t0,t1);}

C_noret_decl(trf_2515)
static void C_fcall trf_2515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2515(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2515(t0,t1,t2);}

C_noret_decl(trf_5788)
static void C_fcall trf_5788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5788(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5788(t0,t1,t2);}

C_noret_decl(trf_4146)
static void C_fcall trf_4146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4146(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4146(t0,t1,t2);}

C_noret_decl(trf_4335)
static void C_fcall trf_4335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4335(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4335(t0,t1,t2,t3);}

C_noret_decl(trf_4736)
static void C_fcall trf_4736(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4736(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4736(t0,t1);}

C_noret_decl(trf_5169)
static void C_fcall trf_5169(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5169(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5169(t0,t1);}

C_noret_decl(trf_5164)
static void C_fcall trf_5164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5164(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5164(t0,t1);}

C_noret_decl(trf_4738)
static void C_fcall trf_4738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4738(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4738(t0,t1,t2);}

C_noret_decl(trf_2332)
static void C_fcall trf_2332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2332(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2332(t0,t1);}

C_noret_decl(trf_5187)
static void C_fcall trf_5187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5187(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5187(t0,t1,t2);}

C_noret_decl(trf_5181)
static void C_fcall trf_5181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5181(t0,t1,t2);}

C_noret_decl(trf_5174)
static void C_fcall trf_5174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5174(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5174(t0,t1);}

C_noret_decl(trf_4381)
static void C_fcall trf_4381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4381(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4381(t0,t1,t2,t3);}

C_noret_decl(trf_2736)
static void C_fcall trf_2736(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2736(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2736(t0,t1,t2);}

C_noret_decl(trf_4884)
static void C_fcall trf_4884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4884(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4884(t0,t1,t2,t3);}

C_noret_decl(trf_3112)
static void C_fcall trf_3112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3112(t0,t1,t2);}

C_noret_decl(trf_5258)
static void C_fcall trf_5258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5258(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5258(t0,t1,t2);}

C_noret_decl(trf_4944)
static void C_fcall trf_4944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4944(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4944(t0,t1,t2);}

C_noret_decl(trf_4938)
static void C_fcall trf_4938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4938(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4938(t0,t1,t2);}

C_noret_decl(trf_4820)
static void C_fcall trf_4820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4820(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4820(t0,t1,t2,t3);}

C_noret_decl(trf_4956)
static void C_fcall trf_4956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4956(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4956(t0,t1,t2);}

C_noret_decl(trf_5828)
static void C_fcall trf_5828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5828(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5828(t0,t1,t2);}

C_noret_decl(trf_5273)
static void C_fcall trf_5273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5273(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5273(t0,t1,t2);}

C_noret_decl(trf_4768)
static void C_fcall trf_4768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4768(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4768(t0,t1,t2);}

C_noret_decl(trf_4785)
static void C_fcall trf_4785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4785(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4785(t0,t1,t2);}

C_noret_decl(trf_2184)
static void C_fcall trf_2184(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2184(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2184(t0,t1,t2);}

C_noret_decl(trf_5808)
static void C_fcall trf_5808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5808(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5808(t0,t1,t2);}

C_noret_decl(trf_1992)
static void C_fcall trf_1992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1992(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1992(t0,t1);}

C_noret_decl(trf_5562)
static void C_fcall trf_5562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5562(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5562(t0,t1,t2);}

C_noret_decl(trf_2142)
static void C_fcall trf_2142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2142(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2142(t0,t1);}

C_noret_decl(trf_3136)
static void C_fcall trf_3136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3136(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3136(t0,t1,t2);}

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

/* k5635 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in ... */
static void C_ccall f_5637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5637,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1077: symbol-escape */
t3=C_fast_retrieve(lf[315]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
/* csi.scm:1076: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[322]);}}
else{
t2=((C_word*)t0)[2];
f_5352(2,t2,C_SCHEME_UNDEFINED);}}

/* k5638 in k5635 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in ... */
static void C_ccall f_5639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1077: symbol-escape */
t2=C_fast_retrieve(lf[315]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3160 in map-loop403 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3161,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3136(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3136(t6,((C_word*)t0)[5],t5);}}

/* ##sys#sharp-number-hook in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1925,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1932,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:169: history-ref */
t5=C_fast_retrieve(lf[26]);
f_2219(3,t5,t4,t3);}

/* k3890 in doloop577 in k3858 in k3855 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3868(t3,((C_word*)t0)[4],t2);}

/* k3520 in k3509 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3521,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3526,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3526(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* doloop541 in k3520 in k3509 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_fcall f_3526(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3526,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3535,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* csi.scm:639: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[3],lf[186],t4);}}

/* k2710 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2712,tmp=(C_word)a,a+=2,tmp);
t3=C_retrieve2(lf[63],"command-table");
t4=C_i_check_list_2(C_retrieve2(lf[63],"command-table"),lf[92]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2731,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2736,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2736(t9,t5,C_retrieve2(lf[63],"command-table"));}

/* f_2712 in k2710 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2712,3,t0,t1,t2);}
t3=C_i_caddr(t2);
if(C_truep(t3)){
/* csi.scm:412: print */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,C_make_character(32),t3);}
else{
t4=t2;
t5=C_u_i_car(t4);
/* csi.scm:413: print */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[120],t5);}}

/* k5646 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in ... */
static void C_ccall f_5648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5648,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* csi.scm:1074: parentheses-synonyms */
t3=C_fast_retrieve(lf[316]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
/* csi.scm:1073: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[324]);}}
else{
t2=((C_word*)t0)[2];
f_5350(2,t2,C_SCHEME_UNDEFINED);}}

/* lp in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static C_word C_fcall f_3177(C_word t1,C_word t2){
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
if(C_truep(C_i_pairp(t1))){
t3=t1;
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t4);
t6=C_i_cdr(t2);
t7=C_eqp(t5,t6);
if(C_truep(t7)){
return(t7);}
else{
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* k1956 in chop-separator in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_1958(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:183: substring */
t2=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3538 in k3536 in k3534 in doloop541 in k3520 in k3509 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3526(t3,((C_word*)t0)[4],t2);}

/* f_3548 in k3534 in doloop541 in k3520 in k3509 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in ... */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3548,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:643: write */
t3=*((C_word*)lf[185]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[3]);}

/* k2636 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k3534 in doloop541 in k3520 in k3509 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:640: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t2,C_fix(1000),t3);}

/* k3536 in k3534 in doloop541 in k3520 in k3509 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in ... */
static void C_ccall f_3537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:644: newline */
t3=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5623 in k5621 in k5618 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in ... */
static void C_ccall f_5624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1081: keyword-style */
t3=C_fast_retrieve(lf[317]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[318]);}

/* k5625 in k5623 in k5621 in k5618 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in ... */
static void C_ccall f_5626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1082: parentheses-synonyms */
t3=C_fast_retrieve(lf[316]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k5627 in k5625 in k5623 in k5621 in k5618 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1083: symbol-escape */
t2=C_fast_retrieve(lf[315]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2622 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2623,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6738,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:363: read-line */
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_retrieve2(lf[8],"default-editor");
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:363: read-line */
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2619 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:360: system */
t2=C_fast_retrieve(lf[102]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5618 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in ... */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5620,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_5622(2,t3,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:1079: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[320]);}}
else{
t2=((C_word*)t0)[2];
f_5354(2,t2,C_SCHEME_UNDEFINED);}}

/* k5621 in k5618 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in ... */
static void C_ccall f_5622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1080: case-sensitive */
t3=C_fast_retrieve(lf[319]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k1931 in sharp-number-hook in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1932,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[24],t1));}

/* dirseparator? in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1934,3,t0,t1,t2);}
t3=C_i_char_equalp(t2,C_make_character(92));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47))));}

/* k3565 in k3573 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:628: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[192],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2658 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k5649 in k5646 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in ... */
static void C_ccall f_5650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1074: parentheses-synonyms */
t2=C_fast_retrieve(lf[316]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4026 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4027,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:723: g633 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}
else{
t2=C_i_assq(((C_word*)t0)[5],C_retrieve2(lf[154],"##csi#bytevector-data"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4044,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:723: g644 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(0));
/* csi.scm:729: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,((C_word*)t0)[3],lf[239],t4);}}}

/* ##csi#chop-separator in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_1946,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_i_string_ref(t2,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1958,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t7=C_i_char_equalp(t5,C_make_character(92));
t8=t6;
f_1958(t8,(C_truep(t7)?t7:C_i_char_equalp(t5,C_make_character(47))));}
else{
t7=t6;
f_1958(t7,C_SCHEME_FALSE);}}

/* k2647 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k4648 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4650(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm:815: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[261],((C_word*)t0)[3]);}
else{
/* csi.scm:815: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[262],((C_word*)t0)[3]);}}

/* f_3876 in doloop577 in k3858 in k3855 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3876,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(0));
t4=C_slot(t2,C_fix(1));
/* csi.scm:704: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,((C_word*)t0)[2],lf[228],t3,t4);}

/* k3710 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:664: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[209],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k3823 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:685: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[221],t1);}

/* k4004 in for-each-loop604 in k3937 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in ... */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3996(t3,((C_word*)t0)[4],t2);}

/* k6102 in k6096 in k6111 in k6081 in k6070 */
static void C_ccall f_6103(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6103,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,((C_word*)t0)[7],t7));}

/* k4635 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:829: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k4637 in k4635 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in ... */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:829: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[259],((C_word*)t0)[3]);}

/* k6111 in k6081 in k6070 */
static void C_ccall f_6112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6112,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,lf[376],t3);
t5=C_a_i_cons(&a,2,t1,t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:916: rename1001 */
t7=((C_word*)t0)[6];
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,lf[377]);}

/* k3845 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:691: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[225],t1);}

/* k6162 in k6154 in k6152 in a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:436: printf */
t2=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[392]);}

/* k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_5017(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5017,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(58),t2))){
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:955: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4996(t5,((C_word*)t0)[5],t4);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5091,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:956: substring */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5098,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:960: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4996(t5,t2,t4);}}

/* k6176 in k6154 in k6152 in a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6177,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:434: g331 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
/* csi.scm:444: printf */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[388],((C_word*)((C_word*)t0)[2])[1]);}}

/* doloop577 in k3858 in k3855 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in ... */
static void C_fcall f_3868(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3868,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[92]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3892,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3900,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3900(t10,t6,t4);}}

/* a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6153,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:431: read */
t3=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3855 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(4));
/* csi.scm:696: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[3],lf[229],t3);}

/* k3858 in k3855 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_3859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3859,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3868,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3868(t7,((C_word*)t0)[4],C_fix(0));}

/* k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in ... */
static void C_ccall f_5328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5328,2,t0,t1);}
t2=C_fast_retrieve(lf[279]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1054: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5181(t4,t3,lf[337]);}

/* k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in ... */
static void C_ccall f_5323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5323,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[92]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5828,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5828(t7,t3,t1);}

/* k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in ... */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5321,2,t0,t1);}
t2=C_fast_retrieve(lf[279]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1053: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5181(t4,t3,lf[338]);}

/* k6154 in k6152 in a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_6155(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6155,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
if(C_truep(C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6196,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:439: ##sys#resolve-module-name */
((C_proc4)C_fast_retrieve_symbol_proc(lf[390]))(4,*((C_word*)lf[390]+1),t4,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE);}
else{
/* csi.scm:438: printf */
t3=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],lf[391],((C_word*)((C_word*)t0)[2])[1]);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6163,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:435: ##sys#switch-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[387]))(3,*((C_word*)lf[387]+1),t3,C_SCHEME_FALSE);}}

/* k6152 in a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6153,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6155,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t2)[1]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6206,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:433: ##sys#string->symbol */
((C_proc3)C_fast_retrieve_symbol_proc(lf[393]))(3,*((C_word*)lf[393]+1),t4,((C_word*)t2)[1]);}
else{
t4=t3;
f_6155(t4,C_SCHEME_UNDEFINED);}}

/* k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in ... */
static void C_fcall f_5317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5317,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;
f_5319(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5861,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1047: load-verbose */
t4=C_fast_retrieve(lf[342]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}}

/* k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in ... */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5867,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1043: member* */
f_4938(t3,lf[345],((C_word*)((C_word*)t0)[6])[1]);}

/* k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in ... */
static void C_ccall f_5319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5849,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1049: member* */
f_4938(t3,lf[341],((C_word*)((C_word*)t0)[6])[1]);}

/* ##csi#report in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2950r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2950r(t0,t1,t2);}}

static void C_ccall f_2950r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t4=t2;
t5=t3;
f_2957(t5,C_u_i_car(t4));}
else{
t4=t3;
f_2957(t4,*((C_word*)lf[51]+1));}}

/* k2956 in report in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2957(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2957,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:477: with-output-to-port */
t3=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[6],t1,t2);}

/* f_2959 in k2956 in report in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2962,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:479: gc */
t3=C_fast_retrieve(lf[153]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in ... */
static void C_ccall f_5608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_5611(t3,t1);}
else{
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=t2;
f_5611(t4,t3);}
else{
t4=((C_word*)t0)[4];
t5=t2;
f_5611(t5,t4);}}}

/* k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in ... */
static void C_fcall f_5313(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5313,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[346],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5884,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1041: chicken-version */
t5=C_fast_retrieve(lf[20]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=t2;
f_5315(2,t3,C_SCHEME_UNDEFINED);}}

/* k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in ... */
static void C_ccall f_5311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_member(lf[347],((C_word*)((C_word*)t0)[6])[1]))){
t3=C_set_block_item(lf[348] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_5313(t4,t3);}
else{
t3=t2;
f_5313(t3,C_SCHEME_UNDEFINED);}}

/* k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3575,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:629: ##sys#interned-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[194]))(3,*((C_word*)lf[194]+1),t3,((C_word*)t0)[2]);}

/* k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:627: ##sys#qualified-symbol? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[195]))(3,*((C_word*)lf[195]+1),t2,((C_word*)t0)[2]);}

/* k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5891,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1033: member* */
f_4938(t3,lf[349],((C_word*)((C_word*)t0)[6])[1]);}

/* k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2982,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2983,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t1,lf[92]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3112,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3112(t10,t6,t1);}

/* f_2983 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_2983(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2983,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2986,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:488: printf */
t4=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[131],t2);}

/* k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fast_retrieve(lf[148]);
t8=C_fast_retrieve(lf[4]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3136,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3136(t13,t9,C_fast_retrieve(lf[4]));}

/* k2985 */
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
C_word t10;
C_word t11;
C_word t12;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2986,2,t0,t1);}
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_a_i_minus(&a,2,C_fix(16),t2);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_less_or_equalp(((C_word*)t4)[1],C_fix(0)))){
t8=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t10=C_a_i_plus(&a,2,((C_word*)t4)[1],C_fix(18));
t11=C_set_block_item(t4,0,t10);
t12=t7;
f_2996(t12,t11);}
else{
t8=t7;
f_2996(t8,C_SCHEME_UNDEFINED);}}

/* f_5300 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in ... */
static void C_ccall f_5300(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5300,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* lp in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static C_word C_fcall f_3210(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(t1);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
return(t3);}
else{
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* k2961 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:480: ##sys#symbol-table-info */
((C_proc2)C_fast_retrieve_symbol_proc(lf[152]))(2,*((C_word*)lf[152]+1),t2);}

/* k2963 in k2961 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:481: memory-statistics */
t3=C_fast_retrieve(lf[151]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2965 in k2963 in k2961 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2968,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:483: printf */
t4=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[150]);}

/* shorten in k2965 in k2963 in k2961 */
static void C_fcall f_2968(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2968,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm:482: truncate */
t5=*((C_word*)lf[128]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5609 in k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in ... */
static void C_fcall f_5611(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5611,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5356(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5228,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1018: ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),t2,lf[313],lf[0]);}}

/* k3509 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3511,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
if(C_truep(C_i_nullp(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[47]+1));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3521,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:636: display */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[187],((C_word*)t0)[4]);}}

/* k2419 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:336: read */
t3=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2421 in k2419 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:337: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k2423 in k2421 in k2419 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:338: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* doloop369 in k2911 */
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2914,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_eofp(t2))){
/* csi.scm:461: reverse */
t4=*((C_word*)lf[369]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2930,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:459: read */
t5=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k2425 in k2423 in k2421 in k2419 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:339: dump */
t2=C_fast_retrieve(lf[80]);
f_4140(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2911 */
static void C_ccall f_2912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2912,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2914,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2914(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3830(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3830,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3834,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:688: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],lf[224],t2);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3846,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:691: ##sys#lambda-info->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[226]))(3,*((C_word*)lf[226]+1),t2,((C_word*)t0)[2]);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[227]))){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[230]:lf[231]);
t6=C_slot(((C_word*)t0)[2],C_fix(3));
/* csi.scm:694: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t3,((C_word*)t0)[4],lf[232],t2,t5,t6);}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[233]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
/* csi.scm:708: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[4],lf[236],t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:724: ##sys#hash-table-ref */
((C_proc4)C_fast_retrieve_symbol_proc(lf[240]))(4,*((C_word*)lf[240]+1),t3,C_retrieve2(lf[156],"describer-table"),t2);}
else{
/* csi.scm:731: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[241]);}}}}}}

/* k3833 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:689: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4276(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],*((C_word*)lf[223]+1),((C_word*)t0)[5]);}

/* k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_2949(2,t3,t1);}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[384]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_PREFIX),C_fix(0));}}

/* f_2940 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! ##csi#report ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2950,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t3=C_mutate(&lf[154] /* (set! ##csi#bytevector-data ...) */,lf[155]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:567: make-vector */
t5=*((C_word*)lf[383]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(37),C_SCHEME_END_OF_LIST);}

/* k4214 in k4205 in k4166 */
static void C_ccall f_4215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:754: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4276(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[223]+1),((C_word*)t0)[4]);}

/* k2974 in shorten in k2965 in k2963 in k2961 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2975,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_divide(&a,2,t1,C_fix(100)));}

/* k4205 in k4166 */
static void C_fcall f_4207(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4207,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4215,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_block_size(t2);
/* csi.scm:754: bestlen */
t5=((C_word*)t0)[5];
f_4146(t5,t3,t4);}
else{
/* csi.scm:755: ##sys#error */
t2=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[251],lf[254],((C_word*)t0)[2]);}}

/* for-each-loop235 in k2454 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2463(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2463,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2472,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:343: g236 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_3589(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3589,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:646: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[201]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
/* csi.scm:656: descseq */
t2=((C_word*)t0)[5];
f_3246(6,t2,((C_word*)t0)[4],lf[202],((C_word*)t0)[6],((C_word*)t0)[7],C_fix(0));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* csi.scm:657: fprintf */
t6=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,((C_word*)t0)[4],((C_word*)t0)[3],lf[203],t3,t5);}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3687,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3690,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:661: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t3,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:663: port? */
t3=C_fast_retrieve(lf[244]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}}}}

/* k2454 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=C_fast_retrieve(lf[87]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2463,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2463(t7,t3,t1);}

/* f_2906 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2906,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:459: read */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2456 in k2454 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* f_2901 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:458: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k3576 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3506(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:626: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[196],((C_word*)t0)[3]);}}

/* f_2935 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2935r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2935r(t0,t1,t2);}}

static void C_ccall f_2935r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:458: k361 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3573 in k3507 in k3505 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=(C_truep(t1)?lf[188]:lf[189]);
t3=(C_truep(((C_word*)t0)[2])?lf[190]:lf[191]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3566,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:632: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[193]))(3,*((C_word*)lf[193]+1),t4,((C_word*)t0)[5]);}
else{
/* csi.scm:633: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),t4,((C_word*)t0)[5]);}}

/* k2929 in doloop369 in k2911 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_2914(t3,((C_word*)t0)[5],t1,t2);}

/* map-loop649 */
static void C_fcall f_4063(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4063,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:727: g655 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3590 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3591,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3599(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* loop-print in k3590 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_3599(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3599,NULL,4,t0,t1,t2,t3);}
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
/* csi.scm:650: printf */
t6=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,lf[198]);}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
/* csi.scm:652: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,((C_word*)t0)[2],lf[199]);}
else{
t7=t2;
t8=C_u_i_car(t7);
if(C_truep(C_i_memq(t8,t3))){
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3628,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* csi.scm:654: fprintf */
t12=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t9,((C_word*)t0)[2],lf[200],t11);}}}}

/* k2603 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=t1;
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* csi.scm:365: printf */
t4=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],lf[101],t1);}}

/* k4609 in for-each-loop822 in k4526 in k4524 in k4522 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in ... */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4601(t4,((C_word*)t0)[5],t2,t3);}

/* k4049 */
static void C_ccall f_4050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4056 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4058,2,t0,t1);}
t2=C_a_i_list1(&a,1,C_fix(0));
/* csi.scm:727: append */
t3=*((C_word*)lf[238]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* f_2211 in k2196 in k2194 in k2192 in doloop130 in history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2211,2,t0,t1);}
t2=C_i_vector_ref(C_fast_retrieve(lf[44]),((C_word*)t0)[2]);
/* csi.scm:250: ##sys#print */
t3=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,C_SCHEME_TRUE,*((C_word*)lf[51]+1));}

/* k5964 in k5957 in k5955 in k5953 in k5951 in k5949 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in ... */
static void C_ccall f_5965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
f_5164(t4,C_i_set_car(t3,t1));}
else{
t2=((C_word*)t0)[3];
f_5164(t2,C_SCHEME_FALSE);}}

/* ##csi#history-ref in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2219,3,t0,t1,t2);}
t3=C_i_inexact_to_exact(t2);
t4=C_fixnum_greaterp(t3,C_fix(0));
t5=(C_truep(t4)?C_fixnum_less_or_equal_p(t3,C_fast_retrieve(lf[25])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_ref(C_fast_retrieve(lf[44]),t3));}
else{
/* csi.scm:257: ##sys#error */
t6=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[57],t2);}}

/* for-each-loop822 in k4526 in k4524 in k4522 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_fcall f_4601(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4601,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4610,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:833: g823 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_4044 in k4026 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_4044(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4044,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4050,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[65]);
t9=C_i_cdr(t2);
t10=C_i_check_list_2(t9,lf[237]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4058,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4063,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_4063(t15,t11,t9);}

/* k4297 in k4283 in justify in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,t2);}

/* k5955 in k5953 in k5951 in k5949 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in ... */
static void C_ccall f_5956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:992: register-feature! */
t3=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[358]);}

/* k5953 in k5951 in k5949 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_5954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:991: register-feature! */
t3=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[359]);}

/* justify in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4280(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4280,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:765: number->string */
C_number_to_string(4,0,t6,t2,t4);}

/* k5957 in k5955 in k5953 in k5951 in k5949 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_ccall f_5958(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5958,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_set_i_slot(t3,C_fix(1),C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[357]+1))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:995: lookup-script-file */
t7=C_fast_retrieve(lf[36]);
f_2041(3,t7,t5,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];
f_5164(t6,t5);}}

/* k4283 in justify in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4284,2,t0,t1);}
t2=C_block_size(t1);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4298,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(((C_word*)t0)[2],t2);
/* csi.scm:768: make-string */
t5=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[4]);}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4031 in k4026 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4031,3,t0,t1,t2);}
/* csi.scm:724: g641 */
t3=t2;
((C_proc4)C_fast_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5048 in k5029 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5053,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* csi.scm:958: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4996(t5,t2,t4);}

/* k5951 in k5949 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_5952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* csi.scm:990: command-line-arguments */
t6=C_fast_retrieve(lf[302]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,t5);}

/* k5949 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:989: program-name */
t4=C_fast_retrieve(lf[360]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k4443 in k4428 in doloop732 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:785: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4446 in k4428 in doloop732 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:785: justify */
f_4280(((C_word*)t0)[3],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k5944 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_5945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5169(t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
f_5169(t3,t2);}}

/* ##csi#hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4276,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4280,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4307,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t4,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_4307(t10,t1,C_fix(0));}

/* k5936 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in ... */
static void C_ccall f_5937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csi.scm:1006: string-split */
t3=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[351]);}
else{
/* csi.scm:1006: string-split */
t2=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[352],lf[351]);}}

/* map-loop1060 in k5029 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_5057(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5057,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:958: g1066 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5052 in k5048 in k5029 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:958: append */
t2=*((C_word*)lf[238]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5029 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5030,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5127,tmp=(C_word)a,a+=2,tmp);
t4=f_5127(t2);
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5041,tmp=(C_word)a,a+=2,tmp);
t10=t1;
t11=C_i_check_list_2(t10,lf[237]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5057,a[2]=t8,a[3]=t14,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_5057(t16,t12,t10);}
else{
/* csi.scm:959: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],lf[272],((C_word*)t0)[5]);}}

/* k5930 in map-loop1165 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_ccall f_5931(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5931,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5906(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5906(t6,((C_word*)t0)[5],t5);}}

/* k4095 in k4026 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:730: descseq */
t2=((C_word*)t0)[2];
f_3246(6,t2,((C_word*)t0)[3],C_SCHEME_FALSE,*((C_word*)lf[180]+1),*((C_word*)lf[182]+1),C_fix(1));}

/* k4420 in doloop740 in doloop732 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4412(t3,((C_word*)t0)[4],t2);}

/* k2675 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2676,2,t0,t1);}
t2=C_i_numberp(t1);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_4687(t5,t3);}
else{
t5=C_i_not(C_fast_retrieve(lf[110]));
if(C_truep(t5)){
t6=t4;
f_4687(t6,t5);}
else{
t6=C_fixnum_lessp(t1,C_fix(0));
if(C_truep(t6)){
t7=t4;
f_4687(t7,t6);}
else{
t7=C_i_length(C_fast_retrieve(lf[110]));
t8=t4;
f_4687(t8,C_fixnum_greater_or_equal_p(t1,t7));}}}}

/* k2669 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k4428 in doloop732 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4444,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:785: ref */
t5=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[9],((C_word*)t0)[3]);}

/* f_5041 in k5029 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5041,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,2,C_make_character(45),t2));}

/* k4087 in map-loop649 */
static void C_ccall f_4088(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4088,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4063(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4063(t6,((C_word*)t0)[5],t5);}}

/* k2408 in k2406 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:333: dump */
t2=C_fast_retrieve(lf[80]);
f_4140(3,t2,((C_word*)t0)[2],t1);}

/* k2406 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:332: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4452 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:773: display */
t2=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2201 in k2199 in k2196 in k2194 in k2192 in doloop130 in history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2184(t3,((C_word*)t0)[4],t2);}

/* show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4455(C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4455,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4459,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[110]);
t5=(C_truep(C_fast_retrieve(lf[110]))?C_fast_retrieve(lf[110]):C_SCHEME_END_OF_LIST);
t6=C_i_length(t5);
t7=t2;
t8=(C_truep(C_u_i_memq(t7,t5))?t2:C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4479,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_4479(t10,t8);}
else{
if(C_truep(C_fixnum_greaterp(t6,C_fix(0)))){
t10=C_fixnum_difference(t6,C_fix(1));
t11=t9;
f_4479(t11,C_i_list_ref(t5,t10));}
else{
t10=t9;
f_4479(t10,C_SCHEME_FALSE);}}}

/* k2199 in k2196 in k2194 in k2192 in doloop130 in history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:251: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* prin1 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4459(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4459,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4465,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:805: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t1,C_fix(100),t3);}

/* k5090 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[273]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in ... */
static void C_fcall f_5363(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5363,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(((C_word*)t3)[1]))){
if(C_truep(((C_word*)t0)[2])){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5375,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5380,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1090: call/cc */
t6=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[282]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5397,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_cdr(((C_word*)t3)[1]);
t36=t1;
t37=t7;
t1=t36;
t2=t37;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[283]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[284]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[285]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[286]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[287]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[288]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[289]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t9=C_i_cdr(((C_word*)t3)[1]);
t36=t1;
t37=t9;
t1=t36;
t2=t37;
goto loop;}
else{
t7=C_i_string_equal_p(lf[290],t4);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(lf[291],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5423,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5434,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1100: string->symbol */
t12=*((C_word*)lf[293]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}
else{
t9=C_u_i_string_equal_p(lf[294],t4);
t10=(C_truep(t9)?t9:C_u_i_string_equal_p(lf[295],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5447,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_i_cadr(((C_word*)t3)[1]);
/* csi.scm:1103: evalstring */
f_5258(t11,t12,C_SCHEME_END_OF_LIST);}
else{
t11=C_u_i_string_equal_p(lf[296],t4);
t12=(C_truep(t11)?t11:C_u_i_string_equal_p(lf[297],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5462,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5469,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1106: evalstring */
f_5258(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_u_i_string_equal_p(lf[298],t4);
t14=(C_truep(t13)?t13:C_u_i_string_equal_p(lf[299],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5482,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5489,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1109: evalstring */
f_5258(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[5])?C_i_car(((C_word*)t0)[5]):C_SCHEME_FALSE);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5496,a[2]=t15,a[3]=t6,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[303],t15))){
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5543,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1113: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[309]))(5,*((C_word*)lf[309]+1),t16,t4,t17,C_SCHEME_FALSE);}
else{
/* csi.scm:1113: ##sys#load */
((C_proc5)C_fast_retrieve_symbol_proc(lf[309]))(5,*((C_word*)lf[309]+1),t16,t4,C_SCHEME_FALSE,C_SCHEME_FALSE);}}}}}}}}}

/* k2695 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:382: system */
t3=C_fast_retrieve(lf[102]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4487(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4487,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_eqp(C_retrieve2(lf[7],"selected-frame"),t4);
t6=C_slot(t4,C_fix(1));
t7=C_slot(t4,C_fix(2));
t8=C_i_structurep(t7,lf[113]);
t9=(C_truep(t8)?C_slot(t7,C_fix(1)):t7);
t10=*((C_word*)lf[51]+1);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4508,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t5,a[7]=t8,a[8]=((C_word*)t0)[3],a[9]=t7,a[10]=t6,a[11]=t9,a[12]=t10,a[13]=t4,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t5)){
/* csi.scm:815: display */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_make_character(42),*((C_word*)lf[51]+1));}
else{
/* csi.scm:815: display */
t12=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_make_character(32),t10);}}}

/* k2697 in k2695 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2700,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,t1);
/* csi.scm:383: history-add */
t4=C_fast_retrieve(lf[46]);
f_2134(3,t4,t2,t3);}

/* descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3246,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3359,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:578: plen */
t7=t3;
((C_proc3)C_fast_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[3]);}

/* k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in ... */
static void C_fcall f_5358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5358,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5363,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5363(t5,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in ... */
static void C_ccall f_5356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_5358(t4,t3);}
else{
t3=t2;
f_5358(t3,C_SCHEME_UNDEFINED);}}

/* k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in ... */
static void C_ccall f_5354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5608,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1084: member* */
f_4938(t3,lf[314],((C_word*)((C_word*)t0)[6])[1]);}

/* k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in ... */
static void C_ccall f_5352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5620,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1078: member* */
f_4938(t3,lf[321],((C_word*)((C_word*)t0)[6])[1]);}

/* k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in ... */
static void C_ccall f_5350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5637,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1075: member* */
f_4938(t3,lf[323],((C_word*)((C_word*)t0)[6])[1]);}

/* k4430 in k4428 in doloop732 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4381(t4,((C_word*)t0)[5],t2,t3);}

/* k2687 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2688(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2688,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[110]);
t4=(C_truep(C_fast_retrieve(lf[110]))?C_fast_retrieve(lf[110]):C_SCHEME_END_OF_LIST);
t5=C_i_length(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4736,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
t7=t6;
f_4736(t7,C_slot(t1,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t1))){
t7=t6;
f_4736(t7,t1);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4931,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:872: display */
t8=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[117]);}}}

/* k5097 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5098,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3237,2,t0,t1);}
t2=C_mutate(&lf[156] /* (set! describer-table ...) */,t1);
t3=*((C_word*)lf[157]+1);
t4=*((C_word*)lf[158]+1);
t5=*((C_word*)lf[159]+1);
t6=C_mutate((C_word*)lf[78]+1 /* (set! ##csi#describe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3239,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[248]+1 /* (set! set-describer! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4131,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[80]+1 /* (set! ##csi#dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4140,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[222]+1 /* (set! ##csi#hexdump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4276,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[107] /* (set! show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4455,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6058,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:915: ##sys#current-environment */
((C_proc2)C_fast_retrieve_symbol_proc(lf[382]))(2,*((C_word*)lf[382]+1),t12);}

/* k5446 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5363(t5,((C_word*)t0)[4],t4);}

/* k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in ... */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5346,2,t0,t1);}
t2=C_mutate((C_word*)lf[142]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=C_i_cdr(((C_word*)t0)[9]);
if(C_truep(C_i_pairp(t4))){
t5=C_i_cadr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[326],t5))){
/* csi.scm:1067: keyword-style */
t6=C_fast_retrieve(lf[317]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t3,lf[327]);}
else{
t6=((C_word*)t0)[9];
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
if(C_truep(C_i_string_equal_p(lf[328],t8))){
/* csi.scm:1069: keyword-style */
t9=C_fast_retrieve(lf[317]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t3,lf[318]);}
else{
t9=((C_word*)t0)[9];
t10=C_u_i_cdr(t9);
t11=C_u_i_car(t10);
if(C_truep(C_i_string_equal_p(lf[329],t11))){
/* csi.scm:1071: keyword-style */
t12=C_fast_retrieve(lf[317]);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t3,lf[330]);}
else{
t12=t3;
f_5348(2,t12,C_SCHEME_UNDEFINED);}}}}
else{
/* csi.scm:1065: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,lf[331]);}}
else{
t4=t3;
f_5348(2,t4,C_SCHEME_UNDEFINED);}}

/* k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in ... */
static void C_ccall f_5348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5648,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1072: member* */
f_4938(t3,lf[325],((C_word*)((C_word*)t0)[6])[1]);}

/* k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in ... */
static void C_ccall f_5342(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5710,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[29]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5713,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=t7,a[6]=t5,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1058: collect-options */
t10=((C_word*)((C_word*)t0)[11])[1];
f_5181(t10,t9,lf[335]);}

/* k5422 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5363(t5,((C_word*)t0)[4],t4);}

/* k5081 in map-loop1060 in k5029 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5082(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5082,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5057(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5057(t6,((C_word*)t0)[5],t5);}}

/* ##csi#describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_3239r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3239r(t0,t1,t2,t3);}}

static void C_ccall f_3239r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[51]+1):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3246,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3361,a[2]=t1,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_permanentp(t2))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4123,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:601: ##sys#block-address */
((C_proc3)C_fast_retrieve_symbol_proc(lf[247]))(3,*((C_word*)lf[247]+1),t8,t2);}
else{
t8=t7;
f_3361(2,t8,C_SCHEME_UNDEFINED);}}

/* k4685 in k2675 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4687(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
/* csi.scm:853: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[109]);}
else{
t2=C_i_length(C_fast_retrieve(lf[110]));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_difference(t2,t3);
t5=C_i_list_ref(C_fast_retrieve(lf[110]),t4);
t6=C_mutate(&lf[7] /* (set! selected-frame ...) */,t5);
/* csi.scm:859: show-frameinfo */
f_4455(((C_word*)t0)[2],C_retrieve2(lf[7],"selected-frame"));}}

/* k5433 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5434,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,3,lf[292],t2,C_SCHEME_TRUE);
/* csi.scm:1100: eval */
t4=C_fast_retrieve(lf[65]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in ... */
static void C_ccall f_5335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5335,2,t0,t1);}
t2=C_fast_retrieve(lf[280]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* csi.scm:1055: collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5181(t4,t3,lf[336]);}

/* k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in ... */
static void C_ccall f_5337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5337,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[92]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5788,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5788(t7,t3,t1);}

/* k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in ... */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5330,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[92]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5808,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5808(t7,t3,t1);}

/* loop1 in k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_3257(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3257,NULL,3,t0,t1,t2);}
t3=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
t4=C_fixnum_difference(((C_word*)t0)[2],t2);
/* csi.scm:583: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[3],lf[161],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],t2);
/* csi.scm:585: pref */
t6=((C_word*)t0)[6];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[7],t5);}}}

/* k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3252,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3257(t5,((C_word*)t0)[7],C_fix(0));}

/* k5481 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5363(t5,((C_word*)t0)[4],t4);}

/* k6183 */
static void C_ccall f_6184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:442: printf */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[386],((C_word*)((C_word*)t0)[3])[1]);}

/* f_6181 in k6176 in k6154 in k6152 in a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6181,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6184,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:441: ##sys#switch-module */
((C_proc3)C_fast_retrieve_symbol_proc(lf[387]))(3,*((C_word*)lf[387]+1),t3,t2);}

/* loop2 in k3277 in loop1 in k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_3286(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3286,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3295,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3323,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:588: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t4,C_fix(1000),t5);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3347,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:598: pref */
t5=((C_word*)t0)[8];
((C_proc4)C_fast_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[9],t3);}}

/* k5495 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5496,2,t0,t1);}
if(C_truep(C_i_equalp(lf[300],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5507,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5516,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:1131: call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[5])[1];
f_5363(t3,((C_word*)t0)[6],t2);}}

/* k5395 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5363(t3,((C_word*)t0)[4],t2);}

/* k6195 in k6154 in k6152 in a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:439: ##sys#find-module */
((C_proc4)C_fast_retrieve_symbol_proc(lf[389]))(4,*((C_word*)lf[389]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* map-loop341 in k2847 in k2845 in k2829 in k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2856(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2856,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:450: g347 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3277 in loop1 in k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3278,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3286,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=t5,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_3286(t7,((C_word*)t0)[9],C_fix(1),t3);}

/* ##sys#quit-hook */
static void C_ccall f_5383(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5383,2,t0,t1);}
/* csi.scm:1092: k */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* f_5380 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5380,3,t0,t1,t2);}
t3=C_mutate((C_word*)lf[85]+1 /* (set! ##sys#quit-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5383,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
/* csi.scm:1093: repl */
t4=C_fast_retrieve(lf[281]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,C_retrieve2(lf[71],"csi-eval"));}

/* k2880 in map-loop341 in k2847 in k2845 in k2829 in k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2881,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2856(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2856(t6,((C_word*)t0)[5],t5);}}

/* f_2886 in k2829 in k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2886,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:458: with-exception-handler */
t5=C_fast_retrieve(lf[370]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k5374 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1094: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[51]+1));}

/* k2483 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:343: string-split */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k3294 in loop2 in k3277 in loop1 in k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t4=C_eqp(((C_word*)t0)[3],C_fix(2));
if(C_truep(t4)){
/* csi.scm:593: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,((C_word*)t0)[6],lf[162],t3,lf[163]);}
else{
/* csi.scm:593: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,((C_word*)t0)[6],lf[162],t3,lf[164]);}}
else{
/* csi.scm:596: newline */
t3=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}

/* k3296 in k3294 in loop2 in k3277 in loop1 in k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:597: loop1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3257(t3,((C_word*)t0)[5],t2);}

/* k2471 in for-each-loop235 in k2454 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2463(t3,((C_word*)t0)[4],t2);}

/* map-loop1165 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in ... */
static void C_fcall f_5906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5906,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5931,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1005: g1171 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5900 in k5897 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in ... */
static void C_ccall f_5901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1032: exit */
t2=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:515: machine-type */
t4=C_fast_retrieve(lf[147]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3028 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:532: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),t2,C_make_character(10),*((C_word*)lf[51]+1));}

/* f_2493 in k2491 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2493,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:348: g270 */
t4=((C_word*)t0)[3];
((C_proc5)C_fast_retrieve_proc(t4))(5,t4,t1,t2,lf[91],t3);}

/* k2491 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(t1,lf[92]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2515,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2515(t8,t4,t1);}

/* f_2499 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2499,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2502,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:348: pretty-print */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3010 in k2995 in k2985 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:499: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* doloop740 in doloop732 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4412(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4412,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4421,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:783: display */
t5=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[255],((C_word*)t0)[3]);}}

/* ##csi#tty-input? in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2245,2,t0,t1);}
t2=C_fudge(C_fix(12));
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csi.scm:270: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t1,*((C_word*)lf[60]+1));}}

/* k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1 /* (set! ##csi#tty-input? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2245,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[61] /* ##sys#break-on-error */,0,C_SCHEME_FALSE);
t4=C_fast_retrieve(lf[62]);
t5=C_mutate((C_word*)lf[62]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2258,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=lf[63] /* command-table */ =C_SCHEME_END_OF_LIST;;
t7=C_mutate((C_word*)lf[64]+1 /* (set! toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2271,tmp=(C_word)a,a+=2,tmp));
t8=C_fast_retrieve(lf[65]);
t9=C_fast_retrieve(lf[66]);
t10=C_fast_retrieve(lf[67]);
t11=C_fast_retrieve(lf[39]);
t12=C_fast_retrieve(lf[68]);
t13=C_fast_retrieve(lf[69]);
t14=*((C_word*)lf[70]+1);
t15=C_mutate(&lf[71] /* (set! csi-eval ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2316,a[2]=t13,a[3]=t12,a[4]=t8,a[5]=t11,a[6]=t10,a[7]=t9,a[8]=t14,tmp=(C_word)a,a+=9,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6149,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:427: toplevel-command */
t18=C_fast_retrieve(lf[64]);
f_2271(5,t18,t16,lf[394],t17,lf[395]);}

/* k2263 in read-prompt-hook in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* csi.scm:277: old */
t2=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k6033 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:998: append */
t2=*((C_word*)lf[238]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* k6036 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:980: canonicalize-args */
f_4990(((C_word*)t0)[2],t1);}

/* k3003 in k2995 in k2985 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2067 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2077,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:211: chop-separator */
t4=C_fast_retrieve(lf[29]);
f_1946(3,t4,t3,t1);}

/* k5724 in k5720 in k5716 in k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in ... */
static void C_ccall f_5726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1058: append */
t2=*((C_word*)lf[238]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_fast_retrieve(lf[142]),((C_word*)t0)[4]);}

/* map-loop1318 in k5720 in k5716 in k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in ... */
static void C_fcall f_5728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5728,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5753,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1059: g1324 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_4465 in prin1 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4465,2,t0,t1);}
/* csi.scm:808: ##sys#print */
t2=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],C_SCHEME_TRUE,*((C_word*)lf[51]+1));}

/* k5720 in k5716 in k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in ... */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5721,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[237]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5728,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5728(t7,t3,t1);}

/* loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4996,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[267]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[268]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[269]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[270]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[271]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5017,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t5,C_fix(2)))){
t6=C_subchar(t3,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t6))){
t7=C_i_member(t3,lf[274]);
t8=t4;
f_5017(t8,C_i_not(t7));}
else{
t7=t4;
f_5017(t7,C_SCHEME_FALSE);}}
else{
t6=t4;
f_5017(t6,C_SCHEME_FALSE);}}}}

/* canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4990(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4990,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4996,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4996(t6,t1,t2);}

/* k6070 */
static void C_fcall f_6072(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6072,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6082,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:916: rename1001 */
t6=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t6))(3,t6,t5,lf[379]);}
else{
/* csi.scm:916: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[380]))(3,*((C_word*)lf[380]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k6046 in k6044 in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6040,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[365]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:451: open-input-string */
t4=C_fast_retrieve(lf[278]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6044 in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6050,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[373]))(2,*((C_word*)lf[373]+1),t3);}

/* for-each-loop604 in k3937 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_fcall f_3996(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3996,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4005,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:709: g605 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6057 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6061,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6063,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:916: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[381]))(3,*((C_word*)lf[381]+1),t2,t3);}

/* k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4479(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4479,NULL,2,t0,t1);}
t2=C_mutate(&lf[7] /* (set! selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4487,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4487(t7,((C_word*)t0)[4],((C_word*)t0)[5],t3);}

/* k6048 in k6044 in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_6052 in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6052(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6052,3,t0,t1,t2);}
/* csi.scm:922: ##sys#user-interrupt-hook */
((C_proc2)C_fast_retrieve_symbol_proc(lf[263]))(2,*((C_word*)lf[263]+1),t1);}

/* f_5489 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5489(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5489r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5489r(t0,t1,t2);}}

static void C_ccall f_5489r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[92]+1),C_fast_retrieve(lf[69]),t2);}

/* k5461 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5363(t5,((C_word*)t0)[4],t4);}

/* ##sys#read-prompt-hook in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(12));
if(C_truep(t3)){
if(C_truep(t3)){
/* csi.scm:277: old */
t4=((C_word*)t0)[2];
((C_proc2)C_fast_retrieve_proc(t4))(2,t4,t1);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
/* csi.scm:270: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t2,*((C_word*)lf[60]+1));}}

/* k6021 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_member(lf[362],((C_word*)((C_word*)t0)[2])[1]);
t4=((C_word*)t0)[3];
f_5164(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k2089 in k2083 in k2078 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2090,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2092,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2092(t5,((C_word*)t0)[4],t1);}

/* loop in k2089 in k2083 in k2078 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2092(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2092,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2101,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2115,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(0));
/* csi.scm:217: chop-separator */
t6=C_fast_retrieve(lf[29]);
f_1946(3,t6,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3627 in loop-print in k3590 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3628,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
/* csi.scm:655: loop-print */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3599(t7,((C_word*)t0)[5],t3,t6);}

/* map-loop1292 in k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in ... */
static void C_fcall f_5758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5758,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5783,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1058: g1298 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2551 */
static void C_ccall f_2552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2562,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:351: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* f_2289 in toplevel-command in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2289,3,t0,t1,t2);}
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_cdr(t2,t3));}

/* f_2557 in k2551 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2557,2,t0,t1);}
/* csi.scm:352: eval */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* k2283 in toplevel-command in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k5752 in map-loop1318 in k5720 in k5716 in k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in ... */
static void C_ccall f_5753(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5753,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5728(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5728(t6,((C_word*)t0)[5],t5);}}

/* k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2045,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=C_i_string_ref(((C_word*)t0)[2],C_fix(0));
t4=C_i_char_equalp(t3,C_make_character(92));
t5=(C_truep(t4)?t4:C_i_char_equalp(t3,C_make_character(47)));
if(C_truep(t5)){
/* csi.scm:208: addext */
f_1992(((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t6=C_retrieve2(lf[28],"dirseparator\077");
t7=((C_word*)t0)[2];
t8=C_block_size(t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2020,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t10=f_2020(t9,C_fix(0));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:210: _getcwd */
t12=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,((C_word*)t0)[6],C_fix(256));}
else{
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:212: addext */
f_1992(t11,((C_word*)t0)[2]);}}}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3689 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:661: sprintf */
t2=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[205],t1);}

/* ##csi#lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2041(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2041,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2045,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:206: get-environment-variable */
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[43]);}

/* f_5469 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5469(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5469r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5469r(t0,t1,t2);}}

static void C_ccall f_5469r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[92]+1),*((C_word*)lf[17]+1),t2);}

/* k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3696(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3696,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?lf[207]:lf[208]);
t4=C_slot(((C_word*)t0)[2],C_fix(7));
t5=C_slot(((C_word*)t0)[2],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* csi.scm:669: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t6,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:670: ##sys#locative? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[243]))(3,*((C_word*)lf[243]+1),t2,((C_word*)t0)[2]);}}

/* k2543 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:351: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}

/* toplevel-command in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_2271r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2271r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2271r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(15);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_check_symbol_2(t2,lf[64]);
t8=(C_truep(t6)?C_i_check_string_2(t6,lf[64]):C_SCHEME_UNDEFINED);
t9=C_i_assq(t2,C_retrieve2(lf[63],"command-table"));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2285,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t9)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2289,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:284: g178 */
t12=t11;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t9);}
else{
t11=C_a_i_list3(&a,3,t2,t3,t6);
t12=C_a_i_cons(&a,2,t11,C_retrieve2(lf[63],"command-table"));
t13=C_mutate(&lf[63] /* (set! command-table ...) */,t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,*((C_word*)lf[47]+1));}}

/* f_2549 in k2543 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:351: ##sys#start-timer */
t3=*((C_word*)lf[96]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2535 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:347: string-split */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k2000 in k1997 in addext in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:198: file-exists? */
t3=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2005 in k2000 in k1997 in addext in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE));}

/* k6234 in k6226 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1860(t2,(C_truep(t1)?lf[403]:lf[404]));}

/* k2523 in for-each-loop254 in k2491 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2515(t3,((C_word*)t0)[4],t2);}

/* k4321 in k4319 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4335,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4335(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k4319 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[5]);}

/* k4325 in k4323 in k4321 in k4319 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_4327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(16));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4307(t3,((C_word*)t0)[4],t2);}

/* k4323 in k4321 in k4319 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k3969 in loop in k3941 */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:719: newline */
t2=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6214 in a6207 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6224,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:265: ##sys#module-name */
((C_proc3)C_fast_retrieve_symbol_proc(lf[398]))(3,*((C_word*)lf[398]+1),t3,t1);}
else{
/* csi.scm:262: sprintf */
t3=*((C_word*)lf[204]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[396],lf[399],C_fast_retrieve(lf[25]));}}

/* f_3975 in loop in k3941 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3975,2,t0,t1);}
t2=C_i_cdar(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
/* csi.scm:718: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[3],lf[234],t2,t3);}

/* k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[5]);}

/* k6216 in k6214 in a6207 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:262: sprintf */
t2=*((C_word*)lf[204]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[396],t1,C_fast_retrieve(lf[25]));}

/* k3034 in k3032 in k3030 in k3028 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* f_2896 */
static void C_ccall f_2896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2896,2,t0,t1);}
/* csi.scm:458: ##sys#error */
t2=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[368],((C_word*)t0)[2]);}

/* k6223 in k6214 in a6207 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:265: sprintf */
t2=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[397],t1);}

/* k3030 in k3028 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(14)))){
/* csi.scm:533: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[133]);}
else{
t3=t2;
f_3033(2,t3,C_SCHEME_UNDEFINED);}}

/* f_2891 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2891,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:458: k361 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3032 in k3030 in k3028 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fudge(C_fix(15)))){
/* csi.scm:534: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[132]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4381(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* k6226 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6227,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_1860(t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6236,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:77: get-environment-variable */
t3=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[405]);}}

/* loop in k5029 in k5015 in loop in canonicalize-args in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static C_word C_fcall f_5127(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t3,C_make_character(107)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(118)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(104)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(68)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(101)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(105)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(82)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(98)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(110)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(113)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(119)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(45)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(73)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(112)))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,C_make_character(80)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))){
t4=t1;
t5=C_u_i_cdr(t4);
t7=t5;
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* k4122 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:601: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[246],t1);}

/* k3067 in k3064 in k3061 in k3058 in k3055 in k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=C_i_vector_ref(((C_word*)t0)[2],C_fix(1));
/* csi.scm:524: shorten */
f_2968(t2,t3);}

/* k3064 in k3061 in k3058 in k3055 in k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
/* csi.scm:523: shorten */
f_2968(t2,t3);}

/* k3061 in k3058 in k3055 in k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* csi.scm:521: repository-path */
t3=C_fast_retrieve(lf[143]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_2807 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2807r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2807r(t0,t1,t2);}}

static void C_ccall f_2807r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2810,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:421: history-add */
t4=C_fast_retrieve(lf[46]);
f_2134(3,t4,t3,t2);}

/* k3055 in k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* csi.scm:518: software-version */
t3=C_fast_retrieve(lf[145]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6204 in k6152 in a6148 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6155(t3,t2);}

/* k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3050,2,t0,t1);}
t2=C_fudge(C_fix(3));
t3=(C_truep(t2)?lf[135]:lf[136]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:517: software-type */
t5=C_fast_retrieve(lf[146]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_2802 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2802,2,t0,t1);}
/* csi.scm:420: eval */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[3]);}

/* a6207 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6215,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:263: ##sys#current-module */
((C_proc2)C_fast_retrieve_symbol_proc(lf[400]))(2,*((C_word*)lf[400]+1),t2);}

/* k3058 in k3055 in k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:519: build-platform */
t3=C_fast_retrieve(lf[144]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3430 in k3426 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:614: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[51]+1));}

/* k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2824,2,t0,t1);}
t2=C_fast_retrieve(lf[124]);
t3=C_fast_retrieve(lf[125]);
t4=C_fast_retrieve(lf[126]);
t5=C_fast_retrieve(lf[127]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2946,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:474: get-environment-variable */
t7=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[385]);}

/* doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4307,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4316,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4453,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:773: justify */
f_4280(t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3071,2,t0,t1);}
t2=C_i_vector_ref(((C_word*)t0)[2],C_fix(2));
t3=C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t4=C_fudge(C_fix(17));
t5=(C_truep(t4)?lf[137]:lf[138]);
t6=C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t7=C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t8=C_fudge(C_fix(18));
t9=C_i_nequalp(C_fix(1),t8);
t10=(C_truep(t9)?lf[139]:lf[140]);
t11=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=t1,a[12]=t2,a[13]=t3,a[14]=t5,a[15]=t6,a[16]=t7,a[17]=t10,tmp=(C_word)a,a+=18,tmp);
/* csi.scm:531: argv */
t12=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}

/* k3426 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3427,2,t0,t1);}
t2=C_make_character(C_unfix(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],C_fix(65536)))){
/* csi.scm:613: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],lf[173],t2);}
else{
/* csi.scm:614: ##sys#write-char-0 */
((C_proc4)C_fast_retrieve_symbol_proc(lf[134]))(4,*((C_word*)lf[134]+1),((C_word*)t0)[3],C_make_character(10),*((C_word*)lf[51]+1));}}

/* loop in k3941 */
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
C_word *a;
loop:
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3950,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3959,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3970,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3975,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:715: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t6,C_fix(100),t7);}
else{
t6=C_i_cddr(t2);
/* csi.scm:720: loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k2809 */
static void C_ccall f_2810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3958 in loop in k3941 */
static void C_ccall f_3959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cddr(((C_word*)t0)[2]);
/* csi.scm:720: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3950(t3,((C_word*)t0)[4],t2);}

/* k2083 in k2078 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2090,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:215: string-split */
t3=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[40]);}

/* k2845 in k2829 in k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:458: g365 */
t3=t1;
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,t2);}

/* k3908 in for-each-loop582 in doloop577 in k3858 in k3855 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in ... */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3900(t3,((C_word*)t0)[4],t2);}

/* k2076 in k2067 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:211: string-append */
t2=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[38],((C_word*)t0)[3]);}

/* k2840 in k2838 */
static void C_ccall f_2841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:457: get-output-string */
t2=C_fast_retrieve(lf[366]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2078 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2079,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),t2,lf[41],t3);}}

/* k3091 in k3070 in k3067 in k3064 in k3061 in k3058 in k3055 in k3049 in k3025 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:501: printf */
t2=*((C_word*)lf[100]+1);
((C_proc20)(void*)(*((C_word*)t2+1)))(20,t2,((C_word*)t0)[2],lf[141],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_fast_retrieve(lf[142]),((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[13],((C_word*)t0)[14],((C_word*)t0)[15],((C_word*)t0)[16],((C_word*)t0)[17],t1);}

/* for-each-loop582 in doloop577 in k3858 in k3855 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_fcall f_3900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3900,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3909,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:698: g583 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2847 in k2845 in k2829 in k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[237]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2856(t6,((C_word*)t0)[5],t1);}

/* k2073 in k2067 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:211: addext */
f_1992(((C_word*)t0)[3],t1);}

/* k5716 in k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in ... */
static void C_ccall f_5718(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5718,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[29]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5721,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1059: collect-options */
t8=((C_word*)((C_word*)t0)[4])[1];
f_5181(t8,t7,lf[334]);}

/* ##csi#print-usage in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1866,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:85: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[15]);}

/* k1867 in k1865 in print-usage in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:111: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[11]);}

/* k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in ... */
static void C_ccall f_5713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5713,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[237]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5758,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5758(t7,t3,t1);}

/* k1865 in print-usage in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1874,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[12],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[0],t4);
t6=C_a_i_cons(&a,2,lf[13],t5);
/* csi.scm:84: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t3,t6);}

/* k5709 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in ... */
static void C_ccall f_5710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1057: ##sys#nodups */
((C_proc4)C_fast_retrieve_symbol_proc(lf[332]))(4,*((C_word*)lf[332]+1),((C_word*)t0)[2],t1,*((C_word*)lf[333]+1));}

/* f_2831 in k2829 in k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2831,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2839,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:455: open-output-string */
t4=C_fast_retrieve(lf[367]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static C_word C_fcall f_2020(C_word t0,C_word t1){
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
return(C_SCHEME_FALSE);}
else{
t2=C_subchar(((C_word*)t0)[3],t1);
t3=C_i_char_equalp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47)));
if(C_truep(t4)){
return(t1);}
else{
t5=C_fixnum_plus(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}}

/* k2829 in k6039 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2831,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2846,a[2]=t5,a[3]=t3,a[4]=t6,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:458: call-with-current-continuation */
t9=*((C_word*)lf[371]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k2838 */
static void C_ccall f_2839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:456: write */
t3=*((C_word*)lf[185]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],t1);}

/* k1873 in k1865 in print-usage in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:106: display */
t2=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_3323 in loop2 in k3277 in loop1 in k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3323,2,t0,t1);}
/* csi.scm:591: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,((C_word*)t0)[2],lf[165],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1888 in print-banner in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:152: print */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[21]);}

/* ##csi#print-banner in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1889,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:134: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4549 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4550,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4555,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4555(t5,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* doloop836 in k4549 */
static void C_fcall f_4555(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4555,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=*((C_word*)lf[51]+1);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4564,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* csi.scm:837: display */
t6=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[257],*((C_word*)lf[51]+1));}}

/* ##sys#user-read-hook in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1899,4,t0,t1,t2,t3);}
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1914,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_fixnum_difference(C_fast_retrieve(lf[25]),C_fix(1));
/* csi.scm:164: history-ref */
t8=C_fast_retrieve(lf[26]);
f_2219(3,t8,t6,t7);}
else{
/* csi.scm:165: old-hook */
t6=((C_word*)t0)[2];
((C_proc4)C_fast_retrieve_proc(t6))(4,t6,t1,t2,t3);}}

/* k1896 in k1890 in k1888 in print-banner in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:153: print */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[18],t1,lf[19]);}

/* k1890 in k1888 in print-banner in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:153: chicken-version */
t3=C_fast_retrieve(lf[20]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* k1831 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1834,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3941 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3942,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3950,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3950(t6,((C_word*)t0)[5],t2);}

/* k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1840,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! constant22 ...) */,lf[1]);
t3=C_set_block_item(lf[2] /* ##sys#repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[3],C_fast_retrieve(lf[4]));
t5=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[5] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:71: make-parameter */
t8=C_fast_retrieve(lf[408]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_SCHEME_FALSE);}

/* f_3939 in k3937 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_3939(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3939,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3942,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:711: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],lf[235],t2);}

/* k3937 in k3828 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_check_list_2(t3,lf[92]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3996,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3996(t8,((C_word*)t0)[4],t3);}

/* csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2316,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
/* csi.scm:306: exit */
t3=C_fast_retrieve(lf[72]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2332,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(0));
t5=t3;
f_2332(t5,C_eqp(lf[123],t4));}
else{
t4=t3;
f_2332(t4,C_SCHEME_FALSE);}}}

/* k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1835 in k1833 in k1831 */
static void C_ccall f_1836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1833 in k1831 */
static void C_ccall f_1834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4522 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_ccall f_4523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* csi.scm:830: prin1 */
f_4459(t2,((C_word*)t0)[10]);}
else{
t3=t2;
f_4525(2,t3,C_SCHEME_UNDEFINED);}}

/* k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in ... */
static void C_ccall f_4521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=*((C_word*)lf[51]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4636,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(91),*((C_word*)lf[51]+1));}
else{
t3=t2;
f_4523(2,t3,C_SCHEME_UNDEFINED);}}

/* k4526 in k4524 in k4522 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in ... */
static void C_ccall f_4527(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(((C_word*)t0)[6])?((C_word*)t0)[7]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[9],C_fix(2));
t6=C_slot(((C_word*)t0)[9],C_fix(3));
t7=C_i_check_list_2(t5,lf[92]);
t8=C_i_check_list_2(t6,lf[92]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4601,a[2]=t10,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4601(t12,t2,t5,t6);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t7=((C_word*)((C_word*)t0)[4])[1];
f_4487(t7,((C_word*)t0)[5],t5,t6);}}

/* k4524 in k4522 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in ... */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm:831: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2995 in k2985 */
static void C_fcall f_2996(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2996,NULL,2,t0,t1);}
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],C_fix(3)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:496: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[129]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:499: make-string */
t3=*((C_word*)lf[130]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],C_make_character(32));}}

/* k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_1860(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1860,NULL,2,t0,t1);}
t2=C_mutate(&lf[8] /* (set! default-editor ...) */,t1);
t3=C_mutate((C_word*)lf[9]+1 /* (set! ##csi#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1862,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[16]+1 /* (set! ##csi#print-banner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1885,tmp=(C_word)a,a+=2,tmp));
t5=C_fast_retrieve(lf[23]);
t6=C_mutate((C_word*)lf[23]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1899,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[27]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1925,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[28] /* (set! dirseparator? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1934,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[29]+1 /* (set! ##csi#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1946,tmp=(C_word)a,a+=2,tmp));
t10=C_set_block_item(lf[31] /* @ */,0,C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_symbol_proc(lf[402]))(4,*((C_word*)lf[402]+1),t11,C_fix(256),C_make_character(32));}

/* f_4244 in dump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4244,2,t0,t1);}
/* csi.scm:742: def-out689 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* f_4240 in dump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4240,3,t0,t1,t2);}
/* csi.scm:742: body686 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[51]+1));}

/* k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1853,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! editor-command ...) */,t1);
t3=lf[7] /* selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:75: get-environment-variable */
t5=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[407]);}

/* k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_1860(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:76: get-environment-variable */
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[406]);}}

/* f_4542 in k4526 in k4524 in k4522 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4542,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4550,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:836: display */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[258]);}}

/* k5796 in for-each-loop1275 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in ... */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5788(t3,((C_word*)t0)[4],t2);}

/* for-each-loop254 in k2491 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2515(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2515,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2524,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:347: g255 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2508 in k2491 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k4528 in k4526 in k4524 in k4522 in k4519 in k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_ccall f_4530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4487(t5,((C_word*)t0)[5],t3,t4);}

/* for-each-loop1275 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in ... */
static void C_fcall f_5788(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5788,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5797,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1055: g1276 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5782 in map-loop1292 in k5712 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in ... */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5783,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5758(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5758(t6,((C_word*)t0)[5],t5);}}

/* k5227 in k5609 in k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in ... */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5234,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1019: file-exists? */
t3=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2501 */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:348: print* */
t2=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[90]);}

/* k3686 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:660: descseq */
t2=((C_word*)t0)[2];
f_3246(6,t2,((C_word*)t0)[3],t1,*((C_word*)lf[180]+1),*((C_word*)lf[182]+1),C_fix(1));}

/* k5212 */
static void C_ccall f_5213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5213,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6081 in k6070 */
static void C_ccall f_6082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:916: rename1001 */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[378]);}

/* k4347 in k4345 in doloop748 in k4321 in k4319 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_4349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4335(t4,((C_word*)t0)[5],t2,t3);}

/* k4345 in doloop748 in k4321 in k4319 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_4346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_make_character(C_unfix(t1));
/* write-char/port */
t6=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t2,t5,((C_word*)t0)[6]);}
else{
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,C_make_character(46),((C_word*)t0)[6]);}}

/* k6096 in k6111 in k6081 in k6070 */
static void C_ccall f_6097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:916: rename1001 */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[264]);}

/* bestlen */
static void C_fcall f_4146(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4146,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm:746: min */
t3=*((C_word*)lf[250]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop748 in k4321 in k4319 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4335(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4335,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4346,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:790: ref */
t7=((C_word*)t0)[5];
((C_proc4)C_fast_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],t3);}}

/* f_4143 in dump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4143,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4146,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* csi.scm:747: ##sys#error */
t5=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[251],lf[252],((C_word*)t0)[2]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4168,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:748: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[242]+1)))(3,*((C_word*)lf[242]+1),t5,((C_word*)t0)[2]);}}

/* ##csi#dump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4140r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4140r(t0,t1,t2,t3);}}

static void C_ccall f_4140r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4143,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4240,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:742: def-len688 */
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* csi.scm:742: def-out689 */
t9=t5;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
/* csi.scm:742: body686 */
t11=t4;
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,t7,t9);}}}

/* k6060 in k6057 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:915: ##sys#extend-macro-environment */
((C_proc5)C_fast_retrieve_symbol_proc(lf[374]))(5,*((C_word*)lf[374]+1),((C_word*)t0)[2],lf[375],((C_word*)t0)[3],t1);}

/* f_6063 in k6057 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_6063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6063,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6072,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_i_cdr(t5);
if(C_truep(C_i_pairp(t7))){
t8=C_i_cdr(t7);
t9=t6;
f_6072(t9,C_eqp(t8,C_SCHEME_END_OF_LIST));}
else{
t8=t6;
f_6072(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_6072(t7,C_SCHEME_FALSE);}}

/* k2100 in loop in k2089 in k2083 in k2078 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:218: addext */
f_1992(t2,t1);}

/* k2102 in k2100 in loop in k2089 in k2083 in k2078 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_slot(((C_word*)t0)[3],C_fix(1));
/* csi.scm:219: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2092(t3,((C_word*)t0)[2],t2);}}

/* set-describer! in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4131,4,t0,t1,t2,t3);}
t4=C_i_check_symbol_2(t2,lf[248]);
/* csi.scm:736: ##sys#hash-table-set! */
((C_proc5)C_fast_retrieve_symbol_proc(lf[249]))(5,*((C_word*)lf[249]+1),t1,C_retrieve2(lf[156],"describer-table"),t2,t3);}

/* k4166 */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4168,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:748: bestlen */
t4=((C_word*)t0)[5];
f_4146(t4,t2,t3);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* csi.scm:749: bestlen */
t4=((C_word*)t0)[5];
f_4146(t4,t2,t3);}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_anypointerp(((C_word*)t0)[3]));
if(C_truep(t3)){
/* csi.scm:751: hexdump */
t4=C_fast_retrieve(lf[222]);
f_4276(6,t4,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(32),*((C_word*)lf[253]+1),((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4207,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t5=C_slot(((C_word*)t0)[3],C_fix(0));
t6=t4;
f_4207(t6,C_i_assq(t5,C_retrieve2(lf[154],"##csi#bytevector-data")));}
else{
t5=t4;
f_4207(t5,C_SCHEME_FALSE);}}}}}

/* k4735 in k2687 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4736(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4736,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4738,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4765,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:880: call/cc */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[47]+1));}}

/* k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_fcall f_5169(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5169,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:1003: member* */
f_4938(t2,lf[354],((C_word*)((C_word*)t0)[3])[1]);}

/* k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_5166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5166,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_5169(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5945,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1002: member* */
f_4938(t4,lf[355],((C_word*)((C_word*)t0)[3])[1]);}}

/* k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5162(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5164,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5950,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(t1);
t5=C_i_pairp(t4);
t6=C_i_not(t5);
if(C_truep(t6)){
if(C_truep(t6)){
/* csi.scm:988: ##sys#error */
t7=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t3,lf[361]);}
else{
t7=t3;
f_5950(2,t7,C_SCHEME_UNDEFINED);}}
else{
t7=C_i_cadr(t1);
t8=C_i_string_length(t7);
t9=C_eqp(t8,C_fix(0));
if(C_truep(t9)){
if(C_truep(t9)){
/* csi.scm:988: ##sys#error */
t10=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,lf[361]);}
else{
t10=t3;
f_5950(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=t1;
t11=C_u_i_cdr(t10);
t12=C_u_i_car(t11);
t13=C_i_string_ref(t12,C_fix(0));
if(C_truep(C_i_char_equalp(C_make_character(45),t13))){
/* csi.scm:988: ##sys#error */
t14=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t3,lf[361]);}
else{
t14=t3;
f_5950(2,t14,C_SCHEME_UNDEFINED);}}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6023,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6034,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:998: canonicalize-args */
f_4990(t4,((C_word*)t0)[5]);}}

/* k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_5164(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5164,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1001: member* */
f_4938(t2,lf[356],((C_word*)((C_word*)t0)[3])[1]);}

/* k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:983: member* */
f_4938(t2,lf[363],((C_word*)((C_word*)t0)[2])[1]);}

/* compare in k4735 in k2687 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4738(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4738,NULL,3,t0,t1,t2);}
t3=C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4748,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_i_string_length(((C_word*)t0)[2]);
t6=C_i_string_length(t3);
t7=C_i_fixnum_min(t5,t6);
/* csi.scm:878: substring */
t8=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t4,t3,C_fix(0),t7);}

/* k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6037,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:980: command-line-arguments */
t4=C_fast_retrieve(lf[302]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5158,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5160,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:982: member* */
f_4938(t3,lf[364],((C_word*)t2)[1]);}

/* ##csi#run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5156,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6040,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:979: get-environment-variable */
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[372]);}

/* k4188 in k4166 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:749: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4276(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[223]+1),((C_word*)t0)[4]);}

/* k2114 in loop in k2089 in k2083 in k2078 in k2044 in lookup-script-file in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1,t2);}

/* k2589 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:358: describe */
t2=C_fast_retrieve(lf[78]);
f_3239(3,t2,((C_word*)t0)[2],C_fast_retrieve(lf[98]));}

/* f6869 in k5847 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in ... */
static void C_ccall f6869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1052: case-sensitive */
t2=C_fast_retrieve(lf[319]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4173 in k4166 */
static void C_ccall f_4174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:748: hexdump */
t2=C_fast_retrieve(lf[222]);
f_4276(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[223]+1),((C_word*)t0)[4]);}

/* k5546 */
static void C_ccall f_5547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5547,2,t0,t1);}
t2=C_i_string_length(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1119: flush-output */
t4=*((C_word*)lf[307]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[51]+1));}

/* k2344 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* f_2340 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2340,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2346,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:311: g211 */
t5=t3;
((C_proc2)C_fast_retrieve_proc(t5))(2,t5,t4);}

/* k4773 in k4771 in fail */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[47]+1);
/* csi.scm:885: return */
t3=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],*((C_word*)lf[47]+1));}

/* f_2573 in k2543 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2573r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2573r(t0,t1,t2);}}

static void C_ccall f_2573r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm:353: history-add */
t4=C_fast_retrieve(lf[46]);
f_2134(3,t4,t3,t2);}

/* k2575 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4771 in fail */
static void C_ccall f_4772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:884: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2570 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:351: ##sys#display-times */
((C_proc3)C_fast_retrieve_symbol_proc(lf[94]))(3,*((C_word*)lf[94]+1),((C_word*)t0)[2],t1);}

/* f_5543 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5543(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5543,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5547,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5590,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1117: with-output-to-string */
t5=C_fast_retrieve(lf[308]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4747 in compare in k4735 in k2687 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_string_equal_p(((C_word*)t0)[3],t1));}

/* k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:623: ##sys#symbol->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3578,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:625: ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[197]))(3,*((C_word*)lf[197]+1),t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3177,tmp=(C_word)a,a+=2,tmp);
t4=f_3177(t2,t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3589,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_3589(t6,t4);}
else{
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3210,tmp=(C_word)a,a+=2,tmp);
t8=t5;
f_3589(t8,f_3210(t6));}}}}

/* k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2332(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2332,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_assq(t2,C_retrieve2(lf[63],"command-table"));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2340,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:309: g208 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],t3);}
else{
t4=C_eqp(t2,lf[73]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:318: read */
t6=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(t2,lf[76]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:322: read */
t7=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_eqp(t2,lf[77]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:327: read */
t8=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t2,lf[79]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:331: read */
t9=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(t2,lf[81]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:335: read */
t10=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_eqp(t2,lf[82]);
if(C_truep(t9)){
/* csi.scm:340: report */
t10=C_fast_retrieve(lf[83]);
f_2950(2,t10,((C_word*)t0)[3]);}
else{
t10=C_eqp(t2,lf[84]);
if(C_truep(t10)){
/* csi.scm:341: ##sys#quit-hook */
t11=C_fast_retrieve(lf[85]);
f_5383(2,t11,((C_word*)t0)[3]);}
else{
t11=C_eqp(t2,lf[86]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2484,a[2]=((C_word*)t0)[7],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:343: read-line */
t14=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t12=C_eqp(t2,lf[88]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2536,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:347: read-line */
t15=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t13=C_eqp(t2,lf[93]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:351: read */
t15=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t14=C_eqp(t2,lf[97]);
if(C_truep(t14)){
if(C_truep(C_fast_retrieve(lf[98]))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_list1(&a,1,C_fast_retrieve(lf[98]));
/* csi.scm:357: history-add */
t17=C_fast_retrieve(lf[46]);
f_2134(3,t17,t15,t16);}
else{
t15=C_SCHEME_UNDEFINED;
t16=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}}
else{
t15=C_eqp(t2,lf[99]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2620,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2623,a[2]=t17,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:362: editor-command */
t19=C_fast_retrieve(lf[6]);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}
else{
t16=C_eqp(t2,lf[104]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t18=*((C_word*)lf[47]+1);
/* csi.scm:239: vector-fill! */
t19=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t17,C_fast_retrieve(lf[44]),*((C_word*)lf[47]+1));}
else{
t17=C_eqp(t2,lf[105]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:370: history-show */
t19=C_fast_retrieve(lf[50]);
f_2178(2,t19,t18);}
else{
t18=C_eqp(t2,lf[106]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2659,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:373: show-frameinfo */
f_4455(t19,C_retrieve2(lf[7],"selected-frame"));}
else{
t19=C_eqp(t2,lf[108]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:376: read */
t22=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t20=C_eqp(t2,lf[111]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2688,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:379: read */
t22=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t21=C_eqp(t2,lf[118]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:381: read-line */
t23=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,t22);}
else{
t22=C_eqp(t2,lf[119]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:386: display */
t24=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t24+1)))(3,t24,t23,lf[121]);}
else{
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:417: printf */
t24=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t24+1)))(4,t24,t23,lf[122],((C_word*)t0)[2]);}}}}}}}}}}}}}}}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2802,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:420: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}}

/* f_4765 in k4735 in k2687 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4765(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4765,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4785,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4785(t7,t1,((C_word*)t0)[4]);}

/* k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* csi.scm:815: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[12]);}

/* k3497 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:622: fprintf */
t2=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[183],t1);}

/* k2564 */
static void C_ccall f_2565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_2562 in k2551 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2562r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2562r(t0,t1,t2);}}

static void C_ccall f_2562r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2565,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:351: ##sys#stop-timer */
t5=*((C_word*)lf[95]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_5195 in loop in collect-options in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in ... */
static void C_ccall f_5195(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5195,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
/* csi.scm:1014: ##sys#error */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[276],((C_word*)t0)[2]);}
else{
t4=C_i_cadr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5213,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
/* csi.scm:1015: loop */
t9=((C_word*)((C_word*)t0)[3])[1];
f_5187(t9,t5,t8);}}

/* k3346 in loop2 in k3277 in loop1 in k3251 in k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* csi.scm:598: loop2 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3286(t5,((C_word*)t0)[6],t3,t4);}
else{
/* csi.scm:599: loop2 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3286(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* loop in collect-options in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in ... */
static void C_fcall f_5187(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5187,NULL,3,t0,t1,t2);}
t3=C_i_member(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1001: g1203 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* collect-options in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_fcall f_5181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5181,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5187,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5187(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k5554 in k5552 in k5550 in k5546 */
static void C_ccall f_5555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1127: newline */
t3=*((C_word*)lf[22]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[304]+1));}

/* k5556 in k5554 in k5552 in k5550 in k5546 */
static void C_ccall f_5557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1128: eval */
t2=C_fast_retrieve(lf[65]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5550 in k5546 */
static void C_ccall f_5551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:1120: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[306],*((C_word*)lf[304]+1));}

/* k5552 in k5550 in k5546 */
static void C_ccall f_5553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5562,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5562(t6,t2,C_fix(0));}

/* k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in ... */
static void C_fcall f_5174(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5174,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[29]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t5,a[10]=t3,a[11]=t6,tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5937,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1007: get-environment-variable */
t9=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[353]);}

/* k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in ... */
static void C_ccall f_5179(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5179,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5181,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5258,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5309,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5899,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1030: member* */
f_4938(t9,lf[350],((C_word*)((C_word*)t0)[2])[1]);}

/* k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in ... */
static void C_ccall f_5176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5906,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5906(t6,t2,t1);}

/* doloop732 in k4317 in k4315 in doloop722 in hexdump in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4381(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4381,NULL,4,t0,t1,t2,t3);}
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t6=C_fixnum_modulo(((C_word*)t0)[2],C_fix(16));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_fixnum_difference(C_fix(16),t6);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4412,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_4412(t12,t1,t8);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4429,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t7=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_make_character(32),((C_word*)t0)[3]);}}

/* k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3361(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[3]))){
t3=C_fix(C_character_code(((C_word*)t0)[3]));
/* csi.scm:604: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t2,((C_word*)t0)[4],lf[167],((C_word*)t0)[3],t3,t3,t3);}
else{
switch(((C_word*)t0)[3]){
case C_SCHEME_TRUE:
/* csi.scm:605: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[168]);
case C_SCHEME_FALSE:
/* csi.scm:606: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[169]);
default:
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* csi.scm:607: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[170]);}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
/* csi.scm:608: fprintf */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[171]);}
else{
t3=*((C_word*)lf[47]+1);
t4=C_eqp(*((C_word*)lf[47]+1),((C_word*)t0)[3]);
if(C_truep(t4)){
/* csi.scm:609: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,((C_word*)t0)[4],lf[172]);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:611: fprintf */
t6=*((C_word*)lf[160]+1);
((C_proc8)(void*)(*((C_word*)t6+1)))(8,t6,t5,((C_word*)t0)[4],lf[174],((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[3]);}
else{
t5=C_slot(lf[175],C_fix(0));
t6=C_eqp(((C_word*)t0)[3],t5);
if(C_truep(t6)){
/* csi.scm:616: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,((C_word*)t0)[4],lf[176]);}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
/* csi.scm:617: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,((C_word*)t0)[4],lf[177],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
/* csi.scm:618: fprintf */
t7=*((C_word*)lf[160]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,((C_word*)t0)[4],lf[178],((C_word*)t0)[3]);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
/* csi.scm:619: descseq */
t7=((C_word*)t0)[5];
f_3246(6,t7,t2,lf[179],*((C_word*)lf[180]+1),((C_word*)t0)[6],C_fix(0));}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
/* csi.scm:620: descseq */
t7=((C_word*)t0)[5];
f_3246(6,t7,t2,lf[181],*((C_word*)lf[180]+1),*((C_word*)lf[182]+1),C_fix(0));}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3492,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm:621: keyword? */
t8=C_fast_retrieve(lf[245]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[3]);}}}}}}}}}}}}

/* k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in ... */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5171,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5174(t4,t2);}
else{
if(C_truep(t1)){
t4=t1;
t5=t3;
f_5174(t5,t4);}
else{
t4=((C_word*)t0)[6];
t5=t3;
f_5174(t5,t4);}}}

/* k3362 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k4843 in k4841 in k4838 in doloop934 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:902: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4845 in k4843 in k4841 in k4838 in doloop934 */
static void C_ccall f_4846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_a_i_list1(&a,1,t3);
/* csi.scm:903: history-add */
t5=C_fast_retrieve(lf[46]);
f_2134(3,t5,t2,t4);}

/* k4838 in doloop934 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4840,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm:900: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[114]);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t3=((C_word*)t0)[6];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[7])[1];
f_4820(t5,((C_word*)t0)[8],t2,t4);}}

/* k4841 in k4838 in doloop934 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* csi.scm:901: display */
t5=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k4847 in k4845 in k4843 in k4841 in k4838 in doloop934 */
static void C_ccall f_4848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],((C_word*)t0)[3]);
/* csi.scm:904: return */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,((C_word*)t0)[5],t2);}

/* k3358 in descseq in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3359,2,t0,t1);}
t2=C_fixnum_difference(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3252,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* csi.scm:579: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[3],lf[166],((C_word*)t0)[7],t2);}
else{
t4=t3;
f_3252(2,t4,C_SCHEME_UNDEFINED);}}

/* k5852 in k5850 in k5847 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in ... */
static void C_ccall f_5853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1052: case-sensitive */
t2=C_fast_retrieve(lf[319]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5850 in k5847 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in ... */
static void C_ccall f_5851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1051: register-feature! */
t3=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[339]);}

/* k5865 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in ... */
static void C_ccall f_5867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5867,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[343] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
f_5317(t4,t3);}
else{
/* csi.scm:1044: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[344]);}}
else{
t2=((C_word*)t0)[2];
f_5317(t2,C_SCHEME_UNDEFINED);}}

/* k2744 in for-each-loop301 in k2710 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2736(t3,((C_word*)t0)[4],t2);}

/* k5868 in k5865 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in ... */
static void C_ccall f_5869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[343] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_5317(t3,t2);}

/* f6742 in k2622 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f6742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:361: string-append */
t2=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_retrieve2(lf[8],"default-editor"),lf[103],t1);}

/* k2729 in k2710 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* for-each-loop301 in k2710 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2736(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2736,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2745,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:408: g302 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4567 in k4565 in k4563 in doloop836 in k4549 */
static void C_ccall f_4569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],((C_word*)t0)[2]);
/* csi.scm:841: prin1 */
f_4459(t2,t3);}

/* k5847 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in ... */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5849,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1051: register-feature! */
t4=C_fast_retrieve(lf[279]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[339]);}
else{
/* csi.scm:1050: display */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[340]);}}
else{
t2=((C_word*)t0)[2];
f_5321(2,t2,C_SCHEME_UNDEFINED);}}

/* k4881 in k4874 in doloop906 */
static void C_ccall f_4882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:907: fail */
t2=((C_word*)t0)[2];
f_4768(t2,((C_word*)t0)[3],t1);}

/* k4565 in k4563 in doloop836 in k4549 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm:837: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[256],((C_word*)t0)[8]);}

/* for-each-loop920 in doloop906 */
static void C_fcall f_4884(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4884,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4893,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* csi.scm:894: g921 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k4563 in doloop836 in k4549 */
static void C_ccall f_4564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4564,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* csi.scm:837: write */
t4=*((C_word*)lf[185]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[8]);}

/* k5836 in for-each-loop1241 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in ... */
static void C_ccall f_5837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5828(t3,((C_word*)t0)[4],t2);}

/* k4874 in doloop906 */
static void C_ccall f_4876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:907: ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),t2,lf[115],((C_word*)t0)[4]);}

/* k5892 in k5889 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in ... */
static void C_ccall f_5893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1037: exit */
t2=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5889 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in ... */
static void C_ccall f_5891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5891,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1036: print-banner */
t3=C_fast_retrieve(lf[16]);
f_1885(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5311(2,t2,C_SCHEME_UNDEFINED);}}

/* k2153 in history-add in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[44]+1 /* (set! ##csi#history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_2142(t3,t2);}

/* k5897 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_ccall f_5899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5899,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1031: print-usage */
t3=C_fast_retrieve(lf[9]);
f_1862(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5309(2,t2,C_SCHEME_UNDEFINED);}}

/* k3120 in for-each-loop429 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3112(t3,((C_word*)t0)[4],t2);}

/* k4572 in k4570 in k4567 in k4565 in k4563 in doloop836 in k4549 */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4555(t5,((C_word*)t0)[5],t2,t4);}

/* k2395 in k2393 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:329: describe */
t2=C_fast_retrieve(lf[78]);
f_3239(3,t2,((C_word*)t0)[2],t1);}

/* k4570 in k4567 in k4565 in k4563 in doloop836 in k4549 */
static void C_ccall f_4571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:842: newline */
t3=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2393 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:328: eval */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k5264 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in ... */
static void C_ccall f_5265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5271,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:1027: read */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k5883 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in ... */
static void C_ccall f_5884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1041: print */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* for-each-loop429 in k2981 in k2979 in k2965 in k2963 in k2961 */
static void C_fcall f_3112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3112,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3121,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:484: g430 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5860 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in ... */
static void C_ccall f_5861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1048: print-banner */
t2=C_fast_retrieve(lf[16]);
f_1885(2,t2,((C_word*)t0)[2]);}

/* k2380 in k2378 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:324: pretty-print */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2382 in k2380 in k2378 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in ... */
static void C_fcall f_5258(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5258,NULL,3,t1,t2,t3);}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5300,tmp=(C_word)a,a+=2,tmp):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5265,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1026: open-input-string */
t7=C_fast_retrieve(lf[278]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 in ... */
static void C_ccall f_4516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=C_slot(((C_word*)t0)[13],C_fix(0));
/* csi.scm:815: display */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[12]);}

/* k4517 in k4515 in k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in ... */
static void C_ccall f_4518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm:815: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[260],((C_word*)t0)[12]);}

/* k5252 in k5232 in k5227 in k5609 in k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in ... */
static void C_ccall f_5253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csi.scm:1021: chop-separator */
t3=C_fast_retrieve(lf[29]);
f_1946(3,t3,((C_word*)t0)[2],t2);}
else{
/* csi.scm:1021: chop-separator */
t2=C_fast_retrieve(lf[29]);
f_1946(3,t2,((C_word*)t0)[2],lf[311]);}}

/* ##csi#history-add in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2134,3,t0,t1,t2);}
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[47]+1):C_slot(t2,C_fix(0)));
t5=C_block_size(C_fast_retrieve(lf[44]));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2142,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_fast_retrieve(lf[25]),t5))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2155,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_fixnum_times(C_fix(2),t5);
/* csi.scm:233: vector-resize */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,C_fast_retrieve(lf[44]),t8);}
else{
t7=t6;
f_2142(t7,C_SCHEME_UNDEFINED);}}

/* k2755 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k5877 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in ... */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1042: exit */
t2=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4650,a[2]=t2,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t4=C_slot(((C_word*)t0)[9],C_fix(2));
t5=t3;
f_4650(t5,C_i_pairp(t4));}
else{
t4=t3;
f_4650(t4,C_SCHEME_FALSE);}}

/* k4513 in k4511 in k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[12]);}

/* k4509 in k4507 in doloop784 in k4477 in show-frameinfo in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(58),((C_word*)t0)[12]);}

/* k2378 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:323: eval */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2370 in k2359 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:319: ##sys#strip-syntax */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),((C_word*)t0)[2],t1);}

/* f6738 in k2622 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f6738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:361: string-append */
t2=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[103],t1);}

/* k5245 in k5240 in k5238 in k5232 in k5227 in k5609 in k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in ... */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm:1024: load */
t2=C_fast_retrieve(lf[87]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_5356(2,t2,C_SCHEME_UNDEFINED);}}

/* ##csi#history-clear in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
t2=*((C_word*)lf[47]+1);
/* csi.scm:239: vector-fill! */
t3=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,C_fast_retrieve(lf[44]),*((C_word*)lf[47]+1));}

/* k5240 in k5238 in k5232 in k5227 in k5609 in k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in ... */
static void C_ccall f_5241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5247,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1023: file-exists? */
t3=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* loop in member* in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4944(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4944,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4956,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4956(t6,t1,((C_word*)t0)[3]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* member* in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4938(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4938,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4944,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4944(t7,t1,t3);}

/* doloop934 */
static void C_fcall f_4820(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4820,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4829,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4840,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t6=C_i_car(t3);
/* csi.scm:899: compare */
t7=((C_word*)t0)[5];
f_4738(t7,t5,t6);}}

/* k4828 in doloop934 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4820(t5,((C_word*)t0)[5],t2,t4);}

/* k2367 in k2359 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:319: pretty-print */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k2361 in k2359 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* k5238 in k5232 in k5227 in k5609 in k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in ... */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5241,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1022: string-append */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,lf[310],lf[0]);}

/* k2359 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2368,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2371,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:319: expand */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}

/* k5232 in k5227 in k5609 in k5607 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in ... */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5234,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm:1020: load */
t2=C_fast_retrieve(lf[87]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5253,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1021: get-environment-variable */
t4=C_fast_retrieve(lf[42]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[312]);}}

/* k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
t2=C_establish_signal_handler(C_fix((C_word)SIGINT),C_fix((C_word)SIGINT));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6052,tmp=(C_word)a,a+=2,tmp);
t4=C_i_setslot(C_fast_retrieve(lf[264]),C_fix((C_word)SIGINT),t3);
t5=C_mutate(&lf[265] /* (set! member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4938,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[266] /* (set! canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4990,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[275]+1 /* (set! ##csi#run ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5152,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1138: run */
t9=C_fast_retrieve(lf[275]);
f_5152(2,t9,t8);}

/* k4930 in k2687 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4736(t2,C_SCHEME_FALSE);}

/* f_4815 in doloop906 */
static void C_ccall f_4815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4815,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4820,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4820(t7,t1,C_fix(0),t2);}

/* f_5516 in k5495 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in ... */
static void C_ccall f_5516(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_5516r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5516r(t0,t1,t2);}}

static void C_ccall f_5516r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
if(C_truep(C_fixnump(t4))){
t5=C_i_car(t2);
/* csi.scm:1133: exit */
t6=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}
else{
/* csi.scm:1133: exit */
t5=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,C_fix(0));}}
else{
/* csi.scm:1133: exit */
t3=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_fix(0));}}

/* k5513 */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1131: g1427 */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* k4804 in doloop906 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4785(t4,((C_word*)t0)[4],t3);}

/* f_5293 in doloop1227 in k5270 in k5264 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in ... */
static void C_ccall f_5293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5293,2,t0,t1);}
/* csi.scm:1029: eval */
t2=C_fast_retrieve(lf[65]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k5290 in doloop1227 in k5270 in k5264 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in ... */
static void C_ccall f_5291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:1029: rec */
t2=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}

/* find in loop in member* in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_4956(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4956,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* csi.scm:931: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4944(t4,t1,t3);}
else{
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[2]);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* csi.scm:933: find */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* k5281 in doloop1227 in k5270 in k5264 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in ... */
static void C_ccall f_5282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1027: read */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5287 in k5281 in doloop1227 in k5270 in k5264 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in ... */
static void C_ccall f_5288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_5273(t2,((C_word*)t0)[3],t1);}

/* for-each-loop1241 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in ... */
static void C_fcall f_5828(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5828,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5837,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1053: g1242 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop1227 in k5270 in k5264 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in ... */
static void C_fcall f_5273(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5273,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5282,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5291,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5293,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm:1029: ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,*((C_word*)lf[277]+1));}}

/* fail */
static void C_fcall f_4768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4768,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4772,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:883: display */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5270 in k5264 in evalstring in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in run in k4932 in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in ... */
static void C_ccall f_5271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5271,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5273,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5273(t5,((C_word*)t0)[4],t1);}

/* k5816 in for-each-loop1258 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in ... */
static void C_ccall f_5817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5808(t3,((C_word*)t0)[4],t2);}

/* k4892 in for-each-loop920 in doloop906 */
static void C_ccall f_4893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4884(t4,((C_word*)t0)[5],t2,t3);}

/* doloop906 */
static void C_fcall f_4785(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4785,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
/* csi.scm:887: fail */
t3=((C_word*)t0)[2];
f_4768(t3,t1,lf[112]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[7],"selected-frame"),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[113]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4806,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4815,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[92]);
t13=C_i_check_list_2(t11,lf[92]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4884,a[2]=t16,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_4884(t18,t14,t10,t11);}
else{
t9=t2;
t10=C_u_i_cdr(t9);
t21=t1;
t22=t10;
t1=t21;
t2=t22;
goto loop;}}}

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
if(!C_demand_2(2602)){
C_save(t1);
C_rereclaim2(2602*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,409);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\006.csirc");
lf[2]=C_h_intern(&lf[2],27,"\003sysrepl-print-length-limit");
lf[3]=C_h_intern(&lf[3],4,"\000csi");
lf[4]=C_h_intern(&lf[4],12,"\003sysfeatures");
lf[5]=C_h_intern(&lf[5],19,"\003sysnotices-enabled");
lf[6]=C_h_intern(&lf[6],14,"editor-command");
lf[9]=C_h_intern(&lf[9],15,"\003csiprint-usage");
lf[10]=C_h_intern(&lf[10],7,"display");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\004V    -b  -batch                    terminate after command-line processing\012 "
"   -w  -no-warnings              disable all warnings\012    -K  -keyword-style STY"
"LE      enable alternative keyword-syntax\012                                   (pr"
"efix, suffix or none)\012        -no-parentheses-synonyms  disables list delimiter "
"synonyms\012        -no-symbol-escape         disables support for escaped symbols\012"
"        -r5rs-syntax              disables the Chicken extensions to\012           "
"                        R5RS syntax\012    -s  -script PATHNAME          use interp"
"reter for shell scripts\012        -ss PATHNAME              shell script with `mai"
"n\047 procedure\012        -sx PATHNAME              same as `-s\047, but print each expr"
"ession\012                                   as it is evaluated\012        -setup-mode"
"               prefer the current directory when locating extensions\012    -R  -re"
"quire-extension NAME   require extension and import before\012                     "
"              executing code\012    -I  -include-path PATHNAME    add PATHNAME to i"
"nclude path\012    --                            ignore all following options\012");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\003 \047\012");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000D    -n  -no-init                  do not load initialization file ` ");
lf[14]=C_h_intern(&lf[14],19,"\003sysprint-to-string");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\003\052usage: csi [FILENAME | OPTION ...]\012\012  `csi\047 is the CHICKEN interpreter.\012  \012"
"  FILENAME is a Scheme source file name with optional extension. OPTION may be\012 "
" one of the following:\012\012    -h  -help  --help             display this text and "
"exit\012        -version                  display version and exit\012        -release"
"                  print release number and exit\012    -i  -case-insensitive       "
"  enable case-insensitive reading\012    -e  -eval EXPRESSION          evaluate giv"
"en expression\012    -p  -print EXPRESSION         evaluate and print result(s)\012   "
" -P  -pretty-print EXPRESSION  evaluate and print result(s) prettily\012    -D  -fe"
"ature SYMBOL           register feature identifier\012        -no-feature SYMBOL   "
"     disable built-in feature identifier\012    -q  -quiet                    do no"
"t print banner\012");
lf[16]=C_h_intern(&lf[16],16,"\003csiprint-banner");
lf[17]=C_h_intern(&lf[17],5,"print");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000C(c) 2008-2013, The Chicken Team\012(c) 2000-2007, Felix L. Winkelmann\012");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[20]=C_h_intern(&lf[20],15,"chicken-version");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\007CHICKEN");
lf[22]=C_h_intern(&lf[22],7,"newline");
lf[23]=C_h_intern(&lf[23],18,"\003sysuser-read-hook");
lf[24]=C_h_intern(&lf[24],5,"quote");
lf[25]=C_h_intern(&lf[25],17,"\003csihistory-count");
lf[26]=C_h_intern(&lf[26],15,"\003csihistory-ref");
lf[27]=C_h_intern(&lf[27],21,"\003syssharp-number-hook");
lf[29]=C_h_intern(&lf[29],18,"\003csichop-separator");
lf[30]=C_h_intern(&lf[30],9,"substring");
lf[31]=C_h_intern(&lf[31],1,"@");
lf[32]=C_h_intern(&lf[32],25,"\003syspeek-nonnull-c-string");
lf[33]=C_h_intern(&lf[33],12,"file-exists\077");
lf[34]=C_h_intern(&lf[34],17,"\003sysstring-append");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004.bat");
lf[36]=C_h_intern(&lf[36],22,"\003csilookup-script-file");
lf[37]=C_h_intern(&lf[37],13,"string-append");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[39]=C_h_intern(&lf[39],12,"string-split");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[42]=C_h_intern(&lf[42],24,"get-environment-variable");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\004PATH");
lf[44]=C_h_intern(&lf[44],16,"\003csihistory-list");
lf[45]=C_h_intern(&lf[45],13,"vector-resize");
lf[46]=C_h_intern(&lf[46],15,"\003csihistory-add");
lf[47]=C_h_intern(&lf[47],19,"\003sysundefined-value");
lf[48]=C_h_intern(&lf[48],17,"\003csihistory-clear");
lf[49]=C_h_intern(&lf[49],12,"vector-fill!");
lf[50]=C_h_intern(&lf[50],16,"\003csihistory-show");
lf[51]=C_h_intern(&lf[51],19,"\003sysstandard-output");
lf[52]=C_h_intern(&lf[52],9,"\003sysprint");
lf[53]=C_h_intern(&lf[53],27,"\003syswith-print-length-limit");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[55]=C_h_intern(&lf[55],19,"\003syswrite-char/port");
lf[56]=C_h_intern(&lf[56],9,"\003syserror");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000 history entry index out of range");
lf[58]=C_h_intern(&lf[58],14,"\003csitty-input\077");
lf[59]=C_h_intern(&lf[59],13,"\003systty-port\077");
lf[60]=C_h_intern(&lf[60],18,"\003sysstandard-input");
lf[61]=C_h_intern(&lf[61],18,"\003sysbreak-on-error");
lf[62]=C_h_intern(&lf[62],20,"\003sysread-prompt-hook");
lf[64]=C_h_intern(&lf[64],16,"toplevel-command");
lf[65]=C_h_intern(&lf[65],4,"eval");
lf[66]=C_h_intern(&lf[66],12,"load-noisily");
lf[67]=C_h_intern(&lf[67],9,"read-line");
lf[68]=C_h_intern(&lf[68],6,"expand");
lf[69]=C_h_intern(&lf[69],12,"pretty-print");
lf[70]=C_h_intern(&lf[70],6,"values");
lf[72]=C_h_intern(&lf[72],4,"exit");
lf[73]=C_h_intern(&lf[73],1,"x");
lf[74]=C_h_intern(&lf[74],16,"\003sysstrip-syntax");
lf[75]=C_h_intern(&lf[75],4,"read");
lf[76]=C_h_intern(&lf[76],1,"p");
lf[77]=C_h_intern(&lf[77],1,"d");
lf[78]=C_h_intern(&lf[78],12,"\003csidescribe");
lf[79]=C_h_intern(&lf[79],2,"du");
lf[80]=C_h_intern(&lf[80],8,"\003csidump");
lf[81]=C_h_intern(&lf[81],3,"dur");
lf[82]=C_h_intern(&lf[82],1,"r");
lf[83]=C_h_intern(&lf[83],10,"\003csireport");
lf[84]=C_h_intern(&lf[84],1,"q");
lf[85]=C_h_intern(&lf[85],13,"\003sysquit-hook");
lf[86]=C_h_intern(&lf[86],1,"l");
lf[87]=C_h_intern(&lf[87],4,"load");
lf[88]=C_h_intern(&lf[88],2,"ln");
lf[89]=C_h_intern(&lf[89],6,"print\052");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\004==> ");
lf[91]=C_h_intern(&lf[91],8,"\000printer");
lf[92]=C_h_intern(&lf[92],8,"for-each");
lf[93]=C_h_intern(&lf[93],1,"t");
lf[94]=C_h_intern(&lf[94],17,"\003sysdisplay-times");
lf[95]=C_h_intern(&lf[95],14,"\003sysstop-timer");
lf[96]=C_h_intern(&lf[96],15,"\003sysstart-timer");
lf[97]=C_h_intern(&lf[97],3,"exn");
lf[98]=C_h_intern(&lf[98],18,"\003syslast-exception");
lf[99]=C_h_intern(&lf[99],1,"e");
lf[100]=C_h_intern(&lf[100],6,"printf");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000,editor returned with non-zero exit status ~a");
lf[102]=C_h_intern(&lf[102],6,"system");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[104]=C_h_intern(&lf[104],2,"ch");
lf[105]=C_h_intern(&lf[105],1,"h");
lf[106]=C_h_intern(&lf[106],1,"c");
lf[108]=C_h_intern(&lf[108],1,"f");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\016no such frame\012");
lf[110]=C_h_intern(&lf[110],26,"\003sysrepl-recent-call-chain");
lf[111]=C_h_intern(&lf[111],1,"g");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\027no environment in frame");
lf[113]=C_h_intern(&lf[113],9,"frameinfo");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\012; getting ");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\022no such variable: ");
lf[116]=C_h_intern(&lf[116],7,"call/cc");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000#string or symbol required for `,g\047\012");
lf[118]=C_h_intern(&lf[118],1,"s");
lf[119]=C_h_intern(&lf[119],1,"\077");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\002 ,");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\003\266Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pr"
"etty print evaluated expression EXP\012 ,d EXP            Describe result of evalua"
"ted expression EXP\012 ,du EXP           Dump data of expression EXP\012 ,dur EXP N   "
"     Dump range\012 ,q                Quit interpreter\012 ,l FILENAME ...   Load one "
"or more files\012 ,ln FILENAME ...  Load one or more files and print result of each"
" top-level expression\012 ,r                Show system information\012 ,h            "
"    Show history of expression results\012 ,ch               Clear history of expre"
"ssion results\012 ,e FILENAME       Run external editor\012 ,s TEXT ...       Execute "
"shell-command\012 ,exn              Describe last exception\012 ,c                Show"
" call-chain of most recent error\012 ,f N              Select frame N\012 ,g NAME     "
"      Get variable NAME from current frame\012 ,t EXP            Evaluate form and "
"print elapsed time\012 ,x EXP            Pretty print expanded expression EXP\012");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\0005undefined toplevel command ~s - enter `,\077\047 for help~%");
lf[123]=C_h_intern(&lf[123],7,"unquote");
lf[124]=C_h_intern(&lf[124],4,"chop");
lf[125]=C_h_intern(&lf[125],4,"sort");
lf[126]=C_h_intern(&lf[126],19,"with-output-to-port");
lf[127]=C_h_intern(&lf[127],4,"argv");
lf[128]=C_h_intern(&lf[128],8,"truncate");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[130]=C_h_intern(&lf[130],11,"make-string");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\004  ~a");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\025symbol gc is enabled\012");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\027interrupts are enabled\012");
lf[134]=C_h_intern(&lf[134],16,"\003syswrite-char-0");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\010(64-bit)");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\010 (fixed)");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\010downward");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\006upward");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\002\207~%~%~\012                   Machine type:    \011~A ~A~%~\012                   Soft"
"ware type:   \011~A~%~\012                   Software version:\011~A~%~\012                 "
"  Build platform:  \011~A~%~\012                   Installation prefix:\011~A~%~\012        "
"           Extension path:  \011~A~%~\012                   Include path:    \011~A~%~\012  "
"                 Symbol-table load:\011~S~%  ~\012                     Avg bucket leng"
"th:\011~S~%  ~\012                     Total symbol count:\011~S~%~\012                   Me"
"mory:\011heap size is ~S bytes~A with ~S bytes currently in use~%~  \012              "
"       nursery size is ~S bytes, stack grows ~A~%~\012                   Command li"
"ne:    \011~S~%");
lf[142]=C_h_intern(&lf[142],21,"\003sysinclude-pathnames");
lf[143]=C_h_intern(&lf[143],15,"repository-path");
lf[144]=C_h_intern(&lf[144],14,"build-platform");
lf[145]=C_h_intern(&lf[145],16,"software-version");
lf[146]=C_h_intern(&lf[146],13,"software-type");
lf[147]=C_h_intern(&lf[147],12,"machine-type");
lf[148]=C_h_intern(&lf[148],15,"keyword->string");
lf[149]=C_h_intern(&lf[149],8,"string<\077");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\015Features:~%~%");
lf[151]=C_h_intern(&lf[151],17,"memory-statistics");
lf[152]=C_h_intern(&lf[152],21,"\003syssymbol-table-info");
lf[153]=C_h_intern(&lf[153],2,"gc");
lf[155]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376B\000\000\030vector of unsigned bytes\376\003\000\000\002\376\001\000\000\017u8vector-leng"
"th\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010s8vector\376\003\000\000\002\376B\000\000\026vector of signed byt"
"es\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000"
"\002\376B\000\000\037vector of unsigned 16-bit words\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\015u16vect"
"or-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376B\000\000\035vector of signed 16-bit words\376\003\000\000\002\376\001\000"
"\000\020s16vector-length\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376B\000\000\037ve"
"ctor of unsigned 32-bit words\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\015u32vector-ref\376\377"
"\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376B\000\000\035vector of signed 32-bit words\376\003\000\000\002\376\001\000\000\020s32vec"
"tor-length\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376B\000\000\027vector of "
"32-bit floats\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"f64vector\376\003\000\000\002\376B\000\000\027vector of 64-bit floats\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\015f6"
"4vector-ref\376\377\016\376\377\016");
lf[157]=C_h_intern(&lf[157],6,"length");
lf[158]=C_h_intern(&lf[158],8,"list-ref");
lf[159]=C_h_intern(&lf[159],10,"string-ref");
lf[160]=C_h_intern(&lf[160],7,"fprintf");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000 ~% (~A elements not displayed)~%");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000.\011(followed by ~A identical instance~a)~% ...~%");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\007 ~S: ~S");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\021~A of length ~S~%");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000$character ~S, code: ~S, #x~X, #o~O~%");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\016boolean true~%");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\017boolean false~%");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\014empty list~%");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\024end-of-file object~%");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\024unspecified object~%");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\016, character ~S");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000(exact integer ~S~%  #x~X~%  #o~O~%  #b~B");
lf[175]=C_h_intern(&lf[175],28,"\003sysarbitrary-unbound-symbol");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\017unbound value~%");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\023inexact number ~S~%");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\013number ~S~%");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\006string");
lf[180]=C_h_intern(&lf[180],8,"\003syssize");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\006vector");
lf[182]=C_h_intern(&lf[182],8,"\003sysslot");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\035keyword symbol with name ~s~%");
lf[184]=C_h_intern(&lf[184],18,"\003syssymbol->string");
lf[185]=C_h_intern(&lf[185],5,"write");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\005  ~s\011");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\020  \012properties:\012\012");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\013uninterned ");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\012qualified ");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\031~a~asymbol with name ~S~%");
lf[193]=C_h_intern(&lf[193],28,"\003syssymbol->qualified-string");
lf[194]=C_h_intern(&lf[194],20,"\003sysinterned-symbol\077");
lf[195]=C_h_intern(&lf[195],21,"\003sysqualified-symbol\077");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\010unbound ");
lf[197]=C_h_intern(&lf[197],32,"\003syssymbol-has-toplevel-binding\077");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\005eol~%");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\012(circle)~%");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\006~S -> ");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\024circular structure: ");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\004list");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\036pair with car ~S~%and cdr ~S~%");
lf[204]=C_h_intern(&lf[204],7,"sprintf");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000 procedure with code pointer 0x~X");
lf[206]=C_h_intern(&lf[206],25,"\003syspeek-unsigned-integer");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\005input");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\006output");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\0005~A port of type ~A with name ~S and file pointer ~X~%");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000/locative~%  pointer ~X~%  index ~A~%  type ~A~%");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\004slot");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\010u8vector");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\010s8vector");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\011u16vector");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\011s16vector");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\011u32vector");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\011s32vector");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\011f32vector");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\011f64vector");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\024machine pointer ~X~%");
lf[222]=C_h_intern(&lf[222],11,"\003csihexdump");
lf[223]=C_h_intern(&lf[223],8,"\003sysbyte");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\022blob of size ~S:~%");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\030lambda information: ~s~%");
lf[226]=C_h_intern(&lf[226],23,"\003syslambda-info->string");
lf[227]=C_h_intern(&lf[227],10,"hash-table");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\013 ~S\011-> ~S~%");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\025  hash function: ~a~%");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000:hash-table with ~S element~a~%  comparison procedure: ~A~%");
lf[233]=C_h_intern(&lf[233],9,"condition");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\007\011~s: ~s");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\005 ~s~%");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\017condition: ~s~%");
lf[237]=C_h_intern(&lf[237],3,"map");
lf[238]=C_h_intern(&lf[238],6,"append");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\031structure of type `~S\047:~%");
lf[240]=C_h_intern(&lf[240],18,"\003syshash-table-ref");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\020unknown object~%");
lf[242]=C_h_intern(&lf[242],15,"\003sysbytevector\077");
lf[243]=C_h_intern(&lf[243],13,"\003syslocative\077");
lf[244]=C_h_intern(&lf[244],5,"port\077");
lf[245]=C_h_intern(&lf[245],8,"keyword\077");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\034statically allocated (0x~X) ");
lf[247]=C_h_intern(&lf[247],17,"\003sysblock-address");
lf[248]=C_h_intern(&lf[248],14,"set-describer!");
lf[249]=C_h_intern(&lf[249],19,"\003syshash-table-set!");
lf[250]=C_h_intern(&lf[250],3,"min");
lf[251]=C_h_intern(&lf[251],4,"dump");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot dump immediate object");
lf[253]=C_h_intern(&lf[253],13,"\003syspeek-byte");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot dump object");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\004:\011  ");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\006  ---\012");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\003\011  ");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\002[]");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[263]=C_h_intern(&lf[263],23,"\003sysuser-interrupt-hook");
lf[264]=C_h_intern(&lf[264],17,"\003syssignal-vector");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\007-script");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[273]=C_h_intern(&lf[273],16,"\003sysstring->list");
lf[274]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\007-script\376\003\000\000\002\376B\000\000\010-version\376\003\000\000\002\376B\000\000\005-help\376\003\000\000"
"\002\376B\000\000\006--help\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\013-no-feature\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\021-cas"
"e-insensitive\376\003\000\000\002\376B\000\000\016-keyword-style\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000"
"\021-no-symbol-escape\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\022-require-"
"extension\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\010-no-ini"
"t\376\003\000\000\002\376B\000\000\015-include-path\376\003\000\000\002\376B\000\000\010-release\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pretty-prin"
"t\376\003\000\000\002\376B\000\000\002--\376\377\016");
lf[275]=C_h_intern(&lf[275],7,"\003csirun");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\047missing argument to command-line option");
lf[277]=C_h_intern(&lf[277],8,"\003syslist");
lf[278]=C_h_intern(&lf[278],17,"open-input-string");
lf[279]=C_h_intern(&lf[279],17,"register-feature!");
lf[280]=C_h_intern(&lf[280],19,"unregister-feature!");
lf[281]=C_h_intern(&lf[281],4,"repl");
lf[282]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002--\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\003\000\000\002\376B\000\000\002-n"
"\376\003\000\000\002\376B\000\000\010-no-init\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-"
"insensitive\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\003\000\000\002\376B\000"
"\000\014-r5rs-syntax\376\003\000\000\002\376B\000\000\013-setup-mode\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B"
"\000\000\007-script\376\377\016");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\002-K");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\016-keyword-style");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\002-R");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[292]=C_h_intern(&lf[292],22,"\004corerequire-extension");
lf[293]=C_h_intern(&lf[293],14,"string->symbol");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\002-e");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\005-eval");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\006-print");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\002-P");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\015-pretty-print");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\003-ss");
lf[301]=C_h_intern(&lf[301],4,"main");
lf[302]=C_h_intern(&lf[302],22,"command-line-arguments");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\003-sx");
lf[304]=C_h_intern(&lf[304],18,"\003sysstandard-error");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\002; ");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\003\012; ");
lf[307]=C_h_intern(&lf[307],12,"flush-output");
lf[308]=C_h_intern(&lf[308],21,"with-output-to-string");
lf[309]=C_h_intern(&lf[309],8,"\003sysload");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\004HOME");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\002./");
lf[314]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-n\376\003\000\000\002\376B\000\000\010-no-init\376\377\016");
lf[315]=C_h_intern(&lf[315],13,"symbol-escape");
lf[316]=C_h_intern(&lf[316],20,"parentheses-synonyms");
lf[317]=C_h_intern(&lf[317],13,"keyword-style");
lf[318]=C_h_intern(&lf[318],5,"\000none");
lf[319]=C_h_intern(&lf[319],14,"case-sensitive");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000/Disabled the Chicken extensions to R5RS syntax\012");
lf[321]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000%Disabled support for escaped symbols\012");
lf[323]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021-no-symbol-escape\376\377\016");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\052Disabled support for parentheses synonyms\012");
lf[325]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030-no-parentheses-synonyms\376\377\016");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[327]=C_h_intern(&lf[327],7,"\000prefix");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[330]=C_h_intern(&lf[330],7,"\000suffix");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000+missing argument to `-keyword-style\047 option");
lf[332]=C_h_intern(&lf[332],10,"\003sysnodups");
lf[333]=C_h_intern(&lf[333],8,"string=\077");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\002-I");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[339]=C_h_intern(&lf[339],16,"case-insensitive");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000-Identifiers and symbols are case insensitive\012");
lf[341]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016");
lf[342]=C_h_intern(&lf[342],12,"load-verbose");
lf[343]=C_h_intern(&lf[343],20,"\003syswarnings-enabled");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\026Warnings are disabled\012");
lf[345]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-w\376\003\000\000\002\376B\000\000\014-no-warnings\376\377\016");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\013-setup-mode");
lf[348]=C_h_intern(&lf[348],14,"\003syssetup-mode");
lf[349]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-v\376\003\000\000\002\376B\000\000\010-version\376\377\016");
lf[350]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\003\000\000\002\376B\000\000\006--help\376\377\016");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[354]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-q\376\003\000\000\002\376B\000\000\006-quiet\376\377\016");
lf[355]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-b\376\003\000\000\002\376B\000\000\006-batch\376\377\016");
lf[356]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-e\376\003\000\000\002\376B\000\000\002-p\376\003\000\000\002\376B\000\000\002-P\376\003\000\000\002\376B\000\000\005-eval\376\003\000\000\002\376B\000\000\006-print\376\003\000\000\002\376B\000\000\015-pr"
"etty-print\376\377\016");
lf[357]=C_h_intern(&lf[357],20,"\003syswindows-platform");
lf[358]=C_h_intern(&lf[358],14,"chicken-script");
lf[359]=C_h_intern(&lf[359],6,"script");
lf[360]=C_h_intern(&lf[360],12,"program-name");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\042missing or invalid script argument");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\002--");
lf[363]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-ss\376\003\000\000\002\376B\000\000\003-sx\376\003\000\000\002\376B\000\000\002-s\376\003\000\000\002\376B\000\000\007-script\376\377\016");
lf[364]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-style\376\377\016");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[366]=C_h_intern(&lf[366],17,"get-output-string");
lf[367]=C_h_intern(&lf[367],18,"open-output-string");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid option syntax");
lf[369]=C_h_intern(&lf[369],7,"reverse");
lf[370]=C_h_intern(&lf[370],22,"with-exception-handler");
lf[371]=C_h_intern(&lf[371],30,"call-with-current-continuation");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\013CSI_OPTIONS");
lf[373]=C_h_intern(&lf[373],25,"\003sysimplicit-exit-handler");
lf[374]=C_h_intern(&lf[374],28,"\003sysextend-macro-environment");
lf[375]=C_h_intern(&lf[375],10,"defhandler");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\032C_establish_signal_handler");
lf[377]=C_h_intern(&lf[377],11,"\003syssetslot");
lf[378]=C_h_intern(&lf[378],11,"\004coreinline");
lf[379]=C_h_intern(&lf[379],5,"begin");
lf[380]=C_h_intern(&lf[380],25,"\003syssyntax-rules-mismatch");
lf[381]=C_h_intern(&lf[381],18,"\003syser-transformer");
lf[382]=C_h_intern(&lf[382],23,"\003syscurrent-environment");
lf[383]=C_h_intern(&lf[383],11,"make-vector");
lf[384]=C_h_intern(&lf[384],17,"\003syspeek-c-string");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000$; switching current module to `~a\047~%");
lf[387]=C_h_intern(&lf[387],17,"\003sysswitch-module");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\027undefined module `~a\047~%");
lf[389]=C_h_intern(&lf[389],15,"\003sysfind-module");
lf[390]=C_h_intern(&lf[390],23,"\003sysresolve-module-name");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid module name `~a\047~%");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000(; resetting current module to toplevel~%");
lf[393]=C_h_intern(&lf[393],18,"\003sysstring->symbol");
lf[394]=C_h_intern(&lf[394],1,"m");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\0005,m MODULE         switch to module with name `MODULE\047");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\010#;~A~A> ");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\003~a:");
lf[398]=C_h_intern(&lf[398],15,"\003sysmodule-name");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[400]=C_h_intern(&lf[400],18,"\003syscurrent-module");
lf[401]=C_h_intern(&lf[401],11,"repl-prompt");
lf[402]=C_h_intern(&lf[402],15,"\003sysmake-string");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\013emacsclient");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\002vi");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\005EMACS");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\006VISUAL");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\006EDITOR");
lf[408]=C_h_intern(&lf[408],14,"make-parameter");
C_register_lf2(lf,409,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* doloop130 in history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2184(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2184,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,C_fast_retrieve(lf[25])))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[51]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2193,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(35),*((C_word*)lf[51]+1));}}

/* for-each-loop1258 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in k5308 in k5177 in k5175 in k5172 in k5170 in k5167 in k5165 in k5163 in k5161 in k5159 in k5157 in k5155 in ... */
static void C_fcall f_5808(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5808,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5817,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:1054: g1259 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* addext in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_1992(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1992,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1999,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:195: file-exists? */
t4=C_fast_retrieve(lf[33]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1997 in addext in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1999,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2001,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),t2,t3,lf[35]);}}

/* k2196 in k2194 in k2192 in doloop130 in history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm:247: ##sys#with-print-length-limit */
((C_proc4)C_fast_retrieve_symbol_proc(lf[53]))(4,*((C_word*)lf[53]+1),t2,C_fix(80),t3);}

/* doloop1413 in k5552 in k5550 in k5546 */
static void C_fcall f_5562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5562,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5573,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=C_fast_retrieve(lf[55]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,*((C_word*)lf[304]+1));}}

/* k2194 in k2192 in doloop130 in history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:242: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[54],((C_word*)t0)[5]);}

/* k2192 in doloop130 in history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:242: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* f_5590 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5590,2,t0,t1);}
t2=C_fast_retrieve(lf[69]);
/* csi.scm:1117: g1410 */
t3=C_fast_retrieve(lf[69]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k2141 in history-add in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_fcall f_2142(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_vector_set(C_fast_retrieve(lf[44]),C_fast_retrieve(lf[25]),((C_word*)t0)[2]);
t3=C_fixnum_plus(C_fast_retrieve(lf[25]),C_fix(1));
t4=C_mutate((C_word*)lf[25]+1 /* (set! ##csi#history-count ...) */,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[2]);}

/* k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
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
C_word ab[56],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1975,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1992,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate((C_word*)lf[36]+1 /* (set! ##csi#lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2041,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp));
t5=C_SCHEME_UNDEFINED;
t6=C_a_i_vector(&a,32,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5,t5);
t7=C_mutate((C_word*)lf[44]+1 /* (set! ##csi#history-list ...) */,t6);
t8=C_set_block_item(lf[25] /* ##csi#history-count */,0,C_fix(1));
t9=C_fast_retrieve(lf[45]);
t10=C_mutate((C_word*)lf[46]+1 /* (set! ##csi#history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[48]+1 /* (set! ##csi#history-clear ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2169,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[50]+1 /* (set! ##csi#history-show ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2178,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[26]+1 /* (set! ##csi#history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2219,tmp=(C_word)a,a+=2,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6208,tmp=(C_word)a,a+=2,tmp);
/* csi.scm:259: repl-prompt */
t16=C_fast_retrieve(lf[401]);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t14,t15);}

/* f_1975 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1975,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
t7=stub75(t4,t5,t6);
/* csi.scm:193: ##sys#peek-nonnull-c-string */
t8=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,C_fix(0));}

/* ##csi#history-show in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2178,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2184,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2184(t5,t1,C_fix(1));}

/* k5574 in k5572 in doloop1413 in k5552 in k5550 in k5546 */
static void C_ccall f_5576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5562(t3,((C_word*)t0)[4],t2);}

/* k5572 in doloop1413 in k5552 in k5550 in k5546 */
static void C_ccall f_5573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_char_equalp(C_make_character(10),((C_word*)t0)[5]))){
/* csi.scm:1126: display */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[305],*((C_word*)lf[304]+1));}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5562(t4,((C_word*)t0)[4],t3);}}

/* k2699 in k2697 in k2695 in k2330 in csi-eval in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_2700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3720,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm:672: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t2,((C_word*)t0)[2],C_fix(0));}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3824,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm:685: ##sys#peek-unsigned-integer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t2,((C_word*)t0)[2],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm:686: ##sys#bytevector? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[242]+1)))(3,*((C_word*)lf[242]+1),t2,((C_word*)t0)[2]);}}}

/* k3725 in k3718 in k3694 in k3587 in k3490 in k3360 in describe in k3235 in k2947 in k2945 in k2823 in k2242 in k1973 in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_3726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
switch(t3){
case C_fix(0):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[211]);
case C_fix(1):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[212]);
case C_fix(2):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[213]);
case C_fix(3):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[214]);
case C_fix(4):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[215]);
case C_fix(5):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[216]);
case C_fix(6):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[217]);
case C_fix(7):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[218]);
case C_fix(8):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[219]);
case C_fix(9):
/* csi.scm:671: fprintf */
t4=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,lf[220]);
default:
t4=C_SCHEME_UNDEFINED;
/* csi.scm:671: fprintf */
t5=*((C_word*)lf[160]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,((C_word*)t0)[3],((C_word*)t0)[4],lf[210],t1,t2,t4);}}

/* f_5507 in k5495 in doloop1357 in k5357 in k5355 in k5353 in k5351 in k5349 in k5347 in k5344 in k5340 in k5336 in k5333 in k5329 in k5326 in k5322 in k5320 in k5318 in k5316 in k5314 in k5312 in k5310 in ... */
static void C_ccall f_5507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5507,2,t0,t1);}
t2=C_fast_retrieve(lf[301]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5514,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm:1131: command-line-arguments */
t4=C_fast_retrieve(lf[302]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* map-loop403 in k2979 in k2965 in k2963 in k2961 */
static void C_fcall f_3136(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3136,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csi.scm:484: g409 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3132 in k2979 in k2965 in k2963 in k2961 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm:484: sort */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,*((C_word*)lf[149]+1));}

/* k1913 in user-read-hook in k1858 in k1856 in k1851 in k1839 in k1837 in k1835 in k1833 in k1831 */
static void C_ccall f_1914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1914,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[24],t1));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[512] = {
{"f_5637:csi_2escm",(void*)f_5637},
{"f_5639:csi_2escm",(void*)f_5639},
{"f_3161:csi_2escm",(void*)f_3161},
{"f_1925:csi_2escm",(void*)f_1925},
{"f_3892:csi_2escm",(void*)f_3892},
{"f_3521:csi_2escm",(void*)f_3521},
{"f_3526:csi_2escm",(void*)f_3526},
{"f_2711:csi_2escm",(void*)f_2711},
{"f_2712:csi_2escm",(void*)f_2712},
{"f_5648:csi_2escm",(void*)f_5648},
{"f_3177:csi_2escm",(void*)f_3177},
{"f_1958:csi_2escm",(void*)f_1958},
{"f_3540:csi_2escm",(void*)f_3540},
{"f_3548:csi_2escm",(void*)f_3548},
{"f_2637:csi_2escm",(void*)f_2637},
{"f_3535:csi_2escm",(void*)f_3535},
{"f_3537:csi_2escm",(void*)f_3537},
{"f_5624:csi_2escm",(void*)f_5624},
{"f_5626:csi_2escm",(void*)f_5626},
{"f_5628:csi_2escm",(void*)f_5628},
{"f_2623:csi_2escm",(void*)f_2623},
{"f_2620:csi_2escm",(void*)f_2620},
{"f_5620:csi_2escm",(void*)f_5620},
{"f_5622:csi_2escm",(void*)f_5622},
{"f_1932:csi_2escm",(void*)f_1932},
{"f_1934:csi_2escm",(void*)f_1934},
{"f_3566:csi_2escm",(void*)f_3566},
{"f_2659:csi_2escm",(void*)f_2659},
{"f_5650:csi_2escm",(void*)f_5650},
{"f_4027:csi_2escm",(void*)f_4027},
{"f_1946:csi_2escm",(void*)f_1946},
{"f_2648:csi_2escm",(void*)f_2648},
{"f_4650:csi_2escm",(void*)f_4650},
{"f_3876:csi_2escm",(void*)f_3876},
{"f_3711:csi_2escm",(void*)f_3711},
{"f_3824:csi_2escm",(void*)f_3824},
{"f_4005:csi_2escm",(void*)f_4005},
{"f_6103:csi_2escm",(void*)f_6103},
{"f_4636:csi_2escm",(void*)f_4636},
{"f_4638:csi_2escm",(void*)f_4638},
{"f_6112:csi_2escm",(void*)f_6112},
{"f_3846:csi_2escm",(void*)f_3846},
{"f_6163:csi_2escm",(void*)f_6163},
{"f_5017:csi_2escm",(void*)f_5017},
{"f_6177:csi_2escm",(void*)f_6177},
{"f_3868:csi_2escm",(void*)f_3868},
{"f_6149:csi_2escm",(void*)f_6149},
{"f_3857:csi_2escm",(void*)f_3857},
{"f_3859:csi_2escm",(void*)f_3859},
{"f_5328:csi_2escm",(void*)f_5328},
{"f_5323:csi_2escm",(void*)f_5323},
{"f_5321:csi_2escm",(void*)f_5321},
{"f_6155:csi_2escm",(void*)f_6155},
{"f_6153:csi_2escm",(void*)f_6153},
{"f_5317:csi_2escm",(void*)f_5317},
{"f_5315:csi_2escm",(void*)f_5315},
{"f_5319:csi_2escm",(void*)f_5319},
{"f_2950:csi_2escm",(void*)f_2950},
{"f_2957:csi_2escm",(void*)f_2957},
{"f_2959:csi_2escm",(void*)f_2959},
{"f_5608:csi_2escm",(void*)f_5608},
{"f_5313:csi_2escm",(void*)f_5313},
{"f_5311:csi_2escm",(void*)f_5311},
{"f_3508:csi_2escm",(void*)f_3508},
{"f_3506:csi_2escm",(void*)f_3506},
{"f_5309:csi_2escm",(void*)f_5309},
{"f_2982:csi_2escm",(void*)f_2982},
{"f_2983:csi_2escm",(void*)f_2983},
{"f_2980:csi_2escm",(void*)f_2980},
{"f_2986:csi_2escm",(void*)f_2986},
{"f_5300:csi_2escm",(void*)f_5300},
{"f_3210:csi_2escm",(void*)f_3210},
{"f_2962:csi_2escm",(void*)f_2962},
{"f_2964:csi_2escm",(void*)f_2964},
{"f_2966:csi_2escm",(void*)f_2966},
{"f_2968:csi_2escm",(void*)f_2968},
{"f_5611:csi_2escm",(void*)f_5611},
{"f_3511:csi_2escm",(void*)f_3511},
{"f_2420:csi_2escm",(void*)f_2420},
{"f_2422:csi_2escm",(void*)f_2422},
{"f_2424:csi_2escm",(void*)f_2424},
{"f_2914:csi_2escm",(void*)f_2914},
{"f_2426:csi_2escm",(void*)f_2426},
{"f_2912:csi_2escm",(void*)f_2912},
{"f_3830:csi_2escm",(void*)f_3830},
{"f_3834:csi_2escm",(void*)f_3834},
{"f_2946:csi_2escm",(void*)f_2946},
{"f_2940:csi_2escm",(void*)f_2940},
{"f_2949:csi_2escm",(void*)f_2949},
{"f_4215:csi_2escm",(void*)f_4215},
{"f_2975:csi_2escm",(void*)f_2975},
{"f_4207:csi_2escm",(void*)f_4207},
{"f_2463:csi_2escm",(void*)f_2463},
{"f_3589:csi_2escm",(void*)f_3589},
{"f_2455:csi_2escm",(void*)f_2455},
{"f_2906:csi_2escm",(void*)f_2906},
{"f_2458:csi_2escm",(void*)f_2458},
{"f_2901:csi_2escm",(void*)f_2901},
{"f_3578:csi_2escm",(void*)f_3578},
{"f_2935:csi_2escm",(void*)f_2935},
{"f_3575:csi_2escm",(void*)f_3575},
{"f_2930:csi_2escm",(void*)f_2930},
{"f_4063:csi_2escm",(void*)f_4063},
{"f_3591:csi_2escm",(void*)f_3591},
{"f_3599:csi_2escm",(void*)f_3599},
{"f_2604:csi_2escm",(void*)f_2604},
{"f_4610:csi_2escm",(void*)f_4610},
{"f_4050:csi_2escm",(void*)f_4050},
{"f_4058:csi_2escm",(void*)f_4058},
{"f_2211:csi_2escm",(void*)f_2211},
{"f_5965:csi_2escm",(void*)f_5965},
{"f_2219:csi_2escm",(void*)f_2219},
{"f_4601:csi_2escm",(void*)f_4601},
{"f_4044:csi_2escm",(void*)f_4044},
{"f_4298:csi_2escm",(void*)f_4298},
{"f_5956:csi_2escm",(void*)f_5956},
{"f_5954:csi_2escm",(void*)f_5954},
{"f_4280:csi_2escm",(void*)f_4280},
{"f_5958:csi_2escm",(void*)f_5958},
{"f_4284:csi_2escm",(void*)f_4284},
{"f_4031:csi_2escm",(void*)f_4031},
{"f_5050:csi_2escm",(void*)f_5050},
{"f_5952:csi_2escm",(void*)f_5952},
{"f_5950:csi_2escm",(void*)f_5950},
{"f_4444:csi_2escm",(void*)f_4444},
{"f_4447:csi_2escm",(void*)f_4447},
{"f_5945:csi_2escm",(void*)f_5945},
{"f_4276:csi_2escm",(void*)f_4276},
{"f_5937:csi_2escm",(void*)f_5937},
{"f_5057:csi_2escm",(void*)f_5057},
{"f_5053:csi_2escm",(void*)f_5053},
{"f_5030:csi_2escm",(void*)f_5030},
{"f_5931:csi_2escm",(void*)f_5931},
{"f_4096:csi_2escm",(void*)f_4096},
{"f_4421:csi_2escm",(void*)f_4421},
{"f_2676:csi_2escm",(void*)f_2676},
{"f_2670:csi_2escm",(void*)f_2670},
{"f_4429:csi_2escm",(void*)f_4429},
{"f_5041:csi_2escm",(void*)f_5041},
{"f_4088:csi_2escm",(void*)f_4088},
{"f_2409:csi_2escm",(void*)f_2409},
{"f_2407:csi_2escm",(void*)f_2407},
{"f_4453:csi_2escm",(void*)f_4453},
{"f_2203:csi_2escm",(void*)f_2203},
{"f_4455:csi_2escm",(void*)f_4455},
{"f_2200:csi_2escm",(void*)f_2200},
{"f_4459:csi_2escm",(void*)f_4459},
{"f_5091:csi_2escm",(void*)f_5091},
{"f_5363:csi_2escm",(void*)f_5363},
{"f_2696:csi_2escm",(void*)f_2696},
{"f_4487:csi_2escm",(void*)f_4487},
{"f_2698:csi_2escm",(void*)f_2698},
{"f_3246:csi_2escm",(void*)f_3246},
{"f_5358:csi_2escm",(void*)f_5358},
{"f_5356:csi_2escm",(void*)f_5356},
{"f_5354:csi_2escm",(void*)f_5354},
{"f_5352:csi_2escm",(void*)f_5352},
{"f_5350:csi_2escm",(void*)f_5350},
{"f_4432:csi_2escm",(void*)f_4432},
{"f_2688:csi_2escm",(void*)f_2688},
{"f_5098:csi_2escm",(void*)f_5098},
{"f_3237:csi_2escm",(void*)f_3237},
{"f_5447:csi_2escm",(void*)f_5447},
{"f_5346:csi_2escm",(void*)f_5346},
{"f_5348:csi_2escm",(void*)f_5348},
{"f_5342:csi_2escm",(void*)f_5342},
{"f_5423:csi_2escm",(void*)f_5423},
{"f_5082:csi_2escm",(void*)f_5082},
{"f_3239:csi_2escm",(void*)f_3239},
{"f_4687:csi_2escm",(void*)f_4687},
{"f_5434:csi_2escm",(void*)f_5434},
{"f_5335:csi_2escm",(void*)f_5335},
{"f_5337:csi_2escm",(void*)f_5337},
{"f_5330:csi_2escm",(void*)f_5330},
{"f_3257:csi_2escm",(void*)f_3257},
{"f_3252:csi_2escm",(void*)f_3252},
{"f_5482:csi_2escm",(void*)f_5482},
{"f_6184:csi_2escm",(void*)f_6184},
{"f_6181:csi_2escm",(void*)f_6181},
{"f_3286:csi_2escm",(void*)f_3286},
{"f_5496:csi_2escm",(void*)f_5496},
{"f_5397:csi_2escm",(void*)f_5397},
{"f_6196:csi_2escm",(void*)f_6196},
{"f_2856:csi_2escm",(void*)f_2856},
{"f_3278:csi_2escm",(void*)f_3278},
{"f_5383:csi_2escm",(void*)f_5383},
{"f_5380:csi_2escm",(void*)f_5380},
{"f_2881:csi_2escm",(void*)f_2881},
{"f_2886:csi_2escm",(void*)f_2886},
{"f_5375:csi_2escm",(void*)f_5375},
{"f_2484:csi_2escm",(void*)f_2484},
{"f_3295:csi_2escm",(void*)f_3295},
{"f_3297:csi_2escm",(void*)f_3297},
{"f_2472:csi_2escm",(void*)f_2472},
{"f_5906:csi_2escm",(void*)f_5906},
{"f_5901:csi_2escm",(void*)f_5901},
{"f_3027:csi_2escm",(void*)f_3027},
{"f_3029:csi_2escm",(void*)f_3029},
{"f_2493:csi_2escm",(void*)f_2493},
{"f_2492:csi_2escm",(void*)f_2492},
{"f_2499:csi_2escm",(void*)f_2499},
{"f_3011:csi_2escm",(void*)f_3011},
{"f_4412:csi_2escm",(void*)f_4412},
{"f_2245:csi_2escm",(void*)f_2245},
{"f_2243:csi_2escm",(void*)f_2243},
{"f_2265:csi_2escm",(void*)f_2265},
{"f_6034:csi_2escm",(void*)f_6034},
{"f_6037:csi_2escm",(void*)f_6037},
{"f_3004:csi_2escm",(void*)f_3004},
{"f_2068:csi_2escm",(void*)f_2068},
{"f_5726:csi_2escm",(void*)f_5726},
{"f_5728:csi_2escm",(void*)f_5728},
{"f_4465:csi_2escm",(void*)f_4465},
{"f_5721:csi_2escm",(void*)f_5721},
{"f_4996:csi_2escm",(void*)f_4996},
{"f_4990:csi_2escm",(void*)f_4990},
{"f_6072:csi_2escm",(void*)f_6072},
{"f_6047:csi_2escm",(void*)f_6047},
{"f_6040:csi_2escm",(void*)f_6040},
{"f_6045:csi_2escm",(void*)f_6045},
{"f_3996:csi_2escm",(void*)f_3996},
{"f_6058:csi_2escm",(void*)f_6058},
{"f_4479:csi_2escm",(void*)f_4479},
{"f_6050:csi_2escm",(void*)f_6050},
{"f_6052:csi_2escm",(void*)f_6052},
{"f_5489:csi_2escm",(void*)f_5489},
{"f_5462:csi_2escm",(void*)f_5462},
{"f_2258:csi_2escm",(void*)f_2258},
{"f_6023:csi_2escm",(void*)f_6023},
{"f_2090:csi_2escm",(void*)f_2090},
{"f_2092:csi_2escm",(void*)f_2092},
{"f_3628:csi_2escm",(void*)f_3628},
{"f_5758:csi_2escm",(void*)f_5758},
{"f_2552:csi_2escm",(void*)f_2552},
{"f_2289:csi_2escm",(void*)f_2289},
{"f_2557:csi_2escm",(void*)f_2557},
{"f_2285:csi_2escm",(void*)f_2285},
{"f_5753:csi_2escm",(void*)f_5753},
{"f_2045:csi_2escm",(void*)f_2045},
{"f_3690:csi_2escm",(void*)f_3690},
{"f_2041:csi_2escm",(void*)f_2041},
{"f_5469:csi_2escm",(void*)f_5469},
{"f_3696:csi_2escm",(void*)f_3696},
{"f_2544:csi_2escm",(void*)f_2544},
{"f_2271:csi_2escm",(void*)f_2271},
{"f_2549:csi_2escm",(void*)f_2549},
{"f_2536:csi_2escm",(void*)f_2536},
{"f_2001:csi_2escm",(void*)f_2001},
{"f_2007:csi_2escm",(void*)f_2007},
{"f_6236:csi_2escm",(void*)f_6236},
{"f_2524:csi_2escm",(void*)f_2524},
{"f_4322:csi_2escm",(void*)f_4322},
{"f_4320:csi_2escm",(void*)f_4320},
{"f_4327:csi_2escm",(void*)f_4327},
{"f_4324:csi_2escm",(void*)f_4324},
{"f_3970:csi_2escm",(void*)f_3970},
{"f_6215:csi_2escm",(void*)f_6215},
{"f_3975:csi_2escm",(void*)f_3975},
{"f_4316:csi_2escm",(void*)f_4316},
{"f_6218:csi_2escm",(void*)f_6218},
{"f_3035:csi_2escm",(void*)f_3035},
{"f_2896:csi_2escm",(void*)f_2896},
{"f_6224:csi_2escm",(void*)f_6224},
{"f_3031:csi_2escm",(void*)f_3031},
{"f_2891:csi_2escm",(void*)f_2891},
{"f_3033:csi_2escm",(void*)f_3033},
{"f_4318:csi_2escm",(void*)f_4318},
{"f_6227:csi_2escm",(void*)f_6227},
{"f_5127:csi_2escm",(void*)f_5127},
{"f_4123:csi_2escm",(void*)f_4123},
{"f_3068:csi_2escm",(void*)f_3068},
{"f_3065:csi_2escm",(void*)f_3065},
{"f_3062:csi_2escm",(void*)f_3062},
{"f_2807:csi_2escm",(void*)f_2807},
{"f_3056:csi_2escm",(void*)f_3056},
{"f_6206:csi_2escm",(void*)f_6206},
{"f_3050:csi_2escm",(void*)f_3050},
{"f_2802:csi_2escm",(void*)f_2802},
{"f_6208:csi_2escm",(void*)f_6208},
{"f_3059:csi_2escm",(void*)f_3059},
{"f_3432:csi_2escm",(void*)f_3432},
{"f_2824:csi_2escm",(void*)f_2824},
{"f_4307:csi_2escm",(void*)f_4307},
{"f_3071:csi_2escm",(void*)f_3071},
{"f_3427:csi_2escm",(void*)f_3427},
{"f_3950:csi_2escm",(void*)f_3950},
{"f_2810:csi_2escm",(void*)f_2810},
{"f_3959:csi_2escm",(void*)f_3959},
{"f_2084:csi_2escm",(void*)f_2084},
{"f_2846:csi_2escm",(void*)f_2846},
{"f_3909:csi_2escm",(void*)f_3909},
{"f_2077:csi_2escm",(void*)f_2077},
{"f_2841:csi_2escm",(void*)f_2841},
{"f_2079:csi_2escm",(void*)f_2079},
{"f_3092:csi_2escm",(void*)f_3092},
{"f_3900:csi_2escm",(void*)f_3900},
{"f_2849:csi_2escm",(void*)f_2849},
{"f_2074:csi_2escm",(void*)f_2074},
{"f_5718:csi_2escm",(void*)f_5718},
{"f_1862:csi_2escm",(void*)f_1862},
{"f_1868:csi_2escm",(void*)f_1868},
{"f_5713:csi_2escm",(void*)f_5713},
{"f_1866:csi_2escm",(void*)f_1866},
{"f_5710:csi_2escm",(void*)f_5710},
{"f_2831:csi_2escm",(void*)f_2831},
{"f_2020:csi_2escm",(void*)f_2020},
{"f_2830:csi_2escm",(void*)f_2830},
{"f_2839:csi_2escm",(void*)f_2839},
{"f_1874:csi_2escm",(void*)f_1874},
{"f_3323:csi_2escm",(void*)f_3323},
{"f_1889:csi_2escm",(void*)f_1889},
{"f_1885:csi_2escm",(void*)f_1885},
{"f_4550:csi_2escm",(void*)f_4550},
{"f_4555:csi_2escm",(void*)f_4555},
{"f_1899:csi_2escm",(void*)f_1899},
{"f_1897:csi_2escm",(void*)f_1897},
{"f_1891:csi_2escm",(void*)f_1891},
{"f_1832:csi_2escm",(void*)f_1832},
{"f_3942:csi_2escm",(void*)f_3942},
{"f_1840:csi_2escm",(void*)f_1840},
{"f_3939:csi_2escm",(void*)f_3939},
{"f_3938:csi_2escm",(void*)f_3938},
{"f_2316:csi_2escm",(void*)f_2316},
{"f_1838:csi_2escm",(void*)f_1838},
{"f_1836:csi_2escm",(void*)f_1836},
{"f_1834:csi_2escm",(void*)f_1834},
{"f_4523:csi_2escm",(void*)f_4523},
{"f_4521:csi_2escm",(void*)f_4521},
{"f_4527:csi_2escm",(void*)f_4527},
{"f_4525:csi_2escm",(void*)f_4525},
{"f_2996:csi_2escm",(void*)f_2996},
{"f_1860:csi_2escm",(void*)f_1860},
{"f_4244:csi_2escm",(void*)f_4244},
{"f_4240:csi_2escm",(void*)f_4240},
{"f_1853:csi_2escm",(void*)f_1853},
{"f_1857:csi_2escm",(void*)f_1857},
{"f_4542:csi_2escm",(void*)f_4542},
{"f_5797:csi_2escm",(void*)f_5797},
{"f_2515:csi_2escm",(void*)f_2515},
{"f_2510:csi_2escm",(void*)f_2510},
{"f_4530:csi_2escm",(void*)f_4530},
{"f_5788:csi_2escm",(void*)f_5788},
{"f_5783:csi_2escm",(void*)f_5783},
{"f_5228:csi_2escm",(void*)f_5228},
{"f_2502:csi_2escm",(void*)f_2502},
{"f_3687:csi_2escm",(void*)f_3687},
{"f_5213:csi_2escm",(void*)f_5213},
{"f_6082:csi_2escm",(void*)f_6082},
{"f_4349:csi_2escm",(void*)f_4349},
{"f_4346:csi_2escm",(void*)f_4346},
{"f_6097:csi_2escm",(void*)f_6097},
{"f_4146:csi_2escm",(void*)f_4146},
{"f_4335:csi_2escm",(void*)f_4335},
{"f_4143:csi_2escm",(void*)f_4143},
{"f_4140:csi_2escm",(void*)f_4140},
{"f_6061:csi_2escm",(void*)f_6061},
{"f_6063:csi_2escm",(void*)f_6063},
{"f_2101:csi_2escm",(void*)f_2101},
{"f_2103:csi_2escm",(void*)f_2103},
{"f_4131:csi_2escm",(void*)f_4131},
{"f_4168:csi_2escm",(void*)f_4168},
{"f_4736:csi_2escm",(void*)f_4736},
{"f_5169:csi_2escm",(void*)f_5169},
{"f_5166:csi_2escm",(void*)f_5166},
{"f_5162:csi_2escm",(void*)f_5162},
{"f_5164:csi_2escm",(void*)f_5164},
{"f_5160:csi_2escm",(void*)f_5160},
{"f_4738:csi_2escm",(void*)f_4738},
{"f_5156:csi_2escm",(void*)f_5156},
{"f_5158:csi_2escm",(void*)f_5158},
{"f_5152:csi_2escm",(void*)f_5152},
{"f_4189:csi_2escm",(void*)f_4189},
{"f_2115:csi_2escm",(void*)f_2115},
{"f_2590:csi_2escm",(void*)f_2590},
{"f6869:csi_2escm",(void*)f6869},
{"f_4174:csi_2escm",(void*)f_4174},
{"f_5547:csi_2escm",(void*)f_5547},
{"f_2346:csi_2escm",(void*)f_2346},
{"f_2340:csi_2escm",(void*)f_2340},
{"f_4774:csi_2escm",(void*)f_4774},
{"f_2573:csi_2escm",(void*)f_2573},
{"f_2576:csi_2escm",(void*)f_2576},
{"f_4772:csi_2escm",(void*)f_4772},
{"f_2571:csi_2escm",(void*)f_2571},
{"f_5543:csi_2escm",(void*)f_5543},
{"f_4748:csi_2escm",(void*)f_4748},
{"f_3492:csi_2escm",(void*)f_3492},
{"f_2332:csi_2escm",(void*)f_2332},
{"f_4765:csi_2escm",(void*)f_4765},
{"f_4508:csi_2escm",(void*)f_4508},
{"f_3498:csi_2escm",(void*)f_3498},
{"f_2565:csi_2escm",(void*)f_2565},
{"f_2562:csi_2escm",(void*)f_2562},
{"f_5195:csi_2escm",(void*)f_5195},
{"f_3347:csi_2escm",(void*)f_3347},
{"f_5187:csi_2escm",(void*)f_5187},
{"f_5181:csi_2escm",(void*)f_5181},
{"f_5555:csi_2escm",(void*)f_5555},
{"f_5557:csi_2escm",(void*)f_5557},
{"f_5551:csi_2escm",(void*)f_5551},
{"f_5553:csi_2escm",(void*)f_5553},
{"f_5174:csi_2escm",(void*)f_5174},
{"f_5179:csi_2escm",(void*)f_5179},
{"f_5176:csi_2escm",(void*)f_5176},
{"f_4381:csi_2escm",(void*)f_4381},
{"f_3361:csi_2escm",(void*)f_3361},
{"f_5171:csi_2escm",(void*)f_5171},
{"f_3363:csi_2escm",(void*)f_3363},
{"f_4844:csi_2escm",(void*)f_4844},
{"f_4846:csi_2escm",(void*)f_4846},
{"f_4840:csi_2escm",(void*)f_4840},
{"f_4842:csi_2escm",(void*)f_4842},
{"f_4848:csi_2escm",(void*)f_4848},
{"f_3359:csi_2escm",(void*)f_3359},
{"f_5853:csi_2escm",(void*)f_5853},
{"f_5851:csi_2escm",(void*)f_5851},
{"f_5867:csi_2escm",(void*)f_5867},
{"f_2745:csi_2escm",(void*)f_2745},
{"f_5869:csi_2escm",(void*)f_5869},
{"f6742:csi_2escm",(void*)f6742},
{"f_2731:csi_2escm",(void*)f_2731},
{"f_2736:csi_2escm",(void*)f_2736},
{"f_4569:csi_2escm",(void*)f_4569},
{"f_5849:csi_2escm",(void*)f_5849},
{"f_4882:csi_2escm",(void*)f_4882},
{"f_4566:csi_2escm",(void*)f_4566},
{"f_4884:csi_2escm",(void*)f_4884},
{"f_4564:csi_2escm",(void*)f_4564},
{"f_5837:csi_2escm",(void*)f_5837},
{"f_4876:csi_2escm",(void*)f_4876},
{"f_5893:csi_2escm",(void*)f_5893},
{"f_5891:csi_2escm",(void*)f_5891},
{"f_2155:csi_2escm",(void*)f_2155},
{"f_5899:csi_2escm",(void*)f_5899},
{"f_3121:csi_2escm",(void*)f_3121},
{"f_4574:csi_2escm",(void*)f_4574},
{"f_2396:csi_2escm",(void*)f_2396},
{"f_4571:csi_2escm",(void*)f_4571},
{"f_2394:csi_2escm",(void*)f_2394},
{"f_5265:csi_2escm",(void*)f_5265},
{"f_5884:csi_2escm",(void*)f_5884},
{"f_3112:csi_2escm",(void*)f_3112},
{"f_5861:csi_2escm",(void*)f_5861},
{"f_2381:csi_2escm",(void*)f_2381},
{"f_2383:csi_2escm",(void*)f_2383},
{"f_5258:csi_2escm",(void*)f_5258},
{"f_4516:csi_2escm",(void*)f_4516},
{"f_4518:csi_2escm",(void*)f_4518},
{"f_5253:csi_2escm",(void*)f_5253},
{"f_2134:csi_2escm",(void*)f_2134},
{"f_2756:csi_2escm",(void*)f_2756},
{"f_5878:csi_2escm",(void*)f_5878},
{"f_4512:csi_2escm",(void*)f_4512},
{"f_4514:csi_2escm",(void*)f_4514},
{"f_4510:csi_2escm",(void*)f_4510},
{"f_2379:csi_2escm",(void*)f_2379},
{"f_2371:csi_2escm",(void*)f_2371},
{"f6738:csi_2escm",(void*)f6738},
{"f_5247:csi_2escm",(void*)f_5247},
{"f_2169:csi_2escm",(void*)f_2169},
{"f_5241:csi_2escm",(void*)f_5241},
{"f_4944:csi_2escm",(void*)f_4944},
{"f_4938:csi_2escm",(void*)f_4938},
{"f_4820:csi_2escm",(void*)f_4820},
{"f_4829:csi_2escm",(void*)f_4829},
{"f_2368:csi_2escm",(void*)f_2368},
{"f_2362:csi_2escm",(void*)f_2362},
{"f_5239:csi_2escm",(void*)f_5239},
{"f_2360:csi_2escm",(void*)f_2360},
{"f_5234:csi_2escm",(void*)f_5234},
{"f_4933:csi_2escm",(void*)f_4933},
{"f_4931:csi_2escm",(void*)f_4931},
{"f_4815:csi_2escm",(void*)f_4815},
{"f_5516:csi_2escm",(void*)f_5516},
{"f_5514:csi_2escm",(void*)f_5514},
{"f_4806:csi_2escm",(void*)f_4806},
{"f_5293:csi_2escm",(void*)f_5293},
{"f_5291:csi_2escm",(void*)f_5291},
{"f_4956:csi_2escm",(void*)f_4956},
{"f_5282:csi_2escm",(void*)f_5282},
{"f_5288:csi_2escm",(void*)f_5288},
{"f_5828:csi_2escm",(void*)f_5828},
{"f_5273:csi_2escm",(void*)f_5273},
{"f_4768:csi_2escm",(void*)f_4768},
{"f_5271:csi_2escm",(void*)f_5271},
{"f_5817:csi_2escm",(void*)f_5817},
{"f_4893:csi_2escm",(void*)f_4893},
{"f_4785:csi_2escm",(void*)f_4785},
{"toplevel:csi_2escm",(void*)C_toplevel},
{"f_2184:csi_2escm",(void*)f_2184},
{"f_5808:csi_2escm",(void*)f_5808},
{"f_1992:csi_2escm",(void*)f_1992},
{"f_1999:csi_2escm",(void*)f_1999},
{"f_2198:csi_2escm",(void*)f_2198},
{"f_5562:csi_2escm",(void*)f_5562},
{"f_2195:csi_2escm",(void*)f_2195},
{"f_2193:csi_2escm",(void*)f_2193},
{"f_5590:csi_2escm",(void*)f_5590},
{"f_2142:csi_2escm",(void*)f_2142},
{"f_1974:csi_2escm",(void*)f_1974},
{"f_1975:csi_2escm",(void*)f_1975},
{"f_2178:csi_2escm",(void*)f_2178},
{"f_5576:csi_2escm",(void*)f_5576},
{"f_5573:csi_2escm",(void*)f_5573},
{"f_2700:csi_2escm",(void*)f_2700},
{"f_3720:csi_2escm",(void*)f_3720},
{"f_3726:csi_2escm",(void*)f_3726},
{"f_5507:csi_2escm",(void*)f_5507},
{"f_3136:csi_2escm",(void*)f_3136},
{"f_3134:csi_2escm",(void*)f_3134},
{"f_1914:csi_2escm",(void*)f_1914},
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
S|  map		7
S|  for-each		11
S|  printf		4
o|eliminated procedure checks: 128 
o|eliminated procedure checks: 1 
o|specializations:
o|  7 (string=? string string)
o|  1 (set-cdr! pair *)
o|  2 (cddr (pair * pair))
o|  3 (cadr (pair * pair))
o|  1 (min fixnum fixnum)
o|  1 (memq * list)
o|  22 (cdr pair)
o|  1 (current-output-port)
o|  8 (car pair)
o|  2 (zero? fixnum)
o|  3 (##sys#check-list (or pair list) *)
o|  29 (eqv? * (not float))
o|  4 (string-append string string)
o|  1 (make-string fixnum)
o|safe globals: (##sys#repl-print-length-limit constant22 constant17 constant14) 
o|Removed `not' forms: 7 
o|substituted constant variable: constant17 
o|substituted constant variable: constant14 
o|inlining procedure: k1902 
o|inlining procedure: k1902 
o|inlining procedure: k1939 
o|inlining procedure: k1939 
o|inlining procedure: k1953 
o|inlining procedure: k1953 
o|inlining procedure: k1995 
o|inlining procedure: k1995 
o|substituted constant variable: a2009 
o|inlining procedure: k2046 
o|inlining procedure: k2061 
o|inlining procedure: k2061 
o|inlining procedure: k2095 
o|inlining procedure: k2095 
o|substituted constant variable: a2120 
o|contracted procedure: "(csi.scm:209) string-index83" 
o|inlining procedure: k2023 
o|inlining procedure: k2023 
o|inlining procedure: k2046 
o|inlining procedure: k2187 
o|inlining procedure: k2187 
o|propagated global variable: out136140 ##sys#standard-output 
o|inlining procedure: k2224 
o|inlining procedure: k2224 
o|inlining procedure: k2250 
o|inlining procedure: k2250 
o|inlining procedure: k2261 
o|inlining procedure: k2261 
o|inlining procedure: k2283 
o|inlining procedure: k2283 
o|inlining procedure: k2319 
o|inlining procedure: k2319 
o|inlining procedure: k2337 
o|inlining procedure: k2337 
o|inlining procedure: k2372 
o|inlining procedure: k2372 
o|inlining procedure: k2400 
o|inlining procedure: k2400 
o|inlining procedure: k2430 
o|inlining procedure: k2430 
o|inlining procedure: k2448 
o|inlining procedure: k2466 
o|inlining procedure: k2466 
o|inlining procedure: k2448 
o|inlining procedure: k2518 
o|inlining procedure: k2518 
o|inlining procedure: k2537 
o|inlining procedure: k2537 
o|inlining procedure: k2586 
o|inlining procedure: k2586 
o|inlining procedure: k2597 
o|inlining procedure: k2597 
o|inlining procedure: k2641 
o|inlining procedure: k2641 
o|inlining procedure: k2663 
o|inlining procedure: k2663 
o|inlining procedure: k2689 
o|inlining procedure: k2689 
o|inlining procedure: k2716 
o|inlining procedure: k2716 
o|inlining procedure: k2739 
o|inlining procedure: k2739 
o|propagated global variable: g308310 command-table 
o|substituted constant variable: a2761 
o|substituted constant variable: a2763 
o|substituted constant variable: a2765 
o|substituted constant variable: a2767 
o|substituted constant variable: a2769 
o|substituted constant variable: a2771 
o|substituted constant variable: a2773 
o|substituted constant variable: a2775 
o|substituted constant variable: a2777 
o|substituted constant variable: a2779 
o|substituted constant variable: a2781 
o|substituted constant variable: a2783 
o|substituted constant variable: a2785 
o|substituted constant variable: a2787 
o|substituted constant variable: a2789 
o|substituted constant variable: a2791 
o|substituted constant variable: a2793 
o|substituted constant variable: a2795 
o|substituted constant variable: a2797 
o|inlining procedure: k2997 
o|inlining procedure: k2997 
o|inlining procedure: k3034 
o|inlining procedure: k3034 
o|inlining procedure: k3115 
o|inlining procedure: k3115 
o|inlining procedure: k3139 
o|inlining procedure: k3139 
o|propagated global variable: g415419 ##sys#features 
o|inlining procedure: k3262 
o|inlining procedure: k3262 
o|inlining procedure: k3289 
o|inlining procedure: k3314 
o|inlining procedure: k3314 
o|inlining procedure: k3289 
o|inlining procedure: k3362 
o|inlining procedure: k3362 
o|inlining procedure: k3384 
o|inlining procedure: k3384 
o|inlining procedure: k3402 
o|inlining procedure: k3402 
o|inlining procedure: k3420 
o|inlining procedure: k3420 
o|inlining procedure: k3451 
o|inlining procedure: k3451 
o|inlining procedure: k3469 
o|inlining procedure: k3469 
o|inlining procedure: k3487 
o|inlining procedure: k3487 
o|inlining procedure: k3514 
o|inlining procedure: k3514 
o|inlining procedure: k3529 
o|inlining procedure: k3529 
o|inlining procedure: k3565 
o|inlining procedure: k3565 
o|inlining procedure: k3582 
o|inlining procedure: k3602 
o|inlining procedure: k3602 
o|inlining procedure: k3621 
o|inlining procedure: k3621 
o|inlining procedure: k3582 
o|inlining procedure: k3661 
o|inlining procedure: k3661 
o|removed call to pure procedure with unused result: "(csi.scm:659) size" 
o|inlining procedure: k3691 
o|inlining procedure: k3691 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|inlining procedure: k3745 
o|inlining procedure: k3745 
o|inlining procedure: k3757 
o|inlining procedure: k3757 
o|inlining procedure: k3769 
o|inlining procedure: k3769 
o|inlining procedure: k3781 
o|inlining procedure: k3781 
o|substituted constant variable: a3794 
o|substituted constant variable: a3796 
o|substituted constant variable: a3798 
o|substituted constant variable: a3800 
o|substituted constant variable: a3802 
o|substituted constant variable: a3804 
o|substituted constant variable: a3806 
o|substituted constant variable: a3808 
o|substituted constant variable: a3810 
o|substituted constant variable: a3812 
o|inlining procedure: k3813 
o|inlining procedure: k3813 
o|inlining procedure: k3838 
o|inlining procedure: k3838 
o|inlining procedure: k3871 
o|inlining procedure: k3871 
o|inlining procedure: k3903 
o|inlining procedure: k3903 
o|inlining procedure: k3953 
o|inlining procedure: k3953 
o|inlining procedure: k3931 
o|inlining procedure: k3999 
o|inlining procedure: k3999 
o|inlining procedure: k3931 
o|inlining procedure: k4028 
o|inlining procedure: k4028 
o|inlining procedure: k4066 
o|inlining procedure: k4066 
o|contracted procedure: "(csi.scm:645) improper-pairs?" 
o|inlining procedure: k3213 
o|inlining procedure: k3213 
o|contracted procedure: "(csi.scm:645) circular-list?" 
o|inlining procedure: k3180 
o|inlining procedure: k3197 
o|inlining procedure: k3197 
o|inlining procedure: k3180 
o|inlining procedure: k4149 
o|inlining procedure: k4149 
o|inlining procedure: k4154 
o|inlining procedure: k4154 
o|inlining procedure: k4178 
o|inlining procedure: k4178 
o|inlining procedure: k4202 
o|inlining procedure: k4202 
o|inlining procedure: k4248 
o|inlining procedure: k4248 
o|inlining procedure: k4287 
o|inlining procedure: k4287 
o|inlining procedure: k4310 
o|inlining procedure: k4310 
o|inlining procedure: k4338 
o|inlining procedure: k4338 
o|inlining procedure: k4384 
o|inlining procedure: k4399 
o|inlining procedure: k4399 
o|inlining procedure: k4415 
o|inlining procedure: k4415 
o|inlining procedure: k4384 
o|inlining procedure: k4490 
o|inlining procedure: k4490 
o|inlining procedure: k4544 
o|inlining procedure: k4544 
o|inlining procedure: k4558 
o|inlining procedure: k4558 
o|propagated global variable: out843847 ##sys#standard-output 
o|inlining procedure: k4604 
o|inlining procedure: k4604 
o|propagated global variable: out812816 ##sys#standard-output 
o|inlining procedure: k4646 
o|inlining procedure: k4646 
o|inlining procedure: k4658 
o|propagated global variable: out797801 ##sys#standard-output 
o|inlining procedure: k4658 
o|inlining procedure: k4663 
o|inlining procedure: k4663 
o|propagated global variable: tmp775777 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp775777 ##sys#repl-recent-call-chain 
o|inlining procedure: k4681 
o|inlining procedure: k4681 
o|inlining procedure: k4709 
o|inlining procedure: k4709 
o|inlining procedure: k4758 
o|inlining procedure: k4788 
o|inlining procedure: k4788 
o|inlining procedure: k4823 
o|inlining procedure: k4823 
o|inlining procedure: k4887 
o|inlining procedure: k4887 
o|inlining procedure: k4758 
o|inlining procedure: k4924 
o|inlining procedure: k4924 
o|propagated global variable: tmp893895 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp893895 ##sys#repl-recent-call-chain 
o|inlining procedure: k4947 
o|inlining procedure: k4959 
o|inlining procedure: k4959 
o|inlining procedure: k4947 
o|inlining procedure: k4999 
o|inlining procedure: k4999 
o|inlining procedure: k5012 
o|inlining procedure: k5031 
o|inlining procedure: k5060 
o|inlining procedure: k5060 
o|inlining procedure: k5031 
o|contracted procedure: "(csi.scm:957) findall" 
o|substituted constant variable: constant1038 
o|inlining procedure: k5132 
o|inlining procedure: k5132 
o|inlining procedure: k5012 
o|inlining procedure: k5104 
o|substituted constant variable: constant1045 
o|inlining procedure: k5104 
o|inlining procedure: k5197 
o|inlining procedure: k5197 
o|inlining procedure: k5192 
o|inlining procedure: k5192 
o|merged explicitly consed rest parameter: tmp12171219 
o|inlining procedure: k5276 
o|inlining procedure: k5276 
o|inlining procedure: k5366 
o|inlining procedure: k5366 
o|inlining procedure: k5404 
o|inlining procedure: k5404 
o|substituted constant variable: a5441 
o|inlining procedure: k5438 
o|consed rest parameter at call site: "(csi.scm:1103) evalstring1194" 2 
o|inlining procedure: k5438 
o|substituted constant variable: a5456 
o|consed rest parameter at call site: "(csi.scm:1106) evalstring1194" 2 
o|substituted constant variable: a5476 
o|inlining procedure: k5473 
o|consed rest parameter at call site: "(csi.scm:1109) evalstring1194" 2 
o|inlining procedure: k5473 
o|inlining procedure: k5521 
o|inlining procedure: k5521 
o|inlining procedure: k5538 
o|inlining procedure: k5565 
o|inlining procedure: k5565 
o|propagated global variable: g14101411 pretty-print 
o|inlining procedure: k5538 
o|substituted constant variable: a5598 
o|substituted constant variable: a5600 
o|substituted constant variable: a5602 
o|substituted constant variable: a5604 
o|substituted constant variable: constant1118 
o|substituted constant variable: constant1109 
o|contracted procedure: "(csi.scm:1084) loadinit1193" 
o|inlining procedure: k5229 
o|inlining procedure: k5229 
o|inlining procedure: k5254 
o|inlining procedure: k5254 
o|inlining procedure: k5615 
o|inlining procedure: k5615 
o|inlining procedure: k5638 
o|inlining procedure: k5638 
o|inlining procedure: k5649 
o|inlining procedure: k5649 
o|inlining procedure: k5657 
o|inlining procedure: k5675 
o|inlining procedure: k5675 
o|inlining procedure: k5657 
o|inlining procedure: k5731 
o|inlining procedure: k5731 
o|inlining procedure: k5761 
o|inlining procedure: k5761 
o|inlining procedure: k5791 
o|inlining procedure: k5791 
o|inlining procedure: k5811 
o|inlining procedure: k5811 
o|inlining procedure: k5831 
o|inlining procedure: k5831 
o|inlining procedure: k5868 
o|inlining procedure: k5868 
o|inlining procedure: k5909 
o|inlining procedure: k5909 
o|inlining procedure: k5938 
o|inlining procedure: k5938 
o|inlining procedure: k5941 
o|inlining procedure: k5941 
o|inlining procedure: k5946 
o|inlining procedure: k5946 
o|inlining procedure: k5961 
o|inlining procedure: k5961 
o|substituted constant variable: a5979 
o|inlining procedure: k5996 
o|inlining procedure: k5996 
o|inlining procedure: k6026 
o|inlining procedure: k6026 
o|contracted procedure: "(csi.scm:979) parse-option-string" 
o|inlining procedure: k2833 
o|inlining procedure: k2833 
o|inlining procedure: k2859 
o|inlining procedure: k2859 
o|inlining procedure: k2917 
o|inlining procedure: k2917 
o|inlining procedure: k6067 
o|inlining procedure: k6067 
o|inlining procedure: k6133 
o|inlining procedure: k6133 
o|contracted procedure: k6159 
o|inlining procedure: k6156 
o|inlining procedure: k6178 
o|inlining procedure: k6178 
o|inlining procedure: k6156 
o|inlining procedure: k6216 
o|inlining procedure: k6216 
o|substituted constant variable: a6225 
o|inlining procedure: k6228 
o|inlining procedure: k6228 
o|replaced variables: 648 
o|removed binding forms: 168 
o|removed side-effect free assignment to unused variable: constant14 
o|removed side-effect free assignment to unused variable: constant17 
o|substituted constant variable: f_20946249 
o|substituted constant variable: f_20226250 
o|substituted constant variable: r20476252 
o|contracted procedure: "(csi.scm:376) select-frame" 
o|contracted procedure: "(csi.scm:379) copy-from-frame" 
o|converted assignments to bindings: (fail907) 
o|converted assignments to bindings: (compare902) 
o|substituted constant variable: r49256438 
o|converted assignments to bindings: (shorten397) 
o|substituted constant variable: a33136314 
o|substituted constant variable: a33136315 
o|inlining procedure: k3430 
o|inlining procedure: k3362 
o|inlining procedure: k3362 
o|contracted procedure: k3680 
o|substituted constant variable: r37346353 
o|substituted constant variable: r37346353 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|substituted constant variable: r37466357 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|substituted constant variable: r37586359 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|substituted constant variable: r37706361 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|substituted constant variable: r37826363 
o|inlining procedure: k3733 
o|inlining procedure: k3733 
o|substituted constant variable: f_32126384 
o|substituted constant variable: f_31796388 
o|converted assignments to bindings: (descseq506) 
o|converted assignments to bindings: (bestlen700) 
o|converted assignments to bindings: (justify723) 
o|substituted constant variable: a46456419 
o|substituted constant variable: a46456420 
o|substituted constant variable: a46576421 
o|substituted constant variable: a46576422 
o|substituted constant variable: r46646424 
o|converted assignments to bindings: (prin1772) 
o|substituted constant variable: f_49466442 
o|removed side-effect free assignment to unused variable: constant1038 
o|removed side-effect free assignment to unused variable: constant1045 
o|substituted constant variable: f_49986443 
o|substituted constant variable: clist1095 
o|substituted constant variable: r51056454 
o|removed side-effect free assignment to unused variable: constant1109 
o|removed side-effect free assignment to unused variable: constant1118 
o|substituted constant variable: r51936458 
o|substituted constant variable: a55206470 
o|substituted constant variable: a55376474 
o|substituted constant variable: r52556479 
o|substituted constant variable: r52556479 
o|substituted constant variable: r59396521 
o|substituted constant variable: r59396521 
o|substituted constant variable: r60276532 
o|substituted constant variable: r61346542 
o|substituted constant variable: r62176549 
o|substituted constant variable: r62176549 
o|converted assignments to bindings: (addext82) 
o|simplifications: ((let . 8)) 
o|replaced variables: 19 
o|removed binding forms: 627 
o|inlining procedure: k2624 
o|inlining procedure: k2624 
o|inlining procedure: "(csi.scm:367) history-clear" 
o|inlining procedure: k4804 
o|inlining procedure: k3958 
o|inlining procedure: k5395 
o|inlining procedure: k5395 
o|inlining procedure: k5395 
o|inlining procedure: k5395 
o|inlining procedure: k5395 
o|inlining procedure: k5395 
o|inlining procedure: k5523 
o|inlining procedure: k5395 
o|inlining procedure: k5574 
o|inlining procedure: k5850 
o|inlining procedure: k5988 
o|inlining procedure: k5988 
o|replaced variables: 13 
o|removed binding forms: 75 
o|substituted constant variable: r37346611 
o|substituted constant variable: r37346613 
o|substituted constant variable: r37346615 
o|substituted constant variable: r37346617 
o|substituted constant variable: r37346619 
o|substituted constant variable: r37346621 
o|substituted constant variable: r37346623 
o|substituted constant variable: r37346625 
o|substituted constant variable: r37346627 
o|substituted constant variable: r55246843 
o|replaced variables: 3 
o|removed binding forms: 19 
o|removed conditional forms: 1 
o|removed binding forms: 12 
o|simplifications: ((if . 33) (##core#call . 547)) 
o|  call simplifications:
o|    make-vector
o|    ##sys#pair?	2
o|    ##sys#eq?
o|    ##sys#cdr	4
o|    ##sys#car	2
o|    ##sys#cons	11
o|    set-car!
o|    call-with-values
o|    void
o|    member	8
o|    string->list
o|    string
o|    equal?	3
o|    fxmod
o|    number->string
o|    ##sys#immediate?	2
o|    ##sys#permanent?
o|    char?
o|    fixnum?	2
o|    flonum?
o|    vector?
o|    list?
o|    procedure?
o|    ##sys#pointer?	2
o|    ##sys#generic-structure?	2
o|    cdr	15
o|    caar
o|    cdar
o|    fx=	3
o|    atom?
o|    memq	3
o|    cddr	3
o|    integer->char	2
o|    char->integer
o|    ##sys#setslot	9
o|    =
o|    -
o|    <=
o|    add1	2
o|    +
o|    *
o|    /
o|    eof-object?	4
o|    caddr
o|    symbol?	3
o|    string?	5
o|    ##sys#structure?	4
o|    string-length	5
o|    fxmin
o|    string=?	5
o|    number?	2
o|    not	4
o|    fx<	4
o|    length	4
o|    list-ref	2
o|    eq?	43
o|    apply	5
o|    ##sys#call-with-values	5
o|    ##sys#apply	2
o|    ##sys#check-list	17
o|    cadr	13
o|    car	19
o|    ##sys#check-symbol	2
o|    ##sys#check-string
o|    assq	4
o|    list	7
o|    set-cdr!	2
o|    ##sys#fudge	6
o|    inexact->exact
o|    fx<=
o|    >=	2
o|    write-char	11
o|    vector-ref	8
o|    null?	21
o|    ##sys#void	21
o|    fx*
o|    vector-set!
o|    >
o|    fx>=	15
o|    fx+	20
o|    pair?	32
o|    ##sys#slot	80
o|    ##sys#foreign-block-argument
o|    ##sys#foreign-fixnum-argument
o|    ##sys#size	11
o|    sub1
o|    string-ref	4
o|    fx>	5
o|    char=?	7
o|    char-whitespace?
o|    fx-	11
o|    ##sys#list	4
o|    cons	16
o|contracted procedure: k1846 
o|contracted procedure: k1882 
o|contracted procedure: k1879 
o|contracted procedure: k1876 
o|contracted procedure: k1904 
o|contracted procedure: k1906 
o|contracted procedure: k1916 
o|contracted procedure: k1937 
o|contracted procedure: k1969 
o|contracted procedure: k1949 
o|contracted procedure: k1951 
o|contracted procedure: k1962 
o|contracted procedure: k1982 
o|contracted procedure: k1986 
o|contracted procedure: k2126 
o|contracted procedure: k2049 
o|contracted procedure: k2097 
o|contracted procedure: k2111 
o|contracted procedure: k2118 
o|contracted procedure: k2014 
o|contracted procedure: k2025 
o|contracted procedure: k2038 
o|contracted procedure: k2123 
o|contracted procedure: k2129 
o|contracted procedure: k2159 
o|contracted procedure: k2137 
o|contracted procedure: k2139 
o|contracted procedure: k2143 
o|contracted procedure: k2146 
o|contracted procedure: k2149 
o|contracted procedure: k2157 
o|contracted procedure: k2175 
o|propagated global variable: a2174 ##sys#undefined-value 
o|contracted procedure: k2189 
o|contracted procedure: k2208 
o|contracted procedure: k2216 
o|contracted procedure: k2222 
o|contracted procedure: k2236 
o|contracted procedure: k2227 
o|contracted procedure: k2248 
o|contracted procedure: k2309 
o|contracted procedure: k2274 
o|contracted procedure: k2277 
o|contracted procedure: k2279 
o|contracted procedure: k2281 
o|contracted procedure: k2294 
o|contracted procedure: k2304 
o|contracted procedure: k2300 
o|contracted procedure: k2321 
o|contracted procedure: k2333 
o|contracted procedure: k2335 
o|contracted procedure: k2342 
o|contracted procedure: k2356 
o|contracted procedure: k2375 
o|contracted procedure: k2390 
o|contracted procedure: k2403 
o|contracted procedure: k2416 
o|contracted procedure: k2433 
o|contracted procedure: k2442 
o|contracted procedure: k2451 
o|contracted procedure: k2468 
o|contracted procedure: k2477 
o|contracted procedure: k2480 
o|contracted procedure: k2488 
o|contracted procedure: k2506 
o|contracted procedure: k2520 
o|contracted procedure: k2529 
o|contracted procedure: k2532 
o|contracted procedure: k2540 
o|contracted procedure: k2583 
o|contracted procedure: k2595 
o|contracted procedure: k2600 
o|contracted procedure: k2608 
o|contracted procedure: k2633 
o|contracted procedure: k21756747 
o|propagated global variable: a21746745 ##sys#undefined-value 
o|contracted procedure: k2644 
o|contracted procedure: k2655 
o|contracted procedure: k2666 
o|contracted procedure: k4724 
o|contracted procedure: k4683 
o|contracted procedure: k4702 
o|contracted procedure: k4705 
o|contracted procedure: k4699 
o|contracted procedure: k4692 
o|contracted procedure: k4707 
o|contracted procedure: k4712 
o|contracted procedure: k4721 
o|contracted procedure: k2680 
o|contracted procedure: k4730 
o|contracted procedure: k4733 
o|contracted procedure: k4741 
o|contracted procedure: k4753 
o|contracted procedure: k4756 
o|contracted procedure: k4750 
o|contracted procedure: k4779 
o|propagated global variable: a4778 ##sys#undefined-value 
o|contracted procedure: k4790 
o|contracted procedure: k4796 
o|contracted procedure: k4798 
o|contracted procedure: k4800 
o|contracted procedure: k4802 
o|contracted procedure: k4812 
o|contracted procedure: k4825 
o|contracted procedure: k4834 
o|contracted procedure: k4853 
o|contracted procedure: k4859 
o|contracted procedure: k4856 
o|contracted procedure: k4864 
o|contracted procedure: k4866 
o|contracted procedure: k4868 
o|contracted procedure: k4870 
o|contracted procedure: k4872 
o|contracted procedure: k4909 
o|contracted procedure: k4889 
o|contracted procedure: k4898 
o|contracted procedure: k4901 
o|contracted procedure: k4904 
o|contracted procedure: k4907 
o|contracted procedure: k4918 
o|contracted procedure: k4927 
o|contracted procedure: k2692 
o|contracted procedure: k2702 
o|contracted procedure: k2707 
o|contracted procedure: k2714 
o|contracted procedure: k2727 
o|contracted procedure: k2741 
o|contracted procedure: k2750 
o|contracted procedure: k2753 
o|propagated global variable: g308310 command-table 
o|contracted procedure: k2814 
o|contracted procedure: k2821 
o|contracted procedure: k2977 
o|contracted procedure: k2987 
o|contracted procedure: k2989 
o|contracted procedure: k2992 
o|contracted procedure: k3000 
o|contracted procedure: k3012 
o|contracted procedure: k3016 
o|contracted procedure: k3020 
o|contracted procedure: k3023 
o|contracted procedure: k3036 
o|contracted procedure: k3042 
o|contracted procedure: k3108 
o|contracted procedure: k3052 
o|contracted procedure: k3073 
o|contracted procedure: k3076 
o|contracted procedure: k3099 
o|contracted procedure: k3079 
o|contracted procedure: k3082 
o|contracted procedure: k3085 
o|contracted procedure: k3097 
o|contracted procedure: k3093 
o|contracted procedure: k3088 
o|contracted procedure: k3103 
o|contracted procedure: k3106 
o|contracted procedure: k3117 
o|contracted procedure: k3126 
o|contracted procedure: k3129 
o|contracted procedure: k3141 
o|contracted procedure: k3144 
o|contracted procedure: k3153 
o|contracted procedure: k3163 
o|contracted procedure: k3165 
o|contracted procedure: k4124 
o|contracted procedure: k3242 
o|contracted procedure: k3249 
o|contracted procedure: k3260 
o|contracted procedure: k3268 
o|contracted procedure: k3275 
o|contracted procedure: k3349 
o|contracted procedure: k3283 
o|contracted procedure: k3291 
o|contracted procedure: k3302 
o|contracted procedure: k3304 
o|contracted procedure: k3311 
o|contracted procedure: k3316 
o|contracted procedure: k3330 
o|contracted procedure: k3337 
o|contracted procedure: k3340 
o|contracted procedure: k3352 
o|contracted procedure: k3367 
o|contracted procedure: k3370 
o|contracted procedure: k3378 
o|contracted procedure: k3387 
o|contracted procedure: k3396 
o|contracted procedure: k3405 
o|contracted procedure: k4113 
o|contracted procedure: k3414 
o|propagated global variable: a4112 ##sys#undefined-value 
o|contracted procedure: k3423 
o|contracted procedure: k3428 
o|contracted procedure: k3436 
o|contracted procedure: k4110 
o|contracted procedure: k3445 
o|contracted procedure: k3454 
o|contracted procedure: k3463 
o|contracted procedure: k3472 
o|contracted procedure: k3481 
o|contracted procedure: k3502 
o|contracted procedure: k3512 
o|contracted procedure: k3517 
o|contracted procedure: k3531 
o|contracted procedure: k3545 
o|contracted procedure: k3553 
o|contracted procedure: k3556 
o|contracted procedure: k3559 
o|contracted procedure: k3562 
o|contracted procedure: k3596 
o|contracted procedure: k3604 
o|contracted procedure: k3606 
o|contracted procedure: k3647 
o|contracted procedure: k3615 
o|contracted procedure: k3624 
o|contracted procedure: k3635 
o|contracted procedure: k3655 
o|contracted procedure: k3664 
o|contracted procedure: k3677 
o|contracted procedure: k3712 
o|contracted procedure: k3701 
o|contracted procedure: k3704 
o|contracted procedure: k3707 
o|contracted procedure: k3728 
o|contracted procedure: k3731 
o|contracted procedure: k3736 
o|contracted procedure: k3742 
o|contracted procedure: k3748 
o|contracted procedure: k3754 
o|contracted procedure: k3760 
o|contracted procedure: k3766 
o|contracted procedure: k3772 
o|contracted procedure: k3778 
o|contracted procedure: k3784 
o|contracted procedure: k3790 
o|contracted procedure: k3816 
o|contracted procedure: k3831 
o|contracted procedure: k3850 
o|contracted procedure: k3853 
o|contracted procedure: k3860 
o|contracted procedure: k3862 
o|contracted procedure: k3873 
o|contracted procedure: k3881 
o|contracted procedure: k3884 
o|contracted procedure: k3886 
o|contracted procedure: k3888 
o|contracted procedure: k3897 
o|contracted procedure: k3905 
o|contracted procedure: k3914 
o|contracted procedure: k3917 
o|contracted procedure: k3920 
o|contracted procedure: k3928 
o|contracted procedure: k3923 
o|contracted procedure: k3926 
o|contracted procedure: k3934 
o|contracted procedure: k3947 
o|contracted procedure: k3955 
o|contracted procedure: k3964 
o|contracted procedure: k3986 
o|contracted procedure: k3966 
o|contracted procedure: k3980 
o|contracted procedure: k3983 
o|contracted procedure: k39646778 
o|contracted procedure: k3988 
o|contracted procedure: k3990 
o|contracted procedure: k4001 
o|contracted procedure: k4010 
o|contracted procedure: k4013 
o|contracted procedure: k4016 
o|contracted procedure: k4021 
o|contracted procedure: k4024 
o|contracted procedure: k4039 
o|contracted procedure: k4052 
o|contracted procedure: k4054 
o|contracted procedure: k4060 
o|contracted procedure: k4068 
o|contracted procedure: k4071 
o|contracted procedure: k4080 
o|contracted procedure: k4090 
o|contracted procedure: k4101 
o|contracted procedure: k3215 
o|contracted procedure: k3229 
o|contracted procedure: k3218 
o|contracted procedure: k3182 
o|contracted procedure: k3189 
o|contracted procedure: k3193 
o|contracted procedure: k3195 
o|contracted procedure: k4115 
o|contracted procedure: k4134 
o|contracted procedure: k4157 
o|contracted procedure: k4176 
o|contracted procedure: k4181 
o|contracted procedure: k4191 
o|contracted procedure: k4231 
o|contracted procedure: k4196 
o|contracted procedure: k4208 
o|contracted procedure: k4217 
o|contracted procedure: k4222 
o|contracted procedure: k4229 
o|contracted procedure: k4251 
o|contracted procedure: k4257 
o|contracted procedure: k4263 
o|contracted procedure: k4269 
o|contracted procedure: k4285 
o|contracted procedure: k4290 
o|contracted procedure: k4301 
o|contracted procedure: k4312 
o|contracted procedure: k4332 
o|contracted procedure: k4340 
o|contracted procedure: k4342 
o|contracted procedure: k4354 
o|contracted procedure: k4357 
o|contracted procedure: k4371 
o|contracted procedure: k4359 
o|contracted procedure: k4366 
o|contracted procedure: k4386 
o|contracted procedure: k4388 
o|contracted procedure: k4394 
o|contracted procedure: k4397 
o|contracted procedure: k4402 
o|contracted procedure: k4409 
o|contracted procedure: k4417 
o|contracted procedure: k4426 
o|contracted procedure: k4437 
o|contracted procedure: k4440 
o|contracted procedure: k4469 
o|contracted procedure: k4472 
o|contracted procedure: k4475 
o|contracted procedure: k4484 
o|contracted procedure: k4492 
o|contracted procedure: k4495 
o|contracted procedure: k4497 
o|contracted procedure: k4499 
o|contracted procedure: k4501 
o|contracted procedure: k4503 
o|contracted procedure: k4505 
o|contracted procedure: k4537 
o|contracted procedure: k4539 
o|contracted procedure: k4546 
o|contracted procedure: k4560 
o|contracted procedure: k4579 
o|contracted procedure: k4584 
o|contracted procedure: k4587 
o|contracted procedure: k4589 
o|contracted procedure: k4591 
o|contracted procedure: k4593 
o|contracted procedure: k4595 
o|contracted procedure: k4626 
o|contracted procedure: k4606 
o|contracted procedure: k4615 
o|contracted procedure: k4618 
o|contracted procedure: k4621 
o|contracted procedure: k4624 
o|contracted procedure: k4643 
o|contracted procedure: k4655 
o|contracted procedure: k4666 
o|contracted procedure: k4673 
o|contracted procedure: k4934 
o|contracted procedure: k4949 
o|contracted procedure: k4961 
o|contracted procedure: k4968 
o|contracted procedure: k4982 
o|contracted procedure: k4985 
o|contracted procedure: k4973 
o|contracted procedure: k5001 
o|contracted procedure: k5004 
o|contracted procedure: k5009 
o|contracted procedure: k5021 
o|contracted procedure: k5046 
o|contracted procedure: k5062 
o|contracted procedure: k5065 
o|contracted procedure: k5074 
o|contracted procedure: k5084 
o|contracted procedure: k5130 
o|contracted procedure: k5147 
o|contracted procedure: k5138 
o|contracted procedure: k5118 
o|contracted procedure: k5101 
o|contracted procedure: k5107 
o|contracted procedure: k5114 
o|contracted procedure: k5190 
o|contracted procedure: k5218 
o|contracted procedure: k5199 
o|contracted procedure: k5209 
o|contracted procedure: k5297 
o|contracted procedure: k5261 
o|contracted procedure: k5278 
o|contracted procedure: k5324 
o|contracted procedure: k5331 
o|contracted procedure: k5338 
o|contracted procedure: k5368 
o|contracted procedure: k5391 
o|contracted procedure: k5393 
o|contracted procedure: k5402 
o|contracted procedure: k54026822 
o|contracted procedure: k5407 
o|contracted procedure: k5411 
o|contracted procedure: k54026826 
o|contracted procedure: k5417 
o|contracted procedure: k54026830 
o|contracted procedure: k5430 
o|contracted procedure: k5427 
o|contracted procedure: k5436 
o|contracted procedure: k54026834 
o|contracted procedure: k5451 
o|contracted procedure: k54026838 
o|contracted procedure: k5466 
o|contracted procedure: k54026842 
o|contracted procedure: k5486 
o|contracted procedure: k5493 
o|contracted procedure: k5500 
o|contracted procedure: k5529 
o|contracted procedure: k5523 
o|contracted procedure: k5521 
o|contracted procedure: k54026848 
o|contracted procedure: k5540 
o|contracted procedure: k5548 
o|contracted procedure: k5567 
o|contracted procedure: k5570 
o|contracted procedure: k5581 
o|contracted procedure: k5583 
o|contracted procedure: k55816852 
o|contracted procedure: k5706 
o|contracted procedure: k5660 
o|contracted procedure: k5700 
o|contracted procedure: k5669 
o|contracted procedure: k5678 
o|contracted procedure: k5687 
o|contracted procedure: k5714 
o|contracted procedure: k5722 
o|contracted procedure: k5733 
o|contracted procedure: k5736 
o|contracted procedure: k5745 
o|contracted procedure: k5755 
o|contracted procedure: k5763 
o|contracted procedure: k5766 
o|contracted procedure: k5775 
o|contracted procedure: k5785 
o|contracted procedure: k5793 
o|contracted procedure: k5802 
o|contracted procedure: k5805 
o|contracted procedure: k5813 
o|contracted procedure: k5822 
o|contracted procedure: k5825 
o|contracted procedure: k5833 
o|contracted procedure: k5842 
o|contracted procedure: k5845 
o|contracted procedure: k5874 
o|contracted procedure: k5885 
o|contracted procedure: k5911 
o|contracted procedure: k5914 
o|contracted procedure: k5923 
o|contracted procedure: k5933 
o|contracted procedure: k5959 
o|contracted procedure: k5975 
o|contracted procedure: k5984 
o|contracted procedure: k6018 
o|contracted procedure: k6015 
o|contracted procedure: k5986 
o|contracted procedure: k6012 
o|contracted procedure: k6009 
o|contracted procedure: k5994 
o|contracted procedure: k6003 
o|contracted procedure: k5988 
o|contracted procedure: k6024 
o|contracted procedure: k6041 
o|contracted procedure: k2835 
o|contracted procedure: k2850 
o|contracted procedure: k2861 
o|contracted procedure: k2864 
o|contracted procedure: k2873 
o|contracted procedure: k2883 
o|contracted procedure: k2919 
o|contracted procedure: k2932 
o|contracted procedure: k6065 
o|contracted procedure: k6073 
o|contracted procedure: k6123 
o|contracted procedure: k6075 
o|contracted procedure: k6120 
o|contracted procedure: k6117 
o|contracted procedure: k6114 
o|contracted procedure: k6087 
o|contracted procedure: k6108 
o|contracted procedure: k6105 
o|contracted procedure: k6099 
o|contracted procedure: k6093 
o|contracted procedure: k6090 
o|contracted procedure: k6084 
o|contracted procedure: k6128 
o|contracted procedure: k6131 
o|contracted procedure: k6136 
o|contracted procedure: k6143 
o|contracted procedure: k6170 
o|contracted procedure: k6200 
o|simplifications: ((if . 3) (let . 108)) 
o|removed binding forms: 488 
o|inlining procedure: "(csi.scm:182) dirseparator?" 
o|inlining procedure: "(csi.scm:203) dirseparator?" 
o|inlining procedure: "(csi.scm:208) dirseparator?" 
o|inlining procedure: "(csi.scm:277) tty-input?" 
o|inlining procedure: k4828 
o|inlining procedure: k3146 
o|inlining procedure: k3146 
o|inlining procedure: k4073 
o|inlining procedure: k4073 
o|inlining procedure: k4528 
o|inlining procedure: k5067 
o|inlining procedure: k5067 
o|inlining procedure: k5738 
o|inlining procedure: k5738 
o|inlining procedure: k5768 
o|inlining procedure: k5768 
o|inlining procedure: k5916 
o|inlining procedure: k5916 
o|inlining procedure: k2866 
o|inlining procedure: k2866 
o|replaced variables: 74 
o|simplifications: ((let . 9) (if . 5)) 
o|replaced variables: 18 
o|removed binding forms: 46 
o|inlining procedure: k2263 
o|contracted procedure: k5419 
o|contracted procedure: k5443 
o|contracted procedure: k5458 
o|contracted procedure: k5478 
o|simplifications: ((if . 3)) 
o|removed binding forms: 15 
o|contracted procedure: k2055 
o|contracted procedure: k2031 
o|replaced variables: 1 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop90 0 
o|direct leaf routine/allocation: lp480 0 
o|direct leaf routine/allocation: lp466 0 
o|direct leaf routine/allocation: loop1096 0 
o|contracted procedure: k2064 
o|converted assignments to bindings: (loop90) 
o|contracted procedure: k3585 
o|converted assignments to bindings: (lp480) 
o|converted assignments to bindings: (lp466) 
o|contracted procedure: k5034 
o|converted assignments to bindings: (loop1096) 
o|simplifications: ((let . 4)) 
o|removed binding forms: 3 
o|customizable procedures: (k1858 k6154 k6070 doloop369370 map-loop341375 canonicalize-args k5163 k5167 k5172 map-loop11651185 k5312 k5316 for-each-loop12411251 for-each-loop12581268 for-each-loop12751285 map-loop12921309 collect-options1192 map-loop13181335 member* k5609 k5357 doloop14131414 evalstring1194 doloop13571358 doloop12271228 loop1196 k5015 map-loop10601085 loop1049 find1027 loop1024 k4477 k4648 for-each-loop822855 prin1772 doloop836837 doloop784785 justify723 doloop732733 doloop740741 doloop748749 doloop722730 k4205 bestlen700 k3587 map-loop649666 for-each-loop604621 loop615 for-each-loop582593 doloop577578 loop-print554 doloop541542 loop2521 loop1512 k2956 map-loop403420 for-each-loop429450 shorten397 k2995 k2330 for-each-loop301313 k4735 for-each-loop920944 compare902 doloop934935 doloop906911 fail907 k4685 show-frameinfo for-each-loop254274 for-each-loop235245 doloop130131 k2141 loop107 addext82 k1956) 
o|calls to known targets: 261 
o|identified direct recursive calls: f_2020 1 
o|identified direct recursive calls: f_4785 1 
o|identified direct recursive calls: f_3177 1 
o|identified direct recursive calls: f_3950 1 
o|identified direct recursive calls: f_3210 1 
o|identified direct recursive calls: f_4956 1 
o|identified direct recursive calls: f_5127 1 
o|unused rest argument: _1225 f_5300 
o|unused rest argument: _1361 f_5383 
o|identified direct recursive calls: f_5363 2 
o|fast box initializations: 46 
o|fast global references: 38 
o|fast global assignments: 14 
o|dropping unused closure argument: f_3177 
o|dropping unused closure argument: f_3210 
o|dropping unused closure argument: f_2968 
o|dropping unused closure argument: f_4280 
o|dropping unused closure argument: f_4455 
o|dropping unused closure argument: f_4459 
o|dropping unused closure argument: f_4990 
o|dropping unused closure argument: f_5127 
o|dropping unused closure argument: f_5258 
o|dropping unused closure argument: f_4938 
o|dropping unused closure argument: f_1992 
*/
/* end of file */
