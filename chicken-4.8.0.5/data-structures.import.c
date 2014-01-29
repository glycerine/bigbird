/* Generated from data-structures.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: data-structures.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file data-structures.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[3];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_176)
static void C_ccall f_176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_174)
static void C_ccall f_174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_172)
static void C_ccall f_172(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* k175 in k173 in k171 */
static void C_ccall f_176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

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
if(!C_demand_2(813)){
C_save(t1);
C_rereclaim2(813*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],15,"data-structures");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010->string\376\003\000\000\002\376\001\000\000\011alist-ref\376\003\000\000\002\376\001\000\000\015alist-update!\376\003\000\000\002\376\001\000\000\014alist-upda"
"te\376\003\000\000\002\376\001\000\000\007always\077\376\003\000\000\002\376\001\000\000\004any\077\376\003\000\000\002\376\001\000\000\005atom\077\376\003\000\000\002\376\001\000\000\015binary-search\376\003\000\000\002\376\001\000\000"
"\007butlast\376\003\000\000\002\376\001\000\000\004chop\376\003\000\000\002\376\001\000\000\012complement\376\003\000\000\002\376\001\000\000\007compose\376\003\000\000\002\376\001\000\000\010compress\376\003\000"
"\000\002\376\001\000\000\004conc\376\003\000\000\002\376\001\000\000\007conjoin\376\003\000\000\002\376\001\000\000\012constantly\376\003\000\000\002\376\001\000\000\007disjoin\376\003\000\000\002\376\001\000\000\004each\376"
"\003\000\000\002\376\001\000\000\007flatten\376\003\000\000\002\376\001\000\000\004flip\376\003\000\000\002\376\001\000\000\010identity\376\003\000\000\002\376\001\000\000\013intersperse\376\003\000\000\002\376\001\000\000\004j"
"oin\376\003\000\000\002\376\001\000\000\013list->queue\376\003\000\000\002\376\001\000\000\010list-of\077\376\003\000\000\002\376\001\000\000\012make-queue\376\003\000\000\002\376\001\000\000\005merge\376\003\000"
"\000\002\376\001\000\000\006merge!\376\003\000\000\002\376\001\000\000\006never\077\376\003\000\000\002\376\001\000\000\005none\077\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\013queue->list\376\003\000\000"
"\002\376\001\000\000\012queue-add!\376\003\000\000\002\376\001\000\000\014queue-empty\077\376\003\000\000\002\376\001\000\000\013queue-first\376\003\000\000\002\376\001\000\000\012queue-last\376"
"\003\000\000\002\376\001\000\000\014queue-length\376\003\000\000\002\376\001\000\000\020queue-push-back!\376\003\000\000\002\376\001\000\000\025queue-push-back-list!\376\003"
"\000\000\002\376\001\000\000\015queue-remove!\376\003\000\000\002\376\001\000\000\006queue\077\376\003\000\000\002\376\001\000\000\006rassoc\376\003\000\000\002\376\001\000\000\025reverse-string-ap"
"pend\376\003\000\000\002\376\001\000\000\007shuffle\376\003\000\000\002\376\001\000\000\004sort\376\003\000\000\002\376\001\000\000\005sort!\376\003\000\000\002\376\001\000\000\007sorted\077\376\003\000\000\002\376\001\000\000\020top"
"ological-sort\376\003\000\000\002\376\001\000\000\014string-chomp\376\003\000\000\002\376\001\000\000\013string-chop\376\003\000\000\002\376\001\000\000\017string-compare"
"3\376\003\000\000\002\376\001\000\000\022string-compare3-ci\376\003\000\000\002\376\001\000\000\022string-intersperse\376\003\000\000\002\376\001\000\000\014string-split\376"
"\003\000\000\002\376\001\000\000\020string-translate\376\003\000\000\002\376\001\000\000\021string-translate\052\376\003\000\000\002\376\001\000\000\016substring-ci=\077\376\003\000\000"
"\002\376\001\000\000\017substring-index\376\003\000\000\002\376\001\000\000\022substring-index-ci\376\003\000\000\002\376\001\000\000\013substring=\077\376\003\000\000\002\376\001\000\000\005"
"tail\077\376\377\016");
C_register_lf2(lf,3,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_172,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k173 in k171 */
static void C_ccall f_174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* data-structures.import.scm:27: ##sys#register-primitive-module */
((C_proc4)C_fast_retrieve_symbol_proc(lf[0]))(4,*((C_word*)lf[0]+1),t2,lf[1],lf[2]);}

/* k171 */
static void C_ccall f_172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[5] = {
{"f_176:data_2dstructures_2eimport_2escm",(void*)f_176},
{"toplevel:data_2dstructures_2eimport_2escm",(void*)C_toplevel},
{"f_174:data_2dstructures_2eimport_2escm",(void*)f_174},
{"f_172:data_2dstructures_2eimport_2escm",(void*)f_172},
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
*/
/* end of file */
