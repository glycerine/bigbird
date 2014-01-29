/* Generated from c-backend.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: c-backend.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file c-backend.c
   unit: backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[867];
static double C_possibly_force_alignment;


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2169(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2169(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2165(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2165(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);

#ifdef C_SIXTY_FOUR
return((C_header_bits(lit) >> (24 + 32)) & 0xff);
#else
return((C_header_bits(lit) >> 24) & 0xff);
#endif

C_ret:
#undef return

return C_r;}

C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5109)
static void C_ccall f_5109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9172)
static void C_ccall f_9172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9252)
static void C_fcall f_9252(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9185)
static void C_ccall f_9185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9187)
static void C_ccall f_9187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6559)
static void C_ccall f_6559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9183)
static void C_ccall f_9183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6101)
static void C_fcall f_6101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9190)
static void C_ccall f_9190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6548)
static void C_ccall f_6548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5111)
static void C_fcall f_5111(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5113)
static void C_fcall f_5113(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_fcall f_3067(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5147)
static void C_ccall f_5147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_fcall f_4576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5922)
static void C_ccall f_5922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5161)
static void C_ccall f_5161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5911)
static void C_ccall f_5911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9264)
static void C_ccall f_9264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5913)
static void C_ccall f_5913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9266)
static void C_ccall f_9266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9268)
static void C_ccall f_9268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5153)
static void C_fcall f_5153(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5157)
static void C_ccall f_5157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4553)
static void C_fcall f_4553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9231)
static void C_ccall f_9231(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6298)
static void C_ccall f_6298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6292)
static void C_ccall f_6292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_fcall f_4520(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6289)
static void C_ccall f_6289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5968)
static void C_fcall f_5968(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5953)
static void C_ccall f_5953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6167)
static void C_fcall f_6167(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7301)
static void C_ccall f_7301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6169)
static void C_fcall f_6169(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4999)
static void C_ccall f_4999(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7365)
static void C_ccall f_7365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7369)
static void C_ccall f_7369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6590)
static void C_ccall f_6590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6592)
static void C_ccall f_6592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6594)
static void C_ccall f_6594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6596)
static void C_ccall f_6596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6146)
static void C_fcall f_6146(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6586)
static void C_ccall f_6586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6588)
static void C_ccall f_6588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7350)
static void C_ccall f_7350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7272)
static void C_ccall f_7272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7270)
static void C_ccall f_7270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7972)
static void C_ccall f_7972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7341)
static void C_fcall f_7341(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9286)
static void C_ccall f_9286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9284)
static void C_ccall f_9284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9282)
static void C_ccall f_9282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7334)
static void C_ccall f_7334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7292)
static void C_fcall f_7292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7290)
static void C_ccall f_7290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7977)
static void C_ccall f_7977(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7975)
static void C_ccall f_7975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9289)
static void C_ccall f_9289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9900)
static void C_ccall f_9900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7941)
static void C_fcall f_7941(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7956)
static void C_fcall f_7956(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5299)
static void C_ccall f_5299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9271)
static void C_ccall f_9271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8380)
static void C_ccall f_8380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7947)
static void C_ccall f_7947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6886)
static void C_ccall f_6886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6881)
static void C_fcall f_6881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7932)
static void C_ccall f_7932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7911)
static void C_fcall f_7911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8377)
static void C_ccall f_8377(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6870)
static void C_fcall f_6870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7926)
static void C_fcall f_7926(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6851)
static void C_fcall f_6851(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6859)
static void C_fcall f_6859(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6841)
static void C_ccall f_6841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7401)
static void C_ccall f_7401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6839)
static void C_ccall f_6839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6831)
static void C_ccall f_6831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6835)
static void C_ccall f_6835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8664)
static void C_fcall f_8664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6829)
static void C_ccall f_6829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6826)
static void C_ccall f_6826(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6823)
static void C_ccall f_6823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6812)
static void C_ccall f_6812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8639)
static void C_ccall f_8639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6803)
static void C_fcall f_6803(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8631)
static void C_fcall f_8631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4855)
static void C_fcall f_4855(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3296)
static void C_fcall f_3296(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3294)
static void C_ccall f_3294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8623)
static void C_fcall f_8623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7412)
static void C_ccall f_7412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7415)
static void C_ccall f_7415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7419)
static void C_ccall f_7419(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5237)
static void C_fcall f_5237(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7410)
static void C_ccall f_7410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8643)
static void C_ccall f_8643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7483)
static void C_fcall f_7483(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2653)
static void C_fcall f_2653(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4822)
static void C_ccall f_4822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5244)
static void C_ccall f_5244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7387)
static void C_ccall f_7387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7384)
static void C_ccall f_7384(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7379)
static void C_ccall f_7379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5797)
static void C_fcall f_5797(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7377)
static void C_ccall f_7377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_fcall f_2637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_fcall f_2607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9076)
static void C_ccall f_9076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9071)
static void C_ccall f_9071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2662)
static void C_ccall f_2662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9073)
static void C_ccall f_9073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8970)
static void C_ccall f_8970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5754)
static void C_fcall f_5754(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5775)
static void C_ccall f_5775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4385)
static void C_fcall f_4385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5717)
static void C_ccall f_5717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9049)
static void C_ccall f_9049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7993)
static void C_fcall f_7993(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7991)
static void C_ccall f_7991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8967)
static void C_ccall f_8967(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9053)
static void C_ccall f_9053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9051)
static void C_ccall f_9051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9056)
static void C_ccall f_9056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4377)
static void C_ccall f_4377(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9067)
static void C_fcall f_9067(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9069)
static void C_ccall f_9069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6324)
static void C_ccall f_6324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5729)
static void C_fcall f_5729(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6363)
static void C_ccall f_6363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6365)
static void C_ccall f_6365(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9031)
static void C_ccall f_9031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9033)
static void C_ccall f_9033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9035)
static void C_ccall f_9035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9038)
static void C_ccall f_9038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6890)
static void C_ccall f_6890(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6357)
static void C_ccall f_6357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5024)
static void C_ccall f_5024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_fcall f_3373(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6336)
static void C_ccall f_6336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4900)
static void C_fcall f_4900(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4904)
static void C_fcall f_4904(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4908)
static void C_ccall f_4908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5040)
static void C_fcall f_5040(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5031)
static void C_ccall f_5031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9774)
static void C_ccall f_9774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5899)
static void C_ccall f_5899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5897)
static void C_ccall f_5897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5890)
static void C_ccall f_5890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_fcall f_3300(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3354)
static void C_ccall f_3354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9728)
static void C_ccall f_9728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4958)
static void C_ccall f_4958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4952)
static void C_ccall f_4952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8405)
static void C_fcall f_8405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9087)
static void C_ccall f_9087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8431)
static void C_fcall f_8431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4325)
static void C_fcall f_4325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4321)
static void C_fcall f_4321(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9089)
static void C_ccall f_9089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4936)
static void C_fcall f_4936(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9094)
static void C_ccall f_9094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9091)
static void C_ccall f_9091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5841)
static void C_ccall f_5841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6608)
static void C_ccall f_6608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6606)
static void C_ccall f_6606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6600)
static void C_ccall f_6600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6604)
static void C_ccall f_6604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4916)
static void C_fcall f_4916(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6631)
static void C_ccall f_6631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6618)
static void C_ccall f_6618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6615)
static void C_ccall f_6615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5080)
static void C_fcall f_5080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6672)
static void C_ccall f_6672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6674)
static void C_ccall f_6674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6678)
static void C_ccall f_6678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6399)
static void C_fcall f_6399(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3479)
static void C_fcall f_3479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4621)
static void C_fcall f_4621(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9881)
static void C_ccall f_9881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9888)
static void C_ccall f_9888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9885)
static void C_ccall f_9885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9883)
static void C_ccall f_9883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7607)
static void C_fcall f_7607(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6374)
static void C_fcall f_6374(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4645)
static void C_ccall f_4645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_fcall f_4641(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9825)
static void C_ccall f_9825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4647)
static void C_ccall f_4647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2838)
static void C_fcall f_2838(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4661)
static void C_fcall f_4661(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5010)
static void C_ccall f_5010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9857)
static void C_ccall f_9857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9859)
static void C_ccall f_9859(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9790)
static void C_ccall f_9790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4686)
static void C_fcall f_4686(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9879)
static void C_ccall f_9879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9877)
static void C_ccall f_9877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5060)
static void C_fcall f_5060(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5599)
static void C_fcall f_5599(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3405)
static void C_fcall f_3405(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4185)
static void C_ccall f_4185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9848)
static void C_ccall f_9848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3933)
static void C_ccall f_3933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6646)
static void C_ccall f_6646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6644)
static void C_ccall f_6644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6629)
static void C_ccall f_6629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6621)
static void C_ccall f_6621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6655)
static void C_ccall f_6655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5548)
static void C_fcall f_5548(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5543)
static void C_ccall f_5543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5533)
static void C_ccall f_5533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5535)
static void C_fcall f_5535(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5563)
static void C_fcall f_5563(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7706)
static void C_fcall f_7706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8726)
static void C_ccall f_8726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7731)
static void C_ccall f_7731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7717)
static void C_fcall f_7717(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6920)
static void C_fcall f_6920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9891)
static void C_ccall f_9891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9894)
static void C_ccall f_9894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9897)
static void C_ccall f_9897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7772)
static void C_fcall f_7772(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5903)
static void C_ccall f_5903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_fcall f_3591(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7787)
static void C_fcall f_7787(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4133)
static void C_fcall f_4133(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7781)
static void C_ccall f_7781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9302)
static void C_ccall f_9302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9300)
static void C_ccall f_9300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9307)
static void C_ccall f_9307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9304)
static void C_ccall f_9304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6003)
static void C_ccall f_6003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3541)
static void C_ccall f_3541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7796)
static void C_ccall f_7796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5683)
static void C_fcall f_5683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_fcall f_4496(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5664)
static void C_fcall f_5664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9368)
static void C_ccall f_9368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6408)
static void C_ccall f_6408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9320)
static void C_ccall f_9320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9322)
static void C_ccall f_9322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6465)
static void C_ccall f_6465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9325)
static void C_ccall f_9325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7588)
static void C_fcall f_7588(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9336)
static void C_ccall f_9336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9338)
static void C_ccall f_9338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9343)
static void C_ccall f_9343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9340)
static void C_ccall f_9340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6043)
static void C_fcall f_6043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9618)
static void C_ccall f_9618(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6013)
static void C_ccall f_6013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6011)
static void C_fcall f_6011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6459)
static void C_ccall f_6459(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6457)
static void C_ccall f_6457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6445)
static void C_ccall f_6445(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9673)
static void C_ccall f_9673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5382)
static void C_fcall f_5382(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9404)
static void C_ccall f_9404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9408)
static void C_ccall f_9408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9406)
static void C_ccall f_9406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f10617)
static void C_ccall f10617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9411)
static void C_ccall f_9411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9375)
static void C_ccall f_9375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9372)
static void C_ccall f_9372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9370)
static void C_ccall f_9370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3652)
static void C_ccall f_3652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f10609)
static void C_ccall f10609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9388)
static void C_ccall f_9388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9386)
static void C_ccall f_9386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9630)
static C_word C_fcall f_9630(C_word *a,C_word t0);
C_noret_decl(f_3637)
static void C_ccall f_3637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9393)
static void C_ccall f_9393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9390)
static void C_ccall f_9390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3631)
static void C_ccall f_3631(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6724)
static void C_fcall f_6724(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_fcall f_4445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6707)
static void C_ccall f_6707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4795)
static void C_fcall f_4795(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6473)
static void C_ccall f_6473(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6471)
static void C_ccall f_6471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5363)
static void C_ccall f_5363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4773)
static void C_ccall f_4773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6796)
static void C_ccall f_6796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_fcall f_4725(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6787)
static void C_ccall f_6787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5496)
static void C_fcall f_5496(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5329)
static void C_ccall f_5329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_fcall f_4713(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_fcall f_3733(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_fcall f_5304(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9107)
static void C_ccall f_9107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9109)
static void C_ccall f_9109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9111)
static void C_ccall f_9111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9114)
static void C_ccall f_9114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7866)
static void C_fcall f_7866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9129)
static void C_ccall f_9129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9127)
static void C_ccall f_9127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9131)
static void C_ccall f_9131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9134)
static void C_ccall f_9134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7887)
static void C_ccall f_7887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9145)
static void C_ccall f_9145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9147)
static void C_ccall f_9147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7881)
static void C_fcall f_7881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_fcall f_3765(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6731)
static void C_fcall f_6731(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8018)
static void C_ccall f_8018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9152)
static void C_ccall f_9152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9167)
static void C_ccall f_9167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9165)
static void C_ccall f_9165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9169)
static void C_ccall f_9169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7896)
static void C_fcall f_7896(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6203)
static void C_fcall f_6203(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6246)
static void C_ccall f_6246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6248)
static void C_ccall f_6248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7808)
static void C_ccall f_7808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7802)
static void C_fcall f_7802(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6230)
static void C_ccall f_6230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6232)
static void C_ccall f_6232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6501)
static void C_fcall f_6501(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7829)
static void C_fcall f_7829(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6573)
static void C_ccall f_6573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7827)
static void C_ccall f_7827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6577)
static void C_ccall f_6577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6575)
static void C_ccall f_6575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9201)
static void C_ccall f_9201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9208)
static void C_ccall f_9208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9205)
static void C_ccall f_9205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9203)
static void C_ccall f_9203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7814)
static void C_ccall f_7814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6562)
static void C_ccall f_6562(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7816)
static void C_ccall f_7816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6567)
static void C_ccall f_6567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6565)
static void C_ccall f_6565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7811)
static void C_ccall f_7811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7248)
static void C_ccall f_7248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5416)
static void C_fcall f_5416(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9227)
static void C_ccall f_9227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_fcall f_5409(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5196)
static void C_fcall f_5196(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5190)
static void C_fcall f_5190(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6539)
static void C_fcall f_6539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7266)
static void C_ccall f_7266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7268)
static void C_ccall f_7268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7263)
static void C_ccall f_7263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6529)
static void C_ccall f_6529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7256)
static void C_ccall f_7256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6524)
static void C_ccall f_6524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7254)
static void C_ccall f_7254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7252)
static void C_ccall f_7252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7250)
static void C_ccall f_7250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_backend_toplevel)
C_externexport void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_9252)
static void C_fcall trf_9252(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9252(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9252(t0,t1);}

C_noret_decl(trf_6101)
static void C_fcall trf_6101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6101(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6101(t0,t1);}

C_noret_decl(trf_5111)
static void C_fcall trf_5111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5111(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5111(t0,t1);}

C_noret_decl(trf_5113)
static void C_fcall trf_5113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5113(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5113(t0,t1);}

C_noret_decl(trf_3067)
static void C_fcall trf_3067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3067(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3067(t0,t1,t2,t3);}

C_noret_decl(trf_4576)
static void C_fcall trf_4576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4576(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4576(t0,t1,t2);}

C_noret_decl(trf_5153)
static void C_fcall trf_5153(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5153(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5153(t0,t1);}

C_noret_decl(trf_4553)
static void C_fcall trf_4553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4553(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4553(t0,t1,t2);}

C_noret_decl(trf_4520)
static void C_fcall trf_4520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4520(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4520(t0,t1,t2,t3);}

C_noret_decl(trf_5968)
static void C_fcall trf_5968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5968(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5968(t0,t1);}

C_noret_decl(trf_6167)
static void C_fcall trf_6167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6167(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6167(t0,t1);}

C_noret_decl(trf_6169)
static void C_fcall trf_6169(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6169(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6169(t0,t1,t2,t3);}

C_noret_decl(trf_6146)
static void C_fcall trf_6146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6146(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6146(t0,t1,t2);}

C_noret_decl(trf_7341)
static void C_fcall trf_7341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7341(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7341(t0,t1,t2);}

C_noret_decl(trf_7292)
static void C_fcall trf_7292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7292(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7292(t0,t1,t2,t3);}

C_noret_decl(trf_7941)
static void C_fcall trf_7941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7941(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7941(t0,t1);}

C_noret_decl(trf_7956)
static void C_fcall trf_7956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7956(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7956(t0,t1);}

C_noret_decl(trf_6881)
static void C_fcall trf_6881(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6881(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6881(t0,t1);}

C_noret_decl(trf_7911)
static void C_fcall trf_7911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7911(t0,t1);}

C_noret_decl(trf_6870)
static void C_fcall trf_6870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6870(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6870(t0,t1);}

C_noret_decl(trf_7926)
static void C_fcall trf_7926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7926(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7926(t0,t1);}

C_noret_decl(trf_6851)
static void C_fcall trf_6851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6851(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6851(t0,t1);}

C_noret_decl(trf_6859)
static void C_fcall trf_6859(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6859(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6859(t0,t1);}

C_noret_decl(trf_8664)
static void C_fcall trf_8664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8664(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8664(t0,t1);}

C_noret_decl(trf_6803)
static void C_fcall trf_6803(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6803(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6803(t0,t1,t2);}

C_noret_decl(trf_8631)
static void C_fcall trf_8631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8631(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8631(t0,t1);}

C_noret_decl(trf_4855)
static void C_fcall trf_4855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4855(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4855(t0,t1,t2);}

C_noret_decl(trf_3296)
static void C_fcall trf_3296(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3296(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3296(t0,t1);}

C_noret_decl(trf_8623)
static void C_fcall trf_8623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8623(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8623(t0,t1);}

C_noret_decl(trf_5237)
static void C_fcall trf_5237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5237(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5237(t0,t1,t2);}

C_noret_decl(trf_7483)
static void C_fcall trf_7483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7483(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7483(t0,t1);}

C_noret_decl(trf_2649)
static void C_fcall trf_2649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2649(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2649(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2653)
static void C_fcall trf_2653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2653(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2653(t0,t1,t2,t3);}

C_noret_decl(trf_5797)
static void C_fcall trf_5797(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5797(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5797(t0,t1,t2,t3);}

C_noret_decl(trf_2637)
static void C_fcall trf_2637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2637(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2637(t0,t1,t2);}

C_noret_decl(trf_2607)
static void C_fcall trf_2607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2607(t0,t1,t2);}

C_noret_decl(trf_5754)
static void C_fcall trf_5754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5754(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5754(t0,t1);}

C_noret_decl(trf_4385)
static void C_fcall trf_4385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4385(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4385(t0,t1,t2);}

C_noret_decl(trf_7993)
static void C_fcall trf_7993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7993(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7993(t0,t1,t2);}

C_noret_decl(trf_9067)
static void C_fcall trf_9067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9067(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9067(t0,t1);}

C_noret_decl(trf_5729)
static void C_fcall trf_5729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5729(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5729(t0,t1);}

C_noret_decl(trf_3373)
static void C_fcall trf_3373(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3373(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3373(t0,t1,t2,t3);}

C_noret_decl(trf_4900)
static void C_fcall trf_4900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4900(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4900(t0,t1);}

C_noret_decl(trf_4904)
static void C_fcall trf_4904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4904(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4904(t0,t1);}

C_noret_decl(trf_2574)
static void C_fcall trf_2574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2574(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2574(t0,t1,t2);}

C_noret_decl(trf_5040)
static void C_fcall trf_5040(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5040(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5040(t0,t1,t2);}

C_noret_decl(trf_3300)
static void C_fcall trf_3300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3300(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3300(t0,t1);}

C_noret_decl(trf_8405)
static void C_fcall trf_8405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8405(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8405(t0,t1);}

C_noret_decl(trf_8431)
static void C_fcall trf_8431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8431(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8431(t0,t1);}

C_noret_decl(trf_4325)
static void C_fcall trf_4325(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4325(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4325(t0,t1);}

C_noret_decl(trf_4321)
static void C_fcall trf_4321(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4321(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4321(t0,t1);}

C_noret_decl(trf_4936)
static void C_fcall trf_4936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4936(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4936(t0,t1,t2);}

C_noret_decl(trf_4916)
static void C_fcall trf_4916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4916(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4916(t0,t1,t2,t3);}

C_noret_decl(trf_5080)
static void C_fcall trf_5080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5080(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5080(t0,t1,t2);}

C_noret_decl(trf_6399)
static void C_fcall trf_6399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6399(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6399(t0,t1);}

C_noret_decl(trf_3479)
static void C_fcall trf_3479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3479(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3479(t0,t1);}

C_noret_decl(trf_4621)
static void C_fcall trf_4621(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4621(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4621(t0,t1,t2);}

C_noret_decl(trf_7607)
static void C_fcall trf_7607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7607(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7607(t0,t1);}

C_noret_decl(trf_6374)
static void C_fcall trf_6374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6374(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6374(t0,t1,t2);}

C_noret_decl(trf_4641)
static void C_fcall trf_4641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4641(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4641(t0,t1);}

C_noret_decl(trf_2838)
static void C_fcall trf_2838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2838(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2838(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4661)
static void C_fcall trf_4661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4661(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4661(t0,t1,t2);}

C_noret_decl(trf_4686)
static void C_fcall trf_4686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4686(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4686(t0,t1,t2);}

C_noret_decl(trf_5060)
static void C_fcall trf_5060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5060(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5060(t0,t1,t2);}

C_noret_decl(trf_5599)
static void C_fcall trf_5599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5599(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5599(t0,t1,t2,t3);}

C_noret_decl(trf_3405)
static void C_fcall trf_3405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3405(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3405(t0,t1,t2,t3);}

C_noret_decl(trf_5548)
static void C_fcall trf_5548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5548(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5548(t0,t1,t2,t3);}

C_noret_decl(trf_5535)
static void C_fcall trf_5535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5535(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5535(t0,t1,t2);}

C_noret_decl(trf_5563)
static void C_fcall trf_5563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5563(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5563(t0,t1);}

C_noret_decl(trf_7706)
static void C_fcall trf_7706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7706(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7706(t0,t1);}

C_noret_decl(trf_7717)
static void C_fcall trf_7717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7717(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7717(t0,t1);}

C_noret_decl(trf_6920)
static void C_fcall trf_6920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6920(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6920(t0,t1);}

C_noret_decl(trf_7772)
static void C_fcall trf_7772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7772(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7772(t0,t1);}

C_noret_decl(trf_3591)
static void C_fcall trf_3591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3591(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3591(t0,t1);}

C_noret_decl(trf_7787)
static void C_fcall trf_7787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7787(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7787(t0,t1);}

C_noret_decl(trf_4133)
static void C_fcall trf_4133(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4133(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4133(t0,t1,t2,t3);}

C_noret_decl(trf_5683)
static void C_fcall trf_5683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5683(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5683(t0,t1);}

C_noret_decl(trf_4496)
static void C_fcall trf_4496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4496(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4496(t0,t1);}

C_noret_decl(trf_5664)
static void C_fcall trf_5664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5664(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5664(t0,t1);}

C_noret_decl(trf_7588)
static void C_fcall trf_7588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7588(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7588(t0,t1);}

C_noret_decl(trf_6043)
static void C_fcall trf_6043(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6043(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6043(t0,t1);}

C_noret_decl(trf_6011)
static void C_fcall trf_6011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6011(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6011(t0,t1);}

C_noret_decl(trf_5382)
static void C_fcall trf_5382(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5382(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5382(t0,t1,t2,t3);}

C_noret_decl(trf_6724)
static void C_fcall trf_6724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6724(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6724(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4445)
static void C_fcall trf_4445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4445(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4445(t0,t1,t2);}

C_noret_decl(trf_4795)
static void C_fcall trf_4795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4795(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4795(t0,t1);}

C_noret_decl(trf_4725)
static void C_fcall trf_4725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4725(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4725(t0,t1);}

C_noret_decl(trf_5496)
static void C_fcall trf_5496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5496(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5496(t0,t1);}

C_noret_decl(trf_4713)
static void C_fcall trf_4713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4713(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4713(t0,t1);}

C_noret_decl(trf_3733)
static void C_fcall trf_3733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3733(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3733(t0,t1,t2,t3);}

C_noret_decl(trf_5304)
static void C_fcall trf_5304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5304(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5304(t0,t1,t2);}

C_noret_decl(trf_4292)
static void C_fcall trf_4292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4292(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4292(t0,t1,t2,t3);}

C_noret_decl(trf_7866)
static void C_fcall trf_7866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7866(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7866(t0,t1);}

C_noret_decl(trf_7881)
static void C_fcall trf_7881(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7881(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7881(t0,t1);}

C_noret_decl(trf_3765)
static void C_fcall trf_3765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3765(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3765(t0,t1,t2,t3);}

C_noret_decl(trf_6731)
static void C_fcall trf_6731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6731(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6731(t0,t1);}

C_noret_decl(trf_7896)
static void C_fcall trf_7896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7896(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7896(t0,t1);}

C_noret_decl(trf_6203)
static void C_fcall trf_6203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6203(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6203(t0,t1);}

C_noret_decl(trf_7802)
static void C_fcall trf_7802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7802(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7802(t0,t1);}

C_noret_decl(trf_6501)
static void C_fcall trf_6501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6501(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6501(t0,t1,t2);}

C_noret_decl(trf_7829)
static void C_fcall trf_7829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7829(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7829(t0,t1,t2);}

C_noret_decl(trf_5416)
static void C_fcall trf_5416(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5416(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5416(t0,t1);}

C_noret_decl(trf_5409)
static void C_fcall trf_5409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5409(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5409(t0,t1,t2,t3);}

C_noret_decl(trf_5196)
static void C_fcall trf_5196(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5196(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5196(t0,t1,t2,t3);}

C_noret_decl(trf_5190)
static void C_fcall trf_5190(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5190(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5190(t0,t1);}

C_noret_decl(trf_6539)
static void C_fcall trf_6539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6539(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6539(t0,t1,t2);}

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

/* k3863 in k3835 in k3880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_not(((C_word*)t0)[2]);
if(C_truep(t2)){
if(C_truep(t2)){
/* c-backend.scm:356: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3838(2,t4,t3);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
/* c-backend.scm:356: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3838(2,t4,t3);}}}

/* k2903 in k2901 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2904,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_plus(&a,2,t2,C_fix(1));
/* c-backend.scm:127: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,((C_word*)t0)[3],lf[37],t3,C_make_character(93));}

/* f_6128 in k6126 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_ccall f_6128(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6128,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6134,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(t2);
t5=C_eqp(t4,lf[465]);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_car(t6);
/* c-backend.scm:806: gen */
t8=*((C_word*)lf[1]+1);
f_2554(7,t8,t1,C_SCHEME_TRUE,lf[466],C_make_character(32),t7,C_make_character(59));}
else{
t6=C_eqp(t4,lf[467]);
if(C_truep(t6)){
t7=t2;
t8=C_u_i_car(t7);
/* c-backend.scm:806: gen */
t9=*((C_word*)lf[1]+1);
f_2554(7,t9,t1,C_SCHEME_TRUE,lf[468],C_make_character(32),t8,C_make_character(59));}
else{
t7=C_eqp(t4,lf[15]);
if(C_truep(t7)){
t8=t2;
t9=C_u_i_car(t8);
/* c-backend.scm:806: gen */
t10=*((C_word*)lf[1]+1);
f_2554(7,t10,t1,C_SCHEME_TRUE,lf[469],C_make_character(32),t9,C_make_character(59));}
else{
t8=C_eqp(t4,lf[470]);
if(C_truep(t8)){
t9=t2;
t10=C_u_i_car(t9);
/* c-backend.scm:806: gen */
t11=*((C_word*)lf[1]+1);
f_2554(7,t11,t1,C_SCHEME_TRUE,lf[471],C_make_character(32),t10,C_make_character(59));}
else{
t9=C_eqp(t4,lf[472]);
if(C_truep(t9)){
t10=t2;
t11=C_u_i_car(t10);
/* c-backend.scm:806: gen */
t12=*((C_word*)lf[1]+1);
f_2554(7,t12,t1,C_SCHEME_TRUE,lf[473],C_make_character(32),t11,C_make_character(59));}
else{
t10=C_eqp(t4,lf[12]);
if(C_truep(t10)){
t11=t2;
t12=C_u_i_car(t11);
/* c-backend.scm:806: gen */
t13=*((C_word*)lf[1]+1);
f_2554(7,t13,t1,C_SCHEME_TRUE,lf[474],C_make_character(32),t12,C_make_character(59));}
else{
/* c-backend.scm:743: bomb */
t11=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t3,lf[475],t4);}}}}}}}

/* k6126 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in ... */
static void C_ccall f_6127(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6128,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[57]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6146,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6146(t8,((C_word*)t0)[3],t3);}

/* f_5100 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5100(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5100,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5103,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:629: lambda-literal-argument-count */
t5=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k5106 in k5104 in k5102 */
static void C_ccall f_5107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:632: lambda-literal-customizable */
t3=*((C_word*)lf[286]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}

/* k2901 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* c-backend.scm:126: expr */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2653(t4,t2,t3,((C_word*)t0)[6]);}

/* k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5111,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5188,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:633: lambda-literal-closure-size */
t4=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}
else{
t3=t2;
f_5111(t3,C_SCHEME_FALSE);}}

/* k5102 */
static void C_ccall f_5103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5103,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5105,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:630: lambda-literal-rest-argument */
t4=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k5104 in k5102 */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:631: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k9170 in k9168 in k9166 in k9164 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1334: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_fcall f_9252(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9252,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[610]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[611]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9264,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1346: open-output-string */
t6=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(t2,lf[606]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9282,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1348: open-output-string */
t7=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_eqp(t2,lf[613]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9300,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1350: open-output-string */
t8=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t2,lf[614]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1352: open-output-string */
t9=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(t2,lf[615]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1354: open-output-string */
t10=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=C_eqp(t2,lf[608]);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1355: foreign-result-conversion */
t11=*((C_word*)lf[168]+1);
f_8967(4,t11,((C_word*)t0)[3],t10,((C_word*)t0)[4]);}
else{
t10=C_eqp(t2,lf[470]);
t11=(C_truep(t10)?t10:C_eqp(t2,lf[609]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1357: open-output-string */
t13=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=C_eqp(t2,lf[612]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9386,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1358: open-output-string */
t14=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t13=C_eqp(t2,lf[749]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9404,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1359: open-output-string */
t15=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
/* c-backend.scm:1360: err */
t14=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,((C_word*)t0)[3]);}}}}}}}}}}
else{
/* c-backend.scm:1361: err */
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k9184 in k9182 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1335: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9186 in k9184 in k9182 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* ##compiler#generate-foreign-stubs in k2627 in k2550 in k2548 */
static void C_ccall f_6559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6559,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6562,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[57]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6803,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6803(t9,t1,t2);}

/* k9182 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9183,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9185,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1335: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[830],t2);}

/* k2923 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:131: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k6099 in k6089 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_fcall f_6101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:858: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[462]);}
else{
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:859: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[461]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
f_6003(2,t3,t2);}}}

/* k3839 in k3837 in k3835 in k3880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm:360: expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4292(t3,t2,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
/* c-backend.scm:361: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,((C_word*)t0)[2],C_make_character(41));}}

/* k3841 in k3839 in k3837 in k3835 in k3880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:361: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k5127 in k5125 in k5123 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:641: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(40));}

/* k4584 in doloop599 in k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4585,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4576(t3,((C_word*)t0)[4],t2);}

/* k2925 in k2923 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:132: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[40]);}

/* k5125 in k5123 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:640: restore */
f_4904(t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k5123 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:639: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[329],((C_word*)t0)[4],lf[330]);}

/* k9188 in k9186 in k9184 in k9182 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1335: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6547 in for-each-loop1181 in generate-foreign-callback-stub-prototypes in k2627 in k2550 in k2548 */
static void C_ccall f_6548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6539(t3,((C_word*)t0)[4],t2);}

/* k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_fcall f_5111(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5111,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=t2;
f_5113(t5,t4);}
else{
t3=t2;
f_5113(t3,C_SCHEME_UNDEFINED);}}

/* k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5119,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:637: gen */
t3=*((C_word*)lf[1]+1);
f_2554(11,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[331],((C_word*)t0)[5],lf[332],C_SCHEME_TRUE,lf[333],((C_word*)t0)[5],lf[334]);}
else{
t2=((C_word*)t0)[7];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5147,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5147(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5178,a[2]=t3,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:645: lambda-literal-allocated */
t5=*((C_word*)lf[280]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[11]);}}}}

/* k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_fcall f_5113(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5113,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:635: lambda-literal-direct */
t3=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[11]);}

/* for-each-loop181 in k3053 in k3042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3067(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3067,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3076,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:165: g182 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5140 in k5131 in k5129 in k5127 in k5125 in k5123 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5145 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5147,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_eqp(((C_word*)t0)[7],lf[254]);
t4=t2;
f_5153(t4,C_i_not(t3));}
else{
t3=t2;
f_5153(t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4561 in doloop604 in k4534 in k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4562,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4553(t3,((C_word*)t0)[4],t2);}

/* k3075 in for-each-loop181 in k3053 in k3042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3067(t4,((C_word*)t0)[5],t2,t3);}

/* k5129 in k5127 in k5125 in k5123 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:642: make-argument-list */
t3=*((C_word*)lf[295]+1);
f_6459(4,t3,t2,((C_word*)((C_word*)t0)[3])[1],lf[328]);}

/* k5131 in k5129 in k5127 in k5125 in k5123 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5141,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:643: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_make_character(44));}

/* k5133 in k5131 in k5129 in k5127 in k5125 in k5123 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:644: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[327]);}

/* doloop599 in k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4576,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4585,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_string_ref(((C_word*)t0)[4],t2);
t5=C_fix(C_character_code(t4));
/* c-backend.scm:526: gen */
t6=*((C_word*)lf[1]+1);
f_2554(4,t6,t3,C_make_character(44),t5);}}

/* k5921 in k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in ... */
static void C_ccall f_5922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(*((C_word*)lf[418]+1))){
/* c-backend.scm:821: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[419],*((C_word*)lf[418]+1),lf[420]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_5897(2,t3,t2);}}

/* k5159 in k5151 in k5145 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4538 in k4536 in k4534 in k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4540,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_4520(t5,((C_word*)t0)[5],t2,t4);}

/* k5910 in k5902 in k5900 in k5898 in k5896 in k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in ... */
static void C_ccall f_5911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:834: literal-frame */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5190(t3,t2);}

/* k9263 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9264,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9266,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1346: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[835],t2);}

/* k5912 in k5910 in k5902 in k5900 in k5898 in k5896 in k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in ... */
static void C_ccall f_5913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:835: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[399],((C_word*)t0)[3],lf[400]);}

/* k9265 in k9263 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1346: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9267 in k9265 in k9263 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1346: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[834],((C_word*)t0)[4]);}

/* k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3813,2,t0,t1);}
t2=C_i_zerop(t1);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:325: lambda-literal-temporaries */
t4=*((C_word*)lf[101]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3800,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:338: gen */
t4=*((C_word*)lf[1]+1);
f_2554(4,t4,t3,((C_word*)t0)[11],C_make_character(40));}}

/* k5151 in k5145 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_fcall f_5153(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5153,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:647: lset-adjoin */
t3=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5161,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:648: lset-adjoin */
t3=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]);}}

/* k5155 in k5151 in k5145 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* doloop604 in k4534 in k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4553,NULL,3,t0,t1,t2);}
if(C_truep(C_i_zerop(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4562,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:529: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t3,lf[238]);}}

/* f_9231 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9231(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9231,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1342: foreign-result-conversion */
t4=*((C_word*)lf[168]+1);
f_8967(4,t4,t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
/* c-backend.scm:1342: foreign-result-conversion */
t4=*((C_word*)lf[168]+1);
f_8967(4,t4,t1,t3,((C_word*)t0)[2]);}}

/* k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:920: prototypes */
t3=((C_word*)((C_word*)t0)[8])[1];
f_4641(t3,t2);}

/* k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:919: generate-foreign-stubs */
t3=*((C_word*)lf[513]+1);
f_6559(4,t3,t2,*((C_word*)lf[514]+1),((C_word*)t0)[7]);}

/* k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:918: generate-external-variables */
t3=*((C_word*)lf[515]+1);
f_6473(3,t3,t2,*((C_word*)lf[516]+1));}

/* k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:917: declarations */
t3=((C_word*)((C_word*)t0)[9])[1];
f_4496(t3,t2);}

/* doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4520(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4520,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4529,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
/* c-backend.scm:517: ##sys#lambda-info->string */
t6=*((C_word*)lf[241]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4529,2,t0,t1);}
t2=C_i_string_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=C_a_i_arithmetic_shift(&a,2,t2,C_fix(-16));
t5=C_a_i_arithmetic_shift(&a,2,t2,C_fix(-8));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_fixnum_and(C_fix(255),t2);
/* c-backend.scm:519: gen */
t8=*((C_word*)lf[1]+1);
f_2554(12,t8,t3,C_SCHEME_TRUE,lf[239],((C_word*)t0)[2],lf[240],t4,C_make_character(44),t6,C_make_character(44),t7,C_make_character(41));}

/* k4965 in k4963 in k4961 in k4959 in k4957 in k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:625: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[294]);}

/* k3197 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3211,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:204: ##sys#symbol->qualified-string */
t5=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}

/* k6154 in for-each-loop973 in k6126 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_ccall f_6155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6146(t3,((C_word*)t0)[4],t2);}

/* k4959 in k4957 in k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:622: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[298]);}

/* k4961 in k4959 in k4957 in k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:623: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[297]);}

/* k4963 in k4961 in k4959 in k4957 in k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4972,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4975,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:624: make-argument-list */
t6=*((C_word*)lf[295]+1);
f_6459(4,t6,t4,t5,lf[296]);}

/* k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6289,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#output ...) */,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6292,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:916: header */
t4=((C_word*)((C_word*)t0)[11])[1];
f_4321(t4,t3);}

/* k6286 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_6287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5683(t2,C_i_zerop(t1));}

/* k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4576,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4576(t6,t2,C_fix(0));}

/* k4536 in k4534 in k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:530: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[237]);}

/* k4534 in k4532 in k4528 in doloop593 in k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(7));
t4=C_a_i_bitwise_and(&a,2,C_fix(16777208),t3);
t5=C_a_i_minus(&a,2,t4,((C_word*)t0)[6]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4553,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4553(t9,t2,t5);}

/* k5966 in k5954 in k5952 in k5950 in k5948 in k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in ... */
static void C_fcall f_5968(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:845: gen */
t2=*((C_word*)lf[1]+1);
f_2554(8,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[436],((C_word*)t0)[3],lf[437],((C_word*)t0)[3],lf[438]);}
else{
t2=((C_word*)t0)[2];
f_5957(2,t2,C_SCHEME_UNDEFINED);}}

/* f_4503 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4503(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4503,3,t0,t1,t2);}
/* c-backend.scm:508: gen */
t3=*((C_word*)lf[1]+1);
f_2554(10,t3,t1,C_SCHEME_TRUE,lf[233],t2,lf[234],C_SCHEME_TRUE,lf[235],t2,lf[236]);}

/* k5952 in k5950 in k5948 in k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in ... */
static void C_ccall f_5953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:843: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,lf[440],((C_word*)t0)[4],lf[441]);}

/* k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4502(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4503,tmp=(C_word)a,a+=2,tmp);
t3=*((C_word*)lf[216]+1);
t4=C_i_check_list_2(*((C_word*)lf[216]+1),lf[57]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4621,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4621(t9,t5,*((C_word*)lf[216]+1));}

/* k5954 in k5952 in k5950 in k5948 in k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in ... */
static void C_ccall f_5955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5968,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=*((C_word*)lf[134]+1);
if(C_truep(*((C_word*)lf[134]+1))){
t5=t3;
f_5968(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[439]+1);
if(C_truep(*((C_word*)lf[439]+1))){
t6=t3;
f_5968(t6,C_SCHEME_FALSE);}
else{
t6=C_i_greaterp(((C_word*)t0)[4],C_fix(2));
t7=t3;
f_5968(t7,(C_truep(t6)?C_i_not(((C_word*)t0)[5]):C_SCHEME_FALSE));}}}

/* k5956 in k5954 in k5952 in k5950 in k5948 in k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in ... */
static void C_ccall f_5957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[434]+1))){
/* c-backend.scm:846: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[435]);}
else{
/* c-backend.scm:847: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[432],((C_word*)t0)[3],lf[433]);}}

/* k5958 in k5956 in k5954 in k5952 in k5950 in k5948 in k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in ... */
static void C_ccall f_5959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:847: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[432],((C_word*)t0)[3],lf[433]);}

/* k5950 in k5948 in k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in ... */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t3=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:841: gen */
t4=*((C_word*)lf[1]+1);
f_2554(4,t4,t2,C_make_character(116),t3);}
else{
/* c-backend.scm:842: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[442]);}}

/* k6133 */
static void C_ccall f_6134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
/* c-backend.scm:806: gen */
t4=*((C_word*)lf[1]+1);
f_2554(7,t4,((C_word*)t0)[3],C_SCHEME_TRUE,t1,C_make_character(32),t3,C_make_character(59));}

/* k3171 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:192: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3017 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:157: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t3)){
t4=t2;
f_4513(2,t4,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:512: gen */
t4=*((C_word*)lf[1]+1);
f_2554(7,t4,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[243],((C_word*)t0)[4],lf[244]);}}

/* k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:513: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[242]);}

/* k4514 in k4512 in k4509 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4515,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4520,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4520(t5,((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);}

/* k6166 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in ... */
static void C_fcall f_6167(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6167,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6169,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6169(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7300 in for-each-loop1484 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_7292(t4,((C_word*)t0)[5],t2,t3);}

/* doloop965 in k6166 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_fcall f_6169(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6169,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6178,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:803: gen */
t5=*((C_word*)lf[1]+1);
f_2554(6,t5,t4,C_SCHEME_TRUE,lf[476],t2,C_make_character(59));}}

/* k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[57]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5024,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5080,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5080(t9,t5,t3);}

/* f_4999 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4999(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4999,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5002,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:652: gen */
t4=*((C_word*)lf[1]+1);
f_2554(13,t4,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[322],t2,lf[323],C_SCHEME_TRUE,lf[324],t2,lf[325],t2,lf[326]);}

/* k5276 in k5273 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:677: + */
C_plus(5,0,((C_word*)t0)[2],C_fix(3),((C_word*)t0)[3],t1);}

/* k5273 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* c-backend.scm:677: literal-size */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5237(t5,t2,t4);}

/* k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1136: foreign-callback-stub-return-type */
t3=*((C_word*)lf[665]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1135: foreign-callback-stub-qualifiers */
t3=*((C_word*)lf[669]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k7368 in k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1137: foreign-callback-stub-argument-types */
t3=*((C_word*)lf[664]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* c-backend.scm:1023: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_SCHEME_TRUE);}

/* k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[14])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6787,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1025: cleanup */
t4=*((C_word*)lf[497]+1);
f_6365(3,t4,t3,((C_word*)t0)[14]);}
else{
t3=t2;
f_6594(2,t3,C_SCHEME_UNDEFINED);}}

/* k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:1027: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[581],((C_word*)t0)[11],lf[582]);}
else{
t3=t2;
f_6596(2,t3,C_SCHEME_UNDEFINED);}}

/* k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[7])){
/* c-backend.scm:1030: gen */
t3=*((C_word*)lf[1]+1);
f_2554(10,t3,t2,C_SCHEME_TRUE,lf[576],((C_word*)t0)[13],lf[577],C_SCHEME_TRUE,lf[578],((C_word*)t0)[13],lf[579]);}
else{
/* c-backend.scm:1032: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[580],((C_word*)t0)[13],C_make_character(40));}}

/* k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[12]);}

/* for-each-loop973 in k6126 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_fcall f_6146(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6146,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6155,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:804: g974 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7361,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7365,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1134: foreign-callback-stub-name */
t5=*((C_word*)lf[670]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_6584(2,t3,t1);}
else{
/* c-backend.scm:1019: make-list */
t3=*((C_word*)lf[247]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE);}}

/* k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6586,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:1020: foreign-result-conversion */
t3=*((C_word*)lf[168]+1);
f_8967(4,t3,t2,((C_word*)t0)[5],lf[587]);}

/* k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:1021: foreign-stub-cps */
t3=*((C_word*)lf[586]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[12]);}

/* k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm:1022: foreign-stub-callback */
t3=*((C_word*)lf[585]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[13]);}

/* k7349 in for-each-loop1312 in generate-foreign-callback-stubs in k2627 in k2550 in k2548 */
static void C_ccall f_7350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7341(t3,((C_word*)t0)[4],t2);}

/* k7271 in k7269 in k7267 in k7264 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1130: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[650]);}

/* k7269 in k7267 in k7264 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7272,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(lf[565],((C_word*)t0)[3]);
if(C_truep(t3)){
/* c-backend.scm:1130: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,((C_word*)t0)[2],lf[650]);}
else{
/* c-backend.scm:1129: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t2,C_make_character(41));}}

/* k7971 in k7954 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7972(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7975,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7977,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[5],lf[726]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7991,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7993,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7993(t13,t9,((C_word*)t0)[5]);}

/* for-each-loop1312 in generate-foreign-callback-stubs in k2627 in k2550 in k2548 */
static void C_fcall f_7341(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7341,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7350,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1075: g1313 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9285 in k9283 in k9281 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1348: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[836],((C_word*)t0)[4]);}

/* k9283 in k9281 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1348: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9281 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9282,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9284,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1348: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[837],t2);}

/* k7333 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1115: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[660],t1,lf[661]);}

/* for-each-loop1484 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_fcall f_7292(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7292,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7301,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:1120: g1485 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7289 in k7264 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1127: gen */
t2=*((C_word*)lf[1]+1);
f_2554(5,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[652],t1);}

/* f_7977 in k7971 in k7954 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 in ... */
static void C_ccall f_7977(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7977,3,t0,t1,t2);}
t3=C_eqp(lf[743],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[744]);}
else{
/* c-backend.scm:1236: foreign-type-declaration */
t4=*((C_word*)lf[174]+1);
f_7412(4,t4,t1,t2,lf[745]);}}

/* k7974 in k7971 in k7954 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 in ... */
static void C_ccall f_7975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1228: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[740],((C_word*)t0)[5],lf[741],t1,lf[742]);}

/* k9287 in k9285 in k9283 in k9281 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1348: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9899 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:57: number->string */
C_number_to_string(4,0,((C_word*)t0)[2],t1,C_fix(16));}

/* k5295 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:678: + */
C_plus(5,0,((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3],t1);}

/* k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7941(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7941,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1223: ->string */
t4=*((C_word*)lf[732]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7956,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[6],C_fix(3)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_7956(t4,C_eqp(lf[612],t3));}
else{
t3=t2;
f_7956(t3,C_SCHEME_FALSE);}}}

/* k7954 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7956(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7956,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_i_nullp(t7);
t9=(C_truep(t8)?lf[739]:C_i_car(t7));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7972,a[2]=((C_word*)t0)[3],a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1229: foreign-type-declaration */
t11=*((C_word*)lf[174]+1);
f_7412(4,t11,t10,t2,lf[747]);}
else{
/* c-backend.scm:1240: err */
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k5298 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5304,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5304(t6,t2,t1);}

/* k4020 in k4018 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:403: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[177]);}

/* k9269 in k9267 in k9265 in k9263 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1346: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_8380 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_8380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8380,2,t0,t1);}
/* c-backend.scm:1247: quit */
t2=*((C_word*)lf[671]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[759],((C_word*)t0)[2]);}

/* k7946 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1223: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[738],((C_word*)t0)[3]);}

/* k4032 in k4029 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:401: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[178],t1,lf[179]);}

/* k4029 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:401: foreign-type-declaration */
t3=*((C_word*)lf[174]+1);
f_7412(4,t3,t2,((C_word*)t0)[3],lf[180]);}

/* k4048 in k4046 in k4044 in k4042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:411: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[183]);}

/* k4044 in k4042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4058,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:409: foreign-argument-conversion */
t4=*((C_word*)lf[173]+1);
f_8377(3,t4,t3,((C_word*)t0)[6]);}

/* k4046 in k4044 in k4042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:410: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k6885 in k6879 in k6868 in k6857 in k6849 in compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_6886(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6886,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1100: g1449 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
t2=((C_word*)t0)[6];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[606]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6920,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_6920(t6,t4);}
else{
t6=C_eqp(t3,lf[470]);
if(C_truep(t6)){
t7=t5;
f_6920(t7,t6);}
else{
t7=C_eqp(t3,lf[609]);
if(C_truep(t7)){
t8=t5;
f_6920(t8,t7);}
else{
t8=C_eqp(t3,lf[610]);
if(C_truep(t8)){
t9=t5;
f_6920(t9,t8);}
else{
t9=C_eqp(t3,lf[611]);
if(C_truep(t9)){
t10=t5;
f_6920(t10,t9);}
else{
t10=C_eqp(t3,lf[612]);
if(C_truep(t10)){
t11=t5;
f_6920(t11,t10);}
else{
t11=C_eqp(t3,lf[613]);
if(C_truep(t11)){
t12=t5;
f_6920(t12,t11);}
else{
t12=C_eqp(t3,lf[614]);
t13=t5;
f_6920(t13,(C_truep(t12)?t12:C_eqp(t3,lf[615])));}}}}}}}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}}

/* k6879 in k6868 in k6857 in k6849 in compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_fcall f_6881(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6881,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1098: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[604],((C_word*)t0)[4],lf[605]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6886,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* c-backend.scm:1100: ##sys#hash-table-ref */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[616]+1),((C_word*)t0)[6]);}
else{
t3=t2;
f_6886(2,t3,C_SCHEME_FALSE);}}}

/* k7931 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1221: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[737],((C_word*)t0)[3]);}

/* k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7911(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7911,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1219: ->string */
t4=*((C_word*)lf[732]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_7926(t5,C_u_i_memq(t4,lf[748]));}
else{
t4=t2;
f_7926(t4,C_SCHEME_FALSE);}}}

/* k4042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:408: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* ##compiler#foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_8377(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8377,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=C_eqp(t4,lf[640]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[760]);}
else{
t6=C_eqp(t4,lf[15]);
t7=(C_truep(t6)?t6:C_eqp(t4,lf[641]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[761]);}
else{
t8=C_eqp(t4,lf[644]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8405,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_8405(t10,t8);}
else{
t10=C_eqp(t4,lf[472]);
if(C_truep(t10)){
t11=t9;
f_8405(t11,t10);}
else{
t11=C_eqp(t4,lf[637]);
if(C_truep(t11)){
t12=t9;
f_8405(t12,t11);}
else{
t12=C_eqp(t4,lf[642]);
if(C_truep(t12)){
t13=t9;
f_8405(t13,t12);}
else{
t13=C_eqp(t4,lf[643]);
t14=t9;
f_8405(t14,(C_truep(t13)?t13:C_eqp(t4,lf[645])));}}}}}}}

/* k4057 in k4044 in k4042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:409: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[2],lf[184],t1);}

/* k6868 in k6857 in k6849 in compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_fcall f_6870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6870,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1096: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[600],((C_word*)t0)[4],lf[601],((C_word*)t0)[4],lf[602]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[603]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_6881(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[617]);
if(C_truep(t4)){
t5=t3;
f_6881(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[618]);
if(C_truep(t5)){
t6=t3;
f_6881(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[619]);
t7=t3;
f_6881(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[620])));}}}}}

/* k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7926(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7926,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1221: ->string */
t4=*((C_word*)lf[732]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_7941(t5,C_eqp(lf[615],t4));}
else{
t4=t2;
f_7941(t4,C_SCHEME_FALSE);}}}

/* k6177 in doloop965 in k6166 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_ccall f_6178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6178,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_6169(t4,((C_word*)t0)[5],t2,t3);}

/* k7916 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1219: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[735],t1,lf[736],((C_word*)t0)[3]);}

/* k6849 in compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_fcall f_6851(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6851,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[597]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6859,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_6859(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[624]);
if(C_truep(t4)){
t5=t3;
f_6859(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[609]);
if(C_truep(t5)){
t6=t3;
f_6859(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[625]);
if(C_truep(t6)){
t7=t3;
f_6859(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[626]);
if(C_truep(t7)){
t8=t3;
f_6859(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[627]);
if(C_truep(t8)){
t9=t3;
f_6859(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[628]);
if(C_truep(t9)){
t10=t3;
f_6859(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t10)){
t11=t3;
f_6859(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[630]);
if(C_truep(t11)){
t12=t3;
f_6859(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[631]);
if(C_truep(t12)){
t13=t3;
f_6859(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[611]);
if(C_truep(t13)){
t14=t3;
f_6859(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t14)){
t15=t3;
f_6859(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[633]);
if(C_truep(t15)){
t16=t3;
f_6859(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[634]);
if(C_truep(t16)){
t17=t3;
f_6859(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[635]);
t18=t3;
f_6859(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[636])));}}}}}}}}}}}}}}}}

/* k6857 in k6849 in compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_fcall f_6859(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6859,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1094: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[598]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[599]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_6870(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[621]);
if(C_truep(t4)){
t5=t3;
f_6870(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[622]);
if(C_truep(t5)){
t6=t3;
f_6870(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[622]);
t7=t3;
f_6870(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[623])));}}}}}

/* k7901 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1217: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[733],t1,lf[734],((C_word*)t0)[3]);}

/* k4885 in k4712 in k4710 in k4708 */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:540: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k4878 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4725(t3,t2);}

/* compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_6841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6841,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=C_eqp(t5,lf[15]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6851,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_6851(t8,t6);}
else{
t8=C_eqp(t5,lf[472]);
if(C_truep(t8)){
t9=t7;
f_6851(t9,t8);}
else{
t9=C_eqp(t5,lf[637]);
if(C_truep(t9)){
t10=t7;
f_6851(t10,t9);}
else{
t10=C_eqp(t5,lf[638]);
if(C_truep(t10)){
t11=t7;
f_6851(t11,t10);}
else{
t11=C_eqp(t5,lf[12]);
if(C_truep(t11)){
t12=t7;
f_6851(t12,t11);}
else{
t12=C_eqp(t5,lf[565]);
if(C_truep(t12)){
t13=t7;
f_6851(t13,t12);}
else{
t13=C_eqp(t5,lf[639]);
if(C_truep(t13)){
t14=t7;
f_6851(t14,t13);}
else{
t14=C_eqp(t5,lf[640]);
if(C_truep(t14)){
t15=t7;
f_6851(t15,t14);}
else{
t15=C_eqp(t5,lf[641]);
if(C_truep(t15)){
t16=t7;
f_6851(t16,t15);}
else{
t16=C_eqp(t5,lf[642]);
if(C_truep(t16)){
t17=t7;
f_6851(t17,t16);}
else{
t17=C_eqp(t5,lf[643]);
if(C_truep(t17)){
t18=t7;
f_6851(t18,t17);}
else{
t18=C_eqp(t5,lf[644]);
t19=t7;
f_6851(t19,(C_truep(t18)?t18:C_eqp(t5,lf[645])));}}}}}}}}}}}}

/* k7400 */
static void C_ccall f_7401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1143: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],t1);}

/* k4897 in k4710 in k4708 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4713(t2,C_i_zerop(t1));}

/* k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_6839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6839,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6841,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7246,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1112: fold */
t6=*((C_word*)lf[431]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,((C_word*)t3)[1],lf[662],((C_word*)t0)[2],t1);}

/* k6830 in k6828 */
static void C_ccall f_6831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1080: foreign-callback-stub-return-type */
t3=*((C_word*)lf[665]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k6832 in k6830 in k6828 */
static void C_ccall f_6833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6835,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1081: foreign-callback-stub-argument-types */
t3=*((C_word*)lf[664]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_6835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6835,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6839,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1083: make-argument-list */
t4=*((C_word*)lf[295]+1);
f_6459(4,t4,t3,t2,lf[663]);}

/* k8662 in k8638 in k8629 in k8621 in k8429 in k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_fcall f_8664(C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8664,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[609]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[800]);}
else{
t4=C_eqp(t2,lf[611]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[801]);}
else{
t5=C_eqp(t2,lf[613]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[802]);}
else{
t6=C_eqp(t2,lf[614]);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[803]);}
else{
t7=C_eqp(t2,lf[612]);
if(C_truep(t7)){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[804]);}
else{
t8=C_eqp(t2,lf[608]);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1301: foreign-argument-conversion */
t10=*((C_word*)lf[173]+1);
f_8377(3,t10,((C_word*)t0)[3],t9);}
else{
t9=C_eqp(t2,lf[749]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[805]);}
else{
t10=C_eqp(t2,lf[606]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8726,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t12=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1304: foreign-type-declaration */
t13=*((C_word*)lf[174]+1);
f_7412(4,t13,t11,t12,lf[808]);}
else{
t11=C_eqp(t2,lf[615]);
if(C_truep(t11)){
t12=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:1307: string-append */
t13=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,((C_word*)t0)[3],lf[809],t12,lf[810]);}
else{
/* c-backend.scm:1308: err */
t12=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,((C_word*)t0)[3]);}}}}}}}}}}
else{
/* c-backend.scm:1309: err */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k6828 */
static void C_ccall f_6829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6831,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1079: real-name2 */
t3=*((C_word*)lf[595]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}

/* f_6826 in generate-foreign-callback-stubs in k2627 in k2550 in k2548 */
static void C_ccall f_6826(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6826,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6829,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1078: foreign-callback-stub-id */
t4=*((C_word*)lf[666]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* generate-foreign-callback-stubs in k2627 in k2550 in k2548 */
static void C_ccall f_6823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6823,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6826,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(t2,lf[57]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7341,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7341(t9,t1,t2);}

/* k6811 in for-each-loop1204 in generate-foreign-stubs in k2627 in k2550 in k2548 */
static void C_ccall f_6812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6803(t3,((C_word*)t0)[4],t2);}

/* k8638 in k8629 in k8621 in k8429 in k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_8639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8639,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8643,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:1291: g1792 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8664,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=((C_word*)t0)[3];
t4=C_u_i_length(t3);
t5=t2;
f_8664(t5,C_fixnum_greater_or_equal_p(t4,C_fix(2)));}
else{
t3=t2;
f_8664(t3,C_SCHEME_FALSE);}}}

/* k3132 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:182: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2653(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* for-each-loop1204 in generate-foreign-stubs in k2627 in k2550 in k2548 */
static void C_fcall f_6803(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6803,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6812,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1008: g1205 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4843 in k4841 in k4839 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:565: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[2],lf[266],((C_word*)t0)[3]);}

/* k4841 in k4839 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:564: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[267]);}

/* k4839 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4842,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:563: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,lf[268],t1,lf[269],C_SCHEME_TRUE);}

/* k8629 in k8621 in k8429 in k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_fcall f_8631(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8631,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[798]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[12]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[799]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* c-backend.scm:1291: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[616]+1),((C_word*)t0)[4]);}
else{
t4=t3;
f_8639(2,t4,C_SCHEME_FALSE);}}}}

/* k3168 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:191: gen */
t2=*((C_word*)lf[1]+1);
f_2554(7,t2,((C_word*)t0)[2],lf[70],((C_word*)t0)[3],lf[71],t1,C_make_character(41));}

/* for-each-loop632 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_fcall f_4855(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4855,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4864,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:548: g633 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3296(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3296,NULL,2,t0,t1);}
t2=(C_truep(t1)?C_i_cadddr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3658,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3661,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:235: find-lambda */
t6=((C_word*)((C_word*)t0)[15])[1];
f_2637(t6,t5,t1);}
else{
t4=t3;
f_3300(t4,C_SCHEME_FALSE);}}

/* k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t1,a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[15])){
t3=C_i_cddr(((C_word*)t0)[2]);
t4=C_i_pairp(t3);
t5=t2;
f_3296(t5,(C_truep(t4)?C_i_caddr(((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3296(t3,C_SCHEME_FALSE);}}

/* k8621 in k8429 in k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_fcall f_8623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8623,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[797]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[603]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_8631(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[617]);
if(C_truep(t4)){
t5=t3;
f_8631(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[618]);
if(C_truep(t5)){
t6=t3;
f_8631(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[619]);
t7=t3;
f_8631(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[620])));}}}}}

/* k4863 in for-each-loop632 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4855(t3,((C_word*)t0)[4],t2);}

/* ##compiler#foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7412,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7415,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7419,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=t2;
t7=C_eqp(t6,lf[640]);
if(C_truep(t7)){
/* c-backend.scm:1155: str */
t8=t5;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,lf[674]);}
else{
t8=C_eqp(t6,lf[15]);
t9=(C_truep(t8)?t8:C_eqp(t6,lf[644]));
if(C_truep(t9)){
/* c-backend.scm:1156: str */
t10=t5;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,lf[675]);}
else{
t10=C_eqp(t6,lf[641]);
t11=(C_truep(t10)?t10:C_eqp(t6,lf[645]));
if(C_truep(t11)){
/* c-backend.scm:1157: str */
t12=t5;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t1,lf[676]);}
else{
t12=C_eqp(t6,lf[642]);
t13=(C_truep(t12)?t12:C_eqp(t6,lf[625]));
if(C_truep(t13)){
/* c-backend.scm:1158: str */
t14=t5;
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t1,lf[677]);}
else{
t14=C_eqp(t6,lf[643]);
t15=(C_truep(t14)?t14:C_eqp(t6,lf[626]));
if(C_truep(t15)){
/* c-backend.scm:1159: str */
t16=t5;
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t1,lf[678]);}
else{
t16=C_eqp(t6,lf[472]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7483,a[2]=t5,a[3]=t1,a[4]=t6,a[5]=t3,a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_7483(t18,t16);}
else{
t18=C_eqp(t6,lf[628]);
t19=t17;
f_7483(t19,(C_truep(t18)?t18:C_eqp(t6,lf[12])));}}}}}}}

/* f_7415 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7415,2,t0,t1);}
/* c-backend.scm:1152: quit */
t2=*((C_word*)lf[671]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[672],((C_word*)t0)[2]);}

/* f_7419 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7419(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7419,3,t0,t1,t2);}
/* c-backend.scm:1153: string-append */
t3=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,lf[673],((C_word*)t0)[2]);}

/* literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5237(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5237,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5244,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:673: immediate? */
t4=*((C_word*)lf[349]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k7409 in k7374 in k7370 in k7368 in k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1140: gen */
t2=*((C_word*)lf[1]+1);
f_2554(10,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(32),t1,((C_word*)t0)[4],C_make_character(32),((C_word*)t0)[5],C_make_character(40));}

/* f_8643 in k8638 in k8629 in k8621 in k8429 in k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_8643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8643,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1293: foreign-argument-conversion */
t4=*((C_word*)lf[173]+1);
f_8377(3,t4,t1,t3);}
else{
t3=t2;
/* c-backend.scm:1293: foreign-argument-conversion */
t4=*((C_word*)lf[173]+1);
f_8377(3,t4,t1,t3);}}

/* k3994 in k3992 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:397: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[171]);}

/* k3992 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:396: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
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
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2676,2,t0,t1);}
t2=C_eqp(t1,lf[11]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_eqp(t3,lf[12]);
if(C_truep(t4)){
if(C_truep(C_i_cadr(((C_word*)t0)[2]))){
/* c-backend.scm:83: gen */
t5=*((C_word*)lf[1]+1);
f_2554(3,t5,((C_word*)t0)[3],lf[13]);}
else{
/* c-backend.scm:83: gen */
t5=*((C_word*)lf[1]+1);
f_2554(3,t5,((C_word*)t0)[3],lf[14]);}}
else{
t5=C_eqp(t3,lf[15]);
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[2]);
t7=C_fix(C_character_code(t6));
/* c-backend.scm:84: gen */
t8=*((C_word*)lf[1]+1);
f_2554(5,t8,((C_word*)t0)[3],lf[16],t7,C_make_character(41));}
else{
t6=C_eqp(t3,lf[17]);
if(C_truep(t6)){
/* c-backend.scm:85: gen */
t7=*((C_word*)lf[1]+1);
f_2554(3,t7,((C_word*)t0)[3],lf[18]);}
else{
t7=C_eqp(t3,lf[19]);
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:86: gen */
t9=*((C_word*)lf[1]+1);
f_2554(5,t9,((C_word*)t0)[3],lf[20],t8,C_make_character(41));}
else{
t8=C_eqp(t3,lf[21]);
if(C_truep(t8)){
/* c-backend.scm:87: gen */
t9=*((C_word*)lf[1]+1);
f_2554(3,t9,((C_word*)t0)[3],lf[22]);}
else{
/* c-backend.scm:88: bomb */
t9=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,((C_word*)t0)[3],lf[23]);}}}}}}
else{
t3=C_eqp(t1,lf[24]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_vectorp(t4))){
t5=C_i_vector_ref(t4,C_fix(0));
/* c-backend.scm:93: gen */
t6=*((C_word*)lf[1]+1);
f_2554(5,t6,((C_word*)t0)[3],lf[25],t5,lf[26]);}
else{
t5=C_u_i_car(((C_word*)t0)[2]);
/* c-backend.scm:94: gen */
t6=*((C_word*)lf[1]+1);
f_2554(5,t6,((C_word*)t0)[3],lf[27],t5,C_make_character(93));}}
else{
t4=C_eqp(t1,lf[28]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:97: gen */
t6=*((C_word*)lf[1]+1);
f_2554(4,t6,t5,C_SCHEME_TRUE,lf[31]);}
else{
t5=C_eqp(t1,lf[32]);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:106: gen */
t7=*((C_word*)lf[1]+1);
f_2554(4,t7,((C_word*)t0)[3],lf[33],t6);}
else{
t6=C_eqp(t1,lf[34]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[2]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2838,a[2]=t9,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_2838(t11,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[6],t7);}
else{
t7=C_eqp(t1,lf[35]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[2]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:119: gen */
t10=*((C_word*)lf[1]+1);
f_2554(5,t10,t9,C_SCHEME_TRUE,t8,C_make_character(61));}
else{
t8=C_eqp(t1,lf[36]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:125: gen */
t10=*((C_word*)lf[1]+1);
f_2554(3,t10,t9,lf[38]);}
else{
t9=C_eqp(t1,lf[39]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:130: gen */
t11=*((C_word*)lf[1]+1);
f_2554(3,t11,t10,lf[41]);}
else{
t10=C_eqp(t1,lf[42]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:135: gen */
t12=*((C_word*)lf[1]+1);
f_2554(3,t12,t11,lf[43]);}
else{
t11=C_eqp(t1,lf[44]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:142: gen */
t13=*((C_word*)lf[1]+1);
f_2554(3,t13,t12,lf[47]);}
else{
t12=C_eqp(t1,lf[48]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:149: gen */
t14=*((C_word*)lf[1]+1);
f_2554(3,t14,t13,lf[50]);}
else{
t13=C_eqp(t1,lf[51]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3018,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:156: gen */
t15=*((C_word*)lf[1]+1);
f_2554(3,t15,t14,lf[53]);}
else{
t14=C_eqp(t1,lf[54]);
if(C_truep(t14)){
t15=C_i_car(((C_word*)t0)[2]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=t15,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:164: gen */
t17=*((C_word*)lf[1]+1);
f_2554(5,t17,t16,lf[61],t15,C_make_character(44));}
else{
t15=C_eqp(t1,lf[62]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:174: gen */
t17=*((C_word*)lf[1]+1);
f_2554(3,t17,t16,lf[64]);}
else{
t16=C_eqp(t1,lf[65]);
if(C_truep(t16)){
t17=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:178: gen */
t18=*((C_word*)lf[1]+1);
f_2554(4,t18,((C_word*)t0)[3],C_make_character(116),t17);}
else{
t17=C_eqp(t1,lf[66]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t19=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:181: gen */
t20=*((C_word*)lf[1]+1);
f_2554(5,t20,t18,C_make_character(116),t19,C_make_character(61));}
else{
t18=C_eqp(t1,lf[67]);
if(C_truep(t18)){
t19=C_i_car(((C_word*)t0)[2]);
t20=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_caddr(((C_word*)t0)[2]))){
if(C_truep(t20)){
/* c-backend.scm:190: gen */
t21=*((C_word*)lf[1]+1);
f_2554(5,t21,((C_word*)t0)[3],lf[68],t19,lf[69]);}
else{
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3169,a[2]=((C_word*)t0)[3],a[3]=t19,tmp=(C_word)a,a+=4,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3172,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
t23=C_i_cadddr(((C_word*)t0)[2]);
/* c-backend.scm:192: ##sys#symbol->qualified-string */
t24=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t24+1)))(3,t24,t22,t23);}}
else{
if(C_truep(t20)){
/* c-backend.scm:194: gen */
t21=*((C_word*)lf[1]+1);
f_2554(5,t21,((C_word*)t0)[3],lf[74],t19,lf[75]);}
else{
/* c-backend.scm:195: gen */
t21=*((C_word*)lf[1]+1);
f_2554(5,t21,((C_word*)t0)[3],lf[76],t19,lf[77]);}}}
else{
t19=C_eqp(t1,lf[78]);
if(C_truep(t19)){
t20=C_i_car(((C_word*)t0)[2]);
t21=C_i_cadr(((C_word*)t0)[2]);
t22=C_i_caddr(((C_word*)t0)[2]);
t23=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t22,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t21)){
/* c-backend.scm:202: gen */
t24=*((C_word*)lf[1]+1);
f_2554(5,t24,t23,lf[82],t20,lf[83]);}
else{
/* c-backend.scm:203: gen */
t24=*((C_word*)lf[1]+1);
f_2554(5,t24,t23,lf[84],t20,lf[85]);}}
else{
t20=C_eqp(t1,lf[86]);
if(C_truep(t20)){
t21=C_i_car(((C_word*)t0)[2]);
t22=C_i_cadr(((C_word*)t0)[2]);
t23=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(t22)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3237,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3248,a[2]=t24,a[3]=t21,tmp=(C_word)a,a+=4,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:214: ##sys#symbol->qualified-string */
t27=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,t23);}
else{
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3264,a[2]=t24,a[3]=t21,tmp=(C_word)a,a+=4,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3267,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:219: ##sys#symbol->qualified-string */
t27=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,t23);}}
else{
t21=C_eqp(t1,lf[93]);
if(C_truep(t21)){
/* c-backend.scm:223: gen */
t22=*((C_word*)lf[1]+1);
f_2554(3,t22,((C_word*)t0)[3],lf[94]);}
else{
t22=C_eqp(t1,lf[95]);
if(C_truep(t22)){
t23=C_i_cdr(((C_word*)t0)[4]);
t24=C_i_length(t23);
t25=((C_word*)t0)[6];
t26=C_a_i_plus(&a,2,t24,C_fix(1));
t27=C_i_cdr(((C_word*)t0)[2]);
t28=C_i_pairp(t27);
t29=(C_truep(t28)?C_i_cadr(((C_word*)t0)[2]):C_SCHEME_FALSE);
t30=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=t23,a[7]=((C_word*)t0)[6],a[8]=t26,a[9]=((C_word*)t0)[5],a[10]=t24,a[11]=((C_word*)t0)[8],a[12]=t25,a[13]=t29,a[14]=((C_word*)t0)[9],a[15]=t28,tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:232: source-info->string */
t31=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t31+1)))(3,t31,t30,t29);}
else{
t23=C_eqp(t1,lf[150]);
if(C_truep(t23)){
t24=C_i_length(((C_word*)t0)[4]);
t25=C_a_i_plus(&a,2,t24,C_fix(1));
t26=C_i_car(((C_word*)t0)[2]);
t27=C_i_cadr(((C_word*)t0)[2]);
t28=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3813,a[2]=t26,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=t24,a[7]=((C_word*)t0)[4],a[8]=t25,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[7],a[11]=t27,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:323: lambda-literal-closure-size */
t29=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t29+1)))(3,t29,t28,((C_word*)t0)[8]);}
else{
t24=C_eqp(t1,lf[154]);
if(C_truep(t24)){
t25=C_i_cdr(((C_word*)t0)[4]);
t26=C_i_length(t25);
t27=C_a_i_plus(&a,2,t26,C_fix(1));
t28=C_i_caddr(((C_word*)t0)[2]);
t29=C_i_cadddr(((C_word*)t0)[2]);
t30=C_i_zerop(t29);
t31=C_i_not(t30);
t32=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t25,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],a[8]=t31,a[9]=t29,a[10]=t28,tmp=(C_word)a,a+=11,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3884,a[2]=t32,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:351: find-lambda */
t34=((C_word*)((C_word*)t0)[9])[1];
f_2637(t34,t33,t28);}
else{
t25=C_eqp(t1,lf[156]);
if(C_truep(t25)){
t26=C_i_length(((C_word*)t0)[4]);
t27=C_a_i_plus(&a,2,t26,C_fix(1));
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3899,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t29=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:368: gen */
t30=*((C_word*)lf[1]+1);
f_2554(8,t30,t28,C_SCHEME_TRUE,lf[158],t29,lf[159],t27,lf[160]);}
else{
t26=C_eqp(t1,lf[161]);
if(C_truep(t26)){
t27=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3915,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:373: gen */
t28=*((C_word*)lf[1]+1);
f_2554(4,t28,t27,C_SCHEME_TRUE,lf[163]);}
else{
t27=C_eqp(t1,lf[164]);
if(C_truep(t27)){
t28=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t29=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:378: gen */
t30=*((C_word*)lf[1]+1);
f_2554(4,t30,t28,t29,C_make_character(40));}
else{
t28=C_eqp(t1,lf[165]);
if(C_truep(t28)){
t29=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t30=C_i_car(((C_word*)t0)[2]);
t31=C_i_length(((C_word*)t0)[4]);
/* c-backend.scm:383: gen */
t32=*((C_word*)lf[1]+1);
f_2554(5,t32,t29,t30,lf[166],t31);}
else{
t29=C_eqp(t1,lf[167]);
if(C_truep(t29)){
t30=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t31=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:391: foreign-result-conversion */
t32=*((C_word*)lf[168]+1);
f_8967(4,t32,t30,t31,lf[169]);}
else{
t30=C_eqp(t1,lf[170]);
if(C_truep(t30)){
t31=C_i_cadr(((C_word*)t0)[2]);
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3993,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t33=C_u_i_car(((C_word*)t0)[2]);
t34=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4006,a[2]=t32,a[3]=t33,a[4]=t31,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:395: foreign-type-declaration */
t35=*((C_word*)lf[174]+1);
f_7412(4,t35,t34,t31,lf[175]);}
else{
t31=C_eqp(t1,lf[176]);
if(C_truep(t31)){
t32=C_i_car(((C_word*)t0)[2]);
t33=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4019,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t34=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t33,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:401: foreign-result-conversion */
t35=*((C_word*)lf[168]+1);
f_8967(4,t35,t34,t32,lf[181]);}
else{
t32=C_eqp(t1,lf[182]);
if(C_truep(t32)){
t33=C_i_car(((C_word*)t0)[2]);
t34=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4043,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t33,tmp=(C_word)a,a+=7,tmp);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4064,a[2]=t34,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:407: foreign-type-declaration */
t36=*((C_word*)lf[174]+1);
f_7412(4,t36,t35,t33,lf[187]);}
else{
t33=C_eqp(t1,lf[188]);
if(C_truep(t33)){
t34=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:414: gen */
t35=*((C_word*)lf[1]+1);
f_2554(3,t35,((C_word*)t0)[3],t34);}
else{
t34=C_eqp(t1,lf[189]);
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t36=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:417: gen */
t37=*((C_word*)lf[1]+1);
f_2554(5,t37,t35,lf[191],t36,C_make_character(61));}
else{
t35=C_eqp(t1,lf[192]);
if(C_truep(t35)){
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4103,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t37=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:422: gen */
t38=*((C_word*)lf[1]+1);
f_2554(4,t38,t36,t37,lf[193]);}
else{
t36=C_eqp(t1,lf[194]);
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:427: gen */
t38=*((C_word*)lf[1]+1);
f_2554(4,t38,t37,C_SCHEME_TRUE,lf[198]);}
else{
t37=C_eqp(t1,lf[199]);
if(C_truep(t37)){
t38=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4185,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:442: gen */
t39=*((C_word*)lf[1]+1);
f_2554(3,t39,t38,lf[201]);}
else{
t38=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4212,tmp=(C_word)a,a+=2,tmp);
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:450: g492 */
t40=t38;
((C_proc3)(void*)(*((C_word*)t40+1)))(3,t40,t39,((C_word*)t0)[10]);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* f_2670 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2670,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4083 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:418: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k4085 in k4083 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:419: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[190]);}

/* k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7483(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7483,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1160: str */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],lf[679]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[631]);
if(C_truep(t2)){
/* c-backend.scm:1161: str */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],lf[680]);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[637]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[629]));
if(C_truep(t4)){
/* c-backend.scm:1162: str */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],lf[681]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[634]);
if(C_truep(t5)){
/* c-backend.scm:1163: str */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,((C_word*)t0)[3],lf[682]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[633]);
if(C_truep(t6)){
/* c-backend.scm:1164: str */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[3],lf[683]);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[638]);
if(C_truep(t7)){
/* c-backend.scm:1165: str */
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,((C_word*)t0)[3],lf[684]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[627]);
if(C_truep(t8)){
/* c-backend.scm:1166: str */
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,((C_word*)t0)[3],lf[685]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[639]);
if(C_truep(t9)){
/* c-backend.scm:1167: str */
t10=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,((C_word*)t0)[3],lf[686]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[630]);
if(C_truep(t10)){
/* c-backend.scm:1168: str */
t11=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,((C_word*)t0)[3],lf[687]);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[597]);
if(C_truep(t11)){
/* c-backend.scm:1169: str */
t12=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,((C_word*)t0)[3],lf[688]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[624]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[4],lf[632]));
if(C_truep(t13)){
/* c-backend.scm:1170: str */
t14=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,((C_word*)t0)[3],lf[689]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[609]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_7588(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[611]);
if(C_truep(t16)){
t17=t15;
f_7588(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[757]);
t18=t15;
f_7588(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[758])));}}}}}}}}}}}}}}

/* k2640 in find-lambda in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* c-backend.scm:71: bomb */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[9],((C_word*)t0)[3]);}}

/* expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2649,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2653,a[2]=t6,a[3]=t8,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4292,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
/* c-backend.scm:459: expr */
t11=((C_word*)t6)[1];
f_2653(t11,t1,t2,t3);}

/* f_2656 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2656,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_2653(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2653,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2656,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2662,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:77: g117 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k3977 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_i_car(((C_word*)t0)[2]);
/* c-backend.scm:391: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[3],t1,t2,C_make_character(41));}

/* k4819 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:555: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[276]);}

/* k4821 in k4819 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:556: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[274]);}
else{
/* c-backend.scm:556: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[275]);}}

/* k4823 in k4821 in k4819 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:558: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[272]);}
else{
/* c-backend.scm:559: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[273]);}}

/* k4825 in k4823 in k4821 in k4819 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:560: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5244(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5244,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
t2=*((C_word*)lf[341]+1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[341]+1));}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(10));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* c-backend.scm:677: literal-size */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5237(t5,t2,t4);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5296,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5299,a[2]=t4,a[3]=t8,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:678: vector->list */
t10=*((C_word*)lf[344]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:679: block-variable-literal? */
t3=*((C_word*)lf[348]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}}}}}}

/* k7386 */
static void C_ccall f_7387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* c-backend.scm:1144: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,((C_word*)t0)[3],C_make_character(44));}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3106 in k3104 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:176: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[63]);}

/* f_7384 in k7376 in k7374 in k7370 in k7368 in k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7384(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7384,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7387,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7401,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(t3);
t7=C_i_car(t2);
/* c-backend.scm:1143: foreign-type-declaration */
t8=*((C_word*)lf[174]+1);
f_7412(4,t8,t5,t6,t7);}

/* k3104 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:175: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k7378 in k7376 in k7374 in k7370 in k7368 in k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1146: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* doloop1047 in k5780 in k5778 in k5776 in k5774 in k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in ... */
static void C_fcall f_5797(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5797,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5806,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:894: gen */
t5=*((C_word*)lf[1]+1);
f_2554(6,t5,t4,C_SCHEME_TRUE,lf[372],t2,C_make_character(59));}}

/* k7374 in k7370 in k7368 in k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7377,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7410,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1140: foreign-type-declaration */
t4=*((C_word*)lf[174]+1);
f_7412(4,t4,t3,((C_word*)t0)[7],lf[667]);}

/* k7376 in k7374 in k7370 in k7368 in k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7384,tmp=(C_word)a,a+=2,tmp);
/* c-backend.scm:1141: pair-for-each */
t4=*((C_word*)lf[203]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k7370 in k7368 in k7366 in k7364 in generate-foreign-callback-header in k2627 in k2550 in k2548 */
static void C_ccall f_7371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7371,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7375,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1139: make-argument-list */
t4=*((C_word*)lf[295]+1);
f_6459(4,t4,t3,t2,lf[668]);}

/* ##compiler#generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_2631,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2635,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=t3,a[6]=t8,a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t10=C_a_i_plus(&a,2,*((C_word*)lf[519]+1),C_fix(1));
/* c-backend.scm:64: flonum-print-precision */
t11=*((C_word*)lf[520]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}

/* k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
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
t26=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t27=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t28=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4496,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t30=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t32=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5190,a[2]=t19,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t33=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5237,a[2]=t17,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5409,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5535,a[2]=t23,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5599,tmp=(C_word)a,a+=2,tmp));
t37=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5664,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t15,a[5]=t17,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp));
t38=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t25,a[7]=t13,a[8]=((C_word*)t0)[6],a[9]=t11,a[10]=t9,a[11]=t7,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:914: debugging */
t39=*((C_word*)lf[498]+1);
((C_proc4)(void*)(*((C_word*)t39+1)))(4,t39,t38,lf[517],lf[518]);}

/* find-lambda in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_2637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2637,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2641,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:70: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k5220 in k5218 in doloop830 in literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:667: write */
t3=*((C_word*)lf[338]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[6]);}

/* k5227 in k5224 in k5222 in k5220 in k5218 in doloop830 in literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:667: gen-lit */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5409(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5224 in k5222 in k5220 in k5218 in doloop830 in literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:667: get-output-string */
t3=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5222 in k5220 in k5218 in doloop830 in literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[6]);}

/* k5782 in k5780 in k5778 in k5776 in k5774 in k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in ... */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_greaterp(((C_word*)t0)[2],C_fix(0)))){
/* c-backend.scm:895: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[370],((C_word*)t0)[2],lf[371]);}
else{
t2=((C_word*)t0)[3];
f_5737(2,t2,C_SCHEME_UNDEFINED);}}

/* k5780 in k5778 in k5776 in k5774 in k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in ... */
static void C_ccall f_5781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5797,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5797(t7,t2,t3,((C_word*)t0)[5]);}

/* k2601 in gen-list in k2550 in k2548 */
static void C_ccall f_2602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2602,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2607,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2607(t5,((C_word*)t0)[3],t1);}

/* for-each-loop47 in k2601 in gen-list in k2550 in k2548 */
static void C_fcall f_2607(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2607,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2616,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:47: g48 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2615 in for-each-loop47 in k2601 in gen-list in k2550 in k2548 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2607(t3,((C_word*)t0)[4],t2);}

/* k5204 in doloop830 in literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5205,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=((C_word*)((C_word*)t0)[4])[1];
f_5196(t5,((C_word*)t0)[5],t2,t4);}

/* f_2663 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2663,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9074 in k9072 in k9070 in k9068 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1329: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9070 in k9068 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1329: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2663,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2669,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:78: g120 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* k9072 in k9070 in k9068 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1329: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[821],((C_word*)t0)[4]);}

/* k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2670,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2676,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:79: g128 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* f_8970 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_8970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8970,2,t0,t1);}
/* c-backend.scm:1315: quit */
t2=*((C_word*)lf[671]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[811],((C_word*)t0)[2]);}

/* k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in ... */
static void C_ccall f_5759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:875: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,lf[388],((C_word*)t0)[7],lf[389]);}

/* k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_fcall f_5754(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5754,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5759,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[9],C_fix(0)))){
/* c-backend.scm:874: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,C_SCHEME_TRUE,lf[390],lf[391],((C_word*)t0)[5],C_make_character(114));}
else{
/* c-backend.scm:874: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,C_SCHEME_TRUE,lf[392],lf[391],((C_word*)t0)[5],C_make_character(114));}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5837,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[9],C_fix(0)))){
/* c-backend.scm:897: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,lf[396],lf[397]);}
else{
/* c-backend.scm:897: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,lf[398],lf[397]);}}}
else{
t2=((C_word*)t0)[4];
f_5737(2,t2,C_SCHEME_UNDEFINED);}}

/* k4005 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:395: foreign-argument-conversion */
t3=*((C_word*)lf[173]+1);
f_8377(3,t3,t2,((C_word*)t0)[4]);}

/* k4008 in k4005 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:395: gen */
t2=*((C_word*)lf[1]+1);
f_2554(8,t2,((C_word*)t0)[2],C_make_character(40),((C_word*)t0)[3],lf[172],((C_word*)t0)[4],C_make_character(41),t1);}

/* k5744 in k5736 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in ... */
static void C_ccall f_5745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5745,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:905: expression */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2649(t3,((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
/* c-backend.scm:905: expression */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2649(t3,((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}}

/* k4018 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:402: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k5218 in doloop830 in literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5219,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:667: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[339],t2);}

/* k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in ... */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:885: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,lf[378],((C_word*)t0)[4],lf[379]);}

/* k5776 in k5774 in k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in ... */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:889: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,lf[374],((C_word*)t0)[4],lf[375]);}

/* k5778 in k5776 in k5774 in k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in ... */
static void C_ccall f_5779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:890: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[373]);}

/* k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in ... */
static void C_ccall f_5773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:887: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[376],((C_word*)t0)[7],lf[377]);}

/* k5774 in k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in ... */
static void C_ccall f_5775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[6]);}

/* k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in ... */
static void C_ccall f_5761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[8],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5826,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:877: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,t3,C_make_character(44),((C_word*)t0)[8],C_make_character(44));}
else{
t3=t2;
f_5763(2,t3,C_SCHEME_UNDEFINED);}}

/* k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in ... */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:883: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[7],lf[381]);}

/* k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in ... */
static void C_ccall f_5769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5818,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5821,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:884: make-argument-list */
t5=*((C_word*)lf[295]+1);
f_6459(4,t5,t4,((C_word*)t0)[4],lf[380]);}

/* k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in ... */
static void C_ccall f_5763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:879: gen */
t3=*((C_word*)lf[1]+1);
f_2554(9,t3,t2,lf[384],C_SCHEME_TRUE,lf[385],C_SCHEME_TRUE,lf[386],((C_word*)t0)[4],lf[387]);}

/* k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in ... */
static void C_ccall f_5765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:882: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[382],((C_word*)t0)[4],lf[383]);}

/* for-each-loop549 in k4375 in k4362 in k4360 in k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4385(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4385,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4394,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:491: g550 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2627 in k2550 in k2548 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##compiler#unique-id ...) */,t1);
t3=C_mutate((C_word*)lf[7]+1 /* (set! ##compiler#generate-code ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2631,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[511]+1 /* (set! emit-procedure-table-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6316,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[497]+1 /* (set! ##compiler#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6365,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[284]+1 /* (set! ##compiler#make-variable-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6445,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[295]+1 /* (set! ##compiler#make-argument-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6459,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[515]+1 /* (set! ##compiler#generate-external-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6473,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[207]+1 /* (set! ##compiler#generate-foreign-callback-stub-prototypes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6521,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[513]+1 /* (set! ##compiler#generate-foreign-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6559,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[512]+1 /* (set! generate-foreign-callback-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6823,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[547]+1 /* (set! ##compiler#generate-foreign-callback-header ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7361,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[174]+1 /* (set! ##compiler#foreign-type-declaration ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7412,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[173]+1 /* (set! ##compiler#foreign-argument-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8377,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[168]+1 /* (set! ##compiler#foreign-result-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8967,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[363]+1 /* (set! ##compiler#encode-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9618,tmp=(C_word)a,a+=2,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* k4393 in for-each-loop549 in k4375 in k4362 in k4360 in k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4385(t3,((C_word*)t0)[4],t2);}

/* k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(lf[265],((C_word*)t0)[10]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6246,a[2]=t2,a[3]=((C_word*)t0)[18],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:779: gen */
t5=*((C_word*)lf[1]+1);
f_2554(3,t5,t4,lf[489]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6228,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:772: gen */
t5=*((C_word*)lf[1]+1);
f_2554(3,t5,t4,lf[494]);}}

/* k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6260,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:770: cleanup */
t4=*((C_word*)lf[497]+1);
f_6365(3,t4,t3,((C_word*)t0)[24]);}

/* k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 in ... */
static void C_ccall f_5717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[13])){
t3=t2;
f_5719(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:788: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[481]);}}

/* k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:787: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(40));}

/* k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in ... */
static void C_ccall f_5719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6203,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[14])){
t4=C_i_zerop(((C_word*)t0)[7]);
t5=t3;
f_6203(t5,C_i_not(t4));}
else{
t4=t3;
f_6203(t4,C_SCHEME_FALSE);}}

/* k9048 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9049,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9051,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1325: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[820],t2);}

/* map-loop1702 in k7971 in k7954 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 in ... */
static void C_fcall f_7993(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7993,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8018,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1233: g1708 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7989 in k7971 in k7954 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 in ... */
static void C_ccall f_7991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1232: string-intersperse */
t2=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[746]);}

/* k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
/* c-backend.scm:764: lambda-literal-unboxed-temporaries */
t3=*((C_word*)lf[503]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* ##compiler#foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_8967(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8967,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8970,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_eqp(t5,lf[15]);
t7=(C_truep(t6)?t6:C_eqp(t5,lf[641]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[812]);}
else{
t8=C_eqp(t5,lf[472]);
t9=(C_truep(t8)?t8:C_eqp(t5,lf[637]));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[813]);}
else{
t10=C_eqp(t5,lf[642]);
t11=(C_truep(t10)?t10:C_eqp(t5,lf[643]));
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[814]);}
else{
t12=C_eqp(t5,lf[638]);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[815]);}
else{
t13=C_eqp(t5,lf[639]);
if(C_truep(t13)){
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[816]);}
else{
t14=C_eqp(t5,lf[644]);
if(C_truep(t14)){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[817]);}
else{
t15=C_eqp(t5,lf[645]);
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[818]);}
else{
t16=C_eqp(t5,lf[597]);
t17=(C_truep(t16)?t16:C_eqp(t5,lf[624]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9031,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1324: open-output-string */
t19=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}
else{
t18=C_eqp(t5,lf[632]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9049,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1325: open-output-string */
t20=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t19);}
else{
t19=C_eqp(t5,lf[603]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9067,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_9067(t21,t19);}
else{
t21=C_eqp(t5,lf[599]);
if(C_truep(t21)){
t22=t20;
f_9067(t22,t21);}
else{
t22=C_eqp(t5,lf[611]);
if(C_truep(t22)){
t23=t20;
f_9067(t23,t22);}
else{
t23=C_eqp(t5,lf[621]);
if(C_truep(t23)){
t24=t20;
f_9067(t24,t23);}
else{
t24=C_eqp(t5,lf[617]);
if(C_truep(t24)){
t25=t20;
f_9067(t25,t24);}
else{
t25=C_eqp(t5,lf[622]);
if(C_truep(t25)){
t26=t20;
f_9067(t26,t25);}
else{
t26=C_eqp(t5,lf[623]);
if(C_truep(t26)){
t27=t20;
f_9067(t27,t26);}
else{
t27=C_eqp(t5,lf[618]);
if(C_truep(t27)){
t28=t20;
f_9067(t28,t27);}
else{
t28=C_eqp(t5,lf[619]);
if(C_truep(t28)){
t29=t20;
f_9067(t29,t28);}
else{
t29=C_eqp(t5,lf[620]);
if(C_truep(t29)){
t30=t20;
f_9067(t30,t29);}
else{
t30=C_eqp(t5,lf[635]);
t31=t20;
f_9067(t31,(C_truep(t30)?t30:C_eqp(t5,lf[636])));}}}}}}}}}}}}}}}}}}}}

/* k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t1,a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
/* c-backend.scm:763: lambda-literal-temporaries */
t3=*((C_word*)lf[101]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_5709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t1,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[19])){
/* c-backend.scm:768: debugging */
t3=*((C_word*)lf[498]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[499],lf[500],((C_word*)t0)[10]);}
else{
t3=t2;
f_5709(2,t3,C_SCHEME_UNDEFINED);}}

/* k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=t1,a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(*((C_word*)lf[214]+1))){
/* c-backend.scm:766: string-append */
t3=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[214]+1),lf[501]);}
else{
t3=t2;
f_5707(2,t3,lf[502]);}}

/* k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_5711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
/* c-backend.scm:769: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k9052 in k9050 in k9048 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k9050 in k9048 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9053,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1325: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9054 in k9052 in k9050 in k9048 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1325: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in ... */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* c-backend.scm:798: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[464],((C_word*)t0)[4],C_make_character(59));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6127,a[2]=((C_word*)t0)[23],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6167,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[21])){
t5=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t6=t4;
f_6167(t6,C_a_i_plus(&a,2,((C_word*)t0)[8],t5));}
else{
t5=t4;
f_6167(t5,((C_word*)t0)[8]);}}}

/* k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in ... */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=C_eqp(lf[265],((C_word*)t0)[10]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5890,a[2]=((C_word*)t0)[16],a[3]=t2,a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[18],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5936,a[2]=((C_word*)t0)[19],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:809: fold */
t6=*((C_word*)lf[431]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,C_fix(0),((C_word*)t0)[16]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5947,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[20],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:837: gen */
t5=*((C_word*)lf[1]+1);
f_2554(4,t5,t4,C_SCHEME_TRUE,lf[445]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6003,a[2]=((C_word*)t0)[21],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[22],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
t5=((C_word*)t0)[14];
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_greaterp(((C_word*)t0)[7],C_fix(0)));
if(C_truep(t6)){
if(C_truep(((C_word*)t0)[21])){
/* c-backend.scm:851: gen */
t7=*((C_word*)lf[1]+1);
f_2554(10,t7,t4,C_SCHEME_TRUE,lf[455],C_SCHEME_TRUE,lf[456],C_SCHEME_TRUE,lf[457],((C_word*)t0)[7],lf[458]);}
else{
/* c-backend.scm:854: gen */
t7=*((C_word*)lf[1]+1);
f_2554(6,t7,t4,C_SCHEME_TRUE,lf[459],((C_word*)t0)[7],lf[460]);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6090,a[2]=((C_word*)t0)[21],a[3]=t4,a[4]=((C_word*)t0)[14],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[14])){
t8=t7;
f_6090(2,t8,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:856: gen */
t8=*((C_word*)lf[1]+1);
f_2554(4,t8,t7,C_SCHEME_TRUE,lf[463]);}}}}}

/* k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_ccall f_5735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5754,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t4=C_eqp(lf[265],((C_word*)t0)[10]);
if(C_truep(t4)){
t5=t3;
f_5754(t5,C_SCHEME_FALSE);}
else{
t5=((C_word*)t0)[14];
if(C_truep(t5)){
t6=t3;
f_5754(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t6)){
t7=t3;
f_5754(t7,t6);}
else{
t7=((C_word*)t0)[15];
t8=t3;
f_5754(t8,(C_truep(t7)?t7:C_i_greaterp(((C_word*)t0)[7],C_fix(0))));}}}}

/* k5736 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_ccall f_5737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5745,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:906: lambda-literal-body */
t4=*((C_word*)lf[369]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k5738 in k5736 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in ... */
static void C_ccall f_5739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:911: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* f_4377 in k4375 in k4362 in k4360 in k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4377(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4377,3,t0,t1,t2);}
/* c-backend.scm:491: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t1,C_SCHEME_TRUE,t2);}

/* k4375 in k4362 in k4360 in k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4377,tmp=(C_word)a,a+=2,tmp);
t3=*((C_word*)lf[209]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4385,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4385(t7,((C_word*)t0)[2],*((C_word*)lf[209]+1));}

/* k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_fcall f_9067(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9067,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1329: open-output-string */
t3=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[609]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1330: open-output-string */
t4=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[628]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[629]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1331: open-output-string */
t6=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[634]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[633]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1332: open-output-string */
t8=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[631]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1333: open-output-string */
t9=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[625]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[626]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1334: open-output-string */
t11=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[627]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1335: open-output-string */
t12=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[630]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1336: open-output-string */
t13=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[12]);
if(C_truep(t12)){
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[832]);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[565]);
t14=(C_truep(t13)?t13:C_eqp(((C_word*)t0)[4],lf[640]));
if(C_truep(t14)){
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[833]);}
else{
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9227,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
/* c-backend.scm:1340: ##sys#hash-table-ref */
t16=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,*((C_word*)lf[616]+1),((C_word*)t0)[5]);}
else{
t16=t15;
f_9227(2,t16,C_SCHEME_FALSE);}}}}}}}}}}}}

/* k9068 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9069,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9071,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1329: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[822],t2);}

/* k3263 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:218: gen */
t2=*((C_word*)lf[1]+1);
f_2554(7,t2,((C_word*)t0)[2],lf[90],((C_word*)t0)[3],lf[91],t1,lf[92]);}

/* k6325 in k6323 in k6321 in k6319 in emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:944: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[528]);}

/* k3266 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:219: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6323 in k6321 in k6319 in emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:943: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[529]);}

/* k6321 in k6319 in emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:942: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[530]);}

/* k6319 in emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6333,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:933: ##sys#hash-table-for-each */
t4=*((C_word*)lf[288]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k6327 in k6325 in k6323 in k6321 in k6319 in emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:945: gen */
t2=*((C_word*)lf[1]+1);
f_2554(15,t2,((C_word*)t0)[2],lf[521],C_SCHEME_TRUE,lf[522],C_SCHEME_TRUE,lf[523],C_SCHEME_TRUE,lf[524],C_SCHEME_TRUE,lf[525],C_SCHEME_TRUE,lf[526],C_SCHEME_TRUE,lf[527]);}

/* k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in ... */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[9]);}

/* k4063 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:407: gen */
t2=*((C_word*)lf[1]+1);
f_2554(5,t2,((C_word*)t0)[2],lf[185],t1,lf[186]);}

/* k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in ... */
static void C_ccall f_5723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* c-backend.scm:793: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[479]);}
else{
t3=t2;
f_5725(2,t3,C_SCHEME_UNDEFINED);}}

/* k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in ... */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:794: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[478]);}

/* k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in ... */
static void C_ccall f_5727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5727,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5729,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(((C_word*)t0)[22],lf[254]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t5=t2;
f_5729(t5,t4);}
else{
t4=t2;
f_5729(t4,C_SCHEME_UNDEFINED);}}

/* k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in ... */
static void C_fcall f_5729(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5729,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm:796: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[477]);}

/* emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6316,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6320,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6363,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:932: ##sys#hash-table-size */
t6=*((C_word*)lf[541]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2582 in for-each-loop27 in gen in k2550 in k2548 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2574(t3,((C_word*)t0)[4],t2);}

/* k6303 in k6301 in k6299 in k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:923: procedures */
t3=((C_word*)((C_word*)t0)[5])[1];
f_5664(t3,t2);}

/* k6305 in k6303 in k6301 in k6299 in k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:924: emit-procedure-table-info */
t3=*((C_word*)lf[511]+1);
f_6316(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3247 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:213: gen */
t2=*((C_word*)lf[1]+1);
f_2554(7,t2,((C_word*)t0)[2],lf[87],((C_word*)t0)[3],lf[88],t1,lf[89]);}

/* k6299 in k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:921: generate-foreign-callback-stubs */
t3=*((C_word*)lf[512]+1);
f_6823(4,t3,t2,*((C_word*)lf[208]+1),((C_word*)t0)[7]);}

/* k6301 in k6299 in k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:922: trampolines */
t3=((C_word*)((C_word*)t0)[6])[1];
f_4900(t3,t2);}

/* k6307 in k6305 in k6303 in k6301 in k6299 in k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_6308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6308,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4491,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4494,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:498: get-output-string */
t5=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,*((C_word*)lf[510]+1));}

/* f_2597 in gen-list in k2550 in k2548 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2597,3,t0,t1,t2);}
/* c-backend.scm:49: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[0]+1));}

/* ##compiler#gen-list in k2550 in k2548 */
static void C_ccall f_2594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2594,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2597,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2602,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:50: intersperse */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_make_character(32));}

/* k3254 in k3252 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:221: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3250 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:214: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3252 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:220: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k6362 in emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6363,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,C_fix(1));
/* c-backend.scm:931: gen */
t3=*((C_word*)lf[1]+1);
f_2554(9,t3,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[538],C_SCHEME_TRUE,lf[539],t2,lf[540]);}

/* ##compiler#cleanup in k2627 in k2550 in k2548 */
static void C_ccall f_6365(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6365,3,t0,t1,t2);}
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_string_length(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6374,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_6374(t9,t1,C_fix(0));}

/* k9030 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9031,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9033,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1324: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[819],t2);}

/* k9032 in k9030 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1324: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9034 in k9032 in k9030 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k9036 in k9034 in k9032 in k9030 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1324: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_6890 in k6885 in k6879 in k6868 in k6857 in k6849 in compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_6890(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6890,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1102: compute-size */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6841(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t3=t2;
/* c-backend.scm:1102: compute-size */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6841(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k3236 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:215: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k3238 in k3236 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:216: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k6356 */
static void C_ccall f_6357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:935: gen */
t2=*((C_word*)lf[1]+1);
f_2554(8,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[535],((C_word*)t0)[3],C_make_character(58),t1,lf[536]);}

/* k5025 in k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5026(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5026,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[57]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5031,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5060,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5060(t8,t4,t2);}

/* k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:660: emitter */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4936(t3,t2,C_SCHEME_FALSE);}

/* k2548 */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* for-each-loop294 in k3359 in k3352 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3373(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3373,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3382,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:257: g295 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* ##compiler#gen in k2550 in k2548 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_2554r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2554r(t0,t1,t2);}}

static void C_ccall f_2554r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2557,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2574,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2574(t7,t1,t2);}

/* k2550 in k2548 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=C_set_block_item(lf[0] /* ##compiler#output */,0,C_SCHEME_FALSE);
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##compiler#gen ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2554,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! ##compiler#gen-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2594,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9877,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: open-output-string */
t7=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k3201 in k3199 in k3197 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:206: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3199 in k3197 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:205: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* f_2557 in gen in k2550 in k2548 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2557,3,t0,t1,t2);}
t3=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t3)){
/* c-backend.scm:43: newline */
t4=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,*((C_word*)lf[0]+1));}
else{
/* c-backend.scm:44: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,*((C_word*)lf[0]+1));}}

/* k3381 in for-each-loop294 in k3359 in k3352 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 in ... */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3373(t4,((C_word*)t0)[5],t2,t3);}

/* k3213 in k3197 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:204: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_6333 in k6319 in emit-procedure-table-info in k2627 in k2550 in k2548 */
static void C_ccall f_6333(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6333,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6336,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6357,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:935: string->c-identifier */
t6=*((C_word*)lf[537]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k6335 */
static void C_ccall f_6336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(lf[265],((C_word*)t0)[2]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[214]+1))){
/* c-backend.scm:938: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[3],lf[531],*((C_word*)lf[214]+1),lf[532]);}
else{
/* c-backend.scm:939: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,((C_word*)t0)[3],lf[533]);}}
else{
/* c-backend.scm:940: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[534]);}}

/* k3210 in k3197 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:204: gen */
t2=*((C_word*)lf[1]+1);
f_2554(5,t2,((C_word*)t0)[2],lf[79],t1,lf[80]);}

/* trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4900(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4900,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4904,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4936,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4998,a[2]=t7,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5100,a[2]=t7,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:627: ##sys#hash-table-for-each */
t14=*((C_word*)lf[288]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,((C_word*)t0)[2]);}

/* restore in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4904(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4904,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4908,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_minus(&a,2,t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4916,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4916(t8,t3,t4,C_fix(0));}

/* k4907 in restore in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:603: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[289],((C_word*)t0)[3],lf[290]);}

/* for-each-loop27 in gen in k2550 in k2548 */
static void C_fcall f_2574(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2574,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2583,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:39: g28 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3317 in k3314 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:244: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* for-each-loop810 in k5032 in k5029 in k5025 in k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5040(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5040,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5049,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:661: g811 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3314 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(t1);
/* c-backend.scm:243: gen */
t4=*((C_word*)lf[1]+1);
f_2554(7,t4,t2,C_SCHEME_TRUE,t3,C_make_character(40),((C_word*)t0)[6],lf[97]);}

/* f_3310 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3310,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k5048 in for-each-loop810 in k5032 in k5029 in k5025 in k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5040(t3,((C_word*)t0)[4],t2);}

/* k5032 in k5029 in k5025 in k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5033,2,t0,t1);}
t2=C_i_check_list_2(C_SCHEME_END_OF_LIST,lf[57]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5040,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5040(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5029 in k5025 in k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:661: emitter */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4936(t3,t2,C_SCHEME_TRUE);}

/* k3320 in k3317 in k3314 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:245: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[96]);}

/* k9773 in k9726 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1403: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[855],t1,lf[856]);}

/* k4924 in doloop721 in restore in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4925,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4916(t4,((C_word*)t0)[5],t2,t3);}

/* k4360 in k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[206]+1))){
/* c-backend.scm:488: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[207]+1);
f_6521(3,t3,t2,*((C_word*)lf[208]+1));}
else{
t3=t2;
f_4363(2,t3,C_SCHEME_UNDEFINED);}}

/* k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in ... */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(*((C_word*)lf[214]+1))){
t3=t2;
f_5897(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5922,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[421]+1))){
/* c-backend.scm:818: gen */
t4=*((C_word*)lf[1]+1);
f_2554(8,t4,t3,C_SCHEME_TRUE,lf[422],*((C_word*)lf[421]+1),lf[423],C_SCHEME_TRUE,lf[424]);}
else{
t4=t3;
f_5922(2,t4,C_SCHEME_UNDEFINED);}}}

/* k4362 in k4360 in k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[209]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4376,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:490: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t3,C_SCHEME_TRUE);}
else{
if(C_truep(*((C_word*)lf[206]+1))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* c-backend.scm:493: generate-foreign-callback-stub-prototypes */
t3=*((C_word*)lf[207]+1);
f_6521(3,t3,((C_word*)t0)[2],*((C_word*)lf[208]+1));}}}

/* k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_ccall f_5893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(*((C_word*)lf[425]+1))){
/* c-backend.scm:815: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[426]);}
else{
t3=t2;
f_5895(2,t3,C_SCHEME_UNDEFINED);}}

/* k4364 in k4362 in k4360 in k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(*((C_word*)lf[206]+1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* c-backend.scm:493: generate-foreign-callback-stub-prototypes */
t2=*((C_word*)lf[207]+1);
f_6521(3,t2,((C_word*)t0)[2],*((C_word*)lf[208]+1));}}

/* k5898 in k5896 in k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in ... */
static void C_ccall f_5899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:827: gen */
t3=*((C_word*)lf[1]+1);
f_2554(14,t3,t2,C_SCHEME_TRUE,lf[405],((C_word*)t0)[6],lf[406],C_SCHEME_TRUE,lf[407],C_SCHEME_TRUE,lf[408],((C_word*)t0)[6],lf[409],C_SCHEME_TRUE,lf[410]);}

/* k5896 in k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in ... */
static void C_ccall f_5897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:822: gen */
t3=*((C_word*)lf[1]+1);
f_2554(16,t3,t2,C_SCHEME_TRUE,lf[411],((C_word*)t0)[5],lf[412],C_SCHEME_TRUE,lf[413],((C_word*)t0)[5],lf[414],C_SCHEME_TRUE,lf[415],C_SCHEME_TRUE,lf[416],C_SCHEME_TRUE,lf[417]);}

/* k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_ccall f_5890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5890,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5893,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:811: gen */
t5=*((C_word*)lf[1]+1);
f_2554(10,t5,t4,C_SCHEME_TRUE,lf[427],C_SCHEME_TRUE,lf[428],C_SCHEME_TRUE,lf[429],((C_word*)t0)[6],lf[430]);}

/* k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3631,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:241: g251 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* k4974 in k4963 in k4961 in k4959 in k4957 in k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:624: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k4971 in k4963 in k4961 in k4959 in k4957 in k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3300(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3300,NULL,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[15])){
if(C_truep(*((C_word*)lf[142]+1))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3646,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:239: slashify */
t5=*((C_word*)lf[145]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[16]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3652,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:240: uncommentify */
t5=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[16]);}}
else{
t4=t3;
f_3303(2,t4,C_SCHEME_UNDEFINED);}}

/* k3352 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3355,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:259: iota */
t5=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[6],C_fix(1),C_fix(1));}

/* f_3355 in k3352 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3355,4,t0,t1,t2,t3);}
/* c-backend.scm:258: gen */
t4=*((C_word*)lf[1]+1);
f_2554(8,t4,t1,C_SCHEME_TRUE,C_make_character(116),t3,lf[98],t2,C_make_character(59));}

/* k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4341(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4341,2,t0,t1);}
t2=C_i_vector_ref(t1,C_fix(1));
t3=C_i_vector_ref(t1,C_fix(2));
t4=C_i_vector_ref(t1,C_fix(3));
t5=C_i_vector_ref(t1,C_fix(4));
t6=C_i_vector_ref(t1,C_fix(5));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_plus(&a,2,C_fix(1900),t6);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4420,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t10=C_a_i_plus(&a,2,t5,C_fix(1));
/* c-backend.scm:474: pad0 */
f_4325(t9,t10);}

/* k9726 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9728(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9728,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9774,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* ##sys#fixnum->string */
t4=*((C_word*)lf[857]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-24));
t3=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-16));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_a_i_arithmetic_shift(&a,2,((C_word*)t0)[3],C_fix(-8));
t9=C_a_i_bitwise_and(&a,2,C_fix(255),t8);
t10=C_make_character(C_unfix(t9));
t11=((C_word*)t0)[3];
t12=C_fixnum_and(C_fix(255),t11);
t13=C_make_character(C_unfix(t12));
t14=C_a_i_string(&a,4,t4,t7,t10,t13);
/* ##sys#string-append */
t15=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,((C_word*)t0)[2],lf[858],t14);}}

/* k3364 in k3361 in k3359 in k3352 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 in ... */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:261: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[99]);}

/* k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:620: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[3],lf[300]);}

/* k4957 in k4955 in k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:621: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[299]);}
else{
t3=t2;
f_4960(2,t3,C_SCHEME_UNDEFINED);}}

/* k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:615: restore */
f_4904(t2,((C_word*)t0)[3]);}

/* k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:616: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[303]);}

/* k4953 in k4951 in k4949 in k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:618: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[301]);}
else{
/* c-backend.scm:619: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[302]);}}

/* k3361 in k3359 in k3352 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:261: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[99]);}
else{
/* c-backend.scm:260: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[100],((C_word*)t0)[4],C_make_character(59));}}

/* k3359 in k3352 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3373,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3373(t6,t2,((C_word*)t0)[6],t1);}

/* k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_fcall f_8405(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8405,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[762]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[638]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[763]);}
else{
t3=C_eqp(((C_word*)t0)[3],lf[639]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[764]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[630]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[765]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[624]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_8431(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[632]);
t8=t6;
f_8431(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[597])));}}}}}}

/* k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:480: gen-list */
t3=*((C_word*)lf[4]+1);
f_2594(3,t3,t2,*((C_word*)lf[218]+1));}

/* k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:481: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_SCHEME_TRUE);}

/* k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[214]+1))){
/* c-backend.scm:482: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,lf[215],*((C_word*)lf[214]+1));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:484: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t3,lf[217]);}}

/* k4358 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:486: gen */
t3=*((C_word*)lf[1]+1);
f_2554(9,t3,t2,C_SCHEME_TRUE,lf[210],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[211],*((C_word*)lf[212]+1),lf[213]);}

/* k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:249: lambda-literal-temporaries */
t3=*((C_word*)lf[101]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=t2;
f_3440(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3459,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:264: gen */
t4=*((C_word*)lf[1]+1);
f_2554(6,t4,t3,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[12],C_make_character(61));}}}

/* k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[6]);
/* c-backend.scm:250: iota */
t4=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[7],t3,C_fix(1));}

/* k9086 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9087,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9089,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1330: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[824],t2);}

/* k8429 in k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_fcall f_8431(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8431,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[766]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[628]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[629]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[767]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[634]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[768]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[631]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[769]);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[633]);
if(C_truep(t6)){
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[770]);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[627]);
if(C_truep(t7)){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[771]);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[625]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[3],lf[626]));
if(C_truep(t9)){
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[772]);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[757]);
if(C_truep(t10)){
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[773]);}
else{
t11=C_eqp(((C_word*)t0)[3],lf[758]);
if(C_truep(t11)){
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[774]);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[609]);
if(C_truep(t12)){
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[775]);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[611]);
if(C_truep(t13)){
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[776]);}
else{
t14=C_eqp(((C_word*)t0)[3],lf[692]);
if(C_truep(t14)){
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[777]);}
else{
t15=C_eqp(((C_word*)t0)[3],lf[754]);
if(C_truep(t15)){
t16=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[778]);}
else{
t16=C_eqp(((C_word*)t0)[3],lf[755]);
if(C_truep(t16)){
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,lf[779]);}
else{
t17=C_eqp(((C_word*)t0)[3],lf[756]);
if(C_truep(t17)){
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,lf[780]);}
else{
t18=C_eqp(((C_word*)t0)[3],lf[694]);
if(C_truep(t18)){
t19=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[781]);}
else{
t19=C_eqp(((C_word*)t0)[3],lf[695]);
if(C_truep(t19)){
t20=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,lf[782]);}
else{
t20=C_eqp(((C_word*)t0)[3],lf[700]);
if(C_truep(t20)){
t21=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,lf[783]);}
else{
t21=C_eqp(((C_word*)t0)[3],lf[701]);
if(C_truep(t21)){
t22=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,lf[784]);}
else{
t22=C_eqp(((C_word*)t0)[3],lf[697]);
if(C_truep(t22)){
t23=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,lf[785]);}
else{
t23=C_eqp(((C_word*)t0)[3],lf[698]);
if(C_truep(t23)){
t24=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,lf[786]);}
else{
t24=C_eqp(((C_word*)t0)[3],lf[703]);
if(C_truep(t24)){
t25=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,lf[787]);}
else{
t25=C_eqp(((C_word*)t0)[3],lf[704]);
if(C_truep(t25)){
t26=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t26+1)))(2,t26,lf[788]);}
else{
t26=C_eqp(((C_word*)t0)[3],lf[706]);
if(C_truep(t26)){
t27=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t27+1)))(2,t27,lf[789]);}
else{
t27=C_eqp(((C_word*)t0)[3],lf[707]);
if(C_truep(t27)){
t28=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,lf[790]);}
else{
t28=C_eqp(((C_word*)t0)[3],lf[709]);
if(C_truep(t28)){
t29=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,lf[791]);}
else{
t29=C_eqp(((C_word*)t0)[3],lf[710]);
if(C_truep(t29)){
t30=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t30+1)))(2,t30,lf[792]);}
else{
t30=C_eqp(((C_word*)t0)[3],lf[712]);
if(C_truep(t30)){
t31=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t31+1)))(2,t31,lf[793]);}
else{
t31=C_eqp(((C_word*)t0)[3],lf[713]);
if(C_truep(t31)){
t32=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,lf[794]);}
else{
t32=C_eqp(((C_word*)t0)[3],lf[715]);
if(C_truep(t32)){
t33=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t33+1)))(2,t33,lf[795]);}
else{
t33=C_eqp(((C_word*)t0)[3],lf[716]);
if(C_truep(t33)){
t34=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t34+1)))(2,t34,lf[796]);}
else{
t34=C_eqp(((C_word*)t0)[3],lf[599]);
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t34)){
t36=t35;
f_8623(t36,t34);}
else{
t36=C_eqp(((C_word*)t0)[3],lf[621]);
if(C_truep(t36)){
t37=t35;
f_8623(t37,t36);}
else{
t37=C_eqp(((C_word*)t0)[3],lf[622]);
t38=t35;
f_8623(t38,(C_truep(t37)?t37:C_eqp(((C_word*)t0)[3],lf[623])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* pad0 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4325(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4325,NULL,2,t1,t2);}
if(C_truep(C_i_lessp(t2,C_fix(10)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4339,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:464: number->string */
C_number_to_string(3,0,t3,t2);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4321(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4321,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4325,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4341,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4482,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:466: current-seconds */
t5=*((C_word*)lf[232]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3343 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:254: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2653(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3345 in k3343 */
static void C_ccall f_3346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:255: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k9088 in k9086 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1330: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* f_4939 in emitter in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4939,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4942,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[2])?C_make_character(118):lf[311]);
t5=(C_truep(((C_word*)t0)[2])?C_make_character(118):lf[312]);
/* c-backend.scm:607: gen */
t6=*((C_word*)lf[1]+1);
f_2554(14,t6,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[313],t2,C_make_character(114),t4,lf[314],C_SCHEME_TRUE,lf[315],t2,C_make_character(114),t5);}

/* emitter in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4936(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4936,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4939,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));}

/* k9092 in k9090 in k9088 in k9086 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1330: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9090 in k9088 in k9086 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1330: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[823],((C_word*)t0)[4]);}

/* f_3341 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3341,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3344,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:253: gen */
t5=*((C_word*)lf[1]+1);
f_2554(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=t1;
t4=C_i_check_list_2(t3,lf[57]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3354,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3405,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3405(t9,t5,((C_word*)t0)[8],t3);}

/* k5840 in k5838 in k5836 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in ... */
static void C_ccall f_5841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:904: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[393]);}

/* k5848 in k5838 in k5836 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in ... */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k4338 in pad0 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
t2=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[205],t1);}

/* k4947 in k4945 in k4943 in k4941 */
static void C_ccall f_4948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:612: gen */
t3=*((C_word*)lf[1]+1);
f_2554(11,t3,t2,lf[304],((C_word*)t0)[3],lf[305],C_SCHEME_TRUE,lf[306],C_SCHEME_TRUE,lf[307],((C_word*)t0)[3],C_make_character(59));}

/* k4945 in k4943 in k4941 */
static void C_ccall f_4946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:611: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(118));}
else{
t3=t2;
f_4948(2,t3,C_SCHEME_UNDEFINED);}}

/* k4943 in k4941 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:610: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[308],((C_word*)t0)[3],C_make_character(114));}

/* k4941 */
static void C_ccall f_4942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:609: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,lf[309],((C_word*)t0)[3],lf[310]);}

/* f_6609 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 in ... */
static void C_ccall f_6609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6609,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6615,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6624,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* c-backend.scm:1045: symbol->string */
t7=*((C_word*)lf[553]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6629,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1045: open-output-string */
t8=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6609,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6639,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,a[12]=t3,tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:1048: iota */
t5=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[9]);}

/* k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1039: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[569]);}

/* k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[7])){
/* c-backend.scm:1035: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,lf[571],C_SCHEME_TRUE,lf[572],((C_word*)t0)[13],lf[573]);}
else{
/* c-backend.scm:1036: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,lf[574],C_SCHEME_TRUE,lf[575],((C_word*)t0)[13],C_make_character(40));}}

/* k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1038: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[570]);}

/* k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[12]);}

/* k4300 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:456: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2653(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* doloop721 in restore in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4916(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4916,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_negativep(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4925,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:602: gen */
t5=*((C_word*)lf[1]+1);
f_2554(8,t5,t4,C_SCHEME_TRUE,lf[291],t2,lf[292],t3,lf[293]);}}

/* k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 in ... */
static void C_ccall f_6639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6639,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6644,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6724,a[2]=t5,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6724(t7,t3,((C_word*)t0)[12],t1,((C_word*)t0)[2]);}

/* k6630 in k6628 */
static void C_ccall f_6631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1045: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6632 in k6630 in k6628 */
static void C_ccall f_6634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1045: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5820 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in ... */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:884: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k5825 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in ... */
static void C_ccall f_5826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k5817 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in ... */
static void C_ccall f_5818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k6617 in k6614 */
static void C_ccall f_6618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1047: foreign-argument-conversion */
t3=*((C_word*)lf[173]+1);
f_8377(3,t3,t2,((C_word*)t0)[5]);}

/* k6614 */
static void C_ccall f_6615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6618,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1046: foreign-type-declaration */
t3=*((C_word*)lf[174]+1);
f_7412(4,t3,t2,((C_word*)t0)[4],lf[552]);}

/* k5805 in doloop1047 in k5780 in k5778 in k5776 in k5774 in k5772 in k5770 in k5768 in k5766 in k5764 in k5762 in k5760 in k5758 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in ... */
static void C_ccall f_5806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5806,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5797(t4,((C_word*)t0)[5],t2,t3);}

/* k3497 in k3495 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:304: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3495 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:303: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,lf[106],((C_word*)t0)[6],C_make_character(44),((C_word*)((C_word*)t0)[7])[1],C_make_character(44));}

/* k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[107]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3516,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:285: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3522,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:286: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[9]);}}
else{
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[10],a[4]=t2,a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:289: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[9]);}
else{
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3557,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:297: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3567,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3573,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:301: number->string */
C_number_to_string(3,0,t4,((C_word*)t0)[9]);}}}}

/* for-each-loop770 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5080,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5089,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:650: g771 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5088 in for-each-loop770 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5080(t3,((C_word*)t0)[4],t2);}

/* k6671 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in ... */
static void C_ccall f_6672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:1063: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,((C_word*)t0)[7],C_make_character(40));}

/* k6673 in k6671 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in ... */
static void C_ccall f_6674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6674,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6704,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6707,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1064: make-argument-list */
t5=*((C_word*)lf[295]+1);
f_6459(4,t5,t4,((C_word*)t0)[6],lf[566]);}

/* k6675 in k6673 in k6671 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in ... */
static void C_ccall f_6676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(((C_word*)t0)[5],lf[565]);
if(C_truep(t3)){
t4=t2;
f_6678(2,t4,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:1065: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t2,C_make_character(41));}}

/* k6677 in k6675 in k6673 in k6671 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in ... */
static void C_ccall f_6678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1066: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[564]);}

/* k6397 in loop in cleanup in k2627 in k2550 in k2548 */
static void C_fcall f_6399(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6399,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],C_make_character(126));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6374(t4,((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:966: string-copy */
t3=*((C_word*)lf[542]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],((C_word*)t0)[7]);
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6374(t4,((C_word*)t0)[5],t3);}
else{
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6374(t3,((C_word*)t0)[5],t2);}}}

/* k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3479(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3479,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3480,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:276: g333 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:307: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[8],C_make_character(61));}}

/* k3472 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
/* c-backend.scm:248: lambda-literal-looping */
t3=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_3336(2,t3,C_SCHEME_FALSE);}}

/* for-each-loop577 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4621(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4621,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4630,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:506: g578 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9880 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[4]);}

/* k9886 in k9884 in k9882 in k9880 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: get-output-string */
t3=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k9884 in k9882 in k9880 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[4]);}

/* k9882 in k9880 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9894,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:57: current-seconds */
t4=*((C_word*)lf[232]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3486,2,t0,t1);}
t2=C_i_car(t1);
t3=C_i_cadr(t1);
t4=C_i_caddr(t1);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t6,a[8]=t4,a[9]=t2,a[10]=t3,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:281: gen */
t8=*((C_word*)lf[1]+1);
f_2554(6,t8,t7,C_SCHEME_TRUE,lf[129],((C_word*)t0)[6],lf[130]);}

/* f_3480 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3480,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4629 in for-each-loop577 in k4501 in declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4621(t3,((C_word*)t0)[4],t2);}

/* k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7607(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7607,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1173: str */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],lf[693]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[694]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[695]));
if(C_truep(t3)){
/* c-backend.scm:1174: str */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[3],lf[696]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[697]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[698]));
if(C_truep(t5)){
/* c-backend.scm:1175: str */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,((C_word*)t0)[3],lf[699]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[700]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[701]));
if(C_truep(t7)){
/* c-backend.scm:1176: str */
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,((C_word*)t0)[3],lf[702]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[703]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[4],lf[704]));
if(C_truep(t9)){
/* c-backend.scm:1177: str */
t10=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,((C_word*)t0)[3],lf[705]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[706]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[4],lf[707]));
if(C_truep(t11)){
/* c-backend.scm:1178: str */
t12=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,((C_word*)t0)[3],lf[708]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[709]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[4],lf[710]));
if(C_truep(t13)){
/* c-backend.scm:1179: str */
t14=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,((C_word*)t0)[3],lf[711]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[712]);
t15=(C_truep(t14)?t14:C_eqp(((C_word*)t0)[4],lf[713]));
if(C_truep(t15)){
/* c-backend.scm:1180: str */
t16=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,((C_word*)t0)[3],lf[714]);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[715]);
t17=(C_truep(t16)?t16:C_eqp(((C_word*)t0)[4],lf[716]));
if(C_truep(t17)){
/* c-backend.scm:1181: str */
t18=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t18+1)))(3,t18,((C_word*)t0)[3],lf[717]);}
else{
t18=C_eqp(((C_word*)t0)[4],lf[603]);
t19=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t18)){
t20=t19;
f_7706(t20,t18);}
else{
t20=C_eqp(((C_word*)t0)[4],lf[599]);
if(C_truep(t20)){
t21=t19;
f_7706(t21,t20);}
else{
t21=C_eqp(((C_word*)t0)[4],lf[617]);
if(C_truep(t21)){
t22=t19;
f_7706(t22,t21);}
else{
t22=C_eqp(((C_word*)t0)[4],lf[621]);
t23=t19;
f_7706(t23,(C_truep(t22)?t22:C_eqp(((C_word*)t0)[4],lf[620])));}}}}}}}}}}}}}

/* loop in cleanup in k2627 in k2550 in k2548 */
static void C_fcall f_6374(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6374,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:((C_word*)t0)[4]));}
else{
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=C_i_char_lessp(t3,C_make_character(32));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6399,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_6399(t6,t4);}
else{
t6=C_i_char_greaterp(t3,C_make_character(126));
if(C_truep(t6)){
t7=t5;
f_6399(t7,t6);}
else{
if(C_truep(C_i_char_equalp(t3,C_make_character(42)))){
t7=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_lessp(t2,t7))){
t8=C_a_i_plus(&a,2,t2,C_fix(1));
t9=C_i_string_ref(((C_word*)t0)[4],t8);
t10=t5;
f_6399(t10,C_i_char_equalp(C_make_character(47),t9));}
else{
t8=t5;
f_6399(t8,C_SCHEME_FALSE);}}
else{
t7=t5;
f_6399(t7,C_SCHEME_FALSE);}}}}}

/* k4644 in prototypes in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:535: ##sys#hash-table-for-each */
t4=*((C_word*)lf[288]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* prototypes in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4641(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4641,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4645,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:534: gen */
t5=*((C_word*)lf[1]+1);
f_2554(3,t5,t4,C_SCHEME_TRUE);}

/* k6679 in k6677 in k6675 in k6673 in k6671 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in ... */
static void C_ccall f_6680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1068: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[560],C_SCHEME_TRUE,lf[561]);}
else{
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1070: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[3],lf[562]);}
else{
/* c-backend.scm:1071: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[563]);}}}

/* k9824 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1415: ##sys#string-append */
t2=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k5836 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in ... */
static void C_ccall f_5837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:899: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,((C_word*)t0)[6],lf[394]);}
else{
/* c-backend.scm:900: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,((C_word*)t0)[7],lf[395],((C_word*)t0)[6]);}}

/* k5838 in k5836 in k5752 in k5734 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in ... */
static void C_ccall f_5839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5849,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:902: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
/* c-backend.scm:904: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,((C_word*)t0)[2],lf[393]);}}

/* k4652 in k4650 */
static void C_ccall f_4653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4656,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4661,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4661(t6,t2,t1);}

/* k4654 in k4652 in k4650 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:590: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[246]);}

/* k4650 */
static void C_ccall f_4651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4651,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4653,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:589: make-list */
t4=*((C_word*)lf[247]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[248]);}

/* k4646 in k4644 in prototypes in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4647(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4648,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_i_check_list_2(t3,lf[57]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4686,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4686(t8,((C_word*)t0)[3],t3);}

/* f_4648 in k4646 in k4644 in prototypes in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4648,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4651,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:588: gen */
t4=*((C_word*)lf[1]+1);
f_2554(6,t4,t3,C_SCHEME_TRUE,lf[249],t2,lf[250]);}

/* loop in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_2838(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2838,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2847,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:111: gen */
t6=*((C_word*)lf[1]+1);
f_2554(6,t6,t5,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}
else{
t5=C_i_car(t2);
/* c-backend.scm:115: expr */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2653(t6,t1,t5,t3);}}

/* for-each-loop691 in k4652 in k4650 */
static void C_fcall f_4661(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4661,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4670,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:589: g692 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2846 in loop in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:112: expr */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2653(t4,t2,t3,((C_word*)t0)[3]);}

/* k2848 in k2846 in loop in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:113: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(59));}

/* k5015 in k5007 in k5005 in k5003 in k5001 */
static void C_ccall f_5016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5018 in k5007 in k5005 in k5003 in k5001 */
static void C_ccall f_5019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:657: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k5009 in k5007 in k5005 in k5003 in k5001 */
static void C_ccall f_5010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:658: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[316]);}

/* k4669 in for-each-loop691 in k4652 in k4650 */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4661(t3,((C_word*)t0)[4],t2);}

/* k9856 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1423: cons* */
t2=*((C_word*)lf[864]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_9859 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9859(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9859,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[2],t2);
/* c-backend.scm:1426: encode-literal */
t4=*((C_word*)lf[363]+1);
f_9618(3,t4,t1,t3);}

/* k3413 in for-each-loop268 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3405(t4,((C_word*)t0)[5],t2,t3);}

/* k9789 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1405: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[859],t1,lf[860]);}

/* k5001 */
static void C_ccall f_5002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:654: gen */
t3=*((C_word*)lf[1]+1);
f_2554(8,t3,t2,C_SCHEME_TRUE,lf[319],((C_word*)t0)[3],lf[320],((C_word*)t0)[3],lf[321]);}

/* k5003 in k5001 */
static void C_ccall f_5004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:655: restore */
f_4904(t2,((C_word*)t0)[3]);}

/* k5005 in k5003 in k5001 */
static void C_ccall f_5006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:656: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[318],((C_word*)t0)[3],C_make_character(44));}

/* k5007 in k5005 in k5003 in k5001 */
static void C_ccall f_5008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5016,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5019,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:657: make-argument-list */
t5=*((C_word*)lf[295]+1);
f_6459(4,t5,t4,((C_word*)t0)[3],lf[317]);}

/* k4694 in for-each-loop678 in k4646 in k4644 in prototypes in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4686(t3,((C_word*)t0)[4],t2);}

/* for-each-loop678 in k4646 in k4644 in prototypes in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4686(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4686,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4695,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:586: g679 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9897,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9900,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:57: random */
t5=*((C_word*)lf[865]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(16777216));}

/* k9876 in k2550 in k2548 */
static void C_ccall f_9877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9877,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9879,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:57: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[866],t2);}

/* for-each-loop793 in k5025 in k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5060(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5060,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5069,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:660: g794 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5068 in for-each-loop793 in k5025 in k5022 in k4997 in trampolines in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5060(t3,((C_word*)t0)[4],t2);}

/* k5593 in doloop913 in k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:727: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* string-like-substring in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5599(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5599,NULL,4,t1,t2,t3,t4);}
t5=C_a_i_minus(&a,2,t4,t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5605,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:731: make-string */
t7=*((C_word*)lf[368]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}

/* for-each-loop268 in k3339 in k3337 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3405(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3405,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3414,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:249: g269 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5590 in doloop913 in k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:727: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k2880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* c-backend.scm:120: expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k2882 in k2880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:121: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(59));}

/* k2884 in k2882 in k2880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* c-backend.scm:122: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2653(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5]);}

/* k3458 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:265: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2653(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2850 in k2848 in k2846 in loop in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2851,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t5=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:114: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_2838(t6,((C_word*)t0)[6],t3,t4,t5);}

/* k4188 in k4186 in k4184 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:445: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k4184 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:443: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k4186 in k4184 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:444: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[200]);}

/* k3460 in k3458 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:266: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k3956 in k3946 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:387: expr-args */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4292(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9847 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1422: string-intersperse */
t2=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[863]);}

/* k3443 in k3441 in k3439 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:270: expr-args */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4292(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* c-backend.scm:269: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_make_character(116),((C_word*)t0)[7],C_make_character(44));}}

/* k3445 in k3443 in k3441 in k3439 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:270: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3447 in k3445 in k3443 in k3441 in k3439 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:271: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[102]);}

/* k3439 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:267: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[10],C_make_character(40));}

/* k3441 in k3439 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=t2;
f_3444(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:268: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,((C_word*)t0)[9],C_make_character(44));}}

/* k3930 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:379: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3932 in k3930 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:380: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k6647 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in ... */
static void C_ccall f_6648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1072: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in ... */
static void C_ccall f_6646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6653,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1051: gen */
t4=*((C_word*)lf[1]+1);
f_2554(6,t4,t3,C_SCHEME_TRUE,((C_word*)t0)[3],C_SCHEME_TRUE,lf[559]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6672,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=C_eqp(((C_word*)t0)[6],lf[565]);
if(C_truep(t4)){
/* c-backend.scm:1062: gen */
t5=*((C_word*)lf[1]+1);
f_2554(3,t5,t3,C_SCHEME_TRUE);}
else{
/* c-backend.scm:1061: gen */
t5=*((C_word*)lf[1]+1);
f_2554(5,t5,t3,C_SCHEME_TRUE,lf[567],((C_word*)t0)[9]);}}}

/* k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in ... */
static void C_ccall f_6644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1049: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[568]);}
else{
t3=t2;
f_6646(2,t3,C_SCHEME_UNDEFINED);}}

/* k4192 in k4190 in k4188 in k4186 in k4184 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
/* c-backend.scm:447: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k4190 in k4188 in k4186 in k4184 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:446: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(58));}

/* k4194 in k4192 in k4190 in k4188 in k4186 in k4184 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:448: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3916 in k3914 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:375: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[162]);}

/* k3914 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3917,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:374: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k6628 */
static void C_ccall f_6629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6629,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6631,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(116),t2);}

/* k6620 in k6617 in k6614 */
static void C_ccall f_6621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1042: gen */
t2=*((C_word*)lf[1]+1);
f_2554(11,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],lf[549],((C_word*)t0)[4],C_make_character(41),t1,lf[550],((C_word*)t0)[5],lf[551]);}

/* k6623 */
static void C_ccall f_6624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1043: foreign-type-declaration */
t2=*((C_word*)lf[174]+1);
f_7412(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2799 in k2797 in k2795 in k2793 in k2791 in k2789 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:103: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k3948 in k3946 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:388: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3946 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3957,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:386: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t3,C_make_character(44));}
else{
/* c-backend.scm:388: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,((C_word*)t0)[2],C_make_character(41));}}

/* k6654 in k6652 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in ... */
static void C_ccall f_6655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:1055: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[554],C_SCHEME_TRUE,lf[555]);}
else{
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:1057: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[556]);}
else{
/* c-backend.scm:1058: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[557]);}}}

/* k6652 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in ... */
static void C_ccall f_6653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1053: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,lf[558],C_SCHEME_TRUE);}

/* doloop913 in k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5548(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5548,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t2))){
t4=C_i_zerop(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5563,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_5563(t6,t4);}
else{
t6=((C_word*)t0)[5];
t7=C_u_i_zerop(t6);
t8=t5;
f_5563(t8,C_i_not(t7));}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5579,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5591,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5594,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_plus(&a,2,t3,C_fix(80));
/* c-backend.scm:727: string-like-substring */
f_5599(t6,((C_word*)t0)[4],t3,t7);}}

/* k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5543,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5548(t5,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(0));}

/* k5532 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5416(t2,C_i_not(t1));}

/* gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5535(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5535,NULL,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_fixnum_divide(t3,C_fix(80));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5543,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:721: modulo */
t6=*((C_word*)lf[366]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,C_fix(80));}

/* k5568 in k5561 in doloop913 in k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:726: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],t1);}

/* k5561 in doloop913 in k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5563(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5563,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5572,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:726: string-like-substring */
f_5599(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k2795 in k2793 in k2791 in k2789 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:101: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_make_character(125),C_SCHEME_TRUE,lf[29]);}

/* k2797 in k2795 in k2793 in k2791 in k2789 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[3]);
/* c-backend.scm:102: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k2789 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:98: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k2791 in k2789 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:99: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[30]);}

/* k2793 in k2791 in k2789 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:100: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7706,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1183: str */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],lf[718]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[618]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7717(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[619]);
if(C_truep(t4)){
t5=t3;
f_7717(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[622]);
t6=t3;
f_7717(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[623])));}}}}

/* k8725 in k8662 in k8638 in k8629 in k8621 in k8429 in k8403 in foreign-argument-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_8726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1304: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[806],t1,lf[807]);}

/* f_7735 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7735(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7735,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* c-backend.scm:1190: foreign-type-declaration */
t4=*((C_word*)lf[174]+1);
f_7412(4,t4,t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
/* c-backend.scm:1190: foreign-type-declaration */
t4=*((C_word*)lf[174]+1);
f_7412(4,t4,t1,t3,((C_word*)t0)[2]);}}

/* k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7731(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7731,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1188: g1642 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
/* c-backend.scm:1191: str */
t2=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7772,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=C_eqp(C_fix(2),t3);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[4]);
t7=t4;
f_7772(t7,C_u_i_memq(t6,lf[753]));}
else{
t6=t4;
f_7772(t6,C_SCHEME_FALSE);}}
else{
/* c-backend.scm:1241: err */
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}}}

/* k5571 in k5561 in doloop913 in k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:726: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5578 in doloop913 in k5542 in gen-string-constant in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5579,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(80));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5548(t4,((C_word*)t0)[5],t2,t3);}

/* k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7717(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7717,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1185: str */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],lf[719]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[565]);
if(C_truep(t2)){
/* c-backend.scm:1186: str */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],lf[720]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7731,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* c-backend.scm:1188: ##sys#hash-table-ref */
t4=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[616]+1),((C_word*)t0)[6]);}
else{
t4=t3;
f_7731(2,t4,C_SCHEME_FALSE);}}}}

/* k6918 in k6885 in k6879 in k6868 in k6857 in k6849 in compute-size in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_fcall f_6920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:1107: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[607]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[608]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm:1108: compute-size */
t4=((C_word*)((C_word*)t0)[6])[1];
f_6841(5,t4,((C_word*)t0)[2],t3,((C_word*)t0)[7],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}}

/* k9889 in k9886 in k9884 in k9882 in k9880 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:56: string->c-identifier */
t2=*((C_word*)lf[537]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9893 in k9882 in k9880 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:57: display */
t2=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k9896 in k9878 in k9876 in k2550 in k2548 */
static void C_ccall f_9897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:57: display */
t2=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7772(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7772,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7781,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1198: string-append */
t4=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[721],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_eqp(C_fix(2),((C_word*)t0)[7]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=t2;
f_7787(t5,C_eqp(lf[606],t4));}
else{
t4=t2;
f_7787(t4,C_SCHEME_FALSE);}}}

/* k3580 in k3578 in k3576 in k3574 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:314: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,lf[132],((C_word*)t0)[6],lf[133],((C_word*)t0)[7],C_make_character(44));}

/* k5902 in k5900 in k5898 in k5896 in k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in ... */
static void C_ccall f_5903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5903,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_5735(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5911,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:833: gen */
t4=*((C_word*)lf[1]+1);
f_2554(6,t4,t3,C_SCHEME_TRUE,lf[401],((C_word*)t0)[2],lf[402]);}}

/* k5900 in k5898 in k5896 in k5894 in k5892 in k5889 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in ... */
static void C_ccall f_5901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:831: gen */
t3=*((C_word*)lf[1]+1);
f_2554(6,t3,t2,C_SCHEME_TRUE,lf[403],((C_word*)t0)[5],lf[404]);}

/* k3589 in k3578 in k3576 in k3574 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3591(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm:312: gen */
t2=*((C_word*)lf[1]+1);
f_2554(5,t2,((C_word*)t0)[2],lf[135],((C_word*)t0)[3],lf[136]);}
else{
/* c-backend.scm:313: gen */
t2=*((C_word*)lf[1]+1);
f_2554(5,t2,((C_word*)t0)[2],lf[137],((C_word*)t0)[3],lf[138]);}}

/* k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7787(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7787,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7796,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1201: string-append */
t4=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[722],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7802,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[7],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[2]);
t4=t2;
f_7802(t4,C_eqp(lf[752],t3));}
else{
t3=t2;
f_7802(t3,C_SCHEME_FALSE);}}}

/* k3584 in k3582 in k3580 in k3578 in k3576 in k3574 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 in ... */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:316: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[131]);}

/* k3582 in k3580 in k3578 in k3576 in k3574 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:315: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* doloop472 in k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4133(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4133,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_zerop(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4142,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:433: gen */
t5=*((C_word*)lf[1]+1);
f_2554(4,t5,t4,C_SCHEME_TRUE,lf[195]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4152,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:436: gen */
t5=*((C_word*)lf[1]+1);
f_2554(4,t5,t4,C_SCHEME_TRUE,lf[196]);}}

/* k7780 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1198: foreign-type-declaration */
t2=*((C_word*)lf[174]+1);
f_7412(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k5499 in k5497 in k5494 in k5420 in k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:715: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[362]);}

/* k5505 in k5497 in k5494 in k5420 in k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:714: gen-string-constant */
t2=((C_word*)((C_word*)t0)[2])[1];
f_5535(t2,((C_word*)t0)[3],t1);}

/* k4141 in doloop472 in k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:434: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k4143 in k4141 in doloop472 in k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:435: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k9301 in k9299 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1350: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9299 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9300,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9302,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1350: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[839],t2);}

/* k9305 in k9303 in k9301 in k9299 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1350: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3565 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:302: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[3],lf[125],((C_word*)t0)[4],lf[126]);}

/* k6004 in k6002 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_ccall f_6005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
if(C_truep(t3)){
t4=t2;
f_6011(t4,C_SCHEME_FALSE);}
else{
t4=((C_word*)t0)[6];
t5=t2;
f_6011(t5,(C_truep(t4)?t4:C_i_greaterp(((C_word*)t0)[3],C_fix(0))));}}

/* k9303 in k9301 in k9299 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1350: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[838],((C_word*)t0)[4]);}

/* k3562 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:297: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[123],t1,lf[124]);}

/* k6002 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_ccall f_6003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6043,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
t4=*((C_word*)lf[134]+1);
if(C_truep(*((C_word*)lf[134]+1))){
t5=t3;
f_6043(t5,C_SCHEME_FALSE);}
else{
t5=*((C_word*)lf[439]+1);
t6=t3;
f_6043(t6,(C_truep(*((C_word*)lf[439]+1))?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[9])));}}
else{
t4=t3;
f_6043(t4,C_SCHEME_FALSE);}}

/* k5948 in k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_ccall f_5949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:839: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[443]);}

/* k5946 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_ccall f_5947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:838: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[444]);}

/* k5941 */
static void C_ccall f_5942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5942,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* k3540 in k3527 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:292: gen */
t2=*((C_word*)lf[1]+1);
f_2554(7,t2,((C_word*)t0)[2],lf[117],((C_word*)((C_word*)t0)[3])[1],lf[118],t1,C_make_character(41));}

/* k9317 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9318,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9320,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1352: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[841],t2);}

/* k3576 in k3574 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:309: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,C_make_character(59),C_SCHEME_TRUE,lf[140],((C_word*)t0)[6],lf[141]);}

/* k3578 in k3576 in k3574 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=*((C_word*)lf[134]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3591,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[134]+1))){
t5=t4;
f_3591(t5,*((C_word*)lf[134]+1));}
else{
t5=*((C_word*)lf[139]+1);
if(C_truep(*((C_word*)lf[139]+1))){
t6=*((C_word*)lf[139]+1);
t7=t4;
f_3591(t7,*((C_word*)lf[139]+1));}
else{
t6=C_u_i_car(((C_word*)t0)[8]);
t7=t4;
f_3591(t7,t6);}}}

/* k7795 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1201: foreign-type-declaration */
t2=*((C_word*)lf[174]+1);
f_7412(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3572 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:301: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[127],t1,lf[128]);}

/* k3574 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:308: expr */
t3=((C_word*)((C_word*)t0)[9])[1];
f_2653(t3,t2,((C_word*)t0)[10],((C_word*)t0)[5]);}

/* f_5936 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_ccall f_5936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5936,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5942,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:809: literal-size */
t5=((C_word*)((C_word*)t0)[2])[1];
f_5237(t5,t4,t2);}

/* k3549 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:289: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[119],t1,lf[120]);}

/* k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4123,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4133,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4133(t7,((C_word*)t0)[6],t2,t3);}

/* k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:429: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[197]);}

/* k3543 in k3527 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:293: c-ify-string */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* c-backend.scm:759: lambda-literal-external */
t3=*((C_word*)lf[335]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k4475 in k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:477: string-split */
t2=*((C_word*)lf[228]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[229]);}

/* k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
/* c-backend.scm:760: lambda-literal-looping */
t3=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t1,a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
/* c-backend.scm:761: lambda-literal-direct */
t3=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* c-backend.scm:762: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[14])){
t3=C_i_cdr(((C_word*)t0)[16]);
/* c-backend.scm:758: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[16];
/* c-backend.scm:758: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}}

/* k3555 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:298: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[3],lf[121],((C_word*)((C_word*)t0)[2])[1],lf[122]);}

/* k4469 in map-loop511 in k4439 in k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4470,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4445(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4445(t6,((C_word*)t0)[5],t5);}}

/* k4102 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:423: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k4104 in k4102 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:424: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_fcall f_5683(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5683,NULL,2,t0,t1);}
t2=(C_truep(t1)?C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1)):C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(0)));
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t1,a[15]=((C_word*)t0)[13],tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm:755: make-variable-list */
t4=*((C_word*)lf[284]+1);
f_6445(4,t4,t3,((C_word*)t0)[2],lf[505]);}

/* k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,tmp=(C_word)a,a+=17,tmp);
/* c-backend.scm:756: make-argument-list */
t3=*((C_word*)lf[295]+1);
f_6459(4,t3,t2,((C_word*)t0)[4],lf[504]);}

/* k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[14])){
t3=C_i_cdr(((C_word*)t0)[16]);
/* c-backend.scm:757: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[16];
/* c-backend.scm:757: intersperse */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_make_character(44));}}

/* k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:753: lambda-literal-closure-size */
t4=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t3=t2;
f_5683(t3,C_SCHEME_FALSE);}}

/* k3527 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3529,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:291: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[4],lf[115],((C_word*)((C_word*)t0)[2])[1],lf[116]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3541,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3544,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadddr(((C_word*)t0)[5]);
/* c-backend.scm:293: ##sys#symbol->qualified-string */
t6=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k4151 in doloop472 in k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:437: expr */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2653(t4,t2,t3,((C_word*)t0)[7]);}

/* k3499 in k3497 in k3495 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:305: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[105]);}

/* k4155 in k4153 in k4151 in doloop472 in k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:439: expr */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2653(t4,t2,t3,((C_word*)t0)[7]);}

/* k4153 in k4151 in doloop472 in k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:438: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(58));}

/* k4157 in k4155 in k4153 in k4151 in doloop472 in k4122 in k4120 in k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4159,2,t0,t1);}
t2=C_a_i_minus(&a,2,((C_word*)t0)[2],C_fix(1));
t3=C_i_cddr(((C_word*)t0)[3]);
t4=((C_word*)((C_word*)t0)[4])[1];
f_4133(t4,((C_word*)t0)[5],t2,t3);}

/* declarations in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4496(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4496,NULL,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4502,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:505: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[245]);}

/* f_5670 in procedures in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5670,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5673,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:748: lambda-literal-argument-count */
t5=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_5679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5679,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:752: lambda-literal-customizable */
t4=*((C_word*)lf[286]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k5676 in k5674 in k5672 */
static void C_ccall f_5677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:751: lambda-literal-rest-argument */
t3=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5674 in k5672 */
static void C_ccall f_5675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:750: lambda-literal-allocated */
t3=*((C_word*)lf[280]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5672 */
static void C_ccall f_5673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5675,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:749: real-name */
t3=*((C_word*)lf[506]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[9]);}

/* k4490 in k6307 in k6305 in k6303 in k6301 in k6299 in k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:496: gen */
t2=*((C_word*)lf[1]+1);
f_2554(11,t2,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[507],C_SCHEME_TRUE,t1,lf[508],C_SCHEME_TRUE,lf[509],C_SCHEME_TRUE);}

/* k4493 in k6307 in k6305 in k6303 in k6301 in k6299 in k6297 in k6295 in k6293 in k6291 in k6288 in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:497: uncommentify */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* procedures in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5664(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5664,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:746: ##sys#hash-table-for-each */
t3=*((C_word*)lf[288]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[7]);}

/* k9367 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9368,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9370,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1357: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[845],t2);}

/* k3505 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* c-backend.scm:287: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[3],lf[108],((C_word*)((C_word*)t0)[2])[1],lf[109]);}

/* k3515 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:285: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[111],t1,lf[112]);}

/* k6091 in k6089 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_ccall f_6092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm:859: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[461]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_6003(2,t3,t2);}}

/* k6089 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in ... */
static void C_ccall f_6090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6101,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[134]+1);
t5=t3;
f_6101(t5,(C_truep(*((C_word*)lf[134]+1))?C_SCHEME_FALSE:C_i_not(*((C_word*)lf[425]+1))));}
else{
t4=t3;
f_6101(t4,C_SCHEME_FALSE);}}

/* k6406 in k6397 in loop in cleanup in k2627 in k2550 in k2548 */
static void C_ccall f_6408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6408,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_string_set(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3],C_make_character(126));
t4=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* c-backend.scm:969: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6374(t5,((C_word*)t0)[5],t4);}

/* k4481 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:466: ##sys#decode-seconds */
t2=*((C_word*)lf[231]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k4118 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:428: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k9319 in k9317 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1352: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9321 in k9319 in k9317 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1352: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[840],((C_word*)t0)[4]);}

/* f_6465 in make-argument-list in k2627 in k2550 in k2548 */
static void C_ccall f_6465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6465,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6471,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:982: number->string */
C_number_to_string(3,0,t3,t2);}

/* k9323 in k9321 in k9319 in k9317 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1352: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7588(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7588,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:1171: str */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],lf[690]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[635]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[636]));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[691]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[692]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_7607(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[754]);
if(C_truep(t6)){
t7=t5;
f_7607(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[755]);
t8=t5;
f_7607(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[4],lf[756])));}}}}}

/* k3521 in k3493 in k3484 in k3477 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:286: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[113],t1,lf[114]);}

/* k9335 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9336,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9338,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1354: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[843],t2);}

/* k9337 in k9335 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1354: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k5604 in string-like-substring in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:732: ##sys#copy-bytes */
t3=*((C_word*)lf[367]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[5]);}

/* k5606 in k5604 in string-like-substring in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k9341 in k9339 in k9337 in k9335 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1354: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9339 in k9337 in k9335 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1354: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[842],((C_word*)t0)[4]);}

/* k6041 in k6002 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in ... */
static void C_fcall f_6043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],lf[254]);
if(C_truep(t2)){
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(2)))){
/* c-backend.scm:863: gen */
t3=*((C_word*)lf[1]+1);
f_2554(8,t3,((C_word*)t0)[4],C_SCHEME_TRUE,lf[449],((C_word*)t0)[3],lf[450],((C_word*)t0)[3],lf[451]);}
else{
t3=((C_word*)t0)[4];
f_6005(2,t3,C_SCHEME_UNDEFINED);}}
else{
/* c-backend.scm:864: gen */
t3=*((C_word*)lf[1]+1);
f_2554(8,t3,((C_word*)t0)[4],C_SCHEME_TRUE,lf[452],((C_word*)t0)[3],lf[453],((C_word*)t0)[3],lf[454]);}}
else{
t2=((C_word*)t0)[4];
f_6005(2,t2,C_SCHEME_UNDEFINED);}}

/* k2994 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:150: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k2998 in k2996 in k2994 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:152: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k2996 in k2994 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:151: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[49]);}

/* ##compiler#encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9618(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9618,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9630,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9673,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t5)){
t6=t1;
t7=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1387: string-append */
t8=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,lf[849]);}
else{
t6=C_eqp(C_SCHEME_FALSE,t2);
if(C_truep(t6)){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1387: string-append */
t9=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[850]);}
else{
if(C_truep(C_charp(t2))){
t7=C_fix(C_character_code(t2));
t8=f_9630(C_a_i(&a,24),t7);
/* ##sys#string-append */
t9=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,lf[851],t8);}
else{
if(C_truep(C_i_nullp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1387: string-append */
t9=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[852]);}
else{
if(C_truep(C_eofp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1387: string-append */
t9=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,lf[853]);}
else{
t7=*((C_word*)lf[352]+1);
t8=C_eqp(*((C_word*)lf[352]+1),t2);
if(C_truep(t8)){
t9=t1;
t10=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1387: string-append */
t11=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,lf[854]);}
else{
if(C_truep(C_fixnump(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9728,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1396: big-fixnum? */
t10=*((C_word*)lf[365]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep(C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9790,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1405: number->string */
C_number_to_string(3,0,t9,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t9=C_slot(t2,C_fix(1));
t10=C_i_string_length(t9);
t11=f_9630(C_a_i(&a,24),t10);
/* c-backend.scm:1408: string-append */
t12=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t4,lf[861],t11,t9);}
else{
if(C_truep(C_immp(t2))){
/* c-backend.scm:1413: bomb */
t9=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t4,lf[862],t2);}
else{
if(C_truep(C_byteblockp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9825,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=stub2165(C_SCHEME_UNDEFINED,t10);
t12=C_make_character(C_unfix(t11));
t13=C_a_i_string(&a,1,t12);
t14=t2;
t15=stub2169(C_SCHEME_UNDEFINED,t14);
t16=f_9630(C_a_i(&a,24),t15);
/* ##sys#string-append */
t17=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t9,t13,t16);}
else{
t9=t2;
t10=stub2169(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9848,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=t2;
t13=stub2165(C_SCHEME_UNDEFINED,t12);
t14=C_make_character(C_unfix(t13));
t15=C_a_i_string(&a,1,t14);
t16=f_9630(C_a_i(&a,24),t10);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9857,a[2]=t11,a[3]=t15,a[4]=t16,tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9859,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1426: list-tabulate */
t19=*((C_word*)lf[544]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t17,t10,t18);}}}}}}}}}}}}

/* k6012 in k6009 in k6004 in k6002 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in ... */
static void C_ccall f_6013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_i_greaterp(((C_word*)t0)[3],C_fix(0)))){
/* c-backend.scm:868: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[446]);}
else{
/* c-backend.scm:869: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[447]);}}
else{
/* c-backend.scm:869: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[447]);}}

/* k6009 in k6004 in k6002 in k5732 in k5730 in k5728 in k5726 in k5724 in k5722 in k5720 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in ... */
static void C_fcall f_6011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6011,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[434]+1))){
/* c-backend.scm:866: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[448]);}
else{
t3=t2;
f_6013(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[4];
f_5735(2,t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#make-argument-list in k2627 in k2550 in k2548 */
static void C_ccall f_6459(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6459,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6465,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:980: list-tabulate */
t5=*((C_word*)lf[544]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}

/* k6456 */
static void C_ccall f_6457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:977: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[543],((C_word*)t0)[3],t1);}

/* f_6451 in make-variable-list in k2627 in k2550 in k2548 */
static void C_ccall f_6451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6451,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6457,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:977: number->string */
C_number_to_string(3,0,t3,t2);}

/* ##compiler#make-variable-list in k2627 in k2550 in k2548 */
static void C_ccall f_6445(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6445,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6451,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:975: list-tabulate */
t5=*((C_word*)lf[544]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}

/* k3660 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:235: lambda-literal-closure-size */
t2=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9672 in encode-literal in k2627 in k2550 in k2548 */
static void C_ccall f_9673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9673,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_string(&a,1,C_make_character(254));
/* c-backend.scm:1387: string-append */
t4=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* loop in k5355 in k5337 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5382(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5382,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_a_i_plus(&a,2,t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5401,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=C_slot(((C_word*)t0)[4],t2);
/* c-backend.scm:688: literal-size */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5237(t7,t5,t6);}}

/* k9403 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9404,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9406,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1359: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[848],t2);}

/* k9407 in k9405 in k9403 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k9405 in k9403 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1359: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k3645 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:239: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[143],t1,lf[144]);}

/* f10617 in k3799 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f10617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:341: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k9409 in k9407 in k9405 in k9403 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1359: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3657 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3300(t2,C_i_zerop(t1));}

/* k9373 in k9371 in k9369 in k9367 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1357: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9371 in k9369 in k9367 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1357: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[844],((C_word*)t0)[4]);}

/* k9369 in k9367 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1357: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k3651 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:240: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[146],t1,lf[147]);}

/* k4431 in k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:472: gen */
t2=*((C_word*)lf[1]+1);
f_2554(21,t2,((C_word*)t0)[2],lf[219],((C_word*)t0)[3],lf[220],C_SCHEME_TRUE,lf[221],C_SCHEME_TRUE,lf[222],((C_word*)t0)[4],C_make_character(45),((C_word*)t0)[5],C_make_character(45),((C_word*)t0)[6],C_make_character(32),((C_word*)t0)[7],C_make_character(58),((C_word*)t0)[8],C_SCHEME_TRUE,t1,lf[223]);}

/* f_4434 in k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4434(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4434,3,t0,t1,t2);}
/* c-backend.scm:476: g534 */
t3=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[224],t2,lf[225]);}

/* f10609 in k3443 in k3441 in k3439 in k3334 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f10609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:271: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[102]);}

/* k3627 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_eqp(lf[67],t1);
if(C_truep(t2)){
t3=*((C_word*)lf[134]+1);
if(C_truep(*((C_word*)lf[134]+1))){
t4=((C_word*)t0)[2];
f_3479(t4,C_SCHEME_FALSE);}
else{
t4=*((C_word*)lf[139]+1);
if(C_truep(*((C_word*)lf[139]+1))){
t5=((C_word*)t0)[2];
f_3479(t5,C_SCHEME_FALSE);}
else{
t5=C_u_i_car(((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
f_3479(t6,C_i_not(t5));}}}
else{
t3=((C_word*)t0)[2];
f_3479(t3,C_SCHEME_FALSE);}}

/* k9387 in k9385 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1358: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9385 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9386,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9388,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1358: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[847],t2);}

/* f_3623 in k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3623(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3623,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* encode-size in encode-literal in k2627 in k2550 in k2548 */
static C_word C_fcall f_9630(C_word *a,C_word t1){
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
C_stack_overflow_check;
t2=C_a_i_arithmetic_shift(&a,2,t1,C_fix(-16));
t3=C_a_i_bitwise_and(&a,2,C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_a_i_arithmetic_shift(&a,2,t1,C_fix(-8));
t6=C_a_i_bitwise_and(&a,2,C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_a_i_bitwise_and(&a,2,C_fix(255),t1);
t9=C_make_character(C_unfix(t8));
return(C_a_i_string(&a,3,t4,t7,t9));}

/* k3635 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3637(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3637,2,t0,t1);}
t2=C_eqp(lf[32],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3310,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:242: g255 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[7]);}
else{
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[7],tmp=(C_word)a,a+=15,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:247: lambda-literal-id */
t5=*((C_word*)lf[104]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[12]);}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3623,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3629,a[2]=t3,a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:272: g327 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[7]);}}}

/* k9391 in k9389 in k9387 in k9385 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1358: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9389 in k9387 in k9385 in k9250 in k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1358: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[846],((C_word*)t0)[4]);}

/* f_3631 in k3302 in k3299 in k3295 in k3293 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3631(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3631,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4434,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4440,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4476,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:477: chicken-version */
t10=*((C_word*)lf[230]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_SCHEME_TRUE);}

/* k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:474: pad0 */
f_4325(t2,((C_word*)t0)[8]);}

/* k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:474: pad0 */
f_4325(t2,((C_word*)t0)[8]);}

/* k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:474: pad0 */
f_4325(t2,((C_word*)t0)[8]);}

/* for-each-loop1232 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in ... */
static void C_fcall f_6724(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6724,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6731,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_6731(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_6731(t6,C_SCHEME_FALSE);}}

/* k4441 in k4439 in k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:475: string-intersperse */
t2=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[227]);}

/* k4439 in k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4443,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4445(t6,t2,t1);}

/* map-loop511 in k4439 in k4428 in k4425 in k4422 in k4419 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4445,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4470,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:476: g517 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4410 in k4356 in k4354 in k4352 in k4340 in header in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:485: gen-list */
t2=*((C_word*)lf[4]+1);
f_2594(3,t2,((C_word*)t0)[2],*((C_word*)lf[216]+1));}

/* k6706 in k6673 in k6671 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in ... */
static void C_ccall f_6707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1064: intersperse */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k6703 in k6673 in k6671 in k6645 in k6642 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in ... */
static void C_ccall f_6704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k6493 */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:994: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],t1,C_make_character(59));}

/* k4783 in k4757 in k4755 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:584: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,((C_word*)t0)[2],C_make_character(59));}
else{
/* c-backend.scm:583: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[262]);}}

/* k4785 in k4783 in k4757 in k4755 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:584: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k4793 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_fcall f_4795(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4795,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:569: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[263]);}
else{
t2=((C_word*)t0)[3];
f_4756(2,t2,C_SCHEME_UNDEFINED);}}

/* k3900 in k3898 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:370: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],lf[157]);}

/* ##compiler#generate-external-variables in k2627 in k2550 in k2548 */
static void C_ccall f_6473(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6473,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6477,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:988: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t3,C_SCHEME_TRUE);}

/* k6470 */
static void C_ccall f_6471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:982: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6476 in generate-external-variables in k2627 in k2550 in k2548 */
static void C_ccall f_6477(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6478,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[57]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6501,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6501(t8,((C_word*)t0)[3],t3);}

/* f_6478 in k6476 in generate-external-variables in k2627 in k2550 in k2548 */
static void C_ccall f_6478(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6478,3,t0,t1,t2);}
t3=C_i_vector_ref(t2,C_fix(0));
t4=C_i_vector_ref(t2,C_fix(1));
t5=C_i_vector_ref(t2,C_fix(2));
t6=(C_truep(t5)?lf[545]:lf[546]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6494,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:994: foreign-type-declaration */
t8=*((C_word*)lf[174]+1);
f_7412(4,t8,t7,t4,t3);}

/* k4796 in k4793 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:570: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[3],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_4756(2,t3,t2);}}

/* k4762 in k4757 in k4755 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4763,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],lf[254]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:576: gen */
t4=*((C_word*)lf[1]+1);
f_2554(10,t4,t3,C_SCHEME_TRUE,lf[257],((C_word*)t0)[6],lf[258],C_SCHEME_TRUE,lf[259],((C_word*)t0)[6],lf[260]);}}

/* k5337 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5339,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_immp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* c-backend.scm:670: bomb */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[345],t3);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:682: ##sys#bytevector? */
t3=*((C_word*)lf[347]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}}}

/* k5362 in k5355 in k5337 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5363,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_plus(&a,2,C_fix(2),t1));}

/* k4772 in k4770 in k4762 in k4757 in k4755 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4773,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* c-backend.scm:579: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[3],lf[255],t2,lf[256]);}

/* k4770 in k4762 in k4757 in k4755 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[4]);}

/* k5355 in k5337 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5357(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5357,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_block_size(((C_word*)t0)[3]);
/* c-backend.scm:682: words */
t4=*((C_word*)lf[346]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t2=C_block_size(((C_word*)t0)[3]);
t3=C_a_i_plus(&a,2,C_fix(2),t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5382,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5382(t7,((C_word*)t0)[2],C_fix(0),t3);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* c-backend.scm:670: bomb */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[345],t3);}}}

/* k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4743,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[57]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4855,a[2]=t5,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4855(t7,t3,t1);}

/* k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4748,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_eqp(lf[265],((C_word*)t0)[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4840,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[214]+1))){
/* c-backend.scm:562: string-append */
t5=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[214]+1),lf[270]);}
else{
t5=t4;
f_4840(2,t5,lf[271]);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4820,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:554: gen */
t5=*((C_word*)lf[1]+1);
f_2554(6,t5,t4,lf[277],((C_word*)t0)[7],lf[278],C_SCHEME_TRUE);}}

/* k4755 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[6]);}

/* k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4754,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4795,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_i_zerop(((C_word*)t0)[9]);
t5=t3;
f_4795(t5,C_i_not(t4));}
else{
t4=t3;
f_4795(t4,C_SCHEME_FALSE);}}

/* k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=t2;
f_4754(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:567: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[264]);}}

/* k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:566: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(40));}

/* k4757 in k4755 in k4753 in k4751 in k4749 in k4746 in k4742 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4758,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:573: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[261]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:581: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_make_character(41));}}

/* k6795 in k6568 in k6566 in k6564 */
static void C_ccall f_6796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6796,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[592],t1);
/* c-backend.scm:1015: intersperse */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_make_character(44));}

/* k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:544: lambda-literal-allocated */
t3=*((C_word*)lf[280]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[10]);}

/* k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_greater_or_equalp(((C_word*)t0)[6],*((C_word*)lf[251]+1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4880,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* c-backend.scm:546: lset-adjoin */
t5=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[2])[1],t4);}
else{
t3=t2;
f_4725(t3,C_SCHEME_UNDEFINED);}}

/* k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_fcall f_4725(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4725,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm:547: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_SCHEME_TRUE);}

/* k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4727,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:552: lambda-literal-callee-signatures */
t4=*((C_word*)lf[279]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[12]);}

/* f_4728 in k4726 in k4724 in k4722 in k4720 in k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4728(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4728,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(t2,*((C_word*)lf[251]+1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4738,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_plus(&a,2,t2,C_fix(1));
/* c-backend.scm:551: lset-adjoin */
t5=*((C_word*)lf[252]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,*((C_word*)lf[253]+1),((C_word*)((C_word*)t0)[2])[1],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6786 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1025: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[583],t1,lf[584]);}

/* k5494 in k5420 in k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5496(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5496,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:713: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[5],lf[364]);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
/* c-backend.scm:670: bomb */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[345],t3);}}

/* k5497 in k5494 in k5420 in k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:714: encode-literal */
t4=*((C_word*)lf[363]+1);
f_9618(3,t4,t3,((C_word*)t0)[4]);}

/* k5328 in map-loop858 in k5298 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5329(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5329,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5304(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5304(t6,((C_word*)t0)[5],t5);}}

/* k4736 */
static void C_ccall f_4738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_4706 in k4644 in prototypes in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4706,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:537: lambda-literal-argument-count */
t5=*((C_word*)lf[287]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k4708 */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm:538: lambda-literal-customizable */
t3=*((C_word*)lf[286]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5470 in k5466 in k5420 in k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:707: gen */
t2=*((C_word*)lf[1]+1);
f_2554(9,t2,((C_word*)t0)[2],lf[358],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[5],lf[359]);}

/* k4712 in k4710 in k4708 */
static void C_fcall f_4713(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4713,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4886,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
/* c-backend.scm:540: make-variable-list */
t5=*((C_word*)lf[284]+1);
f_6445(4,t5,t3,t4,lf[285]);}
else{
t4=((C_word*)t0)[4];
/* c-backend.scm:540: make-variable-list */
t5=*((C_word*)lf[284]+1);
f_6445(4,t5,t3,t4,lf[285]);}}

/* k4710 in k4708 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4898,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:539: lambda-literal-closure-size */
t4=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t3=t2;
f_4713(t3,C_SCHEME_FALSE);}}

/* k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:542: lambda-literal-rest-argument-mode */
t3=*((C_word*)lf[282]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:541: lambda-literal-rest-argument */
t3=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4718 in k4716 in k4714 in k4712 in k4710 in k4708 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:543: lambda-literal-direct */
t3=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}

/* for-each-loop402 in k3724 in k3717 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3733(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3733,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3742,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:333: g403 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5300 in k5298 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:678: reduce */
t2=*((C_word*)lf[342]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[343]+1),C_fix(0),t1);}

/* map-loop858 in k5298 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5304(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5304,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5329,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:678: g864 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5237(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3741 in for-each-loop402 in k3724 in k3717 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3733(t4,((C_word*)t0)[5],t2,t3);}

/* k3717 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3720,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3725,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:335: iota */
t5=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[4],C_fix(1),C_fix(1));}

/* k3710 in k3708 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:331: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* expr-args in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4292,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:453: pair-for-each */
t5=*((C_word*)lf[203]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* k9106 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9107,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9109,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1331: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[825],t2);}

/* k9108 in k9106 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1331: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k3724 in k3717 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3733,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3733(t6,t2,((C_word*)t0)[4],t1);}

/* k3726 in k3724 in k3717 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:336: gen */
t2=*((C_word*)lf[1]+1);
f_2554(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[152]);}

/* f_3720 in k3717 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3720,4,t0,t1,t2,t3);}
/* c-backend.scm:334: gen */
t4=*((C_word*)lf[1]+1);
f_2554(8,t4,t1,C_SCHEME_TRUE,C_make_character(116),t3,lf[151],t2,C_make_character(59));}

/* k9110 in k9108 in k9106 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k9112 in k9110 in k9108 in k9106 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1331: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3773 in for-each-loop376 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3765(t4,((C_word*)t0)[5],t2,t3);}

/* f_4298 in expr-args in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4298,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4301,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=C_i_car(t2);
/* c-backend.scm:456: expr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2653(t6,t1,t5,((C_word*)t0)[3]);}
else{
/* c-backend.scm:455: gen */
t5=*((C_word*)lf[1]+1);
f_2554(3,t5,t3,C_make_character(44));}}

/* k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7866(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7866,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:1213: foreign-type-declaration */
t4=*((C_word*)lf[174]+1);
f_7412(4,t4,t2,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=t2;
f_7881(t5,C_eqp(lf[751],t4));}
else{
t4=t2;
f_7881(t4,C_SCHEME_FALSE);}}}

/* k9128 in k9126 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1332: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9126 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9127,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9129,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1332: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[826],t2);}

/* k7853 in map-loop1654 in k7810 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7854(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7854,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7829(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7829(t6,((C_word*)t0)[5],t5);}}

/* k9130 in k9128 in k9126 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k9132 in k9130 in k9128 in k9126 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1332: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7886 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1215: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[730],t1,lf[731],((C_word*)t0)[3]);}

/* k9144 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9145,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9147,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1333: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[828],t2);}

/* k9146 in k9144 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1333: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9148 in k9146 in k9144 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1333: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[827],((C_word*)t0)[4]);}

/* k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7881(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7881,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1215: ->string */
t4=*((C_word*)lf[732]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_7896(t5,C_eqp(lf[750],t4));}
else{
t4=t2;
f_7896(t4,C_SCHEME_FALSE);}}}

/* for-each-loop376 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_3765(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3765,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3774,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* c-backend.scm:325: g377 */
t9=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6729 in for-each-loop1232 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in k6568 in ... */
static void C_fcall f_6731(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6731,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(0));
t4=C_slot(((C_word*)t0)[3],C_fix(0));
t5=C_slot(((C_word*)t0)[4],C_fix(0));
/* c-backend.scm:1040: g1233 */
t6=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,t3,t4,t5);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k6732 in k6729 in for-each-loop1232 in k6638 in k6607 in k6605 in k6603 in k6601 in k6599 in k6597 in k6595 in k6593 in k6591 in k6589 in k6587 in k6585 in k6582 in k6580 in k6578 in k6576 in k6574 in k6572 in ... */
static void C_ccall f_6733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[5])[1];
f_6724(t5,((C_word*)t0)[6],t2,t3,t4);}

/* k8017 in map-loop1702 in k7971 in k7954 in k7939 in k7924 in k7909 in k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in ... */
static void C_ccall f_8018(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8018,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7993(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7993(t6,((C_word*)t0)[5],t5);}}

/* k9150 in k9148 in k9146 in k9144 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1333: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3057 in k3053 in k3042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* c-backend.scm:171: gen */
t3=*((C_word*)lf[1]+1);
f_2554(5,t3,((C_word*)t0)[3],lf[58],t2,lf[59]);}

/* k7871 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1213: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[729],t1);}

/* k3053 in k3042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3054,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[57]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3067,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3067(t7,t3,((C_word*)t0)[2],t1);}

/* k6227 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_6228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm:773: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[492]);}
else{
/* c-backend.scm:773: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[493]);}}

/* k9166 in k9164 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1334: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k9164 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9165,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9167,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1334: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[829],t2);}

/* k9168 in k9166 in k9164 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k3021 in k3019 in k3017 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3022,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:159: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k3023 in k3021 in k3019 in k3017 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:160: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3019 in k3017 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:158: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[52]);}

/* k7894 in k7879 in k7864 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7896(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7896,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1217: ->string */
t4=*((C_word*)lf[732]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[6],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_7911(t5,C_eqp(lf[749],t4));}
else{
t4=t2;
f_7911(t4,C_SCHEME_FALSE);}}}

/* k6201 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in ... */
static void C_fcall f_6203(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6203,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:790: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[480]);}
else{
t2=((C_word*)t0)[3];
f_5721(2,t2,C_SCHEME_UNDEFINED);}}

/* k6204 in k6201 in k5718 in k5716 in k5714 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in ... */
static void C_ccall f_6205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:791: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[3],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_5721(2,t3,t2);}}

/* f_4212 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4212,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k3000 in k2998 in k2996 in k2994 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:153: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k4216 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_4218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:450: bomb */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[202],t1);}

/* k6259 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_6260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:770: gen */
t2=*((C_word*)lf[1]+1);
f_2554(6,t2,((C_word*)t0)[2],lf[495],t1,lf[496],C_SCHEME_TRUE);}

/* k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3705(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=t1;
t4=C_i_check_list_2(t3,lf[57]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3719,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3765,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3765(t9,t5,((C_word*)t0)[6],t3);}

/* f_3706 in k3704 in k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3706,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3709,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:329: gen */
t5=*((C_word*)lf[1]+1);
f_2554(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3708 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:330: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2653(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3702 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_plus(&a,2,t1,((C_word*)t0)[7]);
/* c-backend.scm:326: iota */
t4=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[5],t3,C_fix(1));}

/* k5466 in k5420 in k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5467,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5471,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:706: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,t3,C_SCHEME_TRUE,((C_word*)t0)[4],lf[360]);}

/* k6245 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 */
static void C_ccall f_6246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(*((C_word*)lf[214]+1))){
t3=t2;
f_6248(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm:781: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[488]);}}

/* k6247 in k6245 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 in ... */
static void C_ccall f_6248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:782: gen */
t2=*((C_word*)lf[1]+1);
f_2554(16,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[482],C_SCHEME_TRUE,lf[483],C_SCHEME_TRUE,lf[484],C_SCHEME_TRUE,lf[485],((C_word*)t0)[3],lf[486],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[487],((C_word*)t0)[3]);}

/* k7807 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1204: str */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7802(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7802,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7811,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm:1206: foreign-type-declaration */
t5=*((C_word*)lf[174]+1);
f_7412(4,t5,t3,t4,lf[728]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7866,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[7],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_7866(t5,C_eqp(lf[608],t4));}
else{
t4=t2;
f_7866(t4,C_SCHEME_FALSE);}}}

/* k3883 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:351: lambda-literal-closure-size */
t2=*((C_word*)lf[148]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6509 in for-each-loop1157 in k6476 in generate-external-variables in k2627 in k2550 in k2548 */
static void C_ccall f_6510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6501(t3,((C_word*)t0)[4],t2);}

/* k3880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3881,2,t0,t1);}
t2=C_i_zerop(t1);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:353: gen */
t5=*((C_word*)lf[1]+1);
f_2554(4,t5,t4,((C_word*)t0)[10],C_make_character(40));}

/* k3048 in k3046 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:169: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(44));}

/* k3046 */
static void C_ccall f_3047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:168: expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2653(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_3044 in k3042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3044,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3047,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:167: gen */
t5=*((C_word*)lf[1]+1);
f_2554(5,t5,t4,lf[55],t3,lf[56]);}

/* k3042 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:170: iota */
t4=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],C_fix(1),C_fix(1));}

/* k6229 in k6227 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in k5672 in ... */
static void C_ccall f_6230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm:775: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[490]);}
else{
/* c-backend.scm:776: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[491]);}}

/* k6231 in k6229 in k6227 in k5712 in k5710 in k5708 in k5706 in k5704 in k5702 in k5700 in k5698 in k5696 in k5694 in k5692 in k5690 in k5688 in k5686 in k5682 in k5680 in k5678 in k5676 in k5674 in ... */
static void C_ccall f_6232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:777: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop1157 in k6476 in generate-external-variables in k2627 in k2550 in k2548 */
static void C_fcall f_6501(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6501,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6510,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:989: g1158 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop1654 in k7810 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_fcall f_7829(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7829,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7854,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1209: g1660 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1016: foreign-stub-return-type */
t3=*((C_word*)lf[591]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k7825 in k7810 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1208: string-intersperse */
t2=*((C_word*)lf[226]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[727]);}

/* k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1018: foreign-stub-body */
t3=*((C_word*)lf[589]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}

/* k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm:1017: foreign-stub-name */
t3=*((C_word*)lf[590]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k6578 in k6576 in k6574 in k6572 in k6568 in k6566 in k6564 */
static void C_ccall f_6579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm:1019: foreign-stub-argument-names */
t3=*((C_word*)lf[588]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[10]);}

/* k5187 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5111(t2,C_i_zerop(t1));}

/* k9200 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9201,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9203,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1336: display */
t4=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[831],t2);}

/* k9206 in k9204 in k9202 in k9200 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1336: get-output-string */
t2=*((C_word*)lf[336]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9204 in k9202 in k9200 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[337]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[4]);}

/* k9202 in k9200 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1336: display */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k7813 in k7810 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1205: string-append */
t2=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[723],t1,lf[724]);}

/* f_6562 in generate-foreign-stubs in k2627 in k2550 in k2548 */
static void C_ccall f_6562(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6562,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6565,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1011: foreign-stub-id */
t4=*((C_word*)lf[596]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_7816 in k7810 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7816,3,t0,t1,t2);}
t3=*((C_word*)lf[174]+1);
/* c-backend.scm:1209: g1677 */
t4=*((C_word*)lf[174]+1);
f_7412(4,t4,t1,t2,lf[725]);}

/* k6566 in k6564 */
static void C_ccall f_6567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:1013: foreign-stub-argument-types */
t3=*((C_word*)lf[594]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5420 in k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5421(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5421,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=*((C_word*)lf[352]+1);
t3=C_eqp(((C_word*)t0)[3],*((C_word*)lf[352]+1));
if(C_truep(t3)){
/* c-backend.scm:697: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],lf[353]);}
else{
if(C_truep(C_booleanp(((C_word*)t0)[3]))){
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm:699: gen */
t4=*((C_word*)lf[1]+1);
f_2554(7,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(61),lf[354],C_make_character(59));}
else{
/* c-backend.scm:699: gen */
t4=*((C_word*)lf[1]+1);
f_2554(7,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(61),lf[355],C_make_character(59));}}
else{
if(C_truep(C_charp(((C_word*)t0)[3]))){
t4=C_fix(C_character_code(((C_word*)t0)[3]));
/* c-backend.scm:701: gen */
t5=*((C_word*)lf[1]+1);
f_2554(7,t5,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],lf[356],t4,lf[357]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t4=C_slot(((C_word*)t0)[3],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5467,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:704: c-ify-string */
t6=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
/* c-backend.scm:709: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[4],lf[361]);}
else{
t4=C_immp(((C_word*)t0)[3]);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_lambdainfop(((C_word*)t0)[3]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_fixnump(((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_5496(t8,t6);}
else{
t8=C_immp(((C_word*)t0)[3]);
t9=t7;
f_5496(t9,C_i_not(t8));}}}}}}}}}

/* k6564 */
static void C_ccall f_6565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6567,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:1012: real-name2 */
t3=*((C_word*)lf[595]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}

/* k7810 in k7800 in k7785 in k7770 in k7730 in k7715 in k7704 in k7605 in k7586 in k7481 in foreign-type-declaration in k2627 in k2550 in k2548 */
static void C_ccall f_7811(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7814,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7816,tmp=(C_word)a,a+=2,tmp);
t8=C_i_cddr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[726]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7827,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7829,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7829(t14,t10,t8);}

/* k6568 in k6566 in k6564 */
static void C_ccall f_6569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6569,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6573,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6796,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1015: make-variable-list */
t5=*((C_word*)lf[284]+1);
f_6445(4,t5,t4,t2,lf[593]);}

/* k5177 in k5117 in k5112 in k5110 in k5108 in k5106 in k5104 in k5102 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_greaterp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_5147(2,t3,t2);}
else{
/* c-backend.scm:645: lambda-literal-external */
t3=*((C_word*)lf[335]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7248,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm:1113: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,C_SCHEME_TRUE);}

/* k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7248,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7334,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1115: cleanup */
t4=*((C_word*)lf[497]+1);
f_6365(3,t4,t3,((C_word*)t0)[10]);}
else{
t3=t2;
f_7250(2,t3,C_SCHEME_UNDEFINED);}}

/* k5414 in gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5416(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5416,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm:694: gen */
t2=*((C_word*)lf[1]+1);
f_2554(7,t2,((C_word*)t0)[2],C_SCHEME_TRUE,((C_word*)t0)[3],lf[350],((C_word*)t0)[4],lf[351]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:695: block-variable-literal? */
t3=*((C_word*)lf[348]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* k9226 in k9065 in foreign-result-conversion in k2627 in k2550 in k2548 */
static void C_ccall f_9227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9227,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1340: g2023 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9252,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=C_u_i_length(t3);
t5=t2;
f_9252(t5,C_fixnum_greater_or_equal_p(t4,C_fix(2)));}
else{
t3=t2;
f_9252(t3,C_SCHEME_FALSE);}}}

/* k3852 in k3837 in k3835 in k3880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* c-backend.scm:359: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[3],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_3840(2,t3,t2);}}

/* k5400 in loop in k5355 in k5337 in k5242 in literal-size in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_5401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5401,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],t1);
/* c-backend.scm:688: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5382(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* gen-lit in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5409(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5409,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5416,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5533,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:693: big-fixnum? */
t6=*((C_word*)lf[365]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t4;
f_5416(t5,C_SCHEME_FALSE);}}

/* doloop830 in literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5196(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5196,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5205,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5219,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm:667: open-output-string */
t7=*((C_word*)lf[340]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* literal-frame in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_fcall f_5190(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5190,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5196,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5196(t5,t1,C_fix(0),((C_word*)t0)[3]);}

/* for-each-loop1181 in generate-foreign-callback-stub-prototypes in k2627 in k2550 in k2548 */
static void C_fcall f_6539(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6539,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6548,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-backend.scm:1000: g1182 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7264 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[565],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t2;
f_7268(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7290,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1127: foreign-argument-conversion */
t5=*((C_word*)lf[173]+1);
f_8377(3,t5,t4,((C_word*)t0)[3]);}}

/* k2941 in k2939 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[6]);
/* c-backend.scm:137: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,t2,C_make_character(44),t3,C_make_character(44));}

/* k2943 in k2941 in k2939 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:138: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k7267 in k7264 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1128: gen */
t3=*((C_word*)lf[1]+1);
f_2554(7,t3,t2,lf[651],((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[5],C_make_character(41));}

/* k2939 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:136: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k7262 */
static void C_ccall f_7263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1122: gen */
t2=*((C_word*)lf[1]+1);
f_2554(9,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[646],t1,((C_word*)t0)[3],lf[647],C_SCHEME_TRUE,lf[648]);}

/* k2945 in k2943 in k2941 in k2939 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:139: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3835 in k3880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3864,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm:355: gen */
t4=*((C_word*)lf[1]+1);
f_2554(5,t4,t3,lf[155],((C_word*)t0)[10],C_make_character(41));}
else{
t3=t2;
f_3838(2,t3,C_SCHEME_UNDEFINED);}}

/* k3837 in k3835 in k3880 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=t2;
f_3840(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:358: expr */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2653(t4,t3,((C_word*)t0)[8],((C_word*)t0)[5]);}}

/* k6528 in k6526 */
static void C_ccall f_6529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:1005: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k6526 */
static void C_ccall f_6527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:1004: generate-foreign-callback-header */
t3=*((C_word*)lf[547]+1);
f_7361(4,t3,t2,lf[548],((C_word*)t0)[3]);}

/* k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7256(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7257,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7266,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7292,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7292(t9,t5,t3,t4);}

/* f_6524 in generate-foreign-callback-stub-prototypes in k2627 in k2550 in k2548 */
static void C_ccall f_6524(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6524,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6527,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1003: gen */
t4=*((C_word*)lf[1]+1);
f_2554(3,t4,t3,C_SCHEME_TRUE);}

/* f_7257 in k7255 in k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7257,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7263,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm:1122: foreign-result-conversion */
t5=*((C_word*)lf[168]+1);
f_8967(4,t5,t4,t3,lf[649]);}

/* ##compiler#generate-foreign-callback-stub-prototypes in k2627 in k2550 in k2548 */
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6521,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6524,tmp=(C_word)a,a+=2,tmp);
t4=C_i_check_list_2(t2,lf[57]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6539,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6539(t8,t1,t2);}

/* k7253 in k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm:1119: gen */
t3=*((C_word*)lf[1]+1);
f_2554(4,t3,t2,C_SCHEME_TRUE,lf[653]);}

/* k7251 in k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_string_equal_p(lf[654],((C_word*)t0)[8]))){
/* c-backend.scm:1117: gen */
t3=*((C_word*)lf[1]+1);
f_2554(8,t3,t2,C_make_character(123),C_SCHEME_TRUE,lf[655],((C_word*)t0)[8],lf[656],lf[657]);}
else{
/* c-backend.scm:1117: gen */
t3=*((C_word*)lf[1]+1);
f_2554(8,t3,t2,C_make_character(123),C_SCHEME_TRUE,lf[655],((C_word*)t0)[8],lf[656],lf[658]);}}

/* k7249 in k7247 in k7245 in k6838 in k6834 in k6832 in k6830 in k6828 */
static void C_ccall f_7250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7250,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm:1116: generate-foreign-callback-header */
t3=*((C_word*)lf[547]+1);
f_7361(4,t3,t2,lf[659],((C_word*)t0)[9]);}

/* k3803 in k3801 in k3799 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:341: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k3799 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f10617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:340: expr-args */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4292(t4,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* c-backend.scm:339: gen */
t3=*((C_word*)lf[1]+1);
f_2554(3,t3,t2,lf[153]);}}

/* k3801 in k3799 in k3812 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:340: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2967 in k2965 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[6]);
t4=C_a_i_plus(&a,2,t3,C_fix(1));
/* c-backend.scm:144: gen */
t5=*((C_word*)lf[1]+1);
f_2554(5,t5,t2,lf[45],t4,lf[46]);}

/* k2965 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* c-backend.scm:143: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* k3898 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_3899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm:369: expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4292(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k2969 in k2967 in k2965 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* c-backend.scm:145: expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2653(t4,t2,t3,((C_word*)t0)[5]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_backend_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("backend_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2508)){
C_save(t1);
C_rereclaim2(2508*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,867);
lf[0]=C_h_intern(&lf[0],15,"\010compileroutput");
lf[1]=C_h_intern(&lf[1],12,"\010compilergen");
lf[2]=C_h_intern(&lf[2],7,"newline");
lf[3]=C_h_intern(&lf[3],7,"display");
lf[4]=C_h_intern(&lf[4],17,"\010compilergen-list");
lf[5]=C_h_intern(&lf[5],11,"intersperse");
lf[6]=C_h_intern(&lf[6],18,"\010compilerunique-id");
lf[7]=C_h_intern(&lf[7],22,"\010compilergenerate-code");
lf[8]=C_h_intern(&lf[8],13,"\010compilerbomb");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\021can\047t find lambda");
lf[10]=C_h_intern(&lf[10],18,"\003syshash-table-ref");
lf[11]=C_h_intern(&lf[11],14,"\004coreimmediate");
lf[12]=C_h_intern(&lf[12],4,"bool");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[15]=C_h_intern(&lf[15],4,"char");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\021C_make_character(");
lf[17]=C_h_intern(&lf[17],3,"nil");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_LIST");
lf[19]=C_h_intern(&lf[19],3,"fix");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fix(");
lf[21]=C_h_intern(&lf[21],3,"eof");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_FILE");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\015bad immediate");
lf[24]=C_h_intern(&lf[24],12,"\004coreliteral");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\013((C_word)li");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[28]=C_h_intern(&lf[28],2,"if");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\013if(C_truep(");
lf[32]=C_h_intern(&lf[32],9,"\004coreproc");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[34]=C_h_intern(&lf[34],9,"\004corebind");
lf[35]=C_h_intern(&lf[35],16,"\004corelet_unboxed");
lf[36]=C_h_intern(&lf[36],8,"\004coreref");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\002)[");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word\052)");
lf[39]=C_h_intern(&lf[39],10,"\004coreunbox");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\004)[1]");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word\052)");
lf[42]=C_h_intern(&lf[42],13,"\004coreupdate_i");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[44]=C_h_intern(&lf[44],11,"\004coreupdate");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\002)+");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word \052)");
lf[48]=C_h_intern(&lf[48],16,"\004coreupdatebox_i");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[51]=C_h_intern(&lf[51],14,"\004coreupdatebox");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\004)+1,");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word \052)");
lf[54]=C_h_intern(&lf[54],12,"\004coreclosure");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002a[");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\002]=");
lf[57]=C_h_intern(&lf[57],8,"for-each");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\021tmp=(C_word)a,a+=");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\005,tmp)");
lf[60]=C_h_intern(&lf[60],4,"iota");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\023(\052a=C_CLOSURE_TYPE|");
lf[62]=C_h_intern(&lf[62],8,"\004corebox");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\030,tmp=(C_word)a,a+=2,tmp)");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\031(\052a=C_VECTOR_TYPE|1,a[1]=");
lf[65]=C_h_intern(&lf[65],10,"\004corelocal");
lf[66]=C_h_intern(&lf[66],13,"\004coresetlocal");
lf[67]=C_h_intern(&lf[67],11,"\004coreglobal");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\017C_retrieve2(lf[");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002],");
lf[72]=C_h_intern(&lf[72],21,"\010compilerc-ify-string");
lf[73]=C_h_intern(&lf[73],28,"\003syssymbol->qualified-string");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fast_retrieve(lf[");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[78]=C_h_intern(&lf[78],14,"\004coresetglobal");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\012 /\052 (set! ");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\011 ...) \052/,");
lf[81]=C_h_intern(&lf[81],21,"\010compileruncommentify");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\015C_mutate(&lf[");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate((C_word\052)lf[");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\003]+1");
lf[86]=C_h_intern(&lf[86],16,"\004coresetglobal_i");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\005] /\052 ");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\005 \052/ =");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\024C_set_block_item(lf[");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\005] /\052 ");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\006 \052/,0,");
lf[93]=C_h_intern(&lf[93],14,"\004coreundefined");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\022C_SCHEME_UNDEFINED");
lf[95]=C_h_intern(&lf[95],9,"\004corecall");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\002c=");
lf[101]=C_h_intern(&lf[101],26,"lambda-literal-temporaries");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[103]=C_h_intern(&lf[103],22,"lambda-literal-looping");
lf[104]=C_h_intern(&lf[104],17,"lambda-literal-id");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[107]=C_h_intern(&lf[107],35,"\010compilerno-global-procedure-checks");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\024(void\052)(\052((C_word\052)(");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\005)+1))");
lf[110]=C_h_intern(&lf[110],13,"string-append");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\030C_retrieve2_symbol_proc(");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fast_retrieve_proc(");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\037C_fast_retrieve_symbol_proc(lf[");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\016\052((C_word\052)lf[");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[134]=C_h_intern(&lf[134],6,"unsafe");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\024(void\052)(\052((C_word\052)t");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\004+1))");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\026C_fast_retrieve_proc(t");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[139]=C_h_intern(&lf[139],28,"\010compilerno-procedure-checks");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[142]=C_h_intern(&lf[142],24,"\010compileremit-trace-info");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\011C_trace(\042");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\003\042);");
lf[145]=C_h_intern(&lf[145],17,"\010compilerslashify");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[148]=C_h_intern(&lf[148],27,"lambda-literal-closure-size");
lf[149]=C_h_intern(&lf[149],28,"\010compilersource-info->string");
lf[150]=C_h_intern(&lf[150],12,"\004corerecurse");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\003t0,");
lf[154]=C_h_intern(&lf[154],16,"\004coredirect_call");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i(&a,");
lf[156]=C_h_intern(&lf[156],13,"\004corecallunit");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel(");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\024,C_SCHEME_UNDEFINED,");
lf[161]=C_h_intern(&lf[161],11,"\004corereturn");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\007return(");
lf[164]=C_h_intern(&lf[164],11,"\004coreinline");
lf[165]=C_h_intern(&lf[165],20,"\004coreinline_allocate");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\004(&a,");
lf[167]=C_h_intern(&lf[167],15,"\004coreinline_ref");
lf[168]=C_h_intern(&lf[168],34,"\010compilerforeign-result-conversion");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[170]=C_h_intern(&lf[170],18,"\004coreinline_update");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[173]=C_h_intern(&lf[173],36,"\010compilerforeign-argument-conversion");
lf[174]=C_h_intern(&lf[174],33,"\010compilerforeign-type-declaration");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[176]=C_h_intern(&lf[176],19,"\004coreinline_loc_ref");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\003\052((");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_data_pointer(");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[182]=C_h_intern(&lf[182],22,"\004coreinline_loc_update");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\003))=");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\004((\052(");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_data_pointer(");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[188]=C_h_intern(&lf[188],16,"\004coreunboxed_ref");
lf[189]=C_h_intern(&lf[189],17,"\004coreunboxed_set!");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\002((");
lf[192]=C_h_intern(&lf[192],19,"\004coreinline_unboxed");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[194]=C_h_intern(&lf[194],11,"\004coreswitch");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\010default:");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\005case ");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\007switch(");
lf[199]=C_h_intern(&lf[199],9,"\004corecond");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\002)\077");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\011(C_truep(");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\010bad form");
lf[203]=C_h_intern(&lf[203],13,"pair-for-each");
lf[204]=C_h_intern(&lf[204],17,"\003sysstring-append");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[206]=C_h_intern(&lf[206],30,"\010compilerexternal-protos-first");
lf[207]=C_h_intern(&lf[207],50,"\010compilergenerate-foreign-callback-stub-prototypes");
lf[208]=C_h_intern(&lf[208],22,"foreign-callback-stubs");
lf[209]=C_h_intern(&lf[209],29,"\010compilerforeign-declarations");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\002\052/");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\012#include \042");
lf[212]=C_h_intern(&lf[212],28,"\010compilertarget-include-file");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[214]=C_h_intern(&lf[214],18,"\010compilerunit-name");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\011   unit: ");
lf[216]=C_h_intern(&lf[216],19,"\010compilerused-units");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\017   used units: ");
lf[218]=C_h_intern(&lf[218],27,"\010compilercompiler-arguments");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\022/\052 Generated from ");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\030 by the CHICKEN compiler");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\031   http://www.call-cc.org");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\021   command line: ");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[226]=C_h_intern(&lf[226],18,"string-intersperse");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[228]=C_h_intern(&lf[228],12,"string-split");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[230]=C_h_intern(&lf[230],15,"chicken-version");
lf[231]=C_h_intern(&lf[231],18,"\003sysdecode-seconds");
lf[232]=C_h_intern(&lf[232],15,"current-seconds");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel)");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\036C_externimport void C_ccall C_");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000._toplevel(C_word c,C_word d,C_word k) C_noret;");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\002};");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\002,0");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_char C_TLS li");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\026[] C_aligned={C_lihdr(");
lf[241]=C_h_intern(&lf[241],23,"\003syslambda-info->string");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000)static double C_possibly_force_alignment;");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\027static C_TLS C_word lf[");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000+static C_PTABLE_ENTRY \052create_ptable(void);");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[247]=C_h_intern(&lf[247],9,"make-list");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\007,C_word");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\025typedef void (\052C_proc");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\010)(C_word");
lf[251]=C_h_intern(&lf[251],21,"small-parameter-limit");
lf[252]=C_h_intern(&lf[252],11,"lset-adjoin");
lf[253]=C_h_intern(&lf[253],1,"=");
lf[254]=C_h_intern(&lf[254],4,"none");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\016,...) C_noret;");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\010 C_noret");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word \052a");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[265]=C_h_intern(&lf[265],8,"toplevel");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\034C_externexport void C_ccall ");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[279]=C_h_intern(&lf[279],32,"lambda-literal-callee-signatures");
lf[280]=C_h_intern(&lf[280],24,"lambda-literal-allocated");
lf[281]=C_h_intern(&lf[281],21,"lambda-literal-direct");
lf[282]=C_h_intern(&lf[282],33,"lambda-literal-rest-argument-mode");
lf[283]=C_h_intern(&lf[283],28,"lambda-literal-rest-argument");
lf[284]=C_h_intern(&lf[284],27,"\010compilermake-variable-list");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[286]=C_h_intern(&lf[286],27,"lambda-literal-customizable");
lf[287]=C_h_intern(&lf[287],29,"lambda-literal-argument-count");
lf[288]=C_h_intern(&lf[288],23,"\003syshash-table-for-each");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\020C_adjust_stack(-");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\010=C_pick(");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[295]=C_h_intern(&lf[295],27,"\010compilermake-argument-list");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\006(a,n);");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\007_vector");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\017=C_restore_rest");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n+1);");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n\0523);");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\022n=C_rest_count(0);");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\006int n;");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word \052a,t");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\016(void \052dummy){");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000 (void \052dummy) C_regparm C_noret;");
lf[335]=C_h_intern(&lf[335],23,"lambda-literal-external");
lf[336]=C_h_intern(&lf[336],17,"get-output-string");
lf[337]=C_h_intern(&lf[337],19,"\003syswrite-char/port");
lf[338]=C_h_intern(&lf[338],5,"write");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[340]=C_h_intern(&lf[340],18,"open-output-string");
lf[341]=C_h_intern(&lf[341],25,"\010compilerwords-per-flonum");
lf[342]=C_h_intern(&lf[342],6,"reduce");
lf[343]=C_h_intern(&lf[343],1,"+");
lf[344]=C_h_intern(&lf[344],12,"vector->list");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\035type of literal not supported");
lf[346]=C_h_intern(&lf[346],14,"\010compilerwords");
lf[347]=C_h_intern(&lf[347],15,"\003sysbytevector\077");
lf[348]=C_h_intern(&lf[348],32,"\010compilerblock-variable-literal\077");
lf[349]=C_h_intern(&lf[349],19,"\010compilerimmediate\077");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\007=C_fix(");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[352]=C_h_intern(&lf[352],19,"\003sysundefined-value");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\024=C_SCHEME_UNDEFINED;");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\022=C_make_character(");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\014C_h_intern(&");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\001=");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\026=C_SCHEME_END_OF_LIST;");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[363]=C_h_intern(&lf[363],23,"\010compilerencode-literal");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\034=C_decode_literal(C_heaptop,");
lf[365]=C_h_intern(&lf[365],20,"\010compilerbig-fixnum\077");
lf[366]=C_h_intern(&lf[366],6,"modulo");
lf[367]=C_h_intern(&lf[367],14,"\003syscopy-bytes");
lf[368]=C_h_intern(&lf[368],11,"make-string");
lf[369]=C_h_intern(&lf[369],19,"lambda-literal-body");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\022C_word \052a=C_alloc(");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\004);}}");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000#=C_restore_rest(a,C_rest_count(0));");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\015a=C_alloc((c-");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\005)\0523);");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\012((void\052)tr");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\005,NULL");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\012((void\052)tr");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\022C_register_lf2(lf,");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\022,create_ptable());");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\023C_initialize_lf(lf,");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\017if(!C_demand_2(");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\015C_rereclaim2(");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\024\052sizeof(C_word), 1);");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\016t1=C_restore;}");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\030C_check_nursery_minimum(");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\015if(!C_demand(");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000,C_reclaim((void\052)toplevel_trampoline,NULL);}");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\027toplevel_initialized=1;");
lf[418]=C_h_intern(&lf[418],26,"\010compilertarget-stack-size");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\017C_resize_stack(");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[421]=C_h_intern(&lf[421],25,"\010compilertarget-heap-size");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\027C_heap_size_is_fixed=1;");
lf[425]=C_h_intern(&lf[425],40,"\010compilerdisable-stack-overflow-checking");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\033C_disable_overflow_check=1;");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000;if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\036else C_toplevel_entry(C_text(\042");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\004\042));");
lf[431]=C_h_intern(&lf[431],4,"fold");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\035if(!C_demand(c\052C_SIZEOF_PAIR+");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[434]=C_h_intern(&lf[434],28,"\010compilerinsert-timer-checks");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[439]=C_h_intern(&lf[439],23,"\010compilerno-argc-checks");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\004,c2,");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\014C_save_rest(");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\017C_word \052a,c2=c;");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\012va_list v;");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\026if(!C_stack_probe(a)){");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\027if(!C_stack_probe(&a)){");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\006if(c!=");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\021) C_bad_argc_2(c,");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word ab[");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\010],\052a=ab;");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\027C_stack_overflow_check;");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word \052a;");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[465]=C_h_intern(&lf[465],6,"fixnum");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[467]=C_h_intern(&lf[467],6,"flonum");
lf[468]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[469]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[470]=C_h_intern(&lf[470],7,"pointer");
lf[471]=C_decode_literal(C_heaptop,"\376B\000\000\006void \052");
lf[472]=C_h_intern(&lf[472],3,"int");
lf[473]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[474]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[475]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[476]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[477]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[478]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[479]=C_decode_literal(C_heaptop,"\376B\000\000\004,...");
lf[480]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word \052a");
lf[481]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[482]=C_decode_literal(C_heaptop,"\376B\000\000!C_noret_decl(toplevel_trampoline)");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000Gstatic void C_fcall toplevel_trampoline(void \052dummy) C_regparm C_noret;");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000\077C_regparm static void C_fcall toplevel_trampoline(void \052dummy){");
lf[485]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[486]=C_decode_literal(C_heaptop,"\376B\000\000\042(2,C_SCHEME_UNDEFINED,C_restore);}");
lf[487]=C_decode_literal(C_heaptop,"\376B\000\000\017void C_ccall C_");
lf[488]=C_decode_literal(C_heaptop,"\376B\000\000\022C_main_entry_point");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000(static C_TLS int toplevel_initialized=0;");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[494]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[495]=C_decode_literal(C_heaptop,"\376B\000\000\003/\052 ");
lf[496]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[497]=C_h_intern(&lf[497],16,"\010compilercleanup");
lf[498]=C_h_intern(&lf[498],18,"\010compilerdebugging");
lf[499]=C_h_intern(&lf[499],1,"o");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000 dropping unused closure argument");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[503]=C_h_intern(&lf[503],34,"lambda-literal-unboxed-temporaries");
lf[504]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[505]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[506]=C_h_intern(&lf[506],18,"\010compilerreal-name");
lf[507]=C_decode_literal(C_heaptop,"\376B\000\000\002/\052");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000\002\052/");
lf[509]=C_decode_literal(C_heaptop,"\376B\000\000\021/\052 end of file \052/");
lf[510]=C_h_intern(&lf[510],35,"\010compilercollected-debugging-output");
lf[511]=C_h_intern(&lf[511],25,"emit-procedure-table-info");
lf[512]=C_h_intern(&lf[512],31,"generate-foreign-callback-stubs");
lf[513]=C_h_intern(&lf[513],31,"\010compilergenerate-foreign-stubs");
lf[514]=C_h_intern(&lf[514],29,"\010compilerforeign-lambda-stubs");
lf[515]=C_h_intern(&lf[515],36,"\010compilergenerate-external-variables");
lf[516]=C_h_intern(&lf[516],27,"\010compilerexternal-variables");
lf[517]=C_h_intern(&lf[517],1,"p");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000\030code generation phase...");
lf[519]=C_h_intern(&lf[519],31,"flonum-maximum-decimal-exponent");
lf[520]=C_h_intern(&lf[520],22,"flonum-print-precision");
lf[521]=C_decode_literal(C_heaptop,"\376B\000\000\001{");
lf[522]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\016return ptable;");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000\005#else");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\014return NULL;");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[528]=C_decode_literal(C_heaptop,"\376B\000\000\052static C_PTABLE_ENTRY \052create_ptable(void)");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\015{NULL,NULL}};");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[532]=C_decode_literal(C_heaptop,"\376B\000\000\013_toplevel},");
lf[533]=C_decode_literal(C_heaptop,"\376B\000\000\014C_toplevel},");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000\002},");
lf[535]=C_decode_literal(C_heaptop,"\376B\000\000\002{\042");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\011\042,(void\052)");
lf[537]=C_h_intern(&lf[537],29,"\010compilerstring->c-identifier");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000\035static C_PTABLE_ENTRY ptable[");
lf[540]=C_decode_literal(C_heaptop,"\376B\000\000\005] = {");
lf[541]=C_h_intern(&lf[541],19,"\003syshash-table-size");
lf[542]=C_h_intern(&lf[542],11,"string-copy");
lf[543]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[544]=C_h_intern(&lf[544],13,"list-tabulate");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[546]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[547]=C_h_intern(&lf[547],41,"\010compilergenerate-foreign-callback-header");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\017C_externexport ");
lf[549]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[552]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[553]=C_h_intern(&lf[553],14,"symbol->string");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\000\015#undef return");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ret:");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[563]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[565]=C_h_intern(&lf[565],4,"void");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[567]=C_decode_literal(C_heaptop,"\376B\000\000\004C_r=");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\0003int C_level=C_save_callback_continuation(&C_a,C_k);");
lf[569]=C_decode_literal(C_heaptop,"\376B\000\0002C_word C_r=C_SCHEME_UNDEFINED,\052C_a=(C_word\052)C_buf;");
lf[570]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[572]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[574]=C_decode_literal(C_heaptop,"\376B\000\000\014) C_regparm;");
lf[575]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static C_word C_fcall ");
lf[576]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[577]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[578]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[579]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[580]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_word C_fcall ");
lf[581]=C_decode_literal(C_heaptop,"\376B\000\000\042#define return(x) C_cblock C_r = (");
lf[582]=C_decode_literal(C_heaptop,"\376B\000\000\036(x))); goto C_ret; C_cblockend");
lf[583]=C_decode_literal(C_heaptop,"\376B\000\000\010/\052 from ");
lf[584]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[585]=C_h_intern(&lf[585],21,"foreign-stub-callback");
lf[586]=C_h_intern(&lf[586],16,"foreign-stub-cps");
lf[587]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[588]=C_h_intern(&lf[588],27,"foreign-stub-argument-names");
lf[589]=C_h_intern(&lf[589],17,"foreign-stub-body");
lf[590]=C_h_intern(&lf[590],17,"foreign-stub-name");
lf[591]=C_h_intern(&lf[591],24,"foreign-stub-return-type");
lf[592]=C_decode_literal(C_heaptop,"\376B\000\000\014C_word C_buf");
lf[593]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[594]=C_h_intern(&lf[594],27,"foreign-stub-argument-types");
lf[595]=C_h_intern(&lf[595],19,"\010compilerreal-name2");
lf[596]=C_h_intern(&lf[596],15,"foreign-stub-id");
lf[597]=C_h_intern(&lf[597],5,"float");
lf[598]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[599]=C_h_intern(&lf[599],8,"c-string");
lf[600]=C_decode_literal(C_heaptop,"\376B\000\000\004+2+(");
lf[601]=C_decode_literal(C_heaptop,"\376B\000\000!==NULL\0771:C_bytestowords(C_strlen(");
lf[602]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[603]=C_h_intern(&lf[603],16,"nonnull-c-string");
lf[604]=C_decode_literal(C_heaptop,"\376B\000\000\033+2+C_bytestowords(C_strlen(");
lf[605]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[606]=C_h_intern(&lf[606],3,"ref");
lf[607]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[608]=C_h_intern(&lf[608],5,"const");
lf[609]=C_h_intern(&lf[609],9,"c-pointer");
lf[610]=C_h_intern(&lf[610],15,"nonnull-pointer");
lf[611]=C_h_intern(&lf[611],17,"nonnull-c-pointer");
lf[612]=C_h_intern(&lf[612],8,"function");
lf[613]=C_h_intern(&lf[613],8,"instance");
lf[614]=C_h_intern(&lf[614],16,"nonnull-instance");
lf[615]=C_h_intern(&lf[615],12,"instance-ref");
lf[616]=C_h_intern(&lf[616],27,"\010compilerforeign-type-table");
lf[617]=C_h_intern(&lf[617],17,"nonnull-c-string\052");
lf[618]=C_h_intern(&lf[618],25,"nonnull-unsigned-c-string");
lf[619]=C_h_intern(&lf[619],26,"nonnull-unsigned-c-string\052");
lf[620]=C_h_intern(&lf[620],6,"symbol");
lf[621]=C_h_intern(&lf[621],9,"c-string\052");
lf[622]=C_h_intern(&lf[622],17,"unsigned-c-string");
lf[623]=C_h_intern(&lf[623],18,"unsigned-c-string\052");
lf[624]=C_h_intern(&lf[624],6,"double");
lf[625]=C_h_intern(&lf[625],16,"unsigned-integer");
lf[626]=C_h_intern(&lf[626],18,"unsigned-integer32");
lf[627]=C_h_intern(&lf[627],4,"long");
lf[628]=C_h_intern(&lf[628],7,"integer");
lf[629]=C_h_intern(&lf[629],9,"integer32");
lf[630]=C_h_intern(&lf[630],13,"unsigned-long");
lf[631]=C_h_intern(&lf[631],6,"size_t");
lf[632]=C_h_intern(&lf[632],6,"number");
lf[633]=C_h_intern(&lf[633],18,"unsigned-integer64");
lf[634]=C_h_intern(&lf[634],9,"integer64");
lf[635]=C_h_intern(&lf[635],13,"c-string-list");
lf[636]=C_h_intern(&lf[636],14,"c-string-list\052");
lf[637]=C_h_intern(&lf[637],5,"int32");
lf[638]=C_h_intern(&lf[638],5,"short");
lf[639]=C_h_intern(&lf[639],14,"unsigned-short");
lf[640]=C_h_intern(&lf[640],13,"scheme-object");
lf[641]=C_h_intern(&lf[641],13,"unsigned-char");
lf[642]=C_h_intern(&lf[642],12,"unsigned-int");
lf[643]=C_h_intern(&lf[643],14,"unsigned-int32");
lf[644]=C_h_intern(&lf[644],4,"byte");
lf[645]=C_h_intern(&lf[645],13,"unsigned-byte");
lf[646]=C_decode_literal(C_heaptop,"\376B\000\000\002x=");
lf[647]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[648]=C_decode_literal(C_heaptop,"\376B\000\000\012C_save(x);");
lf[649]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[650]=C_decode_literal(C_heaptop,"\376B\000\000\002;}");
lf[651]=C_decode_literal(C_heaptop,"\376B\000\000\033C_callback_wrapper((void \052)");
lf[652]=C_decode_literal(C_heaptop,"\376B\000\000\007return ");
lf[653]=C_decode_literal(C_heaptop,"\376B\000\000\035C_callback_adjust_stack(a,s);");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[655]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word x,s=");
lf[656]=C_decode_literal(C_heaptop,"\376B\000\000\004,\052a=");
lf[657]=C_decode_literal(C_heaptop,"\376B\000\000\020C_stack_pointer;");
lf[658]=C_decode_literal(C_heaptop,"\376B\000\000\013C_alloc(s);");
lf[659]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\010/\052 from ");
lf[661]=C_decode_literal(C_heaptop,"\376B\000\000\003 \052/");
lf[662]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[663]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[664]=C_h_intern(&lf[664],36,"foreign-callback-stub-argument-types");
lf[665]=C_h_intern(&lf[665],33,"foreign-callback-stub-return-type");
lf[666]=C_h_intern(&lf[666],24,"foreign-callback-stub-id");
lf[667]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[668]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[669]=C_h_intern(&lf[669],32,"foreign-callback-stub-qualifiers");
lf[670]=C_h_intern(&lf[670],26,"foreign-callback-stub-name");
lf[671]=C_h_intern(&lf[671],13,"\010compilerquit");
lf[672]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal foreign type `~A\047");
lf[673]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\006C_word");
lf[675]=C_decode_literal(C_heaptop,"\376B\000\000\006C_char");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned C_char");
lf[677]=C_decode_literal(C_heaptop,"\376B\000\000\014unsigned int");
lf[678]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u32");
lf[679]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\006size_t");
lf[681]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s32");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s64");
lf[683]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u64");
lf[684]=C_decode_literal(C_heaptop,"\376B\000\000\005short");
lf[685]=C_decode_literal(C_heaptop,"\376B\000\000\004long");
lf[686]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned short");
lf[687]=C_decode_literal(C_heaptop,"\376B\000\000\015unsigned long");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\005float");
lf[689]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[690]=C_decode_literal(C_heaptop,"\376B\000\000\006void \052");
lf[691]=C_decode_literal(C_heaptop,"\376B\000\000\011C_char \052\052");
lf[692]=C_h_intern(&lf[692],4,"blob");
lf[693]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char \052");
lf[694]=C_h_intern(&lf[694],9,"u16vector");
lf[695]=C_h_intern(&lf[695],17,"nonnull-u16vector");
lf[696]=C_decode_literal(C_heaptop,"\376B\000\000\020unsigned short \052");
lf[697]=C_h_intern(&lf[697],8,"s8vector");
lf[698]=C_h_intern(&lf[698],16,"nonnull-s8vector");
lf[699]=C_decode_literal(C_heaptop,"\376B\000\000\006char \052");
lf[700]=C_h_intern(&lf[700],9,"u32vector");
lf[701]=C_h_intern(&lf[701],17,"nonnull-u32vector");
lf[702]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned int \052");
lf[703]=C_h_intern(&lf[703],9,"s16vector");
lf[704]=C_h_intern(&lf[704],17,"nonnull-s16vector");
lf[705]=C_decode_literal(C_heaptop,"\376B\000\000\007short \052");
lf[706]=C_h_intern(&lf[706],9,"s32vector");
lf[707]=C_h_intern(&lf[707],17,"nonnull-s32vector");
lf[708]=C_decode_literal(C_heaptop,"\376B\000\000\005int \052");
lf[709]=C_h_intern(&lf[709],9,"f32vector");
lf[710]=C_h_intern(&lf[710],17,"nonnull-f32vector");
lf[711]=C_decode_literal(C_heaptop,"\376B\000\000\007float \052");
lf[712]=C_h_intern(&lf[712],9,"f64vector");
lf[713]=C_h_intern(&lf[713],17,"nonnull-f64vector");
lf[714]=C_decode_literal(C_heaptop,"\376B\000\000\010double \052");
lf[715]=C_h_intern(&lf[715],14,"pointer-vector");
lf[716]=C_h_intern(&lf[716],22,"nonnull-pointer-vector");
lf[717]=C_decode_literal(C_heaptop,"\376B\000\000\007void \052\052");
lf[718]=C_decode_literal(C_heaptop,"\376B\000\000\006char \052");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char \052");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\004void");
lf[721]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\001<");
lf[724]=C_decode_literal(C_heaptop,"\376B\000\000\002> ");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[726]=C_h_intern(&lf[726],3,"map");
lf[727]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[728]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\006const ");
lf[730]=C_decode_literal(C_heaptop,"\376B\000\000\007struct ");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[732]=C_h_intern(&lf[732],8,"->string");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\006union ");
lf[734]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[735]=C_decode_literal(C_heaptop,"\376B\000\000\005enum ");
lf[736]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[738]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[739]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[740]=C_decode_literal(C_heaptop,"\376B\000\000\003 (\052");
lf[741]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[742]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[743]=C_h_intern(&lf[743],3,"...");
lf[744]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[745]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[746]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[747]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[748]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010instance\376\003\000\000\002\376\001\000\000\020nonnull-instance\376\377\016");
lf[749]=C_h_intern(&lf[749],4,"enum");
lf[750]=C_h_intern(&lf[750],5,"union");
lf[751]=C_h_intern(&lf[751],6,"struct");
lf[752]=C_h_intern(&lf[752],8,"template");
lf[753]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\017nonnull-pointer\376\003\000\000\002\376\001\000\000\011c-pointer\376\003\000\000\002\376\001\000\000\021nonnull-c"
"-pointer\376\377\016");
lf[754]=C_h_intern(&lf[754],12,"nonnull-blob");
lf[755]=C_h_intern(&lf[755],8,"u8vector");
lf[756]=C_h_intern(&lf[756],16,"nonnull-u8vector");
lf[757]=C_h_intern(&lf[757],14,"scheme-pointer");
lf[758]=C_h_intern(&lf[758],22,"nonnull-scheme-pointer");
lf[759]=C_decode_literal(C_heaptop,"\376B\000\000\042illegal foreign argument type `~A\047");
lf[760]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\031C_character_code((C_word)");
lf[762]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[764]=C_decode_literal(C_heaptop,"\376B\000\000\030(unsigned short)C_unfix(");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\027C_num_to_unsigned_long(");
lf[766]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_double(");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[768]=C_decode_literal(C_heaptop,"\376B\000\000\017C_num_to_int64(");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\025(size_t)C_num_to_int(");
lf[770]=C_decode_literal(C_heaptop,"\376B\000\000\020C_num_to_uint64(");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\016C_num_to_long(");
lf[772]=C_decode_literal(C_heaptop,"\376B\000\000\026C_num_to_unsigned_int(");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[774]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[776]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[778]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_u8vector_or_null(");
lf[780]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_u8vector(");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u16vector_or_null(");
lf[782]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u16vector(");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u32vector_or_null(");
lf[784]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u32vector(");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_s8vector_or_null(");
lf[786]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_s8vector(");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s16vector_or_null(");
lf[788]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s16vector(");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s32vector_or_null(");
lf[790]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s32vector(");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f32vector_or_null(");
lf[792]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f32vector(");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f64vector_or_null(");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f64vector(");
lf[795]=C_decode_literal(C_heaptop,"\376B\000\000\033C_c_pointer_vector_or_null(");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\023C_c_pointer_vector(");
lf[797]=C_decode_literal(C_heaptop,"\376B\000\000\021C_string_or_null(");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_string(");
lf[799]=C_decode_literal(C_heaptop,"\376B\000\000\010C_truep(");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[801]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[803]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[806]=C_decode_literal(C_heaptop,"\376B\000\000\002\052(");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000\020)C_c_pointer_nn(");
lf[808]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\002\052(");
lf[810]=C_decode_literal(C_heaptop,"\376B\000\000\021\052)C_c_pointer_nn(");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000 illegal foreign return type `~A\047");
lf[812]=C_decode_literal(C_heaptop,"\376B\000\000\031C_make_character((C_word)");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fix((C_word)");
lf[814]=C_decode_literal(C_heaptop,"\376B\000\000%C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fix((short)");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fix(0xffff&(C_word)");
lf[817]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fix((char)");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fix(0xff&(C_word)");
lf[819]=C_decode_literal(C_heaptop,"\376B\000\000\012C_flonum(&");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\012C_number(&");
lf[821]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[823]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[825]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_double_to_num(&");
lf[827]=C_decode_literal(C_heaptop,"\376B\000\000\006,(int)");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[829]=C_decode_literal(C_heaptop,"\376B\000\000\027C_unsigned_int_to_num(&");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\017C_long_to_num(&");
lf[831]=C_decode_literal(C_heaptop,"\376B\000\000\030C_unsigned_long_to_num(&");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\012C_mk_bool(");
lf[833]=C_decode_literal(C_heaptop,"\376B\000\000\011((C_word)");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[835]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void\052)&");
lf[837]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[839]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[841]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void\052)&");
lf[843]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[846]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void\052)");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[848]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\001");
lf[850]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\000");
lf[851]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\012");
lf[852]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\016");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\002\377>");
lf[854]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\036");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\002\377U");
lf[856]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[857]=C_h_intern(&lf[857],18,"\003sysfixnum->string");
lf[858]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\001");
lf[859]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[860]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[861]=C_decode_literal(C_heaptop,"\376B\000\000\001\001");
lf[862]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid literal - cannot encode");
lf[863]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[864]=C_h_intern(&lf[864],5,"cons\052");
lf[865]=C_h_intern(&lf[865],6,"random");
lf[866]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
C_register_lf2(lf,867,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2971 in k2969 in k2967 in k2965 in k2674 in k2667 in k2660 in expr in expression in k2634 in generate-code in k2627 in k2550 in k2548 */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm:146: gen */
t2=*((C_word*)lf[1]+1);
f_2554(3,t2,((C_word*)t0)[2],C_make_character(41));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[820] = {
{"f_3864:c_2dbackend_2escm",(void*)f_3864},
{"f_2904:c_2dbackend_2escm",(void*)f_2904},
{"f_6128:c_2dbackend_2escm",(void*)f_6128},
{"f_6127:c_2dbackend_2escm",(void*)f_6127},
{"f_5100:c_2dbackend_2escm",(void*)f_5100},
{"f_5107:c_2dbackend_2escm",(void*)f_5107},
{"f_2902:c_2dbackend_2escm",(void*)f_2902},
{"f_5109:c_2dbackend_2escm",(void*)f_5109},
{"f_5103:c_2dbackend_2escm",(void*)f_5103},
{"f_5105:c_2dbackend_2escm",(void*)f_5105},
{"f_9172:c_2dbackend_2escm",(void*)f_9172},
{"f_9252:c_2dbackend_2escm",(void*)f_9252},
{"f_9185:c_2dbackend_2escm",(void*)f_9185},
{"f_9187:c_2dbackend_2escm",(void*)f_9187},
{"f_6559:c_2dbackend_2escm",(void*)f_6559},
{"f_9183:c_2dbackend_2escm",(void*)f_9183},
{"f_2924:c_2dbackend_2escm",(void*)f_2924},
{"f_6101:c_2dbackend_2escm",(void*)f_6101},
{"f_3840:c_2dbackend_2escm",(void*)f_3840},
{"f_3842:c_2dbackend_2escm",(void*)f_3842},
{"f_5128:c_2dbackend_2escm",(void*)f_5128},
{"f_4585:c_2dbackend_2escm",(void*)f_4585},
{"f_2926:c_2dbackend_2escm",(void*)f_2926},
{"f_5126:c_2dbackend_2escm",(void*)f_5126},
{"f_5124:c_2dbackend_2escm",(void*)f_5124},
{"f_9190:c_2dbackend_2escm",(void*)f_9190},
{"f_6548:c_2dbackend_2escm",(void*)f_6548},
{"f_5111:c_2dbackend_2escm",(void*)f_5111},
{"f_5119:c_2dbackend_2escm",(void*)f_5119},
{"f_5113:c_2dbackend_2escm",(void*)f_5113},
{"f_3067:c_2dbackend_2escm",(void*)f_3067},
{"f_5141:c_2dbackend_2escm",(void*)f_5141},
{"f_5147:c_2dbackend_2escm",(void*)f_5147},
{"f_4562:c_2dbackend_2escm",(void*)f_4562},
{"f_3076:c_2dbackend_2escm",(void*)f_3076},
{"f_5130:c_2dbackend_2escm",(void*)f_5130},
{"f_5132:c_2dbackend_2escm",(void*)f_5132},
{"f_5135:c_2dbackend_2escm",(void*)f_5135},
{"f_4576:c_2dbackend_2escm",(void*)f_4576},
{"f_5922:c_2dbackend_2escm",(void*)f_5922},
{"f_5161:c_2dbackend_2escm",(void*)f_5161},
{"f_4540:c_2dbackend_2escm",(void*)f_4540},
{"f_5911:c_2dbackend_2escm",(void*)f_5911},
{"f_9264:c_2dbackend_2escm",(void*)f_9264},
{"f_5913:c_2dbackend_2escm",(void*)f_5913},
{"f_9266:c_2dbackend_2escm",(void*)f_9266},
{"f_9268:c_2dbackend_2escm",(void*)f_9268},
{"f_3813:c_2dbackend_2escm",(void*)f_3813},
{"f_5153:c_2dbackend_2escm",(void*)f_5153},
{"f_5157:c_2dbackend_2escm",(void*)f_5157},
{"f_4553:c_2dbackend_2escm",(void*)f_4553},
{"f_9231:c_2dbackend_2escm",(void*)f_9231},
{"f_6298:c_2dbackend_2escm",(void*)f_6298},
{"f_6296:c_2dbackend_2escm",(void*)f_6296},
{"f_6294:c_2dbackend_2escm",(void*)f_6294},
{"f_6292:c_2dbackend_2escm",(void*)f_6292},
{"f_4520:c_2dbackend_2escm",(void*)f_4520},
{"f_4529:c_2dbackend_2escm",(void*)f_4529},
{"f_4966:c_2dbackend_2escm",(void*)f_4966},
{"f_3198:c_2dbackend_2escm",(void*)f_3198},
{"f_6155:c_2dbackend_2escm",(void*)f_6155},
{"f_4960:c_2dbackend_2escm",(void*)f_4960},
{"f_4962:c_2dbackend_2escm",(void*)f_4962},
{"f_4964:c_2dbackend_2escm",(void*)f_4964},
{"f_6289:c_2dbackend_2escm",(void*)f_6289},
{"f_6287:c_2dbackend_2escm",(void*)f_6287},
{"f_4533:c_2dbackend_2escm",(void*)f_4533},
{"f_4537:c_2dbackend_2escm",(void*)f_4537},
{"f_4535:c_2dbackend_2escm",(void*)f_4535},
{"f_5968:c_2dbackend_2escm",(void*)f_5968},
{"f_4503:c_2dbackend_2escm",(void*)f_4503},
{"f_5953:c_2dbackend_2escm",(void*)f_5953},
{"f_4502:c_2dbackend_2escm",(void*)f_4502},
{"f_5955:c_2dbackend_2escm",(void*)f_5955},
{"f_5957:c_2dbackend_2escm",(void*)f_5957},
{"f_5959:c_2dbackend_2escm",(void*)f_5959},
{"f_5951:c_2dbackend_2escm",(void*)f_5951},
{"f_6134:c_2dbackend_2escm",(void*)f_6134},
{"f_3172:c_2dbackend_2escm",(void*)f_3172},
{"f_3018:c_2dbackend_2escm",(void*)f_3018},
{"f_4511:c_2dbackend_2escm",(void*)f_4511},
{"f_4513:c_2dbackend_2escm",(void*)f_4513},
{"f_4515:c_2dbackend_2escm",(void*)f_4515},
{"f_6167:c_2dbackend_2escm",(void*)f_6167},
{"f_7301:c_2dbackend_2escm",(void*)f_7301},
{"f_6169:c_2dbackend_2escm",(void*)f_6169},
{"f_4998:c_2dbackend_2escm",(void*)f_4998},
{"f_4999:c_2dbackend_2escm",(void*)f_4999},
{"f_5277:c_2dbackend_2escm",(void*)f_5277},
{"f_5274:c_2dbackend_2escm",(void*)f_5274},
{"f_7367:c_2dbackend_2escm",(void*)f_7367},
{"f_7365:c_2dbackend_2escm",(void*)f_7365},
{"f_7369:c_2dbackend_2escm",(void*)f_7369},
{"f_6590:c_2dbackend_2escm",(void*)f_6590},
{"f_6592:c_2dbackend_2escm",(void*)f_6592},
{"f_6594:c_2dbackend_2escm",(void*)f_6594},
{"f_6596:c_2dbackend_2escm",(void*)f_6596},
{"f_6598:c_2dbackend_2escm",(void*)f_6598},
{"f_6146:c_2dbackend_2escm",(void*)f_6146},
{"f_7361:c_2dbackend_2escm",(void*)f_7361},
{"f_6581:c_2dbackend_2escm",(void*)f_6581},
{"f_6584:c_2dbackend_2escm",(void*)f_6584},
{"f_6586:c_2dbackend_2escm",(void*)f_6586},
{"f_6588:c_2dbackend_2escm",(void*)f_6588},
{"f_7350:c_2dbackend_2escm",(void*)f_7350},
{"f_7272:c_2dbackend_2escm",(void*)f_7272},
{"f_7270:c_2dbackend_2escm",(void*)f_7270},
{"f_7972:c_2dbackend_2escm",(void*)f_7972},
{"f_7341:c_2dbackend_2escm",(void*)f_7341},
{"f_9286:c_2dbackend_2escm",(void*)f_9286},
{"f_9284:c_2dbackend_2escm",(void*)f_9284},
{"f_9282:c_2dbackend_2escm",(void*)f_9282},
{"f_7334:c_2dbackend_2escm",(void*)f_7334},
{"f_7292:c_2dbackend_2escm",(void*)f_7292},
{"f_7290:c_2dbackend_2escm",(void*)f_7290},
{"f_7977:c_2dbackend_2escm",(void*)f_7977},
{"f_7975:c_2dbackend_2escm",(void*)f_7975},
{"f_9289:c_2dbackend_2escm",(void*)f_9289},
{"f_9900:c_2dbackend_2escm",(void*)f_9900},
{"f_5296:c_2dbackend_2escm",(void*)f_5296},
{"f_7941:c_2dbackend_2escm",(void*)f_7941},
{"f_7956:c_2dbackend_2escm",(void*)f_7956},
{"f_5299:c_2dbackend_2escm",(void*)f_5299},
{"f_4021:c_2dbackend_2escm",(void*)f_4021},
{"f_9271:c_2dbackend_2escm",(void*)f_9271},
{"f_8380:c_2dbackend_2escm",(void*)f_8380},
{"f_7947:c_2dbackend_2escm",(void*)f_7947},
{"f_4033:c_2dbackend_2escm",(void*)f_4033},
{"f_4030:c_2dbackend_2escm",(void*)f_4030},
{"f_4049:c_2dbackend_2escm",(void*)f_4049},
{"f_4045:c_2dbackend_2escm",(void*)f_4045},
{"f_4047:c_2dbackend_2escm",(void*)f_4047},
{"f_6886:c_2dbackend_2escm",(void*)f_6886},
{"f_6881:c_2dbackend_2escm",(void*)f_6881},
{"f_7932:c_2dbackend_2escm",(void*)f_7932},
{"f_7911:c_2dbackend_2escm",(void*)f_7911},
{"f_4043:c_2dbackend_2escm",(void*)f_4043},
{"f_8377:c_2dbackend_2escm",(void*)f_8377},
{"f_4058:c_2dbackend_2escm",(void*)f_4058},
{"f_6870:c_2dbackend_2escm",(void*)f_6870},
{"f_7926:c_2dbackend_2escm",(void*)f_7926},
{"f_6178:c_2dbackend_2escm",(void*)f_6178},
{"f_7917:c_2dbackend_2escm",(void*)f_7917},
{"f_6851:c_2dbackend_2escm",(void*)f_6851},
{"f_6859:c_2dbackend_2escm",(void*)f_6859},
{"f_7902:c_2dbackend_2escm",(void*)f_7902},
{"f_4886:c_2dbackend_2escm",(void*)f_4886},
{"f_4880:c_2dbackend_2escm",(void*)f_4880},
{"f_6841:c_2dbackend_2escm",(void*)f_6841},
{"f_7401:c_2dbackend_2escm",(void*)f_7401},
{"f_4898:c_2dbackend_2escm",(void*)f_4898},
{"f_6839:c_2dbackend_2escm",(void*)f_6839},
{"f_6831:c_2dbackend_2escm",(void*)f_6831},
{"f_6833:c_2dbackend_2escm",(void*)f_6833},
{"f_6835:c_2dbackend_2escm",(void*)f_6835},
{"f_8664:c_2dbackend_2escm",(void*)f_8664},
{"f_6829:c_2dbackend_2escm",(void*)f_6829},
{"f_6826:c_2dbackend_2escm",(void*)f_6826},
{"f_6823:c_2dbackend_2escm",(void*)f_6823},
{"f_6812:c_2dbackend_2escm",(void*)f_6812},
{"f_8639:c_2dbackend_2escm",(void*)f_8639},
{"f_3133:c_2dbackend_2escm",(void*)f_3133},
{"f_6803:c_2dbackend_2escm",(void*)f_6803},
{"f_4844:c_2dbackend_2escm",(void*)f_4844},
{"f_4842:c_2dbackend_2escm",(void*)f_4842},
{"f_4840:c_2dbackend_2escm",(void*)f_4840},
{"f_8631:c_2dbackend_2escm",(void*)f_8631},
{"f_3169:c_2dbackend_2escm",(void*)f_3169},
{"f_4855:c_2dbackend_2escm",(void*)f_4855},
{"f_3296:c_2dbackend_2escm",(void*)f_3296},
{"f_3294:c_2dbackend_2escm",(void*)f_3294},
{"f_8623:c_2dbackend_2escm",(void*)f_8623},
{"f_4864:c_2dbackend_2escm",(void*)f_4864},
{"f_7412:c_2dbackend_2escm",(void*)f_7412},
{"f_7415:c_2dbackend_2escm",(void*)f_7415},
{"f_7419:c_2dbackend_2escm",(void*)f_7419},
{"f_5237:c_2dbackend_2escm",(void*)f_5237},
{"f_7410:c_2dbackend_2escm",(void*)f_7410},
{"f_8643:c_2dbackend_2escm",(void*)f_8643},
{"f_3995:c_2dbackend_2escm",(void*)f_3995},
{"f_3993:c_2dbackend_2escm",(void*)f_3993},
{"f_2676:c_2dbackend_2escm",(void*)f_2676},
{"f_2670:c_2dbackend_2escm",(void*)f_2670},
{"f_4084:c_2dbackend_2escm",(void*)f_4084},
{"f_4086:c_2dbackend_2escm",(void*)f_4086},
{"f_7483:c_2dbackend_2escm",(void*)f_7483},
{"f_2641:c_2dbackend_2escm",(void*)f_2641},
{"f_2649:c_2dbackend_2escm",(void*)f_2649},
{"f_2656:c_2dbackend_2escm",(void*)f_2656},
{"f_2653:c_2dbackend_2escm",(void*)f_2653},
{"f_3978:c_2dbackend_2escm",(void*)f_3978},
{"f_4820:c_2dbackend_2escm",(void*)f_4820},
{"f_4822:c_2dbackend_2escm",(void*)f_4822},
{"f_4824:c_2dbackend_2escm",(void*)f_4824},
{"f_4826:c_2dbackend_2escm",(void*)f_4826},
{"f_5244:c_2dbackend_2escm",(void*)f_5244},
{"f_7387:c_2dbackend_2escm",(void*)f_7387},
{"f_3107:c_2dbackend_2escm",(void*)f_3107},
{"f_7384:c_2dbackend_2escm",(void*)f_7384},
{"f_3105:c_2dbackend_2escm",(void*)f_3105},
{"f_7379:c_2dbackend_2escm",(void*)f_7379},
{"f_5797:c_2dbackend_2escm",(void*)f_5797},
{"f_7375:c_2dbackend_2escm",(void*)f_7375},
{"f_7377:c_2dbackend_2escm",(void*)f_7377},
{"f_7371:c_2dbackend_2escm",(void*)f_7371},
{"f_2631:c_2dbackend_2escm",(void*)f_2631},
{"f_2635:c_2dbackend_2escm",(void*)f_2635},
{"f_2637:c_2dbackend_2escm",(void*)f_2637},
{"f_5221:c_2dbackend_2escm",(void*)f_5221},
{"f_5229:c_2dbackend_2escm",(void*)f_5229},
{"f_5226:c_2dbackend_2escm",(void*)f_5226},
{"f_5223:c_2dbackend_2escm",(void*)f_5223},
{"f_5783:c_2dbackend_2escm",(void*)f_5783},
{"f_5781:c_2dbackend_2escm",(void*)f_5781},
{"f_2602:c_2dbackend_2escm",(void*)f_2602},
{"f_2607:c_2dbackend_2escm",(void*)f_2607},
{"f_2616:c_2dbackend_2escm",(void*)f_2616},
{"f_5205:c_2dbackend_2escm",(void*)f_5205},
{"f_2663:c_2dbackend_2escm",(void*)f_2663},
{"f_9076:c_2dbackend_2escm",(void*)f_9076},
{"f_9071:c_2dbackend_2escm",(void*)f_9071},
{"f_2662:c_2dbackend_2escm",(void*)f_2662},
{"f_9073:c_2dbackend_2escm",(void*)f_9073},
{"f_2669:c_2dbackend_2escm",(void*)f_2669},
{"f_8970:c_2dbackend_2escm",(void*)f_8970},
{"f_5759:c_2dbackend_2escm",(void*)f_5759},
{"f_5754:c_2dbackend_2escm",(void*)f_5754},
{"f_4006:c_2dbackend_2escm",(void*)f_4006},
{"f_4009:c_2dbackend_2escm",(void*)f_4009},
{"f_5745:c_2dbackend_2escm",(void*)f_5745},
{"f_4019:c_2dbackend_2escm",(void*)f_4019},
{"f_5219:c_2dbackend_2escm",(void*)f_5219},
{"f_5771:c_2dbackend_2escm",(void*)f_5771},
{"f_5777:c_2dbackend_2escm",(void*)f_5777},
{"f_5779:c_2dbackend_2escm",(void*)f_5779},
{"f_5773:c_2dbackend_2escm",(void*)f_5773},
{"f_5775:c_2dbackend_2escm",(void*)f_5775},
{"f_5761:c_2dbackend_2escm",(void*)f_5761},
{"f_5767:c_2dbackend_2escm",(void*)f_5767},
{"f_5769:c_2dbackend_2escm",(void*)f_5769},
{"f_5763:c_2dbackend_2escm",(void*)f_5763},
{"f_5765:c_2dbackend_2escm",(void*)f_5765},
{"f_4385:c_2dbackend_2escm",(void*)f_4385},
{"f_2629:c_2dbackend_2escm",(void*)f_2629},
{"f_4394:c_2dbackend_2escm",(void*)f_4394},
{"f_5713:c_2dbackend_2escm",(void*)f_5713},
{"f_5711:c_2dbackend_2escm",(void*)f_5711},
{"f_5717:c_2dbackend_2escm",(void*)f_5717},
{"f_5715:c_2dbackend_2escm",(void*)f_5715},
{"f_5719:c_2dbackend_2escm",(void*)f_5719},
{"f_9049:c_2dbackend_2escm",(void*)f_9049},
{"f_7993:c_2dbackend_2escm",(void*)f_7993},
{"f_7991:c_2dbackend_2escm",(void*)f_7991},
{"f_5703:c_2dbackend_2escm",(void*)f_5703},
{"f_8967:c_2dbackend_2escm",(void*)f_8967},
{"f_5701:c_2dbackend_2escm",(void*)f_5701},
{"f_5707:c_2dbackend_2escm",(void*)f_5707},
{"f_5705:c_2dbackend_2escm",(void*)f_5705},
{"f_5709:c_2dbackend_2escm",(void*)f_5709},
{"f_9053:c_2dbackend_2escm",(void*)f_9053},
{"f_9051:c_2dbackend_2escm",(void*)f_9051},
{"f_9056:c_2dbackend_2escm",(void*)f_9056},
{"f_5731:c_2dbackend_2escm",(void*)f_5731},
{"f_5733:c_2dbackend_2escm",(void*)f_5733},
{"f_5735:c_2dbackend_2escm",(void*)f_5735},
{"f_5737:c_2dbackend_2escm",(void*)f_5737},
{"f_5739:c_2dbackend_2escm",(void*)f_5739},
{"f_4377:c_2dbackend_2escm",(void*)f_4377},
{"f_4376:c_2dbackend_2escm",(void*)f_4376},
{"f_9067:c_2dbackend_2escm",(void*)f_9067},
{"f_9069:c_2dbackend_2escm",(void*)f_9069},
{"f_3264:c_2dbackend_2escm",(void*)f_3264},
{"f_6326:c_2dbackend_2escm",(void*)f_6326},
{"f_3267:c_2dbackend_2escm",(void*)f_3267},
{"f_6324:c_2dbackend_2escm",(void*)f_6324},
{"f_6322:c_2dbackend_2escm",(void*)f_6322},
{"f_6320:c_2dbackend_2escm",(void*)f_6320},
{"f_6328:c_2dbackend_2escm",(void*)f_6328},
{"f_5721:c_2dbackend_2escm",(void*)f_5721},
{"f_4064:c_2dbackend_2escm",(void*)f_4064},
{"f_5723:c_2dbackend_2escm",(void*)f_5723},
{"f_5725:c_2dbackend_2escm",(void*)f_5725},
{"f_5727:c_2dbackend_2escm",(void*)f_5727},
{"f_5729:c_2dbackend_2escm",(void*)f_5729},
{"f_6316:c_2dbackend_2escm",(void*)f_6316},
{"f_2583:c_2dbackend_2escm",(void*)f_2583},
{"f_6304:c_2dbackend_2escm",(void*)f_6304},
{"f_6306:c_2dbackend_2escm",(void*)f_6306},
{"f_3248:c_2dbackend_2escm",(void*)f_3248},
{"f_6300:c_2dbackend_2escm",(void*)f_6300},
{"f_6302:c_2dbackend_2escm",(void*)f_6302},
{"f_6308:c_2dbackend_2escm",(void*)f_6308},
{"f_2597:c_2dbackend_2escm",(void*)f_2597},
{"f_2594:c_2dbackend_2escm",(void*)f_2594},
{"f_3255:c_2dbackend_2escm",(void*)f_3255},
{"f_3251:c_2dbackend_2escm",(void*)f_3251},
{"f_3253:c_2dbackend_2escm",(void*)f_3253},
{"f_6363:c_2dbackend_2escm",(void*)f_6363},
{"f_6365:c_2dbackend_2escm",(void*)f_6365},
{"f_9031:c_2dbackend_2escm",(void*)f_9031},
{"f_9033:c_2dbackend_2escm",(void*)f_9033},
{"f_9035:c_2dbackend_2escm",(void*)f_9035},
{"f_9038:c_2dbackend_2escm",(void*)f_9038},
{"f_6890:c_2dbackend_2escm",(void*)f_6890},
{"f_3237:c_2dbackend_2escm",(void*)f_3237},
{"f_3239:c_2dbackend_2escm",(void*)f_3239},
{"f_6357:c_2dbackend_2escm",(void*)f_6357},
{"f_5026:c_2dbackend_2escm",(void*)f_5026},
{"f_5024:c_2dbackend_2escm",(void*)f_5024},
{"f_2549:c_2dbackend_2escm",(void*)f_2549},
{"f_3373:c_2dbackend_2escm",(void*)f_3373},
{"f_2554:c_2dbackend_2escm",(void*)f_2554},
{"f_2551:c_2dbackend_2escm",(void*)f_2551},
{"f_3202:c_2dbackend_2escm",(void*)f_3202},
{"f_3200:c_2dbackend_2escm",(void*)f_3200},
{"f_2557:c_2dbackend_2escm",(void*)f_2557},
{"f_3382:c_2dbackend_2escm",(void*)f_3382},
{"f_3214:c_2dbackend_2escm",(void*)f_3214},
{"f_6333:c_2dbackend_2escm",(void*)f_6333},
{"f_6336:c_2dbackend_2escm",(void*)f_6336},
{"f_3211:c_2dbackend_2escm",(void*)f_3211},
{"f_4900:c_2dbackend_2escm",(void*)f_4900},
{"f_4904:c_2dbackend_2escm",(void*)f_4904},
{"f_4908:c_2dbackend_2escm",(void*)f_4908},
{"f_2574:c_2dbackend_2escm",(void*)f_2574},
{"f_3319:c_2dbackend_2escm",(void*)f_3319},
{"f_5040:c_2dbackend_2escm",(void*)f_5040},
{"f_3316:c_2dbackend_2escm",(void*)f_3316},
{"f_3310:c_2dbackend_2escm",(void*)f_3310},
{"f_5049:c_2dbackend_2escm",(void*)f_5049},
{"f_5033:c_2dbackend_2escm",(void*)f_5033},
{"f_5031:c_2dbackend_2escm",(void*)f_5031},
{"f_3321:c_2dbackend_2escm",(void*)f_3321},
{"f_9774:c_2dbackend_2escm",(void*)f_9774},
{"f_4925:c_2dbackend_2escm",(void*)f_4925},
{"f_4361:c_2dbackend_2escm",(void*)f_4361},
{"f_5895:c_2dbackend_2escm",(void*)f_5895},
{"f_4363:c_2dbackend_2escm",(void*)f_4363},
{"f_5893:c_2dbackend_2escm",(void*)f_5893},
{"f_4365:c_2dbackend_2escm",(void*)f_4365},
{"f_5899:c_2dbackend_2escm",(void*)f_5899},
{"f_5897:c_2dbackend_2escm",(void*)f_5897},
{"f_5890:c_2dbackend_2escm",(void*)f_5890},
{"f_3303:c_2dbackend_2escm",(void*)f_3303},
{"f_4975:c_2dbackend_2escm",(void*)f_4975},
{"f_4972:c_2dbackend_2escm",(void*)f_4972},
{"f_3300:c_2dbackend_2escm",(void*)f_3300},
{"f_3354:c_2dbackend_2escm",(void*)f_3354},
{"f_3355:c_2dbackend_2escm",(void*)f_3355},
{"f_4341:c_2dbackend_2escm",(void*)f_4341},
{"f_9728:c_2dbackend_2escm",(void*)f_9728},
{"f_3365:c_2dbackend_2escm",(void*)f_3365},
{"f_4956:c_2dbackend_2escm",(void*)f_4956},
{"f_4958:c_2dbackend_2escm",(void*)f_4958},
{"f_4950:c_2dbackend_2escm",(void*)f_4950},
{"f_4952:c_2dbackend_2escm",(void*)f_4952},
{"f_4954:c_2dbackend_2escm",(void*)f_4954},
{"f_3363:c_2dbackend_2escm",(void*)f_3363},
{"f_3360:c_2dbackend_2escm",(void*)f_3360},
{"f_8405:c_2dbackend_2escm",(void*)f_8405},
{"f_4353:c_2dbackend_2escm",(void*)f_4353},
{"f_4355:c_2dbackend_2escm",(void*)f_4355},
{"f_4357:c_2dbackend_2escm",(void*)f_4357},
{"f_4359:c_2dbackend_2escm",(void*)f_4359},
{"f_3336:c_2dbackend_2escm",(void*)f_3336},
{"f_3338:c_2dbackend_2escm",(void*)f_3338},
{"f_9087:c_2dbackend_2escm",(void*)f_9087},
{"f_8431:c_2dbackend_2escm",(void*)f_8431},
{"f_4325:c_2dbackend_2escm",(void*)f_4325},
{"f_4321:c_2dbackend_2escm",(void*)f_4321},
{"f_3344:c_2dbackend_2escm",(void*)f_3344},
{"f_3346:c_2dbackend_2escm",(void*)f_3346},
{"f_9089:c_2dbackend_2escm",(void*)f_9089},
{"f_4939:c_2dbackend_2escm",(void*)f_4939},
{"f_4936:c_2dbackend_2escm",(void*)f_4936},
{"f_9094:c_2dbackend_2escm",(void*)f_9094},
{"f_9091:c_2dbackend_2escm",(void*)f_9091},
{"f_3341:c_2dbackend_2escm",(void*)f_3341},
{"f_3340:c_2dbackend_2escm",(void*)f_3340},
{"f_5841:c_2dbackend_2escm",(void*)f_5841},
{"f_5849:c_2dbackend_2escm",(void*)f_5849},
{"f_4339:c_2dbackend_2escm",(void*)f_4339},
{"f_4948:c_2dbackend_2escm",(void*)f_4948},
{"f_4946:c_2dbackend_2escm",(void*)f_4946},
{"f_4944:c_2dbackend_2escm",(void*)f_4944},
{"f_4942:c_2dbackend_2escm",(void*)f_4942},
{"f_6609:c_2dbackend_2escm",(void*)f_6609},
{"f_6608:c_2dbackend_2escm",(void*)f_6608},
{"f_6606:c_2dbackend_2escm",(void*)f_6606},
{"f_6600:c_2dbackend_2escm",(void*)f_6600},
{"f_6604:c_2dbackend_2escm",(void*)f_6604},
{"f_6602:c_2dbackend_2escm",(void*)f_6602},
{"f_4301:c_2dbackend_2escm",(void*)f_4301},
{"f_4916:c_2dbackend_2escm",(void*)f_4916},
{"f_6639:c_2dbackend_2escm",(void*)f_6639},
{"f_6631:c_2dbackend_2escm",(void*)f_6631},
{"f_6634:c_2dbackend_2escm",(void*)f_6634},
{"f_5821:c_2dbackend_2escm",(void*)f_5821},
{"f_5826:c_2dbackend_2escm",(void*)f_5826},
{"f_5818:c_2dbackend_2escm",(void*)f_5818},
{"f_6618:c_2dbackend_2escm",(void*)f_6618},
{"f_6615:c_2dbackend_2escm",(void*)f_6615},
{"f_5806:c_2dbackend_2escm",(void*)f_5806},
{"f_3498:c_2dbackend_2escm",(void*)f_3498},
{"f_3496:c_2dbackend_2escm",(void*)f_3496},
{"f_3494:c_2dbackend_2escm",(void*)f_3494},
{"f_5080:c_2dbackend_2escm",(void*)f_5080},
{"f_5089:c_2dbackend_2escm",(void*)f_5089},
{"f_6672:c_2dbackend_2escm",(void*)f_6672},
{"f_6674:c_2dbackend_2escm",(void*)f_6674},
{"f_6676:c_2dbackend_2escm",(void*)f_6676},
{"f_6678:c_2dbackend_2escm",(void*)f_6678},
{"f_6399:c_2dbackend_2escm",(void*)f_6399},
{"f_3479:c_2dbackend_2escm",(void*)f_3479},
{"f_3473:c_2dbackend_2escm",(void*)f_3473},
{"f_4621:c_2dbackend_2escm",(void*)f_4621},
{"f_9881:c_2dbackend_2escm",(void*)f_9881},
{"f_9888:c_2dbackend_2escm",(void*)f_9888},
{"f_9885:c_2dbackend_2escm",(void*)f_9885},
{"f_9883:c_2dbackend_2escm",(void*)f_9883},
{"f_3486:c_2dbackend_2escm",(void*)f_3486},
{"f_3480:c_2dbackend_2escm",(void*)f_3480},
{"f_4630:c_2dbackend_2escm",(void*)f_4630},
{"f_7607:c_2dbackend_2escm",(void*)f_7607},
{"f_6374:c_2dbackend_2escm",(void*)f_6374},
{"f_4645:c_2dbackend_2escm",(void*)f_4645},
{"f_4641:c_2dbackend_2escm",(void*)f_4641},
{"f_6680:c_2dbackend_2escm",(void*)f_6680},
{"f_9825:c_2dbackend_2escm",(void*)f_9825},
{"f_5837:c_2dbackend_2escm",(void*)f_5837},
{"f_5839:c_2dbackend_2escm",(void*)f_5839},
{"f_4653:c_2dbackend_2escm",(void*)f_4653},
{"f_4656:c_2dbackend_2escm",(void*)f_4656},
{"f_4651:c_2dbackend_2escm",(void*)f_4651},
{"f_4647:c_2dbackend_2escm",(void*)f_4647},
{"f_4648:c_2dbackend_2escm",(void*)f_4648},
{"f_2838:c_2dbackend_2escm",(void*)f_2838},
{"f_4661:c_2dbackend_2escm",(void*)f_4661},
{"f_2847:c_2dbackend_2escm",(void*)f_2847},
{"f_2849:c_2dbackend_2escm",(void*)f_2849},
{"f_5016:c_2dbackend_2escm",(void*)f_5016},
{"f_5019:c_2dbackend_2escm",(void*)f_5019},
{"f_5010:c_2dbackend_2escm",(void*)f_5010},
{"f_4670:c_2dbackend_2escm",(void*)f_4670},
{"f_9857:c_2dbackend_2escm",(void*)f_9857},
{"f_9859:c_2dbackend_2escm",(void*)f_9859},
{"f_3414:c_2dbackend_2escm",(void*)f_3414},
{"f_9790:c_2dbackend_2escm",(void*)f_9790},
{"f_5002:c_2dbackend_2escm",(void*)f_5002},
{"f_5004:c_2dbackend_2escm",(void*)f_5004},
{"f_5006:c_2dbackend_2escm",(void*)f_5006},
{"f_5008:c_2dbackend_2escm",(void*)f_5008},
{"f_4695:c_2dbackend_2escm",(void*)f_4695},
{"f_4686:c_2dbackend_2escm",(void*)f_4686},
{"f_9879:c_2dbackend_2escm",(void*)f_9879},
{"f_9877:c_2dbackend_2escm",(void*)f_9877},
{"f_5060:c_2dbackend_2escm",(void*)f_5060},
{"f_5069:c_2dbackend_2escm",(void*)f_5069},
{"f_5594:c_2dbackend_2escm",(void*)f_5594},
{"f_5599:c_2dbackend_2escm",(void*)f_5599},
{"f_3405:c_2dbackend_2escm",(void*)f_3405},
{"f_5591:c_2dbackend_2escm",(void*)f_5591},
{"f_2881:c_2dbackend_2escm",(void*)f_2881},
{"f_2883:c_2dbackend_2escm",(void*)f_2883},
{"f_2885:c_2dbackend_2escm",(void*)f_2885},
{"f_3459:c_2dbackend_2escm",(void*)f_3459},
{"f_2851:c_2dbackend_2escm",(void*)f_2851},
{"f_4189:c_2dbackend_2escm",(void*)f_4189},
{"f_4185:c_2dbackend_2escm",(void*)f_4185},
{"f_4187:c_2dbackend_2escm",(void*)f_4187},
{"f_3461:c_2dbackend_2escm",(void*)f_3461},
{"f_3957:c_2dbackend_2escm",(void*)f_3957},
{"f_9848:c_2dbackend_2escm",(void*)f_9848},
{"f_3444:c_2dbackend_2escm",(void*)f_3444},
{"f_3446:c_2dbackend_2escm",(void*)f_3446},
{"f_3448:c_2dbackend_2escm",(void*)f_3448},
{"f_3440:c_2dbackend_2escm",(void*)f_3440},
{"f_3442:c_2dbackend_2escm",(void*)f_3442},
{"f_3931:c_2dbackend_2escm",(void*)f_3931},
{"f_3933:c_2dbackend_2escm",(void*)f_3933},
{"f_6648:c_2dbackend_2escm",(void*)f_6648},
{"f_6646:c_2dbackend_2escm",(void*)f_6646},
{"f_6644:c_2dbackend_2escm",(void*)f_6644},
{"f_4193:c_2dbackend_2escm",(void*)f_4193},
{"f_4191:c_2dbackend_2escm",(void*)f_4191},
{"f_4195:c_2dbackend_2escm",(void*)f_4195},
{"f_3917:c_2dbackend_2escm",(void*)f_3917},
{"f_3915:c_2dbackend_2escm",(void*)f_3915},
{"f_6629:c_2dbackend_2escm",(void*)f_6629},
{"f_6621:c_2dbackend_2escm",(void*)f_6621},
{"f_6624:c_2dbackend_2escm",(void*)f_6624},
{"f_2800:c_2dbackend_2escm",(void*)f_2800},
{"f_3949:c_2dbackend_2escm",(void*)f_3949},
{"f_3947:c_2dbackend_2escm",(void*)f_3947},
{"f_6655:c_2dbackend_2escm",(void*)f_6655},
{"f_6653:c_2dbackend_2escm",(void*)f_6653},
{"f_5548:c_2dbackend_2escm",(void*)f_5548},
{"f_5543:c_2dbackend_2escm",(void*)f_5543},
{"f_5533:c_2dbackend_2escm",(void*)f_5533},
{"f_5535:c_2dbackend_2escm",(void*)f_5535},
{"f_5569:c_2dbackend_2escm",(void*)f_5569},
{"f_5563:c_2dbackend_2escm",(void*)f_5563},
{"f_2796:c_2dbackend_2escm",(void*)f_2796},
{"f_2798:c_2dbackend_2escm",(void*)f_2798},
{"f_2790:c_2dbackend_2escm",(void*)f_2790},
{"f_2792:c_2dbackend_2escm",(void*)f_2792},
{"f_2794:c_2dbackend_2escm",(void*)f_2794},
{"f_7706:c_2dbackend_2escm",(void*)f_7706},
{"f_8726:c_2dbackend_2escm",(void*)f_8726},
{"f_7735:c_2dbackend_2escm",(void*)f_7735},
{"f_7731:c_2dbackend_2escm",(void*)f_7731},
{"f_5572:c_2dbackend_2escm",(void*)f_5572},
{"f_5579:c_2dbackend_2escm",(void*)f_5579},
{"f_7717:c_2dbackend_2escm",(void*)f_7717},
{"f_6920:c_2dbackend_2escm",(void*)f_6920},
{"f_9891:c_2dbackend_2escm",(void*)f_9891},
{"f_9894:c_2dbackend_2escm",(void*)f_9894},
{"f_9897:c_2dbackend_2escm",(void*)f_9897},
{"f_7772:c_2dbackend_2escm",(void*)f_7772},
{"f_3581:c_2dbackend_2escm",(void*)f_3581},
{"f_5903:c_2dbackend_2escm",(void*)f_5903},
{"f_5901:c_2dbackend_2escm",(void*)f_5901},
{"f_3591:c_2dbackend_2escm",(void*)f_3591},
{"f_7787:c_2dbackend_2escm",(void*)f_7787},
{"f_3585:c_2dbackend_2escm",(void*)f_3585},
{"f_3583:c_2dbackend_2escm",(void*)f_3583},
{"f_4133:c_2dbackend_2escm",(void*)f_4133},
{"f_7781:c_2dbackend_2escm",(void*)f_7781},
{"f_5500:c_2dbackend_2escm",(void*)f_5500},
{"f_5506:c_2dbackend_2escm",(void*)f_5506},
{"f_4142:c_2dbackend_2escm",(void*)f_4142},
{"f_4144:c_2dbackend_2escm",(void*)f_4144},
{"f_9302:c_2dbackend_2escm",(void*)f_9302},
{"f_9300:c_2dbackend_2escm",(void*)f_9300},
{"f_9307:c_2dbackend_2escm",(void*)f_9307},
{"f_3567:c_2dbackend_2escm",(void*)f_3567},
{"f_6005:c_2dbackend_2escm",(void*)f_6005},
{"f_9304:c_2dbackend_2escm",(void*)f_9304},
{"f_3563:c_2dbackend_2escm",(void*)f_3563},
{"f_6003:c_2dbackend_2escm",(void*)f_6003},
{"f_5949:c_2dbackend_2escm",(void*)f_5949},
{"f_5947:c_2dbackend_2escm",(void*)f_5947},
{"f_5942:c_2dbackend_2escm",(void*)f_5942},
{"f_3541:c_2dbackend_2escm",(void*)f_3541},
{"f_9318:c_2dbackend_2escm",(void*)f_9318},
{"f_3577:c_2dbackend_2escm",(void*)f_3577},
{"f_3579:c_2dbackend_2escm",(void*)f_3579},
{"f_7796:c_2dbackend_2escm",(void*)f_7796},
{"f_3573:c_2dbackend_2escm",(void*)f_3573},
{"f_3575:c_2dbackend_2escm",(void*)f_3575},
{"f_5936:c_2dbackend_2escm",(void*)f_5936},
{"f_3550:c_2dbackend_2escm",(void*)f_3550},
{"f_4123:c_2dbackend_2escm",(void*)f_4123},
{"f_4121:c_2dbackend_2escm",(void*)f_4121},
{"f_3544:c_2dbackend_2escm",(void*)f_3544},
{"f_5693:c_2dbackend_2escm",(void*)f_5693},
{"f_4476:c_2dbackend_2escm",(void*)f_4476},
{"f_5695:c_2dbackend_2escm",(void*)f_5695},
{"f_5697:c_2dbackend_2escm",(void*)f_5697},
{"f_5699:c_2dbackend_2escm",(void*)f_5699},
{"f_5691:c_2dbackend_2escm",(void*)f_5691},
{"f_3557:c_2dbackend_2escm",(void*)f_3557},
{"f_4470:c_2dbackend_2escm",(void*)f_4470},
{"f_4103:c_2dbackend_2escm",(void*)f_4103},
{"f_4105:c_2dbackend_2escm",(void*)f_4105},
{"f_5683:c_2dbackend_2escm",(void*)f_5683},
{"f_5687:c_2dbackend_2escm",(void*)f_5687},
{"f_5689:c_2dbackend_2escm",(void*)f_5689},
{"f_5681:c_2dbackend_2escm",(void*)f_5681},
{"f_3529:c_2dbackend_2escm",(void*)f_3529},
{"f_4152:c_2dbackend_2escm",(void*)f_4152},
{"f_3500:c_2dbackend_2escm",(void*)f_3500},
{"f_4156:c_2dbackend_2escm",(void*)f_4156},
{"f_4154:c_2dbackend_2escm",(void*)f_4154},
{"f_4159:c_2dbackend_2escm",(void*)f_4159},
{"f_4496:c_2dbackend_2escm",(void*)f_4496},
{"f_5670:c_2dbackend_2escm",(void*)f_5670},
{"f_5679:c_2dbackend_2escm",(void*)f_5679},
{"f_5677:c_2dbackend_2escm",(void*)f_5677},
{"f_5675:c_2dbackend_2escm",(void*)f_5675},
{"f_5673:c_2dbackend_2escm",(void*)f_5673},
{"f_4491:c_2dbackend_2escm",(void*)f_4491},
{"f_4494:c_2dbackend_2escm",(void*)f_4494},
{"f_5664:c_2dbackend_2escm",(void*)f_5664},
{"f_9368:c_2dbackend_2escm",(void*)f_9368},
{"f_3507:c_2dbackend_2escm",(void*)f_3507},
{"f_3516:c_2dbackend_2escm",(void*)f_3516},
{"f_6092:c_2dbackend_2escm",(void*)f_6092},
{"f_6090:c_2dbackend_2escm",(void*)f_6090},
{"f_6408:c_2dbackend_2escm",(void*)f_6408},
{"f_4482:c_2dbackend_2escm",(void*)f_4482},
{"f_4119:c_2dbackend_2escm",(void*)f_4119},
{"f_9320:c_2dbackend_2escm",(void*)f_9320},
{"f_9322:c_2dbackend_2escm",(void*)f_9322},
{"f_6465:c_2dbackend_2escm",(void*)f_6465},
{"f_9325:c_2dbackend_2escm",(void*)f_9325},
{"f_7588:c_2dbackend_2escm",(void*)f_7588},
{"f_3522:c_2dbackend_2escm",(void*)f_3522},
{"f_9336:c_2dbackend_2escm",(void*)f_9336},
{"f_9338:c_2dbackend_2escm",(void*)f_9338},
{"f_5605:c_2dbackend_2escm",(void*)f_5605},
{"f_5607:c_2dbackend_2escm",(void*)f_5607},
{"f_9343:c_2dbackend_2escm",(void*)f_9343},
{"f_9340:c_2dbackend_2escm",(void*)f_9340},
{"f_6043:c_2dbackend_2escm",(void*)f_6043},
{"f_2995:c_2dbackend_2escm",(void*)f_2995},
{"f_2999:c_2dbackend_2escm",(void*)f_2999},
{"f_2997:c_2dbackend_2escm",(void*)f_2997},
{"f_9618:c_2dbackend_2escm",(void*)f_9618},
{"f_6013:c_2dbackend_2escm",(void*)f_6013},
{"f_6011:c_2dbackend_2escm",(void*)f_6011},
{"f_6459:c_2dbackend_2escm",(void*)f_6459},
{"f_6457:c_2dbackend_2escm",(void*)f_6457},
{"f_6451:c_2dbackend_2escm",(void*)f_6451},
{"f_6445:c_2dbackend_2escm",(void*)f_6445},
{"f_3661:c_2dbackend_2escm",(void*)f_3661},
{"f_9673:c_2dbackend_2escm",(void*)f_9673},
{"f_5382:c_2dbackend_2escm",(void*)f_5382},
{"f_9404:c_2dbackend_2escm",(void*)f_9404},
{"f_9408:c_2dbackend_2escm",(void*)f_9408},
{"f_9406:c_2dbackend_2escm",(void*)f_9406},
{"f_3646:c_2dbackend_2escm",(void*)f_3646},
{"f10617:c_2dbackend_2escm",(void*)f10617},
{"f_9411:c_2dbackend_2escm",(void*)f_9411},
{"f_3658:c_2dbackend_2escm",(void*)f_3658},
{"f_9375:c_2dbackend_2escm",(void*)f_9375},
{"f_9372:c_2dbackend_2escm",(void*)f_9372},
{"f_9370:c_2dbackend_2escm",(void*)f_9370},
{"f_3652:c_2dbackend_2escm",(void*)f_3652},
{"f_4432:c_2dbackend_2escm",(void*)f_4432},
{"f_4434:c_2dbackend_2escm",(void*)f_4434},
{"f10609:c_2dbackend_2escm",(void*)f10609},
{"f_3629:c_2dbackend_2escm",(void*)f_3629},
{"f_9388:c_2dbackend_2escm",(void*)f_9388},
{"f_9386:c_2dbackend_2escm",(void*)f_9386},
{"f_3623:c_2dbackend_2escm",(void*)f_3623},
{"f_9630:c_2dbackend_2escm",(void*)f_9630},
{"f_3637:c_2dbackend_2escm",(void*)f_3637},
{"f_9393:c_2dbackend_2escm",(void*)f_9393},
{"f_9390:c_2dbackend_2escm",(void*)f_9390},
{"f_3631:c_2dbackend_2escm",(void*)f_3631},
{"f_4429:c_2dbackend_2escm",(void*)f_4429},
{"f_4423:c_2dbackend_2escm",(void*)f_4423},
{"f_4426:c_2dbackend_2escm",(void*)f_4426},
{"f_4420:c_2dbackend_2escm",(void*)f_4420},
{"f_6724:c_2dbackend_2escm",(void*)f_6724},
{"f_4443:c_2dbackend_2escm",(void*)f_4443},
{"f_4440:c_2dbackend_2escm",(void*)f_4440},
{"f_4445:c_2dbackend_2escm",(void*)f_4445},
{"f_4411:c_2dbackend_2escm",(void*)f_4411},
{"f_6707:c_2dbackend_2escm",(void*)f_6707},
{"f_6704:c_2dbackend_2escm",(void*)f_6704},
{"f_6494:c_2dbackend_2escm",(void*)f_6494},
{"f_4784:c_2dbackend_2escm",(void*)f_4784},
{"f_4786:c_2dbackend_2escm",(void*)f_4786},
{"f_4795:c_2dbackend_2escm",(void*)f_4795},
{"f_3901:c_2dbackend_2escm",(void*)f_3901},
{"f_6473:c_2dbackend_2escm",(void*)f_6473},
{"f_6471:c_2dbackend_2escm",(void*)f_6471},
{"f_6477:c_2dbackend_2escm",(void*)f_6477},
{"f_6478:c_2dbackend_2escm",(void*)f_6478},
{"f_4797:c_2dbackend_2escm",(void*)f_4797},
{"f_4763:c_2dbackend_2escm",(void*)f_4763},
{"f_5339:c_2dbackend_2escm",(void*)f_5339},
{"f_5363:c_2dbackend_2escm",(void*)f_5363},
{"f_4773:c_2dbackend_2escm",(void*)f_4773},
{"f_4771:c_2dbackend_2escm",(void*)f_4771},
{"f_5357:c_2dbackend_2escm",(void*)f_5357},
{"f_4743:c_2dbackend_2escm",(void*)f_4743},
{"f_4748:c_2dbackend_2escm",(void*)f_4748},
{"f_4756:c_2dbackend_2escm",(void*)f_4756},
{"f_4754:c_2dbackend_2escm",(void*)f_4754},
{"f_4752:c_2dbackend_2escm",(void*)f_4752},
{"f_4750:c_2dbackend_2escm",(void*)f_4750},
{"f_4758:c_2dbackend_2escm",(void*)f_4758},
{"f_6796:c_2dbackend_2escm",(void*)f_6796},
{"f_4721:c_2dbackend_2escm",(void*)f_4721},
{"f_4723:c_2dbackend_2escm",(void*)f_4723},
{"f_4725:c_2dbackend_2escm",(void*)f_4725},
{"f_4727:c_2dbackend_2escm",(void*)f_4727},
{"f_4728:c_2dbackend_2escm",(void*)f_4728},
{"f_6787:c_2dbackend_2escm",(void*)f_6787},
{"f_5496:c_2dbackend_2escm",(void*)f_5496},
{"f_5498:c_2dbackend_2escm",(void*)f_5498},
{"f_5329:c_2dbackend_2escm",(void*)f_5329},
{"f_4738:c_2dbackend_2escm",(void*)f_4738},
{"f_4706:c_2dbackend_2escm",(void*)f_4706},
{"f_4709:c_2dbackend_2escm",(void*)f_4709},
{"f_5471:c_2dbackend_2escm",(void*)f_5471},
{"f_4713:c_2dbackend_2escm",(void*)f_4713},
{"f_4711:c_2dbackend_2escm",(void*)f_4711},
{"f_4717:c_2dbackend_2escm",(void*)f_4717},
{"f_4715:c_2dbackend_2escm",(void*)f_4715},
{"f_4719:c_2dbackend_2escm",(void*)f_4719},
{"f_3733:c_2dbackend_2escm",(void*)f_3733},
{"f_5302:c_2dbackend_2escm",(void*)f_5302},
{"f_5304:c_2dbackend_2escm",(void*)f_5304},
{"f_3742:c_2dbackend_2escm",(void*)f_3742},
{"f_3719:c_2dbackend_2escm",(void*)f_3719},
{"f_3711:c_2dbackend_2escm",(void*)f_3711},
{"f_4292:c_2dbackend_2escm",(void*)f_4292},
{"f_9107:c_2dbackend_2escm",(void*)f_9107},
{"f_9109:c_2dbackend_2escm",(void*)f_9109},
{"f_3725:c_2dbackend_2escm",(void*)f_3725},
{"f_3728:c_2dbackend_2escm",(void*)f_3728},
{"f_3720:c_2dbackend_2escm",(void*)f_3720},
{"f_9111:c_2dbackend_2escm",(void*)f_9111},
{"f_9114:c_2dbackend_2escm",(void*)f_9114},
{"f_3774:c_2dbackend_2escm",(void*)f_3774},
{"f_4298:c_2dbackend_2escm",(void*)f_4298},
{"f_7866:c_2dbackend_2escm",(void*)f_7866},
{"f_9129:c_2dbackend_2escm",(void*)f_9129},
{"f_9127:c_2dbackend_2escm",(void*)f_9127},
{"f_7854:c_2dbackend_2escm",(void*)f_7854},
{"f_9131:c_2dbackend_2escm",(void*)f_9131},
{"f_9134:c_2dbackend_2escm",(void*)f_9134},
{"f_7887:c_2dbackend_2escm",(void*)f_7887},
{"f_9145:c_2dbackend_2escm",(void*)f_9145},
{"f_9147:c_2dbackend_2escm",(void*)f_9147},
{"f_9149:c_2dbackend_2escm",(void*)f_9149},
{"f_7881:c_2dbackend_2escm",(void*)f_7881},
{"f_3765:c_2dbackend_2escm",(void*)f_3765},
{"f_6731:c_2dbackend_2escm",(void*)f_6731},
{"f_6733:c_2dbackend_2escm",(void*)f_6733},
{"f_8018:c_2dbackend_2escm",(void*)f_8018},
{"f_9152:c_2dbackend_2escm",(void*)f_9152},
{"f_3059:c_2dbackend_2escm",(void*)f_3059},
{"f_7872:c_2dbackend_2escm",(void*)f_7872},
{"f_3054:c_2dbackend_2escm",(void*)f_3054},
{"f_6228:c_2dbackend_2escm",(void*)f_6228},
{"f_9167:c_2dbackend_2escm",(void*)f_9167},
{"f_9165:c_2dbackend_2escm",(void*)f_9165},
{"f_9169:c_2dbackend_2escm",(void*)f_9169},
{"f_3022:c_2dbackend_2escm",(void*)f_3022},
{"f_3024:c_2dbackend_2escm",(void*)f_3024},
{"f_3020:c_2dbackend_2escm",(void*)f_3020},
{"f_7896:c_2dbackend_2escm",(void*)f_7896},
{"f_6203:c_2dbackend_2escm",(void*)f_6203},
{"f_6205:c_2dbackend_2escm",(void*)f_6205},
{"f_4212:c_2dbackend_2escm",(void*)f_4212},
{"f_3001:c_2dbackend_2escm",(void*)f_3001},
{"f_4218:c_2dbackend_2escm",(void*)f_4218},
{"f_6260:c_2dbackend_2escm",(void*)f_6260},
{"f_3705:c_2dbackend_2escm",(void*)f_3705},
{"f_3706:c_2dbackend_2escm",(void*)f_3706},
{"f_3709:c_2dbackend_2escm",(void*)f_3709},
{"f_3703:c_2dbackend_2escm",(void*)f_3703},
{"f_5467:c_2dbackend_2escm",(void*)f_5467},
{"f_6246:c_2dbackend_2escm",(void*)f_6246},
{"f_6248:c_2dbackend_2escm",(void*)f_6248},
{"f_7808:c_2dbackend_2escm",(void*)f_7808},
{"f_7802:c_2dbackend_2escm",(void*)f_7802},
{"f_3884:c_2dbackend_2escm",(void*)f_3884},
{"f_6510:c_2dbackend_2escm",(void*)f_6510},
{"f_3881:c_2dbackend_2escm",(void*)f_3881},
{"f_3049:c_2dbackend_2escm",(void*)f_3049},
{"f_3047:c_2dbackend_2escm",(void*)f_3047},
{"f_3044:c_2dbackend_2escm",(void*)f_3044},
{"f_3043:c_2dbackend_2escm",(void*)f_3043},
{"f_6230:c_2dbackend_2escm",(void*)f_6230},
{"f_6232:c_2dbackend_2escm",(void*)f_6232},
{"f_6501:c_2dbackend_2escm",(void*)f_6501},
{"f_7829:c_2dbackend_2escm",(void*)f_7829},
{"f_6573:c_2dbackend_2escm",(void*)f_6573},
{"f_7827:c_2dbackend_2escm",(void*)f_7827},
{"f_6577:c_2dbackend_2escm",(void*)f_6577},
{"f_6575:c_2dbackend_2escm",(void*)f_6575},
{"f_6579:c_2dbackend_2escm",(void*)f_6579},
{"f_5188:c_2dbackend_2escm",(void*)f_5188},
{"f_9201:c_2dbackend_2escm",(void*)f_9201},
{"f_9208:c_2dbackend_2escm",(void*)f_9208},
{"f_9205:c_2dbackend_2escm",(void*)f_9205},
{"f_9203:c_2dbackend_2escm",(void*)f_9203},
{"f_7814:c_2dbackend_2escm",(void*)f_7814},
{"f_6562:c_2dbackend_2escm",(void*)f_6562},
{"f_7816:c_2dbackend_2escm",(void*)f_7816},
{"f_6567:c_2dbackend_2escm",(void*)f_6567},
{"f_5421:c_2dbackend_2escm",(void*)f_5421},
{"f_6565:c_2dbackend_2escm",(void*)f_6565},
{"f_7811:c_2dbackend_2escm",(void*)f_7811},
{"f_6569:c_2dbackend_2escm",(void*)f_6569},
{"f_5178:c_2dbackend_2escm",(void*)f_5178},
{"f_7246:c_2dbackend_2escm",(void*)f_7246},
{"f_7248:c_2dbackend_2escm",(void*)f_7248},
{"f_5416:c_2dbackend_2escm",(void*)f_5416},
{"f_9227:c_2dbackend_2escm",(void*)f_9227},
{"f_3853:c_2dbackend_2escm",(void*)f_3853},
{"f_5401:c_2dbackend_2escm",(void*)f_5401},
{"f_5409:c_2dbackend_2escm",(void*)f_5409},
{"f_5196:c_2dbackend_2escm",(void*)f_5196},
{"f_5190:c_2dbackend_2escm",(void*)f_5190},
{"f_6539:c_2dbackend_2escm",(void*)f_6539},
{"f_7266:c_2dbackend_2escm",(void*)f_7266},
{"f_2942:c_2dbackend_2escm",(void*)f_2942},
{"f_2944:c_2dbackend_2escm",(void*)f_2944},
{"f_7268:c_2dbackend_2escm",(void*)f_7268},
{"f_2940:c_2dbackend_2escm",(void*)f_2940},
{"f_7263:c_2dbackend_2escm",(void*)f_7263},
{"f_2946:c_2dbackend_2escm",(void*)f_2946},
{"f_3836:c_2dbackend_2escm",(void*)f_3836},
{"f_3838:c_2dbackend_2escm",(void*)f_3838},
{"f_6529:c_2dbackend_2escm",(void*)f_6529},
{"f_6527:c_2dbackend_2escm",(void*)f_6527},
{"f_7256:c_2dbackend_2escm",(void*)f_7256},
{"f_6524:c_2dbackend_2escm",(void*)f_6524},
{"f_7257:c_2dbackend_2escm",(void*)f_7257},
{"f_6521:c_2dbackend_2escm",(void*)f_6521},
{"f_7254:c_2dbackend_2escm",(void*)f_7254},
{"f_7252:c_2dbackend_2escm",(void*)f_7252},
{"f_7250:c_2dbackend_2escm",(void*)f_7250},
{"f_3804:c_2dbackend_2escm",(void*)f_3804},
{"f_3800:c_2dbackend_2escm",(void*)f_3800},
{"f_3802:c_2dbackend_2escm",(void*)f_3802},
{"f_2968:c_2dbackend_2escm",(void*)f_2968},
{"f_2966:c_2dbackend_2escm",(void*)f_2966},
{"f_3899:c_2dbackend_2escm",(void*)f_3899},
{"f_2970:c_2dbackend_2escm",(void*)f_2970},
{"toplevel:c_2dbackend_2escm",(void*)C_backend_toplevel},
{"f_2972:c_2dbackend_2escm",(void*)f_2972},
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
S|  sprintf		21
S|  for-each		22
o|eliminated procedure checks: 84 
o|specializations:
o|  1 (number->string fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  3 (>= fixnum fixnum)
o|  1 (> fixnum fixnum)
o|  2 (memq * list)
o|  8 (= fixnum fixnum)
o|  4 (length list)
o|  1 (zero? number)
o|  1 (vector-length vector)
o|  2 (bitwise-and fixnum fixnum)
o|  2 (zero? fixnum)
o|  4 (string-append string string)
o|  5 (car pair)
o|  6 (cdr pair)
o|  5 (first pair)
o|  271 (eqv? * (not float))
o|  17 (##sys#check-list (or pair list) *)
o|safe globals: (##compiler#gen-list ##compiler#gen ##compiler#output) 
o|Removed `not' forms: 19 
o|inlining procedure: k2559 
o|inlining procedure: k2559 
o|inlining procedure: k2577 
o|inlining procedure: k2577 
o|inlining procedure: k2610 
o|inlining procedure: k2610 
o|inlining procedure: k2642 
o|inlining procedure: k2642 
o|inlining procedure: k2677 
o|inlining procedure: k2695 
o|inlining procedure: k2695 
o|inlining procedure: k2700 
o|inlining procedure: k2700 
o|inlining procedure: k2724 
o|inlining procedure: k2724 
o|substituted constant variable: a2749 
o|substituted constant variable: a2751 
o|substituted constant variable: a2753 
o|substituted constant variable: a2755 
o|substituted constant variable: a2757 
o|inlining procedure: k2677 
o|inlining procedure: k2766 
o|inlining procedure: k2766 
o|inlining procedure: k2783 
o|inlining procedure: k2783 
o|inlining procedure: k2825 
o|inlining procedure: k2841 
o|inlining procedure: k2841 
o|inlining procedure: k2825 
o|inlining procedure: k2895 
o|inlining procedure: k2895 
o|inlining procedure: k2933 
o|inlining procedure: k2933 
o|inlining procedure: k2988 
o|inlining procedure: k2988 
o|inlining procedure: k3034 
o|inlining procedure: k3070 
o|inlining procedure: k3070 
o|inlining procedure: k3034 
o|inlining procedure: k3114 
o|inlining procedure: k3114 
o|inlining procedure: k3143 
o|inlining procedure: k3158 
o|inlining procedure: k3158 
o|inlining procedure: k3176 
o|inlining procedure: k3176 
o|inlining procedure: k3143 
o|inlining procedure: k3221 
o|inlining procedure: k3221 
o|inlining procedure: k3277 
o|inlining procedure: k3328 
o|inlining procedure: k3364 
o|inlining procedure: k3364 
o|inlining procedure: k3376 
o|inlining procedure: k3376 
o|inlining procedure: k3408 
o|inlining procedure: k3408 
o|inlining procedure: k3328 
o|inlining procedure: k3523 
o|inlining procedure: k3523 
o|propagated global variable: tmp351353 unsafe 
o|propagated global variable: tmp351353 unsafe 
o|propagated global variable: tmp354356 ##compiler#no-procedure-checks 
o|inlining procedure: k3598 
o|propagated global variable: tmp354356 ##compiler#no-procedure-checks 
o|inlining procedure: k3598 
o|contracted procedure: k3608 
o|propagated global variable: r3609 unsafe 
o|inlining procedure: k3605 
o|inlining procedure: k3605 
o|contracted procedure: k3614 
o|propagated global variable: r3615 ##compiler#no-procedure-checks 
o|inlining procedure: k3638 
o|inlining procedure: k3638 
o|inlining procedure: k3665 
o|inlining procedure: k3665 
o|inlining procedure: k3277 
o|inlining procedure: k3699 
o|inlining procedure: k3736 
o|inlining procedure: k3736 
o|inlining procedure: k3768 
o|inlining procedure: k3768 
o|inlining procedure: k3699 
o|inlining procedure: k3814 
o|inlining procedure: k3854 
o|inlining procedure: k3854 
o|inlining procedure: k3865 
o|inlining procedure: k3865 
o|inlining procedure: k3814 
o|inlining procedure: k3908 
o|inlining procedure: k3908 
o|inlining procedure: k3940 
o|inlining procedure: k3940 
o|inlining procedure: k3984 
o|inlining procedure: k3984 
o|inlining procedure: k4034 
o|inlining procedure: k4034 
o|inlining procedure: k4077 
o|inlining procedure: k4077 
o|inlining procedure: k4112 
o|inlining procedure: k4136 
o|inlining procedure: k4136 
o|inlining procedure: k4112 
o|substituted constant variable: a4220 
o|substituted constant variable: a4222 
o|substituted constant variable: a4224 
o|substituted constant variable: a4226 
o|substituted constant variable: a4228 
o|substituted constant variable: a4230 
o|substituted constant variable: a4232 
o|substituted constant variable: a4234 
o|substituted constant variable: a4236 
o|substituted constant variable: a4238 
o|substituted constant variable: a4240 
o|substituted constant variable: a4242 
o|substituted constant variable: a4244 
o|substituted constant variable: a4246 
o|substituted constant variable: a4248 
o|substituted constant variable: a4250 
o|substituted constant variable: a4252 
o|substituted constant variable: a4254 
o|substituted constant variable: a4256 
o|substituted constant variable: a4258 
o|substituted constant variable: a4260 
o|substituted constant variable: a4262 
o|substituted constant variable: a4264 
o|substituted constant variable: a4266 
o|substituted constant variable: a4268 
o|substituted constant variable: a4270 
o|substituted constant variable: a4272 
o|substituted constant variable: a4274 
o|substituted constant variable: a4276 
o|substituted constant variable: a4278 
o|substituted constant variable: a4280 
o|substituted constant variable: a4282 
o|substituted constant variable: a4284 
o|substituted constant variable: a4286 
o|substituted constant variable: a4288 
o|substituted constant variable: a4290 
o|inlining procedure: k4328 
o|substituted constant variable: a4336 
o|inlining procedure: k4328 
o|inlining procedure: k4366 
o|inlining procedure: k4366 
o|inlining procedure: k4388 
o|inlining procedure: k4388 
o|propagated global variable: g556558 ##compiler#foreign-declarations 
o|inlining procedure: k4448 
o|inlining procedure: k4448 
o|inlining procedure: k4523 
o|inlining procedure: k4523 
o|inlining procedure: k4556 
o|inlining procedure: k4556 
o|inlining procedure: k4579 
o|inlining procedure: k4579 
o|substituted constant variable: a4605 
o|inlining procedure: k4624 
o|inlining procedure: k4624 
o|propagated global variable: g584586 ##compiler#used-units 
o|inlining procedure: k4664 
o|inlining procedure: k4664 
o|inlining procedure: k4689 
o|inlining procedure: k4689 
o|inlining procedure: k4730 
o|inlining procedure: k4730 
o|inlining procedure: k4759 
o|inlining procedure: k4759 
o|inlining procedure: k4798 
o|inlining procedure: k4798 
o|inlining procedure: k4825 
o|inlining procedure: k4825 
o|inlining procedure: k4837 
o|inlining procedure: k4837 
o|inlining procedure: k4858 
o|inlining procedure: k4858 
o|inlining procedure: k4888 
o|inlining procedure: k4888 
o|inlining procedure: k4919 
o|inlining procedure: k4919 
o|substituted constant variable: nsrv717 
o|inlining procedure: k5043 
o|inlining procedure: k5043 
o|substituted constant variable: nsrv717 
o|substituted constant variable: nsrv717 
o|inlining procedure: k5063 
o|inlining procedure: k5063 
o|inlining procedure: k5083 
o|inlining procedure: k5083 
o|inlining procedure: k5114 
o|inlining procedure: k5114 
o|inlining procedure: k5142 
o|inlining procedure: k5142 
o|inlining procedure: k5170 
o|inlining procedure: k5170 
o|inlining procedure: k5199 
o|inlining procedure: k5199 
o|inlining procedure: k5240 
o|inlining procedure: k5240 
o|inlining procedure: k5251 
o|propagated global variable: r525210055 ##compiler#words-per-flonum 
o|inlining procedure: k5251 
o|inlining procedure: k5263 
o|inlining procedure: k5263 
o|inlining procedure: k5307 
o|inlining procedure: k5307 
o|inlining procedure: k5334 
o|inlining procedure: k5334 
o|inlining procedure: "(c-backend.scm:680) bad-literal97" 
o|inlining procedure: k5349 
o|inlining procedure: k5349 
o|inlining procedure: k5367 
o|inlining procedure: k5385 
o|inlining procedure: k5385 
o|inlining procedure: k5367 
o|inlining procedure: "(c-backend.scm:689) bad-literal97" 
o|inlining procedure: k5412 
o|inlining procedure: k5412 
o|inlining procedure: k5425 
o|inlining procedure: k5425 
o|inlining procedure: k5444 
o|inlining procedure: k5444 
o|inlining procedure: k5446 
o|inlining procedure: k5446 
o|inlining procedure: k5475 
o|inlining procedure: k5475 
o|inlining procedure: k5489 
o|inlining procedure: k5489 
o|inlining procedure: "(c-backend.scm:716) bad-literal97" 
o|inlining procedure: k5551 
o|inlining procedure: k5551 
o|inlining procedure: k5747 
o|inlining procedure: k5747 
o|inlining procedure: k5755 
o|inlining procedure: k5800 
o|inlining procedure: k5800 
o|inlining procedure: k5831 
o|inlining procedure: k5831 
o|inlining procedure: k5755 
o|inlining procedure: k5860 
o|inlining procedure: k5860 
o|contracted procedure: k5871 
o|inlining procedure: k5868 
o|inlining procedure: k5868 
o|inlining procedure: k5877 
o|inlining procedure: k5877 
o|inlining procedure: k5904 
o|inlining procedure: k5904 
o|inlining procedure: k5923 
o|inlining procedure: k5923 
o|inlining procedure: k5943 
o|contracted procedure: k5972 
o|propagated global variable: r5973 unsafe 
o|contracted procedure: k5978 
o|propagated global variable: r5979 ##compiler#no-argc-checks 
o|inlining procedure: k5975 
o|inlining procedure: k5975 
o|inlining procedure: k5943 
o|inlining procedure: k6014 
o|inlining procedure: k6014 
o|contracted procedure: k6032 
o|inlining procedure: k6035 
o|inlining procedure: k6035 
o|inlining procedure: k6044 
o|inlining procedure: k6044 
o|contracted procedure: k6065 
o|propagated global variable: r6066 unsafe 
o|inlining procedure: k6062 
o|inlining procedure: k6062 
o|contracted procedure: k6071 
o|propagated global variable: r6072 ##compiler#no-argc-checks 
o|inlining procedure: k6080 
o|inlining procedure: k6080 
o|inlining procedure: k6093 
o|inlining procedure: k6093 
o|contracted procedure: k6108 
o|propagated global variable: r6109 unsafe 
o|inlining procedure: k6105 
o|inlining procedure: k6105 
o|contracted procedure: k6117 
o|contracted procedure: "(c-backend.scm:806) utype102" 
o|inlining procedure: k5612 
o|inlining procedure: k5612 
o|inlining procedure: k5624 
o|inlining procedure: k5624 
o|inlining procedure: k5636 
o|inlining procedure: k5636 
o|substituted constant variable: a5652 
o|substituted constant variable: a5654 
o|substituted constant variable: a5656 
o|substituted constant variable: a5658 
o|substituted constant variable: a5660 
o|substituted constant variable: a5662 
o|inlining procedure: k6149 
o|inlining procedure: k6149 
o|inlining procedure: k6172 
o|inlining procedure: k6172 
o|inlining procedure: k6189 
o|inlining procedure: k6189 
o|inlining procedure: k6206 
o|inlining procedure: k6206 
o|inlining procedure: k6231 
o|inlining procedure: k6231 
o|inlining procedure: k6243 
o|inlining procedure: k6243 
o|inlining procedure: k6268 
o|inlining procedure: k6268 
o|inlining procedure: k6274 
o|inlining procedure: k6274 
o|inlining procedure: k6280 
o|inlining procedure: k6280 
o|contracted procedure: "(c-backend.scm:925) trailer92" 
o|inlining procedure: k6337 
o|inlining procedure: k6337 
o|inlining procedure: k6377 
o|inlining procedure: k6377 
o|inlining procedure: k6400 
o|inlining procedure: k6400 
o|inlining procedure: k6409 
o|inlining procedure: k6409 
o|inlining procedure: k6417 
o|inlining procedure: k6417 
o|inlining procedure: k6426 
o|inlining procedure: k6426 
o|inlining procedure: k6504 
o|inlining procedure: k6504 
o|inlining procedure: k6542 
o|inlining procedure: k6542 
o|inlining procedure: k6623 
o|inlining procedure: k6623 
o|inlining procedure: k6647 
o|inlining procedure: k6662 
o|inlining procedure: k6662 
o|inlining procedure: k6647 
o|inlining procedure: k6687 
o|inlining procedure: k6687 
o|inlining procedure: k6727 
o|inlining procedure: k6727 
o|inlining procedure: k6758 
o|inlining procedure: k6758 
o|inlining procedure: k6806 
o|inlining procedure: k6806 
o|inlining procedure: k6844 
o|inlining procedure: k6844 
o|inlining procedure: k6863 
o|inlining procedure: k6863 
o|inlining procedure: k6895 
o|inlining procedure: k6895 
o|inlining procedure: k6887 
o|inlining procedure: k6887 
o|inlining procedure: k6913 
o|inlining procedure: k6913 
o|substituted constant variable: a6937 
o|inlining procedure: k6940 
o|inlining procedure: k6940 
o|inlining procedure: k6950 
o|inlining procedure: k6950 
o|inlining procedure: k6960 
o|inlining procedure: k6960 
o|inlining procedure: k6970 
o|inlining procedure: k6970 
o|substituted constant variable: a6977 
o|substituted constant variable: a6979 
o|substituted constant variable: a6981 
o|substituted constant variable: a6983 
o|substituted constant variable: a6985 
o|substituted constant variable: a6987 
o|substituted constant variable: a6989 
o|substituted constant variable: a6991 
o|substituted constant variable: a6993 
o|inlining procedure: k7002 
o|inlining procedure: k7002 
o|inlining procedure: k7012 
o|inlining procedure: k7012 
o|substituted constant variable: a7019 
o|substituted constant variable: a7021 
o|substituted constant variable: a7023 
o|substituted constant variable: a7025 
o|substituted constant variable: a7027 
o|inlining procedure: k7030 
o|inlining procedure: k7030 
o|inlining procedure: k7040 
o|inlining procedure: k7040 
o|substituted constant variable: a7047 
o|substituted constant variable: a7049 
o|substituted constant variable: a7051 
o|substituted constant variable: a7053 
o|substituted constant variable: a7055 
o|inlining procedure: k7058 
o|inlining procedure: k7058 
o|inlining procedure: k7068 
o|inlining procedure: k7068 
o|inlining procedure: k7078 
o|inlining procedure: k7078 
o|inlining procedure: k7088 
o|inlining procedure: k7088 
o|inlining procedure: k7098 
o|inlining procedure: k7098 
o|inlining procedure: k7108 
o|inlining procedure: k7108 
o|inlining procedure: k7118 
o|inlining procedure: k7118 
o|substituted constant variable: a7130 
o|substituted constant variable: a7132 
o|substituted constant variable: a7134 
o|substituted constant variable: a7136 
o|substituted constant variable: a7138 
o|substituted constant variable: a7140 
o|substituted constant variable: a7142 
o|substituted constant variable: a7144 
o|substituted constant variable: a7146 
o|substituted constant variable: a7148 
o|substituted constant variable: a7150 
o|substituted constant variable: a7152 
o|substituted constant variable: a7154 
o|substituted constant variable: a7156 
o|substituted constant variable: a7158 
o|substituted constant variable: a7160 
o|inlining procedure: k7163 
o|inlining procedure: k7163 
o|inlining procedure: k7173 
o|inlining procedure: k7173 
o|inlining procedure: k7183 
o|inlining procedure: k7183 
o|inlining procedure: k7193 
o|inlining procedure: k7193 
o|inlining procedure: k7203 
o|inlining procedure: k7203 
o|inlining procedure: k7213 
o|inlining procedure: k7213 
o|substituted constant variable: a7220 
o|substituted constant variable: a7222 
o|substituted constant variable: a7224 
o|substituted constant variable: a7226 
o|substituted constant variable: a7228 
o|substituted constant variable: a7230 
o|substituted constant variable: a7232 
o|substituted constant variable: a7234 
o|substituted constant variable: a7236 
o|substituted constant variable: a7238 
o|substituted constant variable: a7240 
o|substituted constant variable: a7242 
o|substituted constant variable: a7244 
o|inlining procedure: k7271 
o|inlining procedure: k7271 
o|inlining procedure: k7295 
o|inlining procedure: k7295 
o|inlining procedure: k7324 
o|inlining procedure: k7324 
o|inlining procedure: k7344 
o|inlining procedure: k7344 
o|inlining procedure: k7388 
o|inlining procedure: k7388 
o|inlining procedure: k7423 
o|inlining procedure: k7423 
o|inlining procedure: k7443 
o|inlining procedure: k7443 
o|inlining procedure: k7465 
o|inlining procedure: k7465 
o|inlining procedure: k7487 
o|inlining procedure: k7487 
o|inlining procedure: k7507 
o|inlining procedure: k7507 
o|inlining procedure: k7525 
o|inlining procedure: k7525 
o|inlining procedure: k7543 
o|inlining procedure: k7543 
o|inlining procedure: k7561 
o|inlining procedure: k7561 
o|inlining procedure: k7581 
o|inlining procedure: k7581 
o|inlining procedure: k7600 
o|inlining procedure: k7600 
o|inlining procedure: k7622 
o|inlining procedure: k7622 
o|inlining procedure: k7644 
o|inlining procedure: k7644 
o|inlining procedure: k7666 
o|inlining procedure: k7666 
o|inlining procedure: k7688 
o|inlining procedure: k7688 
o|inlining procedure: k7710 
o|inlining procedure: k7710 
o|inlining procedure: k7740 
o|inlining procedure: k7740 
o|inlining procedure: k7732 
o|inlining procedure: k7732 
o|inlining procedure: k7760 
o|inlining procedure: k7782 
o|inlining procedure: k7782 
o|propagated global variable: g16771678 ##compiler#foreign-type-declaration 
o|inlining procedure: k7832 
o|inlining procedure: k7832 
o|inlining procedure: k7861 
o|inlining procedure: k7861 
o|inlining procedure: k7891 
o|inlining procedure: k7891 
o|inlining procedure: k7921 
o|inlining procedure: k7921 
o|inlining procedure: k7951 
o|inlining procedure: k7979 
o|inlining procedure: k7979 
o|inlining procedure: k7996 
o|inlining procedure: k7996 
o|inlining procedure: k7951 
o|substituted constant variable: a8041 
o|substituted constant variable: a8052 
o|substituted constant variable: a8059 
o|substituted constant variable: a8061 
o|substituted constant variable: a8072 
o|substituted constant variable: a8083 
o|substituted constant variable: a8094 
o|substituted constant variable: a8105 
o|substituted constant variable: a8116 
o|substituted constant variable: a8126 
o|substituted constant variable: a8134 
o|substituted constant variable: a8135 
o|inlining procedure: k7760 
o|substituted constant variable: a8147 
o|inlining procedure: k8150 
o|inlining procedure: k8150 
o|substituted constant variable: a8162 
o|substituted constant variable: a8164 
o|substituted constant variable: a8166 
o|substituted constant variable: a8168 
o|inlining procedure: k8171 
o|inlining procedure: k8171 
o|inlining procedure: k8181 
o|inlining procedure: k8181 
o|substituted constant variable: a8188 
o|substituted constant variable: a8190 
o|substituted constant variable: a8192 
o|substituted constant variable: a8194 
o|substituted constant variable: a8196 
o|substituted constant variable: a8201 
o|substituted constant variable: a8203 
o|substituted constant variable: a8208 
o|substituted constant variable: a8210 
o|substituted constant variable: a8215 
o|substituted constant variable: a8217 
o|substituted constant variable: a8222 
o|substituted constant variable: a8224 
o|substituted constant variable: a8229 
o|substituted constant variable: a8231 
o|substituted constant variable: a8236 
o|substituted constant variable: a8238 
o|substituted constant variable: a8243 
o|substituted constant variable: a8245 
o|substituted constant variable: a8250 
o|substituted constant variable: a8252 
o|inlining procedure: k8255 
o|inlining procedure: k8255 
o|substituted constant variable: a8267 
o|substituted constant variable: a8269 
o|substituted constant variable: a8271 
o|substituted constant variable: a8273 
o|substituted constant variable: a8278 
o|substituted constant variable: a8280 
o|inlining procedure: k8283 
o|inlining procedure: k8283 
o|substituted constant variable: a8295 
o|substituted constant variable: a8297 
o|substituted constant variable: a8299 
o|substituted constant variable: a8301 
o|substituted constant variable: a8306 
o|substituted constant variable: a8308 
o|substituted constant variable: a8310 
o|substituted constant variable: a8312 
o|substituted constant variable: a8314 
o|substituted constant variable: a8316 
o|substituted constant variable: a8318 
o|substituted constant variable: a8320 
o|substituted constant variable: a8322 
o|substituted constant variable: a8327 
o|substituted constant variable: a8329 
o|substituted constant variable: a8331 
o|inlining procedure: k8334 
o|inlining procedure: k8334 
o|substituted constant variable: a8341 
o|substituted constant variable: a8343 
o|substituted constant variable: a8345 
o|substituted constant variable: a8350 
o|substituted constant variable: a8352 
o|substituted constant variable: a8357 
o|substituted constant variable: a8359 
o|substituted constant variable: a8364 
o|substituted constant variable: a8366 
o|substituted constant variable: a8371 
o|substituted constant variable: a8373 
o|substituted constant variable: a8375 
o|inlining procedure: k8384 
o|inlining procedure: k8384 
o|inlining procedure: k8398 
o|inlining procedure: k8398 
o|inlining procedure: k8412 
o|inlining procedure: k8412 
o|inlining procedure: k8424 
o|inlining procedure: k8424 
o|inlining procedure: k8440 
o|inlining procedure: k8440 
o|inlining procedure: k8452 
o|inlining procedure: k8452 
o|inlining procedure: k8464 
o|inlining procedure: k8464 
o|inlining procedure: k8478 
o|inlining procedure: k8478 
o|inlining procedure: k8490 
o|inlining procedure: k8490 
o|inlining procedure: k8502 
o|inlining procedure: k8502 
o|inlining procedure: k8514 
o|inlining procedure: k8514 
o|inlining procedure: k8526 
o|inlining procedure: k8526 
o|inlining procedure: k8538 
o|inlining procedure: k8538 
o|inlining procedure: k8550 
o|inlining procedure: k8550 
o|inlining procedure: k8562 
o|inlining procedure: k8562 
o|inlining procedure: k8574 
o|inlining procedure: k8574 
o|inlining procedure: k8586 
o|inlining procedure: k8586 
o|inlining procedure: k8598 
o|inlining procedure: k8598 
o|inlining procedure: k8610 
o|inlining procedure: k8610 
o|inlining procedure: k8624 
o|inlining procedure: k8624 
o|inlining procedure: k8648 
o|inlining procedure: k8648 
o|inlining procedure: k8640 
o|inlining procedure: k8640 
o|inlining procedure: k8667 
o|inlining procedure: k8667 
o|inlining procedure: k8679 
o|inlining procedure: k8679 
o|inlining procedure: k8691 
o|inlining procedure: k8691 
o|inlining procedure: k8709 
o|inlining procedure: k8709 
o|inlining procedure: k8730 
o|inlining procedure: k8730 
o|substituted constant variable: a8746 
o|substituted constant variable: a8748 
o|substituted constant variable: a8750 
o|substituted constant variable: a8752 
o|substituted constant variable: a8754 
o|substituted constant variable: a8756 
o|substituted constant variable: a8758 
o|substituted constant variable: a8760 
o|substituted constant variable: a8762 
o|substituted constant variable: a8774 
o|substituted constant variable: a8782 
o|inlining procedure: k8785 
o|inlining procedure: k8785 
o|inlining procedure: k8795 
o|inlining procedure: k8795 
o|substituted constant variable: a8802 
o|substituted constant variable: a8804 
o|substituted constant variable: a8806 
o|substituted constant variable: a8808 
o|substituted constant variable: a8810 
o|inlining procedure: k8813 
o|inlining procedure: k8813 
o|substituted constant variable: a8825 
o|substituted constant variable: a8827 
o|substituted constant variable: a8829 
o|substituted constant variable: a8831 
o|substituted constant variable: a8833 
o|substituted constant variable: a8835 
o|substituted constant variable: a8837 
o|substituted constant variable: a8839 
o|substituted constant variable: a8841 
o|substituted constant variable: a8843 
o|substituted constant variable: a8845 
o|substituted constant variable: a8847 
o|substituted constant variable: a8849 
o|substituted constant variable: a8851 
o|substituted constant variable: a8853 
o|substituted constant variable: a8855 
o|substituted constant variable: a8857 
o|substituted constant variable: a8859 
o|substituted constant variable: a8861 
o|substituted constant variable: a8863 
o|substituted constant variable: a8865 
o|substituted constant variable: a8867 
o|substituted constant variable: a8869 
o|substituted constant variable: a8871 
o|substituted constant variable: a8873 
o|substituted constant variable: a8875 
o|substituted constant variable: a8877 
o|substituted constant variable: a8879 
o|substituted constant variable: a8884 
o|substituted constant variable: a8886 
o|substituted constant variable: a8888 
o|substituted constant variable: a8890 
o|substituted constant variable: a8892 
o|substituted constant variable: a8894 
o|substituted constant variable: a8899 
o|substituted constant variable: a8901 
o|inlining procedure: k8904 
o|inlining procedure: k8904 
o|substituted constant variable: a8911 
o|substituted constant variable: a8913 
o|substituted constant variable: a8915 
o|substituted constant variable: a8917 
o|substituted constant variable: a8919 
o|substituted constant variable: a8921 
o|inlining procedure: k8924 
o|inlining procedure: k8924 
o|inlining procedure: k8934 
o|inlining procedure: k8934 
o|substituted constant variable: a8946 
o|substituted constant variable: a8948 
o|substituted constant variable: a8950 
o|substituted constant variable: a8952 
o|substituted constant variable: a8954 
o|substituted constant variable: a8956 
o|substituted constant variable: a8961 
o|substituted constant variable: a8963 
o|substituted constant variable: a8965 
o|inlining procedure: k8974 
o|inlining procedure: k8974 
o|inlining procedure: k8990 
o|inlining procedure: k8990 
o|inlining procedure: k9004 
o|inlining procedure: k9004 
o|inlining procedure: k9016 
o|inlining procedure: k9016 
o|inlining procedure: k9042 
o|inlining procedure: k9042 
o|inlining procedure: k9080 
o|inlining procedure: k9080 
o|inlining procedure: k9118 
o|inlining procedure: k9118 
o|inlining procedure: k9156 
o|inlining procedure: k9156 
o|inlining procedure: k9194 
o|inlining procedure: k9194 
o|inlining procedure: k9218 
o|inlining procedure: k9218 
o|inlining procedure: k9236 
o|inlining procedure: k9236 
o|inlining procedure: k9247 
o|inlining procedure: k9275 
o|inlining procedure: k9275 
o|inlining procedure: k9311 
o|inlining procedure: k9311 
o|inlining procedure: k9347 
o|inlining procedure: k9347 
o|inlining procedure: k9379 
o|inlining procedure: k9379 
o|substituted constant variable: a9419 
o|substituted constant variable: a9421 
o|substituted constant variable: a9426 
o|substituted constant variable: a9428 
o|substituted constant variable: a9430 
o|substituted constant variable: a9432 
o|substituted constant variable: a9434 
o|substituted constant variable: a9436 
o|substituted constant variable: a9438 
o|substituted constant variable: a9443 
o|substituted constant variable: a9445 
o|inlining procedure: k9247 
o|substituted constant variable: a9457 
o|substituted constant variable: a9468 
o|substituted constant variable: a9470 
o|substituted constant variable: a9472 
o|substituted constant variable: a9474 
o|substituted constant variable: a9476 
o|substituted constant variable: a9481 
o|substituted constant variable: a9483 
o|substituted constant variable: a9485 
o|substituted constant variable: a9490 
o|substituted constant variable: a9492 
o|substituted constant variable: a9497 
o|substituted constant variable: a9499 
o|substituted constant variable: a9501 
o|inlining procedure: k9504 
o|inlining procedure: k9504 
o|inlining procedure: k9514 
o|inlining procedure: k9514 
o|inlining procedure: k9524 
o|inlining procedure: k9524 
o|inlining procedure: k9534 
o|inlining procedure: k9534 
o|inlining procedure: k9544 
o|inlining procedure: k9544 
o|substituted constant variable: a9556 
o|substituted constant variable: a9558 
o|substituted constant variable: a9560 
o|substituted constant variable: a9562 
o|substituted constant variable: a9564 
o|substituted constant variable: a9566 
o|substituted constant variable: a9568 
o|substituted constant variable: a9570 
o|substituted constant variable: a9572 
o|substituted constant variable: a9574 
o|substituted constant variable: a9576 
o|substituted constant variable: a9578 
o|substituted constant variable: a9580 
o|substituted constant variable: a9585 
o|substituted constant variable: a9587 
o|substituted constant variable: a9589 
o|substituted constant variable: a9591 
o|substituted constant variable: a9593 
o|substituted constant variable: a9595 
o|substituted constant variable: a9600 
o|substituted constant variable: a9602 
o|substituted constant variable: a9607 
o|substituted constant variable: a9609 
o|substituted constant variable: a9614 
o|substituted constant variable: a9616 
o|contracted procedure: "(c-backend.scm:1388) finish2163" 
o|inlining procedure: k9677 
o|inlining procedure: k9677 
o|substituted constant variable: a9692 
o|inlining procedure: k9699 
o|inlining procedure: k9699 
o|inlining procedure: k9711 
o|inlining procedure: k9711 
o|inlining procedure: k9723 
o|inlining procedure: k9723 
o|substituted constant variable: a9732 
o|substituted constant variable: a9749 
o|inlining procedure: k9779 
o|inlining procedure: k9779 
o|inlining procedure: k9808 
o|inlining procedure: k9808 
o|inlining procedure: "(c-backend.scm:1418) getsize2161" 
o|inlining procedure: "(c-backend.scm:1417) getbits2160" 
o|inlining procedure: "(c-backend.scm:1424) getbits2160" 
o|inlining procedure: "(c-backend.scm:1421) getsize2161" 
o|replaced variables: 1503 
o|removed binding forms: 174 
o|substituted constant variable: a26949910 
o|substituted constant variable: a26949911 
o|propagated global variable: r35999962 ##compiler#no-procedure-checks 
o|substituted constant variable: r36069964 
o|substituted constant variable: r36669969 
o|inlining procedure: k3841 
o|inlining procedure: k3948 
o|converted assignments to bindings: (pad0501) 
o|inlining procedure: k4785 
o|substituted constant variable: a483610031 
o|substituted constant variable: a483610032 
o|removed side-effect free assignment to unused variable: bad-literal97 
o|substituted constant variable: f_523910053 
o|substituted constant variable: r533510061 
o|substituted constant variable: r535010068 
o|substituted constant variable: a544310083 
o|substituted constant variable: a544310084 
o|substituted constant variable: a583010103 
o|substituted constant variable: a583010104 
o|inlining procedure: k5840 
o|substituted constant variable: a585910106 
o|substituted constant variable: a585910107 
o|substituted constant variable: r586910108 
o|substituted constant variable: r597610117 
o|substituted constant variable: r606310126 
o|substituted constant variable: r610610132 
o|substituted constant variable: r561310134 
o|substituted constant variable: r562510136 
o|substituted constant variable: r563710138 
o|substituted constant variable: a618810145 
o|substituted constant variable: a624210156 
o|substituted constant variable: a624210157 
o|substituted constant variable: a627910162 
o|substituted constant variable: a627910163 
o|substituted constant variable: r642710181 
o|substituted constant variable: r675910203 
o|substituted constant variable: a732310268 
o|substituted constant variable: a732310269 
o|substituted constant variable: f_797810320 
o|substituted constant variable: r838510338 
o|substituted constant variable: r839910340 
o|substituted constant variable: r841310342 
o|substituted constant variable: r842510344 
o|substituted constant variable: r844110346 
o|substituted constant variable: r845310348 
o|substituted constant variable: r846510350 
o|substituted constant variable: r847910352 
o|substituted constant variable: r849110354 
o|substituted constant variable: r850310356 
o|substituted constant variable: r851510358 
o|substituted constant variable: r852710360 
o|substituted constant variable: r853910362 
o|substituted constant variable: r855110364 
o|substituted constant variable: r856310366 
o|substituted constant variable: r857510368 
o|substituted constant variable: r858710370 
o|substituted constant variable: r859910372 
o|substituted constant variable: r861110374 
o|substituted constant variable: r862510376 
o|substituted constant variable: r866810382 
o|substituted constant variable: r868010384 
o|substituted constant variable: r869210386 
o|substituted constant variable: r871010388 
o|substituted constant variable: r897510404 
o|substituted constant variable: r899110406 
o|substituted constant variable: r900510408 
o|substituted constant variable: r901710410 
o|substituted constant variable: r921910422 
o|removed side-effect free assignment to unused variable: getbits2160 
o|removed side-effect free assignment to unused variable: getsize2161 
o|substituted constant variable: r967810446 
o|substituted constant variable: r970010448 
o|substituted constant variable: r971210450 
o|simplifications: ((let . 1)) 
o|replaced variables: 30 
o|removed binding forms: 1468 
o|inlining procedure: k3445 
o|inlining procedure: k3801 
o|inlining procedure: k3870 
o|inlining procedure: k4300 
o|inlining procedure: k4364 
o|inlining procedure: k5958 
o|inlining procedure: k6017 
o|inlining procedure: k6091 
o|inlining procedure: k6133 
o|inlining procedure: k6133 
o|inlining procedure: k6133 
o|inlining procedure: k6133 
o|inlining procedure: k6133 
o|inlining procedure: k6133 
o|inlining procedure: k6387 
o|inlining procedure: k9833 
o|inlining procedure: k9839 
o|inlining procedure: k9870 
o|converted assignments to bindings: (encode-size2162) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 96 
o|substituted constant variable: r601810666 
o|substituted constant variable: a613210669 
o|substituted constant variable: a613210672 
o|substituted constant variable: a613210675 
o|substituted constant variable: a613210678 
o|substituted constant variable: a613210681 
o|substituted constant variable: a613210684 
o|contracted procedure: k9841 
o|removed binding forms: 11 
o|removed conditional forms: 1 
o|removed binding forms: 8 
o|simplifications: ((if . 56) (##core#call . 850)) 
o|  call simplifications:
o|    eof-object?
o|    integer->char	9
o|    string	5
o|    list?	3
o|    fx>
o|    fx>=	3
o|    string=?
o|    char<?
o|    char>?
o|    char=?	2
o|    string-set!	3
o|    fx/
o|    void	2
o|    boolean?
o|    char?	2
o|    fixnum?	3
o|    string?	2
o|    number?	2
o|    symbol?	7
o|    ##sys#immediate?	4
o|    ##sys#generic-structure?
o|    ##sys#size	5
o|    write-char	12
o|    negative?
o|    apply	13
o|    null?	5
o|    string-length	3
o|    arithmetic-shift	7
o|    >=	5
o|    string-ref	3
o|    bitwise-and	8
o|    -	8
o|    cons	5
o|    ##sys#setslot	4
o|    <	2
o|    length	9
o|    cdr	6
o|    cddr	3
o|    zero?	15
o|    not	12
o|    number->string	10
o|    third	7
o|    fourth	4
o|    ##sys#check-list	17
o|    +	23
o|    >	14
o|    add1	18
o|    sub1	9
o|    car	35
o|    cadr	21
o|    caddr	2
o|    vector?	6
o|    vector-ref	13
o|    first	34
o|    char->integer	4
o|    second	14
o|    pair?	46
o|    ##sys#slot	80
o|    eq?	312
o|contracted procedure: k2561 
o|contracted procedure: k2579 
o|contracted procedure: k2588 
o|contracted procedure: k2591 
o|contracted procedure: k2612 
o|contracted procedure: k2621 
o|contracted procedure: k2624 
o|contracted procedure: k2680 
o|contracted procedure: k2683 
o|contracted procedure: k2688 
o|contracted procedure: k2697 
o|contracted procedure: k2703 
o|contracted procedure: k2713 
o|contracted procedure: k2710 
o|contracted procedure: k2718 
o|contracted procedure: k2727 
o|contracted procedure: k2734 
o|contracted procedure: k2739 
o|contracted procedure: k2761 
o|contracted procedure: k2764 
o|contracted procedure: k2769 
o|contracted procedure: k2776 
o|contracted procedure: k2786 
o|contracted procedure: k2805 
o|contracted procedure: k2808 
o|contracted procedure: k2811 
o|contracted procedure: k2816 
o|contracted procedure: k2823 
o|contracted procedure: k2828 
o|contracted procedure: k2835 
o|contracted procedure: k2843 
o|contracted procedure: k2858 
o|contracted procedure: k2861 
o|contracted procedure: k2864 
o|contracted procedure: k2870 
o|contracted procedure: k2875 
o|contracted procedure: k2878 
o|contracted procedure: k2890 
o|contracted procedure: k2893 
o|contracted procedure: k2898 
o|contracted procedure: k2912 
o|contracted procedure: k2909 
o|contracted procedure: k2915 
o|contracted procedure: k2920 
o|contracted procedure: k2931 
o|contracted procedure: k2936 
o|contracted procedure: k2951 
o|contracted procedure: k2954 
o|contracted procedure: k2957 
o|contracted procedure: k2962 
o|contracted procedure: k2977 
o|contracted procedure: k2983 
o|contracted procedure: k2980 
o|contracted procedure: k2986 
o|contracted procedure: k2991 
o|contracted procedure: k3006 
o|contracted procedure: k3009 
o|contracted procedure: k3014 
o|contracted procedure: k3029 
o|contracted procedure: k3032 
o|contracted procedure: k3037 
o|contracted procedure: k3040 
o|contracted procedure: k3055 
o|contracted procedure: k3064 
o|contracted procedure: k3092 
o|contracted procedure: k3072 
o|contracted procedure: k3081 
o|contracted procedure: k3084 
o|contracted procedure: k3087 
o|contracted procedure: k3090 
o|contracted procedure: k3101 
o|contracted procedure: k3112 
o|contracted procedure: k3117 
o|contracted procedure: k3124 
o|contracted procedure: k3129 
o|contracted procedure: k3138 
o|contracted procedure: k3141 
o|contracted procedure: k3146 
o|contracted procedure: k3149 
o|contracted procedure: k3151 
o|contracted procedure: k3153 
o|contracted procedure: k3174 
o|contracted procedure: k3188 
o|contracted procedure: k3191 
o|contracted procedure: k3193 
o|contracted procedure: k3195 
o|contracted procedure: k3207 
o|contracted procedure: k3224 
o|contracted procedure: k3227 
o|contracted procedure: k3229 
o|contracted procedure: k3231 
o|contracted procedure: k3244 
o|contracted procedure: k3260 
o|contracted procedure: k3271 
o|contracted procedure: k3280 
o|contracted procedure: k3283 
o|contracted procedure: k3285 
o|contracted procedure: k3287 
o|contracted procedure: k3681 
o|contracted procedure: k3289 
o|contracted procedure: k3291 
o|contracted procedure: k3297 
o|contracted procedure: k3307 
o|contracted procedure: k3326 
o|contracted procedure: k3350 
o|contracted procedure: k3398 
o|contracted procedure: k3378 
o|contracted procedure: k3387 
o|contracted procedure: k3390 
o|contracted procedure: k3393 
o|contracted procedure: k3396 
o|contracted procedure: k3430 
o|contracted procedure: k3410 
o|contracted procedure: k3419 
o|contracted procedure: k3422 
o|contracted procedure: k3425 
o|contracted procedure: k3428 
o|contracted procedure: k3437 
o|contracted procedure: k3465 
o|contracted procedure: k3487 
o|contracted procedure: k3489 
o|contracted procedure: k3491 
o|contracted procedure: k3546 
o|contracted procedure: k3602 
o|contracted procedure: k3675 
o|contracted procedure: k3668 
o|contracted procedure: k3686 
o|contracted procedure: k3689 
o|contracted procedure: k3691 
o|contracted procedure: k3693 
o|contracted procedure: k3695 
o|contracted procedure: k3697 
o|contracted procedure: k3715 
o|contracted procedure: k3758 
o|contracted procedure: k3738 
o|contracted procedure: k3747 
o|contracted procedure: k3750 
o|contracted procedure: k3753 
o|contracted procedure: k3756 
o|contracted procedure: k3790 
o|contracted procedure: k3770 
o|contracted procedure: k3779 
o|contracted procedure: k3782 
o|contracted procedure: k3785 
o|contracted procedure: k3788 
o|contracted procedure: k3797 
o|contracted procedure: k3817 
o|contracted procedure: k3820 
o|contracted procedure: k3822 
o|contracted procedure: k3824 
o|contracted procedure: k3826 
o|contracted procedure: k3828 
o|contracted procedure: k3886 
o|contracted procedure: k3830 
o|contracted procedure: k3832 
o|contracted procedure: k3846 
o|contracted procedure: k3857 
o|contracted procedure: k3868 
o|contracted procedure: k3870 
o|contracted procedure: k3891 
o|contracted procedure: k3894 
o|contracted procedure: k3896 
o|contracted procedure: k3906 
o|contracted procedure: k3911 
o|contracted procedure: k3922 
o|contracted procedure: k3927 
o|contracted procedure: k3938 
o|contracted procedure: k3943 
o|contracted procedure: k3953 
o|contracted procedure: k3962 
o|contracted procedure: k3965 
o|contracted procedure: k3970 
o|contracted procedure: k3982 
o|contracted procedure: k3987 
o|contracted procedure: k3990 
o|contracted procedure: k4000 
o|contracted procedure: k4013 
o|contracted procedure: k4016 
o|contracted procedure: k4026 
o|contracted procedure: k4037 
o|contracted procedure: k4040 
o|contracted procedure: k4054 
o|contracted procedure: k4060 
o|contracted procedure: k4068 
o|contracted procedure: k4075 
o|contracted procedure: k4080 
o|contracted procedure: k4091 
o|contracted procedure: k4094 
o|contracted procedure: k4099 
o|contracted procedure: k4110 
o|contracted procedure: k4115 
o|contracted procedure: k4128 
o|contracted procedure: k4138 
o|contracted procedure: k4149 
o|contracted procedure: k4164 
o|contracted procedure: k4167 
o|contracted procedure: k4170 
o|contracted procedure: k4173 
o|contracted procedure: k4176 
o|contracted procedure: k4181 
o|contracted procedure: k4200 
o|contracted procedure: k4203 
o|contracted procedure: k4206 
o|contracted procedure: k4306 
o|contracted procedure: k4308 
o|contracted procedure: k430610626 
o|contracted procedure: k4330 
o|contracted procedure: k4342 
o|contracted procedure: k4344 
o|contracted procedure: k4346 
o|contracted procedure: k4348 
o|contracted procedure: k4350 
o|contracted procedure: k4372 
o|contracted procedure: k4390 
o|contracted procedure: k4399 
o|contracted procedure: k4402 
o|contracted procedure: k4416 
o|contracted procedure: k4450 
o|contracted procedure: k4453 
o|contracted procedure: k4462 
o|contracted procedure: k4472 
o|contracted procedure: k4478 
o|contracted procedure: k4499 
o|contracted procedure: k4507 
o|contracted procedure: k4525 
o|contracted procedure: k4530 
o|contracted procedure: k4545 
o|contracted procedure: k4573 
o|contracted procedure: k4570 
o|contracted procedure: k4550 
o|contracted procedure: k4558 
o|contracted procedure: k4567 
o|contracted procedure: k4581 
o|contracted procedure: k4590 
o|contracted procedure: k4596 
o|contracted procedure: k4593 
o|contracted procedure: k4599 
o|contracted procedure: k4608 
o|contracted procedure: k4602 
o|contracted procedure: k4611 
o|contracted procedure: k4613 
o|contracted procedure: k4626 
o|contracted procedure: k4635 
o|contracted procedure: k4638 
o|propagated global variable: g584586 ##compiler#used-units 
o|contracted procedure: k4666 
o|contracted procedure: k4675 
o|contracted procedure: k4678 
o|contracted procedure: k4680 
o|contracted procedure: k4691 
o|contracted procedure: k4700 
o|contracted procedure: k4703 
o|contracted procedure: k4732 
o|contracted procedure: k4740 
o|contracted procedure: k4744 
o|contracted procedure: k4767 
o|contracted procedure: k4778 
o|contracted procedure: k4801 
o|contracted procedure: k4811 
o|contracted procedure: k4816 
o|contracted procedure: k4860 
o|contracted procedure: k4869 
o|contracted procedure: k4872 
o|contracted procedure: k4874 
o|contracted procedure: k4882 
o|contracted procedure: k4888 
o|contracted procedure: k4913 
o|contracted procedure: k4921 
o|contracted procedure: k4930 
o|contracted procedure: k4933 
o|contracted procedure: k4977 
o|contracted procedure: k4992 
o|contracted procedure: k4995 
o|contracted procedure: k5020 
o|contracted procedure: k5027 
o|contracted procedure: k5034 
o|contracted procedure: k5045 
o|contracted procedure: k5054 
o|contracted procedure: k5057 
o|contracted procedure: k5065 
o|contracted procedure: k5074 
o|contracted procedure: k5077 
o|contracted procedure: k5085 
o|contracted procedure: k5094 
o|contracted procedure: k5097 
o|contracted procedure: k5166 
o|contracted procedure: k5168 
o|contracted procedure: k5180 
o|contracted procedure: k5201 
o|contracted procedure: k5210 
o|contracted procedure: k5215 
o|contracted procedure: k5248 
o|contracted procedure: k5254 
o|contracted procedure: k5260 
o|contracted procedure: k5266 
o|contracted procedure: k5285 
o|contracted procedure: k5292 
o|contracted procedure: k5309 
o|contracted procedure: k5312 
o|contracted procedure: k5321 
o|contracted procedure: k5331 
o|contracted procedure: k5343 
o|contracted procedure: k5365 
o|contracted procedure: k5370 
o|contracted procedure: k5373 
o|contracted procedure: k5379 
o|contracted procedure: k5387 
o|contracted procedure: k5394 
o|contracted procedure: k5397 
o|contracted procedure: k5403 
o|contracted procedure: k5523 
o|contracted procedure: k5428 
o|propagated global variable: a5522 ##sys#undefined-value 
o|contracted procedure: k5437 
o|contracted procedure: k5449 
o|contracted procedure: k5456 
o|contracted procedure: k5461 
o|contracted procedure: k5464 
o|contracted procedure: k5468 
o|contracted procedure: k5478 
o|contracted procedure: k5516 
o|contracted procedure: k5484 
o|contracted procedure: k5492 
o|contracted procedure: k5514 
o|contracted procedure: k5525 
o|contracted procedure: k5538 
o|contracted procedure: k5540 
o|contracted procedure: k5553 
o|contracted procedure: k5559 
o|contracted procedure: k5584 
o|contracted procedure: k5587 
o|contracted procedure: k5596 
o|contracted procedure: k5602 
o|contracted procedure: k5684 
o|contracted procedure: k5747 
o|contracted procedure: k5787 
o|contracted procedure: k5794 
o|contracted procedure: k5802 
o|contracted procedure: k5811 
o|contracted procedure: k5814 
o|contracted procedure: k5822 
o|contracted procedure: k5833 
o|contracted procedure: k5845 
o|contracted procedure: k5862 
o|contracted procedure: k5865 
o|contracted procedure: k5886 
o|contracted procedure: k5907 
o|contracted procedure: k5984 
o|contracted procedure: k5990 
o|contracted procedure: k5997 
o|contracted procedure: k6017 
o|contracted procedure: k6047 
o|contracted procedure: k6053 
o|contracted procedure: k6077 
o|contracted procedure: k6138 
o|contracted procedure: k5615 
o|contracted procedure: k5621 
o|contracted procedure: k5627 
o|contracted procedure: k5633 
o|contracted procedure: k5639 
o|contracted procedure: k5645 
o|contracted procedure: k6140 
o|contracted procedure: k6151 
o|contracted procedure: k6160 
o|contracted procedure: k6163 
o|contracted procedure: k6174 
o|contracted procedure: k6183 
o|contracted procedure: k6186 
o|contracted procedure: k6189 
o|contracted procedure: k6194 
o|contracted procedure: k6209 
o|contracted procedure: k6219 
o|contracted procedure: k6224 
o|contracted procedure: k6268 
o|contracted procedure: k6274 
o|contracted procedure: k6313 
o|contracted procedure: k6340 
o|contracted procedure: k6359 
o|contracted procedure: k6368 
o|contracted procedure: k6379 
o|contracted procedure: k6385 
o|contracted procedure: k6393 
o|contracted procedure: k6395 
o|contracted procedure: k639310694 
o|contracted procedure: k6415 
o|contracted procedure: k6423 
o|contracted procedure: k6442 
o|contracted procedure: k6429 
o|contracted procedure: k6439 
o|contracted procedure: k6436 
o|contracted procedure: k6480 
o|contracted procedure: k6482 
o|contracted procedure: k6484 
o|contracted procedure: k6490 
o|contracted procedure: k6495 
o|contracted procedure: k6506 
o|contracted procedure: k6515 
o|contracted procedure: k6518 
o|contracted procedure: k6533 
o|contracted procedure: k6544 
o|contracted procedure: k6553 
o|contracted procedure: k6556 
o|contracted procedure: k6570 
o|contracted procedure: k6640 
o|contracted procedure: k6696 
o|contracted procedure: k6708 
o|contracted procedure: k6738 
o|contracted procedure: k6741 
o|contracted procedure: k6744 
o|contracted procedure: k6747 
o|contracted procedure: k6750 
o|contracted procedure: k6753 
o|contracted procedure: k6755 
o|contracted procedure: k6761 
o|contracted procedure: k6792 
o|contracted procedure: k6797 
o|contracted procedure: k6808 
o|contracted procedure: k6817 
o|contracted procedure: k6820 
o|contracted procedure: k6836 
o|contracted procedure: k6847 
o|contracted procedure: k6855 
o|contracted procedure: k6866 
o|contracted procedure: k6877 
o|contracted procedure: k6897 
o|contracted procedure: k6895 
o|contracted procedure: k6909 
o|contracted procedure: k6916 
o|contracted procedure: k6927 
o|contracted procedure: k6934 
o|contracted procedure: k6938 
o|contracted procedure: k6943 
o|contracted procedure: k6948 
o|contracted procedure: k6953 
o|contracted procedure: k6958 
o|contracted procedure: k6963 
o|contracted procedure: k6968 
o|contracted procedure: k6994 
o|contracted procedure: k7000 
o|contracted procedure: k7005 
o|contracted procedure: k7010 
o|contracted procedure: k7028 
o|contracted procedure: k7033 
o|contracted procedure: k7038 
o|contracted procedure: k7056 
o|contracted procedure: k7061 
o|contracted procedure: k7066 
o|contracted procedure: k7071 
o|contracted procedure: k7076 
o|contracted procedure: k7081 
o|contracted procedure: k7086 
o|contracted procedure: k7091 
o|contracted procedure: k7096 
o|contracted procedure: k7101 
o|contracted procedure: k7106 
o|contracted procedure: k7111 
o|contracted procedure: k7116 
o|contracted procedure: k7121 
o|contracted procedure: k7161 
o|contracted procedure: k7166 
o|contracted procedure: k7171 
o|contracted procedure: k7176 
o|contracted procedure: k7181 
o|contracted procedure: k7186 
o|contracted procedure: k7191 
o|contracted procedure: k7196 
o|contracted procedure: k7201 
o|contracted procedure: k7206 
o|contracted procedure: k7211 
o|contracted procedure: k7276 
o|contracted procedure: k7282 
o|contracted procedure: k7317 
o|contracted procedure: k7297 
o|contracted procedure: k7306 
o|contracted procedure: k7309 
o|contracted procedure: k7312 
o|contracted procedure: k7315 
o|contracted procedure: k7326 
o|contracted procedure: k7335 
o|contracted procedure: k7346 
o|contracted procedure: k7355 
o|contracted procedure: k7358 
o|contracted procedure: k7372 
o|contracted procedure: k7391 
o|contracted procedure: k7403 
o|contracted procedure: k7406 
o|contracted procedure: k7426 
o|contracted procedure: k7435 
o|contracted procedure: k7437 
o|contracted procedure: k7446 
o|contracted procedure: k7448 
o|contracted procedure: k7457 
o|contracted procedure: k7459 
o|contracted procedure: k7468 
o|contracted procedure: k7470 
o|contracted procedure: k7479 
o|contracted procedure: k7490 
o|contracted procedure: k7499 
o|contracted procedure: k7501 
o|contracted procedure: k7510 
o|contracted procedure: k7519 
o|contracted procedure: k7528 
o|contracted procedure: k7537 
o|contracted procedure: k7546 
o|contracted procedure: k7555 
o|contracted procedure: k7564 
o|contracted procedure: k7573 
o|contracted procedure: k7575 
o|contracted procedure: k7584 
o|contracted procedure: k7595 
o|contracted procedure: k7597 
o|contracted procedure: k7603 
o|contracted procedure: k7614 
o|contracted procedure: k7616 
o|contracted procedure: k7625 
o|contracted procedure: k7627 
o|contracted procedure: k7636 
o|contracted procedure: k7638 
o|contracted procedure: k7647 
o|contracted procedure: k7649 
o|contracted procedure: k7658 
o|contracted procedure: k7660 
o|contracted procedure: k7669 
o|contracted procedure: k7671 
o|contracted procedure: k7680 
o|contracted procedure: k7682 
o|contracted procedure: k7691 
o|contracted procedure: k7693 
o|contracted procedure: k7702 
o|contracted procedure: k7713 
o|contracted procedure: k7724 
o|contracted procedure: k7742 
o|contracted procedure: k7740 
o|contracted procedure: k7754 
o|contracted procedure: k7763 
o|contracted procedure: k7777 
o|contracted procedure: k7792 
o|contracted procedure: k7821 
o|contracted procedure: k7823 
o|contracted procedure: k7834 
o|contracted procedure: k7837 
o|contracted procedure: k7846 
o|contracted procedure: k7856 
o|contracted procedure: k7859 
o|contracted procedure: k7874 
o|contracted procedure: k7889 
o|contracted procedure: k7904 
o|contracted procedure: k7919 
o|contracted procedure: k7934 
o|contracted procedure: k7949 
o|contracted procedure: k7957 
o|contracted procedure: k7959 
o|contracted procedure: k8022 
o|contracted procedure: k7964 
o|contracted procedure: k7981 
o|contracted procedure: k7987 
o|contracted procedure: k7998 
o|contracted procedure: k8001 
o|contracted procedure: k8010 
o|contracted procedure: k8020 
o|contracted procedure: k8031 
o|contracted procedure: k8038 
o|contracted procedure: k8042 
o|contracted procedure: k8049 
o|contracted procedure: k8053 
o|contracted procedure: k8057 
o|contracted procedure: k8062 
o|contracted procedure: k8069 
o|contracted procedure: k8073 
o|contracted procedure: k8080 
o|contracted procedure: k8084 
o|contracted procedure: k8091 
o|contracted procedure: k8095 
o|contracted procedure: k8102 
o|contracted procedure: k8106 
o|contracted procedure: k8113 
o|contracted procedure: k8117 
o|contracted procedure: k8124 
o|contracted procedure: k8128 
o|contracted procedure: k8132 
o|contracted procedure: k8140 
o|contracted procedure: k8148 
o|contracted procedure: k8153 
o|contracted procedure: k8169 
o|contracted procedure: k8174 
o|contracted procedure: k8179 
o|contracted procedure: k8253 
o|contracted procedure: k8258 
o|contracted procedure: k8281 
o|contracted procedure: k8286 
o|contracted procedure: k8332 
o|contracted procedure: k8387 
o|contracted procedure: k8393 
o|contracted procedure: k8395 
o|contracted procedure: k8401 
o|contracted procedure: k8409 
o|contracted procedure: k8415 
o|contracted procedure: k8421 
o|contracted procedure: k8427 
o|contracted procedure: k8435 
o|contracted procedure: k8437 
o|contracted procedure: k8443 
o|contracted procedure: k8449 
o|contracted procedure: k8455 
o|contracted procedure: k8461 
o|contracted procedure: k8467 
o|contracted procedure: k8469 
o|contracted procedure: k8475 
o|contracted procedure: k8481 
o|contracted procedure: k8487 
o|contracted procedure: k8493 
o|contracted procedure: k8499 
o|contracted procedure: k8505 
o|contracted procedure: k8511 
o|contracted procedure: k8517 
o|contracted procedure: k8523 
o|contracted procedure: k8529 
o|contracted procedure: k8535 
o|contracted procedure: k8541 
o|contracted procedure: k8547 
o|contracted procedure: k8553 
o|contracted procedure: k8559 
o|contracted procedure: k8565 
o|contracted procedure: k8571 
o|contracted procedure: k8577 
o|contracted procedure: k8583 
o|contracted procedure: k8589 
o|contracted procedure: k8595 
o|contracted procedure: k8601 
o|contracted procedure: k8607 
o|contracted procedure: k8613 
o|contracted procedure: k8619 
o|contracted procedure: k8627 
o|contracted procedure: k8635 
o|contracted procedure: k8650 
o|contracted procedure: k8648 
o|contracted procedure: k8665 
o|contracted procedure: k8670 
o|contracted procedure: k8676 
o|contracted procedure: k8682 
o|contracted procedure: k8688 
o|contracted procedure: k8694 
o|contracted procedure: k8700 
o|contracted procedure: k8707 
o|contracted procedure: k8712 
o|contracted procedure: k8718 
o|contracted procedure: k8728 
o|contracted procedure: k8733 
o|contracted procedure: k8740 
o|contracted procedure: k8766 
o|contracted procedure: k8775 
o|contracted procedure: k8783 
o|contracted procedure: k8788 
o|contracted procedure: k8793 
o|contracted procedure: k8811 
o|contracted procedure: k8816 
o|contracted procedure: k8902 
o|contracted procedure: k8922 
o|contracted procedure: k8927 
o|contracted procedure: k8932 
o|contracted procedure: k8937 
o|contracted procedure: k8977 
o|contracted procedure: k8979 
o|contracted procedure: k8985 
o|contracted procedure: k8987 
o|contracted procedure: k8993 
o|contracted procedure: k8995 
o|contracted procedure: k9001 
o|contracted procedure: k9007 
o|contracted procedure: k9013 
o|contracted procedure: k9019 
o|contracted procedure: k9025 
o|contracted procedure: k9027 
o|contracted procedure: k9045 
o|contracted procedure: k9063 
o|contracted procedure: k9083 
o|contracted procedure: k9101 
o|contracted procedure: k9103 
o|contracted procedure: k9121 
o|contracted procedure: k9123 
o|contracted procedure: k9141 
o|contracted procedure: k9159 
o|contracted procedure: k9161 
o|contracted procedure: k9179 
o|contracted procedure: k9197 
o|contracted procedure: k9215 
o|contracted procedure: k9221 
o|contracted procedure: k9223 
o|contracted procedure: k9238 
o|contracted procedure: k9236 
o|contracted procedure: k9253 
o|contracted procedure: k9258 
o|contracted procedure: k9278 
o|contracted procedure: k9296 
o|contracted procedure: k9314 
o|contracted procedure: k9332 
o|contracted procedure: k9350 
o|contracted procedure: k9357 
o|contracted procedure: k9362 
o|contracted procedure: k9382 
o|contracted procedure: k9400 
o|contracted procedure: k9449 
o|contracted procedure: k9458 
o|contracted procedure: k9502 
o|contracted procedure: k9507 
o|contracted procedure: k9512 
o|contracted procedure: k9517 
o|contracted procedure: k9522 
o|contracted procedure: k9527 
o|contracted procedure: k9532 
o|contracted procedure: k9537 
o|contracted procedure: k9542 
o|contracted procedure: k9547 
o|contracted procedure: k9657 
o|contracted procedure: k9654 
o|contracted procedure: k9636 
o|contracted procedure: k9651 
o|contracted procedure: k9648 
o|contracted procedure: k9639 
o|contracted procedure: k9645 
o|contracted procedure: k9642 
o|contracted procedure: k9666 
o|contracted procedure: k9674 
o|contracted procedure: k9680 
o|contracted procedure: k9686 
o|contracted procedure: k9697 
o|contracted procedure: k9702 
o|contracted procedure: k9708 
o|contracted procedure: k9873 
o|contracted procedure: k9714 
o|propagated global variable: a9872 ##sys#undefined-value 
o|contracted procedure: k9720 
o|contracted procedure: k9767 
o|contracted procedure: k9764 
o|contracted procedure: k9737 
o|contracted procedure: k9761 
o|contracted procedure: k9758 
o|contracted procedure: k9740 
o|contracted procedure: k9755 
o|contracted procedure: k9752 
o|contracted procedure: k9743 
o|contracted procedure: k9746 
o|contracted procedure: k9734 
o|contracted procedure: k9782 
o|contracted procedure: k9794 
o|contracted procedure: k9797 
o|contracted procedure: k9806 
o|contracted procedure: k9811 
o|contracted procedure: k9836 
o|contracted procedure: k9827 
o|contracted procedure: k9867 
o|contracted procedure: k9850 
o|contracted procedure: k9864 
o|simplifications: ((let . 91)) 
o|removed binding forms: 750 
o|inlining procedure: k4455 
o|inlining procedure: k4455 
o|inlining procedure: k5314 
o|inlining procedure: k5314 
o|inlining procedure: k6387 
o|inlining procedure: k6387 
o|inlining procedure: k6387 
o|inlining procedure: k7839 
o|inlining procedure: k7839 
o|inlining procedure: k8003 
o|inlining procedure: k8003 
o|inlining procedure: k9672 
o|inlining procedure: k9672 
o|inlining procedure: k9672 
o|inlining procedure: k9672 
o|inlining procedure: k9672 
o|replaced variables: 71 
o|substituted constant variable: a967111217 
o|substituted constant variable: a967111220 
o|substituted constant variable: a967111223 
o|substituted constant variable: a967111226 
o|substituted constant variable: a967111229 
o|simplifications: ((if . 10)) 
o|removed binding forms: 79 
o|contracted procedure: k9260 
o|contracted procedure: k9364 
o|removed binding forms: 7 
o|direct leaf routine/allocation: encode-size2162 24 
o|contracted procedure: "(c-backend.scm:1391) k9694" 
o|contracted procedure: "(c-backend.scm:1410) k9803" 
o|contracted procedure: "(c-backend.scm:1418) k9830" 
o|contracted procedure: "(c-backend.scm:1425) k9853" 
o|removed binding forms: 4 
o|customizable procedures: (k9065 k9250 k8403 k8429 k8621 k8629 k8662 k7481 k7586 k7605 k7704 k7715 k7770 k7785 k7800 k7864 k7879 k7894 k7909 k7924 k7939 k7954 map-loop17021720 map-loop16541679 for-each-loop13121516 for-each-loop14841498 k6849 k6857 k6868 k6879 k6918 for-each-loop12041302 k6729 for-each-loop12321263 for-each-loop11811194 for-each-loop11571171 k6397 loop1128 header91 declarations93 prototypes94 trampolines95 procedures103 k5682 k6201 k5728 k6166 doloop965966 for-each-loop973984 k6099 k6041 k6009 k5966 literal-frame96 k5752 doloop10471048 expression90 doloop913914 k5561 string-like-substring101 k5414 k5494 gen-string-constant100 loop883 map-loop858875 literal-size98 gen-lit99 doloop830831 k5110 k5112 k5151 for-each-loop770786 for-each-loop793803 emitter719 for-each-loop810820 restore718 doloop721722 k4712 k4724 for-each-loop632643 k4793 for-each-loop678708 for-each-loop691701 for-each-loop577588 doloop599600 doloop604605 doloop593594 pad0501 map-loop511536 for-each-loop549560 doloop472473 for-each-loop376392 for-each-loop402416 k3295 find-lambda89 k3299 k3477 k3589 for-each-loop268284 for-each-loop294308 expr-args112 for-each-loop181197 loop143 expr111 for-each-loop4758 for-each-loop2738) 
o|calls to known targets: 790 
o|fast box initializations: 55 
o|dropping unused closure argument: f_4904 
o|dropping unused closure argument: f_4325 
o|dropping unused closure argument: f_5599 
o|dropping unused closure argument: f_9630 
*/
/* end of file */
