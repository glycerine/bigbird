/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-uninstall.c
   used units: library eval srfi_2d1 posix data_2dstructures utils ports irregex srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[76];
static double C_possibly_force_alignment;


C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_761)
static void C_ccall f_761(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1036)
static void C_fcall f_1036(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_fcall f_1076(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_872)
static void C_ccall f_872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_774)
static void C_ccall f_774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1102)
static void C_ccall f_1102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_793)
static void C_fcall f_793(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1232)
static void C_ccall f_1232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_702)
static void C_ccall f_702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void C_ccall f_700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_708)
static void C_ccall f_708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_706)
static void C_ccall f_706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_704)
static void C_ccall f_704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1243)
static void C_fcall f_1243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_818)
static void C_ccall f_818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_712)
static void C_ccall f_712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static void C_ccall f_718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_714)
static void C_ccall f_714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_fcall f_1115(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_823)
static void C_fcall f_823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_722)
static void C_fcall f_722(C_word t0) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_953)
static void C_ccall f_953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f1451)
static void C_ccall f1451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_fcall f_1278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1434)
static void C_ccall f1434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1178)
static void C_ccall f_1178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1093)
static void C_ccall f_1093(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1439)
static void C_ccall f1439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1159)
static void C_fcall f_1159(C_word t0,C_word t1) C_noret;
C_noret_decl(f1446)
static void C_ccall f1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_698)
static void C_ccall f_698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_696)
static void C_ccall f_696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_928)
static void C_fcall f_928(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_1036)
static void C_fcall trf_1036(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1036(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1036(t0,t1,t2);}

C_noret_decl(trf_1076)
static void C_fcall trf_1076(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1076(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1076(t0,t1,t2,t3);}

C_noret_decl(trf_793)
static void C_fcall trf_793(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_793(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_793(t0,t1,t2);}

C_noret_decl(trf_1243)
static void C_fcall trf_1243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1243(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1243(t0,t1);}

C_noret_decl(trf_1115)
static void C_fcall trf_1115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1115(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1115(t0,t1,t2);}

C_noret_decl(trf_823)
static void C_fcall trf_823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_823(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_823(t0,t1,t2);}

C_noret_decl(trf_722)
static void C_fcall trf_722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_722(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_722(t0);}

C_noret_decl(trf_1278)
static void C_fcall trf_1278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1278(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1278(t0,t1,t2);}

C_noret_decl(trf_1159)
static void C_fcall trf_1159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1159(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1159(t0,t1);}

C_noret_decl(trf_928)
static void C_fcall trf_928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_928(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_928(t0,t1,t2);}

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

/* k862 */
static void C_ccall f_863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:65: exit */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f_761 in main#grep in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_761(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_761,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[13]);
/* chicken-uninstall.scm:53: g212 */
t4=C_fast_retrieve(lf[13]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[2],t2);}

/* for-each-loop336 in k990 in k976 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_1036(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1036,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1045,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:86: g337 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k911 in k908 */
static void C_ccall f_912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:72: yes-or-no? */
t2=C_fast_retrieve(lf[25]);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[26],lf[27],lf[28],t1);}

/* f_917 */
static void C_ccall f_917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_917,3,t0,t1,t2);}
/* chicken-uninstall.scm:76: g315 */
t3=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[32],t2,lf[33]);}

/* k914 */
static void C_ccall f_915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:73: string-concatenate */
t2=C_fast_retrieve(lf[30]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1030 in k995 */
static void C_ccall f_1031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:93: setup-api#remove-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[18]))(4,*((C_word*)lf[18]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_1009 in k1003 in k995 */
static void C_ccall f_1009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1009,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k976 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_977,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
/* chicken-uninstall.scm:84: print */
t2=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[17]);}
else{
t2=C_retrieve2(lf[11],"main#\052force\052");
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_992,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[11],"main#\052force\052"))){
t4=t3;
f_992(2,t4,C_retrieve2(lf[11],"main#\052force\052"));}
else{
t4=t1;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_872,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_877,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: call-with-current-continuation */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}}

/* k970 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tmp2677 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k1356 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1363,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[15]))(2,*((C_word*)lf[15]+1),t3);}

/* k1003 in k995 */
static void C_ccall f_1004(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1004,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1009,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1022,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:91: ##sys#dynamic-wind */
t9=*((C_word*)lf[19]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* k995 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[1],"main#\052host-extensions\052"))?C_retrieve2(lf[2],"main#\052target-extensions\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:90: setup-api#remove-extension */
((C_proc3)C_fast_retrieve_symbol_proc(lf[18]))(3,*((C_word*)lf[18]+1),t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1031,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:93: repo-path */
f_722(t3);}}

/* f_993 in k990 in k976 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_993,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_996,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:88: print */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[20],t2);}

/* k990 in k976 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_992,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_993,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1036,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1036(t7,((C_word*)t0)[3],t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1019 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:92: setup-api#remove-extension */
((C_proc4)C_fast_retrieve_symbol_proc(lf[18]))(4,*((C_word*)lf[18]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_1022 in k1003 in k995 */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1022,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1302 in map-loop443 in k1255 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1303,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1278(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1278(t6,((C_word*)t0)[5],t5);}}

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
if(!C_demand_2(452)){
C_save(t1);
C_rereclaim2(452*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,76);
lf[4]=C_h_intern(&lf[4],13,"make-pathname");
lf[5]=C_h_intern(&lf[5],17,"get-output-string");
lf[6]=C_h_intern(&lf[6],7,"display");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[8]=C_h_intern(&lf[8],18,"open-output-string");
lf[9]=C_h_intern(&lf[9],17,"\003syspeek-c-string");
lf[10]=C_h_intern(&lf[10],15,"repository-path");
lf[13]=C_h_intern(&lf[13],14,"irregex-search");
lf[14]=C_h_intern(&lf[14],6,"filter");
lf[15]=C_h_intern(&lf[15],25,"\003sysimplicit-exit-handler");
lf[16]=C_h_intern(&lf[16],5,"print");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\022nothing to remove.");
lf[18]=C_h_intern(&lf[18],26,"setup-api#remove-extension");
lf[19]=C_h_intern(&lf[19],16,"\003sysdynamic-wind");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\011removing ");
lf[21]=C_h_intern(&lf[21],7,"aborted");
lf[22]=C_h_intern(&lf[22],4,"exit");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\010aborted.");
lf[24]=C_h_intern(&lf[24],6,"signal");
lf[25]=C_h_intern(&lf[25],10,"yes-or-no\077");
lf[26]=C_h_intern(&lf[26],8,"\000default");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[28]=C_h_intern(&lf[28],6,"\000abort");
lf[29]=C_h_intern(&lf[29],21,"setup-api#abort-setup");
lf[30]=C_h_intern(&lf[30],18,"string-concatenate");
lf[31]=C_h_intern(&lf[31],13,"string-append");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[34]=C_h_intern(&lf[34],3,"map");
lf[35]=C_h_intern(&lf[35],6,"append");
lf[36]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000+About to delete the following extensions:\012\012\376\377\016");
lf[37]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\030\012Do you want to proceed\077\376\377\016");
lf[38]=C_h_intern(&lf[38],22,"with-exception-handler");
lf[39]=C_h_intern(&lf[39],30,"call-with-current-continuation");
lf[40]=C_h_intern(&lf[40],13,"pathname-file");
lf[41]=C_h_intern(&lf[41],17,"delete-duplicates");
lf[42]=C_h_intern(&lf[42],8,"string=\077");
lf[43]=C_h_intern(&lf[43],11,"concatenate");
lf[44]=C_h_intern(&lf[44],4,"glob");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[47]=C_h_intern(&lf[47],7,"irregex");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[50]=C_h_intern(&lf[50],13,"irregex-quote");
lf[51]=C_h_intern(&lf[51],16,"\003sysglob->regexp");
lf[52]=C_h_intern(&lf[52],7,"reverse");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\002\034usage: chicken-uninstall [OPTION | PATTERN] ...\012\012  -h   -help              "
"      show this message and exit\012       -version                 show version an"
"d exit\012       -force                   don\047t ask, delete whatever matches\012      "
" -exact                   treat PATTERN as exact match (not a pattern)\012  -s   -s"
"udo                    use sudo(1) for deleting files\012       -host              "
"      when cross-compiling, uninstall host extensions only\012       -target       "
"           when cross-compiling, uninstall target extensions only");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[57]=C_h_intern(&lf[57],15,"chicken-version");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[64]=C_h_intern(&lf[64],22,"setup-api#sudo-install");
lf[65]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\377\016");
lf[66]=C_h_intern(&lf[66],5,"every");
lf[67]=C_h_intern(&lf[67],16,"\003sysstring->list");
lf[68]=C_h_intern(&lf[68],9,"substring");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[71]=C_h_intern(&lf[71],22,"command-line-arguments");
lf[72]=C_h_intern(&lf[72],8,"feature\077");
lf[73]=C_h_intern(&lf[73],14,"\000cross-chicken");
lf[74]=C_h_intern(&lf[74],11,"\003sysrequire");
lf[75]=C_h_intern(&lf[75],9,"setup-api");
C_register_lf2(lf,76,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_694,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_1076(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1076,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1085,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1434,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[53]);}
else{
t5=t4;
f_1085(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[54]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1159,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_1159(t7,t5);}
else{
t7=C_u_i_string_equal_p(t4,lf[69]);
if(C_truep(t7)){
t8=t6;
f_1159(t8,t7);}
else{
t8=C_u_i_string_equal_p(t4,lf[70]);
t9=t6;
f_1159(t9,t8);}}}}

/* f_1311 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1311,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_memq(t2,lf[65]));}

/* k1044 in for-each-loop336 in k990 in k976 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1036(t3,((C_word*)t0)[4],t2);}

/* k1317 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[67]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_877 in k976 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_877(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_877,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_882,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:67: with-exception-handler */
t5=C_fast_retrieve(lf[38]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k871 in k976 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:67: g286 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k772 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_774(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_782,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[34]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_791,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_793,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_793(t13,t9,((C_word*)t0)[3]);}

/* k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_823(t6,t2,t1);}

/* k1104 */
static void C_ccall f_1105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:123: string-append */
t2=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[48],t1,lf[49]);}

/* k1101 */
static void C_ccall f_1102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:123: irregex */
t2=C_fast_retrieve(lf[47]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_887 */
static void C_ccall f_887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_887,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[2],lf[21]);
if(C_truep(t2)){
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_863,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:64: print */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[23]);}
else{
/* chicken-uninstall.scm:71: signal */
t3=C_fast_retrieve(lf[24]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}}

/* f_882 */
static void C_ccall f_882(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_882,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_887,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: k282 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_1014 in k1003 in k995 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1020,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:92: repo-path */
f_722(t2);}

/* f_782 in k772 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_782(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_782,3,t0,t1,t2);}
t3=C_retrieve2(lf[12],"main#grep");
/* chicken-uninstall.scm:60: g268 */
t4=C_retrieve2(lf[12],"main#grep");
f_755(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k779 in k772 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:58: delete-duplicates */
t2=C_fast_retrieve(lf[41]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[42]+1));}

/* k789 in k772 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:59: concatenate */
t2=C_fast_retrieve(lf[43]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop245 in k772 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_793(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_793,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_818,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:60: g251 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1085(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1093,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[4];
t9=C_i_check_list_2(t8,lf[34]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1115,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_1115(t14,t10,t8);}

/* k1231 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:150: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1076(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5]);}

/* f_962 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_962,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k699 in k697 in k695 in k693 */
static void C_ccall f_700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_710,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_1243(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1243,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1251,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1318,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:154: substring */
t5=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1451,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[53]);}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-uninstall.scm:160: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1076(t5,((C_word*)t0)[4],t3,t4);}}

/* k1139 in map-loop383 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1140,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1115(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1115(t6,((C_word*)t0)[5],t5);}}

/* k817 in map-loop245 in k772 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_818(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_818,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_793(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_793(t6,((C_word*)t0)[5],t5);}}

/* k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_714,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[74]))(3,*((C_word*)lf[74]+1),t2,lf[75]);}

/* k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_718(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_718,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t4=C_mutate(&lf[2] /* (set! main#*target-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t5=C_mutate(&lf[3] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_722,tmp=(C_word)a,a+=2,tmp));
t6=lf[11] /* main#*force* */ =C_SCHEME_FALSE;;
t7=C_mutate(&lf[12] /* (set! main#grep ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_755,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1366,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:162: command-line-arguments */
t10=C_fast_retrieve(lf[71]);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}

/* k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:41: feature? */
t3=C_fast_retrieve(lf[72]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[73]);}

/* f_901 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_971,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1676 */
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k908 */
static void C_ccall f_909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_912,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:79: setup-api#abort-setup */
((C_proc2)C_fast_retrieve_symbol_proc(lf[29]))(2,*((C_word*)lf[29]+1),t2);}

/* f_903 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_909,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_915,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_917,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(((C_word*)t0)[2],lf[34]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_926,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_928,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_928(t14,t10,((C_word*)t0)[2]);}

/* k1111 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:119: reverse */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop383 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_1115(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1115,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1140,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:120: g389 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop219 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_823,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_848,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:56: g225 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* main#repo-path in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_722(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_722,NULL,1,t1);}
t2=(C_truep(C_retrieve2(lf[0],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[1],"main#\052host-extensions\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_735,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* chicken-uninstall.scm:48: repository-path */
t3=C_fast_retrieve(lf[10]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k1262 in k1255 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:156: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1076(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* f_1265 in k1255 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1265,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,2,C_make_character(45),t2));}

/* k952 in map-loop292 */
static void C_ccall f_953(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_953,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_928(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_928(t6,((C_word*)t0)[5],t5);}}

/* f_957 */
static void C_ccall f_957(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_957r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_957r(t0,t1,t2);}}

static void C_ccall f_957r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_962,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: k282 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f1451 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f1451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k734 in main#repo-path in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_738,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:47: open-output-string */
t3=C_fast_retrieve(lf[8]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1272 in k1255 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-uninstall.scm:157: append */
t4=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* map-loop443 in k1255 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_1278(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1278,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:157: g449 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k737 in k734 in main#repo-path in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_738,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:47: display */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[7],t2);}

/* k1171 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:135: exit */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* f1434 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f1434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k1177 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:134: print */
t2=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k847 in map-loop219 in k770 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_848(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_848,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_823(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_823(t6,((C_word*)t0)[5],t5);}}

/* f_1093 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1093(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1093,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1102,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1105,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:123: irregex-quote */
t5=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* chicken-uninstall.scm:124: ##sys#glob->regexp */
((C_proc3)C_fast_retrieve_symbol_proc(lf[51]))(3,*((C_word*)lf[51]+1),t1,t2);}}

/* k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1091,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_977,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fast_retrieve(lf[40]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_771,a[2]=t3,a[3]=t1,a[4]=t7,a[5]=t5,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_854,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_857,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:57: repo-path */
f_722(t11);}

/* k741 in k739 in k737 in k734 in main#repo-path in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:47: get-output-string */
t3=C_fast_retrieve(lf[5]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k739 in k737 in k734 in main#repo-path in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-uninstall.scm:47: display */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix((C_word)C_BINARY_VERSION),((C_word*)t0)[5]);}

/* k744 in k741 in k739 in k737 in k734 in main#repo-path in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:47: make-pathname */
t2=C_fast_retrieve(lf[4]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f1439 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f1439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_fcall f_1159(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1159,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1439,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[53]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[55]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[56]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1172,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1178,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:134: chicken-version */
t6=C_fast_retrieve(lf[57]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[58]))){
t4=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-uninstall.scm:138: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1076(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[59]))){
t4=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-uninstall.scm:141: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1076(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[60]))){
t4=lf[11] /* main#*force* */ =C_SCHEME_TRUE;;
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-uninstall.scm:144: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1076(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[61]))){
t4=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-uninstall.scm:147: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1076(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[62]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[63]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1232,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:149: setup-api#sudo-install */
((C_proc3)C_fast_retrieve_symbol_proc(lf[64]))(3,*((C_word*)lf[64]+1),t6,C_SCHEME_TRUE);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1243,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t7,C_fix(0)))){
t8=C_subchar(((C_word*)t0)[3],C_fix(0));
t9=t6;
f_1243(t9,C_i_char_equalp(C_make_character(45),t8));}
else{
t8=t6;
f_1243(t8,C_SCHEME_FALSE);}}}}}}}}}

/* f1446 in k1255 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:109: exit */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k697 in k695 in k693 */
static void C_ccall f_698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k695 in k693 */
static void C_ccall f_696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k693 */
static void C_ccall f_694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* map-loop292 */
static void C_fcall f_928(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_928,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_953,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-uninstall.scm:76: g298 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k924 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:74: append */
t2=*((C_word*)lf[35]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[36],t1,lf[37]);}

/* k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1311,tmp=(C_word)a,a+=2,tmp);
/* chicken-uninstall.scm:155: every */
t4=C_fast_retrieve(lf[66]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* k1255 in k1250 in k1241 in k1157 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1257,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1265,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[5];
t9=C_i_check_list_2(t8,lf[34]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1278,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_1278(t14,t10,t8);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1446,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:97: print */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[53]);}}

/* k1361 in k1356 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1359 in k1356 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1076,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1076(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k853 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:57: glob */
t2=C_fast_retrieve(lf[44]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k856 in k1090 in k1084 in loop in k1365 in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-uninstall.scm:57: make-pathname */
t2=C_fast_retrieve(lf[4]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[45],lf[46]);}

/* main#grep in k716 in k713 in k711 in k709 in k707 in k705 in k703 in k701 in k699 in k697 in k695 in k693 */
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_755,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_761,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:53: filter */
t5=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[93] = {
{"f_863:chicken_2duninstall_2escm",(void*)f_863},
{"f_761:chicken_2duninstall_2escm",(void*)f_761},
{"f_1036:chicken_2duninstall_2escm",(void*)f_1036},
{"f_912:chicken_2duninstall_2escm",(void*)f_912},
{"f_917:chicken_2duninstall_2escm",(void*)f_917},
{"f_915:chicken_2duninstall_2escm",(void*)f_915},
{"f_1031:chicken_2duninstall_2escm",(void*)f_1031},
{"f_1009:chicken_2duninstall_2escm",(void*)f_1009},
{"f_977:chicken_2duninstall_2escm",(void*)f_977},
{"f_971:chicken_2duninstall_2escm",(void*)f_971},
{"f_1358:chicken_2duninstall_2escm",(void*)f_1358},
{"f_1004:chicken_2duninstall_2escm",(void*)f_1004},
{"f_996:chicken_2duninstall_2escm",(void*)f_996},
{"f_993:chicken_2duninstall_2escm",(void*)f_993},
{"f_992:chicken_2duninstall_2escm",(void*)f_992},
{"f_1020:chicken_2duninstall_2escm",(void*)f_1020},
{"f_1022:chicken_2duninstall_2escm",(void*)f_1022},
{"f_1303:chicken_2duninstall_2escm",(void*)f_1303},
{"toplevel:chicken_2duninstall_2escm",(void*)C_toplevel},
{"f_1076:chicken_2duninstall_2escm",(void*)f_1076},
{"f_1311:chicken_2duninstall_2escm",(void*)f_1311},
{"f_1045:chicken_2duninstall_2escm",(void*)f_1045},
{"f_1318:chicken_2duninstall_2escm",(void*)f_1318},
{"f_877:chicken_2duninstall_2escm",(void*)f_877},
{"f_872:chicken_2duninstall_2escm",(void*)f_872},
{"f_774:chicken_2duninstall_2escm",(void*)f_774},
{"f_771:chicken_2duninstall_2escm",(void*)f_771},
{"f_1105:chicken_2duninstall_2escm",(void*)f_1105},
{"f_1102:chicken_2duninstall_2escm",(void*)f_1102},
{"f_887:chicken_2duninstall_2escm",(void*)f_887},
{"f_882:chicken_2duninstall_2escm",(void*)f_882},
{"f_1014:chicken_2duninstall_2escm",(void*)f_1014},
{"f_782:chicken_2duninstall_2escm",(void*)f_782},
{"f_780:chicken_2duninstall_2escm",(void*)f_780},
{"f_791:chicken_2duninstall_2escm",(void*)f_791},
{"f_793:chicken_2duninstall_2escm",(void*)f_793},
{"f_1085:chicken_2duninstall_2escm",(void*)f_1085},
{"f_1232:chicken_2duninstall_2escm",(void*)f_1232},
{"f_962:chicken_2duninstall_2escm",(void*)f_962},
{"f_702:chicken_2duninstall_2escm",(void*)f_702},
{"f_700:chicken_2duninstall_2escm",(void*)f_700},
{"f_708:chicken_2duninstall_2escm",(void*)f_708},
{"f_706:chicken_2duninstall_2escm",(void*)f_706},
{"f_704:chicken_2duninstall_2escm",(void*)f_704},
{"f_1243:chicken_2duninstall_2escm",(void*)f_1243},
{"f_1140:chicken_2duninstall_2escm",(void*)f_1140},
{"f_818:chicken_2duninstall_2escm",(void*)f_818},
{"f_710:chicken_2duninstall_2escm",(void*)f_710},
{"f_712:chicken_2duninstall_2escm",(void*)f_712},
{"f_718:chicken_2duninstall_2escm",(void*)f_718},
{"f_714:chicken_2duninstall_2escm",(void*)f_714},
{"f_901:chicken_2duninstall_2escm",(void*)f_901},
{"f_909:chicken_2duninstall_2escm",(void*)f_909},
{"f_903:chicken_2duninstall_2escm",(void*)f_903},
{"f_1113:chicken_2duninstall_2escm",(void*)f_1113},
{"f_1115:chicken_2duninstall_2escm",(void*)f_1115},
{"f_823:chicken_2duninstall_2escm",(void*)f_823},
{"f_722:chicken_2duninstall_2escm",(void*)f_722},
{"f_1263:chicken_2duninstall_2escm",(void*)f_1263},
{"f_1265:chicken_2duninstall_2escm",(void*)f_1265},
{"f_953:chicken_2duninstall_2escm",(void*)f_953},
{"f_957:chicken_2duninstall_2escm",(void*)f_957},
{"f1451:chicken_2duninstall_2escm",(void*)f1451},
{"f_735:chicken_2duninstall_2escm",(void*)f_735},
{"f_1274:chicken_2duninstall_2escm",(void*)f_1274},
{"f_1278:chicken_2duninstall_2escm",(void*)f_1278},
{"f_738:chicken_2duninstall_2escm",(void*)f_738},
{"f_1172:chicken_2duninstall_2escm",(void*)f_1172},
{"f1434:chicken_2duninstall_2escm",(void*)f1434},
{"f_1178:chicken_2duninstall_2escm",(void*)f_1178},
{"f_848:chicken_2duninstall_2escm",(void*)f_848},
{"f_1093:chicken_2duninstall_2escm",(void*)f_1093},
{"f_1091:chicken_2duninstall_2escm",(void*)f_1091},
{"f_743:chicken_2duninstall_2escm",(void*)f_743},
{"f_740:chicken_2duninstall_2escm",(void*)f_740},
{"f_746:chicken_2duninstall_2escm",(void*)f_746},
{"f1439:chicken_2duninstall_2escm",(void*)f1439},
{"f_1159:chicken_2duninstall_2escm",(void*)f_1159},
{"f1446:chicken_2duninstall_2escm",(void*)f1446},
{"f_698:chicken_2duninstall_2escm",(void*)f_698},
{"f_696:chicken_2duninstall_2escm",(void*)f_696},
{"f_694:chicken_2duninstall_2escm",(void*)f_694},
{"f_928:chicken_2duninstall_2escm",(void*)f_928},
{"f_926:chicken_2duninstall_2escm",(void*)f_926},
{"f_1251:chicken_2duninstall_2escm",(void*)f_1251},
{"f_1257:chicken_2duninstall_2escm",(void*)f_1257},
{"f_1363:chicken_2duninstall_2escm",(void*)f_1363},
{"f_1360:chicken_2duninstall_2escm",(void*)f_1360},
{"f_1366:chicken_2duninstall_2escm",(void*)f_1366},
{"f_854:chicken_2duninstall_2escm",(void*)f_854},
{"f_857:chicken_2duninstall_2escm",(void*)f_857},
{"f_755:chicken_2duninstall_2escm",(void*)f_755},
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
o|hiding nonexported module bindings: main#*cross-chicken* 
o|hiding nonexported module bindings: main#*host-extensions* 
o|hiding nonexported module bindings: main#*target-extensions* 
o|hiding nonexported module bindings: main#repo-path 
o|hiding nonexported module bindings: main#*force* 
o|hiding nonexported module bindings: main#grep 
o|hiding nonexported module bindings: main#gather-eggs 
o|hiding nonexported module bindings: main#fini 
o|hiding nonexported module bindings: main#ask 
o|hiding nonexported module bindings: main#uninstall 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  for-each		1
S|  map		5
S|  sprintf		1
o|eliminated procedure checks: 20 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (string-ref string fixnum)
o|  1 (positive? fixnum)
o|  2 (string-length string)
o|  7 (cdr pair)
o|  10 (string=? string string)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  2 (##sys#check-list (or pair list) *)
o|inlining procedure: k725 
o|inlining procedure: k725 
o|propagated global variable: g212213 irregex-search 
o|contracted procedure: "(chicken-uninstall.scm:162) main#main" 
o|inlining procedure: k1079 
o|contracted procedure: "(chicken-uninstall.scm:118) main#uninstall" 
o|inlining procedure: k978 
o|inlining procedure: k978 
o|inlining procedure: k997 
o|inlining procedure: k997 
o|inlining procedure: k1039 
o|inlining procedure: k1039 
o|propagated global variable: tmp331333 main#*force* 
o|propagated global variable: tmp331333 main#*force* 
o|contracted procedure: "(chicken-uninstall.scm:85) main#ask" 
o|inlining procedure: k889 
o|contracted procedure: "(chicken-uninstall.scm:70) main#fini" 
o|inlining procedure: k889 
o|inlining procedure: k931 
o|inlining procedure: k931 
o|contracted procedure: "(chicken-uninstall.scm:82) main#gather-eggs" 
o|inlining procedure: k796 
o|inlining procedure: k796 
o|inlining procedure: k826 
o|inlining procedure: k826 
o|inlining procedure: k1095 
o|inlining procedure: k1095 
o|inlining procedure: k1118 
o|inlining procedure: k1118 
o|inlining procedure: k1079 
o|substituted constant variable: a1167 
o|inlining procedure: k1163 
o|inlining procedure: k1163 
o|substituted constant variable: a1183 
o|substituted constant variable: a1194 
o|inlining procedure: k1190 
o|inlining procedure: k1190 
o|substituted constant variable: a1205 
o|substituted constant variable: a1216 
o|inlining procedure: k1212 
o|inlining procedure: k1212 
o|substituted constant variable: a1227 
o|inlining procedure: k1238 
o|inlining procedure: k1252 
o|inlining procedure: k1281 
o|inlining procedure: k1281 
o|inlining procedure: k1252 
o|substituted constant variable: main#*short-options* 
o|substituted constant variable: a1325 
o|inlining procedure: k1238 
o|substituted constant variable: a1343 
o|substituted constant variable: a1346 
o|substituted constant variable: a1348 
o|substituted constant variable: a1350 
o|inlining procedure: k1351 
o|inlining procedure: k1351 
o|substituted constant variable: a1355 
o|replaced variables: 84 
o|removed binding forms: 40 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|substituted constant variable: code278 
o|replaced variables: 11 
o|removed binding forms: 105 
o|inlining procedure: "(chicken-uninstall.scm:117) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:131) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:158) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:159) main#usage" 
o|removed binding forms: 11 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code3691432 
o|substituted constant variable: code3691437 
o|substituted constant variable: code3691444 
o|substituted constant variable: code3691449 
o|replaced variables: 1 
o|removed binding forms: 6 
o|simplifications: ((if . 2) (##core#call . 48)) 
o|  call simplifications:
o|    car
o|    string=?
o|    char=?
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    null?	3
o|    ##sys#apply
o|    ##sys#check-list	4
o|    cons	6
o|    ##sys#setslot	5
o|    eq?
o|    pair?	6
o|    ##sys#slot	12
o|    not
o|contracted procedure: k727 
o|contracted procedure: k1081 
o|contracted procedure: k981 
o|contracted procedure: k1000 
o|contracted procedure: k1041 
o|contracted procedure: k1050 
o|contracted procedure: k1053 
o|contracted procedure: k891 
o|contracted procedure: k922 
o|contracted procedure: k933 
o|contracted procedure: k936 
o|contracted procedure: k945 
o|contracted procedure: k955 
o|contracted procedure: k787 
o|contracted procedure: k798 
o|contracted procedure: k801 
o|contracted procedure: k810 
o|contracted procedure: k820 
o|contracted procedure: k828 
o|contracted procedure: k831 
o|contracted procedure: k840 
o|contracted procedure: k850 
o|contracted procedure: k1109 
o|contracted procedure: k1120 
o|contracted procedure: k1123 
o|contracted procedure: k1132 
o|contracted procedure: k1142 
o|contracted procedure: k1144 
o|contracted procedure: k1150 
o|contracted procedure: k1155 
o|contracted procedure: k1323 
o|contracted procedure: k1247 
o|contracted procedure: k1270 
o|contracted procedure: k1283 
o|contracted procedure: k1286 
o|contracted procedure: k1295 
o|contracted procedure: k1305 
o|contracted procedure: k1333 
o|contracted procedure: k1336 
o|simplifications: ((let . 10)) 
o|removed binding forms: 39 
o|inlining procedure: k938 
o|inlining procedure: k938 
o|inlining procedure: k803 
o|inlining procedure: k803 
o|inlining procedure: k833 
o|inlining procedure: k833 
o|inlining procedure: k1125 
o|inlining procedure: k1125 
o|inlining procedure: k1288 
o|inlining procedure: k1288 
o|replaced variables: 13 
o|simplifications: ((if . 2)) 
o|removed binding forms: 23 
o|contracted procedure: k1168 
o|contracted procedure: k1228 
o|removed binding forms: 2 
o|customizable procedures: (k1157 k1241 map-loop443468 loop375 map-loop383401 map-loop219236 map-loop245270 map-loop292317 for-each-loop336363 main#repo-path) 
o|calls to known targets: 36 
o|fast box initializations: 7 
o|fast global references: 16 
o|fast global assignments: 11 
o|dropping unused closure argument: f_722 
*/
/* end of file */
