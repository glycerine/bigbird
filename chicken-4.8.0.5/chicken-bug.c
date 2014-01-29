/* Generated from chicken-bug.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken-bug.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-bug.c
   used units: library eval srfi_2d13 posix tcp data_2dstructures utils extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_tcp_toplevel)
C_externimport void C_ccall C_tcp_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[92];
static double C_possibly_force_alignment;


C_noret_decl(f_472)
static void C_ccall f_472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_470)
static void C_ccall f_470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_477)
static void C_ccall f_477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_479)
static void C_ccall f_479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_434)
static void C_ccall f_434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_432)
static void C_ccall f_432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_481)
static void C_ccall f_481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_483)
static void C_ccall f_483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_485)
static void C_ccall f_485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_487)
static void C_ccall f_487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_489)
static void C_ccall f_489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_781)
static void C_ccall f_781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f958)
static void C_ccall f958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_449)
static void C_ccall f_449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_446)
static void C_ccall f_446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_444)
static void C_ccall f_444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_696)
static void C_ccall f_696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_493)
static void C_ccall f_493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_495)
static void C_ccall f_495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_498)
static void C_ccall f_498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_531)
static void C_fcall f_531(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_660)
static void C_ccall f_660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_666)
static void C_ccall f_666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_669)
static void C_ccall f_669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_456)
static void C_ccall f_456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_672)
static void C_ccall f_672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_675)
static void C_ccall f_675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_678)
static void C_ccall f_678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_815)
static void C_ccall f_815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_811)
static void C_fcall f_811(C_word t0,C_word t1) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_714)
static void C_ccall f_714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_710)
static void C_fcall f_710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_867)
static void C_fcall f_867(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_865)
static void C_ccall f_865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_604)
static void C_ccall f_604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_606)
static void C_fcall f_606(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_742)
static void C_ccall f_742(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_575)
static void C_ccall f_575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_635)
static void C_fcall f_635(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f965)
static void C_ccall f965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_504)
static void C_ccall f_504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_505)
static void C_ccall f_505(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_508)
static void C_ccall f_508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_500)
static void C_ccall f_500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_462)
static void C_ccall f_462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_590)
static void C_ccall f_590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_466)
static void C_ccall f_466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_595)
static void C_ccall f_595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_464)
static void C_ccall f_464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_468)
static void C_ccall f_468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_556)
static void C_ccall f_556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_558)
static void C_ccall f_558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_551)
static void C_ccall f_551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_562)
static void C_ccall f_562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_560)
static void C_ccall f_560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_568)
static void C_ccall f_568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_581)
static void C_ccall f_581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_540)
static void C_ccall f_540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_531)
static void C_fcall trf_531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_531(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_531(t0,t1,t2);}

C_noret_decl(trf_811)
static void C_fcall trf_811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_811(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_811(t0,t1);}

C_noret_decl(trf_710)
static void C_fcall trf_710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_710(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_710(t0,t1,t2);}

C_noret_decl(trf_867)
static void C_fcall trf_867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_867(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_867(t0,t1,t2);}

C_noret_decl(trf_606)
static void C_fcall trf_606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_606(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_606(t0,t1,t2);}

C_noret_decl(trf_635)
static void C_fcall trf_635(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_635(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_635(t0,t1,t2);}

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

/* k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_681,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:47: machine-type */
t4=C_fast_retrieve(lf[48]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:46: print */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[49]);}

/* k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_481,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_678,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:48: software-type */
t4=C_fast_retrieve(lf[46]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k776 */
static void C_ccall f_778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k437 in k435 in k433 in k431 */
static void C_ccall f_438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_440,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k435 in k433 in k431 */
static void C_ccall f_436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k433 in k431 */
static void C_ccall f_434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_436,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k431 */
static void C_ccall f_432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k904 in k900 in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k900 in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_906,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[90]))(2,*((C_word*)lf[90]+1),t3);}

/* k902 in k900 in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k680 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:47: print */
t2=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[47],t1);}

/* k686 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:44: print */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[51],t1,lf[52]);}

/* k683 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:45: write */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_481,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_675,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:49: software-version */
t4=C_fast_retrieve(lf[44]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_672,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:50: build-platform */
t4=C_fast_retrieve(lf[42]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_487,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_669,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:51: chicken-version */
t4=C_fast_retrieve(lf[39]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 in ... */
static void C_ccall f_487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_666,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:52: chicken-home */
t4=C_fast_retrieve(lf[36]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in ... */
static void C_ccall f_489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_489,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_491,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: display */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[33],*((C_word*)lf[4]+1));}

/* k780 */
static void C_ccall f_781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:121: string-append */
t2=*((C_word*)lf[73]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],lf[74],t1);}

/* f958 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:39: user-information */
t2=C_fast_retrieve(lf[1]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* user-id in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_456,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
t3=C_fast_retrieve(lf[2]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_446(C_word c,C_word t0,C_word t1){
C_word tmp;
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_446,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! user-id ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_449,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! collect-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_458,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[57]+1 /* (set! usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_692,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[60]+1 /* (set! user-input ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_701,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[67]+1 /* (set! justify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_742,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[70]+1 /* (set! main ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_764,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[81]+1 /* (set! generate-report ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_887,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_909,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:157: command-line-arguments */
t11=C_fast_retrieve(lf[91]);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_444,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_446,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k908 in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:157: main */
t2=*((C_word*)lf[70]+1);
f_764(3,t2,((C_word*)t0)[2],t1);}

/* k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* usage in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_692(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_692,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_696,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:76: print */
t4=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[59]);}

/* k689 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:44: seconds->string */
t2=C_fast_retrieve(lf[53]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k695 in usage in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:88: exit */
t2=C_fast_retrieve(lf[58]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in ... */
static void C_ccall f_491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:53: write */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fast_retrieve(lf[32]),((C_word*)t0)[3]);}

/* k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in ... */
static void C_ccall f_493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in ... */
static void C_ccall f_495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[30]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in ... */
static void C_ccall f_498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:54: print */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[29]);}

/* for-each-loop95 in k503 */
static void C_fcall f_531(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_531,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_540,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:58: g96 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k659 in map-loop123 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in ... */
static void C_ccall f_660(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_660,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_635(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_635(t6,((C_word*)t0)[5],t5);}}

/* k665 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in ... */
static void C_ccall f_666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:52: print */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[34],t1,lf[35]);}

/* k668 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 in ... */
static void C_ccall f_669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:51: print */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[37],t1,lf[38]);}

/* k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_809,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=t2;
f_811(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_862,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_865,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:135: user-input */
t5=*((C_word*)lf[60]+1);
f_701(2,t5,t4);}}

/* k455 in user-id in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:39: user-information */
t2=C_fast_retrieve(lf[1]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_462,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:42: print */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[56]);}

/* k799 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k803 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:129: string-append */
t2=*((C_word*)lf[73]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],lf[79],((C_word*)t0)[4],lf[80],t1);}

/* k671 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:50: print */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[40],t1,lf[41]);}

/* k674 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:49: print */
t2=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[43],t1);}

/* k677 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:48: print */
t2=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[45],t1);}

/* k814 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_815(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_815,2,t0,t1);}
t2=C_i_vector_ref(t1,C_fix(3));
t3=C_i_vector_ref(t1,C_fix(4));
t4=C_i_vector_ref(t1,C_fix(5));
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_826,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:143: print */
t6=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[4])[1]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_plus(&a,2,C_fix(1900),t4);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_852,a[2]=t5,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t8=*((C_word*)lf[67]+1);
f_742(3,t8,t7,t3);}}

/* k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_858,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:137: current-seconds */
t4=C_fast_retrieve(lf[54]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_fcall f_811(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_811,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:136: newline */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k825 in k814 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:144: collect-info */
t2=*((C_word*)lf[3]+1);
f_458(2,t2,((C_word*)t0)[2]);}

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
if(!C_demand_2(520)){
C_save(t1);
C_rereclaim2(520*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,92);
lf[0]=C_h_intern(&lf[0],7,"user-id");
lf[1]=C_h_intern(&lf[1],16,"user-information");
lf[2]=C_h_intern(&lf[2],15,"current-user-id");
lf[3]=C_h_intern(&lf[3],12,"collect-info");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],7,"display");
lf[6]=C_h_intern(&lf[6],15,"\003sysmake-string");
lf[7]=C_h_intern(&lf[7],8,"for-each");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\003\012  ");
lf[9]=C_h_intern(&lf[9],7,"newline");
lf[10]=C_h_intern(&lf[10],8,"read-all");
lf[11]=C_h_intern(&lf[11],20,"with-input-from-pipe");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\000\013gcc -v 2>&1");
lf[13]=C_h_intern(&lf[13],5,"print");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\0000CC seems to be gcc, trying to obtain version...\012");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\003gcc");
lf[16]=C_h_intern(&lf[16],8,"feature\077");
lf[17]=C_h_intern(&lf[17],4,"unix");
lf[18]=C_h_intern(&lf[18],17,"\003syspeek-c-string");
lf[19]=C_h_intern(&lf[19],20,"with-input-from-file");
lf[20]=C_h_intern(&lf[20],13,"make-pathname");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\020chicken-config.h");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\024\012\012chicken-config.h:\012");
lf[23]=C_h_intern(&lf[23],4,"chop");
lf[24]=C_h_intern(&lf[24],15,"keyword->string");
lf[25]=C_h_intern(&lf[25],12,"\003sysfeatures");
lf[26]=C_h_intern(&lf[26],3,"map");
lf[27]=C_h_intern(&lf[27],4,"sort");
lf[28]=C_h_intern(&lf[28],8,"string<\077");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000\011Features:");
lf[30]=C_h_intern(&lf[30],19,"\003syswrite-char/port");
lf[31]=C_h_intern(&lf[31],5,"write");
lf[32]=C_h_intern(&lf[32],21,"\003sysinclude-pathnames");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\016Include path:\011");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\020Home directory:\011");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[36]=C_h_intern(&lf[36],12,"chicken-home");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN version is:\012");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[39]=C_h_intern(&lf[39],15,"chicken-version");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\021\011build platform:\011");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[42]=C_h_intern(&lf[42],14,"build-platform");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\023\011software version:\011");
lf[44]=C_h_intern(&lf[44],16,"software-version");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\020\011software type:\011");
lf[46]=C_h_intern(&lf[46],13,"software-type");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\017\011machine type:\011");
lf[48]=C_h_intern(&lf[48],12,"machine-type");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\022Host information:\012");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\022User information:\011");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\006Date:\011");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[53]=C_h_intern(&lf[53],15,"seconds->string");
lf[54]=C_h_intern(&lf[54],15,"current-seconds");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\0002This is a bug report generated by chicken-bug(1).\012");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\0004\012--------------------------------------------------\012");
lf[57]=C_h_intern(&lf[57],5,"usage");
lf[58]=C_h_intern(&lf[58],4,"exit");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\0017usage: chicken-bug [FILENAME ...]\012\012  -help  -h            show this message"
"\012  -to-stdout           write bug report to standard output\012  -                 "
"   read description from standard input\012\012Generates a bug report file from user i"
"nput or alternatively\012from the contents of files given on the command line.\012");
lf[60]=C_h_intern(&lf[60],10,"user-input");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[62]=C_h_intern(&lf[62],26,"string-concatenate-reverse");
lf[63]=C_h_intern(&lf[63],9,"read-line");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\001jThis is the CHICKEN bug report generator. Please enter a detailed\012descripti"
"on of the problem you have encountered and enter CTRL-D (EOF)\012or a line consisti"
"ng only of \042.\042 to finish. Press CTRL-C to abort the program. You can\012also pass t"
"he description from a file (just abort now and re-invoke\012\042chicken-bug\042 with one "
"or more input files given on the command-line)\012");
lf[65]=C_h_intern(&lf[65],13,"\003systty-port\077");
lf[66]=C_h_intern(&lf[66],18,"\003sysstandard-input");
lf[67]=C_h_intern(&lf[67],7,"justify");
lf[68]=C_h_intern(&lf[68],17,"\003sysstring-append");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[70]=C_h_intern(&lf[70],4,"main");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[73]=C_h_intern(&lf[73],13,"string-append");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\017\012\012User input:\012\012");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\012-to-stdout");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\016\012\012File added: ");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[81]=C_h_intern(&lf[81],15,"generate-report");
lf[82]=C_h_intern(&lf[82],21,"with-output-to-string");
lf[83]=C_h_intern(&lf[83],7,"sprintf");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\033chicken-bug-report.~a-~a-~a");
lf[85]=C_h_intern(&lf[85],19,"seconds->local-time");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000#\012A bug report has been written to `");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\002\047.");
lf[89]=C_h_intern(&lf[89],19,"with-output-to-file");
lf[90]=C_h_intern(&lf[90],25,"\003sysimplicit-exit-handler");
lf[91]=C_h_intern(&lf[91],22,"command-line-arguments");
C_register_lf2(lf,92,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_432,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k834 in k814 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_838,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_840,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:147: with-output-to-string */
t4=C_fast_retrieve(lf[82]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k837 in k834 in k814 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:145: generate-report */
t2=*((C_word*)lf[81]+1);
f_887(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k842 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:150: collect-info */
t2=*((C_word*)lf[3]+1);
f_458(2,t2,((C_word*)t0)[2]);}

/* k713 in loop in k704 in user-input in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_714,2,t0,t1);}
t2=C_eofp(t1);
t3=(C_truep(t2)?t2:C_i_string_equal_p(lf[61],t1));
if(C_truep(t3)){
/* chicken-bug.scm:104: string-concatenate-reverse */
t4=C_fast_retrieve(lf[62]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* chicken-bug.scm:105: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_710(t5,((C_word*)t0)[2],t4);}}

/* f_840 in k834 in k814 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:149: print */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in k704 in user-input in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_fcall f_710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_710,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_714,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:102: read-line */
t4=C_fast_retrieve(lf[63]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k851 in k814 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:146: justify */
t3=*((C_word*)lf[67]+1);
f_742(3,t3,t2,((C_word*)t0)[4]);}

/* k857 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:137: seconds->local-time */
t2=C_fast_retrieve(lf[85]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k854 in k851 in k814 in k812 in k810 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:146: sprintf */
t2=*((C_word*)lf[83]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[84],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k860 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_811(t3,t2);}

/* k735 in user-input in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken-bug.scm:92: print */
t2=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[64]);}
else{
t2=((C_word*)t0)[2];
f_705(2,t2,C_SCHEME_UNDEFINED);}}

/* for-each-loop197 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_fcall f_867(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_867,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_876,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:113: g198 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k864 in k807 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:135: string-append */
t2=*((C_word*)lf[73]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],lf[86],t1);}

/* k603 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in ... */
static void C_ccall f_604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:64: make-pathname */
t2=C_fast_retrieve(lf[20]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[21]);}

/* for-each-loop82 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in ... */
static void C_fcall f_606(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_606,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_615,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:55: g83 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k600 */
static void C_ccall f_601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:66: display */
t2=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k745 in justify in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=t1;
t3=C_block_size(t2);
if(C_truep(C_fixnum_greaterp(t3,C_fix(1)))){
t4=t1;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[68]))(4,*((C_word*)lf[68]+1),((C_word*)t0)[2],lf[69],t4);}}

/* justify in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_742(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_742,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:108: number->string */
C_number_to_string(3,0,t3,t2);}

/* k875 in for-each-loop197 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_867(t3,((C_word*)t0)[4],t2);}

/* k614 in for-each-loop82 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in ... */
static void C_ccall f_615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_606(t3,((C_word*)t0)[4],t2);}

/* generate-report in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_887,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_891,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_896,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:153: with-output-to-file */
t6=C_fast_retrieve(lf[89]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t2,t5);}

/* k569 in k566 in k559 in k557 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in ... */
static void C_ccall f_570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_575,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:70: with-input-from-pipe */
t3=C_fast_retrieve(lf[11]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[12],t2);}

/* f_575 in k569 in k566 in k559 in k557 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in ... */
static void C_ccall f_575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_581,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:72: read-all */
t3=C_fast_retrieve(lf[10]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k626 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in ... */
static void C_ccall f_627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:62: chop */
t2=C_fast_retrieve(lf[23]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(5));}

/* k890 in generate-report in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:155: print */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[87],((C_word*)t0)[3],lf[88]);}

/* f_896 in generate-report in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
/* chicken-bug.scm:154: print */
t2=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* map-loop123 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in ... */
static void C_fcall f_635(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_635,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_660,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-bug.scm:62: g129 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k631 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in ... */
static void C_ccall f_633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:62: sort */
t2=C_fast_retrieve(lf[27]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[28]+1));}

/* k513 in k507 */
static void C_ccall f_514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:59: display */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f965 */
static void C_ccall f965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:88: exit */
t2=C_fast_retrieve(lf[58]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k503 */
static void C_ccall f_504(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_505,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[7]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_531,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_531(t8,((C_word*)t0)[3],t3);}

/* f_505 in k503 */
static void C_ccall f_505(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_505,3,t0,t1,t2);}
t3=*((C_word*)lf[4]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_508,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:59: display */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,*((C_word*)lf[4]+1));}

/* k507 */
static void C_ccall f_508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_string_length(((C_word*)t0)[4]);
t4=C_fixnum_difference(C_fix(16),t3);
t5=C_i_fixnum_max(C_fix(1),t4);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,t5,C_make_character(32));}

/* k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in k443 in ... */
static void C_ccall f_500(C_word c,C_word t0,C_word t1){
C_word tmp;
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_501,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_551,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_627,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fast_retrieve(lf[24]);
t10=C_fast_retrieve(lf[25]);
t11=C_i_check_list_2(C_fast_retrieve(lf[25]),lf[26]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_633,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_635,a[2]=t8,a[3]=t14,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_635(t16,t12,C_fast_retrieve(lf[25]));}

/* f_501 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in ... */
static void C_ccall f_501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_501,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_504,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:57: display */
t4=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[8]);}

/* k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_464,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:43: print */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[55]);}

/* k589 in k559 in k557 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in ... */
static void C_ccall f_590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_string_equal_p(t1,lf[15]))){
/* chicken-bug.scm:68: feature? */
t2=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[17]);}
else{
t2=((C_word*)t0)[2];
f_568(2,t2,C_SCHEME_FALSE);}}

/* k592 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in ... */
static void C_ccall f_593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_595,tmp=(C_word)a,a+=2,tmp);
/* chicken-bug.scm:64: with-input-from-file */
t3=C_fast_retrieve(lf[19]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_466,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_468,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:45: display */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[50],*((C_word*)lf[4]+1));}

/* f_595 in k592 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in ... */
static void C_ccall f_595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_601,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:66: read-all */
t3=C_fast_retrieve(lf[10]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_466,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_690,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:44: current-seconds */
t5=C_fast_retrieve(lf[54]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k467 in k465 in k463 in k461 in collect-info in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_684,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f958,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:39: current-user-id */
t5=C_fast_retrieve(lf[2]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in ... */
static void C_ccall f_556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_558,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_604,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}

/* k557 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in ... */
static void C_ccall f_558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_558,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:67: newline */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in k445 in ... */
static void C_ccall f_551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_606,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_606(t6,t2,t1);}

/* k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in k463 in k461 in collect-info in ... */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:63: print */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[22]);}

/* k561 in k559 in k557 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in ... */
static void C_ccall f_562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:73: newline */
t2=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k559 in k557 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in k465 in ... */
static void C_ccall f_560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_568,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_590,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}

/* k566 in k559 in k557 in k555 in k552 in k550 in k499 in k496 in k494 in k492 in k490 in k488 in k486 in k484 in k482 in k480 in k478 in k476 in k473 in k471 in k469 in k467 in ... */
static void C_ccall f_568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_568,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_570,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:69: print */
t3=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[14]);}
else{
/* chicken-bug.scm:73: newline */
t2=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k704 in user-input in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_705,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_710,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_710(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* user-input in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_705,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_737,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:91: ##sys#tty-port? */
((C_proc3)C_fast_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t3,*((C_word*)lf[66]+1));}

/* k580 */
static void C_ccall f_581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-bug.scm:72: display */
t2=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k539 in for-each-loop95 in k503 */
static void C_ccall f_540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_531(t3,((C_word*)t0)[4],t2);}

/* main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_764(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[23],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_764,3,t0,t1,t2);}
t3=lf[71];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_767,a[2]=t6,a[3]=t4,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_i_check_list_2(t2,lf[7]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_809,a[2]=t8,a[3]=t1,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_867,a[2]=t13,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t15=((C_word*)t13)[1];
f_867(t15,t11,t2);}

/* f_767 in main in k445 in k443 in k441 in k439 in k437 in k435 in k433 in k431 */
static void C_ccall f_767(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_767,3,t0,t1,t2);}
if(C_truep(C_i_string_equal_p(lf[72],t2))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_778,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_781,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-bug.scm:121: user-input */
t6=*((C_word*)lf[60]+1);
f_701(2,t6,t5);}
else{
t3=t2;
if(C_truep((C_truep(C_i_equalp(t3,lf[75]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[76]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[77]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t4=t1;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f965,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-bug.scm:76: print */
t6=*((C_word*)lf[13]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[59]);}
else{
t4=t2;
if(C_truep(C_u_i_string_equal_p(lf[78],t4))){
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_804,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-bug.scm:132: read-all */
t8=C_fast_retrieve(lf[10]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[109] = {
{"f_472:chicken_2dbug_2escm",(void*)f_472},
{"f_470:chicken_2dbug_2escm",(void*)f_470},
{"f_477:chicken_2dbug_2escm",(void*)f_477},
{"f_475:chicken_2dbug_2escm",(void*)f_475},
{"f_479:chicken_2dbug_2escm",(void*)f_479},
{"f_778:chicken_2dbug_2escm",(void*)f_778},
{"f_438:chicken_2dbug_2escm",(void*)f_438},
{"f_436:chicken_2dbug_2escm",(void*)f_436},
{"f_434:chicken_2dbug_2escm",(void*)f_434},
{"f_432:chicken_2dbug_2escm",(void*)f_432},
{"f_906:chicken_2dbug_2escm",(void*)f_906},
{"f_901:chicken_2dbug_2escm",(void*)f_901},
{"f_903:chicken_2dbug_2escm",(void*)f_903},
{"f_681:chicken_2dbug_2escm",(void*)f_681},
{"f_687:chicken_2dbug_2escm",(void*)f_687},
{"f_684:chicken_2dbug_2escm",(void*)f_684},
{"f_481:chicken_2dbug_2escm",(void*)f_481},
{"f_483:chicken_2dbug_2escm",(void*)f_483},
{"f_485:chicken_2dbug_2escm",(void*)f_485},
{"f_487:chicken_2dbug_2escm",(void*)f_487},
{"f_489:chicken_2dbug_2escm",(void*)f_489},
{"f_781:chicken_2dbug_2escm",(void*)f_781},
{"f958:chicken_2dbug_2escm",(void*)f958},
{"f_449:chicken_2dbug_2escm",(void*)f_449},
{"f_446:chicken_2dbug_2escm",(void*)f_446},
{"f_442:chicken_2dbug_2escm",(void*)f_442},
{"f_444:chicken_2dbug_2escm",(void*)f_444},
{"f_909:chicken_2dbug_2escm",(void*)f_909},
{"f_440:chicken_2dbug_2escm",(void*)f_440},
{"f_692:chicken_2dbug_2escm",(void*)f_692},
{"f_690:chicken_2dbug_2escm",(void*)f_690},
{"f_696:chicken_2dbug_2escm",(void*)f_696},
{"f_491:chicken_2dbug_2escm",(void*)f_491},
{"f_493:chicken_2dbug_2escm",(void*)f_493},
{"f_495:chicken_2dbug_2escm",(void*)f_495},
{"f_498:chicken_2dbug_2escm",(void*)f_498},
{"f_531:chicken_2dbug_2escm",(void*)f_531},
{"f_660:chicken_2dbug_2escm",(void*)f_660},
{"f_666:chicken_2dbug_2escm",(void*)f_666},
{"f_669:chicken_2dbug_2escm",(void*)f_669},
{"f_809:chicken_2dbug_2escm",(void*)f_809},
{"f_456:chicken_2dbug_2escm",(void*)f_456},
{"f_458:chicken_2dbug_2escm",(void*)f_458},
{"f_801:chicken_2dbug_2escm",(void*)f_801},
{"f_804:chicken_2dbug_2escm",(void*)f_804},
{"f_672:chicken_2dbug_2escm",(void*)f_672},
{"f_675:chicken_2dbug_2escm",(void*)f_675},
{"f_678:chicken_2dbug_2escm",(void*)f_678},
{"f_815:chicken_2dbug_2escm",(void*)f_815},
{"f_813:chicken_2dbug_2escm",(void*)f_813},
{"f_811:chicken_2dbug_2escm",(void*)f_811},
{"f_826:chicken_2dbug_2escm",(void*)f_826},
{"toplevel:chicken_2dbug_2escm",(void*)C_toplevel},
{"f_835:chicken_2dbug_2escm",(void*)f_835},
{"f_838:chicken_2dbug_2escm",(void*)f_838},
{"f_843:chicken_2dbug_2escm",(void*)f_843},
{"f_714:chicken_2dbug_2escm",(void*)f_714},
{"f_840:chicken_2dbug_2escm",(void*)f_840},
{"f_710:chicken_2dbug_2escm",(void*)f_710},
{"f_852:chicken_2dbug_2escm",(void*)f_852},
{"f_858:chicken_2dbug_2escm",(void*)f_858},
{"f_855:chicken_2dbug_2escm",(void*)f_855},
{"f_862:chicken_2dbug_2escm",(void*)f_862},
{"f_737:chicken_2dbug_2escm",(void*)f_737},
{"f_867:chicken_2dbug_2escm",(void*)f_867},
{"f_865:chicken_2dbug_2escm",(void*)f_865},
{"f_604:chicken_2dbug_2escm",(void*)f_604},
{"f_606:chicken_2dbug_2escm",(void*)f_606},
{"f_601:chicken_2dbug_2escm",(void*)f_601},
{"f_746:chicken_2dbug_2escm",(void*)f_746},
{"f_742:chicken_2dbug_2escm",(void*)f_742},
{"f_876:chicken_2dbug_2escm",(void*)f_876},
{"f_615:chicken_2dbug_2escm",(void*)f_615},
{"f_887:chicken_2dbug_2escm",(void*)f_887},
{"f_570:chicken_2dbug_2escm",(void*)f_570},
{"f_575:chicken_2dbug_2escm",(void*)f_575},
{"f_627:chicken_2dbug_2escm",(void*)f_627},
{"f_891:chicken_2dbug_2escm",(void*)f_891},
{"f_896:chicken_2dbug_2escm",(void*)f_896},
{"f_635:chicken_2dbug_2escm",(void*)f_635},
{"f_633:chicken_2dbug_2escm",(void*)f_633},
{"f_514:chicken_2dbug_2escm",(void*)f_514},
{"f965:chicken_2dbug_2escm",(void*)f965},
{"f_504:chicken_2dbug_2escm",(void*)f_504},
{"f_505:chicken_2dbug_2escm",(void*)f_505},
{"f_508:chicken_2dbug_2escm",(void*)f_508},
{"f_500:chicken_2dbug_2escm",(void*)f_500},
{"f_501:chicken_2dbug_2escm",(void*)f_501},
{"f_462:chicken_2dbug_2escm",(void*)f_462},
{"f_590:chicken_2dbug_2escm",(void*)f_590},
{"f_593:chicken_2dbug_2escm",(void*)f_593},
{"f_466:chicken_2dbug_2escm",(void*)f_466},
{"f_595:chicken_2dbug_2escm",(void*)f_595},
{"f_464:chicken_2dbug_2escm",(void*)f_464},
{"f_468:chicken_2dbug_2escm",(void*)f_468},
{"f_556:chicken_2dbug_2escm",(void*)f_556},
{"f_558:chicken_2dbug_2escm",(void*)f_558},
{"f_551:chicken_2dbug_2escm",(void*)f_551},
{"f_554:chicken_2dbug_2escm",(void*)f_554},
{"f_562:chicken_2dbug_2escm",(void*)f_562},
{"f_560:chicken_2dbug_2escm",(void*)f_560},
{"f_568:chicken_2dbug_2escm",(void*)f_568},
{"f_705:chicken_2dbug_2escm",(void*)f_705},
{"f_701:chicken_2dbug_2escm",(void*)f_701},
{"f_581:chicken_2dbug_2escm",(void*)f_581},
{"f_540:chicken_2dbug_2escm",(void*)f_540},
{"f_764:chicken_2dbug_2escm",(void*)f_764},
{"f_767:chicken_2dbug_2escm",(void*)f_767},
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
S|  map		1
S|  for-each		3
S|  printf		3
o|eliminated procedure checks: 11 
o|specializations:
o|  1 (string=? string string)
o|  1 (string-append string string)
o|  1 (> fixnum fixnum)
o|  1 (string-length string)
o|  1 (current-input-port)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (make-string fixnum char)
o|safe globals: (generate-report main justify user-input usage collect-info user-id constant50) 
o|substituted constant variable: a518 
o|propagated global variable: out109113 ##sys#standard-output 
o|inlining procedure: k534 
o|inlining procedure: k534 
o|inlining procedure: k561 
o|inlining procedure: k561 
o|inlining procedure: k609 
o|inlining procedure: k609 
o|inlining procedure: k638 
o|inlining procedure: k638 
o|propagated global variable: g135139 ##sys#features 
o|propagated global variable: out7276 ##sys#standard-output 
o|propagated global variable: out6165 ##sys#standard-output 
o|inlining procedure: k715 
o|inlining procedure: k715 
o|inlining procedure: k747 
o|inlining procedure: k747 
o|substituted constant variable: a756 
o|substituted constant variable: a761 
o|inlining procedure: k769 
o|inlining procedure: k769 
o|substituted constant variable: a794 
o|inlining procedure: k791 
o|inlining procedure: k791 
o|inlining procedure: k822 
o|inlining procedure: k822 
o|substituted constant variable: constant50 
o|inlining procedure: k870 
o|inlining procedure: k870 
o|replaced variables: 33 
o|removed binding forms: 22 
o|removed side-effect free assignment to unused variable: constant50 
o|replaced variables: 4 
o|removed binding forms: 43 
o|inlining procedure: "(chicken-bug.scm:45) user-id" 
o|inlining procedure: "(chicken-bug.scm:123) usage" 
o|removed binding forms: 5 
o|substituted constant variable: code173963 
o|replaced variables: 1 
o|removed binding forms: 2 
o|simplifications: ((if . 1) (##core#call . 37)) 
o|  call simplifications:
o|    vector-ref	3
o|    +
o|    member
o|    number->string
o|    ##sys#size
o|    fx>
o|    eof-object?
o|    write-char	4
o|    cons	2
o|    ##sys#setslot
o|    string=?	3
o|    ##sys#check-list	3
o|    pair?	4
o|    ##sys#slot	8
o|    string-length
o|    fx-
o|    fxmax
o|contracted procedure: k523 
o|contracted procedure: k520 
o|contracted procedure: k516 
o|contracted procedure: k525 
o|contracted procedure: k536 
o|contracted procedure: k545 
o|contracted procedure: k548 
o|contracted procedure: k582 
o|contracted procedure: k611 
o|contracted procedure: k620 
o|contracted procedure: k623 
o|contracted procedure: k629 
o|contracted procedure: k640 
o|contracted procedure: k643 
o|contracted procedure: k652 
o|contracted procedure: k662 
o|propagated global variable: g135139 ##sys#features 
o|contracted procedure: k718 
o|contracted procedure: k720 
o|contracted procedure: k730 
o|contracted procedure: k759 
o|contracted procedure: k750 
o|contracted procedure: k771 
o|contracted procedure: k785 
o|contracted procedure: k805 
o|contracted procedure: k816 
o|contracted procedure: k818 
o|contracted procedure: k820 
o|contracted procedure: k848 
o|contracted procedure: k872 
o|contracted procedure: k881 
o|contracted procedure: k884 
o|simplifications: ((if . 1) (let . 8)) 
o|removed binding forms: 31 
o|inlining procedure: k645 
o|inlining procedure: k645 
o|removed binding forms: 2 
o|customizable procedures: (for-each-loop197213 k810 loop176 map-loop123140 for-each-loop82147 for-each-loop95115) 
o|calls to known targets: 23 
o|fast box initializations: 5 
*/
/* end of file */
