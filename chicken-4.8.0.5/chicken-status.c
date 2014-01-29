/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-status.c
   used units: library eval srfi_2d1 posix data_2dstructures utils ports irregex files
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
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[83];
static double C_possibly_force_alignment;


C_noret_decl(f1766)
static void C_ccall f1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1208)
static void C_fcall f_1208(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1217)
static void C_ccall f_1217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_824)
static void C_ccall f_824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_fcall f_1094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_811)
static void C_fcall f_811(C_word t0) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_803)
static void C_ccall f_803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_878)
static void C_fcall f_878(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_967)
static void C_ccall f_967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_953)
static void C_fcall f_953(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_865)
static void C_ccall f_865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1245)
static void C_fcall f_1245(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1261)
static void C_ccall f_1261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_fcall f_1279(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1529)
static void C_fcall f_1529(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_908)
static void C_fcall f_908(C_word t0) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1564)
static void C_fcall f_1564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1150)
static void C_ccall f_1150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1187)
static void C_ccall f_1187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1129)
static void C_fcall f_1129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1196)
static void C_ccall f_1196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1199)
static void C_ccall f_1199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_917)
static void C_fcall f_917(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1327)
static void C_fcall f_1327(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_fcall f_1446(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1778)
static void C_ccall f1778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f1773)
static void C_ccall f1773(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1208)
static void C_fcall trf_1208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1208(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1208(t0,t1,t2);}

C_noret_decl(trf_1094)
static void C_fcall trf_1094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1094(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1094(t0,t1,t2);}

C_noret_decl(trf_811)
static void C_fcall trf_811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_811(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_811(t0);}

C_noret_decl(trf_878)
static void C_fcall trf_878(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_878(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_878(t0,t1,t2);}

C_noret_decl(trf_953)
static void C_fcall trf_953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_953(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_953(t0,t1,t2,t3);}

C_noret_decl(trf_1245)
static void C_fcall trf_1245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1245(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1245(t0,t1,t2,t3);}

C_noret_decl(trf_1279)
static void C_fcall trf_1279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1279(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1279(t0,t1,t2);}

C_noret_decl(trf_1529)
static void C_fcall trf_1529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1529(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1529(t0,t1);}

C_noret_decl(trf_908)
static void C_fcall trf_908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_908(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_908(t0);}

C_noret_decl(trf_1564)
static void C_fcall trf_1564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1564(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1564(t0,t1,t2);}

C_noret_decl(trf_1129)
static void C_fcall trf_1129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1129(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1129(t0,t1,t2);}

C_noret_decl(trf_917)
static void C_fcall trf_917(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_917(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_917(t0,t1,t2);}

C_noret_decl(trf_1327)
static void C_fcall trf_1327(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1327(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1327(t0,t1,t2);}

C_noret_decl(trf_1362)
static void C_fcall trf_1362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1362(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1362(t0,t1,t2);}

C_noret_decl(trf_1446)
static void C_fcall trf_1446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1446(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1446(t0,t1);}

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

/* f1766 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:125: exit */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k1351 in map-loop402 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1352,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1327(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1327(t6,((C_word*)t0)[5],t5);}}

/* k1059 in k1081 */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1060,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1066,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1070,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadr(((C_word*)t0)[4]);
/* chicken-status.scm:87: ->string */
t6=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k1062 in k1059 in k1081 */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:84: print */
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1065 in k1059 in k1081 */
static void C_ccall f_1066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1066,2,t0,t1);}
/* chicken-status.scm:86: format-string */
f_953(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* for-each-loop346 in k1200 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_1208(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1208,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1217,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:105: g347 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_797,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k790 in k788 in k786 in k784 */
static void C_ccall f_791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1069 in k1059 in k1081 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[20]))(4,*((C_word*)lf[20]+1),((C_word*)t0)[2],lf[25],t1);}

/* k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1075 in k1081 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1076,2,t0,t1);}
/* chicken-status.scm:85: format-string */
f_953(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k1200 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1201,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[30]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1208,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1208(t6,((C_word*)t0)[3],t1);}

/* k1216 in for-each-loop346 in k1200 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1208(t3,((C_word*)t0)[4],t2);}

/* k833 in k830 in k828 in k826 in k823 in main#repo-path in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:45: make-pathname */
t2=C_fast_retrieve(lf[4]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k830 in k828 in k826 in k823 in main#repo-path in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:45: get-output-string */
t3=C_fast_retrieve(lf[5]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1081 */
static void C_ccall f_1082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1082,2,t0,t1);}
t2=C_i_assq(lf[23],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1076,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:85: string-append */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],lf[28]);}
else{
/* chicken-status.scm:89: print */
t3=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k1086 in k1046 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1087,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[30]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1094(t6,((C_word*)t0)[3],t1);}

/* k1084 */
static void C_ccall f_1085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:82: setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[29]))(4,*((C_word*)lf[29]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1652,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1245,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1245(t11,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k828 in k826 in k823 in main#repo-path in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:45: display */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix((C_word)C_BINARY_VERSION),((C_word*)t0)[5]);}

/* k826 in k823 in main#repo-path in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_827,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-status.scm:45: display */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[7],t2);}

/* k823 in main#repo-path in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_827,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:45: open-output-string */
t3=C_fast_retrieve(lf[8]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* for-each-loop305 in k1086 in k1046 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_1094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1094,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1103,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:78: g306 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1163 */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_assq(lf[38],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_i_cdr(t2):C_SCHEME_END_OF_LIST));}

/* k1166 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:98: setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[29]))(4,*((C_word*)lf[29]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* main#repo-path in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_811(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_811,NULL,1,t1);}
t2=(C_truep(C_retrieve2(lf[0],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[1],"main#\052host-extensions\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_824,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}
else{
/* chicken-status.scm:46: repository-path */
t3=C_fast_retrieve(lf[10]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:27: ##sys#require */
((C_proc3)C_fast_retrieve_symbol_proc(lf[81]))(3,*((C_word*)lf[81]+1),t2,lf[82]);}

/* k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:39: feature? */
t3=C_fast_retrieve(lf[79]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[80]);}

/* f_1172 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1172,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1196,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1199,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:108: repo-path */
f_811(t4);}

/* k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_807(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_807,2,t0,t1);}
t2=C_mutate(&lf[0] /* (set! main#*cross-chicken* ...) */,t1);
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t4=C_mutate(&lf[2] /* (set! main#*target-extensions* ...) */,C_retrieve2(lf[0],"main#\052cross-chicken\052"));
t5=C_mutate(&lf[3] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_811,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[11] /* (set! main#grep ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_843,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[14] /* (set! main#gather-all-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_908,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[19] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_953,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[22] /* (set! main#list-installed-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1043,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[37] /* (set! main#list-installed-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1120,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:192: command-line-arguments */
t13=C_fast_retrieve(lf[78]);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}

/* k1645 in k1642 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1647 in k1642 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1642 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1646,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1649,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[40]))(2,*((C_word*)lf[40]+1),t3);}

/* k874 in k858 in k1259 in k1255 */
static void C_ccall f_876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:54: concatenate */
t2=C_fast_retrieve(lf[46]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop213 in k858 in k1259 in k1255 */
static void C_fcall f_878(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_878,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:54: g219 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k966 in main#format-string in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
t2=t1;
t3=((C_word*)t0)[3];
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[20]))(4,*((C_word*)lf[20]+1),((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[3];
t3=t1;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[20]))(4,*((C_word*)lf[20]+1),((C_word*)t0)[4],t2,t3);}}

/* k1021 in k1018 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[2];
f_1047(2,t2,C_fix(39));}
else{
/* chicken-status.scm:75: min */
t2=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_fix(80),t1);}}

/* k1018 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1033,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1038,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:72: ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[2];
f_1047(2,t2,C_fix(39));}}

/* f_867 in k858 in k1259 in k1255 */
static void C_ccall f_867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_867,3,t0,t1,t2);}
t3=C_retrieve2(lf[11],"main#grep");
/* chicken-status.scm:54: g236 */
t4=C_retrieve2(lf[11],"main#grep");
f_843(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k950 in main#gather-all-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:58: make-pathname */
t2=C_fast_retrieve(lf[4]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[17],lf[18]);}

/* main#format-string in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_953(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_953,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_make_character(32):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_string_length(t2);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_967,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t15=C_fixnum_difference(t3,t13);
t16=C_i_fixnum_max(C_fix(0),t15);
/* chicken-status.scm:62: make-string */
t17=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t14,t16,t10);}

/* k864 in k858 in k1259 in k1255 */
static void C_ccall f_865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:53: delete-duplicates */
t2=C_fast_retrieve(lf[44]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[45]+1));}

/* loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_1245(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1245,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1253,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t5=t1;
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1172,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1201,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:110: gather-all-eggs */
f_908(t7);}
else{
t5=(C_truep(C_retrieve2(lf[1],"main#\052host-extensions\052"))?C_retrieve2(lf[2],"main#\052target-extensions\052"):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1404,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1433,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:152: repo-path */
f_811(t7);}
else{
/* chicken-status.scm:157: status */
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[59]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1446,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t5)){
t7=t6;
f_1446(t7,t5);}
else{
t7=C_u_i_string_equal_p(t4,lf[76]);
if(C_truep(t7)){
t8=t6;
f_1446(t8,t7);}
else{
t8=C_u_i_string_equal_p(t4,lf[77]);
t9=t6;
f_1446(t9,t8);}}}}

/* k1262 in k1259 in k1255 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_nullp(t1))){
/* chicken-status.scm:147: print */
t2=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[43]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=C_retrieve2(lf[37],"main#list-installed-files");
/* chicken-status.scm:136: g461 */
t3=C_retrieve2(lf[37],"main#list-installed-files");
f_1120(3,t3,((C_word*)t0)[2],t1);}
else{
t2=C_retrieve2(lf[22],"main#list-installed-eggs");
/* chicken-status.scm:136: g461 */
t3=C_retrieve2(lf[22],"main#list-installed-eggs");
f_1043(3,t3,((C_word*)t0)[2],t1);}}}

/* k1259 in k1255 */
static void C_ccall f_1261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_859,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:52: gather-all-eggs */
f_908(t3);}

/* map-loop380 in k1255 */
static void C_fcall f_1279(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1279,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1304,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:138: g386 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_1033 in k1018 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1033,2,t0,t1);}
/* chicken-status.scm:72: terminal-size */
t2=C_fast_retrieve(lf[35]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k858 in k1259 in k1255 */
static void C_ccall f_859(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_867,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[42]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_878,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_878(t13,t9,((C_word*)t0)[3]);}

/* k1255 */
static void C_ccall f_1256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1256,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[42]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1279,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1279(t7,t3,t1);}

/* main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1043(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1043,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1047,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1118,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=*((C_word*)lf[33]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1020,a[2]=t3,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:71: terminal-port? */
t7=C_fast_retrieve(lf[36]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[33]+1));}

/* f_849 in main#grep in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_849(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_849,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[12]);
/* chicken-status.scm:49: g206 */
t4=C_fast_retrieve(lf[12]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[2],t2);}

/* f_1253 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1253(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1253,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[41]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1256,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t8=t7;
f_1256(2,t8,lf[47]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1314,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t0)[3];
t14=C_i_check_list_2(t13,lf[42]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1327,a[2]=t11,a[3]=t16,a[4]=t9,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_1327(t18,t7,t13);}
else{
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_fast_retrieve(lf[51]);
t13=((C_word*)t0)[3];
t14=C_i_check_list_2(t13,lf[42]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1362,a[2]=t11,a[3]=t16,a[4]=t9,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_1362(t18,t7,t13);}}}

/* main#grep in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_843,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:49: filter */
t5=C_fast_retrieve(lf[13]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* f_1038 in k1018 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1038r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1038r(t0,t1,t2);}}

static void C_ccall f_1038r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_list_ref(t2,C_fix(1)));}

/* k1522 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:180: print */
t2=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1046 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1048,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1087,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:90: sort */
t4=C_fast_retrieve(lf[31]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],*((C_word*)lf[32]+1));}

/* f_1048 in k1046 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1048,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1082,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1085,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:82: repo-path */
f_811(t4);}

/* k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_1529(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1529,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1604,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:185: substring */
t5=*((C_word*)lf[75]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],C_fix(1));}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1778,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:113: print */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[61]);}}
else{
t2=((C_word*)t0)[6];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
/* chicken-status.scm:190: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1245(t5,((C_word*)t0)[4],t3,t4);}}

/* k1386 in map-loop429 */
static void C_ccall f_1387(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1387,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1362(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1362(t6,((C_word*)t0)[5],t5);}}

/* k1588 in map-loop514 in k1541 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1589,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1564(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1564(t6,((C_word*)t0)[5],t5);}}

/* main#gather-all-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_908(C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_908,NULL,1,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fast_retrieve(lf[15]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_912,a[2]=t5,a[3]=t3,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_948,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_951,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:58: repo-path */
f_811(t9);}

/* k902 in map-loop213 in k858 in k1259 in k1255 */
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_903,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_878(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_878(t6,((C_word*)t0)[5],t5);}}

/* f_1551 in k1541 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1551(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1551,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_string(&a,2,C_make_character(45),t2));}

/* f_1411 in k1405 in k1403 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1411,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1597,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:186: every */
t4=C_fast_retrieve(lf[73]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* k1424 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:155: print */
t2=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[54],t1,lf[55]);}

/* f_1416 in k1405 in k1403 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1425,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:155: repo-path */
f_811(t3);}

/* k1418 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:156: status */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k1541 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1543,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1551,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[5];
t9=C_i_check_list_2(t8,lf[42]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1564,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_1564(t14,t10,t8);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1773,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:113: print */
t4=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[61]);}}

/* k1403 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:153: status */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1548 in k1541 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:187: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1245(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* map-loop514 in k1541 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_1564(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1564,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1589,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:187: g520 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1558 in k1541 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-status.scm:187: append */
t4=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t1,t3);}

/* k1432 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:152: print */
t2=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[57],t1,lf[58]);}

/* f_1427 in k1405 in k1403 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1427,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[1],"main#\052host-extensions\052"));
t3=C_mutate(&lf[1] /* (set! main#*host-extensions* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* f_1152 in main#list-installed-files in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1152,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1164,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1167,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:98: repo-path */
f_811(t4);}

/* k1516 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:181: exit */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k1149 in main#list-installed-files in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:95: sort */
t2=C_fast_retrieve(lf[31]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[32]+1));}

/* k1405 in k1403 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1411,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1416,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1427,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:154: ##sys#dynamic-wind */
t9=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[3],t6,t7,t8);}

/* k1186 in k1183 in k1195 */
static void C_ccall f_1187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1187,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* chicken-status.scm:109: pp */
t3=C_fast_retrieve(lf[52]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k1183 in k1195 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1187,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-status.scm:109: ->string */
t4=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
/* chicken-status.scm:109: ->string */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}}

/* k1123 in main#list-installed-files in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1124,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1129,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1129(t5,((C_word*)t0)[2],t1);}

/* main#list-installed-files in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1120,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1124,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1150,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1152,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:96: append-map */
t6=C_fast_retrieve(lf[39]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* for-each-loop326 in k1123 in main#list-installed-files in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_1129(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1129,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1138,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:92: g327 */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1195 */
static void C_ccall f_1196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1196,2,t0,t1);}
t2=C_i_assq(lf[23],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1184,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:109: string->symbol */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k1303 in map-loop380 in k1255 */
static void C_ccall f_1304(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1304,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1279(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1279(t6,((C_word*)t0)[5],t5);}}

/* k1198 */
static void C_ccall f_1199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:108: setup-api#read-info */
((C_proc4)C_fast_retrieve_symbol_proc(lf[29]))(4,*((C_word*)lf[29]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k911 in main#gather-all-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_912,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_917,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_917(t5,((C_word*)t0)[5],t1);}

/* map-loop248 in k911 in main#gather-all-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_917(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_917,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_942,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:57: g254 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1319 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:142: string-append */
t2=*((C_word*)lf[27]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[48],t1,lf[49]);}

/* f_1597 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1597,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_memq(t2,lf[72]));}

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
if(!C_demand_2(489)){
C_save(t1);
C_rereclaim2(489*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,83);
lf[4]=C_h_intern(&lf[4],13,"make-pathname");
lf[5]=C_h_intern(&lf[5],17,"get-output-string");
lf[6]=C_h_intern(&lf[6],7,"display");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[8]=C_h_intern(&lf[8],18,"open-output-string");
lf[9]=C_h_intern(&lf[9],17,"\003syspeek-c-string");
lf[10]=C_h_intern(&lf[10],15,"repository-path");
lf[12]=C_h_intern(&lf[12],14,"irregex-search");
lf[13]=C_h_intern(&lf[13],6,"filter");
lf[15]=C_h_intern(&lf[15],13,"pathname-file");
lf[16]=C_h_intern(&lf[16],4,"glob");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[20]=C_h_intern(&lf[20],17,"\003sysstring-append");
lf[21]=C_h_intern(&lf[21],11,"make-string");
lf[23]=C_h_intern(&lf[23],7,"version");
lf[24]=C_h_intern(&lf[24],5,"print");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\012 version: ");
lf[26]=C_h_intern(&lf[26],8,"->string");
lf[27]=C_h_intern(&lf[27],13,"string-append");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[29]=C_h_intern(&lf[29],19,"setup-api#read-info");
lf[30]=C_h_intern(&lf[30],8,"for-each");
lf[31]=C_h_intern(&lf[31],4,"sort");
lf[32]=C_h_intern(&lf[32],8,"string<\077");
lf[33]=C_h_intern(&lf[33],19,"\003sysstandard-output");
lf[34]=C_h_intern(&lf[34],3,"min");
lf[35]=C_h_intern(&lf[35],13,"terminal-size");
lf[36]=C_h_intern(&lf[36],14,"terminal-port\077");
lf[38]=C_h_intern(&lf[38],5,"files");
lf[39]=C_h_intern(&lf[39],10,"append-map");
lf[40]=C_h_intern(&lf[40],25,"\003sysimplicit-exit-handler");
lf[41]=C_h_intern(&lf[41],7,"irregex");
lf[42]=C_h_intern(&lf[42],3,"map");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\006(none)");
lf[44]=C_h_intern(&lf[44],17,"delete-duplicates");
lf[45]=C_h_intern(&lf[45],8,"string=\077");
lf[46]=C_h_intern(&lf[46],11,"concatenate");
lf[47]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002.\052\376\377\016");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001^");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001$");
lf[50]=C_h_intern(&lf[50],13,"irregex-quote");
lf[51]=C_h_intern(&lf[51],16,"\003sysglob->regexp");
lf[52]=C_h_intern(&lf[52],2,"pp");
lf[53]=C_h_intern(&lf[53],14,"string->symbol");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\013\012target at ");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[56]=C_h_intern(&lf[56],16,"\003sysdynamic-wind");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\010host at ");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\002:\012");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[60]=C_h_intern(&lf[60],4,"exit");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\002)usage: chicken-status [OPTION | PATTERN] ...\012\012  -h   -help                 "
"   show this message\012       -version                 show version and exit\012  -f "
"  -files                   list installed files\012       -exact                   "
"treat PATTERN as exact match (not a pattern)\012       -host                    whe"
"n cross-compiling, show status of host extensions only\012       -target           "
"       when cross-compiling, show status of target extensions only\012       -list "
"                   dump installed eggs and their versions in \042override\042 format");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\006-exact");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\005-list");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\002-f");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\006-files");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[70]=C_h_intern(&lf[70],15,"chicken-version");
lf[71]=C_h_intern(&lf[71],6,"append");
lf[72]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000f\376\377\016");
lf[73]=C_h_intern(&lf[73],5,"every");
lf[74]=C_h_intern(&lf[74],16,"\003sysstring->list");
lf[75]=C_h_intern(&lf[75],9,"substring");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[78]=C_h_intern(&lf[78],22,"command-line-arguments");
lf[79]=C_h_intern(&lf[79],8,"feature\077");
lf[80]=C_h_intern(&lf[80],14,"\000cross-chicken");
lf[81]=C_h_intern(&lf[81],11,"\003sysrequire");
lf[82]=C_h_intern(&lf[82],9,"setup-api");
C_register_lf2(lf,83,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_785,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1137 in for-each-loop326 in k1123 in main#list-installed-files in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1129(t3,((C_word*)t0)[4],t2);}

/* map-loop402 */
static void C_fcall f_1327(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1327,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:141: g408 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_1314 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1314,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:142: irregex-quote */
t4=C_fast_retrieve(lf[50]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1603 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_fast_retrieve(lf[74]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1102 in for-each-loop305 in k1086 in k1046 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1094(t3,((C_word*)t0)[4],t2);}

/* k786 in k784 */
static void C_ccall f_787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k788 in k786 in k784 */
static void C_ccall f_789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_791,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* map-loop429 */
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1362,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1387,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-status.scm:144: g435 */
t5=((C_word*)t0)[5];
((C_proc3)C_fast_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k947 in main#gather-all-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:58: glob */
t2=C_fast_retrieve(lf[16]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k784 */
static void C_ccall f_785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_787,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k941 in map-loop248 in k911 in main#gather-all-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_942,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_917(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_917(t6,((C_word*)t0)[5],t5);}}

/* k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_fcall f_1446(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1446,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f1766,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:113: print */
t4=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[61]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[62]))){
t2=lf[2] /* main#*target-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:165: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1245(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[63]))){
t2=lf[1] /* main#*host-extensions* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:168: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1245(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[64]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:171: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1245(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[65]))){
t2=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* chicken-status.scm:174: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1245(t5,((C_word*)t0)[2],t4,((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[66]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[67]));
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[9],0,C_SCHEME_TRUE);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* chicken-status.scm:177: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1245(t7,((C_word*)t0)[2],t6,((C_word*)t0)[6]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[68]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[69]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1523,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:180: chicken-version */
t8=C_fast_retrieve(lf[70]);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1529,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t7,C_fix(0)))){
t8=C_subchar(((C_word*)t0)[3],C_fix(0));
t9=t6;
f_1529(t9,C_i_char_equalp(C_make_character(45),t8));}
else{
t8=t6;
f_1529(t8,C_SCHEME_FALSE);}}}}}}}}}

/* k1117 in main#list-installed-eggs in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f_1118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1118,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,C_fix(2));
C_quotient(4,0,((C_word*)t0)[2],t2,C_fix(2));}

/* f1778 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f1778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:125: exit */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* f1773 in k1541 in k1536 in k1527 in k1444 in loop in k1651 in k805 in k802 in k800 in k798 in k796 in k794 in k792 in k790 in k788 in k786 in k784 */
static void C_ccall f1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-status.scm:125: exit */
t2=C_fast_retrieve(lf[60]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[110] = {
{"f1766:chicken_2dstatus_2escm",(void*)f1766},
{"f_1352:chicken_2dstatus_2escm",(void*)f_1352},
{"f_1060:chicken_2dstatus_2escm",(void*)f_1060},
{"f_1063:chicken_2dstatus_2escm",(void*)f_1063},
{"f_1066:chicken_2dstatus_2escm",(void*)f_1066},
{"f_1208:chicken_2dstatus_2escm",(void*)f_1208},
{"f_795:chicken_2dstatus_2escm",(void*)f_795},
{"f_793:chicken_2dstatus_2escm",(void*)f_793},
{"f_791:chicken_2dstatus_2escm",(void*)f_791},
{"f_1070:chicken_2dstatus_2escm",(void*)f_1070},
{"f_799:chicken_2dstatus_2escm",(void*)f_799},
{"f_797:chicken_2dstatus_2escm",(void*)f_797},
{"f_1076:chicken_2dstatus_2escm",(void*)f_1076},
{"f_1201:chicken_2dstatus_2escm",(void*)f_1201},
{"f_1217:chicken_2dstatus_2escm",(void*)f_1217},
{"f_835:chicken_2dstatus_2escm",(void*)f_835},
{"f_832:chicken_2dstatus_2escm",(void*)f_832},
{"f_1082:chicken_2dstatus_2escm",(void*)f_1082},
{"f_1087:chicken_2dstatus_2escm",(void*)f_1087},
{"f_1085:chicken_2dstatus_2escm",(void*)f_1085},
{"f_1652:chicken_2dstatus_2escm",(void*)f_1652},
{"f_829:chicken_2dstatus_2escm",(void*)f_829},
{"f_827:chicken_2dstatus_2escm",(void*)f_827},
{"f_824:chicken_2dstatus_2escm",(void*)f_824},
{"f_1094:chicken_2dstatus_2escm",(void*)f_1094},
{"f_1164:chicken_2dstatus_2escm",(void*)f_1164},
{"f_1167:chicken_2dstatus_2escm",(void*)f_1167},
{"f_811:chicken_2dstatus_2escm",(void*)f_811},
{"f_801:chicken_2dstatus_2escm",(void*)f_801},
{"f_803:chicken_2dstatus_2escm",(void*)f_803},
{"f_1172:chicken_2dstatus_2escm",(void*)f_1172},
{"f_807:chicken_2dstatus_2escm",(void*)f_807},
{"f_1646:chicken_2dstatus_2escm",(void*)f_1646},
{"f_1649:chicken_2dstatus_2escm",(void*)f_1649},
{"f_1644:chicken_2dstatus_2escm",(void*)f_1644},
{"f_876:chicken_2dstatus_2escm",(void*)f_876},
{"f_878:chicken_2dstatus_2escm",(void*)f_878},
{"f_967:chicken_2dstatus_2escm",(void*)f_967},
{"f_1022:chicken_2dstatus_2escm",(void*)f_1022},
{"f_1020:chicken_2dstatus_2escm",(void*)f_1020},
{"f_867:chicken_2dstatus_2escm",(void*)f_867},
{"f_951:chicken_2dstatus_2escm",(void*)f_951},
{"f_953:chicken_2dstatus_2escm",(void*)f_953},
{"f_865:chicken_2dstatus_2escm",(void*)f_865},
{"f_1245:chicken_2dstatus_2escm",(void*)f_1245},
{"f_1263:chicken_2dstatus_2escm",(void*)f_1263},
{"f_1261:chicken_2dstatus_2escm",(void*)f_1261},
{"f_1279:chicken_2dstatus_2escm",(void*)f_1279},
{"f_1033:chicken_2dstatus_2escm",(void*)f_1033},
{"f_859:chicken_2dstatus_2escm",(void*)f_859},
{"f_1256:chicken_2dstatus_2escm",(void*)f_1256},
{"f_1043:chicken_2dstatus_2escm",(void*)f_1043},
{"f_849:chicken_2dstatus_2escm",(void*)f_849},
{"f_1253:chicken_2dstatus_2escm",(void*)f_1253},
{"f_843:chicken_2dstatus_2escm",(void*)f_843},
{"f_1038:chicken_2dstatus_2escm",(void*)f_1038},
{"f_1523:chicken_2dstatus_2escm",(void*)f_1523},
{"f_1047:chicken_2dstatus_2escm",(void*)f_1047},
{"f_1048:chicken_2dstatus_2escm",(void*)f_1048},
{"f_1529:chicken_2dstatus_2escm",(void*)f_1529},
{"f_1387:chicken_2dstatus_2escm",(void*)f_1387},
{"f_1589:chicken_2dstatus_2escm",(void*)f_1589},
{"f_908:chicken_2dstatus_2escm",(void*)f_908},
{"f_903:chicken_2dstatus_2escm",(void*)f_903},
{"f_1551:chicken_2dstatus_2escm",(void*)f_1551},
{"f_1411:chicken_2dstatus_2escm",(void*)f_1411},
{"f_1537:chicken_2dstatus_2escm",(void*)f_1537},
{"f_1425:chicken_2dstatus_2escm",(void*)f_1425},
{"f_1416:chicken_2dstatus_2escm",(void*)f_1416},
{"f_1419:chicken_2dstatus_2escm",(void*)f_1419},
{"f_1543:chicken_2dstatus_2escm",(void*)f_1543},
{"f_1404:chicken_2dstatus_2escm",(void*)f_1404},
{"f_1549:chicken_2dstatus_2escm",(void*)f_1549},
{"f_1564:chicken_2dstatus_2escm",(void*)f_1564},
{"f_1560:chicken_2dstatus_2escm",(void*)f_1560},
{"f_1433:chicken_2dstatus_2escm",(void*)f_1433},
{"f_1427:chicken_2dstatus_2escm",(void*)f_1427},
{"f_1152:chicken_2dstatus_2escm",(void*)f_1152},
{"f_1517:chicken_2dstatus_2escm",(void*)f_1517},
{"f_1150:chicken_2dstatus_2escm",(void*)f_1150},
{"f_1406:chicken_2dstatus_2escm",(void*)f_1406},
{"f_1187:chicken_2dstatus_2escm",(void*)f_1187},
{"f_1184:chicken_2dstatus_2escm",(void*)f_1184},
{"f_1124:chicken_2dstatus_2escm",(void*)f_1124},
{"f_1120:chicken_2dstatus_2escm",(void*)f_1120},
{"f_1129:chicken_2dstatus_2escm",(void*)f_1129},
{"f_1196:chicken_2dstatus_2escm",(void*)f_1196},
{"f_1304:chicken_2dstatus_2escm",(void*)f_1304},
{"f_1199:chicken_2dstatus_2escm",(void*)f_1199},
{"f_912:chicken_2dstatus_2escm",(void*)f_912},
{"f_917:chicken_2dstatus_2escm",(void*)f_917},
{"f_1320:chicken_2dstatus_2escm",(void*)f_1320},
{"f_1597:chicken_2dstatus_2escm",(void*)f_1597},
{"toplevel:chicken_2dstatus_2escm",(void*)C_toplevel},
{"f_1138:chicken_2dstatus_2escm",(void*)f_1138},
{"f_1327:chicken_2dstatus_2escm",(void*)f_1327},
{"f_1314:chicken_2dstatus_2escm",(void*)f_1314},
{"f_1604:chicken_2dstatus_2escm",(void*)f_1604},
{"f_1103:chicken_2dstatus_2escm",(void*)f_1103},
{"f_787:chicken_2dstatus_2escm",(void*)f_787},
{"f_789:chicken_2dstatus_2escm",(void*)f_789},
{"f_1362:chicken_2dstatus_2escm",(void*)f_1362},
{"f_948:chicken_2dstatus_2escm",(void*)f_948},
{"f_785:chicken_2dstatus_2escm",(void*)f_785},
{"f_942:chicken_2dstatus_2escm",(void*)f_942},
{"f_1446:chicken_2dstatus_2escm",(void*)f_1446},
{"f_1118:chicken_2dstatus_2escm",(void*)f_1118},
{"f1778:chicken_2dstatus_2escm",(void*)f1778},
{"f1773:chicken_2dstatus_2escm",(void*)f1773},
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
o|hiding nonexported module bindings: main#grep 
o|hiding nonexported module bindings: main#gather-eggs 
o|hiding nonexported module bindings: main#gather-all-eggs 
o|hiding nonexported module bindings: main#format-string 
o|hiding nonexported module bindings: main#get-terminal-width 
o|hiding nonexported module bindings: main#list-installed-eggs 
o|hiding nonexported module bindings: main#list-installed-files 
o|hiding nonexported module bindings: main#dump-installed-versions 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  for-each		3
S|  map		6
S|  sprintf		1
o|eliminated procedure checks: 27 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (string-ref string fixnum)
o|  1 (positive? fixnum)
o|  2 (string-length string)
o|  7 (cdr pair)
o|  10 (string=? string string)
o|  1 (current-output-port)
o|  3 (string-append string string)
o|  2 (##sys#check-list (or pair list) *)
o|inlining procedure: k814 
o|inlining procedure: k814 
o|propagated global variable: g206207 irregex-search 
o|inlining procedure: k920 
o|inlining procedure: k920 
o|merged explicitly consed rest parameter: tmp277280 
o|inlining procedure: k968 
o|inlining procedure: k968 
o|inlining procedure: k1015 
o|substituted constant variable: default-width294 
o|substituted constant variable: default-width294 
o|inlining procedure: k1015 
o|substituted constant variable: default-width294 
o|propagated global variable: cop295 ##sys#standard-output 
o|inlining procedure: k1052 
o|consed rest parameter at call site: "(chicken-status.scm:86) main#format-string" 3 
o|substituted constant variable: a1067 
o|consed rest parameter at call site: "(chicken-status.scm:85) main#format-string" 3 
o|inlining procedure: k1052 
o|inlining procedure: k1097 
o|inlining procedure: k1097 
o|inlining procedure: k1132 
o|inlining procedure: k1132 
o|inlining procedure: k1156 
o|inlining procedure: k1156 
o|contracted procedure: "(chicken-status.scm:192) main#main" 
o|inlining procedure: k1264 
o|inlining procedure: k1264 
o|contracted procedure: "(chicken-status.scm:145) main#gather-eggs" 
o|inlining procedure: k881 
o|inlining procedure: k881 
o|inlining procedure: k1282 
o|inlining procedure: k1282 
o|inlining procedure: k1311 
o|inlining procedure: k1330 
o|inlining procedure: k1330 
o|inlining procedure: k1311 
o|inlining procedure: k1365 
o|inlining procedure: k1365 
o|inlining procedure: k1248 
o|contracted procedure: "(chicken-status.scm:150) main#dump-installed-versions" 
o|inlining procedure: k1189 
o|inlining procedure: k1189 
o|inlining procedure: k1211 
o|inlining procedure: k1211 
o|inlining procedure: k1397 
o|inlining procedure: k1397 
o|inlining procedure: k1248 
o|substituted constant variable: a1454 
o|inlining procedure: k1450 
o|inlining procedure: k1450 
o|substituted constant variable: a1465 
o|substituted constant variable: a1476 
o|inlining procedure: k1472 
o|inlining procedure: k1472 
o|substituted constant variable: a1487 
o|substituted constant variable: a1498 
o|inlining procedure: k1494 
o|inlining procedure: k1494 
o|substituted constant variable: a1512 
o|inlining procedure: k1524 
o|inlining procedure: k1538 
o|inlining procedure: k1567 
o|inlining procedure: k1567 
o|inlining procedure: k1538 
o|substituted constant variable: main#*short-options* 
o|substituted constant variable: a1611 
o|inlining procedure: k1524 
o|substituted constant variable: a1629 
o|substituted constant variable: a1632 
o|substituted constant variable: a1634 
o|substituted constant variable: a1636 
o|inlining procedure: k1637 
o|inlining procedure: k1637 
o|substituted constant variable: a1641 
o|replaced variables: 100 
o|removed binding forms: 47 
o|contracted procedure: "(chicken-status.scm:79) main#get-terminal-width" 
o|substituted constant variable: r10161660 
o|substituted constant variable: r11571668 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|inlining procedure: k1273 
o|propagated global variable: g4614621715 main#list-installed-files 
o|inlining procedure: k1273 
o|propagated global variable: g4614621720 main#list-installed-eggs 
o|substituted constant variable: a11881683 
o|replaced variables: 6 
o|removed binding forms: 121 
o|inlining procedure: "(chicken-status.scm:162) main#usage" 
o|inlining procedure: "(chicken-status.scm:188) main#usage" 
o|inlining procedure: "(chicken-status.scm:189) main#usage" 
o|replaced variables: 5 
o|removed binding forms: 13 
o|inlining procedure: k1117 
o|inlining procedure: k1117 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code3651764 
o|substituted constant variable: code3651771 
o|substituted constant variable: code3651776 
o|removed binding forms: 2 
o|substituted constant variable: a11161786 
o|folded constant expression: (- (quote 80) (quote 2)) 
o|substituted constant variable: a11161787 
o|folded constant expression: (- (quote 80) (quote 2)) 
o|removed binding forms: 4 
o|inlining procedure: k1114 
o|inlining procedure: k1114 
o|removed binding forms: 2 
o|substituted constant variable: a11131828 
o|folded constant expression: (quotient (quote 78) (quote 2)) 
o|substituted constant variable: a11131829 
o|folded constant expression: (quotient (quote 78) (quote 2)) 
o|removed binding forms: 2 
o|simplifications: ((if . 7) (##core#call . 83)) 
o|  call simplifications:
o|    string=?
o|    char=?
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    list
o|    ##sys#call-with-values
o|    list-ref
o|    zero?
o|    -
o|    quotient
o|    ##sys#check-list	7
o|    assq	3
o|    cadr	2
o|    car	3
o|    null?	7
o|    cdr	3
o|    string-length
o|    fx-
o|    fxmax
o|    pair?	9
o|    cons	7
o|    ##sys#setslot	6
o|    ##sys#slot	18
o|    not
o|contracted procedure: k816 
o|contracted procedure: k922 
o|contracted procedure: k925 
o|contracted procedure: k934 
o|contracted procedure: k944 
o|contracted procedure: k1005 
o|contracted procedure: k956 
o|contracted procedure: k999 
o|contracted procedure: k958 
o|contracted procedure: k993 
o|contracted procedure: k960 
o|contracted procedure: k987 
o|contracted procedure: k962 
o|contracted procedure: k964 
o|contracted procedure: k985 
o|contracted procedure: k982 
o|contracted procedure: k1050 
o|contracted procedure: k1072 
o|contracted procedure: k1088 
o|contracted procedure: k1099 
o|contracted procedure: k1108 
o|contracted procedure: k1111 
o|contracted procedure: k1114 
o|contracted procedure: k1026 
o|contracted procedure: k1134 
o|contracted procedure: k1143 
o|contracted procedure: k1146 
o|contracted procedure: k1154 
o|contracted procedure: k1250 
o|contracted procedure: k1257 
o|contracted procedure: k1267 
o|contracted procedure: k872 
o|contracted procedure: k883 
o|contracted procedure: k886 
o|contracted procedure: k895 
o|contracted procedure: k905 
o|contracted procedure: k1284 
o|contracted procedure: k1287 
o|contracted procedure: k1296 
o|contracted procedure: k1306 
o|contracted procedure: k1308 
o|contracted procedure: k1321 
o|contracted procedure: k1332 
o|contracted procedure: k1335 
o|contracted procedure: k1344 
o|contracted procedure: k1354 
o|contracted procedure: k1356 
o|contracted procedure: k1367 
o|contracted procedure: k1370 
o|contracted procedure: k1379 
o|contracted procedure: k1389 
o|contracted procedure: k1174 
o|contracted procedure: k1180 
o|contracted procedure: k1189 
o|contracted procedure: k1202 
o|contracted procedure: k1213 
o|contracted procedure: k1222 
o|contracted procedure: k1225 
o|contracted procedure: k1400 
o|contracted procedure: k1437 
o|contracted procedure: k1442 
o|contracted procedure: k1609 
o|contracted procedure: k1533 
o|contracted procedure: k1556 
o|contracted procedure: k1569 
o|contracted procedure: k1572 
o|contracted procedure: k1581 
o|contracted procedure: k1591 
o|contracted procedure: k1619 
o|contracted procedure: k1622 
o|simplifications: ((let . 14)) 
o|removed binding forms: 70 
o|inlining procedure: k927 
o|inlining procedure: k927 
o|inlining procedure: k888 
o|inlining procedure: k888 
o|inlining procedure: k1289 
o|inlining procedure: k1289 
o|inlining procedure: k1337 
o|inlining procedure: k1337 
o|inlining procedure: k1372 
o|inlining procedure: k1372 
o|inlining procedure: k1574 
o|inlining procedure: k1574 
o|replaced variables: 13 
o|simplifications: ((if . 2)) 
o|removed binding forms: 25 
o|contracted procedure: k1499 
o|contracted procedure: k1513 
o|removed binding forms: 2 
o|customizable procedures: (k1444 k1527 map-loop514539 loop373 for-each-loop346359 map-loop429446 map-loop402420 map-loop380453 main#gather-all-eggs map-loop213238 for-each-loop326338 for-each-loop305317 main#format-string main#repo-path map-loop248265) 
o|calls to known targets: 53 
o|fast box initializations: 10 
o|fast global references: 24 
o|fast global assignments: 13 
o|dropping unused closure argument: f_811 
o|dropping unused closure argument: f_953 
o|dropping unused closure argument: f_908 
*/
/* end of file */
