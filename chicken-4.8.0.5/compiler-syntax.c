/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file compiler-syntax.c
   unit: compiler_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[84];
static double C_possibly_force_alignment;


C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2476)
static void C_fcall f_2476(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_fcall f_2366(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_fcall f_2434(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1302)
static void C_fcall f_1302(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1307)
static void C_fcall f_1307(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_fcall f_2445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1327)
static void C_ccall f_1327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1333)
static void C_ccall f_1333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1331)
static void C_ccall f_1331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2231)
static void C_fcall f_2231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1436)
static C_word C_fcall f_1436(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2575)
static void C_fcall f_2575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1447)
static void C_fcall f_1447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_fcall f_2729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1384)
static void C_fcall f_1384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_fcall f_1663(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static C_word C_fcall f_1374(C_word t0);
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externexport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2310)
static void C_fcall f_2310(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1541)
static void C_ccall f_1541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_fcall f_2877(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_fcall f_2527(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_fcall f_2538(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_fcall f_2835(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_fcall f_2846(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2052)
static void C_ccall f_2052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_fcall f_2805(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2656)
static void C_fcall f_2656(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_fcall f_1226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2404)
static void C_fcall f_2404(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_fcall f_1402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1194)
static void C_ccall f_1194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_fcall f_2916(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_fcall f_2927(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_2476)
static void C_fcall trf_2476(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2476(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2476(t0,t1,t2);}

C_noret_decl(trf_2366)
static void C_fcall trf_2366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2366(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2366(t0,t1,t2);}

C_noret_decl(trf_2434)
static void C_fcall trf_2434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2434(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2434(t0,t1,t2,t3);}

C_noret_decl(trf_1302)
static void C_fcall trf_1302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1302(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1302(t0,t1);}

C_noret_decl(trf_1307)
static void C_fcall trf_1307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1307(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1307(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2445)
static void C_fcall trf_2445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2445(t0,t1);}

C_noret_decl(trf_2231)
static void C_fcall trf_2231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2231(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2231(t0,t1);}

C_noret_decl(trf_2575)
static void C_fcall trf_2575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2575(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2575(t0,t1,t2);}

C_noret_decl(trf_1447)
static void C_fcall trf_1447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1447(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1447(t0,t1,t2);}

C_noret_decl(trf_2729)
static void C_fcall trf_2729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2729(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2729(t0,t1,t2);}

C_noret_decl(trf_1384)
static void C_fcall trf_1384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1384(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1384(t0,t1);}

C_noret_decl(trf_1663)
static void C_fcall trf_1663(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1663(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1663(t0,t1,t2);}

C_noret_decl(trf_2767)
static void C_fcall trf_2767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2767(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2767(t0,t1,t2);}

C_noret_decl(trf_2310)
static void C_fcall trf_2310(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2310(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2310(t0,t1,t2);}

C_noret_decl(trf_2877)
static void C_fcall trf_2877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2877(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2877(t0,t1,t2);}

C_noret_decl(trf_2527)
static void C_fcall trf_2527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2527(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2527(t0,t1,t2,t3);}

C_noret_decl(trf_2538)
static void C_fcall trf_2538(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2538(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2538(t0,t1);}

C_noret_decl(trf_2835)
static void C_fcall trf_2835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2835(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2835(t0,t1,t2,t3);}

C_noret_decl(trf_2846)
static void C_fcall trf_2846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2846(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2846(t0,t1);}

C_noret_decl(trf_2805)
static void C_fcall trf_2805(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2805(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2805(t0,t1,t2);}

C_noret_decl(trf_2656)
static void C_fcall trf_2656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2656(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2656(t0,t1);}

C_noret_decl(trf_1226)
static void C_fcall trf_1226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1226(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1226(t0,t1,t2);}

C_noret_decl(trf_2961)
static void C_fcall trf_2961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2961(t0,t1,t2);}

C_noret_decl(trf_2404)
static void C_fcall trf_2404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2404(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2404(t0,t1,t2);}

C_noret_decl(trf_1402)
static void C_fcall trf_1402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1402(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1402(t0,t1,t2);}

C_noret_decl(trf_2916)
static void C_fcall trf_2916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2916(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2916(t0,t1,t2,t3);}

C_noret_decl(trf_2927)
static void C_fcall trf_2927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2927(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2927(t0,t1);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

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

/* ##compiler#r-c-s in k1193 in k1191 */
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_1210r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1210r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1210r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1247,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1253,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:47: ##sys#er-transformer */
t9=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}

/* f_1218 in k1249 in k1246 in r-c-s in k1193 in k1191 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1218,3,t0,t1,t2);}
/* compiler-syntax.scm:52: ##sys#put! */
t3=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,lf[7],((C_word*)t0)[2]);}

/* k2901 in map-loop187 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2902,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2877(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2877(t6,((C_word*)t0)[5],t5);}}

/* k1263 in k1193 in k1191 */
static void C_ccall f_1264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2194,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2627,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:92: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[48]);}

/* k1950 */
static void C_ccall f_1951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2160,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:136: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,t2,lf[69],t3,C_SCHEME_END_OF_LIST);}

/* k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2072,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2158,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2665(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2665,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(t1,lf[70]);
t9=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2914,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2916,a[2]=t7,a[3]=t11,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_2916(t13,t9,t1,((C_word*)t0)[12]);}

/* map-loop427 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2476(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2476,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:116: g433 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2004,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2070,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1274,2,t0,t1);}
t2=C_mutate((C_word*)lf[12]+1 /* (set! ##compiler#compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1276,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1859,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:261: ##sys#primitive-alias */
t6=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[48]);}

/* k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1948,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2002,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[17]);}

/* k1469 in k1457 in k1455 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1470,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* ##compiler#compile-format-string in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_1276,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1282,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:179: call/cc */
t9=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}

/* f_2679 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2679,3,t0,t1,t2);}
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[81]);
t4=C_a_i_list(&a,3,lf[42],t2,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[43],t4));}

/* k2676 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2677,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* f_1282 in compile-format-string in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1282(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1282,3,t0,t1,t2);}
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
if(C_truep(C_i_memq(((C_word*)t0)[3],*((C_word*)lf[13]+1)))){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_1302(t7,t5);}
else{
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
if(C_truep(C_i_listp(t8))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1735,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:185: r */
t11=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,lf[38]);}
else{
t9=t6;
f_1302(t9,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2001 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2002,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1999,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[19]);}

/* f_2004 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2004,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2012,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
/* compiler-syntax.scm:163: compile-format-string */
t11=*((C_word*)lf[12]+1);
f_1276(8,t11,t6,lf[16],t7,t2,t10,t3,t4);}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1986 in k1989 in k1992 in k1995 in k1998 in k2001 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1987,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[15]);}

/* k1983 in k1986 in k1989 in k1992 in k1995 in k1998 in k2001 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1984,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[15],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:170: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,((C_word*)t0)[8],lf[58],((C_word*)t0)[9],t3);}

/* k2011 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k1494 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:258: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1447(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1491(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1491,2,t0,t1);}
t2=C_u_i_char_upcase(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1511,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:238: next */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1384(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:239: next */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1384(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1541,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:240: next */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1384(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1559,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:241: next */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1384(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:242: next */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1384(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1595,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:243: next */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1384(t5,t4);
case C_make_character(33):
t4=C_a_i_list(&a,2,lf[30],((C_word*)t0)[6]);
t5=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[7])[1],t4);
/* compiler-syntax.scm:258: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1447(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:246: next */
t5=((C_word*)((C_word*)t0)[8])[1];
f_1384(t5,t4);
case C_make_character(126):
t4=C_a_i_list(&a,3,((C_word*)t0)[10],C_make_character(126),((C_word*)t0)[6]);
t5=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[7])[1],t4);
/* compiler-syntax.scm:258: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1447(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
default:
t4=C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=C_a_i_list(&a,3,((C_word*)t0)[10],C_make_character(10),((C_word*)t0)[6]);
t7=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[7])[1],t6);
/* compiler-syntax.scm:258: loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1447(t8,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_u_i_char_whitespacep(((C_word*)t0)[2]))){
t6=f_1374(((C_word*)((C_word*)t0)[13])[1]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1663,a[2]=((C_word*)t0)[13],a[3]=t8,a[4]=((C_word*)t0)[14],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1663(t10,t3,t6);}
else{
/* compiler-syntax.scm:257: fail */
t6=((C_word*)t0)[15];
f_1307(t6,t3,C_SCHEME_TRUE,lf[32],C_a_i_list(&a,1,((C_word*)t0)[2]));}}}}

/* k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2691,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2835,a[2]=t5,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2835(t10,t6,((C_word*)t0)[10],((C_word*)t0)[10]);}

/* f_2358 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2358,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[44],t2,C_fix(0)));}

/* k1310 in fail in k1303 in k1300 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1323,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:192: open-output-string */
t4=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1312 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* compiler-syntax.scm:196: return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2500 in map-loop427 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2501,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2476(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2476(t6,((C_word*)t0)[5],t5);}}

/* map-loop518 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2366(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2366,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:124: g524 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2362 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
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
C_word ab[96],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2364,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,4,lf[71],((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[5]);
t9=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[6],t7,t8);
t10=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2302,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t6,a[5]=t9,a[6]=t10,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2310,a[2]=t14,a[3]=t18,a[4]=t12,a[5]=t15,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_2310(t20,t16,((C_word*)t0)[16]);}

/* k2334 in map-loop548 in k2362 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in ... */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2310(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2310(t6,((C_word*)t0)[5],t5);}}

/* map-loop457 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2434(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2434,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2445,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_2445(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_2445(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1347 in k1345 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:193: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k1300 */
static void C_fcall f_1302(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1302,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
if(C_truep(C_i_stringp(t4))){
t5=((C_word*)t0)[2];
t6=t2;
f_1304(2,t6,C_u_i_car(t5));}
else{
/* compiler-syntax.scm:187: cadar */
t5=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1345 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1346,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1348,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(40),t2);}

/* fail in k1303 in k1300 */
static void C_fcall f_1307(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1307,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1311,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:190: get-line */
t6=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[5]);}

/* k1303 in k1300 */
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
C_word t10;
C_word t11;
C_word t12;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1304,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1307,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_string_length(t1);
t11=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1360,a[2]=t1,a[3]=t9,a[4]=t4,a[5]=t5,a[6]=t7,a[7]=t10,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:200: r */
t12=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,lf[17]);}

/* k1945 in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1946,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:261: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,((C_word*)t0)[2],lf[55],((C_word*)t0)[3],t3);}

/* k1998 in k2001 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1999,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[19],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1996,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[16]);}

/* k1995 in k1998 in k2001 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1996,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[33]);}

/* k1992 in k1995 in k1998 in k2001 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1993,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k1989 in k1992 in k1995 in k1998 in k2001 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1990,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[36],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:170: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[23]);}

/* k1343 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:192: display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1339 in k1336 in k1334 in k1332 in k1330 in k1328 in k1326 in k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:191: warning */
t2=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2444 in map-loop457 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2445(C_word t0,C_word t1){
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
f_2434(t5,((C_word*)t0)[7],t3,t4);}

/* f_2396 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2396,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,((C_word*)t0)[2],t2));}

/* k2390 in map-loop518 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 in ... */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2366(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2366(t6,((C_word*)t0)[5],t5);}}

/* k1328 in k1326 in k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:192: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[20],((C_word*)t0)[4]);}

/* f_1948 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1948,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1951,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* compiler-syntax.scm:172: compile-format-string */
t7=*((C_word*)lf[12]+1);
f_1276(8,t7,t5,lf[56],lf[57],t2,t6,t3,t4);}

/* k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:204: r */
t3=((C_word*)t0)[13];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[16]);}

/* k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* compiler-syntax.scm:205: r */
t3=((C_word*)t0)[14];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[34]);}

/* k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1323,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1325,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1344,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1346,a[2]=t4,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:193: open-output-string */
t6=*((C_word*)lf[23]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* compiler-syntax.scm:192: display */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[24],t2);}}

/* k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(96),((C_word*)t0)[4]);}

/* k1326 in k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:192: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[4]);}

/* k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:202: r */
t3=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[36]);}

/* k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:203: r */
t3=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[35]);}

/* k1359 in k1303 in k1300 */
static void C_ccall f_1360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:201: r */
t3=((C_word*)t0)[10];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[19]);}

/* k1336 in k1334 in k1332 in k1330 in k1328 in k1326 in k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:192: get-output-string */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k1334 in k1332 in k1330 in k1328 in k1326 in k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,*((C_word*)lf[16]+1),((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1332 in k1330 in k1328 in k1326 in k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:192: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[18],((C_word*)t0)[4]);}

/* k1330 in k1328 in k1326 in k1324 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:192: write */
t3=*((C_word*)lf[19]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[4]);}

/* k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2240,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],C_SCHEME_FALSE);
t5=C_i_cadr(((C_word*)t0)[5]);
t6=C_a_i_list(&a,2,((C_word*)t0)[6],t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_check_list_2(t1,lf[70]);
t12=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2525,a[2]=t6,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[4],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[3],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=t1,tmp=(C_word)a,a+=19,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2527,a[2]=t10,a[3]=t14,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t16=((C_word*)t14)[1];
f_2527(t16,t12,t1,((C_word*)t0)[16]);}

/* k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2266,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t1,a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2434,a[2]=t5,a[3]=t8,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2434(t10,t6,((C_word*)t0)[15],((C_word*)t0)[15]);}

/* k1882 in k1880 in k1878 in k1876 in k1874 in k1872 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
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
C_word ab[117],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1883,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[41],lf[53]);
t5=C_a_i_list(&a,3,lf[42],t1,t4);
t6=C_a_i_list(&a,2,lf[43],t5);
t7=C_a_i_list(&a,2,t1,t1);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t10=C_a_i_list(&a,3,lf[44],t1,C_fix(0));
t11=C_a_i_list(&a,3,lf[44],t1,C_fix(1));
t12=C_a_i_list(&a,3,lf[45],((C_word*)t0)[4],t11);
t13=C_a_i_list(&a,3,((C_word*)t0)[5],t10,t12);
t14=C_a_i_list(&a,4,((C_word*)t0)[6],t9,t13,((C_word*)t0)[7]);
t15=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[4],t8,t14);
t16=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_a_i_list(&a,4,((C_word*)t0)[10],t3,t6,t15));}

/* k1880 in k1878 in k1876 in k1874 in k1872 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:273: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2753 in map-loop308 in k2763 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2754,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2729(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2729(t6,((C_word*)t0)[5],t5);}}

/* f_2759 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2759,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[44],t2,C_fix(0)));}

/* k2428 in map-loop488 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2404(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2404(t6,((C_word*)t0)[5],t5);}}

/* k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2231(C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2231,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2232,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[70]);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2575,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2575(t12,t8,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_2232 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
/* compiler-syntax.scm:111: gensym */
t2=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* k1856 in k1757 in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1857,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:283: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,((C_word*)t0)[2],lf[51],((C_word*)t0)[3],t3);}

/* f_1859 in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1859,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[53],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=C_i_cadddr(t2);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1873,a[2]=t10,a[3]=t8,a[4]=t9,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:268: r */
t12=t3;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,lf[50]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k1429 in endchunk in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1430,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,((C_word*)t0)[3]);
/* compiler-syntax.scm:219: push */
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[5])[1],t2));}

/* push in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static C_word C_fcall f_1436(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* map-loop366 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2575(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2575,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:111: g372 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_fcall f_1447(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1447,NULL,3,t0,t1,t2);}
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[9])[1]))){
t4=t3;
f_1456(2,t4,C_SCHEME_UNDEFINED);}
else{
/* compiler-syntax.scm:228: fail */
t4=((C_word*)t0)[10];
f_1307(t4,t3,C_SCHEME_FALSE,lf[29],C_SCHEME_END_OF_LIST);}}
else{
t3=f_1374(((C_word*)((C_word*)t0)[11])[1]);
t4=C_eqp(t3,C_make_character(126));
if(C_truep(t4)){
t5=f_1374(((C_word*)((C_word*)t0)[11])[1]);
t6=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1491,a[2]=t5,a[3]=((C_word*)t0)[12],a[4]=t1,a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[17],a[11]=((C_word*)t0)[18],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[2],a[15]=((C_word*)t0)[10],tmp=(C_word)a,a+=16,tmp);
/* compiler-syntax.scm:236: endchunk */
t7=((C_word*)((C_word*)t0)[8])[1];
f_1402(t7,t6,t2);}
else{
t5=C_a_i_cons(&a,2,t3,t2);
/* compiler-syntax.scm:259: loop */
t10=t1;
t11=t5;
t1=t10;
t2=t11;
goto loop;}}}

/* k1872 */
static void C_ccall f_1873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:269: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[34]);}

/* k1876 in k1874 in k1872 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:271: r */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[49]);}

/* k1874 in k1872 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:270: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[48]);}

/* k1878 in k1876 in k1874 in k1872 */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:272: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[54]);}

/* k1455 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:229: endchunk */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1402(t3,t2,((C_word*)t0)[8]);}

/* k1457 in k1455 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1458,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1470,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:231: reverse */
t5=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)((C_word*)t0)[6])[1]);}

/* k2791 in map-loop278 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2767(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2767(t6,((C_word*)t0)[5],t5);}}

/* f_2797 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2797,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,((C_word*)t0)[2],t2));}

/* k1614 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:247: next */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1384(t3,t2);}

/* k1616 in k1614 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1617,2,t0,t1);}
t2=C_a_i_list(&a,5,lf[31],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[5])[1],t2);
/* compiler-syntax.scm:258: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1447(t4,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* f_2721 in k2763 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2721(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2721,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[44],t2,C_fix(1)));}

/* k2725 in k2763 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2727,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[45],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8],t5);
t7=C_a_i_list(&a,1,t6);
/* compiler-syntax.scm:76: ##sys#append */
t8=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[9],((C_word*)t0)[10],t7);}

/* map-loop308 in k2763 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2729,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:89: g314 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* next in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_fcall f_1384(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1384,NULL,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* compiler-syntax.scm:213: fail */
t2=((C_word*)t0)[3];
f_1307(t2,t1,C_SCHEME_TRUE,lf[26],C_SCHEME_END_OF_LIST);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1351 in k1349 in k1347 in k1345 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler-syntax.scm:193: get-output-string */
t2=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1349 in k1347 in k1345 in k1322 in k1310 in fail in k1303 in k1300 */
static void C_ccall f_1350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:193: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[22],((C_word*)t0)[4]);}

/* skip in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_fcall f_1663(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1663,NULL,3,t0,t1,t2);}
if(C_truep(C_u_i_char_whitespacep(t2))){
t3=f_1374(((C_word*)((C_word*)t0)[2])[1]);
/* compiler-syntax.scm:255: skip */
t7=t1;
t8=t3;
t1=t7;
t2=t8;
goto loop;}
else{
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* compiler-syntax.scm:206: r */
t3=((C_word*)t0)[15];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[33]);}

/* fetch in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static C_word C_fcall f_1374(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
t1=C_i_string_ref(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
return(t1);}

/* k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1372(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1372,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t9,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1436,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_1447,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[9],a[8]=t7,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t3,a[12]=t15,a[13]=((C_word*)t0)[13],a[14]=t9,a[15]=t5,a[16]=((C_word*)t0)[8],a[17]=((C_word*)t0)[6],a[18]=t1,a[19]=((C_word*)t0)[14],tmp=(C_word)a,a+=20,tmp));
t17=((C_word*)t15)[1];
f_1447(t17,((C_word*)t0)[15],C_SCHEME_END_OF_LIST);}

/* map-loop278 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2767,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:86: g284 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2763 in k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2721,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2729,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2729(t12,t8,((C_word*)t0)[11]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_compiler_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("compiler_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(930)){
C_save(t1);
C_rereclaim2(930*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,84);
lf[0]=C_h_intern(&lf[0],35,"\010compilercompiler-syntax-statistics");
lf[1]=C_h_intern(&lf[1],24,"\003syscompiler-syntax-hook");
lf[2]=C_h_intern(&lf[2],13,"alist-update!");
lf[3]=C_h_intern(&lf[3],9,"alist-ref");
lf[4]=C_h_intern(&lf[4],3,"eq\077");
lf[5]=C_h_intern(&lf[5],14,"\010compilerr-c-s");
lf[6]=C_h_intern(&lf[6],8,"\003sysput!");
lf[7]=C_h_intern(&lf[7],24,"\010compilercompiler-syntax");
lf[8]=C_h_intern(&lf[8],6,"append");
lf[9]=C_h_intern(&lf[9],29,"\003sysdefault-macro-environment");
lf[10]=C_h_intern(&lf[10],22,"\003sysensure-transformer");
lf[11]=C_h_intern(&lf[11],18,"\003syser-transformer");
lf[12]=C_h_intern(&lf[12],30,"\010compilercompile-format-string");
lf[13]=C_h_intern(&lf[13],17,"extended-bindings");
lf[14]=C_h_intern(&lf[14],7,"warning");
lf[15]=C_h_intern(&lf[15],17,"get-output-string");
lf[16]=C_h_intern(&lf[16],7,"fprintf");
lf[17]=C_h_intern(&lf[17],7,"display");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[19]=C_h_intern(&lf[19],5,"write");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024\047, in format string ");
lf[21]=C_h_intern(&lf[21],19,"\003syswrite-char/port");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[23]=C_h_intern(&lf[23],18,"open-output-string");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[25]=C_h_intern(&lf[25],17,"\010compilerget-line");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[27]=C_h_intern(&lf[27],20,"reverse-list->string");
lf[28]=C_h_intern(&lf[28],7,"reverse");
lf[29]=C_decode_literal(C_heaptop,"\376B\000\0000too many arguments to formatted output procedure");
lf[30]=C_h_intern(&lf[30],16,"\003sysflush-output");
lf[31]=C_h_intern(&lf[31],9,"\003sysapply");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000$illegal format-string character `~c\047");
lf[33]=C_h_intern(&lf[33],14,"number->string");
lf[34]=C_h_intern(&lf[34],3,"let");
lf[35]=C_h_intern(&lf[35],3,"out");
lf[36]=C_h_intern(&lf[36],10,"write-char");
lf[37]=C_h_intern(&lf[37],5,"cadar");
lf[38]=C_h_intern(&lf[38],5,"quote");
lf[39]=C_h_intern(&lf[39],7,"call/cc");
lf[40]=C_h_intern(&lf[40],5,"foldl");
lf[41]=C_h_intern(&lf[41],10,"\004corequote");
lf[42]=C_h_intern(&lf[42],14,"\003syscheck-list");
lf[43]=C_h_intern(&lf[43],10,"\004corecheck");
lf[44]=C_h_intern(&lf[44],8,"\003sysslot");
lf[45]=C_h_intern(&lf[45],8,"\004coreapp");
lf[46]=C_h_intern(&lf[46],6,"gensym");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\005foldl");
lf[48]=C_h_intern(&lf[48],5,"pair\077");
lf[49]=C_h_intern(&lf[49],2,"if");
lf[50]=C_h_intern(&lf[50],4,"let\052");
lf[51]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005foldl\376\003\000\000\002\376\001\000\000\007#%foldl\376\377\016");
lf[52]=C_h_intern(&lf[52],19,"\003sysprimitive-alias");
lf[53]=C_h_intern(&lf[53],5,"foldr");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\005foldr");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005foldr\376\003\000\000\002\376\001\000\000\007#%foldr\376\377\016");
lf[56]=C_h_intern(&lf[56],6,"printf");
lf[57]=C_h_intern(&lf[57],19,"\003sysstandard-output");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\010#%printf\376\377\016");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\011#%fprintf\376\377\016");
lf[60]=C_h_intern(&lf[60],7,"sprintf");
lf[61]=C_h_intern(&lf[61],9,"#%sprintf");
lf[62]=C_h_intern(&lf[62],6,"format");
lf[63]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\011#%sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\010#%format\376\377\016");
lf[64]=C_h_intern(&lf[64],1,"o");
lf[65]=C_h_intern(&lf[65],10,"fold-right");
lf[66]=C_h_intern(&lf[66],4,"list");
lf[67]=C_h_intern(&lf[67],6,"lambda");
lf[68]=C_h_intern(&lf[68],3,"tmp");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\003#%o\376\377\016");
lf[70]=C_h_intern(&lf[70],3,"map");
lf[71]=C_h_intern(&lf[71],11,"\003syssetslot");
lf[72]=C_h_intern(&lf[72],10,"\003sysappend");
lf[73]=C_h_intern(&lf[73],17,"standard-bindings");
lf[74]=C_h_intern(&lf[74],7,"length+");
lf[75]=C_h_intern(&lf[75],3,"and");
lf[76]=C_h_intern(&lf[76],5,"begin");
lf[77]=C_h_intern(&lf[77],4,"set!");
lf[78]=C_h_intern(&lf[78],4,"cons");
lf[79]=C_h_intern(&lf[79],8,"map-loop");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\005#%map\376\377\016");
lf[81]=C_h_intern(&lf[81],8,"for-each");
lf[82]=C_h_intern(&lf[82],13,"for-each-loop");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\012#%for-each\376\377\016");
C_register_lf2(lf,84,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1192,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2157 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2158,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2155,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[19]);}

/* k2251 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* f_2254 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2254,3,t0,t1,t2);}
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[70]);
t4=C_a_i_list(&a,3,lf[42],t2,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[43],t4));}

/* k2154 in k2157 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2155,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[19],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[16]);}

/* k2151 in k2154 in k2157 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2152,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[33]);}

/* k2167 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2174,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:140: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* f_2160 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2160,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_memq(lf[64],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2168,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:139: r */
t9=t3;
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[68]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* map-loop548 in k2362 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 in ... */
static void C_fcall f_2310(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2310,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:132: g554 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2276(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2276,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t1,a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2404,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2404(t11,t7,((C_word*)t0)[16]);}

/* k1540 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1541,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,((C_word*)t0)[3]);
t3=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2);
/* compiler-syntax.scm:258: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1447(t4,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k1733 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1735,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:186: cadar */
t3=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_1302(t2,C_SCHEME_FALSE);}}

/* k1740 in k1733 */
static void C_ccall f_1741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1302(t2,C_i_stringp(t1));}

/* k1743 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_caar(((C_word*)t0)[2]);
/* compiler-syntax.scm:185: c */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t1,t2);}

/* map-loop187 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2877(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2877,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2902,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:79: g193 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1757 in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1760,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1762,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1857,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:283: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[48]);}

/* k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2525,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2252,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2254,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2266,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[16],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[6],a[14]=t5,a[15]=((C_word*)t0)[18],tmp=(C_word)a,a+=16,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2476,a[2]=t9,a[3]=t13,a[4]=t7,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_2476(t15,t11,((C_word*)t0)[18]);}

/* map-loop396 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2527(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2527,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_2538(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_2538(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* f_2302 in k2362 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 in ... */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2302,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[44],t2,C_fix(1)));}

/* k1558 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1559,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(2));
t3=C_a_i_list(&a,3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);
t4=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[5])[1],t3);
/* compiler-syntax.scm:258: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1447(t5,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* k2306 in k2362 in k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 in ... */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2308,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[45],t2);
t4=C_a_i_list(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);
t5=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[8],t4,((C_word*)t0)[9]);
t6=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[10],t5);
t7=C_a_i_list(&a,1,t6);
/* compiler-syntax.scm:111: ##sys#append */
t8=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[11],((C_word*)t0)[12],t7);}

/* k2537 in map-loop396 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2538(C_word t0,C_word t1){
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
f_2527(t5,((C_word*)t0)[7],t3,t4);}

/* k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:102: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:103: r */
t3=((C_word*)t0)[12];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[38]);}

/* k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:104: r */
t3=((C_word*)t0)[13];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[76]);}

/* k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:105: r */
t3=((C_word*)t0)[14];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:106: r */
t3=((C_word*)t0)[14];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[75]);}

/* k2179 in k2173 in k2167 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2180,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k2829 in map-loop248 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2805(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2805(t6,((C_word*)t0)[5],t5);}}

/* map-loop217 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2835(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2835,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_2846(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_2846(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1525 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1526,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,((C_word*)t0)[3]);
t3=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2);
/* compiler-syntax.scm:258: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1447(t4,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k2845 in map-loop217 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2846(C_word t0,C_word t1){
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
f_2835(t5,((C_word*)t0)[7],t3,t4);}

/* k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:98: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[78]);}

/* k2200 in k2198 in k2196 */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:97: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:100: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:99: r */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[77]);}

/* k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:101: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2057 in k2060 in k2063 in k2066 in k2069 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2058,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[36],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[23]);}

/* k2054 in k2057 in k2060 in k2063 in k2066 in k2069 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2055,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[15]);}

/* k2051 in k2054 in k2057 in k2060 in k2063 in k2066 in k2069 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2052,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[15],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:160: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,((C_word*)t0)[8],lf[59],((C_word*)t0)[9],t3);}

/* k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:107: r */
t3=((C_word*)t0)[14];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[48]);}

/* k2148 in k2151 in k2154 in k2157 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2149,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2231,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_memq(lf[70],*((C_word*)lf[73]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2612,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:110: length+ */
t5=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2231(t4,C_SCHEME_FALSE);}}

/* k2145 in k2148 in k2151 in k2154 in k2157 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2146,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[36],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[23]);}

/* k2066 in k2069 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2067,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[19],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2064,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[16]);}

/* k2142 in k2145 in k2148 in k2151 in k2154 in k2157 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2143,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:143: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[15]);}

/* k2063 in k2066 in k2069 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2064,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[33]);}

/* k2139 in k2142 in k2145 in k2148 in k2151 in k2154 in k2157 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[15],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:143: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,((C_word*)t0)[8],lf[63],((C_word*)t0)[9],t3);}

/* k2060 in k2063 in k2066 in k2069 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2061,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[36]);}

/* k1510 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1511,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,((C_word*)t0)[3]);
t3=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2);
/* compiler-syntax.scm:258: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1447(t4,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* f_2194 in k1263 in k1193 in k1191 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2194,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2197,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:94: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[34]);}

/* k2198 in k2196 */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:96: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[79]);}

/* k2196 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:95: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[49]);}

/* map-loop248 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2805(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2805,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:83: g254 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2801 in k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2759,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2767,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2767(t12,t8,((C_word*)t0)[11]);}

/* k2626 in k1263 in k1193 in k1191 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2627,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2624,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:92: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[78]);}

/* k2623 in k2626 in k1263 in k1193 in k1191 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2624,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[78],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
/* compiler-syntax.scm:92: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,((C_word*)t0)[3],lf[80],((C_word*)t0)[4],t3);}

/* f_2629 in k1193 in k1191 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2629,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2632,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:64: r */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[34]);}

/* k2631 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:65: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[49]);}

/* k2635 in k2633 in k2631 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:67: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2633 in k2631 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:66: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[82]);}

/* k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:68: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[76]);}

/* k2173 in k2167 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2174,2,t0,t1);}
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdr(((C_word*)t0)[4]);
/* compiler-syntax.scm:140: fold-right */
t5=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,*((C_word*)lf[66]+1),((C_word*)t0)[2],t4);}

/* k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:69: r */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[38]);}

/* k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:70: r */
t3=((C_word*)t0)[9];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[75]);}

/* k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:71: r */
t3=((C_word*)t0)[10];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[48]);}

/* k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:72: r */
t3=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[67]);}

/* k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2648,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2656,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_memq(lf[81],*((C_word*)lf[73]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2998,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:75: length+ */
t5=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2656(t4,C_SCHEME_FALSE);}}

/* k3006 in k1193 in k1191 */
static void C_ccall f_3007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3007,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:62: r-c-s */
t4=*((C_word*)lf[5]+1);
f_1210(5,t4,((C_word*)t0)[2],lf[83],((C_word*)t0)[3],t3);}

/* f_2657 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2657,2,t0,t1);}
/* compiler-syntax.scm:76: gensym */
t2=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2656(C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2656,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2657,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[70]);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2961,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2961(t12,t8,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2997 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2656(t2,C_i_greaterp(t1,C_fix(2)));}

/* f_1762 in k1757 in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1762,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[40],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=C_i_cadddr(t2);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1776,a[2]=t9,a[3]=t10,a[4]=t8,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:290: r */
t12=t3;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,lf[50]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k1759 in k1757 in k1273 in k1271 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k1777 in k1775 */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:292: r */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[49]);}

/* k1234 in for-each-loop43 in k1249 in k1246 in r-c-s in k1193 in k1191 */
static void C_ccall f_1235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1226(t3,((C_word*)t0)[4],t2);}

/* k1775 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:291: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[34]);}

/* k1576 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1577,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(8));
t3=C_a_i_list(&a,3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);
t4=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[5])[1],t3);
/* compiler-syntax.scm:258: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1447(t5,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* k1246 in r-c-s in k1193 in k1191 */
static void C_ccall f_1247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1250,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:49: append */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],*((C_word*)lf[9]+1));}

/* k1787 in k1785 in k1783 in k1781 in k1779 in k1777 in k1775 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
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
C_word ab[138],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1788,2,t0,t1);}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,lf[41],lf[40]);
t6=C_a_i_list(&a,3,lf[42],t1,t5);
t7=C_a_i_list(&a,2,lf[43],t6);
t8=C_a_i_list(&a,2,t1,t1);
t9=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[2]);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t12=C_a_i_list(&a,3,lf[44],t1,C_fix(1));
t13=C_a_i_list(&a,3,lf[44],t1,C_fix(0));
t14=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[2],t13);
t15=C_a_i_list(&a,4,lf[45],((C_word*)t0)[7],t12,t14);
t16=C_a_i_list(&a,4,((C_word*)t0)[8],t11,t15,((C_word*)t0)[2]);
t17=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[7],t10,t16);
t18=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_a_i_list(&a,4,((C_word*)t0)[11],t4,t7,t17));}

/* for-each-loop43 in k1249 in k1246 in r-c-s in k1193 in k1191 */
static void C_fcall f_1226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1226,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1235,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:45: g44 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1252 in r-c-s in k1193 in k1191 */
static void C_ccall f_1253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* compiler-syntax.scm:46: ##sys#ensure-transformer */
t3=*((C_word*)lf[10]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t1,t2);}

/* k1594 in k1490 in loop in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_ccall f_1595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1595,2,t0,t1);}
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(16));
t3=C_a_i_list(&a,3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);
t4=f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[5])[1],t3);
/* compiler-syntax.scm:258: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1447(t5,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* k1249 in k1246 in r-c-s in k1193 in k1191 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1250,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1218,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[3];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1226,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1226(t8,((C_word*)t0)[4],t4);}

/* f_2072 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2072,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2075,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:145: gensym */
t6=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[35]);}

/* k1783 in k1781 in k1779 in k1777 in k1775 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1786,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:295: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[47]);}

/* k2074 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2077,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=(C_truep((C_truep(C_eqp(t3,lf[60]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[61]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))?lf[60]:lf[62]);
t5=((C_word*)t0)[4];
t6=C_u_i_cdr(t5);
/* compiler-syntax.scm:146: compile-format-string */
t7=*((C_word*)lf[12]+1);
f_1276(8,t7,t2,t4,t1,((C_word*)t0)[4],t6,((C_word*)t0)[3],((C_word*)t0)[5]);}

/* k1785 in k1783 in k1781 in k1779 in k1777 in k1775 */
static void C_ccall f_1786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:296: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2076 in k2074 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2077,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:155: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[34]);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1779 in k1777 in k1775 */
static void C_ccall f_1780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:293: r */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[48]);}

/* k1781 in k1779 in k1777 in k1775 */
static void C_ccall f_1782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:294: gensym */
t3=*((C_word*)lf[46]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2069 in k1269 in k1267 in k1265 in k1263 in k1193 in k1191 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2070,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2067,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:160: ##sys#primitive-alias */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[19]);}

/* k2985 in map-loop126 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2986,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2961(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2961(t6,((C_word*)t0)[5],t5);}}

/* k2085 in k2076 in k2074 */
static void C_ccall f_2086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:155: r */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[23]);}

/* k2094 in k2103 in k2085 in k2076 in k2074 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2095,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2));}

/* map-loop126 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2961(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2961,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:76: g132 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop488 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_fcall f_2404(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2404,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:120: g494 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2400 in k2274 in k2264 in k2523 in k2238 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2402,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2358,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t2,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2366,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2366(t12,t8,((C_word*)t0)[16]);}

/* endchunk in k1371 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1303 in k1300 */
static void C_fcall f_1402(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1402,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_car(t2);
t6=C_a_i_list(&a,3,((C_word*)t0)[2],t5,((C_word*)t0)[3]);
/* compiler-syntax.scm:219: push */
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1436(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t6));}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1430,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:222: reverse-list->string */
t6=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2599 in map-loop366 in k2229 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2600,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2575(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2575(t6,((C_word*)t0)[5],t5);}}

/* k2611 in k2222 in k2220 in k2218 in k2216 in k2214 in k2212 in k2210 in k2208 in k2206 in k2204 in k2202 in k2200 in k2198 in k2196 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2231(t2,C_i_greaterp(t1,C_fix(2)));}

/* k2103 in k2085 in k2076 in k2074 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2104,2,t0,t1);}
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:157: r */
t6=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[15]);}

/* k1193 in k1191 */
static void C_ccall f_1194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1194,2,t0,t1);}
t2=C_set_block_item(lf[0] /* ##compiler#compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##sys#compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1197,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! ##compiler#r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1210,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2629,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3007,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:62: ##sys#primitive-alias */
t8=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[48]);}

/* k1191 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2914(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2914,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2677,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],a[9]=t3,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2877,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2877(t13,t9,((C_word*)t0)[12]);}

/* k2699 in k2689 in k2912 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2797,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2805,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2805(t11,t7,((C_word*)t0)[11]);}

/* map-loop156 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2916(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2916,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_2927(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_2927(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1200 in compiler-syntax-hook in k1193 in k1191 */
static void C_ccall f_1201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* compiler-syntax.scm:43: alist-update! */
t4=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[3],t3,*((C_word*)lf[0]+1));}

/* k1203 in k1200 in compiler-syntax-hook in k1193 in k1191 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2926 in map-loop156 in k2663 in k2654 in k2647 in k2645 in k2643 in k2641 in k2639 in k2637 in k2635 in k2633 in k2631 */
static void C_fcall f_2927(C_word t0,C_word t1){
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
f_2916(t5,((C_word*)t0)[7],t3,t4);}

/* ##sys#compiler-syntax-hook in k1193 in k1191 */
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1197,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1201,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:41: alist-ref */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t2,*((C_word*)lf[0]+1),*((C_word*)lf[4]+1),C_fix(0));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[211] = {
{"f_1210:compiler_2dsyntax_2escm",(void*)f_1210},
{"f_1218:compiler_2dsyntax_2escm",(void*)f_1218},
{"f_2902:compiler_2dsyntax_2escm",(void*)f_2902},
{"f_1264:compiler_2dsyntax_2escm",(void*)f_1264},
{"f_1951:compiler_2dsyntax_2escm",(void*)f_1951},
{"f_1266:compiler_2dsyntax_2escm",(void*)f_1266},
{"f_1268:compiler_2dsyntax_2escm",(void*)f_1268},
{"f_2665:compiler_2dsyntax_2escm",(void*)f_2665},
{"f_2476:compiler_2dsyntax_2escm",(void*)f_2476},
{"f_1270:compiler_2dsyntax_2escm",(void*)f_1270},
{"f_1274:compiler_2dsyntax_2escm",(void*)f_1274},
{"f_1272:compiler_2dsyntax_2escm",(void*)f_1272},
{"f_1470:compiler_2dsyntax_2escm",(void*)f_1470},
{"f_1276:compiler_2dsyntax_2escm",(void*)f_1276},
{"f_2679:compiler_2dsyntax_2escm",(void*)f_2679},
{"f_2677:compiler_2dsyntax_2escm",(void*)f_2677},
{"f_1282:compiler_2dsyntax_2escm",(void*)f_1282},
{"f_2002:compiler_2dsyntax_2escm",(void*)f_2002},
{"f_2004:compiler_2dsyntax_2escm",(void*)f_2004},
{"f_1987:compiler_2dsyntax_2escm",(void*)f_1987},
{"f_1984:compiler_2dsyntax_2escm",(void*)f_1984},
{"f_2012:compiler_2dsyntax_2escm",(void*)f_2012},
{"f_1496:compiler_2dsyntax_2escm",(void*)f_1496},
{"f_1491:compiler_2dsyntax_2escm",(void*)f_1491},
{"f_2691:compiler_2dsyntax_2escm",(void*)f_2691},
{"f_2358:compiler_2dsyntax_2escm",(void*)f_2358},
{"f_1311:compiler_2dsyntax_2escm",(void*)f_1311},
{"f_1314:compiler_2dsyntax_2escm",(void*)f_1314},
{"f_2501:compiler_2dsyntax_2escm",(void*)f_2501},
{"f_2366:compiler_2dsyntax_2escm",(void*)f_2366},
{"f_2364:compiler_2dsyntax_2escm",(void*)f_2364},
{"f_2335:compiler_2dsyntax_2escm",(void*)f_2335},
{"f_2434:compiler_2dsyntax_2escm",(void*)f_2434},
{"f_1348:compiler_2dsyntax_2escm",(void*)f_1348},
{"f_1302:compiler_2dsyntax_2escm",(void*)f_1302},
{"f_1346:compiler_2dsyntax_2escm",(void*)f_1346},
{"f_1307:compiler_2dsyntax_2escm",(void*)f_1307},
{"f_1304:compiler_2dsyntax_2escm",(void*)f_1304},
{"f_1946:compiler_2dsyntax_2escm",(void*)f_1946},
{"f_1999:compiler_2dsyntax_2escm",(void*)f_1999},
{"f_1996:compiler_2dsyntax_2escm",(void*)f_1996},
{"f_1993:compiler_2dsyntax_2escm",(void*)f_1993},
{"f_1990:compiler_2dsyntax_2escm",(void*)f_1990},
{"f_1344:compiler_2dsyntax_2escm",(void*)f_1344},
{"f_1341:compiler_2dsyntax_2escm",(void*)f_1341},
{"f_2445:compiler_2dsyntax_2escm",(void*)f_2445},
{"f_2396:compiler_2dsyntax_2escm",(void*)f_2396},
{"f_2391:compiler_2dsyntax_2escm",(void*)f_2391},
{"f_1329:compiler_2dsyntax_2escm",(void*)f_1329},
{"f_1948:compiler_2dsyntax_2escm",(void*)f_1948},
{"f_1366:compiler_2dsyntax_2escm",(void*)f_1366},
{"f_1368:compiler_2dsyntax_2escm",(void*)f_1368},
{"f_1323:compiler_2dsyntax_2escm",(void*)f_1323},
{"f_1325:compiler_2dsyntax_2escm",(void*)f_1325},
{"f_1327:compiler_2dsyntax_2escm",(void*)f_1327},
{"f_1362:compiler_2dsyntax_2escm",(void*)f_1362},
{"f_1364:compiler_2dsyntax_2escm",(void*)f_1364},
{"f_1360:compiler_2dsyntax_2escm",(void*)f_1360},
{"f_1338:compiler_2dsyntax_2escm",(void*)f_1338},
{"f_1335:compiler_2dsyntax_2escm",(void*)f_1335},
{"f_1333:compiler_2dsyntax_2escm",(void*)f_1333},
{"f_1331:compiler_2dsyntax_2escm",(void*)f_1331},
{"f_2240:compiler_2dsyntax_2escm",(void*)f_2240},
{"f_2266:compiler_2dsyntax_2escm",(void*)f_2266},
{"f_1883:compiler_2dsyntax_2escm",(void*)f_1883},
{"f_1881:compiler_2dsyntax_2escm",(void*)f_1881},
{"f_2754:compiler_2dsyntax_2escm",(void*)f_2754},
{"f_2759:compiler_2dsyntax_2escm",(void*)f_2759},
{"f_2429:compiler_2dsyntax_2escm",(void*)f_2429},
{"f_2231:compiler_2dsyntax_2escm",(void*)f_2231},
{"f_2232:compiler_2dsyntax_2escm",(void*)f_2232},
{"f_1857:compiler_2dsyntax_2escm",(void*)f_1857},
{"f_1859:compiler_2dsyntax_2escm",(void*)f_1859},
{"f_1430:compiler_2dsyntax_2escm",(void*)f_1430},
{"f_1436:compiler_2dsyntax_2escm",(void*)f_1436},
{"f_2575:compiler_2dsyntax_2escm",(void*)f_2575},
{"f_1447:compiler_2dsyntax_2escm",(void*)f_1447},
{"f_1873:compiler_2dsyntax_2escm",(void*)f_1873},
{"f_1877:compiler_2dsyntax_2escm",(void*)f_1877},
{"f_1875:compiler_2dsyntax_2escm",(void*)f_1875},
{"f_1879:compiler_2dsyntax_2escm",(void*)f_1879},
{"f_1456:compiler_2dsyntax_2escm",(void*)f_1456},
{"f_1458:compiler_2dsyntax_2escm",(void*)f_1458},
{"f_2792:compiler_2dsyntax_2escm",(void*)f_2792},
{"f_2797:compiler_2dsyntax_2escm",(void*)f_2797},
{"f_1615:compiler_2dsyntax_2escm",(void*)f_1615},
{"f_1617:compiler_2dsyntax_2escm",(void*)f_1617},
{"f_2721:compiler_2dsyntax_2escm",(void*)f_2721},
{"f_2727:compiler_2dsyntax_2escm",(void*)f_2727},
{"f_2729:compiler_2dsyntax_2escm",(void*)f_2729},
{"f_1384:compiler_2dsyntax_2escm",(void*)f_1384},
{"f_1353:compiler_2dsyntax_2escm",(void*)f_1353},
{"f_1350:compiler_2dsyntax_2escm",(void*)f_1350},
{"f_1663:compiler_2dsyntax_2escm",(void*)f_1663},
{"f_1370:compiler_2dsyntax_2escm",(void*)f_1370},
{"f_1374:compiler_2dsyntax_2escm",(void*)f_1374},
{"f_1372:compiler_2dsyntax_2escm",(void*)f_1372},
{"f_2767:compiler_2dsyntax_2escm",(void*)f_2767},
{"f_2765:compiler_2dsyntax_2escm",(void*)f_2765},
{"toplevel:compiler_2dsyntax_2escm",(void*)C_compiler_2dsyntax_toplevel},
{"f_2158:compiler_2dsyntax_2escm",(void*)f_2158},
{"f_2252:compiler_2dsyntax_2escm",(void*)f_2252},
{"f_2254:compiler_2dsyntax_2escm",(void*)f_2254},
{"f_2155:compiler_2dsyntax_2escm",(void*)f_2155},
{"f_2152:compiler_2dsyntax_2escm",(void*)f_2152},
{"f_2168:compiler_2dsyntax_2escm",(void*)f_2168},
{"f_2160:compiler_2dsyntax_2escm",(void*)f_2160},
{"f_2310:compiler_2dsyntax_2escm",(void*)f_2310},
{"f_2276:compiler_2dsyntax_2escm",(void*)f_2276},
{"f_1541:compiler_2dsyntax_2escm",(void*)f_1541},
{"f_1735:compiler_2dsyntax_2escm",(void*)f_1735},
{"f_1741:compiler_2dsyntax_2escm",(void*)f_1741},
{"f_1744:compiler_2dsyntax_2escm",(void*)f_1744},
{"f_2877:compiler_2dsyntax_2escm",(void*)f_2877},
{"f_1758:compiler_2dsyntax_2escm",(void*)f_1758},
{"f_2525:compiler_2dsyntax_2escm",(void*)f_2525},
{"f_2527:compiler_2dsyntax_2escm",(void*)f_2527},
{"f_2302:compiler_2dsyntax_2escm",(void*)f_2302},
{"f_1559:compiler_2dsyntax_2escm",(void*)f_1559},
{"f_2308:compiler_2dsyntax_2escm",(void*)f_2308},
{"f_2538:compiler_2dsyntax_2escm",(void*)f_2538},
{"f_2211:compiler_2dsyntax_2escm",(void*)f_2211},
{"f_2213:compiler_2dsyntax_2escm",(void*)f_2213},
{"f_2215:compiler_2dsyntax_2escm",(void*)f_2215},
{"f_2217:compiler_2dsyntax_2escm",(void*)f_2217},
{"f_2219:compiler_2dsyntax_2escm",(void*)f_2219},
{"f_2180:compiler_2dsyntax_2escm",(void*)f_2180},
{"f_2830:compiler_2dsyntax_2escm",(void*)f_2830},
{"f_2835:compiler_2dsyntax_2escm",(void*)f_2835},
{"f_1526:compiler_2dsyntax_2escm",(void*)f_1526},
{"f_2846:compiler_2dsyntax_2escm",(void*)f_2846},
{"f_2203:compiler_2dsyntax_2escm",(void*)f_2203},
{"f_2201:compiler_2dsyntax_2escm",(void*)f_2201},
{"f_2207:compiler_2dsyntax_2escm",(void*)f_2207},
{"f_2205:compiler_2dsyntax_2escm",(void*)f_2205},
{"f_2209:compiler_2dsyntax_2escm",(void*)f_2209},
{"f_2058:compiler_2dsyntax_2escm",(void*)f_2058},
{"f_2055:compiler_2dsyntax_2escm",(void*)f_2055},
{"f_2052:compiler_2dsyntax_2escm",(void*)f_2052},
{"f_2221:compiler_2dsyntax_2escm",(void*)f_2221},
{"f_2149:compiler_2dsyntax_2escm",(void*)f_2149},
{"f_2223:compiler_2dsyntax_2escm",(void*)f_2223},
{"f_2146:compiler_2dsyntax_2escm",(void*)f_2146},
{"f_2067:compiler_2dsyntax_2escm",(void*)f_2067},
{"f_2143:compiler_2dsyntax_2escm",(void*)f_2143},
{"f_2064:compiler_2dsyntax_2escm",(void*)f_2064},
{"f_2140:compiler_2dsyntax_2escm",(void*)f_2140},
{"f_2061:compiler_2dsyntax_2escm",(void*)f_2061},
{"f_1511:compiler_2dsyntax_2escm",(void*)f_1511},
{"f_2194:compiler_2dsyntax_2escm",(void*)f_2194},
{"f_2199:compiler_2dsyntax_2escm",(void*)f_2199},
{"f_2197:compiler_2dsyntax_2escm",(void*)f_2197},
{"f_2805:compiler_2dsyntax_2escm",(void*)f_2805},
{"f_2803:compiler_2dsyntax_2escm",(void*)f_2803},
{"f_2627:compiler_2dsyntax_2escm",(void*)f_2627},
{"f_2624:compiler_2dsyntax_2escm",(void*)f_2624},
{"f_2629:compiler_2dsyntax_2escm",(void*)f_2629},
{"f_2632:compiler_2dsyntax_2escm",(void*)f_2632},
{"f_2636:compiler_2dsyntax_2escm",(void*)f_2636},
{"f_2634:compiler_2dsyntax_2escm",(void*)f_2634},
{"f_2638:compiler_2dsyntax_2escm",(void*)f_2638},
{"f_2174:compiler_2dsyntax_2escm",(void*)f_2174},
{"f_2640:compiler_2dsyntax_2escm",(void*)f_2640},
{"f_2642:compiler_2dsyntax_2escm",(void*)f_2642},
{"f_2644:compiler_2dsyntax_2escm",(void*)f_2644},
{"f_2646:compiler_2dsyntax_2escm",(void*)f_2646},
{"f_2648:compiler_2dsyntax_2escm",(void*)f_2648},
{"f_3007:compiler_2dsyntax_2escm",(void*)f_3007},
{"f_2657:compiler_2dsyntax_2escm",(void*)f_2657},
{"f_2656:compiler_2dsyntax_2escm",(void*)f_2656},
{"f_2998:compiler_2dsyntax_2escm",(void*)f_2998},
{"f_1762:compiler_2dsyntax_2escm",(void*)f_1762},
{"f_1760:compiler_2dsyntax_2escm",(void*)f_1760},
{"f_1778:compiler_2dsyntax_2escm",(void*)f_1778},
{"f_1235:compiler_2dsyntax_2escm",(void*)f_1235},
{"f_1776:compiler_2dsyntax_2escm",(void*)f_1776},
{"f_1577:compiler_2dsyntax_2escm",(void*)f_1577},
{"f_1247:compiler_2dsyntax_2escm",(void*)f_1247},
{"f_1788:compiler_2dsyntax_2escm",(void*)f_1788},
{"f_1226:compiler_2dsyntax_2escm",(void*)f_1226},
{"f_1253:compiler_2dsyntax_2escm",(void*)f_1253},
{"f_1595:compiler_2dsyntax_2escm",(void*)f_1595},
{"f_1250:compiler_2dsyntax_2escm",(void*)f_1250},
{"f_2072:compiler_2dsyntax_2escm",(void*)f_2072},
{"f_1784:compiler_2dsyntax_2escm",(void*)f_1784},
{"f_2075:compiler_2dsyntax_2escm",(void*)f_2075},
{"f_1786:compiler_2dsyntax_2escm",(void*)f_1786},
{"f_2077:compiler_2dsyntax_2escm",(void*)f_2077},
{"f_1780:compiler_2dsyntax_2escm",(void*)f_1780},
{"f_1782:compiler_2dsyntax_2escm",(void*)f_1782},
{"f_2070:compiler_2dsyntax_2escm",(void*)f_2070},
{"f_2986:compiler_2dsyntax_2escm",(void*)f_2986},
{"f_2086:compiler_2dsyntax_2escm",(void*)f_2086},
{"f_2095:compiler_2dsyntax_2escm",(void*)f_2095},
{"f_2961:compiler_2dsyntax_2escm",(void*)f_2961},
{"f_2404:compiler_2dsyntax_2escm",(void*)f_2404},
{"f_2402:compiler_2dsyntax_2escm",(void*)f_2402},
{"f_1402:compiler_2dsyntax_2escm",(void*)f_1402},
{"f_2600:compiler_2dsyntax_2escm",(void*)f_2600},
{"f_2612:compiler_2dsyntax_2escm",(void*)f_2612},
{"f_2104:compiler_2dsyntax_2escm",(void*)f_2104},
{"f_1194:compiler_2dsyntax_2escm",(void*)f_1194},
{"f_1192:compiler_2dsyntax_2escm",(void*)f_1192},
{"f_2914:compiler_2dsyntax_2escm",(void*)f_2914},
{"f_2701:compiler_2dsyntax_2escm",(void*)f_2701},
{"f_2916:compiler_2dsyntax_2escm",(void*)f_2916},
{"f_1201:compiler_2dsyntax_2escm",(void*)f_1201},
{"f_1205:compiler_2dsyntax_2escm",(void*)f_1205},
{"f_2927:compiler_2dsyntax_2escm",(void*)f_2927},
{"f_1197:compiler_2dsyntax_2escm",(void*)f_1197},
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
S|  sprintf		2
S|  map		14
S|  for-each		1
o|eliminated procedure checks: 194 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (= fixnum fixnum)
o|  3 (car pair)
o|  1 (cddr (pair * pair))
o|  2 (>= fixnum fixnum)
o|  2 (cdr pair)
o|  1 (memq * list)
o|  15 (##sys#check-list (or pair list) *)
o|safe globals: (##compiler#r-c-s ##sys#compiler-syntax-hook ##compiler#compiler-syntax-statistics) 
o|inlining procedure: k1229 
o|inlining procedure: k1229 
o|inlining procedure: k1284 
o|merged explicitly consed rest parameter: args661 
o|inlining procedure: k1315 
o|inlining procedure: k1315 
o|inlining procedure: k1343 
o|inlining procedure: k1343 
o|inlining procedure: k1387 
o|consed rest parameter at call site: "(compiler-syntax.scm:213) fail658" 3 
o|inlining procedure: k1387 
o|inlining procedure: k1405 
o|inlining procedure: k1414 
o|inlining procedure: k1414 
o|substituted constant variable: a1431 
o|inlining procedure: k1405 
o|inlining procedure: k1295 
o|inlining procedure: k1450 
o|consed rest parameter at call site: "(compiler-syntax.scm:228) fail658" 3 
o|inlining procedure: k1450 
o|inlining procedure: k1494 
o|inlining procedure: k1494 
o|inlining procedure: k1527 
o|inlining procedure: k1527 
o|inlining procedure: k1560 
o|inlining procedure: k1560 
o|inlining procedure: k1596 
o|inlining procedure: k1596 
o|inlining procedure: k1624 
o|inlining procedure: k1624 
o|inlining procedure: k1650 
o|inlining procedure: k1666 
o|inlining procedure: k1666 
o|inlining procedure: k1650 
o|consed rest parameter at call site: "(compiler-syntax.scm:257) fail658" 3 
o|substituted constant variable: a1688 
o|substituted constant variable: a1690 
o|substituted constant variable: a1692 
o|substituted constant variable: a1694 
o|substituted constant variable: a1696 
o|substituted constant variable: a1698 
o|substituted constant variable: a1700 
o|substituted constant variable: a1702 
o|substituted constant variable: a1704 
o|substituted constant variable: a1706 
o|substituted constant variable: a1708 
o|inlining procedure: k1295 
o|inlining procedure: k1724 
o|inlining procedure: k1724 
o|inlining procedure: k1284 
o|substituted constant variable: a1756 
o|inlining procedure: k1764 
o|inlining procedure: k1764 
o|inlining procedure: k1861 
o|inlining procedure: k1861 
o|inlining procedure: k1952 
o|inlining procedure: k1952 
o|inlining procedure: k2006 
o|inlining procedure: k2006 
o|substituted constant variable: a2025 
o|inlining procedure: k2078 
o|inlining procedure: k2078 
o|substituted constant variable: a2113 
o|inlining procedure: k2162 
o|inlining procedure: k2162 
o|inlining procedure: k2226 
o|inlining procedure: k2313 
o|inlining procedure: k2313 
o|inlining procedure: k2369 
o|inlining procedure: k2369 
o|inlining procedure: k2407 
o|inlining procedure: k2407 
o|inlining procedure: k2437 
o|inlining procedure: k2437 
o|inlining procedure: k2479 
o|inlining procedure: k2479 
o|inlining procedure: k2530 
o|inlining procedure: k2530 
o|inlining procedure: k2578 
o|inlining procedure: k2578 
o|inlining procedure: k2226 
o|inlining procedure: k2651 
o|inlining procedure: k2732 
o|inlining procedure: k2732 
o|inlining procedure: k2770 
o|inlining procedure: k2770 
o|inlining procedure: k2808 
o|inlining procedure: k2808 
o|inlining procedure: k2838 
o|inlining procedure: k2838 
o|inlining procedure: k2880 
o|inlining procedure: k2880 
o|inlining procedure: k2919 
o|inlining procedure: k2919 
o|inlining procedure: k2964 
o|inlining procedure: k2964 
o|inlining procedure: k2651 
o|simplifications: ((if . 1)) 
o|replaced variables: 169 
o|removed binding forms: 76 
o|substituted constant variable: a13423014 
o|converted assignments to bindings: (fail658) 
o|substituted constant variable: r12963046 
o|substituted constant variable: r17253048 
o|substituted constant variable: f_12833049 
o|simplifications: ((let . 1)) 
o|replaced variables: 3 
o|removed binding forms: 182 
o|removed binding forms: 6 
o|simplifications: ((if . 10) (##core#call . 309)) 
o|  call simplifications:
o|    cddr	2
o|    >	2
o|    ##sys#check-list	4
o|    list	4
o|    ##sys#setslot	14
o|    fx>
o|    fx=	2
o|    cadr	5
o|    caddr	2
o|    cadddr	2
o|    fx>=	2
o|    memq	6
o|    list?
o|    caar
o|    string?	3
o|    string-length
o|    >=
o|    char-upcase
o|    char-whitespace?	2
o|    sub1
o|    ##sys#cons	44
o|    length	6
o|    eq?	13
o|    ##sys#list	96
o|    cdr	3
o|    string-ref
o|    fx+
o|    write-char	2
o|    ##sys#apply
o|    null?	3
o|    car	6
o|    cons	17
o|    pair?	20
o|    ##sys#slot	38
o|    add1
o|contracted procedure: k1207 
o|contracted procedure: k1257 
o|contracted procedure: k1213 
o|contracted procedure: k1216 
o|contracted procedure: k1231 
o|contracted procedure: k1240 
o|contracted procedure: k1243 
o|contracted procedure: k1255 
o|contracted procedure: k1754 
o|contracted procedure: k1286 
o|contracted procedure: k1292 
o|contracted procedure: k1751 
o|contracted procedure: k1298 
o|contracted procedure: k1357 
o|contracted procedure: k1377 
o|contracted procedure: k1380 
o|contracted procedure: k1389 
o|contracted procedure: k1395 
o|contracted procedure: k1398 
o|contracted procedure: k1407 
o|contracted procedure: k1433 
o|contracted procedure: k1416 
o|contracted procedure: k1423 
o|inlining procedure: k1414 
o|inlining procedure: k1414 
o|contracted procedure: k1440 
o|contracted procedure: k1452 
o|contracted procedure: k1472 
o|contracted procedure: k1466 
o|contracted procedure: k1463 
o|contracted procedure: k1474 
o|contracted procedure: k1485 
o|contracted procedure: k1492 
o|contracted procedure: k1500 
o|contracted procedure: k1507 
o|contracted procedure: k1515 
o|contracted procedure: k1522 
o|contracted procedure: k1530 
o|contracted procedure: k1537 
o|contracted procedure: k1545 
o|contracted procedure: k1555 
o|contracted procedure: k1552 
o|contracted procedure: k1563 
o|contracted procedure: k1573 
o|contracted procedure: k1570 
o|contracted procedure: k1581 
o|contracted procedure: k1591 
o|contracted procedure: k1588 
o|contracted procedure: k1599 
o|contracted procedure: k1606 
o|contracted procedure: k1611 
o|contracted procedure: k1622 
o|contracted procedure: k1627 
o|contracted procedure: k1634 
o|contracted procedure: k1639 
o|contracted procedure: k1648 
o|contracted procedure: k1653 
o|contracted procedure: k1668 
o|contracted procedure: k1678 
o|contracted procedure: k1713 
o|contracted procedure: k1715 
o|contracted procedure: k1727 
o|contracted procedure: k1746 
o|contracted procedure: k1847 
o|contracted procedure: k1840 
o|contracted procedure: k1766 
o|contracted procedure: k1769 
o|contracted procedure: k1771 
o|contracted procedure: k1773 
o|contracted procedure: k1835 
o|contracted procedure: k1838 
o|contracted procedure: k1793 
o|contracted procedure: k1832 
o|contracted procedure: k1829 
o|contracted procedure: k1796 
o|contracted procedure: k1823 
o|contracted procedure: k1826 
o|contracted procedure: k1802 
o|contracted procedure: k1808 
o|contracted procedure: k1814 
o|contracted procedure: k1820 
o|contracted procedure: k1817 
o|contracted procedure: k1811 
o|contracted procedure: k1805 
o|contracted procedure: k1799 
o|contracted procedure: k1853 
o|contracted procedure: k1850 
o|contracted procedure: k1936 
o|contracted procedure: k1929 
o|contracted procedure: k1863 
o|contracted procedure: k1866 
o|contracted procedure: k1868 
o|contracted procedure: k1870 
o|contracted procedure: k1927 
o|contracted procedure: k1888 
o|contracted procedure: k1924 
o|contracted procedure: k1921 
o|contracted procedure: k1891 
o|contracted procedure: k1918 
o|contracted procedure: k1897 
o|contracted procedure: k1903 
o|contracted procedure: k1909 
o|contracted procedure: k1915 
o|contracted procedure: k1912 
o|contracted procedure: k1906 
o|contracted procedure: k1900 
o|contracted procedure: k1894 
o|contracted procedure: k1942 
o|contracted procedure: k1939 
o|contracted procedure: k1956 
o|contracted procedure: k1962 
o|contracted procedure: k1965 
o|contracted procedure: k1968 
o|contracted procedure: k1971 
o|contracted procedure: k1974 
o|contracted procedure: k1977 
o|contracted procedure: k1980 
o|contracted procedure: k1959 
o|contracted procedure: k2023 
o|contracted procedure: k2008 
o|contracted procedure: k2017 
o|contracted procedure: k2030 
o|contracted procedure: k2033 
o|contracted procedure: k2036 
o|contracted procedure: k2039 
o|contracted procedure: k2042 
o|contracted procedure: k2045 
o|contracted procedure: k2048 
o|contracted procedure: k2027 
o|contracted procedure: k2100 
o|contracted procedure: k2097 
o|contracted procedure: k2088 
o|contracted procedure: k2091 
o|contracted procedure: k2111 
o|contracted procedure: k2106 
o|contracted procedure: k2118 
o|contracted procedure: k2121 
o|contracted procedure: k2124 
o|contracted procedure: k2127 
o|contracted procedure: k2130 
o|contracted procedure: k2133 
o|contracted procedure: k2136 
o|contracted procedure: k2115 
o|contracted procedure: k2191 
o|contracted procedure: k2184 
o|contracted procedure: k2164 
o|contracted procedure: k2176 
o|contracted procedure: k2182 
o|contracted procedure: k2224 
o|contracted procedure: k2236 
o|contracted procedure: k2572 
o|contracted procedure: k2506 
o|contracted procedure: k2512 
o|contracted procedure: k2569 
o|contracted procedure: k2518 
o|contracted procedure: k2521 
o|contracted procedure: k2515 
o|contracted procedure: k2509 
o|contracted procedure: k2248 
o|contracted procedure: k2245 
o|contracted procedure: k2262 
o|contracted procedure: k2259 
o|contracted procedure: k2281 
o|contracted procedure: k2352 
o|contracted procedure: k2355 
o|contracted procedure: k2349 
o|contracted procedure: k2346 
o|contracted procedure: k2287 
o|contracted procedure: k2340 
o|contracted procedure: k2343 
o|contracted procedure: k2290 
o|contracted procedure: k2293 
o|contracted procedure: k2299 
o|contracted procedure: k2296 
o|contracted procedure: k2284 
o|contracted procedure: k2278 
o|contracted procedure: k2271 
o|contracted procedure: k2268 
o|contracted procedure: k2315 
o|contracted procedure: k2318 
o|contracted procedure: k2327 
o|contracted procedure: k2337 
o|contracted procedure: k2371 
o|contracted procedure: k2374 
o|contracted procedure: k2383 
o|contracted procedure: k2393 
o|contracted procedure: k2409 
o|contracted procedure: k2412 
o|contracted procedure: k2421 
o|contracted procedure: k2431 
o|contracted procedure: k2469 
o|contracted procedure: k2439 
o|contracted procedure: k2464 
o|contracted procedure: k2467 
o|contracted procedure: k2461 
o|contracted procedure: k2442 
o|contracted procedure: k2451 
o|contracted procedure: k2454 
o|contracted procedure: k2481 
o|contracted procedure: k2484 
o|contracted procedure: k2493 
o|contracted procedure: k2503 
o|contracted procedure: k2562 
o|contracted procedure: k2532 
o|contracted procedure: k2557 
o|contracted procedure: k2560 
o|contracted procedure: k2554 
o|contracted procedure: k2535 
o|contracted procedure: k2544 
o|contracted procedure: k2547 
o|contracted procedure: k2580 
o|contracted procedure: k2583 
o|contracted procedure: k2592 
o|contracted procedure: k2602 
o|contracted procedure: k2604 
o|contracted procedure: k2617 
o|contracted procedure: k2620 
o|contracted procedure: k2614 
o|contracted procedure: k2649 
o|contracted procedure: k2661 
o|contracted procedure: k2958 
o|contracted procedure: k2907 
o|contracted procedure: k2910 
o|contracted procedure: k2673 
o|contracted procedure: k2670 
o|contracted procedure: k2687 
o|contracted procedure: k2684 
o|contracted procedure: k2706 
o|contracted procedure: k2712 
o|contracted procedure: k2718 
o|contracted procedure: k2715 
o|contracted procedure: k2709 
o|contracted procedure: k2703 
o|contracted procedure: k2696 
o|contracted procedure: k2693 
o|contracted procedure: k2734 
o|contracted procedure: k2737 
o|contracted procedure: k2746 
o|contracted procedure: k2756 
o|contracted procedure: k2772 
o|contracted procedure: k2775 
o|contracted procedure: k2784 
o|contracted procedure: k2794 
o|contracted procedure: k2810 
o|contracted procedure: k2813 
o|contracted procedure: k2822 
o|contracted procedure: k2832 
o|contracted procedure: k2870 
o|contracted procedure: k2840 
o|contracted procedure: k2865 
o|contracted procedure: k2868 
o|contracted procedure: k2862 
o|contracted procedure: k2843 
o|contracted procedure: k2852 
o|contracted procedure: k2855 
o|contracted procedure: k2882 
o|contracted procedure: k2885 
o|contracted procedure: k2894 
o|contracted procedure: k2904 
o|contracted procedure: k2951 
o|contracted procedure: k2921 
o|contracted procedure: k2946 
o|contracted procedure: k2949 
o|contracted procedure: k2943 
o|contracted procedure: k2924 
o|contracted procedure: k2933 
o|contracted procedure: k2936 
o|contracted procedure: k2966 
o|contracted procedure: k2969 
o|contracted procedure: k2978 
o|contracted procedure: k2988 
o|contracted procedure: k2990 
o|contracted procedure: k3003 
o|contracted procedure: k3000 
o|simplifications: ((let . 24)) 
o|removed binding forms: 272 
o|inlining procedure: k2320 
o|inlining procedure: k2320 
o|inlining procedure: k2376 
o|inlining procedure: k2376 
o|inlining procedure: k2414 
o|inlining procedure: k2414 
o|inlining procedure: k2486 
o|inlining procedure: k2486 
o|inlining procedure: k2585 
o|inlining procedure: k2585 
o|inlining procedure: k2739 
o|inlining procedure: k2739 
o|inlining procedure: k2777 
o|inlining procedure: k2777 
o|inlining procedure: k2815 
o|inlining procedure: k2815 
o|inlining procedure: k2887 
o|inlining procedure: k2887 
o|inlining procedure: k2971 
o|inlining procedure: k2971 
o|replaced variables: 18 
o|removed binding forms: 1 
o|simplifications: ((let . 8) (if . 1)) 
o|removed binding forms: 36 
o|contracted procedure: k1641 
o|removed binding forms: 1 
o|direct leaf routine/allocation: fetch708 0 
o|direct leaf routine/allocation: push711 3 
o|contracted procedure: "(compiler-syntax.scm:233) k1480" 
o|contracted procedure: "(compiler-syntax.scm:235) k1488" 
o|inlining procedure: "(compiler-syntax.scm:238) k1494" 
o|inlining procedure: "(compiler-syntax.scm:239) k1494" 
o|inlining procedure: "(compiler-syntax.scm:240) k1494" 
o|inlining procedure: "(compiler-syntax.scm:241) k1494" 
o|inlining procedure: "(compiler-syntax.scm:242) k1494" 
o|inlining procedure: "(compiler-syntax.scm:243) k1494" 
o|inlining procedure: "(compiler-syntax.scm:244) k1494" 
o|inlining procedure: "(compiler-syntax.scm:248) k1494" 
o|inlining procedure: "(compiler-syntax.scm:249) k1494" 
o|inlining procedure: "(compiler-syntax.scm:250) k1494" 
o|contracted procedure: "(compiler-syntax.scm:253) k1660" 
o|contracted procedure: "(compiler-syntax.scm:255) k1675" 
o|removed binding forms: 4 
o|customizable procedures: (k2654 map-loop126144 k2926 map-loop156175 map-loop187208 k2845 map-loop217236 map-loop248269 map-loop278299 map-loop308329 k2229 map-loop366384 k2537 map-loop396415 map-loop427448 k2444 map-loop457476 map-loop488509 map-loop518539 map-loop548569 k1300 skip776 next709 loop724 endchunk710 fail658 for-each-loop4354) 
o|calls to known targets: 97 
o|identified direct recursive calls: f_1663 1 
o|identified direct recursive calls: f_1447 1 
o|unused rest argument: _383 f_2232 
o|unused rest argument: _143 f_2657 
o|fast box initializations: 21 
*/
/* end of file */
