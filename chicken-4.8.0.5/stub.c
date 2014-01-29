/* Generated from stub.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: stub.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file stub.c
   unit: default_5fstub
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[1];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_180)
static void C_ccall f_180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_182)
static void C_ccall f_182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_194)
static void C_ccall f_194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_default_5fstub_toplevel)
C_externexport void C_ccall C_default_5fstub_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_184)
static void C_ccall f_184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_186)
static void C_ccall f_186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_188)
static void C_ccall f_188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_190)
static void C_fcall f_190(C_word t0,C_word t1) C_noret;
C_noret_decl(f_178)
static void C_ccall f_178(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_190)
static void C_fcall trf_190(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_190(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_190(t0,t1);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* k179 in k177 */
static void C_ccall f_180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_182,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k181 in k179 in k177 */
static void C_ccall f_182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_184,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k193 in loop in k185 in k183 in k181 in k179 in k177 */
static void C_ccall f_194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* stub.scm:33: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_190(t2,((C_word*)t0)[3]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_default_5fstub_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_default_5fstub_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("default_5fstub_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(10)){
C_save(t1);
C_rereclaim2(10*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,1);
lf[0]=C_h_intern(&lf[0],14,"return-to-host");
C_register_lf2(lf,1,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_178,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k183 in k181 in k179 in k177 */
static void C_ccall f_184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k185 in k183 in k181 in k179 in k177 */
static void C_ccall f_186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_188,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_190,a[2]=t4,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_190(t6,t2);}

/* k187 in k185 in k183 in k181 in k179 in k177 */
static void C_ccall f_188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* loop in k185 in k183 in k181 in k179 in k177 */
static void C_fcall f_190(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_190,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_194,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* stub.scm:33: return-to-host */
t3=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k177 */
static void C_ccall f_178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[10] = {
{"f_180:stub_2escm",(void*)f_180},
{"f_182:stub_2escm",(void*)f_182},
{"f_194:stub_2escm",(void*)f_194},
{"toplevel:stub_2escm",(void*)C_default_5fstub_toplevel},
{"f_184:stub_2escm",(void*)f_184},
{"f_186:stub_2escm",(void*)f_186},
{"f_188:stub_2escm",(void*)f_188},
{"f_190:stub_2escm",(void*)f_190},
{"f_178:stub_2escm",(void*)f_178},
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
o|replaced variables: 1 
o|removed binding forms: 1 
o|removed binding forms: 1 
o|customizable procedures: (loop0) 
o|calls to known targets: 2 
o|fast box initializations: 1 
*/
/* end of file */
