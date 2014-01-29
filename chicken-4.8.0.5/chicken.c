/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file chicken.c
   used units: library eval chicken_2dsyntax chicken_2dffi_2dsyntax srfi_2d1 srfi_2d4 utils files extras data_2dstructures support compiler optimizer compiler_2dsyntax scrutinizer driver platform backend srfi_2d69
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externimport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_driver_toplevel)
C_externimport void C_ccall C_driver_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_platform_toplevel)
C_externimport void C_ccall C_platform_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_backend_toplevel)
C_externimport void C_ccall C_backend_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[42];
static double C_possibly_force_alignment;


C_noret_decl(f_332)
static void C_ccall f_332(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_330)
static void C_ccall f_330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_338)
static void C_fcall f_338(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_369)
static void C_fcall f_369(C_word t0,C_word t1) C_noret;
C_noret_decl(f_425)
static void C_ccall f_425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_300)
static void C_ccall f_300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_302)
static void C_ccall f_302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_304)
static void C_ccall f_304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_306)
static void C_ccall f_306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_308)
static void C_ccall f_308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_432)
static void C_ccall f_432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_430)
static void C_ccall f_430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_435)
static void C_ccall f_435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_624)
static void C_ccall f_624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_639)
static void C_ccall f_639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_310)
static void C_ccall f_310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_314)
static void C_ccall f_314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_443)
static void C_ccall f_443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_446)
static void C_ccall f_446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_448)
static void C_ccall f_448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_647)
static void C_ccall f_647(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_572)
static void C_ccall f_572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_653)
static void C_ccall f_653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_453)
static void C_fcall f_453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_292)
static void C_ccall f_292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_294)
static void C_ccall f_294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_296)
static void C_ccall f_296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_298)
static void C_ccall f_298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_290)
static void C_ccall f_290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_506)
static void C_ccall f_506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_486)
static void C_ccall f_486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_351)
static void C_ccall f_351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_326)
static void C_ccall f_326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_324)
static void C_ccall f_324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_322)
static void C_ccall f_322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_320)
static void C_ccall f_320(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_338)
static void C_fcall trf_338(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_338(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_338(t0,t1,t2,t3,t4);}

C_noret_decl(trf_369)
static void C_fcall trf_369(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_369(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_369(t0,t1);}

C_noret_decl(trf_453)
static void C_fcall trf_453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_453(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_453(t0,t1,t2);}

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

/* ##compiler#process-command-line in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_332(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_332,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_338,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_338(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_330,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#compiler-arguments ...) */,t1);
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##compiler#process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_332,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_432,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_443,tmp=(C_word)a,a+=2,tmp);
/* chicken.scm:73: ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}

/* loop in process-command-line in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 in ... */
static void C_fcall f_338(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_338,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_351,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:58: reverse */
t6=*((C_word*)lf[2]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=C_i_car(t2);
t6=C_i_string_length(t5);
t7=C_subchar(t5,C_fix(0));
t8=(C_truep(C_i_char_equalp(C_make_character(45),t7))?C_fixnum_greaterp(t6,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_369,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=t5,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(t6,C_fix(1)))){
t10=C_subchar(t5,C_fix(1));
t11=t9;
f_369(t11,C_i_char_equalp(C_make_character(58),t10));}
else{
t10=t9;
f_369(t10,C_SCHEME_FALSE);}}
else{
if(C_truep(t4)){
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_a_i_cons(&a,2,t5,t3);
/* chicken.scm:67: loop */
t18=t1;
t19=t10;
t20=t11;
t21=t4;
t1=t18;
t2=t19;
t3=t20;
t4=t21;
goto loop;}
else{
t9=t2;
t10=C_u_i_cdr(t9);
/* chicken.scm:68: loop */
t18=t1;
t19=t10;
t20=t3;
t21=t5;
t1=t18;
t2=t19;
t3=t20;
t4=t21;
goto loop;}}}}

/* k534 in loop */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:126: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_453(t4,((C_word*)t0)[5],t3);}

/* k367 in loop in process-command-line in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in ... */
static void C_fcall f_369(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_369,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken.scm:64: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_338(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_385,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_388,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:65: substring */
t6=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[7],C_fix(1),((C_word*)t0)[8]);}}

/* k424 in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_427,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_430,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k426 in k424 in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 in ... */
static void C_ccall f_427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_support_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f_432 in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_435,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:73: user-options-pass */
t3=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k428 in k424 in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 in ... */
static void C_ccall f_430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k434 */
static void C_ccall f_435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* chicken.scm:73: g39 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],*((C_word*)lf[0]+1));}
else{
t2=*((C_word*)lf[1]+1);
t3=*((C_word*)lf[1]+1);
/* chicken.scm:73: g39 */
t4=*((C_word*)lf[1]+1);
f_332(3,t4,((C_word*)t0)[2],*((C_word*)lf[0]+1));}}

/* k623 in loop */
static void C_ccall f_624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:143: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_453(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k638 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_645,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:46: argv */
t3=*((C_word*)lf[35]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_316,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scrutinizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_driver_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k514 in loop */
static void C_ccall f_516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:126: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_453(t4,((C_word*)t0)[5],t3);}

/* f_443 in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_443,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_446,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_453,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_453(t9,t5,((C_word*)t4)[1]);}

/* k445 */
static void C_ccall f_446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t2,*((C_word*)lf[8]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k629 in loop */
static void C_ccall f_630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:140: warning */
t2=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[31],t1);}

/* k524 in loop */
static void C_ccall f_526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:126: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_453(t4,((C_word*)t0)[5],t3);}

/* k447 in k445 */
static void C_ccall f_448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:145: exit */
t2=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k644 in k638 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(t1);
/* chicken.scm:42: append */
t3=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* f_647 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_647(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_647,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_string_equal_p(t2,lf[36]));}

/* k570 in loop */
static void C_ccall f_572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:133: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_453(t4,((C_word*)t0)[5],t3);}

/* k655 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* chicken.scm:45: string-split */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
/* chicken.scm:45: string-split */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[39]);}}

/* k652 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:43: remove */
t2=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop */
static void C_fcall f_453(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_453,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_eqp(lf[9],t3);
if(C_truep(t6)){
t7=C_i_car(t5);
t8=C_a_i_string_to_number(&a,2,t7,C_fix(10));
switch(t8){
case C_fix(0):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_486,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:83: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[11],lf[12],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(1):
t9=C_a_i_cons(&a,2,lf[13],((C_word*)((C_word*)t0)[2])[1]);
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t11=C_u_i_cdr(t5);
/* chicken.scm:126: loop */
t33=t1;
t34=t11;
t1=t33;
t2=t34;
goto loop;
case C_fix(2):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_506,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:88: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[13],lf[14],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(3):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_516,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:94: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc8)(void*)(*((C_word*)t10+1)))(8,t10,t9,lf[13],lf[14],lf[15],lf[16],lf[17],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(4):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_526,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:103: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc9)(void*)(*((C_word*)t10+1)))(9,t10,t9,lf[13],lf[14],lf[15],lf[17],lf[16],lf[18],((C_word*)((C_word*)t0)[2])[1]);
default:
if(C_truep(C_i_greater_or_equalp(t8,C_fix(5)))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_536,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:113: cons* */
t10=*((C_word*)lf[10]+1);
((C_proc15)(void*)(*((C_word*)t10+1)))(15,t10,t9,lf[19],lf[20],lf[18],lf[21],lf[13],lf[22],lf[17],lf[13],lf[22],lf[14],lf[15],lf[23],((C_word*)((C_word*)t0)[2])[1]);}
else{
t9=C_u_i_cdr(t5);
/* chicken.scm:126: loop */
t33=t1;
t34=t9;
t1=t33;
t2=t34;
goto loop;}}}
else{
t7=C_eqp(lf[24],t3);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_a_i_string_to_number(&a,2,t8,C_fix(10));
switch(t9){
case C_fix(0):
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_572,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:130: cons* */
t11=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[22],lf[20],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(1):
t10=C_a_i_cons(&a,2,lf[20],((C_word*)((C_word*)t0)[2])[1]);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t12=C_u_i_cdr(t5);
/* chicken.scm:133: loop */
t33=t1;
t34=t12;
t1=t33;
t2=t34;
goto loop;
default:
t10=C_a_i_cons(&a,2,lf[25],((C_word*)((C_word*)t0)[2])[1]);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t12=C_u_i_cdr(t5);
/* chicken.scm:133: loop */
t33=t1;
t34=t12;
t1=t33;
t2=t34;
goto loop;}}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[26]+1)))){
/* chicken.scm:134: loop */
t33=t1;
t34=t5;
t1=t33;
t2=t34;
goto loop;}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[27]+1)))){
if(C_truep(C_i_pairp(t5))){
t8=C_u_i_cdr(t5);
/* chicken.scm:137: loop */
t33=t1;
t34=t8;
t1=t33;
t2=t34;
goto loop;}
else{
/* chicken.scm:138: quit */
t8=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[29],t3);}}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_624,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_630,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
/* chicken.scm:140: warning */
t10=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,lf[31],t3);}
else{
/* chicken.scm:142: conc */
t10=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,lf[33],t3);}}}}}}}

/* k291 in k289 */
static void C_ccall f_292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k293 in k291 in k289 */
static void C_ccall f_294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k295 in k293 in k291 in k289 */
static void C_ccall f_296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d4_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k289 */
static void C_ccall f_290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k504 in loop */
static void C_ccall f_506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:126: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_453(t4,((C_word*)t0)[5],t3);}

/* k484 in loop */
static void C_ccall f_486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_u_i_cdr(((C_word*)t0)[3]);
/* chicken.scm:126: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_453(t4,((C_word*)t0)[5],t3);}

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
if(!C_demand_2(360)){
C_save(t1);
C_rereclaim2(360*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,42);
lf[0]=C_h_intern(&lf[0],27,"\010compilercompiler-arguments");
lf[1]=C_h_intern(&lf[1],29,"\010compilerprocess-command-line");
lf[2]=C_h_intern(&lf[2],7,"reverse");
lf[3]=C_h_intern(&lf[3],14,"string->symbol");
lf[4]=C_h_intern(&lf[4],9,"substring");
lf[5]=C_h_intern(&lf[5],25,"\003sysimplicit-exit-handler");
lf[6]=C_h_intern(&lf[6],17,"user-options-pass");
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],19,"compile-source-file");
lf[9]=C_h_intern(&lf[9],14,"optimize-level");
lf[10]=C_h_intern(&lf[10],5,"cons\052");
lf[11]=C_h_intern(&lf[11],18,"no-compiler-syntax");
lf[12]=C_h_intern(&lf[12],21,"no-usual-integrations");
lf[13]=C_h_intern(&lf[13],22,"optimize-leaf-routines");
lf[14]=C_h_intern(&lf[14],6,"inline");
lf[15]=C_h_intern(&lf[15],13,"inline-global");
lf[16]=C_h_intern(&lf[16],5,"local");
lf[17]=C_h_intern(&lf[17],10,"specialize");
lf[18]=C_h_intern(&lf[18],6,"unsafe");
lf[19]=C_h_intern(&lf[19],18,"disable-interrupts");
lf[20]=C_h_intern(&lf[20],8,"no-trace");
lf[21]=C_h_intern(&lf[21],5,"block");
lf[22]=C_h_intern(&lf[22],14,"no-lambda-info");
lf[23]=C_h_intern(&lf[23],10,"clustering");
lf[24]=C_h_intern(&lf[24],11,"debug-level");
lf[25]=C_h_intern(&lf[25],10,"scrutinize");
lf[26]=C_h_intern(&lf[26],31,"\010compilervalid-compiler-options");
lf[27]=C_h_intern(&lf[27],45,"\010compilervalid-compiler-options-with-argument");
lf[28]=C_h_intern(&lf[28],13,"\010compilerquit");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~s\047 option");
lf[30]=C_h_intern(&lf[30],7,"warning");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000!invalid compiler option (ignored)");
lf[32]=C_h_intern(&lf[32],4,"conc");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[34]=C_h_intern(&lf[34],6,"append");
lf[35]=C_h_intern(&lf[35],4,"argv");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[37]=C_h_intern(&lf[37],6,"remove");
lf[38]=C_h_intern(&lf[38],12,"string-split");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[40]=C_h_intern(&lf[40],24,"get-environment-variable");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN_OPTIONS");
C_register_lf2(lf,42,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k350 in loop in process-command-line in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in ... */
static void C_ccall f_351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:58: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k384 in k367 in loop in process-command-line in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in ... */
static void C_ccall f_385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_385,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken.scm:65: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_338(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* k387 in k367 in loop in process-command-line in k328 in k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in ... */
static void C_ccall f_388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm:65: string->symbol */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k325 in k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_639,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_647,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_653,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_656,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:45: get-environment-variable */
t7=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[41]);}

/* k323 in k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k321 in k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_backend_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k319 in k317 in k315 in k313 in k311 in k309 in k307 in k305 in k303 in k301 in k299 in k297 in k295 in k293 in k291 in k289 */
static void C_ccall f_320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_platform_toplevel(2,C_SCHEME_UNDEFINED,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[50] = {
{"f_332:chicken_2escm",(void*)f_332},
{"f_330:chicken_2escm",(void*)f_330},
{"f_338:chicken_2escm",(void*)f_338},
{"f_536:chicken_2escm",(void*)f_536},
{"f_369:chicken_2escm",(void*)f_369},
{"f_425:chicken_2escm",(void*)f_425},
{"f_427:chicken_2escm",(void*)f_427},
{"f_300:chicken_2escm",(void*)f_300},
{"f_302:chicken_2escm",(void*)f_302},
{"f_304:chicken_2escm",(void*)f_304},
{"f_306:chicken_2escm",(void*)f_306},
{"f_308:chicken_2escm",(void*)f_308},
{"f_432:chicken_2escm",(void*)f_432},
{"f_430:chicken_2escm",(void*)f_430},
{"f_435:chicken_2escm",(void*)f_435},
{"f_624:chicken_2escm",(void*)f_624},
{"f_639:chicken_2escm",(void*)f_639},
{"f_310:chicken_2escm",(void*)f_310},
{"f_312:chicken_2escm",(void*)f_312},
{"f_314:chicken_2escm",(void*)f_314},
{"f_316:chicken_2escm",(void*)f_316},
{"f_318:chicken_2escm",(void*)f_318},
{"f_516:chicken_2escm",(void*)f_516},
{"f_443:chicken_2escm",(void*)f_443},
{"f_446:chicken_2escm",(void*)f_446},
{"f_630:chicken_2escm",(void*)f_630},
{"f_526:chicken_2escm",(void*)f_526},
{"f_448:chicken_2escm",(void*)f_448},
{"f_645:chicken_2escm",(void*)f_645},
{"f_647:chicken_2escm",(void*)f_647},
{"f_572:chicken_2escm",(void*)f_572},
{"f_656:chicken_2escm",(void*)f_656},
{"f_653:chicken_2escm",(void*)f_653},
{"f_453:chicken_2escm",(void*)f_453},
{"f_292:chicken_2escm",(void*)f_292},
{"f_294:chicken_2escm",(void*)f_294},
{"f_296:chicken_2escm",(void*)f_296},
{"f_298:chicken_2escm",(void*)f_298},
{"f_290:chicken_2escm",(void*)f_290},
{"f_506:chicken_2escm",(void*)f_506},
{"f_486:chicken_2escm",(void*)f_486},
{"toplevel:chicken_2escm",(void*)C_toplevel},
{"f_351:chicken_2escm",(void*)f_351},
{"f_385:chicken_2escm",(void*)f_385},
{"f_388:chicken_2escm",(void*)f_388},
{"f_326:chicken_2escm",(void*)f_326},
{"f_324:chicken_2escm",(void*)f_324},
{"f_322:chicken_2escm",(void*)f_322},
{"f_320:chicken_2escm",(void*)f_320},
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
o|eliminated procedure checks: 1 
o|specializations:
o|  7 (eqv? * (not float))
o|  8 (cdr pair)
o|  2 (> fixnum fixnum)
o|  2 (string-ref string fixnum)
o|inlining procedure: k341 
o|substituted constant variable: a357 
o|inlining procedure: k341 
o|inlining procedure: k364 
o|inlining procedure: k364 
o|substituted constant variable: a397 
o|substituted constant variable: a399 
o|inlining procedure: k400 
o|inlining procedure: k400 
o|substituted constant variable: a423 
o|inlining procedure: k436 
o|inlining procedure: k436 
o|propagated global variable: r437671 ##compiler#process-command-line 
o|inlining procedure: k456 
o|inlining procedure: k456 
o|inlining procedure: k487 
o|inlining procedure: k487 
o|inlining procedure: k507 
o|inlining procedure: k507 
o|inlining procedure: k527 
o|inlining procedure: k527 
o|substituted constant variable: a538 
o|substituted constant variable: a540 
o|substituted constant variable: a542 
o|substituted constant variable: a544 
o|substituted constant variable: a546 
o|inlining procedure: k550 
o|inlining procedure: k573 
o|inlining procedure: k573 
o|substituted constant variable: a588 
o|substituted constant variable: a590 
o|inlining procedure: k550 
o|inlining procedure: k603 
o|inlining procedure: k603 
o|inlining procedure: k629 
o|inlining procedure: k629 
o|inlining procedure: k657 
o|inlining procedure: k657 
o|replaced variables: 56 
o|removed binding forms: 6 
o|propagated global variable: g3940672 ##compiler#process-command-line 
o|substituted constant variable: r658694 
o|substituted constant variable: r658694 
o|replaced variables: 9 
o|removed binding forms: 57 
o|inlining procedure: k472 
o|inlining procedure: k472 
o|inlining procedure: k472 
o|inlining procedure: k472 
o|inlining procedure: k472 
o|inlining procedure: k472 
o|inlining procedure: k472 
o|inlining procedure: k558 
o|inlining procedure: k558 
o|inlining procedure: k558 
o|removed binding forms: 11 
o|removed binding forms: 12 
o|removed binding forms: 1 
o|simplifications: ((##core#call . 37)) 
o|  call simplifications:
o|    string=?
o|    cdr
o|    ##sys#call-with-values
o|    memq	2
o|    string?
o|    pair?
o|    string->number	2
o|    eq?	9
o|    >=
o|    apply
o|    null?	2
o|    car	4
o|    string-length
o|    fx>	2
o|    char=?	2
o|    cons	5
o|    values
o|contracted procedure: k343 
o|contracted procedure: k352 
o|contracted procedure: k354 
o|contracted procedure: k381 
o|contracted procedure: k389 
o|contracted procedure: k409 
o|contracted procedure: k416 
o|contracted procedure: k458 
o|contracted procedure: k461 
o|contracted procedure: k467 
o|contracted procedure: k548 
o|contracted procedure: k470 
o|contracted procedure: k480 
o|contracted procedure: k490 
o|contracted procedure: k494 
o|contracted procedure: k500 
o|contracted procedure: k510 
o|contracted procedure: k520 
o|contracted procedure: k530 
o|contracted procedure: k553 
o|contracted procedure: k592 
o|contracted procedure: k556 
o|contracted procedure: k566 
o|contracted procedure: k576 
o|contracted procedure: k580 
o|contracted procedure: k584 
o|contracted procedure: k597 
o|contracted procedure: k606 
o|contracted procedure: k612 
o|contracted procedure: k631 
o|contracted procedure: k641 
o|simplifications: ((let . 14)) 
o|removed binding forms: 31 
o|replaced variables: 6 
o|simplifications: ((if . 1)) 
o|removed binding forms: 6 
o|contracted procedure: k361 
o|removed binding forms: 1 
o|customizable procedures: (loop46 k367 loop29) 
o|calls to known targets: 22 
o|identified direct recursive calls: f_338 2 
o|identified direct recursive calls: f_453 6 
o|fast box initializations: 2 
*/
/* end of file */
