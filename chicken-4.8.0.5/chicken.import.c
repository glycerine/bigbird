/* Generated from chicken.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.import.c
   used units: library eval
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[4];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_176)
static void C_ccall f_176(C_word c,C_word t0,C_word t1) C_noret;
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
if(!C_demand_2(2786)){
C_save(t1);
C_rereclaim2(2786*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,4);
lf[0]=C_h_intern(&lf[0],29,"\003sysregister-primitive-module");
lf[1]=C_h_intern(&lf[1],7,"chicken");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005abort\376\003\000\000\002\376\001\000\000\004add1\376\003\000\000\002\376\001\000\000\011argc+argv\376\003\000\000\002\376\001\000\000\004argv\376\003\000\000\002\376\001\000\000\020arithmet"
"ic-shift\376\003\000\000\002\376\001\000\000\010bit-set\077\376\003\000\000\002\376\001\000\000\013bitwise-and\376\003\000\000\002\376\001\000\000\013bitwise-ior\376\003\000\000\002\376\001\000\000\013bi"
"twise-not\376\003\000\000\002\376\001\000\000\013bitwise-xor\376\003\000\000\002\376\001\000\000\014blob->string\376\003\000\000\002\376\001\000\000\011blob-size\376\003\000\000\002\376\001\000\000"
"\005blob\077\376\003\000\000\002\376\001\000\000\006blob=\077\376\003\000\000\002\376\001\000\000\016build-platform\376\003\000\000\002\376\001\000\000\011c-runtime\376\003\000\000\002\376\001\000\000\007call/"
"cc\376\003\000\000\002\376\001\000\000\016case-sensitive\376\003\000\000\002\376\001\000\000\011char-name\376\003\000\000\002\376\001\000\000\014chicken-home\376\003\000\000\002\376\001\000\000\017chi"
"cken-version\376\003\000\000\002\376\001\000\000\026command-line-arguments\376\003\000\000\002\376\001\000\000\023condition-predicate\376\003\000\000\002\376\001"
"\000\000\033condition-property-accessor\376\003\000\000\002\376\001\000\000\012condition\077\376\003\000\000\002\376\001\000\000\017condition->list\376\003\000\000\002"
"\376\001\000\000\024continuation-capture\376\003\000\000\002\376\001\000\000\022continuation-graft\376\003\000\000\002\376\001\000\000\023continuation-retu"
"rn\376\003\000\000\002\376\001\000\000\015continuation\077\376\003\000\000\002\376\001\000\000\017copy-read-table\376\003\000\000\002\376\001\000\000\010cpu-time\376\003\000\000\002\376\001\000\000\022cu"
"rrent-error-port\376\003\000\000\002\376\001\000\000\031current-exception-handler\376\003\000\000\002\376\001\000\000\027current-gc-millisec"
"onds\376\003\000\000\002\376\001\000\000\024current-milliseconds\376\003\000\000\002\376\001\000\000\022current-read-table\376\003\000\000\002\376\001\000\000\017current-"
"seconds\376\003\000\000\002\376\001\000\000\022define-reader-ctor\376\003\000\000\002\376\001\000\000\013delete-file\376\003\000\000\002\376\001\000\000\021directory-exis"
"ts\077\376\003\000\000\002\376\001\000\000\017enable-warnings\376\003\000\000\002\376\001\000\000\007equal=\077\376\003\000\000\002\376\001\000\000\024er-macro-transformer\376\003\000\000\002"
"\376\001\000\000\005errno\376\003\000\000\002\376\001\000\000\005error\376\003\000\000\002\376\001\000\000\004exit\376\003\000\000\002\376\001\000\000\014exit-handler\376\003\000\000\002\376\001\000\000\006expand\376\003\000"
"\000\002\376\001\000\000\025extension-information\376\003\000\000\002\376\001\000\000\010feature\077\376\003\000\000\002\376\001\000\000\010features\376\003\000\000\002\376\001\000\000\014file-e"
"xists\077\376\003\000\000\002\376\001\000\000\007finite\077\376\003\000\000\002\376\001\000\000\013fixnum-bits\376\003\000\000\002\376\001\000\000\020fixnum-precision\376\003\000\000\002\376\001\000\000\007"
"fixnum\077\376\003\000\000\002\376\001\000\000\030flonum-decimal-precision\376\003\000\000\002\376\001\000\000\016flonum-epsilon\376\003\000\000\002\376\001\000\000\037flonu"
"m-maximum-decimal-exponent\376\003\000\000\002\376\001\000\000\027flonum-maximum-exponent\376\003\000\000\002\376\001\000\000\037flonum-mini"
"mum-decimal-exponent\376\003\000\000\002\376\001\000\000\027flonum-minimum-exponent\376\003\000\000\002\376\001\000\000\020flonum-precision\376"
"\003\000\000\002\376\001\000\000\026flonum-print-precision\376\003\000\000\002\376\001\000\000\014flonum-radix\376\003\000\000\002\376\001\000\000\007flonum\077\376\003\000\000\002\376\001\000\000\014"
"flush-output\376\003\000\000\002\376\001\000\000\005foldl\376\003\000\000\002\376\001\000\000\005foldr\376\003\000\000\002\376\001\000\000\020force-finalizers\376\003\000\000\002\376\001\000\000\003fp"
"-\376\003\000\000\002\376\001\000\000\003fp\052\376\003\000\000\002\376\001\000\000\003fp/\376\003\000\000\002\376\001\000\000\003fp+\376\003\000\000\002\376\001\000\000\003fp<\376\003\000\000\002\376\001\000\000\004fp<=\376\003\000\000\002\376\001\000\000\003fp="
"\376\003\000\000\002\376\001\000\000\003fp>\376\003\000\000\002\376\001\000\000\004fp>=\376\003\000\000\002\376\001\000\000\005fpabs\376\003\000\000\002\376\001\000\000\006fpacos\376\003\000\000\002\376\001\000\000\006fpasin\376\003\000\000\002\376"
"\001\000\000\006fpatan\376\003\000\000\002\376\001\000\000\007fpatan2\376\003\000\000\002\376\001\000\000\005fpexp\376\003\000\000\002\376\001\000\000\006fpexpt\376\003\000\000\002\376\001\000\000\007fpfloor\376\003\000\000\002"
"\376\001\000\000\011fpceiling\376\003\000\000\002\376\001\000\000\005fpcos\376\003\000\000\002\376\001\000\000\012fpinteger\077\376\003\000\000\002\376\001\000\000\005fplog\376\003\000\000\002\376\001\000\000\005fpmax\376"
"\003\000\000\002\376\001\000\000\005fpmin\376\003\000\000\002\376\001\000\000\005fpneg\376\003\000\000\002\376\001\000\000\007fpround\376\003\000\000\002\376\001\000\000\005fpsin\376\003\000\000\002\376\001\000\000\006fpsqrt\376\003\000"
"\000\002\376\001\000\000\005fptan\376\003\000\000\002\376\001\000\000\012fptruncate\376\003\000\000\002\376\001\000\000\003fx-\376\003\000\000\002\376\001\000\000\003fx\052\376\003\000\000\002\376\001\000\000\003fx/\376\003\000\000\002\376\001\000\000"
"\003fx+\376\003\000\000\002\376\001\000\000\003fx<\376\003\000\000\002\376\001\000\000\004fx<=\376\003\000\000\002\376\001\000\000\003fx=\376\003\000\000\002\376\001\000\000\003fx>\376\003\000\000\002\376\001\000\000\004fx>=\376\003\000\000\002\376\001\000\000"
"\005fxand\376\003\000\000\002\376\001\000\000\007fxeven\077\376\003\000\000\002\376\001\000\000\005fxior\376\003\000\000\002\376\001\000\000\005fxmax\376\003\000\000\002\376\001\000\000\005fxmin\376\003\000\000\002\376\001\000\000\005fx"
"mod\376\003\000\000\002\376\001\000\000\005fxneg\376\003\000\000\002\376\001\000\000\005fxnot\376\003\000\000\002\376\001\000\000\006fxodd\077\376\003\000\000\002\376\001\000\000\005fxshl\376\003\000\000\002\376\001\000\000\005fxshr\376"
"\003\000\000\002\376\001\000\000\005fxxor\376\003\000\000\002\376\001\000\000\002gc\376\003\000\000\002\376\001\000\000\006gensym\376\003\000\000\002\376\001\000\000\003get\376\003\000\000\002\376\001\000\000\016get-call-chain\376"
"\003\000\000\002\376\001\000\000\026get-condition-property\376\003\000\000\002\376\001\000\000\030get-environment-variable\376\003\000\000\002\376\001\000\000\013get-k"
"eyword\376\003\000\000\002\376\001\000\000\021get-output-string\376\003\000\000\002\376\001\000\000\016get-properties\376\003\000\000\002\376\001\000\000\022getter-with-s"
"etter\376\003\000\000\002\376\001\000\000\025implicit-exit-handler\376\003\000\000\002\376\001\000\000\024ir-macro-transformer\376\003\000\000\002\376\001\000\000\017keyw"
"ord->string\376\003\000\000\002\376\001\000\000\015keyword-style\376\003\000\000\002\376\001\000\000\010keyword\077\376\003\000\000\002\376\001\000\000\014load-library\376\003\000\000\002\376"
"\001\000\000\015load-relative\376\003\000\000\002\376\001\000\000\014load-verbose\376\003\000\000\002\376\001\000\000\022machine-byte-order\376\003\000\000\002\376\001\000\000\014mac"
"hine-type\376\003\000\000\002\376\001\000\000\011make-blob\376\003\000\000\002\376\001\000\000\030make-composite-condition\376\003\000\000\002\376\001\000\000\016make-par"
"ameter\376\003\000\000\002\376\001\000\000\027make-property-condition\376\003\000\000\002\376\001\000\000\016maximum-flonum\376\003\000\000\002\376\001\000\000\021memory-"
"statistics\376\003\000\000\002\376\001\000\000\016minimum-flonum\376\003\000\000\002\376\001\000\000\022module-environment\376\003\000\000\002\376\001\000\000\024most-neg"
"ative-fixnum\376\003\000\000\002\376\001\000\000\024most-positive-fixnum\376\003\000\000\002\376\001\000\000\007on-exit\376\003\000\000\002\376\001\000\000\021open-input-"
"string\376\003\000\000\002\376\001\000\000\022open-output-string\376\003\000\000\002\376\001\000\000\024parentheses-synonyms\376\003\000\000\002\376\001\000\000\014port-c"
"losed\077\376\003\000\000\002\376\001\000\000\011port-name\376\003\000\000\002\376\001\000\000\015port-position\376\003\000\000\002\376\001\000\000\005port\077\376\003\000\000\002\376\001\000\000\005print\376\003"
"\000\000\002\376\001\000\000\020print-call-chain\376\003\000\000\002\376\001\000\000\023print-error-message\376\003\000\000\002\376\001\000\000\006print\052\376\003\000\000\002\376\001\000\000\025p"
"rocedure-information\376\003\000\000\002\376\001\000\000\014program-name\376\003\000\000\002\376\001\000\000\010promise\077\376\003\000\000\002\376\001\000\000\004put!\376\003\000\000\002\376"
"\001\000\000\004quit\376\003\000\000\002\376\001\000\000\021register-feature!\376\003\000\000\002\376\001\000\000\010remprop!\376\003\000\000\002\376\001\000\000\013rename-file\376\003\000\000\002\376"
"\001\000\000\004repl\376\003\000\000\002\376\001\000\000\013repl-prompt\376\003\000\000\002\376\001\000\000\017repository-path\376\003\000\000\002\376\001\000\000\007require\376\003\000\000\002\376\001\000\000"
"\005reset\376\003\000\000\002\376\001\000\000\015reset-handler\376\003\000\000\002\376\001\000\000\016return-to-host\376\003\000\000\002\376\001\000\000\024reverse-list->str"
"ing\376\003\000\000\002\376\001\000\000\016set-finalizer!\376\003\000\000\002\376\001\000\000\016set-gc-report!\376\003\000\000\002\376\001\000\000\036set-parameterized-r"
"ead-syntax!\376\003\000\000\002\376\001\000\000\016set-port-name!\376\003\000\000\002\376\001\000\000\020set-read-syntax!\376\003\000\000\002\376\001\000\000\026set-sharp"
"-read-syntax!\376\003\000\000\002\376\001\000\000\006setter\376\003\000\000\002\376\001\000\000\006signal\376\003\000\000\002\376\001\000\000\006signum\376\003\000\000\002\376\001\000\000\012singleste"
"p\376\003\000\000\002\376\001\000\000\015software-type\376\003\000\000\002\376\001\000\000\020software-version\376\003\000\000\002\376\001\000\000\014string->blob\376\003\000\000\002\376\001\000"
"\000\017string->keyword\376\003\000\000\002\376\001\000\000\031string->uninterned-symbol\376\003\000\000\002\376\001\000\000\014strip-syntax\376\003\000\000\002\376"
"\001\000\000\004sub1\376\003\000\000\002\376\001\000\000\011subvector\376\003\000\000\002\376\001\000\000\015symbol-append\376\003\000\000\002\376\001\000\000\015symbol-escape\376\003\000\000\002\376\001"
"\000\000\014symbol-plist\376\003\000\000\002\376\001\000\000\014syntax-error\376\003\000\000\002\376\001\000\000\006system\376\003\000\000\002\376\001\000\000\023unregister-featur"
"e!\376\003\000\000\002\376\001\000\000\015vector-resize\376\003\000\000\002\376\001\000\000\014vector-copy!\376\003\000\000\002\376\001\000\000\004void\376\003\000\000\002\376\001\000\000\007warning\376\003"
"\000\000\002\376\001\000\000\014eval-handler\376\003\000\000\002\376\001\000\000\024er-macro-transformer\376\003\000\000\002\376\001\000\000\024ir-macro-transformer"
"\376\003\000\000\002\376\001\000\000\026dynamic-load-libraries\376\003\000\000\002\376\001\000\000\026with-exception-handler\376\377\016");
lf[3]=C_h_intern(&lf[3],29,"\003syschicken-macro-environment");
C_register_lf2(lf,4,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_172,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k175 in k173 in k171 */
static void C_ccall f_176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

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
/* chicken.import.scm:27: ##sys#register-primitive-module */
((C_proc5)C_fast_retrieve_symbol_proc(lf[0]))(5,*((C_word*)lf[0]+1),t2,lf[1],lf[2],C_fast_retrieve(lf[3]));}

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
{"toplevel:chicken_2eimport_2escm",(void*)C_toplevel},
{"f_176:chicken_2eimport_2escm",(void*)f_176},
{"f_174:chicken_2eimport_2escm",(void*)f_174},
{"f_172:chicken_2eimport_2escm",(void*)f_172},
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
