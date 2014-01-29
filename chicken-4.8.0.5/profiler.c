/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: profiler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file profiler.c
   unit: profiler
*/

#include "chicken.h"

#include <unistd.h>

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[23];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,7),40,102,95,51,53,55,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,53,32,46,32,97,114,103,115,54,57,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,111,102,105,108,101,45,105,110,102,111,32,115,105,122,101,54,53,32,102,105,108,101,110,97,109,101,54,54,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,115,101,116,45,112,114,111,102,105,108,101,45,105,110,102,111,45,118,101,99,116,111,114,33,32,118,101,99,55,56,32,105,55,57,32,120,56,48,41,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,110,116,114,121,32,105,110,100,101,120,56,55,32,118,101,99,56,56,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,120,105,116,32,105,110,100,101,120,49,48,49,32,118,101,99,49,48,50,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,49,50,56,32,105,49,51,48,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,102,95,53,48,53,32,118,101,99,49,50,54,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,54,32,103,49,50,51,49,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,102,95,53,48,51,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,102,105,110,105,115,104,45,112,114,111,102,105,108,101,41,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from cpu-ms */
static C_word C_fcall stub82(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub82(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_flonum(&C_a,C_cpu_milliseconds());
return C_r;}

C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_503)
static void C_ccall f_503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_505)
static void C_ccall f_505(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_329)
static void C_ccall f_329(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_profiler_toplevel)
C_externexport void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_513)
static void C_fcall f_513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_335)
static void C_ccall f_335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_381)
static void C_ccall f_381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_383)
static void C_ccall f_383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_563)
static void C_fcall f_563(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_396)
static void C_ccall f_396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_572)
static void C_ccall f_572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_365)
static void C_ccall f_365(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_365)
static void C_ccall f_365r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_498)
static void C_ccall f_498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_368)
static void C_ccall f_368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_360)
static void C_ccall f_360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_412)
static void C_fcall f_412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_346)
static void C_ccall f_346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_348)
static void C_ccall f_348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_522)
static void C_ccall f_522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_524)
static void C_ccall f_524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_446)
static void C_ccall f_446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_357)
static void C_ccall f_357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_350)
static void C_ccall f_350(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_513)
static void C_fcall trf_513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_513(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_513(t0,t1,t2);}

C_noret_decl(trf_563)
static void C_fcall trf_563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_563(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_563(t0,t1,t2);}

C_noret_decl(trf_412)
static void C_fcall trf_412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_412(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_412(t0,t1);}

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

/* k535 in k533 in k531 in k529 in k527 in k525 in k523 in k521 in doloop128 */
static void C_ccall f_537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(5));
t3=((C_word*)((C_word*)t0)[3])[1];
f_513(t3,((C_word*)t0)[4],t2);}

/* k533 in k531 in k529 in k527 in k525 in k523 in k521 in doloop128 */
static void C_ccall f_534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_534,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),*((C_word*)lf[17]+1));}

/* k531 in k529 in k527 in k525 in k523 in k521 in doloop128 */
static void C_ccall f_532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),*((C_word*)lf[17]+1));}

/* k529 in k527 in k525 in k523 in k521 in doloop128 */
static void C_ccall f_530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(3));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:140: write */
t5=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* f_503 in k497 in finish-profile */
static void C_ccall f_503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_505,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t3=lf[0];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_563,a[2]=t5,a[3]=t2,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_563(t7,t1,lf[0]);}

/* f_505 */
static void C_ccall f_505(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_505,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_513,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_513(t7,t1,C_fix(0));}

/* ##sys#register-profile-info */
static void C_ccall f_329(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_329,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_333,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_346,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
t6=t5;
f_346(2,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_381,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:61: number->string */
C_number_to_string(3,0,t6,C_fix((C_word)C_getpid()));}}
else{
t5=t4;
f_333(2,t5,C_SCHEME_UNDEFINED);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_profiler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("profiler_toplevel"));
C_check_nursery_minimum(17);
if(!C_demand(17)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(184)){
C_save(t1);
C_rereclaim2(184*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(17);
C_initialize_lf(lf,23);
lf[2]=C_h_intern(&lf[2],23,"\003sysprofile-append-mode");
lf[3]=C_h_intern(&lf[3],25,"\003sysregister-profile-info");
lf[4]=C_h_intern(&lf[4],11,"make-vector");
lf[5]=C_h_intern(&lf[5],18,"\003sysfinish-profile");
lf[6]=C_h_intern(&lf[6],25,"\003sysimplicit-exit-handler");
lf[7]=C_h_intern(&lf[7],16,"\003sysexit-handler");
lf[8]=C_h_intern(&lf[8],17,"\003sysstring-append");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\010PROFILE.");
lf[10]=C_h_intern(&lf[10],28,"\003sysset-profile-info-vector!");
lf[11]=C_h_intern(&lf[11],20,"most-positive-fixnum");
lf[12]=C_h_intern(&lf[12],17,"\003sysprofile-entry");
lf[13]=C_h_intern(&lf[13],16,"\003sysprofile-exit");
lf[14]=C_decode_literal(C_heaptop,"\376U0.0\000");
lf[15]=C_h_intern(&lf[15],19,"with-output-to-file");
lf[16]=C_h_intern(&lf[16],19,"\003syswrite-char/port");
lf[17]=C_h_intern(&lf[17],19,"\003sysstandard-output");
lf[18]=C_h_intern(&lf[18],5,"write");
lf[19]=C_h_intern(&lf[19],7,"\000append");
lf[20]=C_h_intern(&lf[20],9,"\003sysprint");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\033[debug] writing profile...\012");
lf[22]=C_h_intern(&lf[22],18,"\003sysstandard-error");
C_register_lf2(lf,23,create_ptable());
t2=lf[0] /* ##sys#profile-vector-list */ =C_SCHEME_END_OF_LIST;;
t3=lf[1] /* ##sys#profile-name */ =C_SCHEME_FALSE;;
t4=C_set_block_item(lf[2] /* ##sys#profile-append-mode */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#register-profile-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_329,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#set-profile-info-vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_383,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[11]+1);
t8=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#profile-entry ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_396,a[2]=t7,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[13]+1 /* (set! ##sys#profile-exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_446,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[15]+1);
t11=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#finish-profile ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_494,a[2]=t10,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_UNDEFINED);}

/* doloop128 */
static void C_fcall f_513(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_513,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_522,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(40),*((C_word*)lf[17]+1));}}

/* k334 in k332 in register-profile-info */
static void C_ccall f_335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_335,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,lf[0]);
t3=C_mutate(&lf[0] /* (set! ##sys#profile-vector-list ...) */,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* k332 in register-profile-info */
static void C_ccall f_333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_fixnum_times(((C_word*)t0)[3],C_fix(5));
/* profiler.scm:73: make-vector */
t4=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_fix(0));}

/* k380 in register-profile-info */
static void C_ccall f_381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[9],t1);}

/* ##sys#set-profile-info-vector! */
static void C_ccall f_383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_383,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_times(t3,C_fix(5));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t2,t5,t4));}

/* for-each-loop116 */
static void C_fcall f_563(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_563,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_572,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* profiler.scm:129: g117 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##sys#profile-entry */
static void C_ccall f_396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_396,4,t0,t1,t2,t3);}
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(1));
t6=C_slot(t3,t5);
t7=C_u_fixnum_plus(t4,C_fix(2));
t8=C_u_fixnum_plus(t4,C_fix(4));
t9=C_slot(t3,t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_412,a[2]=t9,a[3]=t3,a[4]=t7,a[5]=t1,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t11=C_eqp(((C_word*)t0)[2],t6);
if(C_truep(t11)){
t12=t10;
f_412(t12,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t12=C_u_fixnum_plus(t6,C_fix(1));
t13=t10;
f_412(t13,C_i_set_i_slot(t3,t5,t12));}}
else{
t11=t10;
f_412(t11,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}}

/* k571 in for-each-loop116 */
static void C_ccall f_572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_563(t3,((C_word*)t0)[4],t2);}

/* ##sys#finish-profile */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_498,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fudge(C_fix(13)))){
/* profiler.scm:126: ##sys#print */
t3=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[21],C_SCHEME_FALSE,*((C_word*)lf[22]+1));}
else{
t3=t2;
f_498(2,t3,C_SCHEME_UNDEFINED);}}

/* f_365 in k349 in k347 in k344 in register-profile-info */
static void C_ccall f_365(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_365r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_365r(t0,t1,t2);}}

static void C_ccall f_365r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_368,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm:66: ##sys#finish-profile */
t4=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k497 in finish-profile */
static void C_ccall f_498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_503,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[1],t2,lf[19]);}
else{
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],lf[1],t2);}}

/* k367 */
static void C_ccall f_368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k359 */
static void C_ccall f_360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* profiler.scm:71: oldieh */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k411 in profile-entry */
static void C_fcall f_412(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_412,NULL,2,t0,t1);}
t2=C_eqp(C_fix(0),((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_bytevector(&a,1,C_fix(4));
t4=stub82(t3);
t5=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],t6));}
else{
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],t3));}}

/* k344 in register-profile-info */
static void C_ccall f_346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_346,2,t0,t1);}
t2=C_mutate(&lf[1] /* (set! ##sys#profile-name ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:62: ##sys#exit-handler */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k347 in k344 in register-profile-info */
static void C_ccall f_348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_350,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:63: ##sys#implicit-exit-handler */
t3=*((C_word*)lf[6]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k521 in doloop128 */
static void C_ccall f_522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* profiler.scm:136: write */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k523 in k521 in doloop128 */
static void C_ccall f_524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),*((C_word*)lf[17]+1));}

/* k525 in k523 in k521 in doloop128 */
static void C_ccall f_526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_slot(((C_word*)t0)[5],t3);
/* profiler.scm:138: write */
t5=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k527 in k525 in k523 in k521 in doloop128 */
static void C_ccall f_528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),*((C_word*)lf[17]+1));}

/* ##sys#profile-exit */
static void C_ccall f_446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_446,4,t0,t1,t2,t3);}
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(2));
t6=C_u_fixnum_plus(t4,C_fix(3));
t7=C_u_fixnum_plus(t4,C_fix(4));
t8=C_slot(t3,t7);
t9=C_u_fixnum_difference(t8,C_fix(1));
t10=C_i_set_i_slot(t3,t7,t9);
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=C_slot(t3,t6);
t13=C_eqp(t12,C_fix(0));
t14=(C_truep(t13)?lf[14]:t12);
t15=C_a_i_bytevector(&a,1,C_fix(4));
t16=stub82(t15);
t17=C_slot(t3,t5);
t18=C_a_i_flonum_difference(&a,2,t16,t17);
t19=C_a_i_flonum_plus(&a,2,t14,t18);
t20=t1;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,C_i_setslot(t3,t6,t19));}
else{
t12=C_SCHEME_UNDEFINED;
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}

/* k351 in k349 in k347 in k344 in register-profile-info */
static void C_ccall f_352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_357,a[2]=((C_word*)t0)[2],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:68: ##sys#implicit-exit-handler */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* f_357 in k351 in k349 in k347 in k344 in register-profile-info */
static void C_ccall f_357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_360,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:70: ##sys#finish-profile */
t3=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k349 in k347 in k344 in register-profile-info */
static void C_ccall f_350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_352,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_365,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:64: ##sys#exit-handler */
t4=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[33] = {
{"f_537:profiler_2escm",(void*)f_537},
{"f_534:profiler_2escm",(void*)f_534},
{"f_532:profiler_2escm",(void*)f_532},
{"f_530:profiler_2escm",(void*)f_530},
{"f_503:profiler_2escm",(void*)f_503},
{"f_505:profiler_2escm",(void*)f_505},
{"f_329:profiler_2escm",(void*)f_329},
{"toplevel:profiler_2escm",(void*)C_profiler_toplevel},
{"f_513:profiler_2escm",(void*)f_513},
{"f_335:profiler_2escm",(void*)f_335},
{"f_333:profiler_2escm",(void*)f_333},
{"f_381:profiler_2escm",(void*)f_381},
{"f_383:profiler_2escm",(void*)f_383},
{"f_563:profiler_2escm",(void*)f_563},
{"f_396:profiler_2escm",(void*)f_396},
{"f_572:profiler_2escm",(void*)f_572},
{"f_494:profiler_2escm",(void*)f_494},
{"f_365:profiler_2escm",(void*)f_365},
{"f_498:profiler_2escm",(void*)f_498},
{"f_368:profiler_2escm",(void*)f_368},
{"f_360:profiler_2escm",(void*)f_360},
{"f_412:profiler_2escm",(void*)f_412},
{"f_346:profiler_2escm",(void*)f_346},
{"f_348:profiler_2escm",(void*)f_348},
{"f_522:profiler_2escm",(void*)f_522},
{"f_524:profiler_2escm",(void*)f_524},
{"f_526:profiler_2escm",(void*)f_526},
{"f_528:profiler_2escm",(void*)f_528},
{"f_446:profiler_2escm",(void*)f_446},
{"f_352:profiler_2escm",(void*)f_352},
{"f_357:profiler_2escm",(void*)f_357},
{"f_350:profiler_2escm",(void*)f_350},
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
S|  for-each		1
o|eliminated procedure checks: 18 
o|specializations:
o|  1 (string-append string string)
o|Removed `not' forms: 1 
o|substituted constant variable: a378 
o|inlining procedure: "(profiler.scm:100) cpu-ms" 
o|contracted procedure: k433 
o|inlining procedure: k431 
o|inlining procedure: k431 
o|inlining procedure: k461 
o|inlining procedure: "(profiler.scm:115) cpu-ms" 
o|inlining procedure: k461 
o|inlining procedure: k516 
o|inlining procedure: k516 
o|inlining procedure: k566 
o|inlining procedure: k566 
o|propagated global variable: g123125 ##sys#profile-vector-list 
o|inlining procedure: k583 
o|inlining procedure: k583 
o|replaced variables: 19 
o|removed binding forms: 15 
o|removed side-effect free assignment to unused variable: cpu-ms 
o|inlining procedure: k431 
o|substituted constant variable: a430594 
o|substituted constant variable: a582603 
o|substituted constant variable: a582604 
o|replaced variables: 2 
o|removed binding forms: 23 
o|inlining procedure: k428 
o|substituted constant variable: a430605 
o|removed binding forms: 6 
o|contracted procedure: k482 
o|removed binding forms: 3 
o|simplifications: ((if . 1) (##core#call . 55)) 
o|  call simplifications:
o|    ##sys#fudge
o|    pair?
o|    ##sys#size
o|    fx>=
o|    write-char	5
o|    fx-
o|    fp-
o|    fp+
o|    ##sys#slot	10
o|    eq?	4
o|    fx+	11
o|    ##sys#setislot	5
o|    ##sys#setslot	3
o|    string?
o|    number->string
o|    apply	3
o|    fx*	4
o|    cons
o|contracted procedure: k337 
o|contracted procedure: k341 
o|contracted procedure: k372 
o|contracted procedure: k389 
o|contracted procedure: k399 
o|contracted procedure: k401 
o|contracted procedure: k403 
o|contracted procedure: k405 
o|contracted procedure: k407 
o|contracted procedure: k409 
o|contracted procedure: k419 
o|contracted procedure: k421 
o|contracted procedure: k439 
o|contracted procedure: k431 
o|contracted procedure: k449 
o|contracted procedure: k451 
o|contracted procedure: k453 
o|contracted procedure: k455 
o|contracted procedure: k491 
o|contracted procedure: k457 
o|contracted procedure: k459 
o|contracted procedure: k464 
o|contracted procedure: k467 
o|contracted procedure: k487 
o|contracted procedure: k476 
o|contracted procedure: k485 
o|contracted procedure: k479 
o|contracted procedure: k473 
o|contracted procedure: k507 
o|contracted procedure: k518 
o|contracted procedure: k542 
o|contracted procedure: k548 
o|contracted procedure: k545 
o|contracted procedure: k554 
o|contracted procedure: k551 
o|contracted procedure: k557 
o|contracted procedure: k568 
o|contracted procedure: k577 
o|contracted procedure: k580 
o|contracted procedure: k585 
o|simplifications: ((let . 4)) 
o|removed binding forms: 40 
o|inlining procedure: k413 
o|inlining procedure: k413 
o|replaced variables: 1 
o|removed binding forms: 3 
o|customizable procedures: (for-each-loop116140 doloop128129 k411) 
o|calls to known targets: 10 
o|fast box initializations: 2 
o|fast global references: 5 
o|fast global assignments: 4 
*/
/* end of file */
