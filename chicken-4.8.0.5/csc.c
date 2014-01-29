/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: csc.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file csc.c
   used units: library eval data_2dstructures ports srfi_2d1 srfi_2d13 utils files extras
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
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[420];
static double C_possibly_force_alignment;


C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1356)
static void C_ccall f_1356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1358)
static void C_ccall f_1358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_fcall f_1590(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2723)
static void C_fcall f_2723(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2721)
static void C_fcall f_2721(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1587)
static void C_fcall f_1587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_fcall f_2782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_fcall f_2773(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1833)
static void C_fcall f_1833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1888)
static void C_ccall f_1888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4377)
static void C_ccall f_4377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_fcall f_4120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4302)
static void C_fcall f_4302(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3930)
static void C_ccall f_3930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_fcall f_4107(C_word t0) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3969)
static void C_fcall f_3969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3999)
static void C_fcall f_3999(C_word t0) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4134)
static void C_fcall f_4134(C_word t0) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_fcall f_2673(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3030)
static void C_fcall f_3030(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5862)
static void C_ccall f5862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5866)
static void C_ccall f5866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1812)
static void C_fcall f_1812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1952)
static void C_ccall f_1952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_fcall f_1943(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1945)
static void C_fcall f_1945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_fcall f_3426(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5395)
static void C_ccall f5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5388)
static void C_ccall f5388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5383)
static void C_ccall f5383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3064)
static void C_fcall f_3064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5373)
static void C_ccall f5373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5378)
static void C_ccall f5378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3775)
static void C_fcall f_3775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_fcall f_3352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5363)
static void C_ccall f5363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5368)
static void C_ccall f5368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5494)
static void C_ccall f5494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5499)
static void C_ccall f5499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4088)
static void C_ccall f_4088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5353)
static void C_ccall f5353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5358)
static void C_ccall f5358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4183)
static void C_fcall f_4183(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3754)
static void C_fcall f_3754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5400)
static void C_ccall f5400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_fcall f_3339(C_word t0,C_word t1) C_noret;
C_noret_decl(f5405)
static void C_ccall f5405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4075)
static void C_fcall f_4075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5348)
static void C_ccall f5348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3744)
static void C_fcall f_3744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5322)
static void C_ccall f5322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5327)
static void C_ccall f5327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_fcall f_3500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3677)
static void C_fcall f_3677(C_word t0) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_fcall f_4144(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1794)
static C_word C_fcall f_1794(C_word *a);
C_noret_decl(f5442)
static void C_ccall f5442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5437)
static void C_ccall f5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3691)
static void C_fcall f_3691(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_fcall f_1738(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5484)
static void C_ccall f5484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5489)
static void C_ccall f5489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1394)
static void C_fcall f_1394(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1488)
static void C_fcall f_1488(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1746)
static void C_fcall f_1746(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f5474)
static void C_ccall f5474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5479)
static void C_ccall f5479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1610)
static void C_fcall f_1610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1472)
static void C_ccall f_1472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5469)
static void C_ccall f5469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5464)
static void C_ccall f5464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5450)
static void C_ccall f5450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_fcall f_3590(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3613)
static void C_fcall f_3613(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_ccall f_4605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_fcall f_2499(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5858)
static void C_ccall f5858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3570)
static void C_fcall f_3570(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3634)
static void C_fcall f_3634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3657)
static void C_fcall f_3657(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1771)
static void C_fcall f_1771(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3520)
static void C_fcall f_3520(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4497)
static void C_fcall f_4497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_fcall f_4477(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5420)
static void C_ccall f5420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5410)
static void C_ccall f5410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5415)
static void C_ccall f5415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4459)
static void C_ccall f_4459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4434)
static void C_ccall f_4434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4428)
static void C_ccall f_4428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4208)
static void C_fcall f_4208(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_fcall f_2855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4555)
static void C_ccall f_4555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_fcall f_2894(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_fcall f_2176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3808)
static void C_fcall f_3808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1590)
static void C_fcall trf_1590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1590(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1590(t0,t1);}

C_noret_decl(trf_2723)
static void C_fcall trf_2723(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2723(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2723(t0,t1);}

C_noret_decl(trf_2721)
static void C_fcall trf_2721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2721(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2721(t0,t1);}

C_noret_decl(trf_1587)
static void C_fcall trf_1587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1587(t0,t1);}

C_noret_decl(trf_2782)
static void C_fcall trf_2782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2782(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2782(t0,t1);}

C_noret_decl(trf_2773)
static void C_fcall trf_2773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2773(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2773(t0,t1);}

C_noret_decl(trf_1833)
static void C_fcall trf_1833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1833(t0,t1);}

C_noret_decl(trf_4120)
static void C_fcall trf_4120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4120(t0,t1);}

C_noret_decl(trf_4302)
static void C_fcall trf_4302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4302(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4302(t0,t1);}

C_noret_decl(trf_4107)
static void C_fcall trf_4107(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4107(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_4107(t0);}

C_noret_decl(trf_3969)
static void C_fcall trf_3969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3969(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3969(t0,t1,t2);}

C_noret_decl(trf_3999)
static void C_fcall trf_3999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3999(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_3999(t0);}

C_noret_decl(trf_4134)
static void C_fcall trf_4134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4134(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_4134(t0);}

C_noret_decl(trf_2673)
static void C_fcall trf_2673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2673(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2673(t0,t1);}

C_noret_decl(trf_3030)
static void C_fcall trf_3030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3030(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3030(t0,t1);}

C_noret_decl(trf_3446)
static void C_fcall trf_3446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3446(t0,t1,t2);}

C_noret_decl(trf_1812)
static void C_fcall trf_1812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1812(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1812(t0,t1,t2);}

C_noret_decl(trf_1943)
static void C_fcall trf_1943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1943(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1943(t0,t1);}

C_noret_decl(trf_1945)
static void C_fcall trf_1945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1945(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1945(t0,t1);}

C_noret_decl(trf_3426)
static void C_fcall trf_3426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3426(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3426(t0,t1,t2);}

C_noret_decl(trf_3064)
static void C_fcall trf_3064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3064(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3064(t0,t1);}

C_noret_decl(trf_3775)
static void C_fcall trf_3775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3775(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3775(t0,t1);}

C_noret_decl(trf_3352)
static void C_fcall trf_3352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3352(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3352(t0,t1,t2);}

C_noret_decl(trf_4183)
static void C_fcall trf_4183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4183(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4183(t0,t1,t2);}

C_noret_decl(trf_3754)
static void C_fcall trf_3754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3754(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3754(t0,t1,t2);}

C_noret_decl(trf_3339)
static void C_fcall trf_3339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3339(t0,t1);}

C_noret_decl(trf_4075)
static void C_fcall trf_4075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4075(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4075(t0,t1,t2);}

C_noret_decl(trf_3744)
static void C_fcall trf_3744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3744(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3744(t0,t1);}

C_noret_decl(trf_3500)
static void C_fcall trf_3500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3500(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3500(t0,t1);}

C_noret_decl(trf_3677)
static void C_fcall trf_3677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3677(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_3677(t0);}

C_noret_decl(trf_4144)
static void C_fcall trf_4144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4144(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4144(t0,t1);}

C_noret_decl(trf_3691)
static void C_fcall trf_3691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3691(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3691(t0,t1,t2);}

C_noret_decl(trf_1738)
static void C_fcall trf_1738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1738(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1738(t0,t1);}

C_noret_decl(trf_1394)
static void C_fcall trf_1394(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1394(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1394(t0,t1,t2);}

C_noret_decl(trf_1488)
static void C_fcall trf_1488(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1488(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1488(t0,t1);}

C_noret_decl(trf_1746)
static void C_fcall trf_1746(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1746(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1746(t0,t1,t2,t3);}

C_noret_decl(trf_1610)
static void C_fcall trf_1610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1610(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1610(t0,t1,t2);}

C_noret_decl(trf_3590)
static void C_fcall trf_3590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3590(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3590(t0,t1,t2);}

C_noret_decl(trf_3613)
static void C_fcall trf_3613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3613(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3613(t0,t1,t2);}

C_noret_decl(trf_2499)
static void C_fcall trf_2499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2499(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2499(t0,t1);}

C_noret_decl(trf_3570)
static void C_fcall trf_3570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3570(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3570(t0,t1,t2);}

C_noret_decl(trf_3634)
static void C_fcall trf_3634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3634(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3634(t0,t1);}

C_noret_decl(trf_3657)
static void C_fcall trf_3657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3657(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3657(t0,t1,t2);}

C_noret_decl(trf_1771)
static void C_fcall trf_1771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1771(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1771(t0,t1);}

C_noret_decl(trf_3520)
static void C_fcall trf_3520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3520(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3520(t0,t1);}

C_noret_decl(trf_4497)
static void C_fcall trf_4497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4497(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4497(t0,t1,t2);}

C_noret_decl(trf_4477)
static void C_fcall trf_4477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4477(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4477(t0,t1);}

C_noret_decl(trf_4208)
static void C_fcall trf_4208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4208(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4208(t0,t1);}

C_noret_decl(trf_2855)
static void C_fcall trf_2855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2855(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2855(t0,t1);}

C_noret_decl(trf_2894)
static void C_fcall trf_2894(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2894(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2894(t0,t1,t2);}

C_noret_decl(trf_2176)
static void C_fcall trf_2176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2176(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2176(t0,t1);}

C_noret_decl(trf_3808)
static void C_fcall trf_3808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3808(t0,t1);}

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

/* k1353 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1355 in k1353 */
static void C_ccall f_1356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_data_2dstructures_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1357 in k1355 in k1353 */
static void C_ccall f_1358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2095 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[77] /* (set! translate-options ...) */,t1);
t3=lf[95] /* static-libs */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1812(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* f_1597 in k1592 in k1589 in k1586 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1597,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1599,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1605,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:284: string-split */
t9=C_fast_retrieve(lf[223]);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t2,lf[224]);}

/* k1594 in k1592 in k1589 in k1586 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:265: append */
t2=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1592 in k1589 in k1586 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1597,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:282: g160 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t1);}
else{
/* csc.scm:265: append */
t3=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}}

/* k1589 in k1586 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_fcall f_1590(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1590,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:282: get-environment-variable */
t3=C_fast_retrieve(lf[225]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[226]);}

/* f_1599 */
static void C_ccall f_1599(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1599,3,t0,t1,t2);}
/* csc.scm:284: g188 */
t3=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[221],t2,lf[222]);}

/* k2451 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2756 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2757,2,t0,t1);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_a_i_string_to_number(&a,2,t2,C_fix(10));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:751: t-options */
f_1738(t4,C_a_i_list(&a,2,((C_word*)t0)[6],t2));}

/* k2330 in k2334 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2040 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:590: print */
t2=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2334 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[57],"object-files"));
t3=C_mutate(&lf[57] /* (set! object-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:663: cons* */
t5=C_fast_retrieve(lf[125]);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t4,lf[296],lf[297],lf[298],lf[299],C_retrieve2(lf[86],"link-options"));}

/* k2461 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2337 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:658: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[300],C_retrieve2(lf[34],"object-extension"));}

/* k2048 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:594: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_fcall f_2723(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2723,NULL,2,t0,t1);}
t2=C_i_assq(((C_word*)t0)[2],lf[358]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:745: g392 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[359]))){
/* csc.scm:746: t-options */
f_1738(((C_word*)t0)[4],C_a_i_list(&a,1,((C_word*)t0)[6]));}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],lf[360]))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:748: check */
f_1746(t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2773,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t4=C_block_size(((C_word*)t0)[6]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3118,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:753: substring */
t6=*((C_word*)lf[362]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[6],C_fix(0),C_fix(2));}
else{
t5=t3;
f_2773(t5,C_SCHEME_FALSE);}}}}}

/* k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_fcall f_2721(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2721,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[2];
if(C_truep((C_truep(C_eqp(t3,lf[386]))?C_SCHEME_TRUE:(C_truep(C_eqp(t3,lf[387]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=C_mutate(&lf[83] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[48],"best-compilation-optimization-options"));
t5=C_mutate(&lf[84] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[50],"best-linking-optimization-options"));
t6=t2;
f_2723(t6,t5);}
else{
t4=t2;
f_2723(t4,C_SCHEME_UNDEFINED);}}

/* f_2729 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2729,3,t0,t1,t2);}
t3=C_i_cadr(t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2431 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2803 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k1586 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_fcall f_1587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1587,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1590,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[69],"deployed"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1653,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:279: software-version */
t4=C_fast_retrieve(lf[229]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_1590(t3,C_SCHEME_END_OF_LIST);}}

/* k2441 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2360 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
if(C_truep(C_retrieve2(lf[3],"osx"))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:673: cons* */
t4=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[304],t3,C_retrieve2(lf[86],"link-options"));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:801: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1812(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k4395 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1072: g896 */
t2=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2790 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k3715 in map-loop632 in k3683 in compiler-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3716,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3691(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3691(t6,((C_word*)t0)[5],t5);}}

/* k2282 in k2279 in k2276 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_cdr(t2));
/* csc.scm:801: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1812(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2084 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[77] /* (set! translate-options ...) */,t1);
t3=lf[94] /* static */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1812(t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2279 in k2276 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
t2=C_mutate(&lf[96] /* (set! required-extensions ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:647: t-options */
f_1738(t3,C_a_i_list(&a,2,lf[291],t4));}

/* k2762 in k2756 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_2763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:801: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1812(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4284 in k4282 in k4280 in k4265 in k4263 in k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_4285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1038: display */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in ... */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1512,2,t0,t1);}
t2=C_mutate(&lf[51] /* (set! extra-features ...) */,t1);
t3=lf[52] /* scheme-files */ =C_SCHEME_END_OF_LIST;;
t4=lf[53] /* c-files */ =C_SCHEME_END_OF_LIST;;
t5=lf[54] /* rc-files */ =C_SCHEME_END_OF_LIST;;
t6=lf[55] /* generated-c-files */ =C_SCHEME_END_OF_LIST;;
t7=lf[56] /* generated-rc-files */ =C_SCHEME_END_OF_LIST;;
t8=lf[57] /* object-files */ =C_SCHEME_END_OF_LIST;;
t9=lf[58] /* generated-object-files */ =C_SCHEME_END_OF_LIST;;
t10=lf[59] /* cpp-mode */ =C_SCHEME_FALSE;;
t11=lf[60] /* objc-mode */ =C_SCHEME_FALSE;;
t12=lf[61] /* embedded */ =C_SCHEME_FALSE;;
t13=lf[62] /* inquiry-only */ =C_SCHEME_FALSE;;
t14=lf[63] /* show-cflags */ =C_SCHEME_FALSE;;
t15=lf[64] /* show-ldflags */ =C_SCHEME_FALSE;;
t16=lf[65] /* show-libs */ =C_SCHEME_FALSE;;
t17=lf[66] /* dry-run */ =C_SCHEME_FALSE;;
t18=lf[67] /* gui */ =C_SCHEME_FALSE;;
t19=lf[68] /* deploy */ =C_SCHEME_FALSE;;
t20=lf[69] /* deployed */ =C_SCHEME_FALSE;;
t21=lf[70] /* rpath */ =C_SCHEME_FALSE;;
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t23=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t23=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS),C_fix(0));}}

/* k4282 in k4280 in k4265 in k4263 in k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1038: display */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[130],((C_word*)t0)[3]);}

/* k4280 in k4265 in k4263 in k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1038: write */
t3=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k4286 in k4284 in k4282 in k4280 in k4265 in k4263 in k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_fcall f_2782(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2782,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(108),t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:758: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_retrieve2(lf[86],"link-options"),t4);}
else{
t3=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(76),t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:760: append */
t6=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,C_retrieve2(lf[86],"link-options"),t5);}
else{
t4=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(73),t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2818,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:762: append */
t7=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,C_retrieve2(lf[80],"compile-options"),t6);}
else{
t5=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(68),t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2833,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:764: substring */
t7=*((C_word*)lf[362]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[2],C_fix(2));}
else{
t6=C_subchar(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_i_char_equalp(C_make_character(70),t6))){
if(C_truep(C_retrieve2(lf[3],"osx"))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:767: append */
t9=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,C_retrieve2(lf[80],"compile-options"),t8);}
else{
/* csc.scm:801: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1812(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1]);}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:768: substring */
t10=*((C_word*)lf[362]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[2],C_fix(0),C_fix(4));}
else{
t9=t7;
f_2855(t9,C_SCHEME_FALSE);}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:777: file-exists? */
t3=C_fast_retrieve(lf[156]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2276 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_a_i_list1(&a,1,t3);
/* csc.scm:646: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,C_retrieve2(lf[96],"required-extensions"),t4);}

/* k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[43],"windows-shell"))){
/* csc.scm:1034: string-append */
t3=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[134],((C_word*)t0)[3],lf[135]);}
else{
t3=t2;
f_4264(2,t3,((C_word*)t0)[3]);}}

/* k4263 in k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4266,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[66],"dry-run"))){
t3=t2;
f_4266(2,t3,C_fix(0));}
else{
/* csc.scm:1036: system */
t3=C_fast_retrieve(lf[133]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* k4265 in k4263 in k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_4266(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4268,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=t1;
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t2;
f_4268(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=*((C_word*)lf[129]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4281,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1038: display */
t7=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,lf[132],*((C_word*)lf[129]+1));}}

/* k4267 in k4265 in k4263 in k4261 in command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=((C_word*)t0)[2];
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=lf[128] /* last-exit-code */ =C_fix(0);;
t5=C_retrieve2(lf[128],"last-exit-code");
if(C_truep(C_i_zerop(C_retrieve2(lf[128],"last-exit-code")))){
t6=C_SCHEME_UNDEFINED;
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* csc.scm:1045: exit */
t6=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,((C_word*)t0)[3],C_retrieve2(lf[128],"last-exit-code"));}}
else{
t4=lf[128] /* last-exit-code */ =C_fix(1);;
t5=C_retrieve2(lf[128],"last-exit-code");
if(C_truep(C_i_zerop(C_retrieve2(lf[128],"last-exit-code")))){
t6=C_SCHEME_UNDEFINED;
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* csc.scm:1045: exit */
t6=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,((C_word*)t0)[3],C_retrieve2(lf[128],"last-exit-code"));}}}

/* k4356 in k4344 in k4342 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in ... */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4349 in k4346 in k4344 in k4342 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in ... */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1054: command */
f_4302(((C_word*)t0)[2],t1);}

/* k4353 in k4344 in k4342 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in ... */
static void C_ccall f_4354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1055: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_4251 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4251,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_char_equalp(C_make_character(34),t2));}

/* f_4389 in k4383 in k4380 in k4376 in k4373 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in ... */
static void C_ccall f_4389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4389,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4396,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[151],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[152],t4);
/* csc.scm:1059: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[153]))(3,*((C_word*)lf[153]+1),t2,t5);}

/* k4383 in k4380 in k4376 in k4373 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in ... */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1071: with-output-to-file */
t3=C_fast_retrieve(lf[154]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k4380 in k4376 in k4373 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in ... */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4382,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3744(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1070: print */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[155],((C_word*)t0)[6]);}
else{
t3=t2;
f_4384(2,t3,C_SCHEME_UNDEFINED);}}}

/* f_4240 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4240,3,t0,t1,t2);}
t3=C_u_i_char_whitespacep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_i_memq(t2,lf[117])));}

/* k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_1843(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1843,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_retrieve2(lf[24],"quotewrap");
t8=C_retrieve2(lf[57],"object-files");
t9=C_i_check_list_2(C_retrieve2(lf[57],"object-files"),lf[99]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3734,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3969,a[2]=t6,a[3]=t12,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_3969(t14,t10,C_retrieve2(lf[57],"object-files"));}

/* k3004 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[53] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2625 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_fcall f_2773(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2773,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm:754: t-options */
f_1738(((C_word*)t0)[3],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_block_size(((C_word*)t0)[4]);
if(C_truep(C_fixnum_greaterp(t3,C_fix(1)))){
t4=C_subchar(((C_word*)t0)[4],C_fix(0));
t5=t2;
f_2782(t5,C_i_char_equalp(C_make_character(45),t4));}
else{
t4=t2;
f_2782(t4,C_SCHEME_FALSE);}}}

/* k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[68],"deploy"))){
t3=C_retrieve2(lf[93],"shared");
t4=t2;
f_1833(t4,(C_truep(C_retrieve2(lf[93],"shared"))?C_SCHEME_UNDEFINED:f_1794(C_a_i(&a,6))));}
else{
t3=t2;
f_1833(t3,C_SCHEME_UNDEFINED);}}

/* k3017 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[54] /* (set! rc-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_fcall f_1833(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1833,NULL,2,t0,t1);}
if(C_truep(C_retrieve2(lf[90],"translate-only"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3469,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_retrieve2(lf[53],"c-files");
t7=C_i_check_list_2(C_retrieve2(lf[53],"c-files"),lf[150]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3518,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3657,a[2]=t10,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_3657(t12,t8,C_retrieve2(lf[53],"c-files"));}}

/* k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1838,2,t0,t1);}
if(C_truep(C_retrieve2(lf[91],"compile-only"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(C_retrieve2(lf[87],"target-filename"),C_retrieve2(lf[52],"scheme-files")))){
t3=*((C_word*)lf[129]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1851,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: display */
t5=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[192],*((C_word*)lf[129]+1));}
else{
t3=t2;
f_1843(2,t3,C_SCHEME_UNDEFINED);}}}

/* k2637 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:724: string-split */
t5=C_fast_retrieve(lf[223]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1061: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[161]);}

/* k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in ... */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4370,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1062: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[160]);}

/* k4359 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_4360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1055: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

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
if(!C_demand_2(2822)){
C_save(t1);
C_rereclaim2(2822*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,420);
lf[0]=C_h_intern(&lf[0],7,"mingw32");
lf[2]=C_h_intern(&lf[2],6,"macosx");
lf[5]=C_h_intern(&lf[5],6,"netbsd");
lf[7]=C_h_intern(&lf[7],6,"cygwin");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005linux\376\003\000\000\002\376\001\000\000\006netbsd\376\003\000\000\002\376\001\000\000\007freebsd\376\003\000\000\002\376\001\000\000\007solaris\376\003\000\000\002\376\001\000\000\007openb"
"sd\376\377\016");
lf[12]=C_h_intern(&lf[12],18,"\003sysstandard-error");
lf[13]=C_h_intern(&lf[13],4,"exit");
lf[14]=C_h_intern(&lf[14],19,"\003syswrite-char/port");
lf[15]=C_h_intern(&lf[15],7,"fprintf");
lf[16]=C_h_intern(&lf[16],7,"display");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[18]=C_h_intern(&lf[18],17,"\003syspeek-c-string");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[25]=C_h_intern(&lf[25],2,"qs");
lf[26]=C_h_intern(&lf[26],18,"normalize-pathname");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[41]=C_h_intern(&lf[41],26,"\003sysload-dynamic-extension");
lf[78]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014/usr/include\376\003\000\000\002\376B\000\000\000\376\377\016");
lf[99]=C_h_intern(&lf[99],3,"map");
lf[100]=C_h_intern(&lf[100],18,"string-intersperse");
lf[101]=C_h_intern(&lf[101],6,"append");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[104]=C_h_intern(&lf[104],13,"make-pathname");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[108]=C_h_intern(&lf[108],17,"get-output-string");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\007copy /Y");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\002cp");
lf[111]=C_h_intern(&lf[111],18,"open-output-string");
lf[113]=C_h_intern(&lf[113],17,"\003sysstring-append");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\010 -static");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[118]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000#\376\377\016");
lf[119]=C_h_intern(&lf[119],13,"string-append");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[122]=C_h_intern(&lf[122],17,"string-translate\052");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\001\042\376B\000\000\002\134\042\376\377\016");
lf[124]=C_h_intern(&lf[124],16,"\003syslist->string");
lf[125]=C_h_intern(&lf[125],5,"cons\052");
lf[126]=C_h_intern(&lf[126],16,"\003sysstring->list");
lf[127]=C_h_intern(&lf[127],10,"string-any");
lf[129]=C_h_intern(&lf[129],19,"\003sysstandard-output");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[131]=C_h_intern(&lf[131],5,"write");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000;\012Error: shell command terminated with non-zero exit status ");
lf[133]=C_h_intern(&lf[133],6,"system");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[136]=C_h_intern(&lf[136],5,"print");
lf[138]=C_h_intern(&lf[138],11,"delete-file");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\003rm ");
lf[140]=C_h_intern(&lf[140],25,"\003sysimplicit-exit-handler");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000#not enough arguments to option `~A\047");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\013-dynamiclib");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\007-bundle");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\007-shared");
lf[145]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-DC_SHARED\376\377\016");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-shared");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\026-DC_PRIVATE_REPOSITORY");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\031-framework CoreFoundation");
lf[150]=C_h_intern(&lf[150],8,"for-each");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\032</string>\012</dict>\012</plist>");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\001\262<\077xml version=\0421.0\042 encoding=\042UTF-8\042\077>\012<!DOCTYPE plist SYSTEM \042file://local"
"host/System/Library/DTDs/PropertyList.dtd\042>\012<plist version=\0420.9\042>\012<dict>\012\011<key>C"
"FBundlePackageType</key>\012\011<string>APPL</string>\012\011<key>CFBundleIconFile</key>\012\011<s"
"tring>CHICKEN.icns</string>\012        <key>CFBundleGetInfoString</key>\012\011<string>Cr"
"eated by CHICKEN</string>\012\011<key>CFBundleSignature</key>\012\011<string>\077\077\077\077</string>\012\011"
"<key>CFBundleExecutable</key>\012\011<string>");
lf[153]=C_h_intern(&lf[153],19,"\003sysprint-to-string");
lf[154]=C_h_intern(&lf[154],19,"with-output-to-file");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[156]=C_h_intern(&lf[156],12,"file-exists\077");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\012Info.plist");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\024chicken/CHICKEN.icns");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\014CHICKEN.icns");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\010Contents");
lf[163]=C_h_intern(&lf[163],13,"pathname-file");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\005dylib");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\003dll");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\003so.");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\005mac.r");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000 /Developer/Tools/Rez -t APPL -o ");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\032install_name_tool -change ");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\007.dylib ");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\020@executable_path");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\006.dylib");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[177]=C_h_intern(&lf[177],16,"create-directory");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\006mkdir ");
lf[179]=C_h_intern(&lf[179],17,"directory-exists\077");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\017Contents/MacOS/");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\022Contents/Resources");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\016Contents/MacOS");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\011mkdir -p ");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\003app");
lf[186]=C_h_intern(&lf[186],24,"pathname-strip-extension");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\004.old");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\004move");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\002mv");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\005.old\047");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\030\047 - renaming source to `");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\0001Warning: output file will overwrite source file `");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\003g++");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\022-Wno-write-strings");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\003-o ");
lf[198]=C_h_intern(&lf[198],26,"pathname-replace-extension");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[200]=C_h_intern(&lf[200],7,"reverse");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\001\232\042\042 type=\042\042win32\042\042/>\134r\134n\042\012  \042  <ms_asmv2:trustInfo xmlns:ms_asmv2=\042\042urn:sche"
"mas-microsoft-com:asm.v2\042\042>\134r\134n\042\012  \042    <ms_asmv2:security>\134r\134n\042\012  \042      <ms_as"
"mv2:requestedPrivileges>\134r\134n\042\012  \042        <ms_asmv2:requestedExecutionLevel level"
"=\042\042asInvoker\042\042 uiAccess=\042\042false\042\042/>\134r\134n\042\012  \042      </ms_asmv2:requestedPrivileges"
">\134r\134n\042\012  \042    </ms_asmv2:security>\134r\134n\042\012  \042  </ms_asmv2:trustInfo>\134r\134n\042\012  \042</ass"
"embly>\134r\134n\042\012END");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\001\0031 24 MOVEABLE PURE\012BEGIN\012  \042<\077xml version=\042\0421.0\042\042 encoding=\042\042UTF-8\042\042 standa"
"lone=\042\042yes\042\042\077>\134r\134n\042\012  \042<assembly xmlns=\042\042urn:schemas-microsoft-com:asm.v1\042\042 mani"
"festVersion=\042\0421.0\042\042>\134r\134n\042\012  \042  <assemblyIdentity version=\042\0421.0.0.0\042\042 processorAr"
"chitecture=\042\042\052\042\042 name=\042\042");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\013generating ");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[205]=C_h_intern(&lf[205],7,"windows");
lf[206]=C_h_intern(&lf[206],13,"software-type");
lf[207]=C_h_intern(&lf[207],4,"last");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\031no source files specified");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[210]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-:d\376\377\016");
lf[211]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\025chicken-scheme-to-c++\376\377\016");
lf[212]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\010-feature\376\003\000\000\002\376B\000\000\026chicken-scheme-to-objc\376\377\016");
lf[213]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012-to-stdout\376\377\016");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\014-output-file");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\010-dynamic");
lf[219]=C_h_intern(&lf[219],7,"newline");
lf[220]=C_h_intern(&lf[220],6,"print\052");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[223]=C_h_intern(&lf[223],12,"string-split");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\002:;");
lf[225]=C_h_intern(&lf[225],24,"get-environment-variable");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_C_LIBRARY_PATH");
lf[227]=C_h_intern(&lf[227],7,"freebsd");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\011-z origin");
lf[229]=C_h_intern(&lf[229],16,"software-version");
lf[230]=C_h_intern(&lf[230],4,"conc");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\010 -Wl,-R\042");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\010\134$ORIGIN");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\003-L\042");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[240]=C_h_intern(&lf[240],5,"-help");
lf[241]=C_h_intern(&lf[241],6,"--help");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\003\047.\012");
lf[243]=C_decode_literal(C_heaptop,"\376B\000(\326\047 is a driver program for the CHICKEN compiler. Files given on the\012  comman"
"d line are translated, compiled or linked as needed.\012\012  FILENAME is a Scheme sou"
"rce file name with optional extension or a\012  C/C++/Objective-C source, object or"
" library file name with extension. OPTION\012  may be one of the following:\012\012  Gene"
"ral options:\012\012    -h  -help                      display this text and exit\012    "
"-v  -verbose                   show compiler notes and tool-invocations\012    -vv "
"                           display information about translation\012               "
"                     progress\012    -vvv                           display informa"
"tion about all compilation\012                                    stages\012    -versi"
"on                       display Scheme compiler version and exit\012    -release  "
"                     display release number and exit\012\012  File and pathname option"
"s:\012\012    -o -output-file FILENAME       specifies target executable name\012    -I -"
"include-path PATHNAME      specifies alternative path for included\012             "
"                       files\012    -to-stdout                     write compiler t"
"o stdout (implies -t)\012    -s -shared -dynamic            generate dynamically lo"
"adable shared object\012                                    file\012\012  Language option"
"s:\012\012    -D  -DSYMBOL  -feature SYMBOL  register feature identifier\012    -no-featu"
"re SYMBOL             disable builtin feature identifier\012    -c++               "
"            compile via a C++ source file (.cpp) \012    -objc                     "
"     compile via Objective-C source file (.m)\012\012  Syntax related options:\012\012    -i"
" -case-insensitive           don\047t preserve case of read symbols    \012    -K -key"
"word-style STYLE        enable alternative keyword-syntax\012                      "
"              (prefix, suffix or none)\012       -no-parentheses-synonyms    disabl"
"es list delimiter synonyms\012       -no-symbol-escape           disables support f"
"or escaped symbols\012       -r5rs-syntax                disables the Chicken exten"
"sions to\012                                    R5RS syntax\012    -compile-syntax    "
"            macros are made available at run-time\012    -j -emit-import-library MO"
"DULE write compile-time module information into\012                                "
"    separate file\012    -J -emit-all-import-libraries  emit import-libraries for a"
"ll defined modules\012    -no-module-registration        do not generate module reg"
"istration code\012    -no-compiler-syntax            disable expansion of compiler-"
"macros\012    -M -module                     wrap compiled code into implicit modul"
"e\012\012  Translation options:\012\012    -x  -explicit-use              do not use units `"
"library\047 and `eval\047 by\012                                    default\012    -P  -chec"
"k-syntax              stop compilation after macro-expansion\012    -A  -analyze-on"
"ly              stop compilation after first analysis pass\012\012  Debugging options:"
"\012\012    -w  -no-warnings               disable warnings\012    -d0 -d1 -d2 -debug-lev"
"el NUMBER\012                                   set level of available debugging in"
"formation\012    -no-trace                      disable rudimentary debugging infor"
"mation\012    -profile                       executable emits profiling information"
" \012    -accumulate-profile            executable emits profiling information in\012 "
"                                   append mode\012    -profile-name FILENAME       "
"  name of the generated profile information\012                                    "
"file\012    -S  -scrutinize                perform local flow analysis\012    -types F"
"ILENAME                load additional type database\012\012  Optimization options:\012\012 "
"   -O -O0 -O1 -O2 -O3 -O4 -O5 -optimize-level NUMBER\012                           "
"        enable certain sets of optimization options\012    -optimize-leaf-routines "
"       enable leaf routine optimization\012    -no-usual-integrations         stand"
"ard procedures may be redefined\012    -u  -unsafe                    disable safet"
"y checks\012    -local                         assume globals are only modified in "
"current\012                                    file\012    -b  -block                 "
"    enable block-compilation\012    -disable-interrupts            disable interrup"
"ts in compiled code\012    -f  -fixnum-arithmetic         assume all numbers are fi"
"xnums\012    -disable-stack-overflow-checks disables detection of stack-overflows\012 "
"   -inline                        enable inlining\012    -inline-limit LIMIT       "
"     set inlining threshold\012    -inline-global                 enable cross-modu"
"le inlining\012    -specialize                    perform type-based specialization"
" of primitive calls\012    -n -emit-inline-file FILENAME  generate file with global"
"ly inlinable\012                                    procedures (implies -inline -lo"
"cal)\012    -consult-inline-file FILENAME  explicitly load inline file\012    -emit-ty"
"pe-file FILENAME       write type-declaration information into file\012    -no-argc"
"-checks                disable argument count checks\012    -no-bound-checks       "
"        disable bound variable checks\012    -no-procedure-checks           disable"
" procedure call checks\012    -no-procedure-checks-for-usual-bindings\012             "
"                      disable procedure call checks only for usual\012             "
"                       bindings\012    -no-procedure-checks-for-toplevel-bindings\012 "
"                                  disable procedure call checks for toplevel\012   "
"                                 bindings\012    -strict-types                  ass"
"ume variable do not change their type\012    -clustering                    combine"
" groups of local procedures into dispatch\012                                     l"
"oop\012\012  Configuration options:\012\012    -unit NAME                     compile file a"
"s a library unit\012    -uses NAME                     declare library unit as used"
".\012    -heap-size NUMBER              specifies heap-size of compiled executable\012"
"    -nursery NUMBER  -stack-size NUMBER\012                                   speci"
"fies nursery size of compiled\012                                   executable\012    "
"-X -extend FILENAME            load file before compilation commences\012    -prelu"
"de EXPRESSION            add expression to beginning of source file\012    -postlud"
"e EXPRESSION           add expression to end of source file\012    -prologue FILENA"
"ME             include file before main source file\012    -epilogue FILENAME      "
"       include file after main source file\012\012    -e  -embedded                  c"
"ompile as embedded\012                                    (don\047t generate `main()\047)"
"\012    -gui                           compile as GUI application\012    -R  -require-"
"extension NAME    require extension and import in compiled\012                     "
"               code\012    -dll -library                  compile multiple units in"
"to a dynamic\012                                    library\012    -deploy            "
"            deploy self-contained application bundle\012\012  Options to other passes:"
"\012\012    -C OPTION                      pass option to C compiler\012    -L OPTION    "
"                  pass option to linker\012    -I<DIR>                        pass "
"\134\042-I<DIR>\134\042 to C compiler\012                                    (add include path)"
"\012    -L<DIR>                        pass \134\042-L<DIR>\134\042 to linker\012                 "
"                   (add library path)\012    -k                             keep in"
"termediate files\012    -c                             stop after compilation to ob"
"ject files\012    -t                             stop after translation to C\012    -c"
"c COMPILER                   select other C compiler than the default\012    -cxx C"
"OMPILER                  select other C++ compiler than the default\012    -ld COMP"
"ILER                   select other linker than the default \012    -lLIBNAME      "
"                link with given library\012                                    (`li"
"bLIBNAME\047 on UNIX,\012                                     `LIBNAME.lib\047 on Windows"
")\012    -static-libs                   link with static CHICKEN libraries\012    -sta"
"tic                        generate completely statically linked\012               "
"                     executable\012    -F<DIR>                        pass \134\042-F<DIR"
">\134\042 to C compiler\012                                    (add framework header path"
" on Mac OS X)\012    -framework NAME                passed to linker on Mac OS X\012  "
"  -rpath PATHNAME                add directory to runtime library search path\012  "
"  -Wl,...                        pass linker options\012    -strip                 "
"        strip resulting binary\012\012  Inquiry options:\012\012    -home                   "
"       show home-directory (where support files go)\012    -cflags                 "
"       show required C-compiler flags and exit\012    -ldflags                     "
"  show required linker flags and exit\012    -libs                          show re"
"quired libraries and exit\012    -cc-name                       show name of defaul"
"t C compiler used\012    -cxx-name                      show name of default C++ co"
"mpiler used\012    -ld-name                       show name of default linker used\012"
"    -dry-run                       just show commands executed, don\047t run them\012 "
"                                   (implies `-v\047)\012\012  Obscure options:\012\012    -debu"
"g MODES                   display debugging output for the given modes\012    -comp"
"iler PATHNAME             use other compiler than default `chicken\047\012    -raw    "
"                       do not generate implicit init- and exit code\012    -emit-ex"
"ternal-prototypes-first\012                                   emit prototypes for c"
"allbacks before foreign\012                                    declarations\012    -ig"
"nore-repository             do not refer to repository for extensions\012    -keep-"
"shadowed-macros          do not remove shadowed macro\012    -host                 "
"         compile for host when configured for\012                                  "
"  cross-compiling\012    -private-repository            load extensions from execut"
"able path\012    -deployed                      link support file to be used from a"
" deployed \012                                    executable (sets `rpath\047 accordin"
"gly, if supported\012                                    on this platform)\012    -no-"
"elevation                  embed manifest on Windows to supress elevation\012      "
"                              warnings for programs named `install\047 or `setup\047\012\012"
"  Options can be collapsed if unambiguous, so\012\012    -vkfO\012\012  is the same as\012\012    "
"-v -k -fixnum-arithmetic -optimize\012\012  The contents of the environment variable C"
"SC_OPTIONS are implicitly passed to\012  every invocation of `");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\033 FILENAME | OPTION ...\012\012  `");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\007Usage: ");
lf[246]=C_h_intern(&lf[246],8,"-release");
lf[247]=C_h_intern(&lf[247],15,"chicken-version");
lf[248]=C_h_intern(&lf[248],8,"-version");
lf[249]=C_h_intern(&lf[249],7,"sprintf");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\011 -version");
lf[251]=C_h_intern(&lf[251],4,"-c++");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[253]=C_h_intern(&lf[253],5,"-objc");
lf[254]=C_h_intern(&lf[254],7,"-static");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[257]=C_h_intern(&lf[257],12,"-static-libs");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\026chicken-compile-static");
lf[260]=C_h_intern(&lf[260],7,"-cflags");
lf[261]=C_h_intern(&lf[261],8,"-ldflags");
lf[262]=C_h_intern(&lf[262],8,"-cc-name");
lf[263]=C_h_intern(&lf[263],9,"-cxx-name");
lf[264]=C_h_intern(&lf[264],8,"-ld-name");
lf[265]=C_h_intern(&lf[265],5,"-home");
lf[266]=C_h_intern(&lf[266],5,"-libs");
lf[267]=C_h_intern(&lf[267],2,"-v");
lf[268]=C_h_intern(&lf[268],8,"-verbose");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\010-verbose");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\002-v");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\002-Q");
lf[273]=C_h_intern(&lf[273],2,"-w");
lf[274]=C_h_intern(&lf[274],12,"-no-warnings");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\002-w");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\014-no-warnings");
lf[277]=C_h_intern(&lf[277],2,"-A");
lf[278]=C_h_intern(&lf[278],13,"-analyze-only");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\015-analyze-only");
lf[280]=C_h_intern(&lf[280],2,"-P");
lf[281]=C_h_intern(&lf[281],13,"-check-syntax");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\015-check-syntax");
lf[283]=C_h_intern(&lf[283],2,"-k");
lf[284]=C_h_intern(&lf[284],2,"-c");
lf[285]=C_h_intern(&lf[285],2,"-t");
lf[286]=C_h_intern(&lf[286],2,"-e");
lf[287]=C_h_intern(&lf[287],9,"-embedded");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\014-DC_EMBEDDED");
lf[289]=C_h_intern(&lf[289],18,"-require-extension");
lf[290]=C_h_intern(&lf[290],2,"-R");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\022-require-extension");
lf[292]=C_h_intern(&lf[292],19,"-private-repository");
lf[293]=C_h_intern(&lf[293],13,"-no-elevation");
lf[294]=C_h_intern(&lf[294],4,"-gui");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\007-DC_GUI");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\012-lkernel32");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\010-luser32");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\007-lgdi32");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\011-mwindows");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\012chicken.rc");
lf[301]=C_h_intern(&lf[301],7,"-deploy");
lf[302]=C_h_intern(&lf[302],9,"-deployed");
lf[303]=C_h_intern(&lf[303],10,"-framework");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\012-framework");
lf[305]=C_h_intern(&lf[305],2,"-o");
lf[306]=C_h_intern(&lf[306],12,"-output-file");
lf[307]=C_h_intern(&lf[307],2,"-O");
lf[308]=C_h_intern(&lf[308],3,"-O1");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[311]=C_h_intern(&lf[311],3,"-O0");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[314]=C_h_intern(&lf[314],3,"-O2");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[317]=C_h_intern(&lf[317],3,"-O3");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\0013");
lf[320]=C_h_intern(&lf[320],3,"-O4");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\0014");
lf[323]=C_h_intern(&lf[323],3,"-O5");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\017-optimize-level");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\0015");
lf[326]=C_h_intern(&lf[326],3,"-d0");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[329]=C_h_intern(&lf[329],3,"-d1");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\0011");
lf[332]=C_h_intern(&lf[332],3,"-d2");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\014-debug-level");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\0012");
lf[335]=C_h_intern(&lf[335],8,"-dry-run");
lf[336]=C_h_intern(&lf[336],2,"-s");
lf[337]=C_h_intern(&lf[337],4,"-dll");
lf[338]=C_h_intern(&lf[338],8,"-library");
lf[339]=C_h_intern(&lf[339],9,"-compiler");
lf[340]=C_h_intern(&lf[340],3,"-cc");
lf[341]=C_h_intern(&lf[341],4,"-cxx");
lf[342]=C_h_intern(&lf[342],3,"-ld");
lf[343]=C_h_intern(&lf[343],2,"-I");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\015-include-path");
lf[345]=C_h_intern(&lf[345],2,"-C");
lf[346]=C_h_intern(&lf[346],6,"-strip");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[348]=C_h_intern(&lf[348],2,"-L");
lf[349]=C_h_intern(&lf[349],6,"-rpath");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000\006-Wl,-R");
lf[351]=C_h_intern(&lf[351],3,"gnu");
lf[352]=C_h_intern(&lf[352],5,"clang");
lf[353]=C_h_intern(&lf[353],14,"build-platform");
lf[354]=C_h_intern(&lf[354],5,"-host");
lf[355]=C_h_intern(&lf[355],1,"-");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[357]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\001-\376\377\016");
lf[358]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-h\376\003\000\000\002\376B\000\000\005-help\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-s\376\003\000\000\002\376B\000\000\007-shared\376\377\016\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\002-S\376\003\000\000\002\376B\000\000\013-scrutinize\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-M\376\003\000\000\002\376B\000\000\007-module\376\377\016\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\002-P\376\003\000\000\002\376B\000\000\015-check-syntax\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-V\376\003\000\000\002\376B\000\000\010-version\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\002-f\376\003\000\000\002\376B\000\000\022-fixnum-arithmetic\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-D\376\003\000\000\002\376B\000\000\010-feature\376\377\016\376\003\000"
"\000\002\376\003\000\000\002\376\001\000\000\002-i\376\003\000\000\002\376B\000\000\021-case-insensitive\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-K\376\003\000\000\002\376B\000\000\016-keyword-"
"style\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-X\376\003\000\000\002\376B\000\000\007-extend\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-J\376\003\000\000\002\376B\000\000\032-emit-al"
"l-import-libraries\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-x\376\003\000\000\002\376B\000\000\015-explicit-use\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-"
"u\376\003\000\000\002\376B\000\000\007-unsafe\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-j\376\003\000\000\002\376B\000\000\024-emit-import-library\376\377\016\376\003\000\000\002\376\003\000\000"
"\002\376\001\000\000\002-n\376\003\000\000\002\376B\000\000\021-emit-inline-file\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002-b\376\003\000\000\002\376B\000\000\006-block\376\377\016\376\377\016");
lf[359]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\015-explicit-use\376\003\000\000\002\376\001\000\000\011-no-trace\376\003\000\000\002\376\001\000\000\014-no-warnings\376\003\000\000\002\376\001\000\000\026-no-us"
"ual-integrations\376\003\000\000\002\376\001\000\000\027-optimize-leaf-routines\376\003\000\000\002\376\001\000\000\007-unsafe\376\003\000\000\002\376\001\000\000\006-blo"
"ck\376\003\000\000\002\376\001\000\000\023-disable-interrupts\376\003\000\000\002\376\001\000\000\022-fixnum-arithmetic\376\003\000\000\002\376\001\000\000\012-to-stdout\376"
"\003\000\000\002\376\001\000\000\010-profile\376\003\000\000\002\376\001\000\000\004-raw\376\003\000\000\002\376\001\000\000\023-accumulate-profile\376\003\000\000\002\376\001\000\000\015-check-syn"
"tax\376\003\000\000\002\376\001\000\000\021-case-insensitive\376\003\000\000\002\376\001\000\000\007-shared\376\003\000\000\002\376\001\000\000\017-compile-syntax\376\003\000\000\002\376\001\000"
"\000\017-no-lambda-info\376\003\000\000\002\376\001\000\000\010-dynamic\376\003\000\000\002\376\001\000\000\036-disable-stack-overflow-checks\376\003\000\000\002"
"\376\001\000\000\006-local\376\003\000\000\002\376\001\000\000\037-emit-external-prototypes-first\376\003\000\000\002\376\001\000\000\007-inline\376\003\000\000\002\376\001\000\000\010-"
"release\376\003\000\000\002\376\001\000\000\013-scrutinize\376\003\000\000\002\376\001\000\000\015-analyze-only\376\003\000\000\002\376\001\000\000\025-keep-shadowed-macr"
"os\376\003\000\000\002\376\001\000\000\016-inline-global\376\003\000\000\002\376\001\000\000\022-ignore-repository\376\003\000\000\002\376\001\000\000\021-no-symbol-escap"
"e\376\003\000\000\002\376\001\000\000\030-no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\014-r5rs-syntax\376\003\000\000\002\376\001\000\000\017-no-argc-chec"
"ks\376\003\000\000\002\376\001\000\000\020-no-bound-checks\376\003\000\000\002\376\001\000\000\024-no-procedure-checks\376\003\000\000\002\376\001\000\000\023-no-compiler"
"-syntax\376\003\000\000\002\376\001\000\000\032-emit-all-import-libraries\376\003\000\000\002\376\001\000\000\013-setup-mode\376\003\000\000\002\376\001\000\000\015-no-el"
"evation\376\003\000\000\002\376\001\000\000\027-no-module-registration\376\003\000\000\002\376\001\000\000\047-no-procedure-checks-for-usual"
"-bindings\376\003\000\000\002\376\001\000\000\007-module\376\003\000\000\002\376\001\000\000\013-specialize\376\003\000\000\002\376\001\000\000\015-strict-types\376\003\000\000\002\376\001\000\000\013"
"-clustering\376\003\000\000\002\376\001\000\000\014-lambda-lift\376\003\000\000\002\376\001\000\000\011-unboxing\376\003\000\000\002\376\001\000\000\052-no-procedure-chec"
"ks-for-toplevel-bindings\376\377\016");
lf[360]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006-debug\376\003\000\000\002\376\001\000\000\012-heap-size\376\003\000\000\002\376\001\000\000\010-nursery\376\003\000\000\002\376\001\000\000\013-stack-size\376\003\000\000\002"
"\376\001\000\000\011-compiler\376\003\000\000\002\376\001\000\000\005-unit\376\003\000\000\002\376\001\000\000\005-uses\376\003\000\000\002\376\001\000\000\016-keyword-style\376\003\000\000\002\376\001\000\000\017-o"
"ptimize-level\376\003\000\000\002\376\001\000\000\015-include-path\376\003\000\000\002\376\001\000\000\016-database-size\376\003\000\000\002\376\001\000\000\007-extend\376\003\000"
"\000\002\376\001\000\000\010-prelude\376\003\000\000\002\376\001\000\000\011-postlude\376\003\000\000\002\376\001\000\000\011-prologue\376\003\000\000\002\376\001\000\000\011-epilogue\376\003\000\000\002\376\001\000"
"\000\015-inline-limit\376\003\000\000\002\376\001\000\000\015-profile-name\376\003\000\000\002\376\001\000\000\021-emit-inline-file\376\003\000\000\002\376\001\000\000\006-type"
"s\376\003\000\000\002\376\001\000\000\017-emit-type-file\376\003\000\000\002\376\001\000\000\010-feature\376\003\000\000\002\376\001\000\000\014-debug-level\376\003\000\000\002\376\001\000\000\014-hea"
"p-growth\376\003\000\000\002\376\001\000\000\017-heap-shrinkage\376\003\000\000\002\376\001\000\000\022-heap-initial-size\376\003\000\000\002\376\001\000\000\024-consult-"
"inline-file\376\003\000\000\002\376\001\000\000\024-emit-import-library\376\003\000\000\002\376\001\000\000\013-no-feature\376\377\016");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[362]=C_h_intern(&lf[362],9,"substring");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[365]=C_h_intern(&lf[365],15,"lset-difference");
lf[366]=C_h_intern(&lf[366],6,"char=\077");
lf[367]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000P\376\003\000\000\002\376\377\012\000\000H\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000E\376\003\000"
"\000\002\376\377\012\000\000N\376\003\000\000\002\376\377\012\000\000x\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000b\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000w\376\003\000\000\002\376\377\012\000\000A\376\003\000\000\002\376"
"\377\012\000\000O\376\003\000\000\002\376\377\012\000\000e\376\003\000\000\002\376\377\012\000\000W\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000c\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000g\376\003\000\000\002\376\377\012\000"
"\000S\376\003\000\000\002\376\377\012\000\000J\376\003\000\000\002\376\377\012\000\000M\376\377\016");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\023invalid option `~A\047");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\004-Wl,");
lf[370]=C_h_intern(&lf[370],18,"decompose-pathname");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\001h");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\002rc");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\003cpp");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\001C");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\002cc");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\003cxx");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\003hpp");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\017-no-cpp-precomp");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\001m");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\001M");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\002mm");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\030file `~A\047 does not exist");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\004.scm");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\002-:");
lf[386]=C_h_intern(&lf[386],15,"-optimize-level");
lf[387]=C_h_intern(&lf[387],15,"-benchmark-mode");
lf[388]=C_h_intern(&lf[388],10,"-to-stdout");
lf[389]=C_h_intern(&lf[389],7,"-shared");
lf[390]=C_h_intern(&lf[390],8,"-dynamic");
lf[391]=C_h_intern(&lf[391],14,"string->symbol");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\013CSC_OPTIONS");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\003-I\042");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\002:;");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\026CHICKEN_C_INCLUDE_PATH");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\003-I\042");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\007include");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\003cyg");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\002-0");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\003lib");
lf[412]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[413]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005-fPIC\376\003\000\000\002\376B\000\000\005-DPIC\376\377\016");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\005share");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[418]=C_h_intern(&lf[418],22,"command-line-arguments");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
C_register_lf2(lf,420,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1354,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1823,2,t0,t1);}
t2=C_mutate(&lf[80] /* (set! compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2006,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1587,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[9],"elf"))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1659,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:268: conc */
t7=C_fast_retrieve(lf[230]);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[236],C_retrieve2(lf[85],"library-dir"),lf[237]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1689,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:278: conc */
t7=C_fast_retrieve(lf[230]);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[238],C_retrieve2(lf[85],"library-dir"),lf[239]);}}

/* k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1827,2,t0,t1);}
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[62],"inquiry-only"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[63],"show-cflags"))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2003,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:542: compiler-options */
f_3677(t5);}
else{
t5=t4;
f_1976(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1829(2,t4,C_SCHEME_UNDEFINED);}}

/* k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[52],"scheme-files")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[53],"c-files")))){
if(C_truep(C_i_nullp(C_retrieve2(lf[57],"object-files")))){
/* csc.scm:550: quit */
f_1394(t3,lf[208],C_SCHEME_END_OF_LIST);}
else{
t4=t3;
f_1908(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1908(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[93],"shared"))?C_i_not(C_retrieve2(lf[61],"embedded")):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,lf[218],C_retrieve2(lf[77],"translate-options"));
t6=C_mutate(&lf[77] /* (set! translate-options ...) */,t5);
t7=t3;
f_1943(t7,t6);}
else{
t5=t3;
f_1943(t5,C_SCHEME_UNDEFINED);}}}

/* k3942 in k3939 in k3937 in k3935 in k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:901: command */
f_4302(((C_word*)t0)[2],t1);}

/* k3946 in k3937 in k3935 in k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_3947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:901: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3939 in k3937 in k3935 in k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3944,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:901: get-output-string */
t3=C_fast_retrieve(lf[108]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k2682 in k2671 in k2659 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2683,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* csc.scm:731: append */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],C_retrieve2(lf[86],"link-options"),t2);}

/* k2685 in k2659 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_truep(C_eqp(t1,lf[351]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[352]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t2=C_retrieve2(lf[1],"mingw");
t3=((C_word*)t0)[2];
f_2673(t3,(C_truep(C_retrieve2(lf[1],"mingw"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[3],"osx"))));}
else{
t2=((C_word*)t0)[2];
f_2673(t2,C_SCHEME_FALSE);}}

/* k2710 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2712,2,t0,t1);}
t2=C_mutate(&lf[52] /* (set! scheme-files ...) */,t1);
if(C_truep(C_retrieve2(lf[87],"target-filename"))){
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:737: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_SCHEME_FALSE,lf[356],C_retrieve2(lf[38],"executable-extension"));}}

/* $delete-file in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4317,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4321,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1049: print */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[139],t2);}
else{
if(C_truep(C_retrieve2(lf[66],"dry-run"))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* csc.scm:1050: delete-file */
t4=C_fast_retrieve(lf[138]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}}

/* k2717 in k2710 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[87] /* (set! target-filename ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4346 in k4344 in k4342 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in ... */
static void C_ccall f_4348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1055: get-output-string */
t3=C_fast_retrieve(lf[108]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4344 in k4342 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in ... */
static void C_ccall f_4345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4354,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1057: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve2(lf[27],"home"),lf[169]);}

/* k4342 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_4341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4360,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5353,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t5=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}

/* k1884 in k1875 in k1873 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in ... */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:575: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k1880 in k1877 in k1875 in k1873 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in ... */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:574: command */
f_4302(((C_word*)t0)[2],t1);}

/* k1887 in k1875 in k1873 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in ... */
static void C_ccall f_1888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3928,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3930,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3953,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:900: open-output-string */
t5=C_fast_retrieve(lf[111]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4378 in k4376 in k4373 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in ... */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3744(t2,((C_word*)t0)[3]);}

/* k4376 in k4373 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in ... */
static void C_ccall f_4377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1069: file-exists? */
t4=C_fast_retrieve(lf[156]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in ... */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* csc.scm:1063: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[159]);}

/* k4373 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in ... */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1068: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],lf[157]);}

/* k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in ... */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4411,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1064: file-exists? */
t4=C_fast_retrieve(lf[156]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k1873 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_1874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k1875 in k1873 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in ... */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1885,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1888,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:579: string-append */
t5=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve2(lf[87],"target-filename"),lf[187]);}

/* k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1891,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve2(lf[87],"target-filename");
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5400,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_retrieve2(lf[87],"target-filename"));}

/* k1877 in k1875 in k1873 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in ... */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:575: get-output-string */
t3=C_fast_retrieve(lf[108]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3952 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3953,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3955,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:900: display */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[184],t2);}

/* k3954 in k3952 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3964,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3967,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:900: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[5])[1],lf[183]);}

/* k3956 in k3954 in k3952 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3961,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:900: get-output-string */
t3=C_fast_retrieve(lf[108]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3949 in k3937 in k3935 in k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_3950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4320 in $delete-file in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve2(lf[66],"dry-run"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csc.scm:1050: delete-file */
t2=C_fast_retrieve(lf[138]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:575: open-output-string */
t3=C_fast_retrieve(lf[111]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1868,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[43],"windows-shell"))){
/* csc.scm:575: display */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[188],t2);}
else{
/* csc.scm:575: display */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[189],t2);}}

/* k4118 in k4113 in linker-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_fcall f_4120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[114]);}
else{
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],((C_word*)t0)[3],lf[115]);}}

/* k4023 in k3791 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_string_equal_p(t1,lf[167]))){
/* csc.scm:963: lib-path */
f_3999(((C_word*)t0)[2]);}
else{
if(C_truep(C_retrieve2(lf[23],"cross-chicken"))){
t2=C_retrieve2(lf[22],"host-mode");
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* csc.scm:963: lib-path */
f_3999(((C_word*)t0)[2]);}
else{
t3=t1;
t4=((C_word*)t0)[2];
f_4057(2,t4,t3);}}
else{
/* csc.scm:963: lib-path */
f_3999(((C_word*)t0)[2]);}}}

/* k2640 in k2637 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:801: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1812(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2648 in k2637 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:724: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[86],"link-options"),t1);}

/* k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: display */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[191],((C_word*)t0)[3]);}

/* k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_1851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: display */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[87],"target-filename"),((C_word*)t0)[3]);}

/* k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: display */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[190],((C_word*)t0)[3]);}

/* k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:572: display */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[87],"target-filename"),((C_word*)t0)[3]);}

/* k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k4113 in linker-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[94],"static"))){
t3=C_retrieve2(lf[1],"mingw");
t4=t2;
f_4120(t4,(C_truep(C_retrieve2(lf[1],"mingw"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[3],"osx"))));}
else{
t3=t2;
f_4120(t3,C_SCHEME_FALSE);}}

/* k3937 in k3935 in k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3947,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3950,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:901: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[5])[1],lf[181]);}

/* k3935 in k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3936,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:901: display */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[182],t2);}

/* command in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_fcall f_4302(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4302,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1032: print */
t4=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t4=t3;
f_4262(2,t4,C_SCHEME_UNDEFINED);}}

/* k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:901: open-output-string */
t3=C_fast_retrieve(lf[111]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* linker-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_fcall f_4107(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4107,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4114,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4132,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:988: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[84],"linking-optimization-options"),C_retrieve2(lf[86],"link-options"));}

/* k4101 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_4102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:978: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4005 in lib-path in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4006,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[103]);
/* csc.scm:88: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,lf[105]);}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* map-loop663 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_fcall f_3969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3969,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3994,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5388,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3966 in k3954 in k3952 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3963 in k3954 in k3952 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:900: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3959 in k3956 in k3954 in k3952 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:900: command */
f_4302(((C_word*)t0)[2],t1);}

/* k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4339,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4341,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:1055: display */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[170],t2);}

/* lib-path in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_fcall f_3999(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3999,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4006,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[4],"win"))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}
else{
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME),C_fix(0));}}}

/* k3993 in map-loop663 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3994,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3969(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3969(t6,((C_word*)t0)[5],t5);}}

/* f_3469 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3469,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3472,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:847: pathname-replace-extension */
t4=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_retrieve2(lf[34],"object-extension"));}

/* k2605 in k2602 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[80] /* (set! compile-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:801: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1812(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2602 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2614,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:718: string-split */
t5=C_fast_retrieve(lf[223]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3454 in for-each-loop466 in k1944 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3446(t3,((C_word*)t0)[4],t2);}

/* k1890 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:575: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k2613 in k2602 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:718: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[80],"compile-options"),t1);}

/* k2659 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2660,2,t0,t1);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[70] /* (set! rpath ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:729: build-platform */
t6=C_fast_retrieve(lf[353]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k4131 in linker-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:987: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* linker-libraries in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_fcall f_4134(C_word t1){
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
C_save_and_reclaim((void*)trf_4134,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4141,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[94],"static");
if(C_truep(C_retrieve2(lf[94],"static"))){
t5=C_retrieve2(lf[94],"static");
t6=t3;
f_4144(t6,(C_truep(C_retrieve2(lf[94],"static"))?C_retrieve2(lf[75],"library-files"):C_retrieve2(lf[76],"shared-library-files")));}
else{
t5=C_retrieve2(lf[95],"static-libs");
t6=t3;
f_4144(t6,(C_truep(C_retrieve2(lf[95],"static-libs"))?C_retrieve2(lf[75],"library-files"):C_retrieve2(lf[76],"shared-library-files")));}}

/* k2675 in k2671 in k2659 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:801: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1812(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2671 in k2659 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_fcall f_2673(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2673,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2683,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:731: string-append */
t4=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[350],C_retrieve2(lf[70],"rpath"));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* csc.scm:801: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1812(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k3496 in k3493 in k3471 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[59],"cpp-mode"))){
t3=C_i_string_equal_p(lf[194],C_retrieve2(lf[30],"c++-compiler"));
t4=t2;
f_3500(t4,(C_truep(t3)?lf[195]:lf[196]));}
else{
t3=t2;
f_3500(t3,lf[196]);}}

/* k3493 in k3471 */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3513,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5405,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k3033 in k3029 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[53] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3029 */
static void C_fcall f_3030(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3030,NULL,2,t0,t1);}
t2=lf[59] /* cpp-mode */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:788: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_retrieve2(lf[53],"c-files"),t4);}

/* for-each-loop466 in k1944 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3446,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3455,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:806: g467 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3434 in for-each-loop522 in k3414 in k1944 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_3435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3426(t3,((C_word*)t0)[4],t2);}

/* f5862 in k4688 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f5862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5866 in k4700 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f5866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_fcall f_1812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1812,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1823,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:538: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[80],"compile-options"),C_retrieve2(lf[81],"builtin-compile-options"));}
else{
t3=C_i_car(t2);
t4=t2;
t5=C_u_i_cdr(t4);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2011,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* csc.scm:584: string->symbol */
t8=*((C_word*)lf[391]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}}

/* k3484 in k3471 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:848: command */
f_4302(((C_word*)t0)[2],t1);}

/* k1950 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_1952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[87] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_1945(t3,t2);}

/* k2587 in k2584 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_2589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2584 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
/* csc.scm:715: cons* */
t5=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[344],t3,t4);}

/* k3473 in k3471 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3474,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-object-files"));
t3=C_mutate(&lf[58] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3471 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3474,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3485,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[59],"cpp-mode"))?C_retrieve2(lf[30],"c++-compiler"):C_retrieve2(lf[29],"compiler"));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3494,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5410,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t8=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}

/* k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_fcall f_1943(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1943,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[87],"target-filename"))){
t3=t2;
f_1945(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1952,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[93],"shared"))){
t4=C_i_car(C_retrieve2(lf[52],"scheme-files"));
/* csc.scm:563: pathname-replace-extension */
t5=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[40],"shared-library-extension"));}
else{
t4=C_i_car(C_retrieve2(lf[52],"scheme-files"));
/* csc.scm:564: pathname-replace-extension */
t5=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[38],"executable-extension"));}}}

/* k1944 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_fcall f_1945(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1945,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3305,tmp=(C_word)a,a+=2,tmp);
t3=C_retrieve2(lf[52],"scheme-files");
t4=C_i_check_list_2(C_retrieve2(lf[52],"scheme-files"),lf[150]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3446,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3446(t9,t5,C_retrieve2(lf[52],"scheme-files"));}

/* for-each-loop522 in k3414 in k1944 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_fcall f_3426(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3426,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3435,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:838: g523 */
t5=C_retrieve2(lf[137],"$delete-file");
f_4317(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1975 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[64],"show-ldflags"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1997,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:543: linker-options */
f_4107(t3);}
else{
t3=t2;
f_1978(2,t3,C_SCHEME_UNDEFINED);}}

/* k1977 in k1975 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[65],"show-libs"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1991,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:544: linker-libraries */
f_4134(t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:545: newline */
t4=*((C_word*)lf[219]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2121 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:614: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3414 in k1944 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3416,2,t0,t1);}
if(C_truep(C_retrieve2(lf[89],"keep-files"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_1831(2,t3,t2);}
else{
t2=C_retrieve2(lf[137],"$delete-file");
t3=C_i_check_list_2(C_SCHEME_END_OF_LIST,lf[150]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3426,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3426(t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}

/* k2132 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:615: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k1990 in k1977 in k1975 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:544: print* */
t2=*((C_word*)lf[220]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k1996 in k1975 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:543: print* */
t2=*((C_word*)lf[220]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k2143 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:616: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k1981 in k1979 in k1977 in k1975 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_1982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:546: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1979 in k1977 in k1975 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_1980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:545: newline */
t3=*((C_word*)lf[219]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2154 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:617: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4710,2,t0,t1);}
t2=C_eqp(t1,lf[7]);
t3=C_mutate(&lf[8] /* (set! cygwin ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:75: software-version */
t5=C_fast_retrieve(lf[229]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4719,2,t0,t1);}
t2=C_eqp(t1,lf[0]);
t3=C_mutate(&lf[1] /* (set! mingw ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:69: software-version */
t5=C_fast_retrieve(lf[229]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4716,2,t0,t1);}
t2=C_eqp(t1,lf[2]);
t3=C_mutate(&lf[3] /* (set! osx ...) */,t2);
t4=C_mutate(&lf[4] /* (set! win ...) */,C_retrieve2(lf[1],"mingw"));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4713,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:71: software-version */
t6=C_fast_retrieve(lf[229]);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4713,2,t0,t1);}
t2=C_eqp(t1,lf[5]);
t3=C_mutate(&lf[6] /* (set! netbsd ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:72: build-platform */
t5=C_fast_retrieve(lf[353]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k3394 in k3332 in k3307 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
t2=((C_word*)t0)[2];
f_3339(t2,C_a_i_list(&a,2,lf[214],t1));}

/* k4700 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4701,2,t0,t1);}
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[416]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[417]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5866,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
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
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2011,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,lf[240]);
t5=(C_truep(t4)?t4:C_eqp(t2,lf[241]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1705,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}
else{
t6=C_eqp(t2,lf[246]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2035,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2041,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:590: chicken-version */
t9=C_fast_retrieve(lf[247]);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t7=C_eqp(t2,lf[248]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2049,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2055,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:593: sprintf */
t10=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_retrieve2(lf[28],"translator"),lf[250]);}
else{
t8=C_eqp(t2,lf[251]);
if(C_truep(t8)){
t9=lf[59] /* cpp-mode */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[3],"osx"))){
t10=C_a_i_cons(&a,2,lf[252],C_retrieve2(lf[80],"compile-options"));
t11=C_mutate(&lf[80] /* (set! compile-options ...) */,t10);
/* csc.scm:801: loop */
t12=((C_word*)((C_word*)t0)[2])[1];
f_1812(t12,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
/* csc.scm:801: loop */
t10=((C_word*)((C_word*)t0)[2])[1];
f_1812(t10,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t9=C_eqp(t2,lf[253]);
if(C_truep(t9)){
t10=lf[60] /* objc-mode */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t11=((C_word*)((C_word*)t0)[2])[1];
f_1812(t11,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t10=C_eqp(t2,lf[254]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:602: cons* */
t12=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,lf[255],lf[256],C_retrieve2(lf[77],"translate-options"));}
else{
t11=C_eqp(t2,lf[257]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:606: cons* */
t13=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t12,lf[258],lf[259],C_retrieve2(lf[77],"translate-options"));}
else{
t12=C_eqp(t2,lf[260]);
if(C_truep(t12)){
t13=lf[62] /* inquiry-only */ =C_SCHEME_TRUE;;
t14=lf[63] /* show-cflags */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t15=((C_word*)((C_word*)t0)[2])[1];
f_1812(t15,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t13=C_eqp(t2,lf[261]);
if(C_truep(t13)){
t14=lf[62] /* inquiry-only */ =C_SCHEME_TRUE;;
t15=lf[64] /* show-ldflags */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t16=((C_word*)((C_word*)t0)[2])[1];
f_1812(t16,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t14=C_eqp(t2,lf[262]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2122,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:614: print */
t16=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_retrieve2(lf[29],"compiler"));}
else{
t15=C_eqp(t2,lf[263]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2133,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:615: print */
t17=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,C_retrieve2(lf[30],"c++-compiler"));}
else{
t16=C_eqp(t2,lf[264]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2144,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:616: print */
t18=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t18+1)))(3,t18,t17,C_retrieve2(lf[32],"linker"));}
else{
t17=C_eqp(t2,lf[265]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2155,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:617: print */
t19=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t19+1)))(3,t19,t18,C_retrieve2(lf[27],"home"));}
else{
t18=C_eqp(t2,lf[266]);
if(C_truep(t18)){
t19=lf[62] /* inquiry-only */ =C_SCHEME_TRUE;;
t20=lf[65] /* show-libs */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t21=((C_word*)((C_word*)t0)[2])[1];
f_1812(t21,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t19=C_eqp(t2,lf[267]);
t20=(C_truep(t19)?t19:C_eqp(t2,lf[268]));
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(C_retrieve2(lf[88],"verbose")))){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2190,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:623: cons* */
t23=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t23+1)))(5,t23,t22,lf[271],lf[272],C_retrieve2(lf[80],"compile-options"));}
else{
t22=t21;
f_2176(t22,C_SCHEME_UNDEFINED);}}
else{
t21=C_eqp(t2,lf[273]);
t22=(C_truep(t21)?t21:C_eqp(t2,lf[274]));
if(C_truep(t22)){
t23=C_a_i_cons(&a,2,lf[275],C_retrieve2(lf[80],"compile-options"));
t24=C_mutate(&lf[80] /* (set! compile-options ...) */,t23);
/* csc.scm:631: t-options */
f_1738(t3,C_a_i_list(&a,1,lf[276]));}
else{
t23=C_eqp(t2,lf[277]);
t24=(C_truep(t23)?t23:C_eqp(t2,lf[278]));
if(C_truep(t24)){
t25=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:634: t-options */
f_1738(t3,C_a_i_list(&a,1,lf[279]));}
else{
t25=C_eqp(t2,lf[280]);
t26=(C_truep(t25)?t25:C_eqp(t2,lf[281]));
if(C_truep(t26)){
t27=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:637: t-options */
f_1738(t3,C_a_i_list(&a,1,lf[282]));}
else{
t27=C_eqp(t2,lf[283]);
if(C_truep(t27)){
t28=lf[89] /* keep-files */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t29=((C_word*)((C_word*)t0)[2])[1];
f_1812(t29,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t28=C_eqp(t2,lf[284]);
if(C_truep(t28)){
t29=lf[91] /* compile-only */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t30=((C_word*)((C_word*)t0)[2])[1];
f_1812(t30,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t29=C_eqp(t2,lf[285]);
if(C_truep(t29)){
t30=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t31=((C_word*)((C_word*)t0)[2])[1];
f_1812(t31,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t30=C_eqp(t2,lf[286]);
t31=(C_truep(t30)?t30:C_eqp(t2,lf[287]));
if(C_truep(t31)){
t32=lf[61] /* embedded */ =C_SCHEME_TRUE;;
t33=C_a_i_cons(&a,2,lf[288],C_retrieve2(lf[80],"compile-options"));
t34=C_mutate(&lf[80] /* (set! compile-options ...) */,t33);
/* csc.scm:801: loop */
t35=((C_word*)((C_word*)t0)[2])[1];
f_1812(t35,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t32=C_eqp(t2,lf[289]);
t33=(C_truep(t32)?t32:C_eqp(t2,lf[290]));
if(C_truep(t33)){
t34=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2277,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:645: check */
f_1746(t34,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t34=C_eqp(t2,lf[292]);
if(C_truep(t34)){
t35=f_1794(C_a_i(&a,6));
/* csc.scm:801: loop */
t36=((C_word*)((C_word*)t0)[2])[1];
f_1812(t36,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t35=C_eqp(t2,lf[293]);
if(C_truep(t35)){
t36=lf[44] /* generate-manifest */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t37=((C_word*)((C_word*)t0)[2])[1];
f_1812(t37,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t36=C_eqp(t2,lf[294]);
if(C_truep(t36)){
t37=lf[67] /* gui */ =C_SCHEME_TRUE;;
t38=C_a_i_cons(&a,2,lf[295],C_retrieve2(lf[80],"compile-options"));
t39=C_mutate(&lf[80] /* (set! compile-options ...) */,t38);
if(C_truep(C_retrieve2(lf[1],"mingw"))){
t40=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=t40,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t42=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t42+1)))(4,t42,t41,C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}
else{
/* csc.scm:801: loop */
t40=((C_word*)((C_word*)t0)[2])[1];
f_1812(t40,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t37=C_eqp(t2,lf[301]);
if(C_truep(t37)){
t38=lf[68] /* deploy */ =C_SCHEME_TRUE;;
t39=lf[69] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t40=((C_word*)((C_word*)t0)[2])[1];
f_1812(t40,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t38=C_eqp(t2,lf[302]);
if(C_truep(t38)){
t39=lf[69] /* deployed */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t40=((C_word*)((C_word*)t0)[2])[1];
f_1812(t40,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t39=C_eqp(t2,lf[303]);
if(C_truep(t39)){
t40=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:671: check */
f_1746(t40,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t40=C_eqp(t2,lf[305]);
t41=(C_truep(t40)?t40:C_eqp(t2,lf[306]));
if(C_truep(t41)){
t42=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:676: check */
f_1746(t42,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t42=C_eqp(t2,lf[307]);
t43=(C_truep(t42)?t42:C_eqp(t2,lf[308]));
if(C_truep(t43)){
t44=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:680: cons* */
t45=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t45+1)))(5,t45,t44,lf[309],lf[310],((C_word*)((C_word*)t0)[4])[1]);}
else{
t44=C_eqp(t2,lf[311]);
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:681: cons* */
t46=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t46+1)))(5,t46,t45,lf[312],lf[313],((C_word*)((C_word*)t0)[4])[1]);}
else{
t45=C_eqp(t2,lf[314]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:682: cons* */
t47=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t47+1)))(5,t47,t46,lf[315],lf[316],((C_word*)((C_word*)t0)[4])[1]);}
else{
t46=C_eqp(t2,lf[317]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:683: cons* */
t48=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t48+1)))(5,t48,t47,lf[318],lf[319],((C_word*)((C_word*)t0)[4])[1]);}
else{
t47=C_eqp(t2,lf[320]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:684: cons* */
t49=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t49+1)))(5,t49,t48,lf[321],lf[322],((C_word*)((C_word*)t0)[4])[1]);}
else{
t48=C_eqp(t2,lf[323]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:686: cons* */
t50=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t50+1)))(5,t50,t49,lf[324],lf[325],((C_word*)((C_word*)t0)[4])[1]);}
else{
t49=C_eqp(t2,lf[326]);
if(C_truep(t49)){
t50=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:687: cons* */
t51=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t51+1)))(5,t51,t50,lf[327],lf[328],((C_word*)((C_word*)t0)[4])[1]);}
else{
t50=C_eqp(t2,lf[329]);
if(C_truep(t50)){
t51=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:688: cons* */
t52=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t52+1)))(5,t52,t51,lf[330],lf[331],((C_word*)((C_word*)t0)[4])[1]);}
else{
t51=C_eqp(t2,lf[332]);
if(C_truep(t51)){
t52=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:689: cons* */
t53=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t53+1)))(5,t53,t52,lf[333],lf[334],((C_word*)((C_word*)t0)[4])[1]);}
else{
t52=C_eqp(t2,lf[335]);
if(C_truep(t52)){
t53=lf[88] /* verbose */ =C_SCHEME_TRUE;;
t54=lf[66] /* dry-run */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t55=((C_word*)((C_word*)t0)[2])[1];
f_1812(t55,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t53=C_eqp(t2,lf[336]);
t54=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t53)){
t55=t54;
f_2499(t55,t53);}
else{
t55=C_eqp(t2,lf[389]);
t56=t54;
f_2499(t56,(C_truep(t55)?t55:C_eqp(t2,lf[390])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k2012 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:801: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1812(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* f5395 in k1887 in k1875 in k1873 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in ... */
static void C_ccall f5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3791 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4051,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4024,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}

/* k3073 in k3062 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[52] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3376 in map-loop486 in k3344 in k3338 in k3332 in k3307 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3377,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3352(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3352(t6,((C_word*)t0)[5],t5);}}

/* f5388 in map-loop663 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f5388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5383 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f5383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3789,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:1060: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[162]);}

/* k1652 in k1586 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_1653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1653,2,t0,t1);}
t2=C_eqp(t1,lf[227]);
t3=((C_word*)t0)[2];
f_1590(t3,(C_truep(t2)?C_a_i_list1(&a,1,lf[228]):C_SCHEME_END_OF_LIST));}

/* k1658 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1665,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[69],"deployed"))?C_i_not(C_retrieve2(lf[6],"netbsd")):C_SCHEME_FALSE);
if(C_truep(t4)){
/* csc.scm:269: conc */
t5=C_fast_retrieve(lf[230]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[231],lf[233],lf[232]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1674,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME),C_fix(0));}}}

/* k3062 */
static void C_fcall f_3064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3064,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:794: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_retrieve2(lf[57],"object-files"),t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:795: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_retrieve2(lf[52],"scheme-files"),t3);}}

/* k3066 in k3062 */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[57] /* (set! object-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f5373 in k3949 in k3937 in k3935 in k3929 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f5373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5378 in k3966 in k3954 in k3952 in k3926 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f5378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3081 in k2970 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_3082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3088,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:798: file-exists? */
t3=C_fast_retrieve(lf[156]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2520 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[28] /* (set! translator ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:801: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1812(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_fcall f_3775(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3775,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3792,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t4=C_retrieve2(lf[67],"gui");
if(C_truep(C_retrieve2(lf[67],"gui"))){
/* csc.scm:940: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[2])[1],lf[168]);}
else{
t5=t3;
f_3792(2,t5,((C_word*)((C_word*)t0)[2])[1]);}}
else{
t4=t3;
f_3792(2,t4,((C_word*)((C_word*)t0)[2])[1]);}}
else{
t2=((C_word*)t0)[3];
f_3744(t2,C_SCHEME_UNDEFINED);}}

/* k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3777,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[67],"gui"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:944: pathname-file */
t4=C_fast_retrieve(lf[163]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[87],"target-filename"));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3744(t4,t3);}}

/* k4091 in k4089 in k4087 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_4093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:978: get-output-string */
t3=C_fast_retrieve(lf[108]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4094 in k4091 in k4089 in k4087 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:977: command */
f_4302(((C_word*)t0)[2],t1);}

/* k1688 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_1689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1689,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1587(t2,C_a_i_list1(&a,1,t1));}

/* k4089 in k4087 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_4090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4099,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[5];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5322,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* map-loop486 in k3344 in k3338 in k3332 in k3307 */
static void C_fcall f_3352(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3352,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3377,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:826: g492 */
t5=C_retrieve2(lf[98],"quote-option");
f_4222(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4098 in k4089 in k4087 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_4099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:978: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k3348 in k3344 in k3338 in k3332 in k3307 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:819: append */
t2=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f5363 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f5363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5368 in k3886 in k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f5368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2054 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:593: system */
t2=C_fast_retrieve(lf[133]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1634 in map-loop165 in k1604 */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1635,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1610(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1610(t6,((C_word*)t0)[5],t5);}}

/* k3762 in for-each-loop745 in k3743 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_3763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3754(t3,((C_word*)t0)[4],t2);}

/* f5494 in k4685 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f5494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3086 in k3081 in k2970 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3088,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
/* csc.scm:801: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1812(t4,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* csc.scm:800: quit */
f_1394(((C_word*)t0)[6],lf[383],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* f5499 in k4697 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f5499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4102,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[6];
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5327,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4082,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[43],"windows-shell"))){
/* csc.scm:978: display */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[109],t2);}
else{
/* csc.scm:978: display */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[110],t2);}}

/* k1915 in k1909 in k1907 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[87] /* (set! target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_1831(2,t3,t2);}

/* k4087 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_4088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k1909 in k1907 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1910,2,t0,t1);}
if(C_truep(C_retrieve2(lf[87],"target-filename"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_1831(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[93],"shared"))){
/* csc.scm:555: pathname-replace-extension */
t3=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_retrieve2(lf[40],"shared-library-extension"));}
else{
/* csc.scm:556: pathname-replace-extension */
t3=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,C_retrieve2(lf[38],"executable-extension"));}}}

/* f5353 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f5353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5358 in k3832 in k3830 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f5358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* fold in k4180 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_fcall f_4183(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4183,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
if(C_truep(C_i_memq(t3,lf[117]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4204,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* csc.scm:1013: fold */
t10=t4;
t11=t6;
t1=t10;
t2=t11;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4208,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(t3))){
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t6=t4;
f_4208(t6,t5);}
else{
t5=t4;
f_4208(t5,C_SCHEME_UNDEFINED);}}}}

/* k4180 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4181,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4183,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4183(t5,((C_word*)t0)[3],t1);}

/* k1664 in k1658 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_1665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:269: conc */
t2=C_fast_retrieve(lf[230]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[231],t1,lf[232]);}

/* for-each-loop745 in k3743 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_fcall f_3754(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3754,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3763,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:946: g746 */
t5=C_retrieve2(lf[137],"$delete-file");
f_4317(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1661 in k1658 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1662,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1587(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k2023 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:588: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4072 in k4056 in k3791 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_4073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[166],t1);}

/* f5400 in k1871 in k1869 in k1867 in k1860 in k1858 in k1856 in k1854 in k1852 in k1850 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f5400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3338 in k3332 in k3307 */
static void C_fcall f_3339(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3339,NULL,2,t0,t1);}
t2=C_fudge(C_fix(13));
t3=(C_truep(t2)?lf[210]:C_SCHEME_END_OF_LIST);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_retrieve2(lf[98],"quote-option");
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t7,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[59],"cpp-mode"))){
/* csc.scm:827: append */
t10=*((C_word*)lf[101]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,C_retrieve2(lf[51],"extra-features"),C_retrieve2(lf[77],"translate-options"),lf[211],C_retrieve2(lf[82],"translation-optimization-options"));}
else{
if(C_truep(C_retrieve2(lf[60],"objc-mode"))){
/* csc.scm:827: append */
t10=*((C_word*)lf[101]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,C_retrieve2(lf[51],"extra-features"),C_retrieve2(lf[77],"translate-options"),lf[212],C_retrieve2(lf[82],"translation-optimization-options"));}
else{
/* csc.scm:827: append */
t10=*((C_word*)lf[101]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,C_retrieve2(lf[51],"extra-features"),C_retrieve2(lf[77],"translate-options"),C_SCHEME_END_OF_LIST,C_retrieve2(lf[82],"translation-optimization-options"));}}}

/* f5405 in k3493 in k3471 */
static void C_ccall f5405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_fcall f_4075(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4075,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4082,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:978: open-output-string */
t5=C_fast_retrieve(lf[111]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k4694 in k4691 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:101: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3335 in k3332 in k3307 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:818: cons* */
t2=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_retrieve2(lf[28],"translator"),((C_word*)t0)[3],t1);}

/* k3332 in k3307 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3339,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[92],"to-stdout"))){
t4=t3;
f_3339(t4,lf[213]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3395,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[3];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5437,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}}

/* k1907 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[53],"c-files")))){
t3=C_retrieve2(lf[57],"object-files");
/* csc.scm:551: last */
t4=C_fast_retrieve(lf[207]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,C_retrieve2(lf[57],"object-files"));}
else{
t3=C_retrieve2(lf[53],"c-files");
/* csc.scm:551: last */
t4=C_fast_retrieve(lf[207]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,C_retrieve2(lf[53],"c-files"));}}

/* k4691 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4695,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_CHICKEN_PROGRAM),C_fix(0));}

/* k3329 in k3307 */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:817: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[209]);}

/* k4697 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4698,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* f5348 in k4356 in k4344 in k4342 in k4340 in k4338 in k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in ... */
static void C_ccall f5348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3743 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_fcall f_3744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3744,NULL,2,t0,t1);}
if(C_truep(C_retrieve2(lf[89],"keep-files"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_retrieve2(lf[137],"$delete-file");
t3=C_retrieve2(lf[58],"generated-object-files");
t4=C_i_check_list_2(C_retrieve2(lf[58],"generated-object-files"),lf[150]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3754,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3754(t8,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-object-files"));}}

/* k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3742,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[68],"deploy"))){
t4=C_retrieve2(lf[94],"static");
if(C_truep(C_retrieve2(lf[94],"static"))){
t5=C_retrieve2(lf[94],"static");
t6=C_retrieve2(lf[94],"static");
t7=t3;
f_3775(t7,C_i_not(C_retrieve2(lf[94],"static")));}
else{
t5=C_retrieve2(lf[95],"static-libs");
t6=C_retrieve2(lf[95],"static-libs");
t7=t3;
f_3775(t7,C_i_not(C_retrieve2(lf[95],"static-libs")));}}
else{
t4=t3;
f_3775(t4,C_SCHEME_FALSE);}}

/* k2034 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:591: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4059 in k4056 in k3791 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in ... */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:966: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_retrieve2(lf[45],"libchicken"),t1);}

/* k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t4=C_i_not(C_retrieve2(lf[23],"cross-chicken"));
if(C_truep(t4)){
t5=t3;
f_3808(t5,t4);}
else{
t5=C_retrieve2(lf[22],"host-mode");
t6=t3;
f_3808(t6,C_retrieve2(lf[22],"host-mode"));}}
else{
t4=t3;
f_3808(t4,C_SCHEME_FALSE);}}

/* k3326 in k3307 */
static void C_ccall f_3327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:816: command */
f_4302(((C_word*)t0)[2],t1);}

/* k4165 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4166,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1018: string-translate* */
t3=C_fast_retrieve(lf[122]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[123]);}
else{
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2002 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:542: print* */
t2=*((C_word*)lf[220]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k3683 in compiler-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_3684(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3684,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[99]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3691,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3691(t7,t3,t1);}

/* k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_retrieve2(lf[87],"target-filename");
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5383,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t5=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_retrieve2(lf[87],"target-filename"));}

/* k2005 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:539: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[86],"link-options"),t1);}

/* k3687 in k3683 in compiler-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:882: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3736,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3738,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[68],"deploy"))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3882,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:897: pathname-strip-extension */
t7=C_fast_retrieve(lf[186]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_retrieve2(lf[87],"target-filename"));}
else{
t6=t5;
f_3738(2,t6,C_SCHEME_UNDEFINED);}}

/* k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_3738(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3853,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3856,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[59],"cpp-mode"))?C_retrieve2(lf[33],"c++-linker"):C_retrieve2(lf[32],"linker"));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3862,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3868,a[2]=t6,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=C_retrieve2(lf[87],"target-filename");
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5363,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t11=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,C_retrieve2(lf[87],"target-filename"));}

/* k4050 in k3791 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_4051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:974: copy-files */
f_4075(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4056 in k3791 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4060,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
/* csc.scm:966: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_retrieve2(lf[45],"libchicken"),lf[164]);}
else{
t3=C_retrieve2(lf[4],"win");
t4=(C_truep(C_retrieve2(lf[4],"win"))?C_retrieve2(lf[4],"win"):C_retrieve2(lf[8],"cygwin"));
if(C_truep(t4)){
/* csc.scm:966: make-pathname */
t5=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[2],t1,C_retrieve2(lf[45],"libchicken"),lf[165]);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4073,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:973: number->string */
C_number_to_string(3,0,t5,C_fix((C_word)C_BINARY_VERSION));}}}

/* k4676 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3316 in k3312 in k3309 in k3307 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[55] /* (set! generated-c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3312 in k3309 in k3307 */
static void C_ccall f_3314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3314,2,t0,t1);}
t2=C_mutate(&lf[53] /* (set! c-files ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:836: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve2(lf[55],"generated-c-files"));}

/* k3309 in k3307 */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* csc.scm:835: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve2(lf[53],"c-files"));}

/* f5322 in k4089 in k4087 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f5322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5327 in k4085 in k4083 in k4081 in copy-files in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f5327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3499 in k3496 in k3493 in k3471 */
static void C_fcall f_3500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3500,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm:858: compiler-options */
f_3677(t2);}

/* k3502 in k3499 in k3496 in k3493 in k3471 */
static void C_ccall f_3503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3503,2,t0,t1);}
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],lf[193],((C_word*)t0)[5],t1);
/* csc.scm:849: string-intersperse */
t3=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[6],t2);}

/* k1673 in k1658 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_1674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1674,2,t0,t1);}
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[234]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[235]);}
else{
/* csc.scm:269: conc */
t2=C_fast_retrieve(lf[230]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[231],t1,lf[232]);}}

/* compiler-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_fcall f_3677(C_word t1){
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
C_save_and_reclaim((void*)trf_3677,NULL,1,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_retrieve2(lf[98],"quote-option");
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3684,a[2]=t1,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t8=C_retrieve2(lf[94],"static");
t9=(C_truep(C_retrieve2(lf[94],"static"))?C_retrieve2(lf[94],"static"):C_retrieve2(lf[95],"static-libs"));
if(C_truep(t9)){
/* csc.scm:884: append */
t10=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,C_SCHEME_END_OF_LIST,C_retrieve2(lf[83],"compilation-optimization-options"),C_retrieve2(lf[80],"compile-options"));}
else{
/* csc.scm:884: append */
t10=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,C_SCHEME_END_OF_LIST,C_retrieve2(lf[83],"compilation-optimization-options"),C_retrieve2(lf[80],"compile-options"));}}

/* k4140 in linker-libraries in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:992: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4143 in linker-libraries in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_fcall f_4144(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4144,NULL,2,t0,t1);}
t2=C_retrieve2(lf[94],"static");
if(C_truep(C_retrieve2(lf[94],"static"))){
t3=C_retrieve2(lf[94],"static");
t4=(C_truep(C_retrieve2(lf[94],"static"))?C_a_i_list1(&a,1,C_retrieve2(lf[71],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[72],"extra-shared-libraries")));
/* csc.scm:993: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}
else{
t3=C_retrieve2(lf[95],"static-libs");
t4=(C_truep(C_retrieve2(lf[95],"static-libs"))?C_a_i_list1(&a,1,C_retrieve2(lf[71],"extra-libraries")):C_a_i_list1(&a,1,C_retrieve2(lf[72],"extra-shared-libraries")));
/* csc.scm:993: append */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}}

/* use-private-repository in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static C_word C_fcall f_1794(C_word *a){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
t1=C_a_i_cons(&a,2,lf[148],C_retrieve2(lf[80],"compile-options"));
t2=C_mutate(&lf[80] /* (set! compile-options ...) */,t1);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t3=C_a_i_cons(&a,2,lf[149],C_retrieve2(lf[86],"link-options"));
t4=C_mutate(&lf[86] /* (set! link-options ...) */,t3);
return(t4);}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* f5442 in k3307 */
static void C_ccall f5442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4658 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4649 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 in ... */
static void C_ccall f_4650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5474,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1779 in k1775 in shared-build in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1781,2,t0,t1);}
t2=C_mutate(&lf[80] /* (set! compile-options ...) */,t1);
t3=(C_truep(C_retrieve2(lf[3],"osx"))?(C_truep(((C_word*)t0)[2])?C_a_i_cons(&a,2,lf[142],C_retrieve2(lf[86],"link-options")):C_a_i_cons(&a,2,lf[143],C_retrieve2(lf[86],"link-options"))):C_a_i_cons(&a,2,lf[144],C_retrieve2(lf[86],"link-options")));
t4=C_mutate(&lf[86] /* (set! link-options ...) */,t3);
t5=lf[93] /* shared */ =C_SCHEME_TRUE;;
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* f5437 in k3332 in k3307 */
static void C_ccall f5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop632 in k3683 in compiler-options in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_fcall f_3691(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3691,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:883: g638 */
t5=C_retrieve2(lf[98],"quote-option");
f_4222(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4685 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4688 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4689,2,t0,t1);}
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[414]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[415]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5862,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* t-options in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_fcall f_1738(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1738,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1744,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:514: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[77],"translate-options"),t2);}

/* k1604 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1610(t5,((C_word*)t0)[5],t1);}

/* k4634 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in ... */
static void C_ccall f_4635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:125: string-append */
t2=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[411],t1);}

/* k4667 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_4668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5484,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3344 in k3338 in k3332 in k3307 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3345,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[99]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3352(t7,t3,t1);}

/* k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in ... */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1498,2,t0,t1);}
t2=C_mutate(&lf[46] /* (set! default-library ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4617,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CFLAGS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CFLAGS),C_fix(0));}}

/* k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in ... */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1494,2,t0,t1);}
t2=C_mutate(&lf[45] /* (set! libchicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:128: string-append */
t4=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_retrieve2(lf[45],"libchicken"),lf[408],C_retrieve2(lf[36],"library-extension"));}

/* f5484 in k4667 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f5484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5489 in k4676 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f5489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1397 in quit in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:77: display */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[17],*((C_word*)lf[12]+1));}

/* k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1391,2,t0,t1);}
t2=C_mutate(&lf[9] /* (set! elf ...) */,C_u_i_memq(t1,lf[10]));
t3=C_mutate(&lf[11] /* (set! quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1394,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:81: get-environment-variable */
t5=C_fast_retrieve(lf[225]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,lf[419]);}

/* quit in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_fcall f_1394(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1394,NULL,3,t1,t2,t3);}
t4=*((C_word*)lf[12]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1398,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1411,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* k4616 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in ... */
static void C_ccall f_4617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:130: string-split */
t2=C_fast_retrieve(lf[223]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4174 in k4165 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1018: string-append */
t2=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[120],t1,lf[121]);}

/* k3051 */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[53] /* (set! c-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4177 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_4178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* list->string */
t2=C_fast_retrieve(lf[124]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in ... */
static void C_fcall f_1488(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1488,NULL,2,t0,t1);}
t2=C_mutate(&lf[42] /* (set! pic-options ...) */,t1);
t3=C_mutate(&lf[43] /* (set! windows-shell ...) */,C_mk_bool(C_WINDOWS_SHELL));
t4=lf[44] /* generate-manifest */ =C_SCHEME_FALSE;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[8],"cygwin"))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4629,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_LIB_NAME),C_fix(0));}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4635,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_LIB_NAME),C_fix(0));}}

/* k1742 in t-options in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[77] /* (set! translate-options ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* check in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_fcall f_1746(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1746,NULL,4,t1,t2,t3,t4);}
t5=C_i_length(t3);
if(C_truep(C_i_nullp(t4))){
if(C_truep(C_i_greater_or_equalp(t5,C_fix(1)))){
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* csc.scm:518: quit */
f_1394(t1,lf[141],C_a_i_list(&a,1,t2));}}
else{
t6=C_i_car(t4);
if(C_truep(C_i_greater_or_equalp(t5,t6))){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* csc.scm:518: quit */
f_1394(t1,lf[141],C_a_i_list(&a,1,t2));}}}

/* f5474 in k4649 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in ... */
static void C_ccall f5474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5479 in k4658 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 in ... */
static void C_ccall f5479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop165 in k1604 */
static void C_fcall f_1610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1610,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1635,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:283: g171 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4640 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in ... */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in ... */
static void C_ccall f_1476(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1476,2,t0,t1);}
t2=C_mutate(&lf[33] /* (set! c++-linker ...) */,t1);
t3=C_mutate(&lf[34] /* (set! object-extension ...) */,lf[35]);
t4=C_mutate(&lf[36] /* (set! library-extension ...) */,lf[37]);
t5=C_mutate(&lf[38] /* (set! executable-extension ...) */,lf[39]);
t6=C_mutate(&lf[40] /* (set! shared-library-extension ...) */,C_fast_retrieve(lf[41]));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_retrieve2(lf[1],"mingw");
if(C_truep(C_retrieve2(lf[1],"mingw"))){
t9=C_retrieve2(lf[1],"mingw");
t10=t7;
f_1488(t10,(C_truep(C_retrieve2(lf[1],"mingw"))?lf[412]:lf[413]));}
else{
t9=C_retrieve2(lf[8],"cygwin");
t10=t7;
f_1488(t10,(C_truep(C_retrieve2(lf[8],"cygwin"))?lf[412]:lf[413]));}}

/* k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 in ... */
static void C_ccall f_1472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1472,2,t0,t1);}
t2=C_mutate(&lf[32] /* (set! linker ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1476,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4641,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* f5469 in k4640 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in ... */
static void C_ccall f5469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5464 in k4569 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in ... */
static void C_ccall f5464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5450 in k1977 in k1975 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f5450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:546: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4628 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in ... */
static void C_ccall f_4629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:124: string-append */
t2=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[409],t1,lf[410]);}

/* k1710 in k1704 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_1711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:303: print */
t2=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3621 in for-each-loop571 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3613(t3,((C_word*)t0)[4],t2);}

/* k3598 in for-each-loop592 in k3553 in k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3590(t3,((C_word*)t0)[4],t2);}

/* k1704 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[242],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[243],t4);
t6=C_a_i_cons(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,lf[244],t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[245],t8);
/* csc.scm:301: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[153]))(3,*((C_word*)lf[153]+1),t2,t9);}

/* for-each-loop592 in k3553 in k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_fcall f_3590(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3590,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3599,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:878: g593 */
t5=C_retrieve2(lf[137],"$delete-file");
f_4317(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop571 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_fcall f_3613(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3613,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3622,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:867: g572 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3610 in k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:876: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[57],"object-files"));}

/* k4604 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in ... */
static void C_ccall f_4605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:134: string-split */
t2=C_fast_retrieve(lf[223]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4607 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in ... */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:132: string-split */
t2=C_fast_retrieve(lf[223]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_fcall f_2499(C_word t0,C_word t1){
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
C_word t29;
C_word t30;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2499,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm:694: shared-build */
f_1771(((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[337]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[338]));
if(C_truep(t3)){
/* csc.scm:696: shared-build */
f_1771(((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[339]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:698: check */
f_1746(t5,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[340]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2537,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:702: check */
f_1746(t6,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[341]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:706: check */
f_1746(t7,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[342]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:710: check */
f_1746(t8,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[343]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2585,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:714: check */
f_1746(t9,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[345]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:717: check */
f_1746(t10,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[346]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_list1(&a,1,lf[347]);
/* csc.scm:721: append */
t13=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,C_retrieve2(lf[86],"link-options"),t12);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[348]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:723: check */
f_1746(t12,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[349]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:727: check */
f_1746(t13,((C_word*)t0)[9],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[354]);
if(C_truep(t13)){
/* csc.scm:801: loop */
t14=((C_word*)((C_word*)t0)[6])[1];
f_1812(t14,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[355]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:735: append */
t16=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,C_retrieve2(lf[52],"scheme-files"),lf[357]);}
else{
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2721,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t16=C_eqp(((C_word*)t0)[9],lf[388]);
if(C_truep(t16)){
t17=lf[92] /* to-stdout */ =C_SCHEME_TRUE;;
t18=lf[90] /* translate-only */ =C_SCHEME_TRUE;;
t19=t15;
f_2721(t19,t18);}
else{
t17=t15;
f_2721(t17,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}

/* k3648 in k3635 in k3632 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3649,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4423,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:1094: print */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[203],t2);}
else{
t4=t3;
f_4423(2,t4,C_SCHEME_UNDEFINED);}}

/* k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:68: build-platform */
t3=C_fast_retrieve(lf[353]);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f5858 in k4572 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in ... */
static void C_ccall f5858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3578 in for-each-loop609 in k3561 in k3553 in k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3570(t3,((C_word*)t0)[4],t2);}

/* k2369 in k2360 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
/* csc.scm:801: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1812(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* for-each-loop609 in k3561 in k3553 in k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_fcall f_3570(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3570,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3579,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:879: g610 */
t5=C_retrieve2(lf[137],"$delete-file");
f_4317(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3635 in k3632 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3638,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3649,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:864: pathname-file */
t4=C_fast_retrieve(lf[163]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_retrieve2(lf[87],"target-filename"));}

/* k3637 in k3635 in k3632 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3638,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[54],"rc-files"));
t3=C_mutate(&lf[54] /* (set! rc-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[56],"generated-rc-files"));
t5=C_mutate(&lf[56] /* (set! generated-rc-files ...) */,t4);
t6=((C_word*)t0)[3];
f_3520(t6,t5);}

/* k3632 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_fcall f_3634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3634,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:863: pathname-replace-extension */
t3=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[87],"target-filename"),lf[204]);}
else{
t2=((C_word*)t0)[2];
f_3520(t2,C_SCHEME_UNDEFINED);}}

/* k1410 in quit in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:77: display */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[12]+1));}

/* k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1419,2,t0,t1);}
t2=C_mutate(&lf[20] /* (set! arguments ...) */,t1);
t3=C_i_member(lf[21],C_retrieve2(lf[20],"arguments"));
t4=C_mutate(&lf[22] /* (set! host-mode ...) */,t3);
t5=C_fudge(C_fix(39));
t6=C_mutate(&lf[23] /* (set! cross-chicken ...) */,t5);
t7=C_mutate(&lf[24] /* (set! quotewrap ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1441,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4698,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4701,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t11=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t11=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,C_mpointer(&a,(void*)C_TARGET_SHARE_HOME),C_fix(0));}}

/* k2383 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(&lf[87] /* (set! target-filename ...) */,t2);
/* csc.scm:801: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1812(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1415,2,t0,t1);}
t2=C_mutate(&lf[19] /* (set! chicken-prefix ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:82: command-line-arguments */
t4=C_fast_retrieve(lf[418]);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2471 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3665 in for-each-loop542 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3657(t3,((C_word*)t0)[4],t2);}

/* k1399 in k1397 in quit in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_apply(6,0,t2,*((C_word*)lf[15]+1),*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1401 in k1399 in k1397 in quit in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_fast_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),*((C_word*)lf[12]+1));}

/* k1403 in k1401 in k1399 in k1397 in quit in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:79: exit */
t2=C_fast_retrieve(lf[13]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(64));}

/* k3654 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3634(t2,C_eqp(lf[205],t1));}

/* k2481 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* for-each-loop542 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_fcall f_3657(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3657,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3666,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:843: g543 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* shared-build in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_fcall f_1771(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1771,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1777,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:521: cons* */
t4=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[146],lf[147],C_retrieve2(lf[77],"translate-options"));}

/* k1775 in shared-build in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1777,2,t0,t1);}
t2=C_mutate(&lf[77] /* (set! translate-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:522: append */
t4=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,C_retrieve2(lf[42],"pic-options"),lf[145],C_retrieve2(lf[80],"compile-options"));}

/* k3525 in k3523 */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3526,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[58],"generated-object-files"));
t3=C_mutate(&lf[58] /* (set! generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3523 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3526,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3537,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3543,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5420,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t7=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}

/* f_3521 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_3521(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3521,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csc.scm:869: string-append */
t4=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,lf[199],C_retrieve2(lf[34],"object-extension"));}

/* k4491 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4492,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4497,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4497(t5,((C_word*)t0)[5],t1);}

/* k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_fcall f_3520(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3520,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[54],"rc-files");
t4=C_i_check_list_2(C_retrieve2(lf[54],"rc-files"),lf[150]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3613,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3613(t9,t5,C_retrieve2(lf[54],"rc-files"));}

/* map-loop111 in k4491 */
static void C_fcall f_4497(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4497,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:247: g117 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_3518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3634,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[44],"generate-manifest"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3655,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:862: software-type */
t5=C_fast_retrieve(lf[206]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_3634(t4,C_SCHEME_FALSE);}}

/* k3512 in k3493 in k3471 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[197],t1);}

/* k4476 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in ... */
static void C_fcall f_4477(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4477,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:246: get-environment-variable */
t3=C_fast_retrieve(lf[225]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[399]);}

/* k2411 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* f5420 in k3523 */
static void C_ccall f5420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4467 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in ... */
static void C_ccall f_4468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4468,2,t0,t1);}
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t2=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[394]);
/* csc.scm:88: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[395]);}
else{
t2=((C_word*)t0)[2];
f_1577(2,t2,t1);}}

/* k2421 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4461 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* csc.scm:1120: string-split */
t3=C_fast_retrieve(lf[223]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}
else{
/* csc.scm:1120: string-split */
t2=C_fast_retrieve(lf[223]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[392]);}}

/* f5410 in k3471 */
static void C_ccall f5410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f5415 in k3542 in k3523 */
static void C_ccall f5415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1460,2,t0,t1);}
t2=C_mutate(&lf[29] /* (set! compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1464,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4668,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1464,2,t0,t1);}
t2=C_mutate(&lf[30] /* (set! c++-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1468,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4659,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_RC_COMPILER),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_RC_COMPILER),C_fix(0));}}

/* k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1468,2,t0,t1);}
t2=C_mutate(&lf[31] /* (set! rc-compiler ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1472,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4650,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}

/* k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4456,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1738,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1746,tmp=(C_word)a,a+=2,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1771,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1794,tmp=(C_word)a,a+=2,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1812,a[2]=t9,a[3]=t15,a[4]=t3,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_1812(t17,((C_word*)t0)[2],t1);}

/* k3561 in k3553 in k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3563,2,t0,t1);}
t2=C_retrieve2(lf[137],"$delete-file");
t3=C_retrieve2(lf[56],"generated-rc-files");
t4=C_i_check_list_2(C_retrieve2(lf[56],"generated-rc-files"),lf[150]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3570(t8,((C_word*)t0)[2],C_retrieve2(lf[56],"generated-rc-files"));}

/* k4458 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1119: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[20],"arguments"));}

/* k4449 in k4447 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k4451 in k4447 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1452,2,t0,t1);}
t2=C_mutate(&lf[27] /* (set! home ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4686,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4689,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4692,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1456,2,t0,t1);}
t2=C_mutate(&lf[28] /* (set! translator ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4677,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}

/* k3553 in k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3555,2,t0,t1);}
t2=C_mutate(&lf[57] /* (set! object-files ...) */,t1);
if(C_truep(C_retrieve2(lf[89],"keep-files"))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_1838(2,t4,t3);}
else{
t3=C_retrieve2(lf[137],"$delete-file");
t4=C_retrieve2(lf[55],"generated-c-files");
t5=C_i_check_list_2(C_retrieve2(lf[55],"generated-c-files"),lf[150]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_3590(t10,t6,C_retrieve2(lf[55],"generated-c-files"));}}

/* k2401 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3549 in k3519 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:876: reverse */
t4=*((C_word*)lf[200]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in ... */
static void C_ccall f_1561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1561,2,t0,t1);}
t2=C_i_member(t1,lf[78]);
t3=(C_truep(t2)?C_SCHEME_FALSE:t1);
t4=C_mutate(&lf[79] /* (set! include-dir ...) */,t3);
t5=lf[80] /* compile-options */ =C_SCHEME_END_OF_LIST;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4477,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[79],"include-dir"))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4534,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:245: conc */
t9=C_fast_retrieve(lf[230]);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[400],C_retrieve2(lf[79],"include-dir"),lf[401]);}
else{
t8=t7;
f_4477(t8,C_SCHEME_END_OF_LIST);}}

/* quotewrap in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1441,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1448,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in ... */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1569,2,t0,t1);}
t2=C_mutate(&lf[81] /* (set! builtin-compile-options ...) */,t1);
t3=lf[82] /* translation-optimization-options */ =C_SCHEME_END_OF_LIST;;
t4=C_mutate(&lf[83] /* (set! compilation-optimization-options ...) */,C_retrieve2(lf[47],"default-compilation-optimization-options"));
t5=C_mutate(&lf[84] /* (set! linking-optimization-options ...) */,C_retrieve2(lf[49],"default-linking-optimization-options"));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4468,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k1447 in quotewrap in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in k1361 in k1359 in k1357 in k1355 in k1353 */
static void C_ccall f_1448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:92: qs */
t2=C_fast_retrieve(lf[25]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3545 in k3542 in k3523 */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3546,2,t0,t1);}
t2=C_a_i_list3(&a,3,C_retrieve2(lf[31],"rc-compiler"),((C_word*)t0)[2],t1);
/* csc.scm:871: string-intersperse */
t3=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k3542 in k3523 */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3546,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5415,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t5=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k4433 */
static void C_ccall f_4434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1097: print */
t2=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3536 in k3523 */
static void C_ccall f_3537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:870: command */
f_4302(((C_word*)t0)[2],t1);}

/* f_4428 in k4422 in k3648 in k3635 in k3632 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_4428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4434,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[201],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[202],t4);
/* csc.scm:1093: ##sys#print-to-string */
((C_proc3)C_fast_retrieve_symbol_proc(lf[153]))(3,*((C_word*)lf[153]+1),t2,t5);}

/* k4422 in k3648 in k3635 in k3632 in k3516 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4428,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1095: with-output-to-file */
t3=C_fast_retrieve(lf[154]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in k1363 in ... */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1502,2,t0,t1);}
t2=C_mutate(&lf[47] /* (set! default-compilation-optimization-options ...) */,t1);
t3=C_mutate(&lf[48] /* (set! best-compilation-optimization-options ...) */,C_retrieve2(lf[47],"default-compilation-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4608,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LDFLAGS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_LDFLAGS),C_fix(0));}}

/* k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in k1367 in k1365 in ... */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1507,2,t0,t1);}
t2=C_mutate(&lf[49] /* (set! default-linking-optimization-options ...) */,t1);
t3=C_mutate(&lf[50] /* (set! best-linking-optimization-options ...) */,C_retrieve2(lf[49],"default-linking-optimization-options"));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
t5=t4;
f_1512(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4605,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_FEATURES),C_fix(0));}}

/* k4416 in k4409 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in ... */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1065: copy-files */
f_4075(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k4409 in k4371 in k4369 in k4367 in k4365 in k3788 in k3776 in k3773 in k3741 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in ... */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4411,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_4375(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1066: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve2(lf[27],"home"),lf[158]);}}

/* k3117 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_3118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2773(t2,C_u_i_string_equal_p(lf[385],t1));}

/* f_4486 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4486,3,t0,t1,t2);}
/* csc.scm:248: g134 */
t3=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[396],t2,lf[397]);}

/* k4479 in k4476 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in ... */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4484,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:246: g106 */
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t1);}
else{
/* csc.scm:244: append */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}}

/* f_4484 in k4479 in k4476 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4484,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4486,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4492,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csc.scm:248: string-split */
t9=C_fast_retrieve(lf[223]);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t2,lf[398]);}

/* k4481 in k4479 in k4476 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:244: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in k1369 in ... */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1543,2,t0,t1);}
t2=C_mutate(&lf[71] /* (set! extra-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_MORE_LIBS),C_fix(0));}}

/* k3899 in k3896 in k3890 in k3886 in k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in ... */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:912: create-directory */
t2=C_fast_retrieve(lf[177]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}

/* k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in k4718 in ... */
static void C_ccall f_1547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1547,2,t0,t1);}
t2=C_mutate(&lf[72] /* (set! extra-shared-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4567,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4570,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4573,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4576,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3908 in k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:903: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* k2927 in k2930 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in ... */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2928,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2882,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2892,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2894,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2894(t12,t8,((C_word*)t0)[5]);}
else{
/* csc.scm:775: quit */
f_1394(((C_word*)t0)[6],lf[364],C_a_i_list(&a,1,((C_word*)t0)[7]));}}

/* k3917 in k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:906: string-append */
t2=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[180],t1);}

/* k4447 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4453,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
((C_proc2)C_fast_retrieve_symbol_proc(lf[140]))(2,*((C_word*)lf[140]+1),t3);}

/* k2930 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2931,2,t0,t1);}
t2=C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csc.scm:772: lset-difference */
t4=C_fast_retrieve(lf[365]);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[366]+1),t2,lf[367]);}

/* k2552 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[30] /* (set! c++-compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:801: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1812(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3830 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3834,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[69],"deployed"))){
/* csc.scm:929: make-pathname */
t3=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[174],t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3843,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:931: lib-path */
f_3999(t3);}}

/* k2945 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2855(t2,C_u_i_string_equal_p(lf[369],t1));}

/* k2568 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[32] /* (set! linker ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:801: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1812(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3832 in k3830 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3834,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3824 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:923: command */
f_4302(((C_word*)t0)[2],t1);}

/* k3827 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:924: string-append */
t2=*((C_word*)lf[119]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[2],lf[171],C_retrieve2(lf[45],"libchicken"),lf[172],t1,lf[173],((C_word*)((C_word*)t0)[3])[1]);}

/* k3852 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:913: command */
f_4302(((C_word*)t0)[2],t1);}

/* k2970 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2972,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:778: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),t2,((C_word*)t0)[2],lf[384]);}}

/* k3855 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:914: string-intersperse */
t2=C_fast_retrieve(lf[100]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_2977 in k2970 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2977,2,t0,t1);}
/* csc.scm:778: decompose-pathname */
t2=C_fast_retrieve(lf[370]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in ... */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4235,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4166,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4178,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4181,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* string->list */
t9=C_fast_retrieve(lf[126]);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k3842 in k3830 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:930: make-pathname */
t2=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_2982 in k2970 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2982,5,t0,t1,t2,t3,t4);}
t5=t4;
if(C_truep(t5)){
t6=t4;
if(C_truep((C_truep(C_i_equalp(t6,lf[371]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t6,lf[372]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:782: append */
t9=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,C_retrieve2(lf[53],"c-files"),t8);}
else{
if(C_truep(C_i_string_ci_equal_p(t4,lf[373]))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3019,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:784: append */
t9=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,C_retrieve2(lf[54],"rc-files"),t8);}
else{
t7=t4;
if(C_truep((C_truep(C_i_equalp(t7,lf[374]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[375]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[376]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[377]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t7,lf[378]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3030,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[3],"osx"))){
t9=C_a_i_cons(&a,2,lf[379],C_retrieve2(lf[80],"compile-options"));
t10=C_mutate(&lf[80] /* (set! compile-options ...) */,t9);
t11=t8;
f_3030(t11,t10);}
else{
t9=t8;
f_3030(t9,C_SCHEME_UNDEFINED);}}
else{
t8=t4;
if(C_truep((C_truep(C_i_equalp(t8,lf[380]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t8,lf[381]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t8,lf[382]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t9=lf[60] /* objc-mode */ =C_SCHEME_TRUE;;
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:791: append */
t12=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,C_retrieve2(lf[53],"c-files"),t11);}
else{
t9=C_retrieve2(lf[34],"object-extension");
t10=C_u_i_string_equal_p(t4,C_retrieve2(lf[34],"object-extension"));
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t10)){
t12=t11;
f_3064(t12,t10);}
else{
t12=C_retrieve2(lf[36],"library-extension");
t13=t11;
f_3064(t13,C_u_i_string_equal_p(t4,C_retrieve2(lf[36],"library-extension")));}}}}}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2993,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
/* csc.scm:780: append */
t8=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,C_retrieve2(lf[52],"scheme-files"),t7);}}

/* k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in ... */
static void C_ccall f_4229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4229,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4235,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4240,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1023: string-any */
t4=C_fast_retrieve(lf[127]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}}

/* quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in ... */
static void C_ccall f_4222(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4222,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4229,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4251,tmp=(C_word)a,a+=2,tmp);
/* csc.scm:1022: string-any */
t5=C_fast_retrieve(lf[127]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* k3877 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],lf[176],t1);}

/* k3870 in k3867 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3874,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm:921: linker-libraries */
f_4134(t2);}

/* k3873 in k3870 in k3867 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3874,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* csc.scm:917: append */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* k2991 */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[52] /* (set! scheme-files ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2536 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[29] /* (set! compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
/* csc.scm:801: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1812(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4213 in k4207 in fold in k4180 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in ... */
static void C_ccall f_4214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4214,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k3867 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3871,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:920: linker-options */
f_4107(t2);}

/* k3861 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:915: cons* */
t2=C_fast_retrieve(lf[125]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4207 in fold in k4180 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_fcall f_4208(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4208,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* csc.scm:1016: fold */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4183(t5,t2,t4);}

/* k4203 in fold in k4180 in k4233 in k4227 in quote-option in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in ... */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:1013: cons* */
t2=C_fast_retrieve(lf[125]);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_make_character(92),((C_word*)t0)[3],t1);}

/* k3896 in k3890 in k3886 in k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in ... */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3898,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_3738(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[88],"verbose"))){
/* csc.scm:911: print */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[178],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* csc.scm:912: create-directory */
t3=C_fast_retrieve(lf[177]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}}}

/* k4575 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in ... */
static void C_ccall f_4576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4579,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_retrieve2(lf[46],"default-library");
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),t2,lf[407],C_retrieve2(lf[46],"default-library"));}

/* k4578 in k4575 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in ... */
static void C_ccall f_4579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:222: string-append */
t2=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3890 in k3886 in k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3892,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm:909: directory-exists? */
t4=C_fast_retrieve(lf[179]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* k4569 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in ... */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5464,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t3=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4572 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in ... */
static void C_ccall f_4573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4573,2,t0,t1);}
t2=C_retrieve2(lf[46],"default-library");
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),lf[406]);
/* csc.scm:88: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t3,C_retrieve2(lf[46],"default-library"));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5858,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t4=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}}

/* k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_fcall f_2855(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2855,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* csc.scm:769: append */
t4=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_retrieve2(lf[86],"link-options"),t3);}
else{
t2=C_block_size(((C_word*)t0)[5]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* string->list */
t4=C_fast_retrieve(lf[126]);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}
else{
/* csc.scm:776: quit */
f_1394(((C_word*)t0)[6],lf[368],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k2857 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in ... */
static void C_ccall f_2859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[86] /* (set! link-options ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k3886 in k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_ccall f_3888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3888,2,t0,t1);}
t2=C_mutate(&lf[87] /* (set! target-filename ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_retrieve2(lf[87],"target-filename");
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5368,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t6=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_retrieve2(lf[87],"target-filename"));}

/* k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in k4715 in ... */
static void C_ccall f_4567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4567,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate(&lf[73] /* (set! default-library-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4558,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_LIB_NAME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_LIB_NAME),C_fix(0));}}

/* k3883 in k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_3884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3909,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[67],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3918,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:906: pathname-file */
t6=C_fast_retrieve(lf[163]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_retrieve2(lf[87],"target-filename"));}
else{
/* csc.scm:907: pathname-file */
t5=C_fast_retrieve(lf[163]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,C_retrieve2(lf[87],"target-filename"));}}

/* k3880 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3882,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3884,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[3],"osx"))?C_retrieve2(lf[67],"gui"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:899: make-pathname */
t6=C_fast_retrieve(lf[104]);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1],lf[185]);}
else{
t5=t3;
f_3884(2,t5,C_SCHEME_UNDEFINED);}}

/* k4557 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in ... */
static void C_ccall f_4558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:227: string-append */
t2=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[405],t1);}

/* k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in k4712 in ... */
static void C_ccall f_4555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4555,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_mutate(&lf[74] /* (set! default-shared-library-files ...) */,t2);
t4=C_mutate(&lf[75] /* (set! library-files ...) */,C_retrieve2(lf[73],"default-library-files"));
t5=C_mutate(&lf[76] /* (set! shared-library-files ...) */,C_retrieve2(lf[74],"default-shared-library-files"));
t6=lf[77] /* translate-options */ =C_SCHEME_END_OF_LIST;;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4543,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:236: make-pathname */
t9=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,lf[403],lf[404]);}

/* k2832 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2833,2,t0,t1);}
/* csc.scm:764: t-options */
f_1738(((C_word*)t0)[3],C_a_i_list(&a,2,lf[361],t1));}

/* k4545 in k4542 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in ... */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4546,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(C_retrieve2(lf[19],"chicken-prefix"))){
t3=C_a_i_list2(&a,2,C_retrieve2(lf[19],"chicken-prefix"),t2);
/* csc.scm:88: make-pathname */
t4=C_fast_retrieve(lf[104]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],t3,lf[402]);}
else{
t3=((C_word*)t0)[3];
f_1561(2,t3,t1);}}

/* k4542 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in k4709 in ... */
static void C_ccall f_4543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4546,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[22],"host-mode"))){
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME),C_fix(0));}}

/* k4533 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in k1390 in ... */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4534,2,t0,t1);}
t2=((C_word*)t0)[2];
f_4477(t2,C_a_i_list1(&a,1,t1));}

/* k2890 in k2927 in k2930 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm:774: append */
t2=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)((C_word*)t0)[3])[1]);}

/* map-loop408 in k2927 in k2930 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_fcall f_2894(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2894,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* csc.scm:774: g414 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4521 in map-loop111 in k4491 */
static void C_ccall f_4522(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4522,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4497(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4497(t6,((C_word*)t0)[5],t5);}}

/* k2175 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_fcall f_2176(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2176,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csc.scm:625: t-options */
f_1738(t2,C_a_i_list(&a,1,lf[269]));}

/* k2177 in k2175 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in ... */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_retrieve2(lf[88],"verbose"))){
t2=lf[88] /* verbose */ =C_fix(2);;
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=lf[88] /* verbose */ =C_SCHEME_TRUE;;
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k2918 in map-loop408 in k2927 in k2930 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in ... */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2894(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2894(t6,((C_word*)t0)[5],t5);}}

/* k2844 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[80] /* (set! compile-options ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2188 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in ... */
static void C_ccall f_2190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2190,2,t0,t1);}
t2=C_mutate(&lf[80] /* (set! compile-options ...) */,t1);
t3=C_a_i_cons(&a,2,lf[270],C_retrieve2(lf[86],"link-options"));
t4=C_mutate(&lf[86] /* (set! link-options ...) */,t3);
t5=((C_word*)t0)[2];
f_2176(t5,t4);}

/* f_3305 in k1944 in k1942 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in ... */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3305,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3308,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_length(C_retrieve2(lf[52],"scheme-files"));
t5=C_eqp(C_fix(1),t4);
t6=(C_truep(t5)?C_retrieve2(lf[87],"target-filename"):t2);
if(C_truep(C_retrieve2(lf[59],"cpp-mode"))){
/* csc.scm:809: pathname-replace-extension */
t7=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,lf[215]);}
else{
if(C_truep(C_retrieve2(lf[60],"objc-mode"))){
/* csc.scm:809: pathname-replace-extension */
t7=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,lf[216]);}
else{
/* csc.scm:809: pathname-replace-extension */
t7=C_fast_retrieve(lf[198]);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,lf[217]);}}}

/* k3307 */
static void C_ccall f_3308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3310,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3327,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3330,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3333,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[3];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5442,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:92: normalize-pathname */
t8=C_fast_retrieve(lf[26]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}

/* f_2882 in k2927 in k2930 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2882,3,t0,t1,t2);}
t3=C_a_i_string(&a,1,t2);
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),t1,lf[363],t3);}

/* k2878 in k2927 in k2930 in k2853 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in ... */
static void C_ccall f_2880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1812(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in ... */
static void C_fcall f_3808(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3808,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3828,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3831,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_retrieve2(lf[45],"libchicken");
/* ##sys#string-append */
((C_proc4)C_fast_retrieve_symbol_proc(lf[113]))(4,*((C_word*)lf[113]+1),t5,C_retrieve2(lf[45],"libchicken"),lf[175]);}
else{
t2=((C_word*)t0)[3];
f_3742(2,t2,C_SCHEME_UNDEFINED);}}

/* k3809 in k3806 in k3739 in k3737 in k3735 in k3732 in k1842 in k1837 in k1832 in k1830 in k1828 in k1825 in k1821 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in ... */
static void C_ccall f_3810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3810,2,t0,t1);}
t2=(C_truep(C_retrieve2(lf[67],"gui"))?C_i_not(C_retrieve2(lf[68],"deploy")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4339,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm:1055: open-output-string */
t5=C_fast_retrieve(lf[111]);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_3742(2,t4,t3);}}

/* k2816 in k2780 in k2771 in k2722 in k2720 in k2497 in k2010 in loop in k4455 in k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in ... */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[80] /* (set! compile-options ...) */,t1);
/* csc.scm:801: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1812(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k1575 in k1567 in k1560 in k4554 in k4566 in k1545 in k1541 in k1510 in k1505 in k1500 in k1496 in k1492 in k1486 in k1474 in k1470 in k1466 in k1462 in k1458 in k1454 in k1450 in k1417 in k1413 in ... */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1577,2,t0,t1);}
t2=C_mutate(&lf[85] /* (set! library-dir ...) */,t1);
t3=lf[86] /* link-options */ =C_SCHEME_END_OF_LIST;;
t4=lf[87] /* target-filename */ =C_SCHEME_FALSE;;
t5=lf[88] /* verbose */ =C_SCHEME_FALSE;;
t6=lf[89] /* keep-files */ =C_SCHEME_FALSE;;
t7=lf[90] /* translate-only */ =C_SCHEME_FALSE;;
t8=lf[91] /* compile-only */ =C_SCHEME_FALSE;;
t9=lf[92] /* to-stdout */ =C_SCHEME_FALSE;;
t10=lf[93] /* shared */ =C_SCHEME_FALSE;;
t11=lf[94] /* static */ =C_SCHEME_FALSE;;
t12=lf[95] /* static-libs */ =C_SCHEME_FALSE;;
t13=lf[96] /* required-extensions */ =C_SCHEME_END_OF_LIST;;
t14=C_mutate(&lf[97] /* (set! compiler-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3677,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[102] /* (set! lib-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3999,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[106] /* (set! copy-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4075,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[112] /* (set! linker-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4107,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate(&lf[116] /* (set! linker-libraries ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4134,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate(&lf[117] /* (set! constant811 ...) */,lf[118]);
t20=C_mutate(&lf[98] /* (set! quote-option ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4222,tmp=(C_word)a,a+=2,tmp));
t21=lf[128] /* last-exit-code */ =C_SCHEME_FALSE;;
t22=C_mutate(&lf[107] /* (set! command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4302,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate(&lf[137] /* (set! $delete-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4317,tmp=(C_word)a,a+=2,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4456,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4459,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4462,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
/* csc.scm:1120: get-environment-variable */
t28=C_fast_retrieve(lf[225]);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,lf[393]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[452] = {
{"f_1354:csc_2escm",(void*)f_1354},
{"f_1356:csc_2escm",(void*)f_1356},
{"f_1358:csc_2escm",(void*)f_1358},
{"f_2097:csc_2escm",(void*)f_2097},
{"f_1597:csc_2escm",(void*)f_1597},
{"f_1596:csc_2escm",(void*)f_1596},
{"f_1593:csc_2escm",(void*)f_1593},
{"f_1590:csc_2escm",(void*)f_1590},
{"f_1599:csc_2escm",(void*)f_1599},
{"f_2453:csc_2escm",(void*)f_2453},
{"f_1360:csc_2escm",(void*)f_1360},
{"f_1362:csc_2escm",(void*)f_1362},
{"f_1364:csc_2escm",(void*)f_1364},
{"f_1366:csc_2escm",(void*)f_1366},
{"f_1368:csc_2escm",(void*)f_1368},
{"f_2757:csc_2escm",(void*)f_2757},
{"f_2332:csc_2escm",(void*)f_2332},
{"f_2041:csc_2escm",(void*)f_2041},
{"f_2335:csc_2escm",(void*)f_2335},
{"f_2463:csc_2escm",(void*)f_2463},
{"f_2338:csc_2escm",(void*)f_2338},
{"f_2049:csc_2escm",(void*)f_2049},
{"f_2723:csc_2escm",(void*)f_2723},
{"f_2721:csc_2escm",(void*)f_2721},
{"f_2729:csc_2escm",(void*)f_2729},
{"f_2433:csc_2escm",(void*)f_2433},
{"f_2805:csc_2escm",(void*)f_2805},
{"f_1587:csc_2escm",(void*)f_1587},
{"f_2443:csc_2escm",(void*)f_2443},
{"f_2361:csc_2escm",(void*)f_2361},
{"f_4396:csc_2escm",(void*)f_4396},
{"f_2792:csc_2escm",(void*)f_2792},
{"f_3716:csc_2escm",(void*)f_3716},
{"f_2283:csc_2escm",(void*)f_2283},
{"f_2086:csc_2escm",(void*)f_2086},
{"f_2281:csc_2escm",(void*)f_2281},
{"f_2763:csc_2escm",(void*)f_2763},
{"f_4285:csc_2escm",(void*)f_4285},
{"f_1512:csc_2escm",(void*)f_1512},
{"f_4283:csc_2escm",(void*)f_4283},
{"f_4281:csc_2escm",(void*)f_4281},
{"f_4287:csc_2escm",(void*)f_4287},
{"f_2782:csc_2escm",(void*)f_2782},
{"f_2277:csc_2escm",(void*)f_2277},
{"f_4262:csc_2escm",(void*)f_4262},
{"f_4264:csc_2escm",(void*)f_4264},
{"f_4266:csc_2escm",(void*)f_4266},
{"f_4268:csc_2escm",(void*)f_4268},
{"f_4357:csc_2escm",(void*)f_4357},
{"f_4351:csc_2escm",(void*)f_4351},
{"f_4354:csc_2escm",(void*)f_4354},
{"f_4251:csc_2escm",(void*)f_4251},
{"f_4389:csc_2escm",(void*)f_4389},
{"f_4384:csc_2escm",(void*)f_4384},
{"f_4382:csc_2escm",(void*)f_4382},
{"f_4240:csc_2escm",(void*)f_4240},
{"f_1843:csc_2escm",(void*)f_1843},
{"f_3006:csc_2escm",(void*)f_3006},
{"f_2627:csc_2escm",(void*)f_2627},
{"f_2773:csc_2escm",(void*)f_2773},
{"f_1831:csc_2escm",(void*)f_1831},
{"f_3019:csc_2escm",(void*)f_3019},
{"f_1833:csc_2escm",(void*)f_1833},
{"f_1838:csc_2escm",(void*)f_1838},
{"f_2638:csc_2escm",(void*)f_2638},
{"f_4366:csc_2escm",(void*)f_4366},
{"f_4368:csc_2escm",(void*)f_4368},
{"f_4360:csc_2escm",(void*)f_4360},
{"toplevel:csc_2escm",(void*)C_toplevel},
{"f_1823:csc_2escm",(void*)f_1823},
{"f_1827:csc_2escm",(void*)f_1827},
{"f_1829:csc_2escm",(void*)f_1829},
{"f_3944:csc_2escm",(void*)f_3944},
{"f_3947:csc_2escm",(void*)f_3947},
{"f_3941:csc_2escm",(void*)f_3941},
{"f_2683:csc_2escm",(void*)f_2683},
{"f_2686:csc_2escm",(void*)f_2686},
{"f_2712:csc_2escm",(void*)f_2712},
{"f_4317:csc_2escm",(void*)f_4317},
{"f_2719:csc_2escm",(void*)f_2719},
{"f_4348:csc_2escm",(void*)f_4348},
{"f_4345:csc_2escm",(void*)f_4345},
{"f_4343:csc_2escm",(void*)f_4343},
{"f_4341:csc_2escm",(void*)f_4341},
{"f_1885:csc_2escm",(void*)f_1885},
{"f_1882:csc_2escm",(void*)f_1882},
{"f_1888:csc_2escm",(void*)f_1888},
{"f_3928:csc_2escm",(void*)f_3928},
{"f_4379:csc_2escm",(void*)f_4379},
{"f_4377:csc_2escm",(void*)f_4377},
{"f_4370:csc_2escm",(void*)f_4370},
{"f_4375:csc_2escm",(void*)f_4375},
{"f_4372:csc_2escm",(void*)f_4372},
{"f_1874:csc_2escm",(void*)f_1874},
{"f_1876:csc_2escm",(void*)f_1876},
{"f_1870:csc_2escm",(void*)f_1870},
{"f_1872:csc_2escm",(void*)f_1872},
{"f_1879:csc_2escm",(void*)f_1879},
{"f_3953:csc_2escm",(void*)f_3953},
{"f_3955:csc_2escm",(void*)f_3955},
{"f_3958:csc_2escm",(void*)f_3958},
{"f_3950:csc_2escm",(void*)f_3950},
{"f_4321:csc_2escm",(void*)f_4321},
{"f_1862:csc_2escm",(void*)f_1862},
{"f_1868:csc_2escm",(void*)f_1868},
{"f_4120:csc_2escm",(void*)f_4120},
{"f_4024:csc_2escm",(void*)f_4024},
{"f_2642:csc_2escm",(void*)f_2642},
{"f_2649:csc_2escm",(void*)f_2649},
{"f_1853:csc_2escm",(void*)f_1853},
{"f_1851:csc_2escm",(void*)f_1851},
{"f_1857:csc_2escm",(void*)f_1857},
{"f_1855:csc_2escm",(void*)f_1855},
{"f_1859:csc_2escm",(void*)f_1859},
{"f_4114:csc_2escm",(void*)f_4114},
{"f_3938:csc_2escm",(void*)f_3938},
{"f_3936:csc_2escm",(void*)f_3936},
{"f_4302:csc_2escm",(void*)f_4302},
{"f_3930:csc_2escm",(void*)f_3930},
{"f_4107:csc_2escm",(void*)f_4107},
{"f_4102:csc_2escm",(void*)f_4102},
{"f_4006:csc_2escm",(void*)f_4006},
{"f_3969:csc_2escm",(void*)f_3969},
{"f_3967:csc_2escm",(void*)f_3967},
{"f_3964:csc_2escm",(void*)f_3964},
{"f_3961:csc_2escm",(void*)f_3961},
{"f_4339:csc_2escm",(void*)f_4339},
{"f_3999:csc_2escm",(void*)f_3999},
{"f_3994:csc_2escm",(void*)f_3994},
{"f_3469:csc_2escm",(void*)f_3469},
{"f_2607:csc_2escm",(void*)f_2607},
{"f_2603:csc_2escm",(void*)f_2603},
{"f_3455:csc_2escm",(void*)f_3455},
{"f_1891:csc_2escm",(void*)f_1891},
{"f_2614:csc_2escm",(void*)f_2614},
{"f_2660:csc_2escm",(void*)f_2660},
{"f_4132:csc_2escm",(void*)f_4132},
{"f_4134:csc_2escm",(void*)f_4134},
{"f_2677:csc_2escm",(void*)f_2677},
{"f_2673:csc_2escm",(void*)f_2673},
{"f_3497:csc_2escm",(void*)f_3497},
{"f_3494:csc_2escm",(void*)f_3494},
{"f_3035:csc_2escm",(void*)f_3035},
{"f_3030:csc_2escm",(void*)f_3030},
{"f_3446:csc_2escm",(void*)f_3446},
{"f_3435:csc_2escm",(void*)f_3435},
{"f5862:csc_2escm",(void*)f5862},
{"f5866:csc_2escm",(void*)f5866},
{"f_1812:csc_2escm",(void*)f_1812},
{"f_3485:csc_2escm",(void*)f_3485},
{"f_1952:csc_2escm",(void*)f_1952},
{"f_2589:csc_2escm",(void*)f_2589},
{"f_2585:csc_2escm",(void*)f_2585},
{"f_3474:csc_2escm",(void*)f_3474},
{"f_3472:csc_2escm",(void*)f_3472},
{"f_1943:csc_2escm",(void*)f_1943},
{"f_1945:csc_2escm",(void*)f_1945},
{"f_3426:csc_2escm",(void*)f_3426},
{"f_1976:csc_2escm",(void*)f_1976},
{"f_1978:csc_2escm",(void*)f_1978},
{"f_2122:csc_2escm",(void*)f_2122},
{"f_3416:csc_2escm",(void*)f_3416},
{"f_2133:csc_2escm",(void*)f_2133},
{"f_1991:csc_2escm",(void*)f_1991},
{"f_1997:csc_2escm",(void*)f_1997},
{"f_2144:csc_2escm",(void*)f_2144},
{"f_1982:csc_2escm",(void*)f_1982},
{"f_1980:csc_2escm",(void*)f_1980},
{"f_2155:csc_2escm",(void*)f_2155},
{"f_4710:csc_2escm",(void*)f_4710},
{"f_4719:csc_2escm",(void*)f_4719},
{"f_4716:csc_2escm",(void*)f_4716},
{"f_4713:csc_2escm",(void*)f_4713},
{"f_3395:csc_2escm",(void*)f_3395},
{"f_4701:csc_2escm",(void*)f_4701},
{"f_2011:csc_2escm",(void*)f_2011},
{"f_2014:csc_2escm",(void*)f_2014},
{"f5395:csc_2escm",(void*)f5395},
{"f_3792:csc_2escm",(void*)f_3792},
{"f_3075:csc_2escm",(void*)f_3075},
{"f_3377:csc_2escm",(void*)f_3377},
{"f5388:csc_2escm",(void*)f5388},
{"f5383:csc_2escm",(void*)f5383},
{"f_3789:csc_2escm",(void*)f_3789},
{"f_1653:csc_2escm",(void*)f_1653},
{"f_1659:csc_2escm",(void*)f_1659},
{"f_3064:csc_2escm",(void*)f_3064},
{"f_3068:csc_2escm",(void*)f_3068},
{"f5373:csc_2escm",(void*)f5373},
{"f5378:csc_2escm",(void*)f5378},
{"f_3082:csc_2escm",(void*)f_3082},
{"f_2521:csc_2escm",(void*)f_2521},
{"f_3775:csc_2escm",(void*)f_3775},
{"f_3777:csc_2escm",(void*)f_3777},
{"f_4093:csc_2escm",(void*)f_4093},
{"f_4096:csc_2escm",(void*)f_4096},
{"f_1689:csc_2escm",(void*)f_1689},
{"f_4090:csc_2escm",(void*)f_4090},
{"f_3352:csc_2escm",(void*)f_3352},
{"f_4099:csc_2escm",(void*)f_4099},
{"f_3350:csc_2escm",(void*)f_3350},
{"f5363:csc_2escm",(void*)f5363},
{"f5368:csc_2escm",(void*)f5368},
{"f_2055:csc_2escm",(void*)f_2055},
{"f_1635:csc_2escm",(void*)f_1635},
{"f_3763:csc_2escm",(void*)f_3763},
{"f5494:csc_2escm",(void*)f5494},
{"f_3088:csc_2escm",(void*)f_3088},
{"f_4084:csc_2escm",(void*)f_4084},
{"f5499:csc_2escm",(void*)f5499},
{"f_4086:csc_2escm",(void*)f_4086},
{"f_4082:csc_2escm",(void*)f_4082},
{"f_1917:csc_2escm",(void*)f_1917},
{"f_4088:csc_2escm",(void*)f_4088},
{"f_1910:csc_2escm",(void*)f_1910},
{"f5353:csc_2escm",(void*)f5353},
{"f5358:csc_2escm",(void*)f5358},
{"f_4183:csc_2escm",(void*)f_4183},
{"f_4181:csc_2escm",(void*)f_4181},
{"f_1665:csc_2escm",(void*)f_1665},
{"f_3754:csc_2escm",(void*)f_3754},
{"f_1662:csc_2escm",(void*)f_1662},
{"f_2024:csc_2escm",(void*)f_2024},
{"f_4073:csc_2escm",(void*)f_4073},
{"f5400:csc_2escm",(void*)f5400},
{"f_3339:csc_2escm",(void*)f_3339},
{"f5405:csc_2escm",(void*)f5405},
{"f_4075:csc_2escm",(void*)f_4075},
{"f_4695:csc_2escm",(void*)f_4695},
{"f_3336:csc_2escm",(void*)f_3336},
{"f_3333:csc_2escm",(void*)f_3333},
{"f_1908:csc_2escm",(void*)f_1908},
{"f_4692:csc_2escm",(void*)f_4692},
{"f_3330:csc_2escm",(void*)f_3330},
{"f_4698:csc_2escm",(void*)f_4698},
{"f5348:csc_2escm",(void*)f5348},
{"f_3744:csc_2escm",(void*)f_3744},
{"f_3742:csc_2escm",(void*)f_3742},
{"f_2035:csc_2escm",(void*)f_2035},
{"f_4060:csc_2escm",(void*)f_4060},
{"f_3740:csc_2escm",(void*)f_3740},
{"f_3327:csc_2escm",(void*)f_3327},
{"f_4166:csc_2escm",(void*)f_4166},
{"f_2003:csc_2escm",(void*)f_2003},
{"f_3684:csc_2escm",(void*)f_3684},
{"f_3734:csc_2escm",(void*)f_3734},
{"f_2006:csc_2escm",(void*)f_2006},
{"f_3689:csc_2escm",(void*)f_3689},
{"f_3736:csc_2escm",(void*)f_3736},
{"f_3738:csc_2escm",(void*)f_3738},
{"f_4051:csc_2escm",(void*)f_4051},
{"f_4057:csc_2escm",(void*)f_4057},
{"f_4677:csc_2escm",(void*)f_4677},
{"f_3318:csc_2escm",(void*)f_3318},
{"f_3314:csc_2escm",(void*)f_3314},
{"f_3310:csc_2escm",(void*)f_3310},
{"f5322:csc_2escm",(void*)f5322},
{"f5327:csc_2escm",(void*)f5327},
{"f_3500:csc_2escm",(void*)f_3500},
{"f_3503:csc_2escm",(void*)f_3503},
{"f_1674:csc_2escm",(void*)f_1674},
{"f_3677:csc_2escm",(void*)f_3677},
{"f_4141:csc_2escm",(void*)f_4141},
{"f_4144:csc_2escm",(void*)f_4144},
{"f_1794:csc_2escm",(void*)f_1794},
{"f5442:csc_2escm",(void*)f5442},
{"f_4659:csc_2escm",(void*)f_4659},
{"f_4650:csc_2escm",(void*)f_4650},
{"f_1781:csc_2escm",(void*)f_1781},
{"f5437:csc_2escm",(void*)f5437},
{"f_3691:csc_2escm",(void*)f_3691},
{"f_4686:csc_2escm",(void*)f_4686},
{"f_4689:csc_2escm",(void*)f_4689},
{"f_1738:csc_2escm",(void*)f_1738},
{"f_1605:csc_2escm",(void*)f_1605},
{"f_4635:csc_2escm",(void*)f_4635},
{"f_4668:csc_2escm",(void*)f_4668},
{"f_3345:csc_2escm",(void*)f_3345},
{"f_1498:csc_2escm",(void*)f_1498},
{"f_1494:csc_2escm",(void*)f_1494},
{"f5484:csc_2escm",(void*)f5484},
{"f5489:csc_2escm",(void*)f5489},
{"f_1398:csc_2escm",(void*)f_1398},
{"f_1391:csc_2escm",(void*)f_1391},
{"f_1394:csc_2escm",(void*)f_1394},
{"f_4617:csc_2escm",(void*)f_4617},
{"f_4175:csc_2escm",(void*)f_4175},
{"f_3053:csc_2escm",(void*)f_3053},
{"f_4178:csc_2escm",(void*)f_4178},
{"f_1488:csc_2escm",(void*)f_1488},
{"f_1744:csc_2escm",(void*)f_1744},
{"f_1746:csc_2escm",(void*)f_1746},
{"f5474:csc_2escm",(void*)f5474},
{"f5479:csc_2escm",(void*)f5479},
{"f_1610:csc_2escm",(void*)f_1610},
{"f_4641:csc_2escm",(void*)f_4641},
{"f_1476:csc_2escm",(void*)f_1476},
{"f_1472:csc_2escm",(void*)f_1472},
{"f5469:csc_2escm",(void*)f5469},
{"f5464:csc_2escm",(void*)f5464},
{"f5450:csc_2escm",(void*)f5450},
{"f_4629:csc_2escm",(void*)f_4629},
{"f_1711:csc_2escm",(void*)f_1711},
{"f_3622:csc_2escm",(void*)f_3622},
{"f_3599:csc_2escm",(void*)f_3599},
{"f_1705:csc_2escm",(void*)f_1705},
{"f_3590:csc_2escm",(void*)f_3590},
{"f_3613:csc_2escm",(void*)f_3613},
{"f_3611:csc_2escm",(void*)f_3611},
{"f_4605:csc_2escm",(void*)f_4605},
{"f_4608:csc_2escm",(void*)f_4608},
{"f_2499:csc_2escm",(void*)f_2499},
{"f_3649:csc_2escm",(void*)f_3649},
{"f_1370:csc_2escm",(void*)f_1370},
{"f5858:csc_2escm",(void*)f5858},
{"f_3579:csc_2escm",(void*)f_3579},
{"f_2371:csc_2escm",(void*)f_2371},
{"f_3570:csc_2escm",(void*)f_3570},
{"f_3636:csc_2escm",(void*)f_3636},
{"f_3638:csc_2escm",(void*)f_3638},
{"f_3634:csc_2escm",(void*)f_3634},
{"f_1411:csc_2escm",(void*)f_1411},
{"f_1419:csc_2escm",(void*)f_1419},
{"f_2384:csc_2escm",(void*)f_2384},
{"f_1415:csc_2escm",(void*)f_1415},
{"f_2473:csc_2escm",(void*)f_2473},
{"f_3666:csc_2escm",(void*)f_3666},
{"f_1400:csc_2escm",(void*)f_1400},
{"f_1402:csc_2escm",(void*)f_1402},
{"f_1405:csc_2escm",(void*)f_1405},
{"f_3655:csc_2escm",(void*)f_3655},
{"f_2483:csc_2escm",(void*)f_2483},
{"f_3657:csc_2escm",(void*)f_3657},
{"f_1771:csc_2escm",(void*)f_1771},
{"f_1777:csc_2escm",(void*)f_1777},
{"f_3526:csc_2escm",(void*)f_3526},
{"f_3524:csc_2escm",(void*)f_3524},
{"f_3521:csc_2escm",(void*)f_3521},
{"f_4492:csc_2escm",(void*)f_4492},
{"f_3520:csc_2escm",(void*)f_3520},
{"f_4497:csc_2escm",(void*)f_4497},
{"f_3518:csc_2escm",(void*)f_3518},
{"f_3513:csc_2escm",(void*)f_3513},
{"f_4477:csc_2escm",(void*)f_4477},
{"f_2413:csc_2escm",(void*)f_2413},
{"f5420:csc_2escm",(void*)f5420},
{"f_4468:csc_2escm",(void*)f_4468},
{"f_2423:csc_2escm",(void*)f_2423},
{"f_4462:csc_2escm",(void*)f_4462},
{"f5410:csc_2escm",(void*)f5410},
{"f5415:csc_2escm",(void*)f5415},
{"f_1460:csc_2escm",(void*)f_1460},
{"f_1464:csc_2escm",(void*)f_1464},
{"f_1468:csc_2escm",(void*)f_1468},
{"f_4456:csc_2escm",(void*)f_4456},
{"f_3563:csc_2escm",(void*)f_3563},
{"f_4459:csc_2escm",(void*)f_4459},
{"f_4450:csc_2escm",(void*)f_4450},
{"f_4453:csc_2escm",(void*)f_4453},
{"f_1452:csc_2escm",(void*)f_1452},
{"f_1456:csc_2escm",(void*)f_1456},
{"f_3555:csc_2escm",(void*)f_3555},
{"f_2403:csc_2escm",(void*)f_2403},
{"f_3551:csc_2escm",(void*)f_3551},
{"f_1561:csc_2escm",(void*)f_1561},
{"f_1441:csc_2escm",(void*)f_1441},
{"f_1569:csc_2escm",(void*)f_1569},
{"f_1448:csc_2escm",(void*)f_1448},
{"f_3546:csc_2escm",(void*)f_3546},
{"f_3543:csc_2escm",(void*)f_3543},
{"f_4434:csc_2escm",(void*)f_4434},
{"f_3537:csc_2escm",(void*)f_3537},
{"f_4428:csc_2escm",(void*)f_4428},
{"f_4423:csc_2escm",(void*)f_4423},
{"f_1502:csc_2escm",(void*)f_1502},
{"f_1507:csc_2escm",(void*)f_1507},
{"f_4417:csc_2escm",(void*)f_4417},
{"f_4411:csc_2escm",(void*)f_4411},
{"f_3118:csc_2escm",(void*)f_3118},
{"f_4486:csc_2escm",(void*)f_4486},
{"f_4480:csc_2escm",(void*)f_4480},
{"f_4484:csc_2escm",(void*)f_4484},
{"f_4483:csc_2escm",(void*)f_4483},
{"f_1543:csc_2escm",(void*)f_1543},
{"f_3900:csc_2escm",(void*)f_3900},
{"f_1547:csc_2escm",(void*)f_1547},
{"f_3909:csc_2escm",(void*)f_3909},
{"f_2928:csc_2escm",(void*)f_2928},
{"f_3918:csc_2escm",(void*)f_3918},
{"f_4448:csc_2escm",(void*)f_4448},
{"f_2931:csc_2escm",(void*)f_2931},
{"f_2553:csc_2escm",(void*)f_2553},
{"f_3831:csc_2escm",(void*)f_3831},
{"f_2946:csc_2escm",(void*)f_2946},
{"f_2569:csc_2escm",(void*)f_2569},
{"f_3834:csc_2escm",(void*)f_3834},
{"f_3825:csc_2escm",(void*)f_3825},
{"f_3828:csc_2escm",(void*)f_3828},
{"f_3853:csc_2escm",(void*)f_3853},
{"f_2972:csc_2escm",(void*)f_2972},
{"f_3856:csc_2escm",(void*)f_3856},
{"f_2977:csc_2escm",(void*)f_2977},
{"f_4235:csc_2escm",(void*)f_4235},
{"f_3843:csc_2escm",(void*)f_3843},
{"f_2982:csc_2escm",(void*)f_2982},
{"f_4229:csc_2escm",(void*)f_4229},
{"f_4222:csc_2escm",(void*)f_4222},
{"f_3878:csc_2escm",(void*)f_3878},
{"f_3871:csc_2escm",(void*)f_3871},
{"f_3874:csc_2escm",(void*)f_3874},
{"f_2993:csc_2escm",(void*)f_2993},
{"f_2537:csc_2escm",(void*)f_2537},
{"f_4214:csc_2escm",(void*)f_4214},
{"f_3868:csc_2escm",(void*)f_3868},
{"f_3862:csc_2escm",(void*)f_3862},
{"f_4208:csc_2escm",(void*)f_4208},
{"f_4204:csc_2escm",(void*)f_4204},
{"f_3898:csc_2escm",(void*)f_3898},
{"f_4576:csc_2escm",(void*)f_4576},
{"f_4579:csc_2escm",(void*)f_4579},
{"f_3892:csc_2escm",(void*)f_3892},
{"f_4570:csc_2escm",(void*)f_4570},
{"f_4573:csc_2escm",(void*)f_4573},
{"f_2855:csc_2escm",(void*)f_2855},
{"f_2859:csc_2escm",(void*)f_2859},
{"f_3888:csc_2escm",(void*)f_3888},
{"f_4567:csc_2escm",(void*)f_4567},
{"f_3884:csc_2escm",(void*)f_3884},
{"f_3882:csc_2escm",(void*)f_3882},
{"f_4558:csc_2escm",(void*)f_4558},
{"f_4555:csc_2escm",(void*)f_4555},
{"f_2833:csc_2escm",(void*)f_2833},
{"f_4546:csc_2escm",(void*)f_4546},
{"f_4543:csc_2escm",(void*)f_4543},
{"f_4534:csc_2escm",(void*)f_4534},
{"f_2892:csc_2escm",(void*)f_2892},
{"f_2894:csc_2escm",(void*)f_2894},
{"f_4522:csc_2escm",(void*)f_4522},
{"f_2176:csc_2escm",(void*)f_2176},
{"f_2178:csc_2escm",(void*)f_2178},
{"f_2919:csc_2escm",(void*)f_2919},
{"f_2846:csc_2escm",(void*)f_2846},
{"f_2190:csc_2escm",(void*)f_2190},
{"f_3305:csc_2escm",(void*)f_3305},
{"f_3308:csc_2escm",(void*)f_3308},
{"f_2882:csc_2escm",(void*)f_2882},
{"f_2880:csc_2escm",(void*)f_2880},
{"f_3808:csc_2escm",(void*)f_3808},
{"f_3810:csc_2escm",(void*)f_3810},
{"f_2818:csc_2escm",(void*)f_2818},
{"f_1577:csc_2escm",(void*)f_1577},
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
S|  for-each		7
S|  sprintf		5
S|  printf		2
S|  map		6
S|  fprintf		1
o|eliminated procedure checks: 76 
o|specializations:
o|  2 (zero? fixnum)
o|  1 (= fixnum fixnum)
o|  6 (string-ref string fixnum)
o|  4 (string=? string string)
o|  4 (> fixnum fixnum)
o|  4 (string-length string)
o|  65 (eqv? (not float) *)
o|  4 (cdr pair)
o|  3 (##sys#check-list (or pair list) *)
o|  8 (string-append string string)
o|  1 (current-error-port)
o|  3 (memq * list)
o|Removed `not' forms: 5 
o|substituted constant variable: a1392 
o|merged explicitly consed rest parameter: args8 
o|inlining procedure: k1432 
o|inlining procedure: k1432 
o|substituted constant variable: default-translation-optimization-options 
o|inlining procedure: k3694 
o|inlining procedure: k3694 
o|inlining procedure: k3721 
o|inlining procedure: k3721 
o|substituted constant variable: nonstatic-compilation-options 
o|propagated global variable: a37204725 nonstatic-compilation-options 
o|propagated global variable: tmp649651 static 
o|propagated global variable: tmp649651 static 
o|inlining procedure: k4005 
o|inlining procedure: k4005 
o|inlining procedure: k4104 
o|inlining procedure: k4104 
o|inlining procedure: k4116 
o|inlining procedure: k4116 
o|contracted procedure: k4124 
o|propagated global variable: r4125 mingw 
o|inlining procedure: k4121 
o|inlining procedure: k4121 
o|inlining procedure: k4146 
o|inlining procedure: k4146 
o|propagated global variable: tmp805807 static 
o|propagated global variable: tmp805807 static 
o|propagated global variable: tmp802804 static 
o|inlining procedure: k4157 
o|propagated global variable: tmp802804 static 
o|inlining procedure: k4157 
o|propagated global variable: r41584737 static-libs 
o|inlining procedure: k4225 
o|inlining procedure: k4225 
o|contracted procedure: "(csc.scm:1026) cleanup" 
o|inlining procedure: k4167 
o|inlining procedure: k4167 
o|inlining procedure: k4186 
o|inlining procedure: k4186 
o|inlining procedure: k4244 
o|inlining procedure: k4244 
o|inlining procedure: k4305 
o|inlining procedure: k4305 
o|contracted procedure: "(csc.scm:1044) $system" 
o|inlining procedure: k4270 
o|inlining procedure: k4270 
o|propagated global variable: out850854 ##sys#standard-output 
o|inlining procedure: k4322 
o|inlining procedure: k4322 
o|contracted procedure: "(csc.scm:1118) run" 
o|merged explicitly consed rest parameter: os215 
o|merged explicitly consed rest parameter: n218 
o|inlining procedure: k1749 
o|inlining procedure: k1749 
o|consed rest parameter at call site: "(csc.scm:518) quit" 2 
o|inlining procedure: k1761 
o|inlining procedure: k1761 
o|inlining procedure: k1788 
o|inlining procedure: k1788 
o|inlining procedure: k1801 
o|inlining procedure: k1801 
o|inlining procedure: k1815 
o|inlining procedure: k1839 
o|inlining procedure: k1839 
o|contracted procedure: "(csc.scm:580) run-linking" 
o|inlining procedure: k3745 
o|inlining procedure: k3745 
o|inlining procedure: k3757 
o|inlining procedure: k3757 
o|propagated global variable: g752754 generated-object-files 
o|inlining procedure: k3778 
o|contracted procedure: "(csc.scm:943) create-mac-bundle" 
o|inlining procedure: k4378 
o|inlining procedure: k4378 
o|inlining procedure: k3778 
o|contracted procedure: "(csc.scm:938) copy-libraries" 
o|inlining procedure: k4059 
o|inlining procedure: k4059 
o|substituted constant variable: a4070 
o|contracted procedure: "(csc.scm:967) target-lib-path" 
o|inlining procedure: k4025 
o|inlining procedure: k4025 
o|inlining procedure: k4037 
o|inlining procedure: k4037 
o|propagated global variable: tmp737739 static 
o|inlining procedure: k3803 
o|propagated global variable: tmp737739 static 
o|inlining procedure: k3803 
o|propagated global variable: r38044785 static-libs 
o|inlining procedure: k3811 
o|contracted procedure: "(csc.scm:936) rez" 
o|inlining procedure: k3811 
o|inlining procedure: k3832 
o|inlining procedure: k3832 
o|substituted constant variable: a3845 
o|inlining procedure: k3848 
o|inlining procedure: k3848 
o|propagated global variable: r38494794 host-mode 
o|substituted constant variable: link-output-flag 
o|substituted constant variable: link-output-flag 
o|inlining procedure: k3893 
o|inlining procedure: k3893 
o|inlining procedure: k3908 
o|inlining procedure: k3908 
o|inlining procedure: k3972 
o|inlining procedure: k3972 
o|propagated global variable: g675679 object-files 
o|inlining procedure: k1893 
o|inlining procedure: k1893 
o|propagated global variable: out253257 ##sys#standard-output 
o|contracted procedure: "(csc.scm:569) run-compilation" 
o|substituted constant variable: compile-only-flag 
o|inlining procedure: k3504 
o|inlining procedure: k3504 
o|substituted constant variable: compile-output-flag 
o|substituted constant variable: compile-output-flag 
o|inlining procedure: k3556 
o|inlining procedure: k3556 
o|inlining procedure: k3573 
o|inlining procedure: k3573 
o|propagated global variable: g616618 generated-rc-files 
o|inlining procedure: k3593 
o|inlining procedure: k3593 
o|propagated global variable: g599601 generated-c-files 
o|inlining procedure: k3616 
o|inlining procedure: k3616 
o|propagated global variable: g578580 rc-files 
o|contracted procedure: "(csc.scm:864) create-win-manifest" 
o|inlining procedure: k3660 
o|inlining procedure: k3660 
o|propagated global variable: g549551 c-files 
o|inlining procedure: k1911 
o|inlining procedure: k1911 
o|inlining procedure: k1925 
o|propagated global variable: a19244817 object-files 
o|inlining procedure: k1925 
o|propagated global variable: a19244818 c-files 
o|consed rest parameter at call site: "(csc.scm:550) quit" 2 
o|contracted procedure: "(csc.scm:565) run-translation" 
o|inlining procedure: k3355 
o|inlining procedure: k3355 
o|inlining procedure: k3382 
o|inlining procedure: k3382 
o|inlining procedure: k3400 
o|inlining procedure: k3400 
o|substituted constant variable: a3408 
o|inlining procedure: k3417 
o|substituted constant variable: generated-scheme-files 
o|inlining procedure: k3417 
o|inlining procedure: k3429 
o|inlining procedure: k3429 
o|substituted constant variable: generated-scheme-files 
o|substituted constant variable: generated-scheme-files 
o|inlining procedure: k3449 
o|inlining procedure: k3449 
o|propagated global variable: g473475 scheme-files 
o|inlining procedure: k1950 
o|inlining procedure: k1950 
o|contracted procedure: "(csc.scm:539) builtin-link-options" 
o|inlining procedure: k1613 
o|inlining procedure: k1613 
o|inlining procedure: k1594 
o|inlining procedure: k1594 
o|inlining procedure: k1664 
o|inlining procedure: k1664 
o|inlining procedure: k1673 
o|inlining procedure: k1673 
o|inlining procedure: k1815 
o|contracted procedure: "(csc.scm:587) usage" 
o|inlining procedure: k2028 
o|inlining procedure: k2028 
o|inlining procedure: k2056 
o|inlining procedure: k2056 
o|inlining procedure: k2077 
o|inlining procedure: k2077 
o|inlining procedure: k2099 
o|inlining procedure: k2099 
o|inlining procedure: k2115 
o|inlining procedure: k2115 
o|inlining procedure: k2137 
o|inlining procedure: k2137 
o|inlining procedure: k2159 
o|inlining procedure: k2159 
o|inlining procedure: k2179 
o|inlining procedure: k2179 
o|consed rest parameter at call site: "(csc.scm:625) t-options211" 1 
o|inlining procedure: k2195 
o|consed rest parameter at call site: "(csc.scm:631) t-options211" 1 
o|inlining procedure: k2195 
o|consed rest parameter at call site: "(csc.scm:634) t-options211" 1 
o|inlining procedure: k2222 
o|consed rest parameter at call site: "(csc.scm:637) t-options211" 1 
o|inlining procedure: k2222 
o|inlining procedure: k2241 
o|inlining procedure: k2241 
o|inlining procedure: k2255 
o|inlining procedure: k2255 
o|consed rest parameter at call site: "(csc.scm:647) t-options211" 1 
o|consed rest parameter at call site: "(csc.scm:645) check212" 3 
o|inlining procedure: k2295 
o|inlining procedure: k2295 
o|inlining procedure: k2311 
o|inlining procedure: k2311 
o|inlining procedure: k2347 
o|inlining procedure: k2347 
o|inlining procedure: k2362 
o|inlining procedure: k2362 
o|consed rest parameter at call site: "(csc.scm:671) check212" 3 
o|inlining procedure: k2375 
o|consed rest parameter at call site: "(csc.scm:676) check212" 3 
o|inlining procedure: k2375 
o|inlining procedure: k2404 
o|inlining procedure: k2404 
o|inlining procedure: k2424 
o|inlining procedure: k2424 
o|inlining procedure: k2444 
o|inlining procedure: k2444 
o|inlining procedure: k2464 
o|inlining procedure: k2464 
o|inlining procedure: k2484 
o|inlining procedure: k2484 
o|inlining procedure: k2503 
o|inlining procedure: k2503 
o|consed rest parameter at call site: "(csc.scm:698) check212" 3 
o|inlining procedure: k2530 
o|consed rest parameter at call site: "(csc.scm:702) check212" 3 
o|inlining procedure: k2530 
o|consed rest parameter at call site: "(csc.scm:706) check212" 3 
o|inlining procedure: k2562 
o|consed rest parameter at call site: "(csc.scm:710) check212" 3 
o|inlining procedure: k2562 
o|consed rest parameter at call site: "(csc.scm:714) check212" 3 
o|inlining procedure: k2596 
o|consed rest parameter at call site: "(csc.scm:717) check212" 3 
o|inlining procedure: k2596 
o|inlining procedure: k2631 
o|consed rest parameter at call site: "(csc.scm:723) check212" 3 
o|inlining procedure: k2631 
o|inlining procedure: k2665 
o|inlining procedure: k2665 
o|substituted constant variable: a2687 
o|contracted procedure: k2691 
o|propagated global variable: r2692 mingw 
o|inlining procedure: k2688 
o|inlining procedure: k2688 
o|consed rest parameter at call site: "(csc.scm:727) check212" 3 
o|inlining procedure: k2697 
o|inlining procedure: k2697 
o|inlining procedure: k2713 
o|inlining procedure: k2713 
o|inlining procedure: k2726 
o|inlining procedure: k2726 
o|consed rest parameter at call site: "(csc.scm:746) t-options211" 1 
o|inlining procedure: k2750 
o|consed rest parameter at call site: "(csc.scm:751) t-options211" 1 
o|consed rest parameter at call site: "(csc.scm:748) check212" 3 
o|inlining procedure: k2750 
o|consed rest parameter at call site: "(csc.scm:754) t-options211" 1 
o|inlining procedure: k2777 
o|inlining procedure: k2796 
o|inlining procedure: k2796 
o|inlining procedure: k2822 
o|consed rest parameter at call site: "(csc.scm:764) t-options211" 1 
o|inlining procedure: k2822 
o|inlining procedure: k2840 
o|inlining procedure: k2840 
o|inlining procedure: k2850 
o|inlining procedure: k2850 
o|inlining procedure: k2871 
o|substituted constant variable: a2886 
o|inlining procedure: k2897 
o|inlining procedure: k2897 
o|inlining procedure: k2871 
o|consed rest parameter at call site: "(csc.scm:775) quit" 2 
o|consed rest parameter at call site: "(csc.scm:776) quit" 2 
o|substituted constant variable: a2938 
o|substituted constant variable: a2943 
o|substituted constant variable: a2950 
o|substituted constant variable: a2954 
o|substituted constant variable: a2957 
o|substituted constant variable: a2960 
o|substituted constant variable: a2963 
o|substituted constant variable: a2966 
o|inlining procedure: k2777 
o|contracted procedure: k2987 
o|inlining procedure: k2984 
o|inlining procedure: k3010 
o|inlining procedure: k3010 
o|inlining procedure: k3043 
o|inlining procedure: k3043 
o|inlining procedure: k2984 
o|inlining procedure: k3083 
o|inlining procedure: k3083 
o|consed rest parameter at call site: "(csc.scm:800) quit" 2 
o|substituted constant variable: a3097 
o|substituted constant variable: a3106 
o|substituted constant variable: a3110 
o|substituted constant variable: a3115 
o|substituted constant variable: a3122 
o|substituted constant variable: constant62 
o|substituted constant variable: constant59 
o|substituted constant variable: constant66 
o|substituted constant variable: a3125 
o|substituted constant variable: a3134 
o|substituted constant variable: a3136 
o|substituted constant variable: a3138 
o|substituted constant variable: a3140 
o|substituted constant variable: a3142 
o|substituted constant variable: a3144 
o|substituted constant variable: a3146 
o|substituted constant variable: a3148 
o|substituted constant variable: a3150 
o|substituted constant variable: a3152 
o|substituted constant variable: a3154 
o|substituted constant variable: a3159 
o|substituted constant variable: a3161 
o|inlining procedure: k3164 
o|inlining procedure: k3164 
o|substituted constant variable: a3171 
o|substituted constant variable: a3173 
o|substituted constant variable: a3175 
o|substituted constant variable: a3177 
o|substituted constant variable: a3179 
o|substituted constant variable: a3181 
o|substituted constant variable: a3183 
o|substituted constant variable: a3185 
o|substituted constant variable: a3187 
o|substituted constant variable: a3189 
o|substituted constant variable: a3191 
o|substituted constant variable: a3193 
o|substituted constant variable: a3198 
o|substituted constant variable: a3200 
o|substituted constant variable: a3205 
o|substituted constant variable: a3207 
o|substituted constant variable: a3209 
o|substituted constant variable: a3211 
o|substituted constant variable: a3213 
o|substituted constant variable: a3215 
o|substituted constant variable: a3217 
o|substituted constant variable: a3219 
o|substituted constant variable: a3224 
o|substituted constant variable: a3226 
o|substituted constant variable: a3231 
o|substituted constant variable: a3233 
o|substituted constant variable: a3235 
o|substituted constant variable: a3237 
o|substituted constant variable: a3239 
o|substituted constant variable: a3244 
o|substituted constant variable: a3246 
o|substituted constant variable: a3251 
o|substituted constant variable: a3253 
o|substituted constant variable: a3258 
o|substituted constant variable: a3260 
o|substituted constant variable: a3265 
o|substituted constant variable: a3267 
o|substituted constant variable: a3269 
o|substituted constant variable: a3271 
o|substituted constant variable: a3273 
o|substituted constant variable: a3275 
o|substituted constant variable: a3277 
o|substituted constant variable: a3279 
o|substituted constant variable: a3281 
o|substituted constant variable: a3283 
o|substituted constant variable: a3285 
o|substituted constant variable: a3287 
o|substituted constant variable: a3289 
o|substituted constant variable: a3291 
o|substituted constant variable: a3293 
o|substituted constant variable: a3298 
o|substituted constant variable: a3300 
o|inlining procedure: k4463 
o|inlining procedure: k4463 
o|inlining procedure: k4467 
o|inlining procedure: k4467 
o|inlining procedure: k4500 
o|inlining procedure: k4500 
o|inlining procedure: k4481 
o|inlining procedure: k4481 
o|inlining procedure: k4545 
o|inlining procedure: k4545 
o|inlining procedure: k4557 
o|inlining procedure: k4557 
o|substituted constant variable: a4580 
o|folded constant expression: (string->list (quote "PHhsfiENxubvwAOeWkctgSJM")) 
o|inlining procedure: k4607 
o|inlining procedure: k4607 
o|inlining procedure: k4616 
o|inlining procedure: k4616 
o|inlining procedure: k4636 
o|inlining procedure: k4636 
o|propagated global variable: r46374975 cygwin 
o|inlining procedure: k4640 
o|inlining procedure: k4640 
o|inlining procedure: k4649 
o|inlining procedure: k4649 
o|inlining procedure: k4658 
o|inlining procedure: k4658 
o|inlining procedure: k4667 
o|inlining procedure: k4667 
o|inlining procedure: k4676 
o|inlining procedure: k4676 
o|inlining procedure: k4700 
o|inlining procedure: k4700 
o|simplifications: ((if . 2)) 
o|replaced variables: 474 
o|removed binding forms: 206 
o|removed side-effect free assignment to unused variable: link-output-flag 
o|removed side-effect free assignment to unused variable: compile-output-flag 
o|removed side-effect free assignment to unused variable: default-translation-optimization-options 
o|removed side-effect free assignment to unused variable: constant59 
o|removed side-effect free assignment to unused variable: constant62 
o|removed side-effect free assignment to unused variable: constant66 
o|contracted procedure: k1517 
o|removed side-effect free assignment to unused variable: generated-scheme-files 
o|removed side-effect free assignment to unused variable: compile-only-flag 
o|substituted constant variable: a37204724 
o|substituted constant variable: nonstatic-compilation-options 
o|substituted constant variable: a41034728 
o|substituted constant variable: a41034729 
o|substituted constant variable: a41154730 
o|substituted constant variable: a41154731 
o|substituted constant variable: r41224732 
o|propagated global variable: r41584736 static 
o|substituted constant variable: f_41854742 
o|substituted constant variable: r42714748 
o|substituted constant variable: r42714751 
o|substituted constant variable: r17624758 
o|substituted constant variable: r17624758 
o|inlining procedure: k1788 
o|inlining procedure: k1788 
o|substituted constant variable: a17874763 
o|substituted constant variable: a40584777 
o|inlining procedure: k4059 
o|substituted constant variable: r40384782 
o|propagated global variable: r38044783 static 
o|propagated global variable: a38024786 static-libs 
o|inlining procedure: k3899 
o|substituted constant variable: a18924801 
o|substituted constant variable: a18924802 
o|substituted constant variable: r35054804 
o|substituted constant variable: a33814821 
o|inlining procedure: k3382 
o|inlining procedure: k3382 
o|substituted constant variable: a33994823 
o|inlining procedure: k3400 
o|inlining procedure: k3400 
o|substituted constant variable: r15954839 
o|substituted constant variable: r15954839 
o|substituted constant variable: a16634841 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|substituted constant variable: r26894918 
o|inlining procedure: k2012 
o|substituted constant variable: r26984921 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|inlining procedure: k2012 
o|substituted constant variable: r44644956 
o|substituted constant variable: r44644956 
o|substituted constant variable: r44824964 
o|substituted constant variable: r44824964 
o|replaced variables: 62 
o|removed binding forms: 513 
o|removed conditional forms: 1 
o|removed side-effect free assignment to unused variable: nonstatic-compilation-options 
o|substituted constant variable: r1518 
o|inlining procedure: "(csc.scm:983) quotewrap" 
o|inlining procedure: "(csc.scm:982) quotewrap" 
o|inlining procedure: k4148 
o|propagated global variable: r41495329 static 
o|inlining procedure: k4148 
o|propagated global variable: r41495330 static-libs 
o|inlining procedure: k4314 
o|propagated global variable: a43135333 last-exit-code 
o|inlining procedure: k4314 
o|propagated global variable: a43135334 last-exit-code 
o|inlining procedure: k4320 
o|substituted constant variable: a17874992 
o|substituted constant variable: a17874993 
o|substituted constant variable: a40584998 
o|inlining procedure: k4028 
o|inlining procedure: k4028 
o|inlining procedure: k3793 
o|propagated global variable: r37945343 gui 
o|inlining procedure: k3793 
o|propagated global variable: r38044783 static 
o|inlining procedure: "(csc.scm:1057) quotewrap" 
o|inlining procedure: "(csc.scm:1056) quotewrap" 
o|inlining procedure: "(csc.scm:926) quotewrap" 
o|inlining procedure: "(csc.scm:919) quotewrap" 
o|propagated global variable: str305361 target-filename 
o|inlining procedure: "(csc.scm:908) quotewrap" 
o|propagated global variable: str305366 target-filename 
o|inlining procedure: "(csc.scm:901) quotewrap" 
o|inlining procedure: "(csc.scm:900) quotewrap" 
o|inlining procedure: "(csc.scm:894) quotewrap" 
o|propagated global variable: str305381 target-filename 
o|inlining procedure: "(csc.scm:893) quotewrap" 
o|inlining procedure: "(csc.scm:579) quotewrap" 
o|inlining procedure: "(csc.scm:578) quotewrap" 
o|propagated global variable: str305398 target-filename 
o|inlining procedure: "(csc.scm:853) quotewrap" 
o|inlining procedure: "(csc.scm:852) quotewrap" 
o|inlining procedure: "(csc.scm:872) quotewrap" 
o|inlining procedure: "(csc.scm:872) quotewrap" 
o|inlining procedure: k1895 
o|inlining procedure: k1930 
o|substituted constant variable: a33815018 
o|substituted constant variable: a33815019 
o|inlining procedure: "(csc.scm:822) quotewrap" 
o|inlining procedure: "(csc.scm:818) quotewrap" 
o|substituted constant variable: a33995020 
o|substituted constant variable: a33995021 
o|inlining procedure: k1979 
o|inlining procedure: k1642 
o|inlining procedure: "(csc.scm:220) quotewrap" 
o|inlining procedure: "(csc.scm:109) quotewrap" 
o|inlining procedure: "(csc.scm:108) quotewrap" 
o|inlining procedure: "(csc.scm:107) quotewrap" 
o|inlining procedure: "(csc.scm:106) quotewrap" 
o|inlining procedure: "(csc.scm:105) quotewrap" 
o|inlining procedure: "(csc.scm:99) quotewrap" 
o|inlining procedure: "(csc.scm:95) quotewrap" 
o|removed binding forms: 201 
o|Removed `not' forms: 2 
o|substituted constant variable: r40295339 
o|contracted procedure: k4028 
o|propagated global variable: r4029 host-mode 
o|substituted constant variable: r40295341 
o|substituted constant variable: r37945344 
o|contracted procedure: k1895 
o|propagated global variable: r1896 shared 
o|substituted constant variable: r18965430 
o|substituted constant variable: r19315431 
o|substituted constant variable: r16435454 
o|substituted constant variable: short-options 
o|replaced variables: 42 
o|removed binding forms: 18 
o|removed conditional forms: 6 
o|removed side-effect free assignment to unused variable: short-options 
o|removed binding forms: 48 
o|removed binding forms: 1 
o|simplifications: ((if . 35) (##core#call . 308)) 
o|  call simplifications:
o|    assq
o|    ##sys#call-with-values
o|    string-ci=?
o|    ##sys#size	4
o|    fx>	4
o|    string
o|    string->number
o|    cadr
o|    cdr	14
o|    number?
o|    first	2
o|    ##sys#list
o|    ##sys#fudge	2
o|    member	6
o|    string=?	2
o|    number->string
o|    length	2
o|    >=	2
o|    eq?	75
o|    zero?	2
o|    char=?	7
o|    string->list	2
o|    null?	8
o|    car	16
o|    memq	4
o|    char-whitespace?	2
o|    list->string
o|    not	8
o|    ##sys#check-list	10
o|    pair?	13
o|    cons	41
o|    ##sys#setslot	6
o|    ##sys#slot	26
o|    list	31
o|    ##sys#apply
o|    write-char	8
o|contracted procedure: k1372 
o|contracted procedure: k1376 
o|contracted procedure: k1381 
o|contracted procedure: k1385 
o|contracted procedure: k1421 
o|contracted procedure: k1425 
o|contracted procedure: k1438 
o|contracted procedure: k1549 
o|contracted procedure: k1553 
o|contracted procedure: k4535 
o|contracted procedure: k1562 
o|contracted procedure: k3685 
o|contracted procedure: k3696 
o|contracted procedure: k3699 
o|contracted procedure: k3708 
o|contracted procedure: k3718 
o|contracted procedure: k3723 
o|inlining procedure: k4146 
o|inlining procedure: k4146 
o|contracted procedure: k4188 
o|contracted procedure: k4191 
o|contracted procedure: k4196 
o|contracted procedure: k4217 
o|contracted procedure: k4242 
o|contracted procedure: k4273 
o|inlining procedure: k4307 
o|inlining procedure: k4307 
o|contracted procedure: k4277 
o|contracted procedure: k1758 
o|contracted procedure: k1764 
o|inlining procedure: k1751 
o|contracted procedure: k1761 
o|inlining procedure: k1751 
o|contracted procedure: k1783 
o|contracted procedure: k1798 
o|contracted procedure: k1805 
o|contracted procedure: k1817 
o|contracted procedure: k3730 
o|contracted procedure: k3748 
o|contracted procedure: k3759 
o|contracted procedure: k3768 
o|contracted procedure: k3771 
o|propagated global variable: g752754 generated-object-files 
o|contracted procedure: k3781 
o|contracted procedure: k4404 
o|contracted procedure: k4401 
o|contracted procedure: k4398 
o|contracted procedure: k4064 
o|contracted procedure: k4034 
o|contracted procedure: k3814 
o|contracted procedure: k3846 
o|contracted procedure: k3858 
o|contracted procedure: k3864 
o|contracted procedure: k3910 
o|contracted procedure: k3922 
o|contracted procedure: k3974 
o|contracted procedure: k3977 
o|contracted procedure: k3986 
o|contracted procedure: k3996 
o|propagated global variable: g675679 object-files 
o|contracted procedure: k1847 
o|contracted procedure: k3476 
o|contracted procedure: k3480 
o|contracted procedure: k3490 
o|contracted procedure: k3487 
o|contracted procedure: k3504 
o|contracted procedure: k3514 
o|contracted procedure: k3528 
o|contracted procedure: k3532 
o|contracted procedure: k3539 
o|contracted procedure: k3547 
o|contracted procedure: k3559 
o|contracted procedure: k3564 
o|contracted procedure: k3575 
o|contracted procedure: k3584 
o|contracted procedure: k3587 
o|propagated global variable: g616618 generated-rc-files 
o|contracted procedure: k3595 
o|contracted procedure: k3604 
o|contracted procedure: k3607 
o|propagated global variable: g599601 generated-c-files 
o|contracted procedure: k3618 
o|contracted procedure: k3627 
o|contracted procedure: k3630 
o|propagated global variable: g578580 rc-files 
o|contracted procedure: k3640 
o|contracted procedure: k3644 
o|contracted procedure: k4442 
o|contracted procedure: k4439 
o|contracted procedure: k4436 
o|contracted procedure: k3662 
o|contracted procedure: k3671 
o|contracted procedure: k3674 
o|propagated global variable: g549551 c-files 
o|contracted procedure: k1904 
o|contracted procedure: k1927 
o|contracted procedure: k1936 
o|contracted procedure: k1930 
o|contracted procedure: k3320 
o|contracted procedure: k3323 
o|contracted procedure: k3387 
o|contracted procedure: k3341 
o|contracted procedure: k3346 
o|contracted procedure: k3357 
o|contracted procedure: k3360 
o|contracted procedure: k3369 
o|contracted procedure: k3379 
o|contracted procedure: k3410 
o|contracted procedure: k3405 
o|contracted procedure: k3397 
o|contracted procedure: k3412 
o|contracted procedure: k3420 
o|contracted procedure: k3431 
o|contracted procedure: k3440 
o|contracted procedure: k3443 
o|contracted procedure: k3451 
o|contracted procedure: k3460 
o|contracted procedure: k3463 
o|propagated global variable: g473475 scheme-files 
o|contracted procedure: k1957 
o|contracted procedure: k1963 
o|contracted procedure: k1965 
o|contracted procedure: k1969 
o|contracted procedure: k1615 
o|contracted procedure: k1618 
o|contracted procedure: k1627 
o|contracted procedure: k1637 
o|contracted procedure: k1642 
o|contracted procedure: k1666 
o|contracted procedure: k2007 
o|contracted procedure: k2018 
o|contracted procedure: k2020 
o|contracted procedure: k1731 
o|contracted procedure: k1728 
o|contracted procedure: k1725 
o|contracted procedure: k1722 
o|contracted procedure: k1719 
o|contracted procedure: k1716 
o|contracted procedure: k1713 
o|contracted procedure: k2031 
o|contracted procedure: k2045 
o|contracted procedure: k2059 
o|contracted procedure: k2067 
o|contracted procedure: k2073 
o|contracted procedure: k2080 
o|contracted procedure: k2091 
o|contracted procedure: k2102 
o|contracted procedure: k2110 
o|contracted procedure: k2118 
o|contracted procedure: k2129 
o|contracted procedure: k2140 
o|contracted procedure: k2151 
o|contracted procedure: k2162 
o|contracted procedure: k2170 
o|contracted procedure: k2172 
o|contracted procedure: k2184 
o|contracted procedure: k2192 
o|contracted procedure: k2198 
o|contracted procedure: k2200 
o|contracted procedure: k2204 
o|contracted procedure: k2213 
o|contracted procedure: k2215 
o|contracted procedure: k2225 
o|contracted procedure: k2227 
o|contracted procedure: k2237 
o|contracted procedure: k2244 
o|contracted procedure: k2251 
o|contracted procedure: k2258 
o|contracted procedure: k2260 
o|contracted procedure: k2265 
o|contracted procedure: k2271 
o|contracted procedure: k2273 
o|contracted procedure: k2287 
o|contracted procedure: k2293 
o|contracted procedure: k2290 
o|contracted procedure: k2298 
o|contracted procedure: k2307 
o|contracted procedure: k2314 
o|contracted procedure: k2319 
o|contracted procedure: k2326 
o|contracted procedure: k2342 
o|contracted procedure: k2350 
o|contracted procedure: k2357 
o|contracted procedure: k23654880 
o|contracted procedure: k2373 
o|contracted procedure: k23654885 
o|contracted procedure: k2378 
o|contracted procedure: k2380 
o|contracted procedure: k2385 
o|contracted procedure: k2388 
o|contracted procedure: k2395 
o|contracted procedure: k2397 
o|contracted procedure: k2407 
o|contracted procedure: k2417 
o|contracted procedure: k2427 
o|contracted procedure: k2437 
o|contracted procedure: k2447 
o|contracted procedure: k2457 
o|contracted procedure: k2467 
o|contracted procedure: k2477 
o|contracted procedure: k2487 
o|contracted procedure: k2495 
o|contracted procedure: k2506 
o|contracted procedure: k2508 
o|contracted procedure: k2517 
o|contracted procedure: k2523 
o|contracted procedure: k2527 
o|contracted procedure: k2533 
o|contracted procedure: k2539 
o|contracted procedure: k2543 
o|contracted procedure: k2549 
o|contracted procedure: k2555 
o|contracted procedure: k2559 
o|contracted procedure: k2565 
o|contracted procedure: k2571 
o|contracted procedure: k2575 
o|contracted procedure: k2581 
o|contracted procedure: k2591 
o|contracted procedure: k2594 
o|contracted procedure: k2599 
o|contracted procedure: k2609 
o|contracted procedure: k2616 
o|contracted procedure: k2621 
o|contracted procedure: k2629 
o|contracted procedure: k2634 
o|contracted procedure: k2644 
o|contracted procedure: k2651 
o|contracted procedure: k2656 
o|contracted procedure: k2662 
o|contracted procedure: k26684912 
o|contracted procedure: k2679 
o|contracted procedure: k26684917 
o|contracted procedure: k2700 
o|contracted procedure: k2706 
o|contracted procedure: k2724 
o|contracted procedure: k2736 
o|contracted procedure: k2732 
o|contracted procedure: k2744 
o|contracted procedure: k2753 
o|contracted procedure: k2758 
o|contracted procedure: k2760 
o|contracted procedure: k2765 
o|contracted procedure: k2786 
o|contracted procedure: k2794 
o|contracted procedure: k2799 
o|contracted procedure: k2807 
o|contracted procedure: k2812 
o|contracted procedure: k2820 
o|contracted procedure: k2825 
o|contracted procedure: k2837 
o|contracted procedure: k2848 
o|contracted procedure: k2861 
o|contracted procedure: k2936 
o|contracted procedure: k2866 
o|contracted procedure: k2869 
o|contracted procedure: k2874 
o|contracted procedure: k2888 
o|contracted procedure: k2899 
o|contracted procedure: k2902 
o|contracted procedure: k2911 
o|contracted procedure: k2921 
o|contracted procedure: k2948 
o|contracted procedure: k2940 
o|contracted procedure: k3000 
o|contracted procedure: k3008 
o|contracted procedure: k3013 
o|contracted procedure: k3021 
o|contracted procedure: k3026 
o|contracted procedure: k3037 
o|contracted procedure: k3040 
o|contracted procedure: k3046 
o|contracted procedure: k3055 
o|contracted procedure: k3070 
o|contracted procedure: k3077 
o|contracted procedure: k2995 
o|contracted procedure: k3090 
o|contracted procedure: k3108 
o|contracted procedure: k3098 
o|contracted procedure: k3120 
o|contracted procedure: k3112 
o|contracted procedure: k3128 
o|contracted procedure: k3162 
o|contracted procedure: k4502 
o|contracted procedure: k4505 
o|contracted procedure: k4514 
o|contracted procedure: k4524 
o|simplifications: ((if . 3) (let . 41)) 
o|removed binding forms: 273 
o|inlining procedure: k3701 
o|inlining procedure: k3701 
o|inlining procedure: "(csc.scm:949) prefix" 
o|inlining procedure: k3979 
o|inlining procedure: k3979 
o|inlining procedure: k3362 
o|inlining procedure: k3362 
o|inlining procedure: k1620 
o|inlining procedure: k1620 
o|inlining procedure: "(csc.scm:272) prefix" 
o|inlining procedure: k2904 
o|inlining procedure: k2904 
o|inlining procedure: "(csc.scm:257) prefix" 
o|inlining procedure: k4507 
o|inlining procedure: k4507 
o|inlining procedure: "(csc.scm:235) prefix" 
o|inlining procedure: "(csc.scm:221) prefix" 
o|propagated global variable: str265781 default-library 
o|inlining procedure: "(csc.scm:100) prefix" 
o|inlining procedure: "(csc.scm:96) prefix" 
o|simplifications: ((let . 4)) 
o|replaced variables: 17 
o|removed binding forms: 3 
o|removed side-effect free assignment to unused variable: prefix 
o|substituted constant variable: dir275704 
o|substituted constant variable: str265703 
o|substituted constant variable: dir275749 
o|substituted constant variable: str265748 
o|substituted constant variable: dir275764 
o|substituted constant variable: str265763 
o|substituted constant variable: str265776 
o|substituted constant variable: dir275782 
o|substituted constant variable: dir275787 
o|substituted constant variable: str265786 
o|substituted constant variable: dir275792 
o|substituted constant variable: str265791 
o|simplifications: ((if . 2)) 
o|replaced variables: 19 
o|removed binding forms: 28 
o|inlining procedure: k1664 
o|inlining procedure: k4569 
o|inlining procedure: k4685 
o|inlining procedure: k4697 
o|removed binding forms: 26 
o|replaced variables: 4 
o|removed binding forms: 4 
o|direct leaf routine/allocation: use-private-repository214 6 
o|inlining procedure: "(csc.scm:650) k2012" 
o|simplifications: ((if . 1)) 
o|customizable procedures: (k1486 k4476 map-loop111136 k2497 k2720 k2722 k2771 k2780 k3062 k3029 k2853 map-loop408426 k2671 shared-build213 check212 k2175 t-options211 loop231 k1586 k1589 map-loop165190 k1942 k1944 for-each-loop466515 for-each-loop522532 k3338 map-loop486506 k1832 for-each-loop542560 k3632 k3519 for-each-loop571585 for-each-loop592602 for-each-loop609619 k3499 compiler-options map-loop663680 linker-options linker-libraries k3806 k3773 lib-path copy-files k3743 for-each-loop745755 quit k4207 fold817 k4143 k4118 command map-loop632652) 
o|calls to known targets: 236 
o|identified direct recursive calls: f_4183 1 
o|fast box initializations: 19 
o|fast global references: 376 
o|fast global assignments: 177 
o|dropping unused closure argument: f_4302 
o|dropping unused closure argument: f_4107 
o|dropping unused closure argument: f_3999 
o|dropping unused closure argument: f_4134 
o|dropping unused closure argument: f_4075 
o|dropping unused closure argument: f_3677 
o|dropping unused closure argument: f_1794 
o|dropping unused closure argument: f_1738 
o|dropping unused closure argument: f_1394 
o|dropping unused closure argument: f_1746 
o|dropping unused closure argument: f_1771 
*/
/* end of file */
