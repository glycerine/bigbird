/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-profile.c
   used units: library eval srfi_2d1 srfi_2d13 srfi_2d69 posix utils
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d69_toplevel)
C_externimport void C_ccall C_srfi_2d69_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[93];
static double C_possibly_force_alignment;


C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1661)
static void C_fcall f_1661(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_669)
static void C_fcall f_669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_fcall f_1605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1448)
static void C_fcall f_1448(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_959)
static void C_ccall f_959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_715)
static void C_fcall f_715(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_fcall f_1091(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1631)
static void C_fcall f_1631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_733)
static void C_fcall f_733(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_fcall f_1528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1343)
static void C_fcall f_1343(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_fcall f_1339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1332)
static void C_fcall f_1332(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1194)
static void C_fcall f_1194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_847)
static void C_fcall f_847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1238)
static void C_ccall f_1238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1231)
static void C_ccall f_1231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1313)
static void C_fcall f_1313(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_806)
static void C_ccall f_806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1255)
static void C_fcall f_1255(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1102)
static void C_fcall f_1102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_707)
static void C_ccall f_707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_987)
static void C_fcall f_987(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1050)
static void C_fcall f_1050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_630)
static void C_fcall f_630(C_word t0) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1395)
static void C_fcall f_1395(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_640)
static void C_ccall f_640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_614)
static void C_ccall f_614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1065)
static void C_ccall f_1065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_fcall f_1599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_fcall f_1490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1459)
static void C_fcall f_1459(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_678)
static void C_fcall f_678(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1661)
static void C_fcall trf_1661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1661(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1661(t0,t1,t2,t3);}

C_noret_decl(trf_669)
static void C_fcall trf_669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_669(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_669(t0,t1,t2);}

C_noret_decl(trf_1605)
static void C_fcall trf_1605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1605(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1605(t0,t1);}

C_noret_decl(trf_1448)
static void C_fcall trf_1448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1448(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1448(t0,t1,t2,t3);}

C_noret_decl(trf_715)
static void C_fcall trf_715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_715(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_715(t0,t1);}

C_noret_decl(trf_1091)
static void C_fcall trf_1091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1091(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1091(t0,t1,t2,t3);}

C_noret_decl(trf_1631)
static void C_fcall trf_1631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1631(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1631(t0,t1,t2);}

C_noret_decl(trf_733)
static void C_fcall trf_733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_733(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_733(t0,t1);}

C_noret_decl(trf_1528)
static void C_fcall trf_1528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1528(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1528(t0,t1,t2);}

C_noret_decl(trf_1343)
static void C_fcall trf_1343(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1343(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1343(t0,t1);}

C_noret_decl(trf_1339)
static void C_fcall trf_1339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1339(t0,t1);}

C_noret_decl(trf_1332)
static void C_fcall trf_1332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1332(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1332(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1194)
static void C_fcall trf_1194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1194(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1194(t0,t1,t2);}

C_noret_decl(trf_847)
static void C_fcall trf_847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_847(t0,t1);}

C_noret_decl(trf_1313)
static void C_fcall trf_1313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1313(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1313(t0,t1,t2);}

C_noret_decl(trf_1255)
static void C_fcall trf_1255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1255(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1255(t0,t1);}

C_noret_decl(trf_1102)
static void C_fcall trf_1102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1102(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1102(t0,t1);}

C_noret_decl(trf_987)
static void C_fcall trf_987(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_987(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_987(t0,t1,t2);}

C_noret_decl(trf_1050)
static void C_fcall trf_1050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1050(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1050(t0,t1,t2);}

C_noret_decl(trf_630)
static void C_fcall trf_630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_630(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_630(t0);}

C_noret_decl(trf_1395)
static void C_fcall trf_1395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1395(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1395(t0,t1,t2);}

C_noret_decl(trf_1599)
static void C_fcall trf_1599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1599(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1599(t0,t1);}

C_noret_decl(trf_1490)
static void C_fcall trf_1490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1490(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1490(t0,t1,t2);}

C_noret_decl(trf_1459)
static void C_fcall trf_1459(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1459(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1459(t0,t1);}

C_noret_decl(trf_678)
static void C_fcall trf_678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_678(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_678(t0,t1);}

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

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

/* k683 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
/* chicken-profile.scm:76: error */
t3=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_701,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:77: sort */
t5=C_fast_retrieve(lf[62]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t1,t4);}}

/* k1080 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1081,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_i_check_list_2(t1,lf[24]);
t5=C_i_check_list_2(t3,lf[24]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1089,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1091,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1091(t10,t6,t1,t3);}

/* k685 in k683 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[0] /* (set! file ...) */,t1);
t3=((C_word*)t0)[2];
f_678(t3,t2);}

/* k1655 in map-loop153 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1656,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1631(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1631(t6,((C_word*)t0)[5],t5);}}

/* k1415 in k1385 in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:231: print */
t2=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* foldl137 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1661(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1661,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1676,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1685,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=C_slot(t2,C_fix(0));
/* chicken-profile.scm:188: g144 */
t8=t5;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t3,t7);}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_669(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(24);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_669,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_678,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[0])){
t4=t3;
f_678(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_684,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:74: glob */
t5=C_fast_retrieve(lf[69]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[70]);}}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_715,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t11=t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_733,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_754,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t3,lf[73]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[74]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
/* chicken-profile.scm:94: print-usage */
f_630(t12);}
else{
if(C_truep((C_truep(C_i_equalp(t3,lf[76]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[77]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_771,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_777,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:97: chicken-version */
t15=C_fast_retrieve(lf[79]);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[80]))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_785,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_791,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:100: chicken-version */
t15=C_fast_retrieve(lf[79]);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[81]))){
t13=lf[1] /* no-unused */ =C_SCHEME_TRUE;;
/* chicken-profile.scm:113: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[82]))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_806,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:103: next-number */
t14=t9;
f_733(t14,t13);}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[83]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,lf[14]);
/* chicken-profile.scm:113: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[84]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,lf[15]);
/* chicken-profile.scm:113: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[85]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,lf[16]);
/* chicken-profile.scm:113: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[86]))){
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,lf[17]);
/* chicken-profile.scm:113: loop */
t30=t1;
t31=((C_word*)t6)[1];
t1=t30;
t2=t31;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[87]))){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_841,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t6,a[5]=t12,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:108: next-arg */
t14=((C_word*)t8)[1];
f_715(t14,t13);}
else{
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_847,a[2]=t12,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t14=C_block_size(t3);
if(C_truep(C_fixnum_greaterp(t14,C_fix(1)))){
t15=C_subchar(t3,C_fix(0));
t16=t13;
f_847(t16,C_i_char_equalp(C_make_character(45),t15));}
else{
t15=t13;
f_847(t15,C_SCHEME_FALSE);}}}}}}}}}}}}}

/* f_1558 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1558(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1558,3,t0,t1,t2);}
if(C_truep(C_i_cadr(t2))){
t3=t2;
t4=C_u_i_cdr(t3);
t5=C_u_i_car(t4);
t6=C_i_zerop(t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?lf[1]:C_SCHEME_FALSE));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1552 in map-loop191 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1553,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1528(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1528(t6,((C_word*)t0)[5],t5);}}

/* k1421 in k1385 in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1422,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[2]);
t3=C_a_i_minus(&a,2,t2,C_fix(1));
t4=C_a_i_times(&a,2,C_fix(2),t3);
t5=C_a_i_plus(&a,2,t1,t4);
/* chicken-profile.scm:231: make-string */
t6=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],t5,C_make_character(45));}

/* f_1676 in foldl137 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1676,4,t0,t1,t2,t3);}
t4=C_i_caddr(t3);
/* chicken-profile.scm:188: max */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}

/* f_1433 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1433,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_i_check_list_2(t2,lf[24]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1439,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1490,a[2]=t11,a[3]=t15,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1490(t17,t13,t2);}

/* k1437 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1439,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[24]);
t4=C_i_check_list_2(t2,lf[24]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1448(t8,((C_word*)t0)[5],t1,t2);}

/* k1604 in k1598 */
static void C_fcall f_1605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1605,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t2);
/* chicken-profile.scm:191: append */
t4=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],((C_word*)t0)[4],t3);}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0));
/* chicken-profile.scm:191: append */
t3=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}}

/* k1574 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1576,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:203: take */
t3=C_fast_retrieve(lf[60]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],lf[5]);}
else{
t2=((C_word*)t0)[3];
f_1255(t2,C_SCHEME_UNDEFINED);}}

/* map-loop231 in k1437 */
static void C_fcall f_1448(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1448,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1476,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-profile.scm:224: g237 */
t9=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k698 in k683 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(t1);
t3=C_mutate(&lf[0] /* (set! file ...) */,t2);
t4=((C_word*)t0)[2];
f_678(t4,t3);}

/* sort-by-name in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_959,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_966,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-profile.scm:137: symbol->string */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k709 in k706 */
static void C_ccall f_710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_greaterp(((C_word*)t0)[3],t1));}

/* next-arg in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_715(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_715,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* chicken-profile.scm:86: error */
t2=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[71],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1627 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:189: sort */
t2=C_fast_retrieve(lf[62]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[20]);}

/* map-loop68 in k1080 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1091(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1091,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1119,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-profile.scm:161: g74 */
t9=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* map-loop153 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1631(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1631,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1656,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:189: g159 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

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
if(!C_demand_2(416)){
C_save(t1);
C_rereclaim2(416*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,93);
lf[7]=C_h_intern(&lf[7],4,"exit");
lf[8]=C_h_intern(&lf[8],7,"display");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\001\242)\012 -no-unused                remove procedures that are never called\012 -top "
"N                    display only the top N entries\012 -help                     s"
"how this text and exit\012 -version                  show version and exit\012 -releas"
"e                  show release number and exit\012\012 FILENAME defaults to the `PROF"
"ILE.<number>\047, selecting the one with\012 the highest modification time, in case mu"
"ltiple profiles exist.\012");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[12]=C_decode_literal(C_heaptop,"\376B\000\001\315Usage: chicken-profile [FILENAME | OPTION] ...\012\012 -sort-by-calls            "
"sort output by call frequency\012 -sort-by-time             sort output by procedur"
"e execution time\012 -sort-by-avg              sort output by average procedure exe"
"cution time\012 -sort-by-name             sort output alphabetically by procedure n"
"ame\012 -decimals DDD             set number of decimals for seconds, average and\012 "
"                          percent columns (three digits, default: ");
lf[13]=C_h_intern(&lf[13],19,"\003sysprint-to-string");
lf[18]=C_h_intern(&lf[18],8,"string<\077");
lf[19]=C_h_intern(&lf[19],14,"symbol->string");
lf[22]=C_h_intern(&lf[22],17,"hash-table->alist");
lf[23]=C_h_intern(&lf[23],4,"read");
lf[24]=C_h_intern(&lf[24],3,"map");
lf[25]=C_h_intern(&lf[25],15,"hash-table-set!");
lf[26]=C_h_intern(&lf[26],22,"hash-table-ref/default");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016");
lf[28]=C_h_intern(&lf[28],15,"make-hash-table");
lf[29]=C_h_intern(&lf[29],3,"eq\077");
lf[31]=C_h_intern(&lf[31],17,"\003sysstring-append");
lf[32]=C_h_intern(&lf[32],11,"make-string");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[36]=C_h_intern(&lf[36],13,"string-append");
lf[37]=C_h_intern(&lf[37],9,"substring");
lf[38]=C_h_intern(&lf[38],18,"\003sysfixnum->string");
lf[39]=C_h_intern(&lf[39],8,"truncate");
lf[40]=C_h_intern(&lf[40],4,"expt");
lf[41]=C_h_intern(&lf[41],25,"\003sysimplicit-exit-handler");
lf[42]=C_h_intern(&lf[42],5,"foldl");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\010overflow");
lf[44]=C_h_intern(&lf[44],28,"\003syssymbol->qualified-string");
lf[45]=C_h_intern(&lf[45],5,"fifth");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\011procedure");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\005calls");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\007seconds");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\007average");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\007percent");
lf[51]=C_h_intern(&lf[51],5,"print");
lf[52]=C_h_intern(&lf[52],11,"string-join");
lf[53]=C_h_intern(&lf[53],8,"for-each");
lf[54]=C_h_intern(&lf[54],6,"reduce");
lf[55]=C_h_intern(&lf[55],1,"+");
lf[56]=C_h_intern(&lf[56],3,"max");
lf[57]=C_h_intern(&lf[57],4,"fold");
lf[58]=C_h_intern(&lf[58],15,"\003sysmake-string");
lf[59]=C_h_intern(&lf[59],6,"remove");
lf[60]=C_h_intern(&lf[60],4,"take");
lf[61]=C_h_intern(&lf[61],6,"append");
lf[62]=C_h_intern(&lf[62],4,"sort");
lf[63]=C_h_intern(&lf[63],20,"with-input-from-file");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\011reading `");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\006\047 ...\012");
lf[66]=C_h_intern(&lf[66],5,"error");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\021no PROFILEs found");
lf[68]=C_h_intern(&lf[68],22,"file-modification-time");
lf[69]=C_h_intern(&lf[69],4,"glob");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\011PROFILE.\052");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\032missing argument to option");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\032invalid argument to option");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\032chicken-profile - Version ");
lf[79]=C_h_intern(&lf[79],15,"chicken-version");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\010-release");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\012-no-unused");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\004-top");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\016-sort-by-calls");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-time");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\014-sort-by-avg");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\015-sort-by-name");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\011-decimals");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000$invalid argument to -decimals option");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\016invalid option");
lf[92]=C_h_intern(&lf[92],22,"command-line-arguments");
C_register_lf2(lf,93,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* next-number in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_733(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_733,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_752,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:91: next-arg */
t3=((C_word*)((C_word*)t0)[3])[1];
f_715(t3,t2);}

/* map-loop191 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1528,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:204: g197 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1403 in for-each-loop326 in k1387 in k1385 in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in ... */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1395(t3,((C_word*)t0)[4],t2);}

/* k1227 in k1203 in k1237 in format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1231,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:182: expt */
t3=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(10),((C_word*)t0)[3]);}

/* k1221 in k1203 in k1237 in format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
/* ##sys#fixnum->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[38]))(3,*((C_word*)lf[38]+1),((C_word*)t0)[2],t2);}

/* k753 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:113: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_669(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k751 in next-number in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_752,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
if(C_truep(t2)){
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* chicken-profile.scm:92: error */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[72],((C_word*)t0)[3]);}}
else{
/* chicken-profile.scm:92: error */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[72],((C_word*)t0)[3]);}}

/* format-string in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1135(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1135r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1135r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1135r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(5);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_make_character(32):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_string_length(t2);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1149,a[2]=t6,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t15=C_fixnum_difference(t3,t13);
t16=C_i_fixnum_max(C_fix(0),t15);
/* chicken-profile.scm:168: make-string */
t17=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t14,t16,t10);}

/* k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1528(t6,t2,t1);}

/* k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1303,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_list5(&a,5,lf[46],lf[47],lf[48],lf[49],lf[50]);
t4=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1309,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
((C_proc4)C_fast_retrieve_symbol_proc(lf[58]))(4,*((C_word*)lf[58]+1),t5,C_fix(2),C_make_character(32));}

/* k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1433,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t5=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);
/* chicken-profile.scm:223: fold */
t6=C_fast_retrieve(lf[57]);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,t3,t4,t5);}

/* k1212 in k1203 in k1237 in format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1213,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* chicken-profile.scm:178: substring */
t3=*((C_word*)lf[37]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],t1,C_fix(1),t2);}

/* k1209 in k1203 in k1237 in format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:175: string-append */
t2=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1246,2,t0,t1);}
t2=t1;
t3=C_i_check_list_2(t2,lf[42]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1251,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_1661(t8,t4,t2,C_fix(0));}

/* k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1246,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:187: with-input-from-file */
t3=C_fast_retrieve(lf[63]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[0],lf[21]);}

/* k1691 in k1689 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1689 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1690,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[41]))(2,*((C_word*)lf[41]+1),t3);}

/* k1693 in k1689 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1698,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_669,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_669(t5,((C_word*)t0)[2],t1);}

/* k770 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:98: exit */
t2=C_fast_retrieve(lf[7]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k776 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:97: print */
t2=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[78],t1);}

/* k1118 in map-loop68 in k1080 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1119,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1102,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_1102(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_1102(t5,t4);}}

/* k1683 in foldl137 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_1661(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k784 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:101: exit */
t2=C_fast_retrieve(lf[7]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1148 in format-string in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
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
((C_proc4)C_fast_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[3];
t3=t1;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),((C_word*)t0)[4],t2,t3);}}

/* k790 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:100: print */
t2=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1271 in k1265 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* chicken-profile.scm:210: number->string */
C_number_to_string(3,0,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_1275(2,t3,lf[43]);}}

/* k1274 in k1271 in k1265 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_divide(&a,2,((C_word*)t0)[6],C_fix(1000));
/* chicken-profile.scm:211: format-real */
f_1194(t2,t3,lf[2]);}

/* k1277 in k1274 in k1271 in k1265 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_divide(&a,2,((C_word*)t0)[6],C_fix(1000));
/* chicken-profile.scm:212: format-real */
f_1194(t2,t3,lf[3]);}

/* k1328 in print-row in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:229: string-join */
t2=C_fast_retrieve(lf[52]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1040,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:156: make-hash-table */
t3=C_fast_retrieve(lf[28]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[29]+1));}

/* k1342 in k1362 in k1337 in map-loop290 in print-row in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in ... */
static void C_fcall f_1343(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=C_slot(((C_word*)t0)[6],C_fix(1));
t6=((C_word*)((C_word*)t0)[7])[1];
f_1332(t6,((C_word*)t0)[8],t3,t4,t5);}

/* k1319 in print-row in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:229: print */
t2=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1025 in k1021 in k1017 in k840 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[4] /* (set! percent-digits ...) */,t1);
/* chicken-profile.scm:113: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_669(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k1337 in map-loop290 in print-row in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 in ... */
static void C_fcall f_1339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1339,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(((C_word*)t0)[4],C_fix(0));
t5=C_slot(((C_word*)t0)[5],C_fix(0));
/* chicken-profile.scm:229: g296 */
t6=lf[30];
f_1135(5,t6,t2,t3,t4,t5);}
else{
t2=((C_word*)((C_word*)t0)[8])[1];
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1021 in k1017 in k840 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1023,2,t0,t1);}
t2=C_mutate(&lf[3] /* (set! average-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:152: arg-digit */
t4=C_retrieve2(lf[88],"arg-digit");
f_987(t4,t3,C_fix(2));}

/* map-loop290 in print-row in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1332(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1332,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1339,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_1339(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_1339(t6,C_SCHEME_FALSE);}}

/* sort-by-calls in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_873(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_873,4,t0,t1,t2,t3);}
t4=C_i_cadr(t2);
t5=C_i_cadr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=C_i_caddr(t2);
t7=C_i_caddr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t4)?(C_truep(t5)?C_i_greaterp(t4,t5):C_SCHEME_TRUE):C_SCHEME_TRUE));}}

/* sort-by-time in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_905,4,t0,t1,t2,t3);}
t4=C_i_caddr(t2);
t5=C_i_caddr(t3);
if(C_truep(C_i_nequalp(t4,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_car(t7);
t9=t3;
t10=C_u_i_cdr(t9);
t11=C_u_i_car(t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_i_greaterp(t8,t11));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_greaterp(t4,t5));}}

/* format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1194(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1194,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1238,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:174: truncate */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k845 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_847(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* chicken-profile.scm:110: error */
t2=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[91],((C_word*)t0)[3]);}
else{
if(C_truep(lf[0])){
/* chicken-profile.scm:111: print-usage */
f_630(((C_word*)t0)[2]);}
else{
t2=C_mutate(&lf[0] /* (set! file ...) */,((C_word*)t0)[3]);
/* chicken-profile.scm:113: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_669(t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k840 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_841,2,t0,t1);}
t2=C_i_string_length(t1);
t3=C_eqp(t2,C_fix(3));
if(C_truep(t3)){
t4=C_mutate(&lf[88] /* (set! arg-digit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=t1,tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:150: arg-digit */
t6=C_retrieve2(lf[88],"arg-digit");
f_987(t6,t5,C_fix(0));}
else{
/* chicken-profile.scm:153: error */
t4=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],lf[90],t1);}}

/* k1237 in format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1238,2,t0,t1);}
t2=C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#fixnum->string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[38]))(3,*((C_word*)lf[38]+1),t3,t2);}

/* k1230 in k1227 in k1203 in k1237 in format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1231,2,t0,t1);}
t2=C_a_i_times(&a,2,((C_word*)t0)[2],t1);
/* chicken-profile.scm:181: truncate */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1048,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1050,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1050(t5,((C_word*)t0)[3],t1);}

/* k1041 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:164: hash-table->alist */
t2=C_fast_retrieve(lf[22]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1040,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1042,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1048,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:157: read */
t4=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* print-row in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1313(C_word t0,C_word t1,C_word t2){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1313,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=lf[30];
t9=((C_word*)t0)[2];
t10=C_i_check_list_2(t2,lf[24]);
t11=C_i_check_list_2(t9,lf[24]);
t12=C_i_check_list_2(((C_word*)t0)[3],lf[24]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1330,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1332,a[2]=t7,a[3]=t15,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_1332(t17,t13,t2,t9,((C_word*)t0)[3]);}

/* k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1313,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1386,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:230: print-row */
t4=t2;
f_1313(t4,t3,((C_word*)t0)[6]);}

/* k1385 in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1416,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:231: reduce */
t5=C_fast_retrieve(lf[54]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[55]+1),C_fix(0),((C_word*)t0)[6]);}

/* k1387 in k1385 in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1388,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[53]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1395,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1395(t7,((C_word*)t0)[4],t2);}

/* k1265 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* chicken-profile.scm:209: ##sys#symbol->qualified-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),t2,t4);}

/* k804 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[5] /* (set! top ...) */,t1);
/* chicken-profile.scm:113: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_669(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* sort-by-avg in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_931,4,t0,t1,t2,t3);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
if(C_truep(C_i_eqvp(t4,t5))){
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_u_i_car(t8);
t10=t3;
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_i_greaterp(t9,t13));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_greaterp(t4,t5));}}

/* k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1255(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1255,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1257,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1558,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:214: remove */
t9=C_fast_retrieve(lf[59]);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,((C_word*)((C_word*)t0)[2])[1]);}

/* k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1253,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1255,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1576,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_length(((C_word*)t2)[1]);
/* chicken-profile.scm:202: < */
C_lessp(5,0,t4,C_fix(0),lf[5],t5);}

/* f_1257 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1257,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=C_i_cadddr(t2);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1266,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:208: fifth */
t7=C_fast_retrieve(lf[45]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k1101 in k1118 in map-loop68 in k1080 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1102(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_1091(t5,((C_word*)t0)[7],t3,t4);}

/* k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1251(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1585,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=((C_word*)t0)[3];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1631,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_1631(t13,t9,t8);}

/* k1362 in k1337 in map-loop290 in print-row in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in ... */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1363,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1343,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_1343(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[8])+1,t2);
t5=t3;
f_1343(t5,t4);}}

/* k1283 in k1280 in k1277 in k1274 in k1271 in k1265 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1284,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1));}

/* k1203 in k1237 in format-real in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=C_i_greaterp(((C_word*)t0)[2],C_fix(0));
t3=(C_truep(t2)?lf[34]:lf[35]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1210,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1213,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1228,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:182: - */
C_minus(5,0,t7,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(-1));}

/* k1280 in k1277 in k1274 in k1271 in k1265 */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:213: format-real */
f_1194(t2,((C_word*)t0)[6],lf[4]);}

/* k965 in sort-by-name in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_969,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* chicken-profile.scm:137: symbol->string */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k968 in k965 in sort-by-name in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:137: string<? */
t2=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k706 */
static void C_ccall f_707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_710,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:80: file-modification-time */
t3=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* f_701 in k683 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_701,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_707,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:79: file-modification-time */
t5=C_fast_retrieve(lf[68]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* arg-digit in k840 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_987(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_987,NULL,3,t0,t1,t2);}
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_minus(&a,2,t4,C_fix(48));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_997,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:147: <= */
C_less_or_equal_p(5,0,t6,C_fix(0),t5,C_fix(9));}

/* k1058 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:157: read */
t3=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_1050(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1050,NULL,3,t0,t1,t2);}
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1059,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1070,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1081,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t8,a[7]=t6,a[8]=t9,tmp=(C_word)a,a+=9,tmp);
t11=t2;
t12=C_u_i_car(t11);
/* chicken-profile.scm:162: hash-table-ref/default */
t13=C_fast_retrieve(lf[26]);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t10,((C_word*)t0)[3],t12,lf[27]);}}

/* print-usage in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_630(C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_630,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_634,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_640,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[9],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,lf[4],t4);
t6=C_a_i_cons(&a,2,lf[10],t5);
t7=C_a_i_cons(&a,2,lf[3],t6);
t8=C_a_i_cons(&a,2,lf[11],t7);
t9=C_a_i_cons(&a,2,lf[2],t8);
t10=C_a_i_cons(&a,2,lf[12],t9);
/* chicken-profile.scm:44: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[13]))(3,*((C_word*)lf[13]+1),t3,t10);}

/* k633 in print-usage in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:66: exit */
t2=C_fast_retrieve(lf[7]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(64));}

/* k995 in arg-digit in k840 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_nequalp(((C_word*)t0)[2],C_fix(9));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_fix(8):((C_word*)t0)[2]));}
else{
/* chicken-profile.scm:149: error */
t2=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[89],((C_word*)t0)[4]);}}

/* for-each-loop326 in k1387 in k1385 in k1310 in k1308 in k1301 in k1299 in k1254 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 in ... */
static void C_fcall f_1395(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1395,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1404,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-profile.scm:234: g327 */
t5=((C_word*)t0)[3];
f_1313(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k639 in print-usage in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:45: display */
t2=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k615 in k613 in k611 in k609 */
static void C_ccall f_616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d69_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f_1070 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1070,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t2)?(C_truep(t3)?C_a_i_plus(&a,2,t2,t3):C_SCHEME_FALSE):C_SCHEME_FALSE));}

/* k609 */
static void C_ccall f_610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k611 in k609 */
static void C_ccall f_612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_614,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k613 in k611 in k609 */
static void C_ccall f_614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1064 in k1058 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
f_1050(t2,((C_word*)t0)[3],t1);}

/* k1598 */
static void C_fcall f_1599(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1599,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1605,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t4=C_a_i_divide(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t5=t3;
f_1605(t5,C_a_i_times(&a,2,t4,C_fix(100)));}
else{
t4=t3;
f_1605(t4,C_SCHEME_FALSE);}}

/* map-loop252 */
static void C_fcall f_1490(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1490,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_622,2,t0,t1);}
t2=lf[0] /* file */ =C_SCHEME_FALSE;;
t3=lf[1] /* no-unused */ =C_SCHEME_FALSE;;
t4=lf[2] /* seconds-digits */ =C_fix(3);;
t5=lf[3] /* average-digits */ =C_fix(3);;
t6=lf[4] /* percent-digits */ =C_fix(3);;
t7=lf[5] /* top */ =C_fix(0);;
t8=C_mutate(&lf[6] /* (set! print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_630,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[14] /* (set! sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_873,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[15] /* (set! sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_905,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[16] /* (set! sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_931,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[17] /* (set! sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_959,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[20] /* (set! sort-by ...) */,lf[15]);
t14=C_mutate(&lf[21] /* (set! read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1036,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[30] /* (set! format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1135,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[33] /* (set! format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1194,tmp=(C_word)a,a+=2,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1698,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:236: command-line-arguments */
t19=C_fast_retrieve(lf[92]);
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,t18);}

/* k1458 in k1475 in map-loop231 in k1437 */
static void C_fcall f_1459(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=C_slot(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[6])[1];
f_1448(t5,((C_word*)t0)[7],t3,t4);}

/* k1017 in k840 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1019,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:151: arg-digit */
t4=C_retrieve2(lf[88],"arg-digit");
f_987(t4,t3,C_fix(1));}

/* k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_fcall f_678(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_678,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1244,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:186: print */
t4=*((C_word*)lf[51]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[64],lf[0],lf[65]);}

/* k1475 in map-loop231 in k1437 */
static void C_ccall f_1476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1476,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1459,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_1459(t4,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t5=t3;
f_1459(t5,t4);}}

/* k1578 in k1574 in k1252 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1255(t3,t2);}

/* f_1585 in k1249 in k1245 in k1243 in k677 in loop in k1697 in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1585,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1599,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=C_i_greaterp(t3,C_fix(0));
t7=t5;
f_1599(t7,(C_truep(t6)?C_a_i_divide(&a,2,t4,t3):C_SCHEME_FALSE));}
else{
t6=t5;
f_1599(t6,C_SCHEME_FALSE);}}

/* k1087 in k1080 in doloop63 in k1047 in k1039 in read-profile in k621 in k619 in k617 in k615 in k613 in k611 in k609 */
static void C_ccall f_1089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm:159: hash-table-set! */
t2=C_fast_retrieve(lf[25]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[118] = {
{"f_684:chicken_2dprofile_2escm",(void*)f_684},
{"f_1081:chicken_2dprofile_2escm",(void*)f_1081},
{"f_687:chicken_2dprofile_2escm",(void*)f_687},
{"f_1656:chicken_2dprofile_2escm",(void*)f_1656},
{"f_1416:chicken_2dprofile_2escm",(void*)f_1416},
{"f_1661:chicken_2dprofile_2escm",(void*)f_1661},
{"f_669:chicken_2dprofile_2escm",(void*)f_669},
{"f_1558:chicken_2dprofile_2escm",(void*)f_1558},
{"f_1553:chicken_2dprofile_2escm",(void*)f_1553},
{"f_1422:chicken_2dprofile_2escm",(void*)f_1422},
{"f_1676:chicken_2dprofile_2escm",(void*)f_1676},
{"f_1433:chicken_2dprofile_2escm",(void*)f_1433},
{"f_1439:chicken_2dprofile_2escm",(void*)f_1439},
{"f_1605:chicken_2dprofile_2escm",(void*)f_1605},
{"f_1576:chicken_2dprofile_2escm",(void*)f_1576},
{"f_1448:chicken_2dprofile_2escm",(void*)f_1448},
{"f_699:chicken_2dprofile_2escm",(void*)f_699},
{"f_959:chicken_2dprofile_2escm",(void*)f_959},
{"f_710:chicken_2dprofile_2escm",(void*)f_710},
{"f_715:chicken_2dprofile_2escm",(void*)f_715},
{"f_1629:chicken_2dprofile_2escm",(void*)f_1629},
{"f_1091:chicken_2dprofile_2escm",(void*)f_1091},
{"f_1631:chicken_2dprofile_2escm",(void*)f_1631},
{"toplevel:chicken_2dprofile_2escm",(void*)C_toplevel},
{"f_733:chicken_2dprofile_2escm",(void*)f_733},
{"f_1528:chicken_2dprofile_2escm",(void*)f_1528},
{"f_1404:chicken_2dprofile_2escm",(void*)f_1404},
{"f_1228:chicken_2dprofile_2escm",(void*)f_1228},
{"f_1222:chicken_2dprofile_2escm",(void*)f_1222},
{"f_754:chicken_2dprofile_2escm",(void*)f_754},
{"f_752:chicken_2dprofile_2escm",(void*)f_752},
{"f_1135:chicken_2dprofile_2escm",(void*)f_1135},
{"f_1300:chicken_2dprofile_2escm",(void*)f_1300},
{"f_1303:chicken_2dprofile_2escm",(void*)f_1303},
{"f_1309:chicken_2dprofile_2escm",(void*)f_1309},
{"f_1213:chicken_2dprofile_2escm",(void*)f_1213},
{"f_1210:chicken_2dprofile_2escm",(void*)f_1210},
{"f_1246:chicken_2dprofile_2escm",(void*)f_1246},
{"f_1244:chicken_2dprofile_2escm",(void*)f_1244},
{"f_1692:chicken_2dprofile_2escm",(void*)f_1692},
{"f_1690:chicken_2dprofile_2escm",(void*)f_1690},
{"f_1695:chicken_2dprofile_2escm",(void*)f_1695},
{"f_1698:chicken_2dprofile_2escm",(void*)f_1698},
{"f_771:chicken_2dprofile_2escm",(void*)f_771},
{"f_777:chicken_2dprofile_2escm",(void*)f_777},
{"f_1119:chicken_2dprofile_2escm",(void*)f_1119},
{"f_1685:chicken_2dprofile_2escm",(void*)f_1685},
{"f_785:chicken_2dprofile_2escm",(void*)f_785},
{"f_1149:chicken_2dprofile_2escm",(void*)f_1149},
{"f_791:chicken_2dprofile_2escm",(void*)f_791},
{"f_1272:chicken_2dprofile_2escm",(void*)f_1272},
{"f_1275:chicken_2dprofile_2escm",(void*)f_1275},
{"f_1278:chicken_2dprofile_2escm",(void*)f_1278},
{"f_1330:chicken_2dprofile_2escm",(void*)f_1330},
{"f_1036:chicken_2dprofile_2escm",(void*)f_1036},
{"f_1343:chicken_2dprofile_2escm",(void*)f_1343},
{"f_1320:chicken_2dprofile_2escm",(void*)f_1320},
{"f_1027:chicken_2dprofile_2escm",(void*)f_1027},
{"f_1339:chicken_2dprofile_2escm",(void*)f_1339},
{"f_1023:chicken_2dprofile_2escm",(void*)f_1023},
{"f_1332:chicken_2dprofile_2escm",(void*)f_1332},
{"f_873:chicken_2dprofile_2escm",(void*)f_873},
{"f_905:chicken_2dprofile_2escm",(void*)f_905},
{"f_1194:chicken_2dprofile_2escm",(void*)f_1194},
{"f_847:chicken_2dprofile_2escm",(void*)f_847},
{"f_841:chicken_2dprofile_2escm",(void*)f_841},
{"f_1238:chicken_2dprofile_2escm",(void*)f_1238},
{"f_1231:chicken_2dprofile_2escm",(void*)f_1231},
{"f_1048:chicken_2dprofile_2escm",(void*)f_1048},
{"f_1042:chicken_2dprofile_2escm",(void*)f_1042},
{"f_1040:chicken_2dprofile_2escm",(void*)f_1040},
{"f_1313:chicken_2dprofile_2escm",(void*)f_1313},
{"f_1311:chicken_2dprofile_2escm",(void*)f_1311},
{"f_1386:chicken_2dprofile_2escm",(void*)f_1386},
{"f_1388:chicken_2dprofile_2escm",(void*)f_1388},
{"f_1266:chicken_2dprofile_2escm",(void*)f_1266},
{"f_806:chicken_2dprofile_2escm",(void*)f_806},
{"f_931:chicken_2dprofile_2escm",(void*)f_931},
{"f_1255:chicken_2dprofile_2escm",(void*)f_1255},
{"f_1253:chicken_2dprofile_2escm",(void*)f_1253},
{"f_1257:chicken_2dprofile_2escm",(void*)f_1257},
{"f_1102:chicken_2dprofile_2escm",(void*)f_1102},
{"f_1251:chicken_2dprofile_2escm",(void*)f_1251},
{"f_1363:chicken_2dprofile_2escm",(void*)f_1363},
{"f_1284:chicken_2dprofile_2escm",(void*)f_1284},
{"f_1204:chicken_2dprofile_2escm",(void*)f_1204},
{"f_1281:chicken_2dprofile_2escm",(void*)f_1281},
{"f_966:chicken_2dprofile_2escm",(void*)f_966},
{"f_969:chicken_2dprofile_2escm",(void*)f_969},
{"f_707:chicken_2dprofile_2escm",(void*)f_707},
{"f_701:chicken_2dprofile_2escm",(void*)f_701},
{"f_987:chicken_2dprofile_2escm",(void*)f_987},
{"f_1059:chicken_2dprofile_2escm",(void*)f_1059},
{"f_1050:chicken_2dprofile_2escm",(void*)f_1050},
{"f_630:chicken_2dprofile_2escm",(void*)f_630},
{"f_634:chicken_2dprofile_2escm",(void*)f_634},
{"f_997:chicken_2dprofile_2escm",(void*)f_997},
{"f_1395:chicken_2dprofile_2escm",(void*)f_1395},
{"f_640:chicken_2dprofile_2escm",(void*)f_640},
{"f_616:chicken_2dprofile_2escm",(void*)f_616},
{"f_618:chicken_2dprofile_2escm",(void*)f_618},
{"f_1070:chicken_2dprofile_2escm",(void*)f_1070},
{"f_610:chicken_2dprofile_2escm",(void*)f_610},
{"f_612:chicken_2dprofile_2escm",(void*)f_612},
{"f_614:chicken_2dprofile_2escm",(void*)f_614},
{"f_1065:chicken_2dprofile_2escm",(void*)f_1065},
{"f_1599:chicken_2dprofile_2escm",(void*)f_1599},
{"f_1490:chicken_2dprofile_2escm",(void*)f_1490},
{"f_620:chicken_2dprofile_2escm",(void*)f_620},
{"f_622:chicken_2dprofile_2escm",(void*)f_622},
{"f_1459:chicken_2dprofile_2escm",(void*)f_1459},
{"f_1019:chicken_2dprofile_2escm",(void*)f_1019},
{"f_678:chicken_2dprofile_2escm",(void*)f_678},
{"f_1476:chicken_2dprofile_2escm",(void*)f_1476},
{"f_1580:chicken_2dprofile_2escm",(void*)f_1580},
{"f_1585:chicken_2dprofile_2escm",(void*)f_1585},
{"f_1089:chicken_2dprofile_2escm",(void*)f_1089},
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
S|  foldl		1
S|  map		6
o|eliminated procedure checks: 30 
o|specializations:
o|  1 (make-string fixnum char)
o|  2 (##sys#check-list (or pair list) *)
o|  2 (number->string fixnum)
o|  2 (string-append string string)
o|  2 (first pair)
o|  1 (= fixnum fixnum)
o|  2 (third (pair * (pair * pair)))
o|  3 (second (pair * pair))
o|  1 (string-ref string fixnum)
o|  1 (> fixnum fixnum)
o|  1 (string-length string)
o|  7 (string=? string string)
o|  2 (cdr pair)
o|dropping redundant toplevel assignment: sort-by 
o|safe globals: (write-profile format-real format-string read-profile set-decimals sort-by sort-by-name sort-by-avg sort-by-time sort-by-calls run print-usage top percent-digits average-digits seconds-digits no-unused file) 
o|Removed `not' forms: 1 
o|inlining procedure: k880 
o|inlining procedure: k880 
o|inlining procedure: k898 
o|inlining procedure: k898 
o|inlining procedure: k912 
o|inlining procedure: k912 
o|inlining procedure: k938 
o|inlining procedure: k938 
o|inlining procedure: k1053 
o|inlining procedure: k1053 
o|inlining procedure: k1072 
o|inlining procedure: k1072 
o|inlining procedure: k1094 
o|inlining procedure: k1094 
o|inlining procedure: k1150 
o|inlining procedure: k1150 
o|contracted procedure: "(chicken-profile.scm:236) run" 
o|inlining procedure: k672 
o|contracted procedure: "(chicken-profile.scm:81) write-profile" 
o|contracted procedure: k1291 
o|inlining procedure: k1335 
o|inlining procedure: k1335 
o|inlining procedure: k1376 
o|inlining procedure: k1376 
o|inlining procedure: k1398 
o|inlining procedure: k1398 
o|substituted constant variable: spacing224 
o|inlining procedure: k1451 
o|inlining procedure: k1451 
o|inlining procedure: k1493 
o|inlining procedure: k1493 
o|substituted constant variable: spacing224 
o|substituted constant variable: spacing224 
o|substituted constant variable: a1526 
o|inlining procedure: k1531 
o|inlining procedure: k1531 
o|inlining procedure: k1560 
o|inlining procedure: k1560 
o|inlining procedure: k1606 
o|inlining procedure: k1606 
o|inlining procedure: k1618 
o|inlining procedure: k1618 
o|inlining procedure: k1634 
o|inlining procedure: k1634 
o|inlining procedure: k1664 
o|inlining procedure: k1664 
o|substituted constant variable: g136139 
o|inlining procedure: k685 
o|inlining procedure: k685 
o|inlining procedure: k718 
o|inlining procedure: k718 
o|inlining procedure: k738 
o|inlining procedure: k738 
o|inlining procedure: k672 
o|inlining procedure: k764 
o|inlining procedure: k764 
o|substituted constant variable: a796 
o|inlining procedure: k792 
o|inlining procedure: k792 
o|substituted constant variable: a802 
o|substituted constant variable: a811 
o|inlining procedure: k807 
o|inlining procedure: k807 
o|substituted constant variable: a817 
o|substituted constant variable: a823 
o|inlining procedure: k819 
o|inlining procedure: k819 
o|substituted constant variable: a829 
o|substituted constant variable: a835 
o|inlining procedure: k831 
o|contracted procedure: "(chicken-profile.scm:108) set-decimals" 
o|inlining procedure: k992 
o|inlining procedure: k992 
o|folded constant expression: (char->integer (quote #\0)) 
o|inlining procedure: k981 
o|inlining procedure: k981 
o|substituted constant variable: a1034 
o|inlining procedure: k831 
o|inlining procedure: k851 
o|inlining procedure: k851 
o|substituted constant variable: a866 
o|substituted constant variable: a870 
o|replaced variables: 115 
o|removed binding forms: 48 
o|substituted constant variable: r8991702 
o|substituted constant variable: f_10711710 
o|substituted constant variable: r13771719 
o|converted assignments to bindings: (print-row286) 
o|substituted constant variable: f_15591729 
o|substituted constant variable: r16071732 
o|substituted constant variable: r16071732 
o|substituted constant variable: r16191735 
o|inlining procedure: k753 
o|inlining procedure: k753 
o|inlining procedure: k753 
o|inlining procedure: k753 
o|inlining procedure: k753 
o|inlining procedure: k753 
o|contracted procedure: k1011 
o|inlining procedure: k753 
o|simplifications: ((let . 1)) 
o|replaced variables: 14 
o|removed binding forms: 133 
o|inlining procedure: k741 
o|substituted constant variable: a1010 
o|inlining procedure: k753 
o|removed binding forms: 31 
o|substituted constant variable: r7421845 
o|removed binding forms: 2 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 16) (##core#call . 157)) 
o|  call simplifications:
o|    member	2
o|    string=?
o|    ##sys#size
o|    fx>
o|    char=?
o|    eq?
o|    string-ref
o|    char->integer
o|    <=
o|    string->number
o|    <
o|    zero?
o|    length	2
o|    fourth
o|    number->string
o|    /	4
o|    list	6
o|    -	3
o|    *	3
o|    inexact->exact	2
o|    car	4
o|    null?	7
o|    cdr	3
o|    string-length	3
o|    fx-
o|    fxmax
o|    eof-object?
o|    ##sys#check-list	10
o|    pair?	12
o|    ##sys#setslot	6
o|    ##sys#slot	24
o|    +	3
o|    first	4
o|    cadddr	2
o|    =	2
o|    second	5
o|    eqv?	2
o|    third	7
o|    >	11
o|    cons	14
o|contracted procedure: k660 
o|contracted procedure: k657 
o|contracted procedure: k654 
o|contracted procedure: k651 
o|contracted procedure: k648 
o|contracted procedure: k645 
o|contracted procedure: k642 
o|contracted procedure: k876 
o|contracted procedure: k878 
o|contracted procedure: k883 
o|contracted procedure: k890 
o|contracted procedure: k893 
o|contracted procedure: k908 
o|contracted procedure: k910 
o|contracted procedure: k915 
o|contracted procedure: k934 
o|contracted procedure: k936 
o|contracted procedure: k941 
o|contracted procedure: k971 
o|contracted procedure: k974 
o|contracted procedure: k1055 
o|contracted procedure: k1067 
o|contracted procedure: k1083 
o|contracted procedure: k1085 
o|contracted procedure: k1126 
o|contracted procedure: k1096 
o|contracted procedure: k1099 
o|contracted procedure: k1108 
o|contracted procedure: k1111 
o|contracted procedure: k1121 
o|contracted procedure: k1124 
o|contracted procedure: k1187 
o|contracted procedure: k1138 
o|contracted procedure: k1181 
o|contracted procedure: k1140 
o|contracted procedure: k1175 
o|contracted procedure: k1142 
o|contracted procedure: k1169 
o|contracted procedure: k1144 
o|contracted procedure: k1146 
o|contracted procedure: k1167 
o|contracted procedure: k1164 
o|contracted procedure: k1197 
o|contracted procedure: k1232 
o|contracted procedure: k1206 
o|contracted procedure: k1215 
o|contracted procedure: k1218 
o|contracted procedure: k1224 
o|contracted procedure: k674 
o|contracted procedure: k1247 
o|contracted procedure: k1259 
o|contracted procedure: k1261 
o|contracted procedure: k1263 
o|contracted procedure: k1286 
o|contracted procedure: k1289 
o|contracted procedure: k1304 
o|contracted procedure: k1306 
o|contracted procedure: k1322 
o|contracted procedure: k1324 
o|contracted procedure: k1326 
o|contracted procedure: k1340 
o|contracted procedure: k1349 
o|contracted procedure: k1352 
o|contracted procedure: k1355 
o|contracted procedure: k1365 
o|contracted procedure: k1368 
o|contracted procedure: k1371 
o|contracted procedure: k1373 
o|contracted procedure: k1379 
o|contracted procedure: k1389 
o|contracted procedure: k1400 
o|contracted procedure: k1409 
o|contracted procedure: k1412 
o|contracted procedure: k1430 
o|contracted procedure: k1427 
o|contracted procedure: k1424 
o|contracted procedure: k1418 
o|contracted procedure: k1435 
o|contracted procedure: k1440 
o|contracted procedure: k1442 
o|contracted procedure: k1483 
o|contracted procedure: k1453 
o|contracted procedure: k1456 
o|contracted procedure: k1465 
o|contracted procedure: k1468 
o|contracted procedure: k1478 
o|contracted procedure: k1481 
o|contracted procedure: k1495 
o|contracted procedure: k1517 
o|contracted procedure: k1514 
o|contracted procedure: k1498 
o|contracted procedure: k1507 
o|contracted procedure: k1520 
o|contracted procedure: k1523 
o|contracted procedure: k1533 
o|contracted procedure: k1536 
o|contracted procedure: k1545 
o|contracted procedure: k1555 
o|contracted procedure: k1562 
o|contracted procedure: k1568 
o|contracted procedure: k1582 
o|contracted procedure: k1590 
o|contracted procedure: k1592 
o|contracted procedure: k1600 
o|inlining procedure: k1594 
o|inlining procedure: k1594 
o|contracted procedure: k1609 
o|contracted procedure: k1616 
o|contracted procedure: k1621 
o|contracted procedure: k1636 
o|contracted procedure: k1639 
o|contracted procedure: k1648 
o|contracted procedure: k1658 
o|contracted procedure: k1666 
o|contracted procedure: k1673 
o|contracted procedure: k1681 
o|contracted procedure: k1687 
o|contracted procedure: k688 
o|inlining procedure: k685 
o|contracted procedure: k711 
o|contracted procedure: k720 
o|contracted procedure: k726 
o|contracted procedure: k729 
o|contracted procedure: k736 
o|contracted procedure: k741 
o|contracted procedure: k758 
o|contracted procedure: k767 
o|contracted procedure: k781 
o|contracted procedure: k1032 
o|contracted procedure: k983 
o|contracted procedure: k1014 
o|contracted procedure: k1008 
o|contracted procedure: k990 
o|contracted procedure: k1001 
o|contracted procedure: k868 
o|contracted procedure: k858 
o|simplifications: ((if . 2) (let . 20)) 
o|removed binding forms: 133 
o|inlining procedure: k1500 
o|inlining procedure: k1500 
o|inlining procedure: k1538 
o|inlining procedure: k1538 
o|inlining procedure: k1641 
o|inlining procedure: k1641 
o|replaced variables: 20 
o|removed binding forms: 1 
o|removed binding forms: 22 
o|customizable procedures: (k845 arg-digit next-number23 print-usage loop11 next-arg22 k677 foldl137141 map-loop153182 k1598 k1604 k1254 map-loop191215 map-loop252269 k1458 map-loop231276 print-row286 for-each-loop326336 k1337 k1342 map-loop290311 format-real k1101 map-loop6891 doloop6364) 
o|calls to known targets: 65 
o|identified direct recursive calls: f_1490 2 
o|identified direct recursive calls: f_669 5 
o|fast box initializations: 11 
o|fast global references: 30 
o|fast global assignments: 28 
o|dropping unused closure argument: f_1194 
o|dropping unused closure argument: f_630 
*/
/* end of file */
