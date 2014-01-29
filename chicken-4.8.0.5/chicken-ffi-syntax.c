/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken_2dffi_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[92];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,102,95,55,56,55,32,102,111,114,109,52,52,52,32,114,52,52,53,32,99,52,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,12),40,102,95,56,51,56,32,97,52,51,53,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,52,49,56,32,103,52,51,48,52,51,55,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,102,95,56,50,50,32,102,111,114,109,52,49,48,32,114,52,49,49,32,99,52,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,18),40,102,95,57,49,52,32,103,51,57,55,51,57,56,51,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,55,55,32,103,51,56,57,52,48,51,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,25),40,102,95,56,57,56,32,102,111,114,109,51,54,57,32,114,51,55,48,32,99,51,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,102,95,57,56,56,32,97,51,54,48,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,52,51,32,103,51,53,53,51,54,50,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,25),40,102,95,57,55,50,32,102,111,114,109,51,51,53,32,114,51,51,54,32,99,51,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,19),40,102,95,49,48,54,52,32,103,51,50,50,51,50,51,51,50,52,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,51,48,50,32,103,51,49,52,51,50,56,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,26),40,102,95,49,48,52,56,32,102,111,114,109,50,57,52,32,114,50,57,53,32,99,50,57,54,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,19),40,102,95,49,49,53,50,32,103,50,56,49,50,56,50,50,56,51,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,54,49,32,103,50,55,51,50,56,55,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,50,51,50,32,103,50,52,52,50,53,48,41,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,26),40,102,95,49,49,50,50,32,102,111,114,109,50,49,56,32,114,50,49,57,32,99,50,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,26),40,102,95,49,50,53,57,32,102,111,114,109,50,49,50,32,114,50,49,51,32,99,50,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,26),40,102,95,49,50,55,48,32,102,111,114,109,50,48,54,32,114,50,48,55,32,99,50,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,95,49,50,56,49,32,102,111,114,109,49,57,57,32,114,50,48,48,32,99,50,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,26),40,102,95,49,50,57,56,32,102,111,114,109,49,56,55,32,114,49,56,56,32,99,49,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,102,95,49,51,52,57,32,102,111,114,109,49,54,50,32,114,49,54,51,32,99,49,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,13),40,102,95,49,52,48,53,32,95,49,51,54,41,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,26),40,102,95,49,52,50,55,32,98,49,52,57,32,97,49,53,48,32,114,101,115,116,49,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,18),40,102,95,49,52,54,51,32,98,49,52,55,32,97,49,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,21),40,109,97,112,45,108,111,111,112,49,49,57,32,103,49,51,49,49,51,56,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,95,49,51,57,55,32,102,111,114,109,49,49,49,32,114,49,49,50,32,99,49,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,23),40,102,95,49,53,49,54,32,102,111,114,109,57,51,32,114,57,52,32,99,57,53,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,102,95,49,53,56,48,32,120,56,54,32,114,56,55,32,99,56,56,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,12),40,102,95,49,55,51,55,32,97,53,48,41,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,12),40,102,95,49,54,57,48,32,97,55,55,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,48,32,103,55,50,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,51,51,32,103,52,53,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,20),40,102,95,49,53,57,52,32,102,111,114,109,54,32,114,55,32,99,56,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_961)
static void C_ccall f_961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_fcall f_936(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_fcall f_1601(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_920)
static void C_ccall f_920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_928)
static void C_ccall f_928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_ccall f_925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1279)
static void C_ccall f_1279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_751)
static void C_ccall f_751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_761)
static void C_ccall f_761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_fcall f_1311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_779)
static void C_ccall f_779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_796)
static void C_ccall f_796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1376)
static void C_ccall f_1376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_790)
static void C_ccall f_790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1064)
static void C_ccall f_1064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1483)
static void C_fcall f_1483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_988)
static void C_ccall f_988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_970)
static void C_ccall f_970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1516)
static void C_ccall f_1516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_fcall f_1707(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1012)
static void C_fcall f_1012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1196)
static void C_fcall f_1196(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1166)
static void C_fcall f_1166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1078)
static void C_ccall f_1078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1747)
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1122)
static void C_ccall f_1122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1127)
static void C_fcall f_1127(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_fcall f_1599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_862)
static void C_fcall f_862(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_936)
static void C_fcall trf_936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_936(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_936(t0,t1,t2);}

C_noret_decl(trf_1601)
static void C_fcall trf_1601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1601(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1601(t0,t1);}

C_noret_decl(trf_1311)
static void C_fcall trf_1311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1311(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1311(t0,t1);}

C_noret_decl(trf_1483)
static void C_fcall trf_1483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1483(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1483(t0,t1,t2);}

C_noret_decl(trf_1707)
static void C_fcall trf_1707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1707(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1707(t0,t1,t2);}

C_noret_decl(trf_1012)
static void C_fcall trf_1012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1012(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1012(t0,t1,t2);}

C_noret_decl(trf_1196)
static void C_fcall trf_1196(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1196(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1196(t0,t1,t2);}

C_noret_decl(trf_1166)
static void C_fcall trf_1166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1166(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1166(t0,t1,t2);}

C_noret_decl(trf_1747)
static void C_fcall trf_1747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1747(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1747(t0,t1,t2);}

C_noret_decl(trf_1127)
static void C_fcall trf_1127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1127(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1127(t0,t1);}

C_noret_decl(trf_1599)
static void C_fcall trf_1599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1599(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1599(t0,t1);}

C_noret_decl(trf_862)
static void C_fcall trf_862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_862(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_862(t0,t1,t2);}

C_noret_decl(trf_1086)
static void C_fcall trf_1086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1086(t0,t1,t2);}

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

/* k1384 in k1381 in k1379 in k1377 in k1375 in k1373 in k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1386,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[44],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,lf[54],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[8],t3,t4));}

/* k1388 in k1377 in k1375 in k1373 in k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:151: display */
t2=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k960 in map-loop377 in k919 in k900 */
static void C_ccall f_961(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_961,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_936(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_936(t6,((C_word*)t0)[5],t5);}}

/* k1381 in k1379 in k1377 in k1375 in k1373 in k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:151: get-output-string */
t3=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k1379 in k1377 in k1375 in k1373 in k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:151: display */
t3=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[57],((C_word*)t0)[6]);}

/* k930 in k923 in k919 in k900 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:260: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[26]);}

/* map-loop377 in k919 in k900 */
static void C_fcall f_936(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_936,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_961,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:258: g383 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1283 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1284,2,t0,t1);}
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[44],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[45],t3));}

/* k900 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_901,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_914,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:259: ##sys#strip-syntax */
t9=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k1600 in k1598 */
static void C_fcall f_1601(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1601,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:54: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[80],((C_word*)t0)[2],lf[81]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1652,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* chicken-ffi-syntax.scm:64: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[80],((C_word*)t0)[2],lf[87]);}
else{
/* chicken-ffi-syntax.scm:65: ##sys#check-syntax */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[80],((C_word*)t0)[2],lf[88]);}}}

/* k1295 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:156: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[47],C_SCHEME_END_OF_LIST,t1);}

/* f_1298 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1298,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1301,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:161: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[47],t2,lf[52]);}

/* k1605 in k1600 in k1598 */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1606,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:56: r */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[75]);}

/* k919 in k900 */
static void C_ccall f_920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_920,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[23]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_936,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li5),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_936(t7,t3,t1);}

/* k927 in k923 in k919 in k900 */
static void C_ccall f_928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_928,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[24],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[29],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k923 in k919 in k900 */
static void C_ccall f_925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_928,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_931,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:261: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_1259 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1259(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1259,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[4],t5));}

/* k1256 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:200: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[41],C_SCHEME_END_OF_LIST,t1);}

/* f_914 in k900 */
static void C_ccall f_914(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_914,3,t0,t1,t2);}
t3=*((C_word*)lf[21]+1);
/* chicken-ffi-syntax.scm:258: g400 */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[22]);}

/* f_1270 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1270,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,lf[43],t5));}

/* k1267 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:193: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[42],C_SCHEME_END_OF_LIST,t1);}

/* f_1281 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1281,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1284,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:187: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[44],t2,lf[46]);}

/* k1507 in map-loop119 in k1399 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1508,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1483(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1483(t6,((C_word*)t0)[5],t5);}}

/* k1278 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:182: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[44],C_SCHEME_END_OF_LIST,t1);}

/* k745 */
static void C_ccall f_746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:43: ##sys#macro-environment */
t3=*((C_word*)lf[89]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1684 in k1743 in k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1685(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1685,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1690,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1707,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=t6,a[6]=((C_word)li31),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_1707(t11,t7,((C_word*)t0)[11]);}

/* k748 in k745 */
static void C_ccall f_749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_751,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1594,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:48: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k752 in k750 in k748 in k745 */
static void C_ccall f_753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1514,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1516,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:93: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1395,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1397,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:110: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k750 in k748 in k745 */
static void C_ccall f_751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_751,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1578,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1580,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:85: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_757,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1347,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1349,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:144: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1613 in k1605 in k1600 in k1598 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1614,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[4],((C_word*)t0)[3],t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,4,lf[73],((C_word*)t0)[3],t5,C_SCHEME_TRUE);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_u_i_cdr(t7);
if(C_truep(C_i_pairp(t8))){
t9=C_i_caddr(((C_word*)t0)[2]);
t10=C_a_i_list(&a,3,lf[74],((C_word*)t0)[3],t9);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t6,t11);
t13=C_a_i_cons(&a,2,t3,t12);
t14=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_cons(&a,2,t1,t13));}
else{
t9=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t10=C_a_i_cons(&a,2,t3,t9);
t11=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_cons(&a,2,t1,t10));}}

/* k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1296,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1298,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:159: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1257,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1259,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:203: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1270,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:196: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1046,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1048,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:226: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1120,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1122,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:210: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1279,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1281,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:185: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1310 in k1302 in k1300 */
static void C_fcall f_1311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1311,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_caddr(((C_word*)t0)[4]);
/* chicken-ffi-syntax.scm:175: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_820,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_822,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:268: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_898,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:254: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1316 in k1310 in k1302 in k1300 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[6],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,3,lf[8],((C_word*)t0)[4],t2));}

/* k778 in k776 in k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_782,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:296: ##sys#macro-subset */
t3=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k776 in k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_779,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_785,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_787,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:282: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_970,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:240: ##sys#er-transformer */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1319 in k1310 in k1302 in k1300 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:174: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[26]);}

/* k780 in k778 in k776 in k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* k784 in k776 in k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:279: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[3],C_SCHEME_END_OF_LIST,t1);}

/* k1328 in k1302 in k1300 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1329,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1311(t2,C_a_i_list(&a,4,lf[4],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* f_787 in k776 in k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_787,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_790,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:284: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[3],t2,lf[18]);}

/* k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1372,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: display */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[61],t2);}

/* k1373 in k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: display */
t3=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6]);}

/* k791 in k789 */
static void C_ccall f_792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:286: gensym */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[15]);}

/* k793 in k791 in k789 */
static void C_ccall f_794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_796,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t3=t2;
f_796(2,t3,((C_word*)t0)[3]);}
else{
/* chicken-ffi-syntax.scm:290: ##compiler#foreign-type-declaration */
t3=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],lf[13]);}}

/* k795 in k793 in k791 in k789 */
static void C_ccall f_796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:292: string-append */
t3=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[10],t1,lf[11]);}

/* k1375 in k1373 in k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:151: display */
t3=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[60],((C_word*)t0)[6]);}

/* k1377 in k1375 in k1373 in k1371 in k1365 in k1353 in k1351 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1389,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[7]);
/* chicken-ffi-syntax.scm:153: string-intersperse */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,lf[59]);}

/* k789 */
static void C_ccall f_790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-ffi-syntax.scm:285: ##sys#strip-syntax */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k1300 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:162: gensym */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[51]);}

/* k1302 in k1300 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1303,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1311,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1329,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t6=t3;
f_1311(t6,C_a_i_list(&a,4,lf[4],t1,t4,t2));}
else{
if(C_truep(C_i_symbolp(t2))){
/* chicken-ffi-syntax.scm:168: symbol->string */
t6=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
/* chicken-ffi-syntax.scm:170: syntax-error */
t6=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[47],lf[50],t2);}}}

/* k1577 in k750 in k748 in k745 */
static void C_ccall f_1578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:82: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[77],C_SCHEME_END_OF_LIST,t1);}

/* f_1064 in k1050 */
static void C_ccall f_1064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1064,3,t0,t1,t2);}
t3=*((C_word*)lf[21]+1);
/* chicken-ffi-syntax.scm:230: g325 */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[22]);}

/* map-loop119 in k1399 */
static void C_fcall f_1483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1483,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1508,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:115: g125 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_1580 in k750 in k748 in k745 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1580,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1583,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:87: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[77],t2,lf[79]);}

/* k1353 in k1351 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1366,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:149: r */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[63]);}

/* k1582 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[78],t2));}

/* k1351 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:147: gensym */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[64]);}

/* k1036 in map-loop343 in k995 in k974 */
static void C_ccall f_1037(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1037,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1012(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1012(t6,((C_word*)t0)[5],t5);}}

/* f_988 in k974 */
static void C_ccall f_988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_988,3,t0,t1,t2);}
t3=C_i_car(t2);
/* chicken-ffi-syntax.scm:244: ##compiler#foreign-type->scrutiny-type */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,lf[22]);}

/* k1365 in k1353 in k1351 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1372,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:151: open-output-string */
t3=*((C_word*)lf[62]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1050 */
static void C_ccall f_1051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1051,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1064,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=C_i_cdddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:231: ##sys#strip-syntax */
t9=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k1694 in k1684 in k1743 in k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1696,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_cdddr(((C_word*)t0)[3]):C_i_cddr(((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,6,lf[84],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t4);
t6=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,((C_word*)t0)[10],((C_word*)t0)[11],t5));}

/* f_1690 in k1684 in k1743 in k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1690(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1690,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_cadr(t2));}

/* k1530 in k1518 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:100: r */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[75]);}

/* k1536 in k1530 in k1518 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:101: symbol->string */
t3=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k974 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_975,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_988,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:245: ##sys#strip-syntax */
t9=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k969 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:237: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[31],C_SCHEME_END_OF_LIST,t1);}

/* f_972 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_972,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_975,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:242: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[31],t2,lf[33]);}

/* k1513 in k752 in k750 in k748 in k745 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:90: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[72],C_SCHEME_END_OF_LIST,t1);}

/* f_1048 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1048,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1051,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:228: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[34],t2,lf[36]);}

/* k1045 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:223: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[34],C_SCHEME_END_OF_LIST,t1);}

/* k1518 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1519,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1531,a[2]=t2,a[3]=t3,a[4]=t9,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[4],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:99: gensym */
t12=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}

/* f_1516 in k752 in k750 in k748 in k745 */
static void C_ccall f_1516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1516,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1519,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:95: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[72],t2,lf[76]);}

/* f_1463 in k1414 in k1399 */
static void C_ccall f_1463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1463,4,t0,t1,t2,t3);}
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_a_i_cons(&a,2,t3,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list1(&a,1,t8));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k995 in k974 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[23]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1012,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1012(t7,t3,t1);}

/* map-loop60 in k1684 in k1743 in k1661 in k1651 in k1600 in k1598 */
static void C_fcall f_1707(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1707,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:75: g66 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* map-loop343 in k995 in k974 */
static void C_fcall f_1012(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1012,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1037,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:244: g349 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1651 in k1600 in k1598 */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1652,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_cadr(((C_word*)t0)[3]):C_i_car(((C_word*)t0)[3]));
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1662,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:68: r */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[86]);}

/* k1006 in k999 in k995 in k974 */
static void C_ccall f_1007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:246: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[26]);}

/* map-loop232 in k1133 in k1128 in k1126 in k1124 */
static void C_fcall f_1196(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1196,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
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

/* k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1662,2,t0,t1);}
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,lf[82],t3);
t5=(C_truep(((C_word*)t0)[3])?C_i_car(((C_word*)t0)[4]):lf[83]);
t6=(C_truep(((C_word*)t0)[3])?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t7=C_a_i_list(&a,2,lf[82],t6);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1737,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
t13=C_i_check_list_2(((C_word*)t0)[5],lf[23]);
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1745,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=t2,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1747,a[2]=t11,a[3]=t16,a[4]=t9,a[5]=t12,a[6]=((C_word)li32),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_1747(t18,t14,((C_word*)t0)[5]);}

/* k1003 in k999 in k995 in k974 */
static void C_ccall f_1004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1004,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[24],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[32],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k999 in k995 in k974 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1004,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1007,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:247: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1399 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1400,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[3],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_list_2(t2,lf[23]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1416,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1483,a[2]=t9,a[3]=t14,a[4]=t7,a[5]=t10,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_1483(t16,t12,t2);}

/* f_1405 in k1399 */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1405,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1411,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:115: gensym */
t4=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1190 in map-loop261 in k1137 in k1133 in k1128 in k1126 in k1124 */
static void C_ccall f_1191(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1191,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1166(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1166(t6,((C_word*)t0)[5],t5);}}

/* k853 in k849 in k845 in k824 */
static void C_ccall f_854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_854,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[24],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[25],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k849 in k845 in k824 */
static void C_ccall f_851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_854,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_857,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:275: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1414 in k1399 */
static void C_ccall f_1416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1463,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:117: append-map */
t4=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,((C_word*)t0)[4],t1);}

/* k1163 in k1159 in k1137 in k1133 in k1128 in k1126 in k1124 */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1164,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[24],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[39],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k1159 in k1137 in k1133 in k1128 in k1126 in k1124 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1164,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:219: ##compiler#foreign-type->scrutiny-type */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[26]);}

/* k1410 */
static void C_ccall f_1411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:115: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* map-loop261 in k1137 in k1133 in k1128 in k1126 in k1124 */
static void C_fcall f_1166(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1166,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1191,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:218: g267 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k824 */
static void C_ccall f_825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_825,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_838,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=C_i_caddr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:273: ##sys#strip-syntax */
t9=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* f_822 in k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_822,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_825,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:270: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[20],t2,lf[27]);}

/* f_1427 in k1421 in k1414 in k1399 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1427,5,t0,t1,t2,t3,t4);}
t5=C_i_length(t2);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,5,lf[68],t7,t8,t3,t4));}
else{
t7=C_i_car(t2);
t8=C_i_cadr(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,4,lf[68],t7,t8,t4));}}

/* k819 in k774 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:265: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[20],C_SCHEME_END_OF_LIST,t1);}

/* k1731 in map-loop60 in k1684 in k1743 in k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1732,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1707(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1707(t6,((C_word*)t0)[5],t5);}}

/* k856 in k849 in k845 in k824 */
static void C_ccall f_857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:274: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[26]);}

/* f_1737 in k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1737(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1737,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}

/* k1421 in k1414 in k1399 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1425,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1427,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[67],t4);
/* chicken-ffi-syntax.scm:123: fold-right */
t6=*((C_word*)lf[69]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t2,t3,t5,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1424 in k1421 in k1414 in k1399 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1425,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[67],((C_word*)t0)[3],t1));}

/* k1565 in k1536 in k1530 in k1518 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
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
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1566,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,5,lf[73],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t4=C_u_i_car(((C_word*)t0)[5]);
t5=C_a_i_list(&a,3,lf[74],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_cons(&a,2,t2,t7);
t9=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_cons(&a,2,((C_word*)t0)[7],t8));}
else{
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_cons(&a,2,((C_word*)t0)[7],t5));}}

/* k1077 in k1073 in k1069 in k1050 */
static void C_ccall f_1078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1078,2,t0,t1);}
t2=C_a_i_list(&a,3,lf[24],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[35],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,4,lf[6],t2,C_SCHEME_FALSE,t5));}

/* k1568 in k1518 */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:99: r */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k1073 in k1069 in k1050 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1078,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:233: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k1069 in k1050 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1070,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[23]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1086,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li11),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1086(t7,t3,t1);}

/* k1743 in k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1745,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[82],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1685,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:74: r */
t4=((C_word*)t0)[11];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[85]);}

/* map-loop33 in k1661 in k1651 in k1600 in k1598 */
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1747,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1772,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:73: g39 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_838 in k824 */
static void C_ccall f_838(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_838,3,t0,t1,t2);}
t3=C_i_car(t2);
/* chicken-ffi-syntax.scm:272: ##compiler#foreign-type->scrutiny-type */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,lf[22]);}

/* f_1152 in k1137 in k1133 in k1128 in k1126 in k1124 */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1152,3,t0,t1,t2);}
t3=*((C_word*)lf[21]+1);
/* chicken-ffi-syntax.scm:218: g284 */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[22]);}

/* k807 in k795 in k793 in k791 in k789 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_808,2,t0,t1);}
t2=C_a_i_list(&a,4,lf[4],((C_word*)t0)[2],lf[5],t1);
t3=C_a_i_list(&a,4,lf[6],lf[7],C_SCHEME_FALSE,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[8],t2,t3));}

/* k886 in map-loop418 in k845 in k824 */
static void C_ccall f_887(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_887,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_862(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_862(t6,((C_word*)t0)[5],t5);}}

/* k1119 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:207: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[37],C_SCHEME_END_OF_LIST,t1);}

/* k1124 */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
t6=t2;
f_1127(t6,C_i_not(t5));}
else{
t4=t2;
f_1127(t4,C_SCHEME_FALSE);}}

/* f_1122 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1122,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1125,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:212: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[37],t2,lf[40]);}

/* k1128 in k1126 in k1124 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1129,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[38]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)t0)[4])?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
/* chicken-ffi-syntax.scm:215: ##sys#strip-syntax */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* f_1594 in k748 in k745 */
static void C_ccall f_1594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1594,5,t0,t1,t2,t3,t4);}
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1599,a[2]=t5,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t5))){
t7=C_u_i_car(t5);
t8=t6;
f_1599(t8,C_i_stringp(t7));}
else{
t7=t6;
f_1599(t7,C_SCHEME_FALSE);}}

/* k1126 in k1124 */
static void C_fcall f_1127(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1127,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_car(t4);
/* chicken-ffi-syntax.scm:214: ##sys#strip-syntax */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t2,t5);}
else{
t3=t2;
f_1129(2,t3,C_SCHEME_FALSE);}}

/* k1591 in k748 in k745 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:45: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[80],C_SCHEME_END_OF_LIST,t1);}

/* k1598 */
static void C_fcall f_1599(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1599,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=t1;
if(C_truep(t3)){
t4=t2;
f_1601(t4,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t4=C_u_i_car(((C_word*)t0)[2]);
t5=t2;
f_1601(t5,C_i_symbolp(t4));}
else{
t4=t2;
f_1601(t4,C_SCHEME_FALSE);}}}

/* k1771 in map-loop33 in k1661 in k1651 in k1600 in k1598 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1772,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1747(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1747(t6,((C_word*)t0)[5],t5);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_chicken_2dffi_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("chicken_2dffi_2dsyntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1378)){
C_save(t1);
C_rereclaim2(1378*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,92);
lf[0]=C_h_intern(&lf[0],33,"\003syschicken-ffi-macro-environment");
lf[1]=C_h_intern(&lf[1],16,"\003sysmacro-subset");
lf[2]=C_h_intern(&lf[2],28,"\003sysextend-macro-environment");
lf[3]=C_h_intern(&lf[3],17,"foreign-type-size");
lf[4]=C_h_intern(&lf[4],28,"\004coredefine-foreign-variable");
lf[5]=C_h_intern(&lf[5],6,"size_t");
lf[6]=C_h_intern(&lf[6],8,"\004corethe");
lf[7]=C_h_intern(&lf[7],6,"fixnum");
lf[8]=C_h_intern(&lf[8],10,"\004corebegin");
lf[9]=C_h_intern(&lf[9],13,"string-append");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\007sizeof(");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[12]=C_h_intern(&lf[12],33,"\010compilerforeign-type-declaration");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[14]=C_h_intern(&lf[14],6,"gensym");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[16]=C_h_intern(&lf[16],16,"\003sysstrip-syntax");
lf[17]=C_h_intern(&lf[17],16,"\003syscheck-syntax");
lf[18]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[19]=C_h_intern(&lf[19],18,"\003syser-transformer");
lf[20]=C_h_intern(&lf[20],20,"foreign-safe-lambda\052");
lf[21]=C_h_intern(&lf[21],36,"\010compilerforeign-type->scrutiny-type");
lf[22]=C_h_intern(&lf[22],3,"arg");
lf[23]=C_h_intern(&lf[23],3,"map");
lf[24]=C_h_intern(&lf[24],9,"procedure");
lf[25]=C_h_intern(&lf[25],25,"\004coreforeign-safe-lambda\052");
lf[26]=C_h_intern(&lf[26],6,"result");
lf[27]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[28]=C_h_intern(&lf[28],19,"foreign-safe-lambda");
lf[29]=C_h_intern(&lf[29],24,"\004coreforeign-safe-lambda");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[31]=C_h_intern(&lf[31],15,"foreign-lambda\052");
lf[32]=C_h_intern(&lf[32],20,"\004coreforeign-lambda\052");
lf[33]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[34]=C_h_intern(&lf[34],14,"foreign-lambda");
lf[35]=C_h_intern(&lf[35],19,"\004coreforeign-lambda");
lf[36]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[37]=C_h_intern(&lf[37],17,"foreign-primitive");
lf[38]=C_h_intern(&lf[38],4,"void");
lf[39]=C_h_intern(&lf[39],22,"\004coreforeign-primitive");
lf[40]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\001\000\000\001_");
lf[41]=C_h_intern(&lf[41],23,"define-foreign-variable");
lf[42]=C_h_intern(&lf[42],19,"define-foreign-type");
lf[43]=C_h_intern(&lf[43],24,"\004coredefine-foreign-type");
lf[44]=C_h_intern(&lf[44],15,"foreign-declare");
lf[45]=C_h_intern(&lf[45],12,"\004coredeclare");
lf[46]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[47]=C_h_intern(&lf[47],13,"foreign-value");
lf[48]=C_h_intern(&lf[48],14,"symbol->string");
lf[49]=C_h_intern(&lf[49],12,"syntax-error");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a string or symbol");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\005code_");
lf[52]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[53]=C_h_intern(&lf[53],12,"foreign-code");
lf[54]=C_h_intern(&lf[54],11,"\004coreinline");
lf[55]=C_h_intern(&lf[55],17,"get-output-string");
lf[56]=C_h_intern(&lf[56],7,"display");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012");
lf[58]=C_h_intern(&lf[58],18,"string-intersperse");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\005() { ");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\016static C_word ");
lf[62]=C_h_intern(&lf[62],18,"open-output-string");
lf[63]=C_h_intern(&lf[63],7,"declare");
lf[64]=C_h_intern(&lf[64],5,"code_");
lf[65]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\006string\376\377\001\000\000\000\000");
lf[66]=C_h_intern(&lf[66],12,"let-location");
lf[67]=C_h_intern(&lf[67],8,"\004corelet");
lf[68]=C_h_intern(&lf[68],17,"\004corelet-location");
lf[69]=C_h_intern(&lf[69],10,"fold-right");
lf[70]=C_h_intern(&lf[70],10,"append-map");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000"
"\000\000\376\001\000\000\001_");
lf[72]=C_h_intern(&lf[72],15,"define-location");
lf[73]=C_h_intern(&lf[73],29,"\004coredefine-external-variable");
lf[74]=C_h_intern(&lf[74],9,"\004coreset!");
lf[75]=C_h_intern(&lf[75],5,"begin");
lf[76]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\010variable\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[77]=C_h_intern(&lf[77],8,"location");
lf[78]=C_h_intern(&lf[78],13,"\004corelocation");
lf[79]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010location\376\003\000\000\002\376\001\000\000\001_\376\377\016");
lf[80]=C_h_intern(&lf[80],15,"define-external");
lf[81]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006symbol\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\003\376\001\000\000\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001");
lf[82]=C_h_intern(&lf[82],5,"quote");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[84]=C_h_intern(&lf[84],29,"\004coreforeign-callback-wrapper");
lf[85]=C_h_intern(&lf[85],6,"lambda");
lf[86]=C_h_intern(&lf[86],6,"define");
lf[87]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376"
"\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376\001\000\000\001_\376\377\001\000\000\000\001");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001_\376\003\000\000\002\376\001\000\000\006symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001_\376\000\000\000\002\376"
"\001\000\000\001_\376\377\001\000\000\000\001");
lf[89]=C_h_intern(&lf[89],21,"\003sysmacro-environment");
lf[90]=C_h_intern(&lf[90],11,"\003sysprovide");
lf[91]=C_h_intern(&lf[91],18,"chicken-ffi-syntax");
C_register_lf2(lf,92,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:38: ##sys#provide */
t3=*((C_word*)lf[90]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[91]);}

/* k895 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:251: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[28],C_SCHEME_END_OF_LIST,t1);}

/* f_898 in k772 in k770 in k768 in k766 in k764 in k762 in k760 in k758 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_898,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_901,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:256: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[28],t2,lf[30]);}

/* k1133 in k1128 in k1126 in k1124 */
static void C_ccall f_1134(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1134,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(t1,lf[23]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1196,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1196(t11,t7,t1);}

/* k1137 in k1133 in k1128 in k1126 in k1124 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1139,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1152,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(t1,lf[23]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1166,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,a[6]=((C_word)li14),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_1166(t12,t8,t1);}

/* f_1349 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1349,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1352,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:146: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[53],t2,lf[65]);}

/* k1346 in k756 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[53],C_SCHEME_END_OF_LIST,t1);}

/* map-loop418 in k845 in k824 */
static void C_fcall f_862(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_862,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_887,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:272: g424 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_1397 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1397,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1400,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:112: ##sys#check-syntax */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[66],t2,lf[71]);}

/* k1394 in k754 in k752 in k750 in k748 in k745 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:107: ##sys#extend-macro-environment */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[66],C_SCHEME_END_OF_LIST,t1);}

/* k845 in k824 */
static void C_ccall f_846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_846,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[23]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_862,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li2),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_862(t7,t3,t1);}

/* map-loop302 in k1069 in k1050 */
static void C_fcall f_1086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1086,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1111,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-ffi-syntax.scm:230: g308 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1080 in k1073 in k1069 in k1050 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-ffi-syntax.scm:232: ##compiler#foreign-type->scrutiny-type */
t2=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[26]);}

/* k1110 in map-loop302 in k1069 in k1050 */
static void C_ccall f_1111(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1111,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1086(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1086(t6,((C_word*)t0)[5],t5);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[147] = {
{"f_1386:chicken_2dffi_2dsyntax_2escm",(void*)f_1386},
{"f_1389:chicken_2dffi_2dsyntax_2escm",(void*)f_1389},
{"f_961:chicken_2dffi_2dsyntax_2escm",(void*)f_961},
{"f_1383:chicken_2dffi_2dsyntax_2escm",(void*)f_1383},
{"f_1380:chicken_2dffi_2dsyntax_2escm",(void*)f_1380},
{"f_931:chicken_2dffi_2dsyntax_2escm",(void*)f_931},
{"f_936:chicken_2dffi_2dsyntax_2escm",(void*)f_936},
{"f_1284:chicken_2dffi_2dsyntax_2escm",(void*)f_1284},
{"f_901:chicken_2dffi_2dsyntax_2escm",(void*)f_901},
{"f_1601:chicken_2dffi_2dsyntax_2escm",(void*)f_1601},
{"f_1296:chicken_2dffi_2dsyntax_2escm",(void*)f_1296},
{"f_1298:chicken_2dffi_2dsyntax_2escm",(void*)f_1298},
{"f_1606:chicken_2dffi_2dsyntax_2escm",(void*)f_1606},
{"f_920:chicken_2dffi_2dsyntax_2escm",(void*)f_920},
{"f_928:chicken_2dffi_2dsyntax_2escm",(void*)f_928},
{"f_925:chicken_2dffi_2dsyntax_2escm",(void*)f_925},
{"f_1259:chicken_2dffi_2dsyntax_2escm",(void*)f_1259},
{"f_1257:chicken_2dffi_2dsyntax_2escm",(void*)f_1257},
{"f_914:chicken_2dffi_2dsyntax_2escm",(void*)f_914},
{"f_1270:chicken_2dffi_2dsyntax_2escm",(void*)f_1270},
{"f_1268:chicken_2dffi_2dsyntax_2escm",(void*)f_1268},
{"f_1281:chicken_2dffi_2dsyntax_2escm",(void*)f_1281},
{"f_1508:chicken_2dffi_2dsyntax_2escm",(void*)f_1508},
{"f_1279:chicken_2dffi_2dsyntax_2escm",(void*)f_1279},
{"f_746:chicken_2dffi_2dsyntax_2escm",(void*)f_746},
{"f_1685:chicken_2dffi_2dsyntax_2escm",(void*)f_1685},
{"f_749:chicken_2dffi_2dsyntax_2escm",(void*)f_749},
{"f_753:chicken_2dffi_2dsyntax_2escm",(void*)f_753},
{"f_755:chicken_2dffi_2dsyntax_2escm",(void*)f_755},
{"f_751:chicken_2dffi_2dsyntax_2escm",(void*)f_751},
{"f_757:chicken_2dffi_2dsyntax_2escm",(void*)f_757},
{"f_1614:chicken_2dffi_2dsyntax_2escm",(void*)f_1614},
{"f_759:chicken_2dffi_2dsyntax_2escm",(void*)f_759},
{"f_765:chicken_2dffi_2dsyntax_2escm",(void*)f_765},
{"f_763:chicken_2dffi_2dsyntax_2escm",(void*)f_763},
{"f_769:chicken_2dffi_2dsyntax_2escm",(void*)f_769},
{"f_767:chicken_2dffi_2dsyntax_2escm",(void*)f_767},
{"f_761:chicken_2dffi_2dsyntax_2escm",(void*)f_761},
{"f_1311:chicken_2dffi_2dsyntax_2escm",(void*)f_1311},
{"f_775:chicken_2dffi_2dsyntax_2escm",(void*)f_775},
{"f_773:chicken_2dffi_2dsyntax_2escm",(void*)f_773},
{"f_1317:chicken_2dffi_2dsyntax_2escm",(void*)f_1317},
{"f_779:chicken_2dffi_2dsyntax_2escm",(void*)f_779},
{"f_777:chicken_2dffi_2dsyntax_2escm",(void*)f_777},
{"f_771:chicken_2dffi_2dsyntax_2escm",(void*)f_771},
{"f_1320:chicken_2dffi_2dsyntax_2escm",(void*)f_1320},
{"f_782:chicken_2dffi_2dsyntax_2escm",(void*)f_782},
{"f_785:chicken_2dffi_2dsyntax_2escm",(void*)f_785},
{"f_1329:chicken_2dffi_2dsyntax_2escm",(void*)f_1329},
{"f_787:chicken_2dffi_2dsyntax_2escm",(void*)f_787},
{"f_1372:chicken_2dffi_2dsyntax_2escm",(void*)f_1372},
{"f_1374:chicken_2dffi_2dsyntax_2escm",(void*)f_1374},
{"f_792:chicken_2dffi_2dsyntax_2escm",(void*)f_792},
{"f_794:chicken_2dffi_2dsyntax_2escm",(void*)f_794},
{"f_796:chicken_2dffi_2dsyntax_2escm",(void*)f_796},
{"f_1376:chicken_2dffi_2dsyntax_2escm",(void*)f_1376},
{"f_1378:chicken_2dffi_2dsyntax_2escm",(void*)f_1378},
{"f_790:chicken_2dffi_2dsyntax_2escm",(void*)f_790},
{"f_1301:chicken_2dffi_2dsyntax_2escm",(void*)f_1301},
{"f_1303:chicken_2dffi_2dsyntax_2escm",(void*)f_1303},
{"f_1578:chicken_2dffi_2dsyntax_2escm",(void*)f_1578},
{"f_1064:chicken_2dffi_2dsyntax_2escm",(void*)f_1064},
{"f_1483:chicken_2dffi_2dsyntax_2escm",(void*)f_1483},
{"f_1580:chicken_2dffi_2dsyntax_2escm",(void*)f_1580},
{"f_1354:chicken_2dffi_2dsyntax_2escm",(void*)f_1354},
{"f_1583:chicken_2dffi_2dsyntax_2escm",(void*)f_1583},
{"f_1352:chicken_2dffi_2dsyntax_2escm",(void*)f_1352},
{"f_1037:chicken_2dffi_2dsyntax_2escm",(void*)f_1037},
{"f_988:chicken_2dffi_2dsyntax_2escm",(void*)f_988},
{"f_1366:chicken_2dffi_2dsyntax_2escm",(void*)f_1366},
{"f_1051:chicken_2dffi_2dsyntax_2escm",(void*)f_1051},
{"f_1696:chicken_2dffi_2dsyntax_2escm",(void*)f_1696},
{"f_1690:chicken_2dffi_2dsyntax_2escm",(void*)f_1690},
{"f_1531:chicken_2dffi_2dsyntax_2escm",(void*)f_1531},
{"f_1537:chicken_2dffi_2dsyntax_2escm",(void*)f_1537},
{"f_975:chicken_2dffi_2dsyntax_2escm",(void*)f_975},
{"f_970:chicken_2dffi_2dsyntax_2escm",(void*)f_970},
{"f_972:chicken_2dffi_2dsyntax_2escm",(void*)f_972},
{"f_1514:chicken_2dffi_2dsyntax_2escm",(void*)f_1514},
{"f_1048:chicken_2dffi_2dsyntax_2escm",(void*)f_1048},
{"f_1046:chicken_2dffi_2dsyntax_2escm",(void*)f_1046},
{"f_1519:chicken_2dffi_2dsyntax_2escm",(void*)f_1519},
{"f_1516:chicken_2dffi_2dsyntax_2escm",(void*)f_1516},
{"f_1463:chicken_2dffi_2dsyntax_2escm",(void*)f_1463},
{"f_996:chicken_2dffi_2dsyntax_2escm",(void*)f_996},
{"f_1707:chicken_2dffi_2dsyntax_2escm",(void*)f_1707},
{"f_1012:chicken_2dffi_2dsyntax_2escm",(void*)f_1012},
{"f_1652:chicken_2dffi_2dsyntax_2escm",(void*)f_1652},
{"f_1007:chicken_2dffi_2dsyntax_2escm",(void*)f_1007},
{"f_1196:chicken_2dffi_2dsyntax_2escm",(void*)f_1196},
{"f_1662:chicken_2dffi_2dsyntax_2escm",(void*)f_1662},
{"f_1004:chicken_2dffi_2dsyntax_2escm",(void*)f_1004},
{"f_1001:chicken_2dffi_2dsyntax_2escm",(void*)f_1001},
{"f_1400:chicken_2dffi_2dsyntax_2escm",(void*)f_1400},
{"f_1405:chicken_2dffi_2dsyntax_2escm",(void*)f_1405},
{"f_1191:chicken_2dffi_2dsyntax_2escm",(void*)f_1191},
{"f_854:chicken_2dffi_2dsyntax_2escm",(void*)f_854},
{"f_851:chicken_2dffi_2dsyntax_2escm",(void*)f_851},
{"f_1416:chicken_2dffi_2dsyntax_2escm",(void*)f_1416},
{"f_1164:chicken_2dffi_2dsyntax_2escm",(void*)f_1164},
{"f_1161:chicken_2dffi_2dsyntax_2escm",(void*)f_1161},
{"f_1411:chicken_2dffi_2dsyntax_2escm",(void*)f_1411},
{"f_1166:chicken_2dffi_2dsyntax_2escm",(void*)f_1166},
{"f_825:chicken_2dffi_2dsyntax_2escm",(void*)f_825},
{"f_822:chicken_2dffi_2dsyntax_2escm",(void*)f_822},
{"f_1427:chicken_2dffi_2dsyntax_2escm",(void*)f_1427},
{"f_820:chicken_2dffi_2dsyntax_2escm",(void*)f_820},
{"f_1732:chicken_2dffi_2dsyntax_2escm",(void*)f_1732},
{"f_857:chicken_2dffi_2dsyntax_2escm",(void*)f_857},
{"f_1737:chicken_2dffi_2dsyntax_2escm",(void*)f_1737},
{"f_1422:chicken_2dffi_2dsyntax_2escm",(void*)f_1422},
{"f_1425:chicken_2dffi_2dsyntax_2escm",(void*)f_1425},
{"f_1566:chicken_2dffi_2dsyntax_2escm",(void*)f_1566},
{"f_1078:chicken_2dffi_2dsyntax_2escm",(void*)f_1078},
{"f_1569:chicken_2dffi_2dsyntax_2escm",(void*)f_1569},
{"f_1075:chicken_2dffi_2dsyntax_2escm",(void*)f_1075},
{"f_1070:chicken_2dffi_2dsyntax_2escm",(void*)f_1070},
{"f_1745:chicken_2dffi_2dsyntax_2escm",(void*)f_1745},
{"f_1747:chicken_2dffi_2dsyntax_2escm",(void*)f_1747},
{"f_838:chicken_2dffi_2dsyntax_2escm",(void*)f_838},
{"f_1152:chicken_2dffi_2dsyntax_2escm",(void*)f_1152},
{"f_808:chicken_2dffi_2dsyntax_2escm",(void*)f_808},
{"f_887:chicken_2dffi_2dsyntax_2escm",(void*)f_887},
{"f_1120:chicken_2dffi_2dsyntax_2escm",(void*)f_1120},
{"f_1125:chicken_2dffi_2dsyntax_2escm",(void*)f_1125},
{"f_1122:chicken_2dffi_2dsyntax_2escm",(void*)f_1122},
{"f_1129:chicken_2dffi_2dsyntax_2escm",(void*)f_1129},
{"f_1594:chicken_2dffi_2dsyntax_2escm",(void*)f_1594},
{"f_1127:chicken_2dffi_2dsyntax_2escm",(void*)f_1127},
{"f_1592:chicken_2dffi_2dsyntax_2escm",(void*)f_1592},
{"f_1599:chicken_2dffi_2dsyntax_2escm",(void*)f_1599},
{"f_1772:chicken_2dffi_2dsyntax_2escm",(void*)f_1772},
{"toplevel:chicken_2dffi_2dsyntax_2escm",(void*)C_chicken_2dffi_2dsyntax_toplevel},
{"f_896:chicken_2dffi_2dsyntax_2escm",(void*)f_896},
{"f_898:chicken_2dffi_2dsyntax_2escm",(void*)f_898},
{"f_1134:chicken_2dffi_2dsyntax_2escm",(void*)f_1134},
{"f_1139:chicken_2dffi_2dsyntax_2escm",(void*)f_1139},
{"f_1349:chicken_2dffi_2dsyntax_2escm",(void*)f_1349},
{"f_1347:chicken_2dffi_2dsyntax_2escm",(void*)f_1347},
{"f_862:chicken_2dffi_2dsyntax_2escm",(void*)f_862},
{"f_1397:chicken_2dffi_2dsyntax_2escm",(void*)f_1397},
{"f_1395:chicken_2dffi_2dsyntax_2escm",(void*)f_1395},
{"f_846:chicken_2dffi_2dsyntax_2escm",(void*)f_846},
{"f_1086:chicken_2dffi_2dsyntax_2escm",(void*)f_1086},
{"f_1081:chicken_2dffi_2dsyntax_2escm",(void*)f_1081},
{"f_1111:chicken_2dffi_2dsyntax_2escm",(void*)f_1111},
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
S|  sprintf		1
S|  map		9
o|eliminated procedure checks: 83 
o|specializations:
o|  5 (cdr pair)
o|  1 (= fixnum fixnum)
o|  1 (cdddr (pair * (pair * pair)))
o|  1 (##sys#check-list (or pair list) *)
o|  3 (cddr (pair * pair))
o|  2 (cadr (pair * pair))
o|  5 (car pair)
o|Removed `not' forms: 1 
o|inlining procedure: k865 
o|inlining procedure: k865 
o|propagated global variable: g400401 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k939 
o|inlining procedure: k939 
o|inlining procedure: k1015 
o|inlining procedure: k1015 
o|propagated global variable: g325326 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k1089 
o|inlining procedure: k1089 
o|propagated global variable: g284285 ##compiler#foreign-type->scrutiny-type 
o|inlining procedure: k1169 
o|inlining procedure: k1169 
o|inlining procedure: k1199 
o|inlining procedure: k1199 
o|inlining procedure: k1226 
o|inlining procedure: k1226 
o|inlining procedure: k1328 
o|inlining procedure: k1328 
o|inlining procedure: k1429 
o|inlining procedure: k1429 
o|substituted constant variable: a1452 
o|inlining procedure: k1465 
o|inlining procedure: k1465 
o|inlining procedure: k1486 
o|inlining procedure: k1486 
o|inlining procedure: k1551 
o|inlining procedure: k1551 
o|inlining procedure: k1602 
o|inlining procedure: k1628 
o|inlining procedure: k1628 
o|inlining procedure: k1602 
o|inlining procedure: k1698 
o|inlining procedure: k1698 
o|inlining procedure: k1710 
o|inlining procedure: k1710 
o|inlining procedure: k1750 
o|inlining procedure: k1750 
o|inlining procedure: k1777 
o|inlining procedure: k1777 
o|contracted procedure: k1802 
o|inlining procedure: k1805 
o|inlining procedure: k1805 
o|replaced variables: 89 
o|removed binding forms: 23 
o|substituted constant variable: f_14641843 
o|substituted constant variable: a15501847 
o|substituted constant variable: a16271850 
o|substituted constant variable: r18061861 
o|removed binding forms: 97 
o|removed binding forms: 4 
o|simplifications: ((if . 7) (##core#call . 177)) 
o|  call simplifications:
o|    null?
o|    list
o|    length
o|    eq?
o|    symbol?	2
o|    cdr	6
o|    cddr	3
o|    not
o|    cdddr	3
o|    caddr	9
o|    ##sys#check-list	8
o|    pair?	15
o|    cons	10
o|    ##sys#setslot	9
o|    ##sys#slot	18
o|    car	10
o|    ##sys#cons	20
o|    cadr	16
o|    string?	4
o|    ##sys#list	39
o|contracted procedure: k801 
o|contracted procedure: k804 
o|contracted procedure: k809 
o|contracted procedure: k816 
o|contracted procedure: k843 
o|contracted procedure: k847 
o|contracted procedure: k830 
o|contracted procedure: k833 
o|contracted procedure: k859 
o|contracted procedure: k867 
o|contracted procedure: k870 
o|contracted procedure: k879 
o|contracted procedure: k889 
o|contracted procedure: k892 
o|contracted procedure: k921 
o|contracted procedure: k906 
o|contracted procedure: k909 
o|contracted procedure: k933 
o|contracted procedure: k941 
o|contracted procedure: k944 
o|contracted procedure: k953 
o|contracted procedure: k963 
o|contracted procedure: k966 
o|contracted procedure: k993 
o|contracted procedure: k997 
o|contracted procedure: k980 
o|contracted procedure: k983 
o|contracted procedure: k1009 
o|contracted procedure: k1017 
o|contracted procedure: k1020 
o|contracted procedure: k1029 
o|contracted procedure: k1039 
o|contracted procedure: k1042 
o|contracted procedure: k1071 
o|contracted procedure: k1056 
o|contracted procedure: k1059 
o|contracted procedure: k1083 
o|contracted procedure: k1091 
o|contracted procedure: k1094 
o|contracted procedure: k1103 
o|contracted procedure: k1113 
o|contracted procedure: k1116 
o|contracted procedure: k1130 
o|contracted procedure: k1135 
o|contracted procedure: k1157 
o|contracted procedure: k1144 
o|contracted procedure: k1147 
o|contracted procedure: k1171 
o|contracted procedure: k1174 
o|contracted procedure: k1183 
o|contracted procedure: k1193 
o|contracted procedure: k1201 
o|contracted procedure: k1223 
o|contracted procedure: k1220 
o|contracted procedure: k1204 
o|contracted procedure: k1213 
o|contracted procedure: k1226 
o|contracted procedure: k1253 
o|contracted procedure: k1240 
o|contracted procedure: k1250 
o|contracted procedure: k1247 
o|contracted procedure: k1264 
o|contracted procedure: k1275 
o|contracted procedure: k1292 
o|contracted procedure: k1289 
o|contracted procedure: k1304 
o|contracted procedure: k1313 
o|contracted procedure: k1322 
o|contracted procedure: k1325 
o|contracted procedure: k1330 
o|contracted procedure: k1336 
o|contracted procedure: k1368 
o|contracted procedure: k1359 
o|contracted procedure: k1362 
o|contracted procedure: k1391 
o|contracted procedure: k1401 
o|contracted procedure: k1412 
o|contracted procedure: k1454 
o|contracted procedure: k1431 
o|contracted procedure: k1438 
o|contracted procedure: k1441 
o|contracted procedure: k1447 
o|contracted procedure: k1450 
o|contracted procedure: k1460 
o|contracted procedure: k1457 
o|contracted procedure: k1480 
o|contracted procedure: k1467 
o|contracted procedure: k1474 
o|contracted procedure: k1488 
o|contracted procedure: k1491 
o|contracted procedure: k1500 
o|contracted procedure: k1510 
o|contracted procedure: k1520 
o|contracted procedure: k1522 
o|contracted procedure: k1570 
o|contracted procedure: k1527 
o|contracted procedure: k1542 
o|contracted procedure: k1539 
o|contracted procedure: k1548 
o|contracted procedure: k1553 
o|contracted procedure: k1560 
o|contracted procedure: k1551 
o|contracted procedure: k1588 
o|contracted procedure: k1596 
o|contracted procedure: k1607 
o|contracted procedure: k1649 
o|contracted procedure: k1619 
o|contracted procedure: k1616 
o|contracted procedure: k1625 
o|contracted procedure: k1630 
o|contracted procedure: k1640 
o|contracted procedure: k1637 
o|contracted procedure: k1628 
o|contracted procedure: k1653 
o|contracted procedure: k1655 
o|contracted procedure: k1669 
o|contracted procedure: k1672 
o|contracted procedure: k1777 
o|contracted procedure: k1675 
o|contracted procedure: k1741 
o|contracted procedure: k1678 
o|contracted procedure: k1698 
o|contracted procedure: k1687 
o|contracted procedure: k1681 
o|contracted procedure: k1666 
o|contracted procedure: k1712 
o|contracted procedure: k1715 
o|contracted procedure: k1724 
o|contracted procedure: k1734 
o|contracted procedure: k1752 
o|contracted procedure: k1755 
o|contracted procedure: k1764 
o|contracted procedure: k1774 
o|contracted procedure: k1808 
o|contracted procedure: k1816 
o|simplifications: ((let . 18)) 
o|removed binding forms: 135 
o|inlining procedure: k872 
o|inlining procedure: k872 
o|inlining procedure: k946 
o|inlining procedure: k946 
o|inlining procedure: k1022 
o|inlining procedure: k1022 
o|inlining procedure: k1096 
o|inlining procedure: k1096 
o|inlining procedure: k1176 
o|inlining procedure: k1176 
o|inlining procedure: k1206 
o|inlining procedure: k1206 
o|inlining procedure: k1493 
o|inlining procedure: k1493 
o|inlining procedure: k1545 
o|inlining procedure: k1545 
o|inlining procedure: k1622 
o|inlining procedure: k1622 
o|inlining procedure: k1717 
o|inlining procedure: k1717 
o|inlining procedure: k1757 
o|inlining procedure: k1757 
o|replaced variables: 12 
o|removed binding forms: 30 
o|customizable procedures: (k1598 k1600 map-loop3351 map-loop6078 map-loop119137 k1310 k1126 map-loop232249 map-loop261286 map-loop302327 map-loop343361 map-loop377402 map-loop418436) 
o|calls to known targets: 38 
o|identified direct recursive calls: f_1196 2 
o|fast box initializations: 9 
*/
/* end of file */
