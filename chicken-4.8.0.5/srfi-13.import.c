/* Generated from srfi-13.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: srfi-13.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file srfi-13.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[11];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,19),40,102,95,50,51,50,32,102,111,114,109,51,32,114,52,32,99,53,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_216)
static void C_ccall f_216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_214)
static void C_ccall f_214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_218)
static void C_ccall f_218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_230)
static void C_ccall f_230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_232)
static void C_ccall f_232(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_235)
static void C_ccall f_235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_227)
static void C_ccall f_227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_247)
static void C_ccall f_247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_249)
static void C_ccall f_249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_251)
static void C_ccall f_251(C_word c,C_word t0,C_word t1) C_noret;

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

/* k215 in k213 */
static void C_ccall f_216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_230,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_232,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* srfi-13.import.scm:114: ##sys#er-transformer */
((C_proc3)C_fast_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t4,t5);}

/* k213 */
static void C_ccall f_214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_216,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k217 in k215 in k213 */
static void C_ccall f_218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k229 in k215 in k213 */
static void C_ccall f_230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.import.scm:113: ##sys#ensure-transformer */
((C_proc4)C_fast_retrieve_symbol_proc(lf[4]))(4,*((C_word*)lf[4]+1),((C_word*)t0)[2],t1,lf[0]);}

/* f_232 in k215 in k213 */
static void C_ccall f_232(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_232,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_235,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.import.scm:116: ##sys#check-syntax */
((C_proc5)C_fast_retrieve_symbol_proc(lf[8]))(5,*((C_word*)lf[8]+1),t5,lf[0],t2,lf[9]);}

/* k234 */
static void C_ccall f_235(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_235,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_i_cadddr(((C_word*)t0)[2]);
t5=C_i_cddddr(((C_word*)t0)[2]);
t6=C_i_car(t5);
t7=C_i_cddddr(((C_word*)t0)[2]);
t8=C_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_247,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t6,a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.import.scm:122: r */
t10=((C_word*)t0)[4];
((C_proc3)C_fast_retrieve_proc(t10))(3,t10,t9,lf[7]);}

/* k226 in k215 in k213 */
static void C_ccall f_227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_227,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[0],C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_list(&a,1,t2);
/* srfi-13.import.scm:27: ##sys#register-primitive-module */
((C_proc5)C_fast_retrieve_symbol_proc(lf[1]))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[2],lf[3],t3);}

/* k246 in k234 */
static void C_ccall f_247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.import.scm:123: r */
t3=((C_word*)t0)[8];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[6]);}

/* k248 in k246 in k234 */
static void C_ccall f_249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_251,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.import.scm:124: r */
t3=((C_word*)t0)[9];
((C_proc3)C_fast_retrieve_proc(t3))(3,t3,t2,lf[5]);}

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
if(!C_demand_2(1231)){
C_save(t1);
C_rereclaim2(1231*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,11);
lf[0]=C_h_intern(&lf[0],20,"let-string-start+end");
lf[1]=C_h_intern(&lf[1],29,"\003sysregister-primitive-module");
lf[2]=C_h_intern(&lf[2],7,"srfi-13");
lf[3]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\024check-substring-spec\376\003\000\000\002\376\001\000\000\010kmp-step\376\003\000\000\002\376\001\000\000\027make-kmp-restart-vecto"
"r\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\012string-any\376\003\000\000\002\376\001\000\000\024string-append/shared\376\003\000\000\002\376\001"
"\000\000\012string-ci<\376\003\000\000\002\376\001\000\000\013string-ci<=\376\003\000\000\002\376\001\000\000\013string-ci<>\376\003\000\000\002\376\001\000\000\012string-ci=\376\003\000\000\002"
"\376\001\000\000\012string-ci>\376\003\000\000\002\376\001\000\000\013string-ci>=\376\003\000\000\002\376\001\000\000\016string-compare\376\003\000\000\002\376\001\000\000\021string-com"
"pare-ci\376\003\000\000\002\376\001\000\000\022string-concatenate\376\003\000\000\002\376\001\000\000\032string-concatenate-reverse\376\003\000\000\002\376\001\000\000"
"!string-concatenate-reverse/shared\376\003\000\000\002\376\001\000\000\031string-concatenate/shared\376\003\000\000\002\376\001\000\000\017s"
"tring-contains\376\003\000\000\002\376\001\000\000\022string-contains-ci\376\003\000\000\002\376\001\000\000\013string-copy\376\003\000\000\002\376\001\000\000\014string-"
"copy!\376\003\000\000\002\376\001\000\000\014string-count\376\003\000\000\002\376\001\000\000\015string-delete\376\003\000\000\002\376\001\000\000\017string-downcase\376\003\000\000\002"
"\376\001\000\000\020string-downcase!\376\003\000\000\002\376\001\000\000\013string-drop\376\003\000\000\002\376\001\000\000\021string-drop-right\376\003\000\000\002\376\001\000\000\014s"
"tring-every\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\015string-filter\376\003\000\000\002\376\001\000\000\013string-fold\376\003\000"
"\000\002\376\001\000\000\021string-fold-right\376\003\000\000\002\376\001\000\000\017string-for-each\376\003\000\000\002\376\001\000\000\025string-for-each-index"
"\376\003\000\000\002\376\001\000\000\014string-index\376\003\000\000\002\376\001\000\000\022string-index-right\376\003\000\000\002\376\001\000\000\013string-join\376\003\000\000\002\376\001\000\000"
"\031string-kmp-partial-search\376\003\000\000\002\376\001\000\000\012string-map\376\003\000\000\002\376\001\000\000\013string-map!\376\003\000\000\002\376\001\000\000\014str"
"ing-null\077\376\003\000\000\002\376\001\000\000\012string-pad\376\003\000\000\002\376\001\000\000\020string-pad-right\376\003\000\000\002\376\001\000\000\034string-parse-fi"
"nal-start+end\376\003\000\000\002\376\001\000\000\026string-parse-start+end\376\003\000\000\002\376\001\000\000\021string-prefix-ci\077\376\003\000\000\002\376\001\000"
"\000\024string-prefix-length\376\003\000\000\002\376\001\000\000\027string-prefix-length-ci\376\003\000\000\002\376\001\000\000\016string-prefix\077\376"
"\003\000\000\002\376\001\000\000\016string-replace\376\003\000\000\002\376\001\000\000\016string-reverse\376\003\000\000\002\376\001\000\000\017string-reverse!\376\003\000\000\002\376\001\000"
"\000\013string-skip\376\003\000\000\002\376\001\000\000\021string-skip-right\376\003\000\000\002\376\001\000\000\021string-suffix-ci\077\376\003\000\000\002\376\001\000\000\024str"
"ing-suffix-length\376\003\000\000\002\376\001\000\000\027string-suffix-length-ci\376\003\000\000\002\376\001\000\000\016string-suffix\077\376\003\000\000\002\376"
"\001\000\000\017string-tabulate\376\003\000\000\002\376\001\000\000\013string-take\376\003\000\000\002\376\001\000\000\021string-take-right\376\003\000\000\002\376\001\000\000\020str"
"ing-titlecase\376\003\000\000\002\376\001\000\000\021string-titlecase!\376\003\000\000\002\376\001\000\000\017string-tokenize\376\003\000\000\002\376\001\000\000\013strin"
"g-trim\376\003\000\000\002\376\001\000\000\020string-trim-both\376\003\000\000\002\376\001\000\000\021string-trim-right\376\003\000\000\002\376\001\000\000\015string-unfo"
"ld\376\003\000\000\002\376\001\000\000\023string-unfold-right\376\003\000\000\002\376\001\000\000\015string-upcase\376\003\000\000\002\376\001\000\000\016string-upcase!\376\003"
"\000\000\002\376\001\000\000\015string-xcopy!\376\003\000\000\002\376\001\000\000\007string<\376\003\000\000\002\376\001\000\000\010string<=\376\003\000\000\002\376\001\000\000\010string<>\376\003\000\000\002\376"
"\001\000\000\007string=\376\003\000\000\002\376\001\000\000\007string>\376\003\000\000\002\376\001\000\000\010string>=\376\003\000\000\002\376\001\000\000\022substring-spec-ok\077\376\003\000\000\002\376"
"\001\000\000\020substring/shared\376\003\000\000\002\376\001\000\000\012xsubstring\376\377\016");
lf[4]=C_h_intern(&lf[4],22,"\003sysensure-transformer");
lf[5]=C_h_intern(&lf[5],28,"string-parse-final-start+end");
lf[6]=C_h_intern(&lf[6],22,"string-parse-start+end");
lf[7]=C_h_intern(&lf[7],7,"receive");
lf[8]=C_h_intern(&lf[8],16,"\003syscheck-syntax");
lf[9]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[10]=C_h_intern(&lf[10],18,"\003syser-transformer");
C_register_lf2(lf,11,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_214,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k250 in k248 in k246 in k234 */
static void C_ccall f_251(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_251,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_car(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,3,t3,t4,t6);
t8=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t9=C_a_i_cons(&a,2,t8,((C_word*)t0)[7]);
t10=C_a_i_cons(&a,2,t7,t9);
t11=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_cons(&a,2,((C_word*)t0)[9],t10));}
else{
t3=C_a_i_list(&a,4,t1,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[7]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t4);
t6=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[9],t5));}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[12] = {
{"f_216:srfi_2d13_2eimport_2escm",(void*)f_216},
{"f_214:srfi_2d13_2eimport_2escm",(void*)f_214},
{"f_218:srfi_2d13_2eimport_2escm",(void*)f_218},
{"f_230:srfi_2d13_2eimport_2escm",(void*)f_230},
{"f_232:srfi_2d13_2eimport_2escm",(void*)f_232},
{"f_235:srfi_2d13_2eimport_2escm",(void*)f_235},
{"f_227:srfi_2d13_2eimport_2escm",(void*)f_227},
{"f_247:srfi_2d13_2eimport_2escm",(void*)f_247},
{"f_249:srfi_2d13_2eimport_2escm",(void*)f_249},
{"toplevel:srfi_2d13_2eimport_2escm",(void*)C_toplevel},
{"f_251:srfi_2d13_2eimport_2escm",(void*)f_251},
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
o|eliminated procedure checks: 11 
o|specializations:
o|  1 (cadr (pair * pair))
o|  1 (car pair)
o|inlining procedure: k252 
o|inlining procedure: k252 
o|replaced variables: 2 
o|removed binding forms: 3 
o|simplifications: ((##core#call . 21)) 
o|  call simplifications:
o|    cadr
o|    cadddr
o|    car
o|    cddddr	2
o|    cdr
o|    cddr
o|    pair?
o|    caddr	2
o|    ##sys#cons	6
o|    ##sys#list	5
o|contracted procedure: k223 
o|contracted procedure: k220 
o|contracted procedure: k236 
o|contracted procedure: k238 
o|contracted procedure: k240 
o|contracted procedure: k300 
o|contracted procedure: k242 
o|contracted procedure: k297 
o|contracted procedure: k244 
o|contracted procedure: k294 
o|contracted procedure: k255 
o|contracted procedure: k274 
o|contracted procedure: k265 
o|contracted procedure: k271 
o|contracted procedure: k268 
o|contracted procedure: k262 
o|contracted procedure: k291 
o|contracted procedure: k288 
o|contracted procedure: k285 
o|simplifications: ((let . 1)) 
o|removed binding forms: 19 
o|replaced variables: 2 
o|removed binding forms: 2 
*/
/* end of file */
