/* Generated from setup-api.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: setup-api.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file setup-api.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[37];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,15),40,102,95,54,53,54,32,115,55,32,46,32,112,56,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,102,95,54,56,54,32,108,105,110,101,52,57,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,51,50,32,103,52,52,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,14),40,102,95,55,55,53,32,108,105,110,101,49,55,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,19),40,102,95,54,52,54,32,102,111,114,109,48,32,114,49,32,99,50,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,49,52,55,32,108,49,52,50,49,54,53,32,108,101,110,49,52,51,49,54,54,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,46),40,102,95,52,50,53,32,105,110,112,117,116,49,52,49,49,53,52,32,114,101,110,97,109,101,49,53,48,49,53,53,32,99,111,109,112,97,114,101,49,51,56,49,53,54,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,102,95,53,51,48,32,101,120,112,49,51,54,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,49,49,49,32,108,49,48,54,49,50,57,32,108,101,110,49,48,55,49,51,48,41,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,46),40,102,95,53,48,49,32,105,110,112,117,116,49,48,53,49,49,56,32,114,101,110,97,109,101,49,49,52,49,49,57,32,99,111,109,112,97,114,101,49,48,50,49,50,48,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,55,54,32,108,55,49,57,52,32,108,101,110,55,50,57,53,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,40),40,102,95,53,56,50,32,105,110,112,117,116,55,48,56,51,32,114,101,110,97,109,101,55,57,56,52,32,99,111,109,112,97,114,101,54,55,56,53,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_499)
static void C_ccall f_499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_434)
static void C_ccall f_434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_475)
static void C_ccall f_475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_446)
static void C_ccall f_446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_487)
static void C_ccall f_487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_646)
static void C_ccall f_646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_425)
static void C_ccall f_425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_423)
static void C_ccall f_423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_468)
static void C_fcall f_468(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_463)
static void C_ccall f_463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_565)
static void C_ccall f_565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_525)
static void C_ccall f_525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_582)
static void C_ccall f_582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_580)
static void C_ccall f_580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_547)
static void C_ccall f_547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_655)
static void C_ccall f_655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_780)
static void C_fcall f_780(C_word t0,C_word t1) C_noret;
C_noret_decl(f_597)
static void C_ccall f_597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_653)
static void C_ccall f_653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_591)
static void C_ccall f_591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_614)
static void C_ccall f_614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_558)
static void C_fcall f_558(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_667)
static void C_ccall f_667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_729)
static void C_fcall f_729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_553)
static void C_ccall f_553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_fcall f_625(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_510)
static void C_ccall f_510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_632)
static void C_ccall f_632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_402)
static void C_ccall f_402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_404)
static void C_ccall f_404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_406)
static void C_ccall f_406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_408)
static void C_ccall f_408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_577)
static void C_ccall f_577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_455)
static void C_ccall f_455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_457)
static void C_ccall f_457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_686)
static void C_ccall f_686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_468)
static void C_fcall trf_468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_468(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_468(t0,t1,t2,t3);}

C_noret_decl(trf_780)
static void C_fcall trf_780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_780(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_780(t0,t1);}

C_noret_decl(trf_558)
static void C_fcall trf_558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_558(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_558(t0,t1,t2,t3);}

C_noret_decl(trf_729)
static void C_fcall trf_729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_729(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_729(t0,t1,t2);}

C_noret_decl(trf_625)
static void C_fcall trf_625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_625(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_625(t0,t1,t2,t3);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* k498 in k579 in k405 in k403 in k401 */
static void C_ccall f_499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_499,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_423,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_425,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:97: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[30]))(3,*((C_word*)lf[30]+1),t4,t5);}

/* k432 */
static void C_ccall f_434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_434,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:97: rename150 */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[23]);}
else{
/* setup-api.import.scm:97: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[24]))(3,*((C_word*)lf[24]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k473 in loop147 in k461 in k456 in k453 */
static void C_ccall f_475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_475,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_487,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:97: ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[25]))(4,*((C_word*)lf[25]+1),t3,((C_word*)t0)[5],C_fix(-1));}}

/* k445 in k439 in k432 */
static void C_ccall f_446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_446,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[4],t3));}

/* k439 in k432 */
static void C_ccall f_440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:97: rename150 */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[22]);}

/* k486 in k473 in loop147 in k461 in k456 in k453 */
static void C_ccall f_487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api.import.scm:97: loop147 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_468(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k535 */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_536,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,t1,t2));}

/* k643 in k630 in loop76 in k618 in k613 in k610 */
static void C_ccall f_644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api.import.scm:94: loop76 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_625(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_646 in k405 in k403 in k401 */
static void C_ccall f_646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_646,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_649,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:64: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_symbol_proc(lf[13]))(5,*((C_word*)lf[13]+1),t5,lf[14],t2,lf[15]);}

/* k648 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_649,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_653,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:66: r */
t4=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[3]);}

/* f_530 in k524 in k515 in k508 */
static void C_ccall f_530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_530,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_536,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:95: rename114 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t3,lf[31]);}

/* f_425 in k498 in k579 in k405 in k403 in k401 */
static void C_ccall f_425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_425,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_434,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_455,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:97: ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(3,*((C_word*)lf[29]+1),t7,t5);}

/* k422 in k498 in k579 in k405 in k403 in k401 */
static void C_ccall f_423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_423,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[18],t1);
t3=C_a_i_list1(&a,1,t2);
/* setup-api.import.scm:16: ##sys#register-compiled-module */
((C_proc7)C_fast_retrieve_symbol_proc(lf[19]))(7,*((C_word*)lf[19]+1),((C_word*)t0)[2],lf[20],((C_word*)t0)[3],lf[21],((C_word*)t0)[4],t3);}

/* loop147 in k461 in k456 in k453 */
static void C_fcall f_468(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_468,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_475,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:97: ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[26]))(4,*((C_word*)lf[26]+1),t4,t3,C_fix(0));}

/* k461 in k456 in k453 */
static void C_ccall f_463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_463,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_468,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_468(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_434(2,t2,C_SCHEME_FALSE);}}

/* k563 in loop111 in k551 in k546 in k543 */
static void C_ccall f_565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_565,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_577,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:95: ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[25]))(4,*((C_word*)lf[25]+1),t3,((C_word*)t0)[5],C_fix(-1));}}

/* k527 in k524 in k515 in k508 */
static void C_ccall f_528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_528,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[4],t3));}

/* k524 in k515 in k508 */
static void C_ccall f_525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_528,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_530,a[2]=((C_word*)t0)[4],a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:95: ##sys#map-n */
((C_proc4)C_fast_retrieve_symbol_proc(lf[32]))(4,*((C_word*)lf[32]+1),t2,t3,((C_word*)t0)[5]);}

/* k605 in k596 in k589 */
static void C_ccall f_606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_606,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,((C_word*)t0)[4],t3));}

/* k768 in k760 in k654 in k652 in k648 */
static void C_ccall f_770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_770,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_775,a[2]=((C_word*)t0)[2],a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:73: every */
t3=C_fast_retrieve(lf[9]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_661(2,t2,C_SCHEME_FALSE);}}

/* f_582 in k405 in k403 in k401 */
static void C_ccall f_582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_582,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_591,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_612,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:94: ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(3,*((C_word*)lf[29]+1),t7,t5);}

/* k579 in k405 in k403 in k401 */
static void C_ccall f_580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_580,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_499,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_501,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:95: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[30]))(3,*((C_word*)lf[30]+1),t3,t4);}

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
if(!C_demand_2(1649)){
C_save(t1);
C_rereclaim2(1649*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,37);
lf[0]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007execute\376\001\000\000\021setup-api#execute");
lf[1]=C_h_intern(&lf[1],5,"error");
lf[2]=C_h_intern(&lf[2],3,"map");
lf[3]=C_h_intern(&lf[3],4,"list");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\377\016\376\377\016\376\377\016");
lf[5]=C_h_intern(&lf[5],9,"make/proc");
lf[6]=C_h_intern(&lf[6],15,"make:line-error");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\047second part of clause is not a sequence");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000%clause does not have at least 2 parts");
lf[9]=C_h_intern(&lf[9],5,"every");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\023empty specification");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000&illegal specification (not a sequence)");
lf[12]=C_h_intern(&lf[12],6,"lambda");
lf[13]=C_h_intern(&lf[13],16,"\003syscheck-syntax");
lf[14]=C_h_intern(&lf[14],4,"make");
lf[15]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[16]=C_h_intern(&lf[16],7,"compile");
lf[17]=C_h_intern(&lf[17],3,"run");
lf[18]=C_h_intern(&lf[18],13,"ignore-errors");
lf[19]=C_h_intern(&lf[19],28,"\003sysregister-compiled-module");
lf[20]=C_h_intern(&lf[20],9,"setup-api");
lf[21]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022standard-extension\376\001\000\000\034setup-api#standard-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\011make/proc\376\001\000\000\023setup-api#make/proc\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016host-extension\376\001\000\000\030setup-api#ho"
"st-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021install-extension\376\001\000\000\033setup-api#install-extension\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017install-program\376\001\000\000\031setup-api#install-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016install-s"
"cript\376\001\000\000\030setup-api#install-script\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022setup-verbose-mode\376\001\000\000\034setup-ap"
"i#setup-verbose-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022setup-install-mode\376\001\000\000\034setup-api#setup-instal"
"l-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017deployment-mode\376\001\000\000\031setup-api#deployment-mode\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\023installation-prefix\376\001\000\000\035setup-api#installation-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022destination"
"-prefix\376\001\000\000\034setup-api#destination-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016runtime-prefix\376\001\000\000\030setup-"
"api#runtime-prefix\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016chicken-prefix\376\001\000\000\030setup-api#chicken-prefix\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\014find-library\376\001\000\000\026setup-api#find-library\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013find-header\376\001\000\000"
"\025setup-api#find-header\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014program-path\376\001\000\000\026setup-api#program-path\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\014remove-file\052\376\001\000\000\026setup-api#remove-file\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005patch\376\001\000\000\017setup"
"-api#patch\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013abort-setup\376\001\000\000\025setup-api#abort-setup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024set"
"up-root-directory\376\001\000\000\036setup-api#setup-root-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030create-direct"
"ory/parents\376\001\000\000\042setup-api#create-directory/parents\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014test-compile\376\001\000"
"\000\026setup-api#test-compile\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013try-compile\376\001\000\000\025setup-api#try-compile\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\013run-verbose\376\001\000\000\025setup-api#run-verbose\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016extra-features\376\001\000"
"\000\030setup-api#extra-features\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extra-nonfeatures\376\001\000\000\033setup-api#extra-n"
"onfeatures\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011copy-file\376\001\000\000\023setup-api#copy-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011move-fi"
"le\376\001\000\000\023setup-api#move-file\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030required-chicken-version\376\001\000\000\042setup-api#"
"required-chicken-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032required-extension-version\376\001\000\000$setup-api#"
"required-extension-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014sudo-install\376\001\000\000\026setup-api#sudo-install"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022keep-intermediates\376\001\000\000\034setup-api#keep-intermediates\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\012version>=\077\376\001\000\000\024setup-api#version>=\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032extension-name-and-version\376\001\000"
"\000$setup-api#extension-name-and-version\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016extension-name\376\001\000\000\030setup-ap"
"i#extension-name\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021extension-version\376\001\000\000\033setup-api#extension-version"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020remove-directory\376\001\000\000\032setup-api#remove-directory\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020rem"
"ove-extension\376\001\000\000\032setup-api#remove-extension\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011read-info\376\001\000\000\023setup-a"
"pi#read-info\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020register-program\376\001\000\000\032setup-api#register-program\376\003\000\000\002\376"
"\003\000\000\002\376\001\000\000\014find-program\376\001\000\000\026setup-api#find-program\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011shellpath\376\001\000\000\023set"
"up-api#shellpath\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024setup-error-handling\376\001\000\000\036setup-api#setup-error-ha"
"ndling\376\377\016");
lf[22]=C_h_intern(&lf[22],2,"ex");
lf[23]=C_h_intern(&lf[23],17,"handle-exceptions");
lf[24]=C_h_intern(&lf[24],25,"\003syssyntax-rules-mismatch");
lf[25]=C_h_intern(&lf[25],5,"\003sys+");
lf[26]=C_h_intern(&lf[26],5,"\003sys=");
lf[27]=C_h_intern(&lf[27],6,"\003sys>=");
lf[28]=C_h_intern(&lf[28],10,"\003syslength");
lf[29]=C_h_intern(&lf[29],9,"\003syslist\077");
lf[30]=C_h_intern(&lf[30],18,"\003syser-transformer");
lf[31]=C_h_intern(&lf[31],10,"quasiquote");
lf[32]=C_h_intern(&lf[32],9,"\003sysmap-n");
lf[33]=C_h_intern(&lf[33],7,"execute");
lf[34]=C_h_intern(&lf[34],3,"csc");
lf[35]=C_h_intern(&lf[35],4,"eval");
lf[36]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006import\376\003\000\000\002\376\001\000\000\006scheme\376\003\000\000\002\376\001\000\000\007chicken\376\003\000\000\002\376\001\000\000\007foreign\376\003\000\000\002\376\001\000\000\007irre"
"gex\376\003\000\000\002\376\001\000\000\005utils\376\003\000\000\002\376\001\000\000\005posix\376\003\000\000\002\376\001\000\000\005ports\376\003\000\000\002\376\001\000\000\006extras\376\003\000\000\002\376\001\000\000\017data-s"
"tructures\376\003\000\000\002\376\001\000\000\006srfi-1\376\003\000\000\002\376\001\000\000\007srfi-13\376\003\000\000\002\376\001\000\000\005files\376\377\016");
C_register_lf2(lf,37,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_402,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k543 */
static void C_ccall f_545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_545,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:95: ##sys#length */
t3=C_fast_retrieve(lf[28]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_510(2,t2,C_SCHEME_FALSE);}}

/* k546 in k543 */
static void C_ccall f_547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:95: ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t2,t1,C_fix(0));}

/* f_656 in k654 in k652 in k648 */
static void C_ccall f_656(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_656r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_656r(t0,t1,t2,t3);}}

static void C_ccall f_656r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_apply(6,0,t1,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],t3);}

/* k654 in k652 in k648 */
static void C_ccall f_655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_656,a[2]=((C_word*)t0)[2],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_661,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_listp(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_762,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_762(2,t6,t4);}
else{
/* setup-api.import.scm:70: form-error */
t6=t2;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[11]);}}

/* k779 */
static void C_fcall f_780(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_780,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_783(2,t3,t1);}
else{
/* setup-api.import.scm:75: form-error */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[8],((C_word*)t0)[2]);}}

/* k596 in k589 */
static void C_ccall f_597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:94: rename79 */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[34]);}

/* k652 in k648 */
static void C_ccall f_653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_655,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* setup-api.import.scm:67: r */
t3=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[12]);}

/* k589 */
static void C_ccall f_591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_591,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:94: rename79 */
t3=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[17]);}
else{
/* setup-api.import.scm:94: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[24]))(3,*((C_word*)lf[24]+1),((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k613 in k610 */
static void C_ccall f_614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:94: ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t2,t1,C_fix(0));}

/* f_501 in k579 in k405 in k403 in k401 */
static void C_ccall f_501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_501,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_510,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_545,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:95: ##sys#list? */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[29]+1)))(3,*((C_word*)lf[29]+1),t7,t5);}

/* k610 */
static void C_ccall f_612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_612,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:94: ##sys#length */
t3=C_fast_retrieve(lf[28]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_591(2,t2,C_SCHEME_FALSE);}}

/* loop111 in k551 in k546 in k543 */
static void C_fcall f_558(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_558,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_565,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:95: ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[26]))(4,*((C_word*)lf[26]+1),t4,t3,C_fix(0));}

/* k666 in k660 in k654 in k652 in k648 */
static void C_ccall f_667(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_667,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[2]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_727,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_729,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_729(t12,t8,((C_word*)t0)[4]);}

/* k725 in k666 in k660 in k654 in k652 in k648 */
static void C_ccall f_727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
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
C_save_and_reclaim((void*)tr2,(void*)f_727,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[3],t1);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,t2,lf[4]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_cons(&a,2,((C_word*)t0)[4],t4));}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_cons(&a,2,((C_word*)t0)[4],t7));}}

/* map-loop32 in k666 in k660 in k654 in k652 in k648 */
static void C_fcall f_729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_729,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_754,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* setup-api.import.scm:86: g38 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_775 in k768 in k760 in k654 in k652 in k648 */
static void C_ccall f_775(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_775,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_780,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
t6=t3;
f_780(t6,C_fixnum_greater_or_equal_p(t5,C_fix(2)));}
else{
t4=t3;
f_780(t4,C_SCHEME_FALSE);}}

/* k551 in k546 in k543 */
static void C_ccall f_553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_553,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_558,a[2]=t3,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_558(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_510(2,t2,C_SCHEME_FALSE);}}

/* k515 in k508 */
static void C_ccall f_516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_525,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:95: rename114 */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[3]);}

/* k660 in k654 in k652 in k648 */
static void C_ccall f_661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* setup-api.import.scm:85: r */
t3=((C_word*)t0)[7];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[5]);}

/* loop76 in k618 in k613 in k610 */
static void C_fcall f_625(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_625,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_632,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* setup-api.import.scm:94: ##sys#= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[26]))(4,*((C_word*)lf[26]+1),t4,t3,C_fix(0));}

/* k508 */
static void C_ccall f_510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_510,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:95: rename114 */
t3=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[33]);}
else{
/* setup-api.import.scm:95: ##sys#syntax-rules-mismatch */
((C_proc3)C_fast_retrieve_symbol_proc(lf[24]))(3,*((C_word*)lf[24]+1),((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k618 in k613 in k610 */
static void C_ccall f_620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_620,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_625,a[2]=t3,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_625(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_591(2,t2,C_SCHEME_FALSE);}}

/* k781 in k779 */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
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
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_i_listp(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
t7=C_u_i_car(t6);
/* setup-api.import.scm:80: make:line-error */
((C_proc5)C_fast_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),((C_word*)t0)[3],lf[7],t7,t2);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k630 in loop76 in k618 in k613 in k610 */
static void C_ccall f_632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_632,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST));}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_644,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:94: ##sys#+ */
((C_proc4)C_fast_retrieve_symbol_proc(lf[25]))(4,*((C_word*)lf[25]+1),t3,((C_word*)t0)[5],C_fix(-1));}}

/* k401 */
static void C_ccall f_402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k403 in k401 */
static void C_ccall f_404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_406,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:3: eval */
t3=C_fast_retrieve(lf[35]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[36]);}

/* k405 in k403 in k401 */
static void C_ccall f_406(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,lf[0]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_646,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_cons(&a,2,lf[14],t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_580,a[2]=t5,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_582,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* setup-api.import.scm:94: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[30]))(3,*((C_word*)lf[30]+1),t6,t7);}

/* k407 in k405 in k403 in k401 */
static void C_ccall f_408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k760 in k654 in k652 in k648 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_762,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_770,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_770(2,t4,t2);}
else{
/* setup-api.import.scm:72: form-error */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[10]);}}
else{
t2=((C_word*)t0)[4];
f_661(2,t2,C_SCHEME_FALSE);}}

/* k576 in k563 in loop111 in k551 in k546 in k543 */
static void C_ccall f_577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* setup-api.import.scm:95: loop111 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_558(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k453 */
static void C_ccall f_455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_455,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* setup-api.import.scm:97: ##sys#length */
t3=C_fast_retrieve(lf[28]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_434(2,t2,C_SCHEME_FALSE);}}

/* k456 in k453 */
static void C_ccall f_457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* setup-api.import.scm:97: ##sys#>= */
((C_proc4)C_fast_retrieve_symbol_proc(lf[27]))(4,*((C_word*)lf[27]+1),t2,t1,C_fix(0));}

/* f_686 in k666 in k660 in k654 in k652 in k648 */
static void C_ccall f_686(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_686,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_i_cadr(t2);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t4);
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
if(C_truep(C_i_nullp(t8))){
t9=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t3,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_cons(&a,2,((C_word*)t0)[2],t10));}
else{
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=C_a_i_cons(&a,2,((C_word*)t0)[3],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t5,t11);
t13=C_a_i_cons(&a,2,t3,t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_cons(&a,2,((C_word*)t0)[2],t13));}}

/* k753 in map-loop32 in k666 in k660 in k654 in k652 in k648 */
static void C_ccall f_754(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_754,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_729(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_729(t6,((C_word*)t0)[5],t5);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[58] = {
{"f_499:setup_2dapi_2eimport_2escm",(void*)f_499},
{"f_434:setup_2dapi_2eimport_2escm",(void*)f_434},
{"f_475:setup_2dapi_2eimport_2escm",(void*)f_475},
{"f_446:setup_2dapi_2eimport_2escm",(void*)f_446},
{"f_440:setup_2dapi_2eimport_2escm",(void*)f_440},
{"f_487:setup_2dapi_2eimport_2escm",(void*)f_487},
{"f_536:setup_2dapi_2eimport_2escm",(void*)f_536},
{"f_644:setup_2dapi_2eimport_2escm",(void*)f_644},
{"f_646:setup_2dapi_2eimport_2escm",(void*)f_646},
{"f_649:setup_2dapi_2eimport_2escm",(void*)f_649},
{"f_530:setup_2dapi_2eimport_2escm",(void*)f_530},
{"f_425:setup_2dapi_2eimport_2escm",(void*)f_425},
{"f_423:setup_2dapi_2eimport_2escm",(void*)f_423},
{"f_468:setup_2dapi_2eimport_2escm",(void*)f_468},
{"f_463:setup_2dapi_2eimport_2escm",(void*)f_463},
{"f_565:setup_2dapi_2eimport_2escm",(void*)f_565},
{"f_528:setup_2dapi_2eimport_2escm",(void*)f_528},
{"f_525:setup_2dapi_2eimport_2escm",(void*)f_525},
{"f_606:setup_2dapi_2eimport_2escm",(void*)f_606},
{"f_770:setup_2dapi_2eimport_2escm",(void*)f_770},
{"f_582:setup_2dapi_2eimport_2escm",(void*)f_582},
{"f_580:setup_2dapi_2eimport_2escm",(void*)f_580},
{"toplevel:setup_2dapi_2eimport_2escm",(void*)C_toplevel},
{"f_545:setup_2dapi_2eimport_2escm",(void*)f_545},
{"f_547:setup_2dapi_2eimport_2escm",(void*)f_547},
{"f_656:setup_2dapi_2eimport_2escm",(void*)f_656},
{"f_655:setup_2dapi_2eimport_2escm",(void*)f_655},
{"f_780:setup_2dapi_2eimport_2escm",(void*)f_780},
{"f_597:setup_2dapi_2eimport_2escm",(void*)f_597},
{"f_653:setup_2dapi_2eimport_2escm",(void*)f_653},
{"f_591:setup_2dapi_2eimport_2escm",(void*)f_591},
{"f_614:setup_2dapi_2eimport_2escm",(void*)f_614},
{"f_501:setup_2dapi_2eimport_2escm",(void*)f_501},
{"f_612:setup_2dapi_2eimport_2escm",(void*)f_612},
{"f_558:setup_2dapi_2eimport_2escm",(void*)f_558},
{"f_667:setup_2dapi_2eimport_2escm",(void*)f_667},
{"f_727:setup_2dapi_2eimport_2escm",(void*)f_727},
{"f_729:setup_2dapi_2eimport_2escm",(void*)f_729},
{"f_775:setup_2dapi_2eimport_2escm",(void*)f_775},
{"f_553:setup_2dapi_2eimport_2escm",(void*)f_553},
{"f_516:setup_2dapi_2eimport_2escm",(void*)f_516},
{"f_661:setup_2dapi_2eimport_2escm",(void*)f_661},
{"f_625:setup_2dapi_2eimport_2escm",(void*)f_625},
{"f_510:setup_2dapi_2eimport_2escm",(void*)f_510},
{"f_620:setup_2dapi_2eimport_2escm",(void*)f_620},
{"f_783:setup_2dapi_2eimport_2escm",(void*)f_783},
{"f_632:setup_2dapi_2eimport_2escm",(void*)f_632},
{"f_402:setup_2dapi_2eimport_2escm",(void*)f_402},
{"f_404:setup_2dapi_2eimport_2escm",(void*)f_404},
{"f_406:setup_2dapi_2eimport_2escm",(void*)f_406},
{"f_408:setup_2dapi_2eimport_2escm",(void*)f_408},
{"f_762:setup_2dapi_2eimport_2escm",(void*)f_762},
{"f_577:setup_2dapi_2eimport_2escm",(void*)f_577},
{"f_455:setup_2dapi_2eimport_2escm",(void*)f_455},
{"f_457:setup_2dapi_2eimport_2escm",(void*)f_457},
{"f_686:setup_2dapi_2eimport_2escm",(void*)f_686},
{"f_754:setup_2dapi_2eimport_2escm",(void*)f_754},
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
o|eliminated procedure checks: 24 
o|specializations:
o|  2 (cddr (pair * pair))
o|  1 (cadr (pair * pair))
o|  1 (>= fixnum fixnum)
o|  1 (length list)
o|inlining procedure: k429 
o|inlining procedure: k429 
o|inlining procedure: k458 
o|inlining procedure: k471 
o|inlining procedure: k471 
o|inlining procedure: k458 
o|inlining procedure: k505 
o|inlining procedure: k505 
o|inlining procedure: k548 
o|inlining procedure: k561 
o|inlining procedure: k561 
o|inlining procedure: k548 
o|inlining procedure: k586 
o|inlining procedure: k586 
o|inlining procedure: k615 
o|inlining procedure: k628 
o|inlining procedure: k628 
o|inlining procedure: k615 
o|inlining procedure: k675 
o|inlining procedure: k675 
o|inlining procedure: k705 
o|inlining procedure: k705 
o|inlining procedure: k732 
o|inlining procedure: k732 
o|inlining procedure: k763 
o|inlining procedure: k777 
o|inlining procedure: k777 
o|substituted constant variable: a811 
o|inlining procedure: k763 
o|replaced variables: 32 
o|removed binding forms: 5 
o|substituted constant variable: r459823 
o|substituted constant variable: r549829 
o|substituted constant variable: r616835 
o|substituted constant variable: a674836 
o|substituted constant variable: r706838 
o|substituted constant variable: r706838 
o|substituted constant variable: f_776846 
o|substituted constant variable: r764847 
o|removed binding forms: 45 
o|removed binding forms: 8 
o|simplifications: ((##core#call . 59)) 
o|  call simplifications:
o|    fx>=
o|    list?	3
o|    ##sys#check-list
o|    pair?	2
o|    ##sys#setslot
o|    ##sys#slot	2
o|    car	2
o|    cadr	3
o|    ##sys#list
o|    cddr
o|    null?	2
o|    apply
o|    ##sys#cdr	6
o|    ##sys#eq?	3
o|    ##sys#cons	22
o|    cons	5
o|    list	3
o|contracted procedure: k410 
o|contracted procedure: k650 
o|contracted procedure: k694 
o|contracted procedure: k691 
o|contracted procedure: k721 
o|contracted procedure: k700 
o|contracted procedure: k708 
o|contracted procedure: k718 
o|contracted procedure: k715 
o|contracted procedure: k705 
o|contracted procedure: k723 
o|contracted procedure: k672 
o|contracted procedure: k683 
o|contracted procedure: k677 
o|inlining procedure: k669 
o|inlining procedure: k669 
o|contracted procedure: k734 
o|contracted procedure: k737 
o|contracted procedure: k746 
o|contracted procedure: k756 
o|contracted procedure: k758 
o|contracted procedure: k766 
o|contracted procedure: k784 
o|contracted procedure: k798 
o|contracted procedure: k786 
o|contracted procedure: k803 
o|contracted procedure: k489 
o|contracted procedure: k492 
o|contracted procedure: k495 
o|contracted procedure: k413 
o|contracted procedure: k419 
o|contracted procedure: k416 
o|contracted procedure: k427 
o|contracted procedure: k448 
o|contracted procedure: k442 
o|contracted procedure: k483 
o|contracted procedure: k503 
o|contracted procedure: k521 
o|contracted procedure: k518 
o|contracted procedure: k538 
o|contracted procedure: k573 
o|contracted procedure: k584 
o|contracted procedure: k602 
o|contracted procedure: k599 
o|contracted procedure: k640 
o|simplifications: ((let . 4)) 
o|removed binding forms: 43 
o|inlining procedure: k697 
o|inlining procedure: k697 
o|inlining procedure: k739 
o|inlining procedure: k739 
o|replaced variables: 5 
o|removed binding forms: 1 
o|removed binding forms: 7 
o|customizable procedures: (loop7693 loop111128 loop147164 k779 map-loop3257) 
o|calls to known targets: 22 
o|fast box initializations: 4 
*/
/* end of file */
