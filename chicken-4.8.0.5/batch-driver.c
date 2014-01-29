/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:47
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file batch-driver.c
   unit: driver
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[406];
static double C_possibly_force_alignment;


C_noret_decl(f5129)
static void C_ccall f5129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5123)
static void C_ccall f5123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2130)
static void C_fcall f_2130(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5179)
static void C_ccall f5179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5173)
static void C_ccall f5173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2112)
static void C_fcall f_2112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5185)
static void C_ccall f5185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5155)
static void C_ccall f5155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2895)
static void C_fcall f_2895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5135)
static void C_ccall f5135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_fcall f_3448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5141)
static void C_ccall f5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5117)
static void C_ccall f5117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3331)
static void C_ccall f_3331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f4681)
static void C_ccall f4681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_fcall f_2801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1657)
static void C_fcall f_1657(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5191)
static void C_ccall f5191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5197)
static void C_ccall f5197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_fcall f_1934(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_fcall f_2377(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3218)
static void C_fcall f_3218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2925)
static void C_fcall f_2925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_fcall f_2980(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_fcall f_1975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1973)
static void C_ccall f_1973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_fcall f_3662(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3164)
static void C_fcall f_3164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1965)
static void C_fcall f_1965(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_fcall f_3692(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_fcall f_2383(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_fcall f_2388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4334)
static void C_fcall f_4334(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3624)
static void C_fcall f_3624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_fcall f_3129(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2068)
static void C_ccall f_2068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_fcall f_2066(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_fcall f_2064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_fcall f_2004(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2032)
static void C_ccall f_2032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_fcall f_3278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_fcall f_4005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2208)
static void C_ccall f_2208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_fcall f_2447(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_fcall f_3418(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3889)
static void C_fcall f_3889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_fcall f_3771(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3556)
static void C_ccall f_3556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_fcall f_2146(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2148)
static void C_fcall f_2148(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_fcall f_2142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2144)
static void C_fcall f_2144(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_fcall f_2140(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void C_fcall f_2124(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_fcall f_2122(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_fcall f_2128(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_fcall f_3722(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2126)
static void C_fcall f_2126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_fcall f_2120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_fcall f_2155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2150)
static void C_fcall f_2150(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3390)
static void C_fcall f_3390(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3742)
static void C_fcall f_3742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_fcall f_2165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_fcall f_2160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5103)
static void C_ccall f5103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5097)
static void C_ccall f5097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4217)
static void C_fcall f_4217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f5079)
static void C_ccall f5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5029)
static void C_ccall f5029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5023)
static void C_ccall f5023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5059)
static void C_ccall f5059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5067)
static void C_ccall f5067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_fcall f_1813(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2347)
static void C_ccall f_2347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5041)
static void C_ccall f5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5035)
static void C_ccall f5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5047)
static void C_ccall f5047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_fcall f_3909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1834)
static void C_fcall f_1834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2311)
static void C_fcall f_2311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_fcall f_2189(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2191)
static void C_fcall f_2191(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_fcall f_2193(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_fcall f_2195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_fcall f_2197(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_fcall f_3500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_fcall f_3080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_fcall f_3248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_fcall f_1750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1771)
static void C_fcall f_1771(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_fcall f_2287(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3952)
static void C_fcall f_3952(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_driver_toplevel)
C_externexport void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1854)
static void C_fcall f_1854(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1733)
static void C_fcall f_1733(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2848)
static void C_fcall f_2848(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_fcall f_1707(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_fcall f_1792(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2781)
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_fcall f_2264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_fcall f_2102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2108)
static void C_fcall f_2108(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4269)
static void C_fcall f_4269(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_fcall f_2134(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_fcall f_2132(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_fcall f_2138(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_fcall f_2136(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2130)
static void C_fcall trf_2130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2130(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2130(t0,t1);}

C_noret_decl(trf_2112)
static void C_fcall trf_2112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2112(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2112(t0,t1);}

C_noret_decl(trf_2895)
static void C_fcall trf_2895(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2895(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2895(t0,t1,t2);}

C_noret_decl(trf_3448)
static void C_fcall trf_3448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3448(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3448(t0,t1,t2);}

C_noret_decl(trf_3351)
static void C_fcall trf_3351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3351(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3351(t0,t1,t2);}

C_noret_decl(trf_2801)
static void C_fcall trf_2801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2801(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2801(t0,t1,t2);}

C_noret_decl(trf_1657)
static void C_fcall trf_1657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1657(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1657(t0,t1);}

C_noret_decl(trf_1934)
static void C_fcall trf_1934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1934(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1934(t0,t1,t2);}

C_noret_decl(trf_2377)
static void C_fcall trf_2377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2377(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2377(t0,t1);}

C_noret_decl(trf_3218)
static void C_fcall trf_3218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3218(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3218(t0,t1,t2);}

C_noret_decl(trf_2925)
static void C_fcall trf_2925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2925(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2925(t0,t1,t2);}

C_noret_decl(trf_2980)
static void C_fcall trf_2980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2980(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2980(t0,t1,t2);}

C_noret_decl(trf_1975)
static void C_fcall trf_1975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1975(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1975(t0,t1,t2);}

C_noret_decl(trf_3662)
static void C_fcall trf_3662(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3662(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3662(t0,t1,t2);}

C_noret_decl(trf_3164)
static void C_fcall trf_3164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3164(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3164(t0,t1,t2);}

C_noret_decl(trf_1965)
static void C_fcall trf_1965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1965(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1965(t0,t1);}

C_noret_decl(trf_3692)
static void C_fcall trf_3692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3692(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3692(t0,t1,t2);}

C_noret_decl(trf_2383)
static void C_fcall trf_2383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2383(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2383(t0,t1);}

C_noret_decl(trf_2388)
static void C_fcall trf_2388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2388(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2388(t0,t1);}

C_noret_decl(trf_4334)
static void C_fcall trf_4334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4334(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4334(t0,t1,t2);}

C_noret_decl(trf_3624)
static void C_fcall trf_3624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3624(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3624(t0,t1,t2);}

C_noret_decl(trf_3129)
static void C_fcall trf_3129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3129(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3129(t0,t1);}

C_noret_decl(trf_2066)
static void C_fcall trf_2066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2066(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2066(t0,t1);}

C_noret_decl(trf_2064)
static void C_fcall trf_2064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2064(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2064(t0,t1);}

C_noret_decl(trf_1940)
static void C_fcall trf_1940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1940(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1940(t0,t1,t2);}

C_noret_decl(trf_2004)
static void C_fcall trf_2004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2004(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2004(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3278)
static void C_fcall trf_3278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3278(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3278(t0,t1,t2);}

C_noret_decl(trf_4005)
static void C_fcall trf_4005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4005(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4005(t0,t1,t2);}

C_noret_decl(trf_2447)
static void C_fcall trf_2447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2447(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2447(t0,t1);}

C_noret_decl(trf_3418)
static void C_fcall trf_3418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3418(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3418(t0,t1,t2);}

C_noret_decl(trf_3889)
static void C_fcall trf_3889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3889(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3889(t0,t1,t2);}

C_noret_decl(trf_3771)
static void C_fcall trf_3771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3771(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3771(t0,t1,t2);}

C_noret_decl(trf_2146)
static void C_fcall trf_2146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2146(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2146(t0,t1);}

C_noret_decl(trf_2148)
static void C_fcall trf_2148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2148(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2148(t0,t1);}

C_noret_decl(trf_2142)
static void C_fcall trf_2142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2142(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2142(t0,t1);}

C_noret_decl(trf_2144)
static void C_fcall trf_2144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2144(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2144(t0,t1);}

C_noret_decl(trf_2140)
static void C_fcall trf_2140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2140(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2140(t0,t1);}

C_noret_decl(trf_2124)
static void C_fcall trf_2124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2124(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2124(t0,t1);}

C_noret_decl(trf_2122)
static void C_fcall trf_2122(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2122(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2122(t0,t1);}

C_noret_decl(trf_2128)
static void C_fcall trf_2128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2128(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2128(t0,t1);}

C_noret_decl(trf_3722)
static void C_fcall trf_3722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3722(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3722(t0,t1,t2);}

C_noret_decl(trf_2126)
static void C_fcall trf_2126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2126(t0,t1);}

C_noret_decl(trf_2120)
static void C_fcall trf_2120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2120(t0,t1);}

C_noret_decl(trf_2155)
static void C_fcall trf_2155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2155(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2155(t0,t1);}

C_noret_decl(trf_2150)
static void C_fcall trf_2150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2150(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2150(t0,t1);}

C_noret_decl(trf_3390)
static void C_fcall trf_3390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3390(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3390(t0,t1,t2);}

C_noret_decl(trf_3742)
static void C_fcall trf_3742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3742(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3742(t0,t1,t2);}

C_noret_decl(trf_2165)
static void C_fcall trf_2165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2165(t0,t1);}

C_noret_decl(trf_2160)
static void C_fcall trf_2160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2160(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2160(t0,t1);}

C_noret_decl(trf_4217)
static void C_fcall trf_4217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4217(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4217(t0,t1,t2);}

C_noret_decl(trf_1813)
static void C_fcall trf_1813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1813(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1813(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2465)
static void C_fcall trf_2465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2465(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2465(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3909)
static void C_fcall trf_3909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3909(t0,t1,t2);}

C_noret_decl(trf_1834)
static void C_fcall trf_1834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1834(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1834(t0,t1,t2);}

C_noret_decl(trf_2311)
static void C_fcall trf_2311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2311(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2311(t0,t1);}

C_noret_decl(trf_2189)
static void C_fcall trf_2189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2189(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2189(t0,t1);}

C_noret_decl(trf_2191)
static void C_fcall trf_2191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2191(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2191(t0,t1);}

C_noret_decl(trf_2193)
static void C_fcall trf_2193(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2193(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2193(t0,t1);}

C_noret_decl(trf_2195)
static void C_fcall trf_2195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2195(t0,t1);}

C_noret_decl(trf_2197)
static void C_fcall trf_2197(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2197(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2197(t0,t1);}

C_noret_decl(trf_3500)
static void C_fcall trf_3500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3500(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3500(t0,t1);}

C_noret_decl(trf_3080)
static void C_fcall trf_3080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3080(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3080(t0,t1,t2);}

C_noret_decl(trf_3248)
static void C_fcall trf_3248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3248(t0,t1,t2);}

C_noret_decl(trf_1750)
static void C_fcall trf_1750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1750(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1750(t0,t1,t2);}

C_noret_decl(trf_1771)
static void C_fcall trf_1771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1771(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1771(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2287)
static void C_fcall trf_2287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2287(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2287(t0,t1);}

C_noret_decl(trf_3952)
static void C_fcall trf_3952(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3952(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3952(t0,t1,t2);}

C_noret_decl(trf_1854)
static void C_fcall trf_1854(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1854(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1854(t0,t1);}

C_noret_decl(trf_1733)
static void C_fcall trf_1733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1733(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1733(t0,t1);}

C_noret_decl(trf_2848)
static void C_fcall trf_2848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2848(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2848(t0,t1,t2);}

C_noret_decl(trf_1707)
static void C_fcall trf_1707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1707(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1707(t0,t1);}

C_noret_decl(trf_1792)
static void C_fcall trf_1792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1792(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1792(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2781)
static void C_fcall trf_2781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2781(t0,t1,t2);}

C_noret_decl(trf_2264)
static void C_fcall trf_2264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2264(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2264(t0,t1);}

C_noret_decl(trf_2102)
static void C_fcall trf_2102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2102(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2102(t0,t1);}

C_noret_decl(trf_2108)
static void C_fcall trf_2108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2108(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2108(t0,t1);}

C_noret_decl(trf_4269)
static void C_fcall trf_4269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4269(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4269(t0,t1,t2);}

C_noret_decl(trf_2134)
static void C_fcall trf_2134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2134(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2134(t0,t1);}

C_noret_decl(trf_2132)
static void C_fcall trf_2132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2132(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2132(t0,t1);}

C_noret_decl(trf_2138)
static void C_fcall trf_2138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2138(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2138(t0,t1);}

C_noret_decl(trf_2136)
static void C_fcall trf_2136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2136(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2136(t0,t1);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

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

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

/* f5129 in k3554 in k3549 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in ... */
static void C_ccall f5129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f5123 in k3554 in k3549 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in ... */
static void C_ccall f5123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in ... */
static void C_fcall f_2130(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2130,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[363],t3))){
t4=C_set_block_item(lf[364] /* ##compiler#strict-variable-types */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[52] /* ##compiler#enable-specialization */,0,C_SCHEME_TRUE);
t6=C_set_block_item(((C_word*)t0)[21],0,C_SCHEME_TRUE);
t7=t2;
f_2132(t7,t6);}
else{
t4=t2;
f_2132(t4,C_SCHEME_UNDEFINED);}}

/* k4042 in k4040 in k4038 in k4036 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in ... */
static void C_ccall f_4043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:270: symbol-escape */
t2=*((C_word*)lf[329]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4040 in k4038 in k4036 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in ... */
static void C_ccall f_4041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4043,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:269: parentheses-synonyms */
t3=*((C_word*)lf[330]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* f5179 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in ... */
static void C_ccall f5179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f5173 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in ... */
static void C_ccall f5173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in ... */
static void C_fcall f_2112(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2112,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[378],t3))){
/* batch-driver.scm:199: warning */
t4=*((C_word*)lf[374]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[379]);}
else{
t4=t2;
f_2114(2,t4,C_SCHEME_UNDEFINED);}}

/* k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in ... */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[376],t3))){
/* batch-driver.scm:201: warning */
t4=*((C_word*)lf[374]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[377]);}
else{
t4=t2;
f_2116(2,t4,C_SCHEME_UNDEFINED);}}

/* k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in ... */
static void C_ccall f_2116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[373],t3))){
/* batch-driver.scm:203: warning */
t4=*((C_word*)lf[374]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[375]);}
else{
t4=t2;
f_2118(2,t4,C_SCHEME_UNDEFINED);}}

/* k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in ... */
static void C_ccall f_2118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[372],t3))){
t4=C_set_block_item(lf[9] /* ##compiler#explicit-use-flag */,0,C_SCHEME_TRUE);
t5=C_set_block_item(((C_word*)t0)[24],0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_END_OF_LIST);
t7=t2;
f_2120(t7,t6);}
else{
t4=t2;
f_2120(t4,C_SCHEME_UNDEFINED);}}

/* f5185 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in ... */
static void C_ccall f5185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in ... */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[380],*((C_word*)lf[28]+1)))){
t4=C_set_block_item(((C_word*)t0)[35],0,C_SCHEME_TRUE);
t5=t2;
f_2112(t5,t4);}
else{
t4=t2;
f_2112(t4,C_SCHEME_UNDEFINED);}}

/* k4061 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in ... */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_i_string_equal_p(lf[339],t1))){
/* batch-driver.scm:255: keyword-style */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[340]);}
else{
t2=t1;
if(C_truep(C_u_i_string_equal_p(lf[341],t2))){
/* batch-driver.scm:256: keyword-style */
t3=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],lf[331]);}
else{
t3=t1;
if(C_truep(C_u_i_string_equal_p(lf[342],t3))){
/* batch-driver.scm:257: keyword-style */
t4=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],lf[343]);}
else{
/* batch-driver.scm:258: quit */
t4=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],lf[344]);}}}}

/* f5155 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in ... */
static void C_ccall f5155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* for-each-loop1063 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in ... */
static void C_fcall f_2895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2895,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2904,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:522: g1064 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2889 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:525: make-pathname */
t2=*((C_word*)lf[161]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[184]);}

/* f_4256 */
static void C_ccall f_4256(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4256,3,t0,t1,t2);}
t3=C_a_i_string(&a,1,t2);
/* batch-driver.scm:177: string->symbol */
t4=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* f_4254 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4254(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4254,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4256,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4264,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* string->list */
t9=*((C_word*)lf[386]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}

/* k3442 in map-loop740 in k3409 in k3405 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in ... */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3443,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3418(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3418(t6,((C_word*)t0)[5],t5);}}

/* k2886 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:524: ##sys#resolve-include-filename */
t2=*((C_word*)lf[73]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2880 in k2877 in k2869 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:529: load-inline-file */
t2=*((C_word*)lf[178]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4241 in map-loop310 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in ... */
static void C_ccall f_4242(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4242,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4217(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4217(t6,((C_word*)t0)[5],t5);}}

/* f5135 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in ... */
static void C_ccall f5135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* map-loop714 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in ... */
static void C_fcall f_3448(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3448,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:419: g720 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4248 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:182: exit */
t2=*((C_word*)lf[125]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f5141 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in ... */
static void C_ccall f5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f5117 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in ... */
static void C_ccall f5117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in ... */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2754,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:553: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1965(t3,t2);}

/* k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in ... */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2756,2,t0,t1);}
t2=C_set_block_item(lf[97] /* ##compiler#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:555: analyze */
t4=((C_word*)((C_word*)t0)[10])[1];
f_2004(t4,t3,lf[172],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k2750 */
static void C_ccall f_2751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:551: make-pathname */
t2=*((C_word*)lf[161]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[162]);}

/* k3329 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in ... */
static void C_ccall f_3331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3331,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1 /* (set! ##sys#explicit-library-modules ...) */,t1);
t3=C_a_i_cons(&a,2,lf[240],((C_word*)((C_word*)t0)[2])[1]);
t4=C_a_i_list(&a,2,lf[241],t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[4];
f_2383(t7,t6);}

/* f_2742 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in ... */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2742,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2748,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2751,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:551: symbol->string */
t5=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2747 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:551: load-type-database */
t2=*((C_word*)lf[160]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in ... */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2742,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2781,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2781(t8,t4,t3);}

/* f4681 in k2623 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f4681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f4681,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5029,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t3,*((C_word*)lf[113]+1),lf[114],C_SCHEME_END_OF_LIST);}

/* map-loop788 in k3342 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in ... */
static void C_fcall f_3351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3351,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:437: g794 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2809 in for-each-loop1107 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in ... */
static void C_ccall f_2810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2801(t3,((C_word*)t0)[4],t2);}

/* k2903 in for-each-loop1063 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in ... */
static void C_ccall f_2904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2895(t3,((C_word*)t0)[4],t2);}

/* for-each-loop1107 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in ... */
static void C_fcall f_2801(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2801,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2810,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:544: g1108 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1647,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:40: make-parameter */
t4=*((C_word*)lf[405]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1643,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:39: make-parameter */
t4=*((C_word*)lf[405]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k1912 in arg-val in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1913,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1024));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* batch-driver.scm:140: quit */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],lf[43],((C_word*)t0)[3]);}}

/* option-arg in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1657(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1657,NULL,2,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=C_u_i_car(t4);
/* batch-driver.scm:48: quit */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[7],t5);}
else{
t4=C_i_cadr(t2);
if(C_truep(C_i_symbolp(t4))){
/* batch-driver.scm:51: quit */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[8],t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}

/* k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1651,2,t0,t1);}
t2=C_mutate((C_word*)lf[4]+1 /* (set! user-post-analysis-pass ...) */,t1);
t3=C_mutate((C_word*)lf[5]+1 /* (set! compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1653,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1653(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1653r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1653r(t0,t1,t2,t3);}}

static void C_ccall f_1653r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1657,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1685,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:53: initialize-compiler */
t6=*((C_word*)lf[404]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3616 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in ... */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3617,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[58]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3624(t7,t3,t1);}

/* f5191 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in ... */
static void C_ccall f5191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2914 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in ... */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:520: pp */
t2=*((C_word*)lf[185]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_2437(2,t2,C_SCHEME_UNDEFINED);}}

/* k1628 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* f5197 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in ... */
static void C_ccall f5197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f_3609 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in ... */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3609,3,t0,t1,t2);}
t3=C_a_i_list(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[296],t3,C_SCHEME_TRUE));}

/* k3603 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in ... */
static void C_ccall f_3604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:344: arg-val */
f_1854(((C_word*)t0)[3],t1);}

/* collect-options in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1934(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1934,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1940,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1940(t6,t1,((C_word*)t0)[3]);}

/* k2973 in k2968 in k2966 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in ... */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* batch-driver.scm:506: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1975(t3,((C_word*)t0)[4],lf[198]);}

/* k4358 in map-loop76 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4359,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4334(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4334(t6,((C_word*)t0)[5],t5);}}

/* k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in ... */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3343,a[2]=t1,a[3]=((C_word*)t0)[24],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5097,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[244],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2377(t3,C_SCHEME_UNDEFINED);}}

/* k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in ... */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:434: user-preprocessor-pass */
t3=*((C_word*)lf[2]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1984 in k1982 in k1980 in end-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1996,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:100: current-milliseconds */
t5=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in ... */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:440: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1965(t3,t2);}

/* k1986 in k1984 in k1982 in k1980 in end-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_fcall f_2377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2377,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:439: print-expr */
t3=((C_word*)((C_word*)t0)[19])[1];
f_1813(t3,t2,lf[242],lf[243],((C_word*)((C_word*)t0)[24])[1]);}

/* k1980 in end-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:152: display */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k1982 in k1980 in end-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:152: display */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[47],((C_word*)t0)[3]);}

/* map-loop883 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in ... */
static void C_fcall f_3218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3218,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3243,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:456: g889 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2921 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in ... */
static void C_ccall f_2923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:518: concatenate */
t2=*((C_word*)lf[188]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* map-loop1037 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in ... */
static void C_fcall f_2925(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2925,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1685,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[9]+1 /* (set! ##compiler#explicit-use-flag ...) */,C_u_i_memq(lf[10],t2));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[9]+1))){
/* batch-driver.scm:56: append */
t5=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[402]+1),C_SCHEME_END_OF_LIST);}
else{
t5=C_a_i_cons(&a,2,lf[240],*((C_word*)lf[403]+1));
t6=C_a_i_list(&a,1,t5);
/* batch-driver.scm:56: append */
t7=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,*((C_word*)lf[402]+1),t6);}}

/* k1956 in k1953 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k1953 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cddr(((C_word*)t0)[3]);
/* batch-driver.scm:144: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1940(t4,t2,t3);}

/* k2955 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in ... */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:517: concatenate */
t2=*((C_word*)lf[188]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4334,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4334(t6,t2,t1);}

/* k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1697,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[14]+1);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=t5,a[10]=t3,a[11]=t6,tmp=(C_word)a,a+=12,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:72: get-environment-variable */
t9=*((C_word*)lf[396]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,lf[397]);}

/* map-loop999 in k2968 in k2966 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in ... */
static void C_fcall f_2980(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2980,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:505: g1005 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in ... */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2473,2,t0,t1);}
t2=C_set_block_item(lf[97] /* ##compiler#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:597: end-time */
t4=((C_word*)((C_word*)t0)[10])[1];
f_1975(t4,t3,lf[143]);}

/* k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in ... */
static void C_ccall f_2476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2476,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:598: print-db */
t3=((C_word*)((C_word*)t0)[20])[1];
f_1792(t3,t2,lf[141],lf[142],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in ... */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
if(C_truep(*((C_word*)lf[97]+1))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2678,a[2]=((C_word*)t0)[21],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[150],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:587: dump-undefined-globals */
t5=*((C_word*)lf[151]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t1);}
else{
t5=t3;
f_2678(2,t5,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2473(2,t3,C_SCHEME_UNDEFINED);}}

/* end-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1975(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1975,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[29]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1981,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:152: display */
t5=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[48],*((C_word*)lf[29]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1971 in begin-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in ... */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t3=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[139],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:601: print-program-statistics */
t4=*((C_word*)lf[140]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,((C_word*)t0)[5]);}
else{
t4=t2;
f_2480(2,t4,C_SCHEME_UNDEFINED);}}

/* k4293 in map-loop282 in k4263 */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4294,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4269(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4269(t6,((C_word*)t0)[5],t5);}}

/* k4312 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[204]+1 /* (set! ##compiler#unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_2064(t3,t2);}

/* k4316 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:167: string->c-identifier */
t2=*((C_word*)lf[391]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2964 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in ... */
static void C_ccall f_2965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:510: build-node-graph */
t2=*((C_word*)lf[196]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2966 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in ... */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:504: begin-time */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1965(t3,t2);}

/* k2961 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in ... */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* batch-driver.scm:508: g1028 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[194],lf[195],t2);}

/* k4299 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:175: append-map */
t2=*((C_word*)lf[306]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k1995 in k1984 in k1982 in k1980 in end-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
/* batch-driver.scm:152: write */
t3=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* f_2492 in k2486 in k2484 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in ... */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2492,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm:608: determine-loop-and-dispatch */
t2=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}
else{
/* batch-driver.scm:609: perform-high-level-optimizations */
t2=*((C_word*)lf[99]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}}

/* map-loop643 in k3654 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in ... */
static void C_fcall f_3662(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3662,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3687,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:334: g649 */
t5=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3658 in k3654 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in ... */
static void C_ccall f_3660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:334: append */
t2=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k2968 in k2966 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in ... */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[58]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2980,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_2980(t13,t9,t7);}

/* map-loop920 in k3128 in k3124 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in ... */
static void C_fcall f_3164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3164,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:464: g926 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in ... */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=t1,a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm:452: gensym */
t3=*((C_word*)lf[234]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in ... */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2395,2,t0,t1);}
t2=C_i_length(*((C_word*)lf[92]+1));
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3100,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[225]+1);
t10=C_i_check_list_2(*((C_word*)lf[225]+1),lf[58]);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[20],a[4]=t3,a[5]=((C_word*)t0)[21],a[6]=t2,a[7]=((C_word*)t0)[22],tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3248,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_3248(t15,t11,*((C_word*)lf[225]+1));}

/* k4371 */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_symbolp(t1))){
/* batch-driver.scm:66: symbol->string */
t2=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2484 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in ... */
static void C_ccall f_2485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:605: begin-time */
t3=((C_word*)((C_word*)t0)[10])[1];
f_1965(t3,t2);}

/* k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in ... */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2480,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2485,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:604: debugging */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[33],lf[111],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2578,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[18],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[20],a[14]=((C_word*)t0)[6],a[15]=((C_word*)t0)[21],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:638: print-node */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1771(t3,t2,lf[137],lf[138],((C_word*)((C_word*)t0)[4])[1]);}}

/* begin-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1965(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1965,NULL,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1973,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:100: current-milliseconds */
t3=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in ... */
static void C_ccall f_2399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2399,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=t2,a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
if(C_truep(C_i_pairp(*((C_word*)lf[216]+1)))){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3052,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:477: with-debugging-output */
t5=*((C_word*)lf[221]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[222],t4);}
else{
t4=t3;
f_2401(2,t4,C_SCHEME_UNDEFINED);}}

/* map-loop594 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in ... */
static void C_fcall f_3692(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3692,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3717,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:328: g600 */
t5=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2486 in k2484 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in ... */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:606: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[13],t2,t3);}

/* k3686 in map-loop643 in k3654 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in ... */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3687,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3662(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3662(t6,((C_word*)t0)[5],t5);}}

/* f_4369 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4369,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4372,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:64: option-arg */
f_1657(t3,t2);}

/* k4364 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* batch-driver.scm:71: string-split */
t3=*((C_word*)lf[304]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,lf[394]);}
else{
/* batch-driver.scm:71: string-split */
t2=*((C_word*)lf[304]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[395],lf[394]);}}

/* k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in ... */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[49],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[25])){
t3=C_a_i_list(&a,3,lf[235],lf[236],lf[237]);
t4=C_a_i_cons(&a,2,t3,t1);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4);
t6=C_a_i_cons(&a,2,lf[238],t5);
t7=C_a_i_cons(&a,2,lf[239],t6);
t8=t2;
f_2388(t8,C_a_i_list(&a,1,t7));}
else{
t3=t2;
f_2388(t3,t1);}}

/* k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in ... */
static void C_fcall f_2383(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2383,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[91]+1);
t7=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=t5,a[23]=t3,a[24]=t6,a[25]=((C_word*)t0)[22],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:446: append */
t8=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)((C_word*)t0)[23])[1],((C_word*)((C_word*)t0)[24])[1]);}

/* k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in ... */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[25])[1]))){
t3=t2;
f_2383(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3331,a[2]=((C_word*)t0)[25],a[3]=((C_word*)t0)[24],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:443: append */
t4=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[75]+1),((C_word*)((C_word*)t0)[25])[1]);}}

/* k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in ... */
static void C_fcall f_2388(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2388,NULL,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[58]);
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[22],a[3]=t5,a[4]=((C_word*)t0)[23],a[5]=((C_word*)t0)[24],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3278(t7,t3,t1);}

/* map-loop76 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_4334(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4334,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4359,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:70: g82 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1639,2,t0,t1);}
t2=C_mutate((C_word*)lf[1]+1 /* (set! user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:38: make-parameter */
t4=*((C_word*)lf[405]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k3188 in map-loop920 in k3128 in k3124 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in ... */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3189,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3164(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3164(t6,((C_word*)t0)[5],t5);}}

/* k1630 in k1628 */
static void C_ccall f_1631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:36: make-parameter */
t3=*((C_word*)lf[405]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k1633 in k1630 in k1628 */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1635,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:37: make-parameter */
t4=*((C_word*)lf[405]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_FALSE);}

/* k4319 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:167: stringify */
t2=*((C_word*)lf[392]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_3131 in k3128 in k3124 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in ... */
static void C_ccall f_3131(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3131,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=C_a_i_list(&a,2,lf[223],t3);
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_list(&a,2,lf[223],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,4,lf[228],*((C_word*)lf[229]+1),t4,t7));}

/* map-loop620 in k3616 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in ... */
static void C_fcall f_3624(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3624,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3649,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:333: g626 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3620 in k3616 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in ... */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:331: append */
t2=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2077,2,t0,t1);}
t2=*((C_word*)lf[28]+1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_u_i_memq(lf[54],*((C_word*)lf[28]+1)));
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2082,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|38,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],a[36]=t7,a[37]=t5,a[38]=t8,tmp=(C_word)a,a+=39,tmp);
/* batch-driver.scm:188: collect-options */
t10=((C_word*)((C_word*)t0)[23])[1];
f_1934(t10,t9,lf[384]);}

/* k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2075,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1 /* (set! ##compiler#debugging-chicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t4=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[269],*((C_word*)lf[28]+1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4249,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:181: print-debug-options */
t6=*((C_word*)lf[385]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_2077(2,t5,C_SCHEME_UNDEFINED);}}

/* k3128 in k3124 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in ... */
static void C_fcall f_3129(C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3129,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3131,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[92]+1);
t8=C_i_check_list_2(*((C_word*)lf[92]+1),lf[58]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3164,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3164(t13,t9,*((C_word*)lf[92]+1));}

/* k3124 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in ... */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(*((C_word*)lf[232]+1))){
t3=C_a_i_list(&a,2,lf[223],((C_word*)t0)[7]);
t4=*((C_word*)lf[204]+1);
if(C_truep(*((C_word*)lf[204]+1))){
t5=C_a_i_list(&a,2,lf[223],C_SCHEME_FALSE);
t6=C_a_i_list(&a,3,lf[233],t3,t5);
t7=C_a_i_list(&a,3,lf[224],*((C_word*)lf[229]+1),t6);
t8=t2;
f_3129(t8,C_a_i_list(&a,1,t7));}
else{
if(C_truep(((C_word*)t0)[8])){
t5=C_a_i_list(&a,2,lf[223],((C_word*)t0)[8]);
t6=C_a_i_list(&a,3,lf[233],t3,t5);
t7=C_a_i_list(&a,3,lf[224],*((C_word*)lf[229]+1),t6);
t8=t2;
f_3129(t8,C_a_i_list(&a,1,t7));}
else{
t5=C_a_i_list(&a,2,lf[223],C_SCHEME_TRUE);
t6=C_a_i_list(&a,3,lf[233],t3,t5);
t7=C_a_i_list(&a,3,lf[224],*((C_word*)lf[229]+1),t6);
t8=t2;
f_3129(t8,C_a_i_list(&a,1,t7));}}}
else{
t3=t2;
f_3129(t3,C_SCHEME_END_OF_LIST);}}

/* k3654 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in ... */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[58]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3662(t7,t3,t1);}

/* k3148 in k3128 in k3124 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in ... */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=*((C_word*)lf[204]+1);
t3=(C_truep(*((C_word*)lf[204]+1))?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[2]));
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[3])[1];
/* batch-driver.scm:454: append */
t5=*((C_word*)lf[230]+1);
((C_proc9)(void*)(*((C_word*)t5+1)))(9,t5,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1,((C_word*)t0)[8],t4,lf[231]);}
else{
/* batch-driver.scm:454: append */
t4=*((C_word*)lf[230]+1);
((C_proc9)(void*)(*((C_word*)t4+1)))(9,t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1,((C_word*)t0)[8],C_SCHEME_END_OF_LIST,lf[231]);}}

/* k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2068,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[52]+1 /* (set! ##compiler#enable-specialization ...) */,C_u_i_memq(lf[53],t2));
t4=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2075,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4254,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4300,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:179: collect-options */
t7=((C_word*)((C_word*)t0)[23])[1];
f_1934(t7,t6,lf[387]);}

/* k3648 in map-loop620 in k3616 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in ... */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3649,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3624(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3624(t6,((C_word*)t0)[5],t5);}}

/* k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_2066(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2066,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[174],t3))){
t4=C_set_block_item(lf[388] /* ##sys#dload-disabled */,0,C_SCHEME_TRUE);
/* batch-driver.scm:172: repository-path */
t5=*((C_word*)lf[389]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,C_SCHEME_FALSE);}
else{
t4=t2;
f_2068(2,t4,C_SCHEME_UNDEFINED);}}

/* k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_2064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2064,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t3=*((C_word*)lf[204]+1);
if(C_truep(*((C_word*)lf[204]+1))){
t4=*((C_word*)lf[204]+1);
if(C_truep(*((C_word*)lf[204]+1))){
t5=C_set_block_item(lf[390] /* ##compiler#standalone-executable */,0,C_SCHEME_FALSE);
t6=t2;
f_2066(t6,t5);}
else{
t5=t2;
f_2066(t5,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[17])){
t4=C_set_block_item(lf[390] /* ##compiler#standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_2066(t5,t4);}
else{
t4=t2;
f_2066(t4,C_SCHEME_UNDEFINED);}}}

/* k2011 in k2009 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_2017 in k2009 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2017,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[49]+1);
/* batch-driver.scm:161: g251 */
t5=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* k2009 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2010,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2012,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2017,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2023,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:160: upap */
t5=((C_word*)((C_word*)t0)[3])[1];
((C_proc9)(void*)(*((C_word*)t5+1)))(9,t5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[5],t3,t4,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* f_1948 in loop in collect-options in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1948,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1954,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:144: option-arg */
f_1657(t3,t2);}

/* loop in collect-options in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1940,NULL,3,t0,t1,t2);}
t3=C_i_memq(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1948,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:55: g208 */
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k2001 in k1984 in k1982 in k1980 in end-time in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2002,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
/* batch-driver.scm:154: round */
t3=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* analyze in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_2004(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2004,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2032,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t4))){
/* batch-driver.scm:55: def-no232 */
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t1);}
else{
t8=C_i_car(t4);
t9=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
/* batch-driver.scm:55: def-contf233 */
t10=t6;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
/* batch-driver.scm:55: body230 */
t12=t5;
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,t8,t10);}}}

/* f_2007 in analyze in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2007,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2010,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:158: analyze-expression */
t5=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* f_2032 in analyze in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2032,2,t0,t1);}
/* batch-driver.scm:55: def-contf233 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_fix(0));}

/* map-loop820 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in ... */
static void C_fcall f_3278(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3278,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:445: g826 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3272 in map-loop853 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in ... */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3273,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3248(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3248(t6,((C_word*)t0)[5],t5);}}

/* f_2023 in k2009 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2023,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[50]+1);
/* batch-driver.scm:162: g265 */
t6=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,((C_word*)t0)[2],t2,t3,t4);}

/* f_2028 in analyze in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2028,3,t0,t1,t2);}
/* batch-driver.scm:55: body230 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_TRUE);}

/* k4147 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in ... */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_block_item(lf[128] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_2134(t4,t3);}

/* k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in ... */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! ##sys#line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:404: collect-options */
t4=((C_word*)((C_word*)t0)[17])[1];
f_1934(t4,t3,lf[256]);}

/* k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in ... */
static void C_ccall f_2351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:399: debugging */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[259],lf[260],*((C_word*)lf[77]+1));}

/* k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in ... */
static void C_ccall f_2363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=t1,tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:405: collect-options */
t3=((C_word*)((C_word*)t0)[17])[1];
f_1934(t3,t2,lf[255]);}

/* k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in ... */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=t1,tmp=(C_word)a,a+=28,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3528,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[17],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:407: collect-options */
t4=((C_word*)((C_word*)t0)[17])[1];
f_1934(t4,t3,lf[254]);}

/* k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in ... */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_2369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=t1,a[28]=((C_word*)t0)[27],tmp=(C_word)a,a+=29,tmp);
/* batch-driver.scm:411: user-read-pass */
t3=*((C_word*)lf[1]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in ... */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[24],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[26],a[6]=((C_word*)t0)[27],a[7]=((C_word*)t0)[28],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5103,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[245],C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[24],a[3]=((C_word*)t0)[26],a[4]=((C_word*)t0)[28],a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3390(t6,t2,((C_word*)t0)[27]);}}

/* k4118 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in ... */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2155(t3,t2);}

/* k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in ... */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:100: current-milliseconds */
t3=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in ... */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2357,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:403: make-vector */
t4=*((C_word*)lf[257]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[258]+1),C_SCHEME_END_OF_LIST);}

/* k4112 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in ... */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2160(t3,t2);}

/* map-loop369 in k3997 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in ... */
static void C_fcall f_4005(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4005,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:274: g375 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4001 in k3997 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in ... */
static void C_ccall f_4003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:274: append */
t2=*((C_word*)lf[230]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,*((C_word*)lf[67]+1),((C_word*)t0)[3]);}

/* k4038 in k4036 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in ... */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:268: keyword-style */
t3=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[331]);}

/* k4036 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in ... */
static void C_ccall f_4037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:267: case-sensitive */
t3=*((C_word*)lf[332]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_FALSE);}

/* k4029 in map-loop369 in k3997 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in ... */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4005(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4005(t6,((C_word*)t0)[5],t5);}}

/* f_3808 */
static void C_ccall f_3808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3808r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3808r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3808r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* f_3806 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in ... */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3806,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3808,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3824,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:296: g435 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[314]);}

/* k3399 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in ... */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in ... */
static void C_ccall f_2208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3742,a[2]=t4,a[3]=((C_word*)t0)[32],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3742(t6,t2,t1);}

/* k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in ... */
static void C_ccall f_2433(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=t1,tmp=(C_word)a,a+=22,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t1;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2923,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2925,a[2]=t6,a[3]=t10,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2925(t12,t8,t7);}

/* k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in ... */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2206,2,t0,t1);}
t2=*((C_word*)lf[69]+1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=t2,tmp=(C_word)a,a+=33,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3762,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3769,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:312: collect-options */
t6=((C_word*)((C_word*)t0)[20])[1];
f_1934(t6,t5,lf[307]);}

/* k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in ... */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t1,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2916,a[2]=t2,a[3]=((C_word*)t0)[21],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:519: debugging */
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[186],lf[187]);}

/* k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in ... */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3771,a[2]=t4,a[3]=((C_word*)t0)[32],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3771(t6,t2,t1);}

/* k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in ... */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(*((C_word*)lf[181]+1))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2867,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[18];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2895,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2895(t8,t2,t4);}
else{
t3=t2;
f_2439(2,t3,C_SCHEME_UNDEFINED);}}

/* k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in ... */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2201,2,t0,t1);}
t2=*((C_word*)lf[68]+1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=t2,tmp=(C_word)a,a+=33,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3791,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3798,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:309: collect-options */
t6=((C_word*)((C_word*)t0)[20])[1];
f_1934(t6,t5,lf[309]);}

/* k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in ... */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:531: collect-options */
t3=((C_word*)((C_word*)t0)[20])[1];
f_1934(t3,t2,lf[180]);}

/* k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in ... */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2956,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:517: vector->list */
t4=*((C_word*)lf[189]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[190]+1));}

/* k3716 in map-loop594 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in ... */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3717,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3692(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3692(t6,((C_word*)t0)[5],t5);}}

/* k4101 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in ... */
static void C_ccall f_4102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4102,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_mutate((C_word*)lf[347]+1 /* (set! ##compiler#inline-max-size ...) */,t2);
t5=((C_word*)t0)[2];
f_2165(t5,t4);}
else{
/* batch-driver.scm:248: quit */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[348],t1);}}

/* k4105 in k4101 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in ... */
static void C_ccall f_4107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[347]+1 /* (set! ##compiler#inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_2165(t3,t2);}

/* k3405 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in ... */
static void C_ccall f_3407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:420: reverse */
t3=*((C_word*)lf[247]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k2595 in k2593 in k2591 in k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in ... */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:654: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1965(t3,t2);}

/* k2593 in k2591 in k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in ... */
static void C_ccall f_2594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
/* batch-driver.scm:653: exit */
t3=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(0));}
else{
t3=t2;
f_2596(2,t3,C_SCHEME_UNDEFINED);}}

/* k2591 in k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in ... */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:652: print-node */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1771(t3,t2,lf[126],lf[127],((C_word*)((C_word*)t0)[2])[1]);}

/* k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in ... */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(*((C_word*)lf[128]+1))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2663,a[2]=((C_word*)t0)[12],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:100: current-milliseconds */
t4=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_2592(2,t3,C_SCHEME_UNDEFINED);}}

/* k2597 in k2595 in k2593 in k2591 in k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in ... */
static void C_ccall f_2598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2608,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:655: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[9],t2,t3);}

/* k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in ... */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm:573: perform-cps-conversion */
t3=*((C_word*)lf[156]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[16]);}

/* k2225 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:319: load */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in ... */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:572: begin-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1965(t3,t2);}

/* k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in ... */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:575: print-node */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1771(t3,t2,lf[153],lf[154],((C_word*)t0)[16]);}

/* k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in ... */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm:574: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1975(t3,t2,lf[155]);}

/* f_2220 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in ... */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2220,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2226,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:319: ##sys#resolve-include-filename */
t4=*((C_word*)lf[73]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k3409 in k3405 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3410,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[246]+1);
t7=((C_word*)t0)[2];
t8=C_i_check_list_2(t7,lf[58]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3418,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3418(t13,t9,t7);}

/* k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in ... */
static void C_ccall f_2586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2586,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:647: end-time */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1975(t4,t3,lf[132]);}

/* k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in ... */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:645: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1965(t3,t2);}

/* k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in ... */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm:646: perform-closure-conversion */
t3=*((C_word*)lf[133]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);}

/* k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in ... */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:648: print-db */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1792(t3,t2,lf[130],lf[131],((C_word*)t0)[3],((C_word*)t0)[14]);}

/* k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in ... */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2220,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[42]);
t5=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2231,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3722,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3722(t9,t5,t3);}

/* k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in ... */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2219,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],tmp=(C_word)a,a+=33,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5155,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t3,*((C_word*)lf[113]+1),lf[302],C_SCHEME_END_OF_LIST);}

/* k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in ... */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t3=((C_word*)((C_word*)t0)[17])[1];
t4=(C_truep(t3)?t3:*((C_word*)lf[52]+1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[18],a[3]=((C_word*)t0)[19],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[20],tmp=(C_word)a,a+=13,tmp);
t6=((C_word*)t0)[21];
if(C_truep(C_u_i_memq(lf[174],t6))){
t7=t5;
f_2724(2,t7,C_SCHEME_UNDEFINED);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:542: load-type-database */
t8=*((C_word*)lf[160]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,lf[176]);}}
else{
t5=t2;
f_2447(t5,C_SCHEME_UNDEFINED);}}

/* k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in ... */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2211,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[70],*((C_word*)lf[71]+1));
t3=C_mutate((C_word*)lf[71]+1 /* (set! ##sys#features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm:316: collect-options */
t5=((C_word*)((C_word*)t0)[20])[1];
f_1934(t5,t4,lf[303]);}

/* k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in ... */
static void C_fcall f_2447(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2447,NULL,2,t0,t1);}
t2=C_set_block_item(lf[90] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[95] /* ##compiler#constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[96] /* ##compiler#inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(*((C_word*)lf[157]+1))){
t6=t5;
f_2452(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2713,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2719,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:570: g1160 */
t8=t6;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[16]);}}

/* k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in ... */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;
f_2444(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2835,tmp=(C_word)a,a+=2,tmp);
t5=t1;
t6=C_i_check_list_2(t5,lf[42]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2848,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2848(t10,t2,t5);}}

/* k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in ... */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[15])[1])?*((C_word*)lf[134]+1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[15])[1];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2668,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_list(&a,1,t4);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5041,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t7,*((C_word*)lf[113]+1),lf[136],t6);}
else{
t4=t2;
f_2580(2,t4,C_SCHEME_UNDEFINED);}}

/* map-loop740 in k3409 in k3405 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in ... */
static void C_fcall f_3418(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3418,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3443,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:421: g746 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3414 in k3409 in k3405 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in ... */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:419: append */
t2=*((C_word*)lf[230]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in ... */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],tmp=(C_word)a,a+=31,tmp);
/* batch-driver.scm:326: append */
t4=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],*((C_word*)lf[299]+1));}

/* f_3866 in k3863 */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3866r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3866r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3866r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in ... */
static void C_ccall f_2249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2249,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[58]);
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3692,a[2]=((C_word*)t0)[31],a[3]=t5,a[4]=((C_word*)t0)[32],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3692(t7,t3,t1);}

/* k3863 */
static void C_ccall f_3865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3866,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:302: g499 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],lf[313]);}

/* k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in ... */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=t6,a[32]=t4,tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm:328: collect-options */
t8=((C_word*)((C_word*)t0)[19])[1];
f_1934(t8,t7,lf[298]);}

/* k3533 in k3527 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in ... */
static void C_ccall f_3534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:406: append */
t2=*((C_word*)lf[230]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in ... */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
t2=C_mutate((C_word*)lf[71]+1 /* (set! ##sys#features ...) */,t1);
t3=C_a_i_cons(&a,2,lf[74],*((C_word*)lf[71]+1));
t4=C_mutate((C_word*)lf[71]+1 /* (set! ##sys#features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm:323: user-post-analysis-pass */
t6=*((C_word*)lf[4]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3897 in for-each-loop473 in k3844 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in ... */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3889(t3,((C_word*)t0)[4],t2);}

/* k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in ... */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm:321: delete */
t3=*((C_word*)lf[300]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[70],*((C_word*)lf[71]+1),*((C_word*)lf[301]+1));}

/* k3342 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f_3343(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3343,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=((C_word*)((C_word*)t0)[3])[1];
t8=C_i_check_list_2(t7,lf[58]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3351,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3351(t13,t9,t7);}

/* for-each-loop473 in k3844 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in ... */
static void C_fcall f_3889(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3889,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3898,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:299: g474 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3347 in k3342 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in ... */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2377(t3,t2);}

/* for-each-loop523 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in ... */
static void C_fcall f_3771(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3771,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3780,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:307: g524 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3004 in map-loop999 in k2968 in k2966 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in ... */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3005,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2980(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2980(t6,((C_word*)t0)[5],t5);}}

/* f_3825 in k3822 */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3825r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3825r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3825r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* k3822 */
static void C_ccall f_3824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3825,tmp=(C_word)a,a+=2,tmp);
/* batch-driver.scm:297: g450 */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],lf[313]);}

/* k3549 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in ... */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3550,2,t0,t1);}
t2=C_set_block_item(lf[232] /* ##compiler#emit-profile */,0,C_SCHEME_TRUE);
t3=C_mutate((C_word*)lf[274]+1 /* (set! ##compiler#profiled-procedures ...) */,lf[275]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm:367: append */
t5=*((C_word*)lf[230]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[279]+1),lf[280]);}
else{
/* batch-driver.scm:367: append */
t5=*((C_word*)lf[230]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[279]+1),C_SCHEME_END_OF_LIST);}}

/* k3479 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in ... */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3480,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3483,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3490,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3495,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3522,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:416: ##sys#dynamic-wind */
t10=*((C_word*)lf[251]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* k3554 in k3549 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in ... */
static void C_ccall f_3556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3556,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list(&a,1,lf[276]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5123,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[277],t3);}
else{
t3=C_a_i_list(&a,1,lf[278]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5129,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[277],t3);}}

/* f_3762 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in ... */
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3762,3,t0,t1,t2);}
t3=*((C_word*)lf[304]+1);
/* batch-driver.scm:312: g564 */
t4=*((C_word*)lf[304]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[305]);}

/* k3033 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in ... */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:487: display-line-number-database */
t2=*((C_word*)lf[210]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2405(2,t2,C_SCHEME_UNDEFINED);}}

/* k3030 in k3027 in k3025 in k3023 in k3021 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in ... */
static void C_ccall f_3032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:490: ##sys#notice */
t2=*((C_word*)lf[205]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3768 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in ... */
static void C_ccall f_3769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:312: append-map */
t2=*((C_word*)lf[306]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k4093 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in ... */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:251: register-feature! */
t3=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[345]);}

/* k4095 in k4093 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in ... */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:252: case-sensitive */
t2=*((C_word*)lf[332]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* f_3791 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in ... */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3791,3,t0,t1,t2);}
t3=*((C_word*)lf[304]+1);
/* batch-driver.scm:309: g539 */
t4=*((C_word*)lf[304]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[308]);}

/* k3797 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in ... */
static void C_ccall f_3798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:309: append-map */
t2=*((C_word*)lf[306]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k3481 in k3479 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f_3483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3390(t4,((C_word*)t0)[4],t3);}

/* k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in ... */
static void C_fcall f_2146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2146,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[351],t3))){
t4=C_set_block_item(lf[352] /* ##compiler#external-protos-first */,0,C_SCHEME_TRUE);
t5=t2;
f_2148(t5,t4);}
else{
t4=t2;
f_2148(t4,C_SCHEME_UNDEFINED);}}

/* k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in ... */
static void C_fcall f_2148(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2148,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[350],t3))){
t4=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t5=t2;
f_2150(t5,t4);}
else{
t4=t2;
f_2150(t4,C_SCHEME_UNDEFINED);}}

/* k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in ... */
static void C_fcall f_2142(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2142,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[355],t3))){
t4=C_mutate((C_word*)lf[356]+1 /* (set! number-type ...) */,lf[357]);
t5=t2;
f_2144(t5,t4);}
else{
t4=t2;
f_2144(t4,C_SCHEME_UNDEFINED);}}

/* k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in ... */
static void C_fcall f_2144(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2144,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[353],t3))){
t4=C_set_block_item(lf[354] /* ##compiler#block-compilation */,0,C_SCHEME_TRUE);
t5=t2;
f_2146(t5,t4);}
else{
t4=t2;
f_2146(t4,C_SCHEME_UNDEFINED);}}

/* k3779 in for-each-loop523 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in ... */
static void C_ccall f_3780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3771(t3,((C_word*)t0)[4],t2);}

/* k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in ... */
static void C_fcall f_2140(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2140,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[358],t3))){
t4=C_set_block_item(lf[134] /* ##compiler#insert-timer-checks */,0,C_SCHEME_FALSE);
t5=t2;
f_2142(t5,t4);}
else{
t4=t2;
f_2142(t4,C_SCHEME_UNDEFINED);}}

/* k3472 in map-loop714 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3473,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3448(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3448(t6,((C_word*)t0)[5],t5);}}

/* k3302 in map-loop820 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in ... */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3278(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3278(t6,((C_word*)t0)[5],t5);}}

/* f_3849 */
static void C_ccall f_3849(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3849r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3849r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3849r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[312]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* f_3847 in k3844 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in ... */
static void C_ccall f_3847(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3847,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3849,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3865,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:301: g484 */
t5=t3;
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[314]);}

/* k3844 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in ... */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3846,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3847,tmp=(C_word)a,a+=2,tmp);
t3=*((C_word*)lf[289]+1);
t4=C_i_check_list_2(*((C_word*)lf[289]+1),lf[42]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3889,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3889(t8,((C_word*)t0)[2],*((C_word*)lf[289]+1));}

/* f_3490 in k3479 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f_3490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3490,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[248]+1));
t3=C_mutate((C_word*)lf[248]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3730 in for-each-loop574 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in ... */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3722(t3,((C_word*)t0)[4],t2);}

/* k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in ... */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1){
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
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2175,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1 /* (set! ##compiler#verbose-mode ...) */,((C_word*)t0)[2]);
t3=C_set_block_item(lf[66] /* ##sys#read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[14]+1);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3998,a[2]=t4,a[3]=((C_word*)t0)[33],a[4]=t8,a[5]=t6,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:274: collect-options */
t11=((C_word*)((C_word*)t0)[22])[1];
f_1934(t11,t10,lf[327]);}

/* k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in ... */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[328],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4037,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5173,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[113]+1),lf[333],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2175(2,t4,C_SCHEME_UNDEFINED);}}

/* k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in ... */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[334],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4050,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5179,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[113]+1),lf[335],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2173(2,t4,C_SCHEME_UNDEFINED);}}

/* k3375 in map-loop788 in k3342 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in ... */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3376,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3351(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3351(t6,((C_word*)t0)[5],t5);}}

/* k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in ... */
static void C_fcall f_2124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2124,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[367],t3))){
t4=C_set_block_item(lf[349] /* ##compiler#local-definitions */,0,C_SCHEME_TRUE);
t5=t2;
f_2126(t5,t4);}
else{
t4=t2;
f_2126(t4,C_SCHEME_UNDEFINED);}}

/* k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in ... */
static void C_fcall f_2122(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2122,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[368],t3))){
t4=C_set_block_item(lf[369] /* ##compiler#compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t5=t2;
f_2124(t5,t4);}
else{
t4=t2;
f_2124(t4,C_SCHEME_UNDEFINED);}}

/* k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in ... */
static void C_fcall f_2128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2128,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[365] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t4=t2;
f_2130(t4,t3);}
else{
t3=t2;
f_2130(t3,C_SCHEME_UNDEFINED);}}

/* for-each-loop574 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in ... */
static void C_fcall f_3722(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3722,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3731,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:318: g575 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in ... */
static void C_fcall f_2126(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2126,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[366],t3))){
t4=C_set_block_item(lf[181] /* ##compiler#enable-inline-files */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t6=t2;
f_2128(t6,t5);}
else{
t4=t2;
f_2128(t4,C_SCHEME_UNDEFINED);}}

/* k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in ... */
static void C_fcall f_2120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2120,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[370],t3))){
t4=C_set_block_item(lf[371] /* ##compiler#emit-closure-info */,0,C_SCHEME_FALSE);
t5=t2;
f_2122(t5,t4);}
else{
t4=t2;
f_2122(t4,C_SCHEME_UNDEFINED);}}

/* f_3495 in k3479 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3500(t5,t1);}

/* k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in ... */
static void C_fcall f_2155(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2155,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[63],t2);
t4=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4114,a[2]=((C_word*)t0)[20],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:243: option-arg */
f_1657(t5,t3);}
else{
t5=t4;
f_2160(t5,C_SCHEME_FALSE);}}

/* k3750 in for-each-loop548 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in ... */
static void C_ccall f_3751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3742(t3,((C_word*)t0)[4],t2);}

/* k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in ... */
static void C_fcall f_2150(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2150,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[62],t2);
t4=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t3)){
t5=C_set_block_item(lf[177] /* ##compiler#inline-locally */,0,C_SCHEME_TRUE);
t6=C_set_block_item(lf[349] /* ##compiler#local-definitions */,0,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[19],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:241: option-arg */
f_1657(t7,t3);}
else{
t5=t4;
f_2155(t5,C_SCHEME_FALSE);}}

/* doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in ... */
static void C_fcall f_3390(C_word t0,C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3390,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=*((C_word*)lf[246]+1);
t9=((C_word*)t0)[3];
t10=C_i_check_list_2(t9,lf[58]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3407,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3448,a[2]=t7,a[3]=t13,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_3448(t15,t11,t9);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3480,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:423: check-and-open-input-file */
t5=*((C_word*)lf[252]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* for-each-loop548 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in ... */
static void C_fcall f_3742(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3742,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3751,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:310: g549 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in ... */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[336],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5185,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[113]+1),lf[338],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2171(2,t4,C_SCHEME_UNDEFINED);}}

/* k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in ... */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[34])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4062,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:254: option-arg */
f_1657(t3,((C_word*)t0)[34]);}
else{
t3=t2;
f_2169(2,t3,C_SCHEME_UNDEFINED);}}

/* k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in ... */
static void C_fcall f_2165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2165,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[6];
if(C_truep(C_u_i_memq(lf[345],t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4094,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5191,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[113]+1),lf[346],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2167(2,t4,C_SCHEME_UNDEFINED);}}

/* k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in ... */
static void C_fcall f_2160(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2160,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[64],t2);
t4=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2165,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4102,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:246: option-arg */
f_1657(t5,t3);}
else{
t5=t4;
f_2165(t5,C_SCHEME_FALSE);}}

/* k2538 in k2507 in k2505 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2539,2,t0,t1);}
t2=C_set_block_item(lf[101] /* ##compiler#inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:620: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2465(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[6]);}

/* f5103 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in ... */
static void C_ccall f5103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k3383 in k3380 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in ... */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_2372(2,t3,t2);}

/* k3380 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in ... */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:414: proc */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* f5097 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f5097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2090 in k2087 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2095,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[58]);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[36],a[3]=t5,a[4]=((C_word*)t0)[37],a[5]=((C_word*)t0)[38],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4217(t7,t3,t1);}

/* f_2082 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2082,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2088,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:186: string->symbol */
t4=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2087 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
/* ##sys#string-append */
t4=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,lf[56]);}

/* map-loop310 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 in ... */
static void C_fcall f_4217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4217,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4242,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:185: g316 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f5079 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in ... */
static void C_ccall f5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f5029 */
static void C_ccall f5029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f5023 in k2627 in k2625 in k2623 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f5023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f5059 */
static void C_ccall f5059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* f5067 in k2877 in k2869 */
static void C_ccall f5067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* print-expr in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1813(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1813,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1820,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:124: print-header */
f_1750(t5,t2,t3);}

/* k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in ... */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2344,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1 /* (set! ##compiler#source-filename ...) */,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2347,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:396: debugging */
t4=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[259],lf[263],((C_word*)t0)[18]);}

/* k1800 in k1797 in print-db in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:120: write */
t3=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in ... */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:398: debugging */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[259],lf[261],*((C_word*)lf[76]+1));}

/* k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in ... */
static void C_ccall f_2347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:397: debugging */
t3=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[259],lf[262],*((C_word*)lf[28]+1));}

/* k1806 in k1804 in k1802 in k1800 in k1797 in print-db in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:121: display-analysis-database */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1802 in k1800 in k1797 in print-db in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[4]);}

/* k1804 in k1802 in k1800 in k1797 in print-db in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* f5041 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in ... */
static void C_ccall f5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in ... */
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2465,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2469,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t6,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=t1,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=((C_word*)t0)[13],a[20]=((C_word*)t0)[14],a[21]=((C_word*)t0)[15],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:583: begin-time */
t9=((C_word*)((C_word*)t0)[5])[1];
f_1965(t9,t8);}

/* k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in ... */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm:584: analyze */
t3=((C_word*)((C_word*)t0)[11])[1];
f_2004(t3,t2,lf[152],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[2]));}

/* k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in ... */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2460,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2465,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp));
t5=((C_word*)t3)[1];
f_2465(t5,((C_word*)t0)[15],C_fix(1),((C_word*)t0)[16],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2334 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in ... */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:388: display */
t3=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[267]);}

/* f5035 in k2614 in k2612 in k2610 */
static void C_ccall f5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2338 in k2336 in k2334 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in ... */
static void C_ccall f_2339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:390: display */
t2=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[265]);}

/* k2336 in k2334 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in ... */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:389: display */
t3=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[266]);}

/* k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in ... */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2967,a[2]=t1,a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5079,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[199],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2420(2,t3,C_SCHEME_UNDEFINED);}}

/* k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in ... */
static void C_ccall f_2415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm:501: user-pass */
t3=*((C_word*)lf[3]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in ... */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
t3=((C_word*)t0)[18];
if(C_truep(C_u_i_memq(lf[200],t3))){
/* batch-driver.scm:499: exit */
t4=*((C_word*)lf[125]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=t2;
f_2415(2,t4,C_SCHEME_UNDEFINED);}}

/* k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in ... */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm:497: print-expr */
t3=((C_word*)((C_word*)t0)[20])[1];
f_1813(t3,t2,lf[201],lf[202],((C_word*)((C_word*)t0)[19])[1]);}

/* k3917 in for-each-loop424 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in ... */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3909(t3,((C_word*)t0)[4],t2);}

/* f5047 in k2681 in k2679 in k2677 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in ... */
static void C_ccall f5047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:103: debugging */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[33],t1);}

/* k2326 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in ... */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:384: display */
t2=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2320 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in ... */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:385: newline */
t2=*((C_word*)lf[41]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2299 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in ... */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:380: newline */
t2=*((C_word*)lf[41]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in ... */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=(C_truep(*((C_word*)lf[204]+1))?((C_word*)t0)[9]:C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:491: open-output-string */
t5=*((C_word*)lf[209]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_2407(2,t4,C_SCHEME_UNDEFINED);}}

/* k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in ... */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1 /* (set! ##sys#line-number-database ...) */,*((C_word*)lf[93]+1));
t3=C_set_block_item(lf[93] /* ##compiler#line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:496: end-time */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1975(t5,t4,lf[203]);}

/* k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in ... */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3041,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:484: debugging */
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[214],lf[215]);}

/* k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in ... */
static void C_ccall f_2403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:486: debugging */
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[211],lf[212]);}

/* for-each-loop424 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in ... */
static void C_fcall f_3909(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3909,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3918,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:294: g425 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop166 in k1818 in print-expr in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1834,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1843,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:125: g167 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in ... */
static void C_fcall f_2311(C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2311,NULL,2,t0,t1);}
if(C_truep(t1)){
/* batch-driver.scm:382: print-usage */
t2=*((C_word*)lf[86]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
if(C_truep(C_u_i_memq(lf[87],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2327,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:384: chicken-version */
t5=*((C_word*)lf[88]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[2],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[3],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
t5=C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5117,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t6,*((C_word*)lf[113]+1),lf[264],t5);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:387: print-version */
t5=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}}}}

/* k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in ... */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2181,2,t0,t1);}
t2=C_mutate((C_word*)lf[67]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
if(C_truep(((C_word*)t0)[14])){
if(C_truep(((C_word*)t0)[7])){
if(C_truep(C_i_string_equal_p(((C_word*)t0)[14],((C_word*)t0)[7]))){
/* batch-driver.scm:278: quit */
t4=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[326]);}
else{
t4=t3;
f_2183(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2183(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2183(2,t4,C_SCHEME_UNDEFINED);}}

/* k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in ... */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3944,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3983,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:282: collect-options */
t5=((C_word*)((C_word*)t0)[21])[1];
f_1934(t5,t4,lf[240]);}

/* k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in ... */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2187,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2189,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[2],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=((C_word*)t0)[5];
if(C_truep(C_u_i_memq(lf[323],t4))){
t5=C_set_block_item(lf[324] /* ##compiler#undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t6=t3;
f_2189(t6,t5);}
else{
t5=t3;
f_2189(t5,C_SCHEME_UNDEFINED);}}

/* k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in ... */
static void C_fcall f_2189(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2189,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2191,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[321],t3))){
t4=C_set_block_item(lf[322] /* ##compiler#no-argc-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2191(t5,t4);}
else{
t4=t2;
f_2191(t4,C_SCHEME_UNDEFINED);}}

/* k1842 in for-each-loop166 in k1818 in print-expr in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1834(t3,((C_word*)t0)[4],t2);}

/* k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in ... */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:514: initialize-analysis-database */
t3=*((C_word*)lf[191]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in ... */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2427,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],a[18]=t3,a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm:513: print-node */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1771(t5,t4,lf[192],lf[193],t1);}

/* f_2421 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in ... */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2421,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[94],t2,t3,t4));}

/* k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in ... */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2421,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:511: canonicalize-begin-body */
t6=*((C_word*)lf[197]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[19])[1]);}

/* k1895 in arg-val in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1896,2,t0,t1);}
t2=C_a_i_string_to_number(&a,2,t1,C_fix(10));
t3=C_a_i_times(&a,2,t2,C_fix(1048576));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* batch-driver.scm:140: quit */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],lf[43],((C_word*)t0)[3]);}}

/* k2524 in k2507 in k2505 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2525,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:616: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2465(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* f_1821 in k1818 in print-expr in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1821,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1824,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:127: pretty-print */
t4=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1818 in print-expr in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1820,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1821,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[42]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1834,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1834(t8,((C_word*)t0)[3],t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1823 */
static void C_ccall f_1824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:128: newline */
t2=*((C_word*)lf[41]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in ... */
static void C_fcall f_2191(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2191,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[319],t3))){
t4=C_set_block_item(lf[320] /* ##compiler#no-bound-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2193(t5,t4);}
else{
t4=t2;
f_2193(t4,C_SCHEME_UNDEFINED);}}

/* k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in ... */
static void C_fcall f_2193(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2193,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[317],t3))){
t4=C_set_block_item(lf[318] /* ##compiler#no-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2195(t5,t4);}
else{
t4=t2;
f_2195(t4,C_SCHEME_UNDEFINED);}}

/* k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in ... */
static void C_fcall f_2195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2195,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[315],t3))){
t4=C_set_block_item(lf[316] /* ##compiler#no-global-procedure-checks */,0,C_SCHEME_TRUE);
t5=t2;
f_2197(t5,t4);}
else{
t4=t2;
f_2197(t4,C_SCHEME_UNDEFINED);}}

/* k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in ... */
static void C_fcall f_2197(C_word t0,C_word t1){
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
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2197,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=((C_word*)t0)[4];
if(C_truep(C_u_i_memq(lf[311],t3))){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3806,tmp=(C_word)a,a+=2,tmp);
t5=*((C_word*)lf[287]+1);
t6=C_i_check_list_2(*((C_word*)lf[287]+1),lf[42]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3846,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3909,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_3909(t11,t7,*((C_word*)lf[287]+1));}
else{
t4=t2;
f_2199(2,t4,C_SCHEME_UNDEFINED);}}

/* k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in ... */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[33],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:304: load-verbose */
t4=*((C_word*)lf[310]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,C_SCHEME_TRUE);}
else{
t4=t2;
f_2201(2,t4,C_SCHEME_UNDEFINED);}}

/* k2505 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:611: print-node */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1771(t3,t2,lf[108],lf[109],((C_word*)t0)[6]);}

/* k2507 in k2505 */
static void C_ccall f_2508(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2508,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:613: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2465(t3,((C_word*)t0)[5],t2,((C_word*)t0)[6],C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)t0)[9]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:615: debugging */
t5=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[33],lf[100]);}
else{
t4=*((C_word*)lf[101]+1);
if(C_truep(*((C_word*)lf[101]+1))){
if(C_truep(*((C_word*)lf[102]+1))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:622: begin-time */
t6=((C_word*)((C_word*)t0)[11])[1];
f_1965(t6,t5);}
else{
t5=C_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
/* batch-driver.scm:635: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2465(t6,((C_word*)t0)[5],t5,((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[8]);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2539,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:618: debugging */
t6=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,lf[33],lf[107]);}}}}

/* f_2503 in k2486 in k2484 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in ... */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2503,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2506,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm:610: end-time */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1975(t5,t4,lf[110]);}

/* k3503 in loop */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* batch-driver.scm:428: close-checked-input-file */
t2=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
/* batch-driver.scm:431: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3500(t4,((C_word*)t0)[2]);}}

/* loop */
static void C_fcall f_3500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3500,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3504,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm:426: read/source-info */
t3=*((C_word*)lf[250]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3062 in k3060 in k3058 */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* batch-driver.scm:482: display */
t5=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[3]);}

/* k3060 in k3058 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:482: display */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[217],((C_word*)t0)[3]);}

/* k3976 in map-loop398 in k3946 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3977,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3952(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3952(t6,((C_word*)t0)[5],t5);}}

/* f_2603 in k2597 in k2595 in k2593 in k2591 in k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in ... */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
/* batch-driver.scm:657: prepare-for-code-generation */
t2=*((C_word*)lf[112]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);}

/* f_2608 in k2597 in k2595 in k2593 in k2591 in k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in ... */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2608,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2611,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t4,a[7]=t5,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm:658: end-time */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1975(t7,t6,lf[124]);}

/* k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2507 in k2505 */
static void C_ccall f_2561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2561,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* batch-driver.scm:629: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2465(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7]);}

/* f_3522 in k3479 in doloop709 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in ... */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3522,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[248]+1));
t3=C_mutate((C_word*)lf[248]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3064 in k3062 in k3060 in k3058 */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k3527 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in k2309 in k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in ... */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3528,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3534,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:409: collect-options */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1934(t4,t3,lf[253]);}

/* for-each-loop951 in k3054 */
static void C_fcall f_3080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3080,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3089,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:481: g952 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2554 in k2552 in k2550 in k2507 in k2505 */
static void C_ccall f_2555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:625: begin-time */
t3=((C_word*)((C_word*)t0)[9])[1];
f_1965(t3,t2);}

/* k2552 in k2550 in k2507 in k2505 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm:624: end-time */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1975(t3,t2,lf[105]);}

/* k3997 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in ... */
static void C_ccall f_3998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3998,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[58]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4003,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4005(t7,t3,t1);}

/* k2558 in k2556 in k2554 in k2552 in k2550 in k2507 in k2505 */
static void C_ccall f_2559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:628: end-time */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1975(t3,t2,lf[103]);}

/* k2556 in k2554 in k2552 in k2550 in k2507 in k2505 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:627: transform-direct-lambdas! */
t3=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[8]);}

/* k2550 in k2507 in k2505 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:623: analyze */
t3=((C_word*)((C_word*)t0)[9])[1];
f_2004(t3,t2,lf[106],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* map-loop853 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in ... */
static void C_fcall f_3248(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3248,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:455: g859 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4404,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[11],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
t6=C_u_i_memq(lf[12],t5);
t7=((C_word*)t0)[2];
t8=C_u_i_memq(lf[13],t7);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t8)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:62: g70 */
t11=t10;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t8);}
else{
t10=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[398],t10))){
t11=t9;
f_1697(2,t11,C_SCHEME_FALSE);}
else{
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4395,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
/* batch-driver.scm:69: pathname-file */
t12=*((C_word*)lf[400]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[5]);}
else{
/* batch-driver.scm:69: make-pathname */
t12=*((C_word*)lf[161]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t9,C_SCHEME_FALSE,lf[401],lf[399]);}}}}

/* k3982 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in ... */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:280: append-map */
t2=*((C_word*)lf[306]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* print-header in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1750(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1750,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1754,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:106: debugging */
t5=*((C_word*)lf[32]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[33],lf[34],t2);}

/* k1753 in print-header in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1754,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[28]+1)))){
t2=*((C_word*)lf[29]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1762,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(91),*((C_word*)lf[29]+1));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3242 in map-loop883 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in ... */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3243,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3218(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3218(t6,((C_word*)t0)[5],t5);}}

/* k3088 in for-each-loop951 in k3054 */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3080(t3,((C_word*)t0)[4],t2);}

/* k1767 in k1765 in k1763 in k1761 in k1753 in print-header in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k1765 in k1763 in k1761 in k1753 in print-header in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in ... */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3116,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3118,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[227]+1);
t8=C_i_check_list_2(*((C_word*)lf[227]+1),lf[58]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3218,a[2]=t5,a[3]=t11,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3218(t13,t9,*((C_word*)lf[227]+1));}

/* k1761 in k1753 in print-header in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:109: display */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* f_3118 in k3114 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in ... */
static void C_ccall f_3118(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3118,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[226],t2));}

/* k1763 in k1761 in k1753 in print-header in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[3]);}

/* k3023 in k3021 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in ... */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:491: display */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[204]+1),((C_word*)t0)[4]);}

/* k3021 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in ... */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3022,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:491: display */
t4=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[208],t2);}

/* f_3100 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in k2343 in ... */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3100,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t2;
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,2,lf[223],t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[224],t3,t6));}

/* k1776 in print-node in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1778,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* batch-driver.scm:115: dump-nodes */
t2=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:116: build-expression-tree */
t3=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_3052 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in k2346 in ... */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:480: print */
t3=*((C_word*)lf[219]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[220]);}

/* print-node in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1771(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1771,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1778,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:113: print-header */
f_1750(t5,t2,t3);}

/* k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in ... */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[285],t3))){
t4=t2;
f_2287(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_mutate((C_word*)lf[286]+1 /* (set! standard-bindings ...) */,*((C_word*)lf[287]+1));
t5=C_mutate((C_word*)lf[288]+1 /* (set! extended-bindings ...) */,*((C_word*)lf[289]+1));
t6=t2;
f_2287(t6,t5);}}

/* k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in ... */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2283,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1 /* (set! ##compiler#bootstrap-mode ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
t4=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[290],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:351: set-gc-report! */
t5=*((C_word*)lf[291]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,C_SCHEME_TRUE);}
else{
t5=t3;
f_2285(2,t5,C_SCHEME_UNDEFINED);}}

/* k3027 in k3025 in k3023 in k3021 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in ... */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:491: get-output-string */
t3=*((C_word*)lf[206]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3025 in k3023 in k3021 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in ... */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:491: display */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[207],((C_word*)t0)[4]);}

/* k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in ... */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(((C_word*)t0)[26])){
t3=C_i_car(((C_word*)t0)[26]);
t4=C_eqp(lf[273],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3550,a[2]=((C_word*)t0)[23],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[21])){
t6=t5;
f_3550(2,t6,C_SCHEME_UNDEFINED);}
else{
/* batch-driver.scm:362: quit */
t6=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[281]);}}
else{
t6=t5;
f_3550(2,t6,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2291(2,t3,C_SCHEME_UNDEFINED);}}

/* k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in ... */
static void C_fcall f_2287(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2287,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(*((C_word*)lf[79]+1))){
t3=C_a_i_list(&a,1,lf[282]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5135,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[283],t3);}
else{
t3=C_a_i_list(&a,1,lf[284]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5141,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[283],t3);}}

/* map-loop398 in k3946 */
static void C_fcall f_3952(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3952,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:281: g404 */
t5=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3039 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in k2380 in k2378 in k2375 in k2373 in k2370 in k2368 in k2366 in k2364 in k2362 in k2359 in k2355 in k2352 in k2350 in k2348 in ... */
static void C_ccall f_3041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm:485: display-real-name-table */
t2=*((C_word*)lf[213]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2403(2,t2,C_SCHEME_UNDEFINED);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_driver_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("driver_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3113)){
C_save(t1);
C_rereclaim2(3113*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,406);
lf[0]=C_h_intern(&lf[0],17,"user-options-pass");
lf[1]=C_h_intern(&lf[1],14,"user-read-pass");
lf[2]=C_h_intern(&lf[2],22,"user-preprocessor-pass");
lf[3]=C_h_intern(&lf[3],9,"user-pass");
lf[4]=C_h_intern(&lf[4],23,"user-post-analysis-pass");
lf[5]=C_h_intern(&lf[5],19,"compile-source-file");
lf[6]=C_h_intern(&lf[6],13,"\010compilerquit");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~A\047 option");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid argument to `~A\047 option");
lf[9]=C_h_intern(&lf[9],26,"\010compilerexplicit-use-flag");
lf[10]=C_h_intern(&lf[10],12,"explicit-use");
lf[11]=C_h_intern(&lf[11],12,"\004coredeclare");
lf[12]=C_h_intern(&lf[12],7,"verbose");
lf[13]=C_h_intern(&lf[13],11,"output-file");
lf[14]=C_h_intern(&lf[14],23,"\010compilerchop-separator");
lf[15]=C_h_intern(&lf[15],36,"\010compilerdefault-optimization-passes");
lf[16]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\003sysimplicit-exit-handler\376\377\016\376\377\016\376\377\016");
lf[17]=C_h_intern(&lf[17],7,"profile");
lf[18]=C_h_intern(&lf[18],12,"profile-name");
lf[19]=C_h_intern(&lf[19],9,"heap-size");
lf[20]=C_h_intern(&lf[20],13,"keyword-style");
lf[21]=C_h_intern(&lf[21],10,"clustering");
lf[22]=C_h_intern(&lf[22],4,"unit");
lf[23]=C_h_intern(&lf[23],12,"analyze-only");
lf[24]=C_h_intern(&lf[24],7,"dynamic");
lf[25]=C_h_intern(&lf[25],10,"scrutinize");
lf[26]=C_h_intern(&lf[26],6,"module");
lf[27]=C_h_intern(&lf[27],7,"nursery");
lf[28]=C_h_intern(&lf[28],26,"\010compilerdebugging-chicken");
lf[29]=C_h_intern(&lf[29],19,"\003sysstandard-output");
lf[30]=C_h_intern(&lf[30],19,"\003syswrite-char/port");
lf[31]=C_h_intern(&lf[31],7,"display");
lf[32]=C_h_intern(&lf[32],18,"\010compilerdebugging");
lf[33]=C_h_intern(&lf[33],1,"p");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\004pass");
lf[35]=C_h_intern(&lf[35],19,"\010compilerdump-nodes");
lf[36]=C_h_intern(&lf[36],12,"pretty-print");
lf[37]=C_h_intern(&lf[37],30,"\010compilerbuild-expression-tree");
lf[38]=C_h_intern(&lf[38],34,"\010compilerdisplay-analysis-database");
lf[39]=C_h_intern(&lf[39],5,"write");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\013(iteration ");
lf[41]=C_h_intern(&lf[41],7,"newline");
lf[42]=C_h_intern(&lf[42],8,"for-each");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid numeric argument ~S");
lf[44]=C_h_intern(&lf[44],9,"substring");
lf[45]=C_h_intern(&lf[45],20,"current-milliseconds");
lf[46]=C_h_intern(&lf[46],5,"round");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\003: \011");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\030milliseconds needed for ");
lf[49]=C_h_intern(&lf[49],12,"\010compilerget");
lf[50]=C_h_intern(&lf[50],13,"\010compilerput!");
lf[51]=C_h_intern(&lf[51],27,"\010compileranalyze-expression");
lf[52]=C_h_intern(&lf[52],30,"\010compilerenable-specialization");
lf[53]=C_h_intern(&lf[53],10,"specialize");
lf[54]=C_h_intern(&lf[54],1,"D");
lf[55]=C_h_intern(&lf[55],17,"\003sysstring-append");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\013.import.scm");
lf[57]=C_h_intern(&lf[57],14,"string->symbol");
lf[58]=C_h_intern(&lf[58],3,"map");
lf[59]=C_h_intern(&lf[59],25,"\010compilerimport-libraries");
lf[60]=C_h_intern(&lf[60],22,"no-module-registration");
lf[61]=C_h_intern(&lf[61],35,"\010compilerenable-module-registration");
lf[62]=C_h_intern(&lf[62],16,"emit-inline-file");
lf[63]=C_h_intern(&lf[63],14,"emit-type-file");
lf[64]=C_h_intern(&lf[64],12,"inline-limit");
lf[65]=C_h_intern(&lf[65],21,"\010compilerverbose-mode");
lf[66]=C_h_intern(&lf[66],31,"\003sysread-error-with-line-number");
lf[67]=C_h_intern(&lf[67],21,"\003sysinclude-pathnames");
lf[68]=C_h_intern(&lf[68],17,"register-feature!");
lf[69]=C_h_intern(&lf[69],19,"unregister-feature!");
lf[70]=C_h_intern(&lf[70],19,"\000compiler-extension");
lf[71]=C_h_intern(&lf[71],12,"\003sysfeatures");
lf[72]=C_h_intern(&lf[72],4,"load");
lf[73]=C_h_intern(&lf[73],28,"\003sysresolve-include-filename");
lf[74]=C_h_intern(&lf[74],10,"\000compiling");
lf[75]=C_h_intern(&lf[75],28,"\003sysexplicit-library-modules");
lf[76]=C_h_intern(&lf[76],25,"\010compilertarget-heap-size");
lf[77]=C_h_intern(&lf[77],26,"\010compilertarget-stack-size");
lf[78]=C_h_intern(&lf[78],8,"no-trace");
lf[79]=C_h_intern(&lf[79],24,"\010compileremit-trace-info");
lf[80]=C_h_intern(&lf[80],40,"\010compilerdisable-stack-overflow-checking");
lf[81]=C_h_intern(&lf[81],29,"disable-stack-overflow-checks");
lf[82]=C_h_intern(&lf[82],23,"\010compilerbootstrap-mode");
lf[83]=C_h_intern(&lf[83],7,"version");
lf[84]=C_h_intern(&lf[84],22,"\010compilerprint-version");
lf[85]=C_h_intern(&lf[85],4,"help");
lf[86]=C_h_intern(&lf[86],20,"\010compilerprint-usage");
lf[87]=C_h_intern(&lf[87],7,"release");
lf[88]=C_h_intern(&lf[88],15,"chicken-version");
lf[89]=C_h_intern(&lf[89],24,"\010compilersource-filename");
lf[90]=C_h_intern(&lf[90],24,"\003sysline-number-database");
lf[91]=C_h_intern(&lf[91],32,"\010compilercanonicalize-expression");
lf[92]=C_h_intern(&lf[92],28,"\010compilerprofile-lambda-list");
lf[93]=C_h_intern(&lf[93],31,"\010compilerline-number-database-2");
lf[94]=C_h_intern(&lf[94],4,"node");
lf[95]=C_h_intern(&lf[95],23,"\010compilerconstant-table");
lf[96]=C_h_intern(&lf[96],21,"\010compilerinline-table");
lf[97]=C_h_intern(&lf[97],23,"\010compilerfirst-analysis");
lf[98]=C_h_intern(&lf[98],36,"\010compilerdetermine-loop-and-dispatch");
lf[99]=C_h_intern(&lf[99],41,"\010compilerperform-high-level-optimizations");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\022clustering enabled");
lf[101]=C_h_intern(&lf[101],37,"\010compilerinline-substitutions-enabled");
lf[102]=C_h_intern(&lf[102],22,"optimize-leaf-routines");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\031leaf routine optimization");
lf[104]=C_h_intern(&lf[104],34,"\010compilertransform-direct-lambdas!");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[106]=C_h_intern(&lf[106],4,"leaf");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\022rewritings enabled");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\023optimized-iteration");
lf[109]=C_h_intern(&lf[109],1,"5");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\014optimization");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\021optimization pass");
lf[112]=C_h_intern(&lf[112],36,"\010compilerprepare-for-code-generation");
lf[113]=C_h_intern(&lf[113],7,"sprintf");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\025compilation finished.");
lf[115]=C_h_intern(&lf[115],30,"\010compilercompiler-cleanup-hook");
lf[116]=C_h_intern(&lf[116],1,"t");
lf[117]=C_h_intern(&lf[117],17,"\003sysdisplay-times");
lf[118]=C_h_intern(&lf[118],14,"\003sysstop-timer");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\017code generation");
lf[120]=C_h_intern(&lf[120],17,"close-output-port");
lf[121]=C_h_intern(&lf[121],22,"\010compilergenerate-code");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\023generating `~A\047 ...");
lf[123]=C_h_intern(&lf[123],16,"open-output-file");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\013preparation");
lf[125]=C_h_intern(&lf[125],4,"exit");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\021closure-converted");
lf[127]=C_h_intern(&lf[127],1,"9");
lf[128]=C_h_intern(&lf[128],20,"\003syswarnings-enabled");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000#(don\047t worry - still compiling...)\012");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\016final-analysis");
lf[131]=C_h_intern(&lf[131],1,"8");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\022closure conversion");
lf[133]=C_h_intern(&lf[133],35,"\010compilerperform-closure-conversion");
lf[134]=C_h_intern(&lf[134],28,"\010compilerinsert-timer-checks");
lf[135]=C_h_intern(&lf[135],32,"\010compileremit-global-inline-file");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000&generating global inline file `~a\047 ...");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\011optimized");
lf[138]=C_h_intern(&lf[138],1,"7");
lf[139]=C_h_intern(&lf[139],1,"s");
lf[140]=C_h_intern(&lf[140],33,"\010compilerprint-program-statistics");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[142]=C_h_intern(&lf[142],1,"4");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[144]=C_h_intern(&lf[144],23,"\010compileremit-type-file");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\035generating type file `~a\047 ...");
lf[146]=C_h_intern(&lf[146],1,"v");
lf[147]=C_h_intern(&lf[147],25,"\010compilerdump-global-refs");
lf[148]=C_h_intern(&lf[148],1,"d");
lf[149]=C_h_intern(&lf[149],29,"\010compilerdump-defined-globals");
lf[150]=C_h_intern(&lf[150],1,"u");
lf[151]=C_h_intern(&lf[151],31,"\010compilerdump-undefined-globals");
lf[152]=C_h_intern(&lf[152],3,"opt");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\003cps");
lf[154]=C_h_intern(&lf[154],1,"3");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\016cps conversion");
lf[156]=C_h_intern(&lf[156],31,"\010compilerperform-cps-conversion");
lf[157]=C_h_intern(&lf[157],6,"unsafe");
lf[158]=C_h_intern(&lf[158],34,"\010compilerscan-toplevel-assignments");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\034type-database `~a\047 not found");
lf[160]=C_h_intern(&lf[160],27,"\010compilerload-type-database");
lf[161]=C_h_intern(&lf[161],13,"make-pathname");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\005types");
lf[163]=C_h_intern(&lf[163],14,"symbol->string");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\016specialization");
lf[165]=C_h_intern(&lf[165],1,"P");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\010scrutiny");
lf[167]=C_h_intern(&lf[167],19,"\010compilerscrutinize");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\023performing scrutiny");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\027pre-analysis (scrutiny)");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[171]=C_h_intern(&lf[171],1,"0");
lf[172]=C_h_intern(&lf[172],8,"scrutiny");
lf[173]=C_h_intern(&lf[173],5,"types");
lf[174]=C_h_intern(&lf[174],17,"ignore-repository");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\052default type-database `types.db\047 not found");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\010types.db");
lf[177]=C_h_intern(&lf[177],23,"\010compilerinline-locally");
lf[178]=C_h_intern(&lf[178],25,"\010compilerload-inline-file");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[180]=C_h_intern(&lf[180],19,"consult-inline-file");
lf[181]=C_h_intern(&lf[181],28,"\010compilerenable-inline-files");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[183]=C_h_intern(&lf[183],12,"file-exists\077");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[185]=C_h_intern(&lf[185],2,"pp");
lf[186]=C_h_intern(&lf[186],1,"M");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\017; requirements:");
lf[188]=C_h_intern(&lf[188],11,"concatenate");
lf[189]=C_h_intern(&lf[189],12,"vector->list");
lf[190]=C_h_intern(&lf[190],26,"\010compilerfile-requirements");
lf[191]=C_h_intern(&lf[191],37,"\010compilerinitialize-analysis-database");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\021initial node tree");
lf[193]=C_h_intern(&lf[193],1,"T");
lf[194]=C_h_intern(&lf[194],6,"lambda");
lf[195]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\016\376\377\016");
lf[196]=C_h_intern(&lf[196],25,"\010compilerbuild-node-graph");
lf[197]=C_h_intern(&lf[197],32,"\010compilercanonicalize-begin-body");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\011user pass");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\014User pass...");
lf[200]=C_h_intern(&lf[200],12,"check-syntax");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\015canonicalized");
lf[202]=C_h_intern(&lf[202],1,"2");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\020canonicalization");
lf[204]=C_h_intern(&lf[204],18,"\010compilerunit-name");
lf[205]=C_h_intern(&lf[205],10,"\003sysnotice");
lf[206]=C_h_intern(&lf[206],17,"get-output-string");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\032\047 compiled in dynamic mode");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\016library unit `");
lf[209]=C_h_intern(&lf[209],18,"open-output-string");
lf[210]=C_h_intern(&lf[210],37,"\010compilerdisplay-line-number-database");
lf[211]=C_h_intern(&lf[211],1,"n");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\025line number database:");
lf[213]=C_h_intern(&lf[213],32,"\010compilerdisplay-real-name-table");
lf[214]=C_h_intern(&lf[214],1,"N");
lf[215]=C_decode_literal(C_heaptop,"\376B\000\000\020real name table:");
lf[216]=C_h_intern(&lf[216],35,"\010compilercompiler-syntax-statistics");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\002\011\011");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[219]=C_h_intern(&lf[219],5,"print");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\030applied compiler syntax:");
lf[221]=C_h_intern(&lf[221],30,"\010compilerwith-debugging-output");
lf[222]=C_h_intern(&lf[222],1,"S");
lf[223]=C_h_intern(&lf[223],5,"quote");
lf[224]=C_h_intern(&lf[224],4,"set!");
lf[225]=C_h_intern(&lf[225],28,"\010compilerimmutable-constants");
lf[226]=C_h_intern(&lf[226],13,"\004corecallunit");
lf[227]=C_h_intern(&lf[227],19,"\010compilerused-units");
lf[228]=C_h_intern(&lf[228],28,"\003sysset-profile-info-vector!");
lf[229]=C_h_intern(&lf[229],33,"\010compilerprofile-info-vector-name");
lf[230]=C_h_intern(&lf[230],6,"append");
lf[231]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[232]=C_h_intern(&lf[232],21,"\010compileremit-profile");
lf[233]=C_h_intern(&lf[233],25,"\003sysregister-profile-info");
lf[234]=C_h_intern(&lf[234],6,"gensym");
lf[235]=C_h_intern(&lf[235],6,"import");
lf[236]=C_h_intern(&lf[236],6,"scheme");
lf[237]=C_h_intern(&lf[237],7,"chicken");
lf[238]=C_h_intern(&lf[238],4,"main");
lf[239]=C_h_intern(&lf[239],11,"\004coremodule");
lf[240]=C_h_intern(&lf[240],4,"uses");
lf[241]=C_h_intern(&lf[241],7,"declare");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\006source");
lf[243]=C_h_intern(&lf[243],1,"1");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\032User preprocessing pass...");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\021User read pass...");
lf[246]=C_h_intern(&lf[246],21,"\010compilerstring->expr");
lf[247]=C_h_intern(&lf[247],7,"reverse");
lf[248]=C_h_intern(&lf[248],27,"\003syscurrent-source-filename");
lf[249]=C_h_intern(&lf[249],33,"\010compilerclose-checked-input-file");
lf[250]=C_h_intern(&lf[250],25,"\010compilerread/source-info");
lf[251]=C_h_intern(&lf[251],16,"\003sysdynamic-wind");
lf[252]=C_h_intern(&lf[252],34,"\010compilercheck-and-open-input-file");
lf[253]=C_h_intern(&lf[253],8,"epilogue");
lf[254]=C_h_intern(&lf[254],8,"prologue");
lf[255]=C_h_intern(&lf[255],8,"postlude");
lf[256]=C_h_intern(&lf[256],7,"prelude");
lf[257]=C_h_intern(&lf[257],11,"make-vector");
lf[258]=C_h_intern(&lf[258],34,"\010compilerline-number-database-size");
lf[259]=C_h_intern(&lf[259],1,"r");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\021target stack size");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\020target heap size");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\021debugging options");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\007options");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\022compiling `~a\047 ...");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\0001\012Run `csi\047 to start the interactive interpreter.\012");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000.or try `csc\047 for a more convenient interface.\012");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000C\012Enter `chicken -help\047 for information on how to use the compiler,\012");
lf[268]=C_h_intern(&lf[268],5,"-help");
lf[269]=C_h_intern(&lf[269],1,"h");
lf[270]=C_h_intern(&lf[270],2,"-h");
lf[271]=C_h_intern(&lf[271],33,"\010compilerload-identifier-database");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[273]=C_h_intern(&lf[273],18,"accumulate-profile");
lf[274]=C_h_intern(&lf[274],28,"\010compilerprofiled-procedures");
lf[275]=C_h_intern(&lf[275],3,"all");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\015accumulative ");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\032generating ~aprofiled code");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[279]=C_h_intern(&lf[279],39,"\010compilerdefault-profiling-declarations");
lf[280]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004set!\376\003\000\000\002\376\001\000\000\027\003sysprofile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000Eyou need to specify -profile-name if using accumulated profiling runs");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\011calltrace");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\022debugging info: ~A");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[285]=C_h_intern(&lf[285],21,"no-usual-integrations");
lf[286]=C_h_intern(&lf[286],17,"standard-bindings");
lf[287]=C_h_intern(&lf[287],34,"\010compilerdefault-standard-bindings");
lf[288]=C_h_intern(&lf[288],17,"extended-bindings");
lf[289]=C_h_intern(&lf[289],34,"\010compilerdefault-extended-bindings");
lf[290]=C_h_intern(&lf[290],1,"m");
lf[291]=C_h_intern(&lf[291],14,"set-gc-report!");
lf[292]=C_h_intern(&lf[292],8,"feature\077");
lf[293]=C_h_intern(&lf[293],18,"\000chicken-bootstrap");
lf[294]=C_h_intern(&lf[294],14,"compile-syntax");
lf[295]=C_h_intern(&lf[295],25,"\003sysenable-runtime-macros");
lf[296]=C_h_intern(&lf[296],22,"\004corerequire-extension");
lf[297]=C_h_intern(&lf[297],17,"require-extension");
lf[298]=C_h_intern(&lf[298],16,"static-extension");
lf[299]=C_h_intern(&lf[299],28,"\010compilerpostponed-initforms");
lf[300]=C_h_intern(&lf[300],6,"delete");
lf[301]=C_h_intern(&lf[301],3,"eq\077");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\036Loading compiler extensions...");
lf[303]=C_h_intern(&lf[303],6,"extend");
lf[304]=C_h_intern(&lf[304],12,"string-split");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[306]=C_h_intern(&lf[306],10,"append-map");
lf[307]=C_h_intern(&lf[307],10,"no-feature");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[309]=C_h_intern(&lf[309],7,"feature");
lf[310]=C_h_intern(&lf[310],12,"load-verbose");
lf[311]=C_h_intern(&lf[311],38,"no-procedure-checks-for-usual-bindings");
lf[312]=C_h_intern(&lf[312],8,"\003sysput!");
lf[313]=C_h_intern(&lf[313],21,"\010compileralways-bound");
lf[314]=C_h_intern(&lf[314],34,"\010compileralways-bound-to-procedure");
lf[315]=C_h_intern(&lf[315],41,"no-procedure-checks-for-toplevel-bindings");
lf[316]=C_h_intern(&lf[316],35,"\010compilerno-global-procedure-checks");
lf[317]=C_h_intern(&lf[317],19,"no-procedure-checks");
lf[318]=C_h_intern(&lf[318],28,"\010compilerno-procedure-checks");
lf[319]=C_h_intern(&lf[319],15,"no-bound-checks");
lf[320]=C_h_intern(&lf[320],24,"\010compilerno-bound-checks");
lf[321]=C_h_intern(&lf[321],14,"no-argc-checks");
lf[322]=C_h_intern(&lf[322],23,"\010compilerno-argc-checks");
lf[323]=C_h_intern(&lf[323],20,"keep-shadowed-macros");
lf[324]=C_h_intern(&lf[324],33,"\010compilerundefine-shadowed-macros");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000(source- and output-filename are the same");
lf[327]=C_h_intern(&lf[327],12,"include-path");
lf[328]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[329]=C_h_intern(&lf[329],13,"symbol-escape");
lf[330]=C_h_intern(&lf[330],20,"parentheses-synonyms");
lf[331]=C_h_intern(&lf[331],5,"\000none");
lf[332]=C_h_intern(&lf[332],14,"case-sensitive");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000.Disabled the Chicken extensions to R5RS syntax");
lf[334]=C_h_intern(&lf[334],16,"no-symbol-escape");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000$Disabled support for escaped symbols");
lf[336]=C_h_intern(&lf[336],23,"no-parenthesis-synonyms");
lf[337]=C_h_intern(&lf[337],20,"parenthesis-synonyms");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000)Disabled support for parenthesis synonyms");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[340]=C_h_intern(&lf[340],7,"\000prefix");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[343]=C_h_intern(&lf[343],7,"\000suffix");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000+invalid argument to `-keyword-style\047 option");
lf[345]=C_h_intern(&lf[345],16,"case-insensitive");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000,Identifiers and symbols are case insensitive");
lf[347]=C_h_intern(&lf[347],24,"\010compilerinline-max-size");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047");
lf[349]=C_h_intern(&lf[349],26,"\010compilerlocal-definitions");
lf[350]=C_h_intern(&lf[350],6,"inline");
lf[351]=C_h_intern(&lf[351],30,"emit-external-prototypes-first");
lf[352]=C_h_intern(&lf[352],30,"\010compilerexternal-protos-first");
lf[353]=C_h_intern(&lf[353],5,"block");
lf[354]=C_h_intern(&lf[354],26,"\010compilerblock-compilation");
lf[355]=C_h_intern(&lf[355],17,"fixnum-arithmetic");
lf[356]=C_h_intern(&lf[356],11,"number-type");
lf[357]=C_h_intern(&lf[357],6,"fixnum");
lf[358]=C_h_intern(&lf[358],18,"disable-interrupts");
lf[359]=C_h_intern(&lf[359],10,"setup-mode");
lf[360]=C_h_intern(&lf[360],14,"\003syssetup-mode");
lf[361]=C_h_intern(&lf[361],11,"no-warnings");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\025Warnings are disabled");
lf[363]=C_h_intern(&lf[363],12,"strict-types");
lf[364]=C_h_intern(&lf[364],30,"\010compilerstrict-variable-types");
lf[365]=C_h_intern(&lf[365],19,"\003sysnotices-enabled");
lf[366]=C_h_intern(&lf[366],13,"inline-global");
lf[367]=C_h_intern(&lf[367],5,"local");
lf[368]=C_h_intern(&lf[368],18,"no-compiler-syntax");
lf[369]=C_h_intern(&lf[369],32,"\010compilercompiler-syntax-enabled");
lf[370]=C_h_intern(&lf[370],14,"no-lambda-info");
lf[371]=C_h_intern(&lf[371],26,"\010compileremit-closure-info");
lf[372]=C_h_intern(&lf[372],3,"raw");
lf[373]=C_h_intern(&lf[373],8,"unboxing");
lf[374]=C_h_intern(&lf[374],7,"warning");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000#obsolete compiler option: -unboxing");
lf[376]=C_h_intern(&lf[376],11,"lambda-lift");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000&obsolete compiler option: -lambda-lift");
lf[378]=C_h_intern(&lf[378],12,"emit-exports");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\047obsolete compiler option: -emit-exports");
lf[380]=C_h_intern(&lf[380],1,"b");
lf[381]=C_h_intern(&lf[381],15,"\003sysstart-timer");
lf[382]=C_h_intern(&lf[382],25,"emit-all-import-libraries");
lf[383]=C_h_intern(&lf[383],29,"\010compilerall-import-libraries");
lf[384]=C_h_intern(&lf[384],19,"emit-import-library");
lf[385]=C_h_intern(&lf[385],28,"\010compilerprint-debug-options");
lf[386]=C_h_intern(&lf[386],16,"\003sysstring->list");
lf[387]=C_h_intern(&lf[387],5,"debug");
lf[388]=C_h_intern(&lf[388],18,"\003sysdload-disabled");
lf[389]=C_h_intern(&lf[389],15,"repository-path");
lf[390]=C_h_intern(&lf[390],30,"\010compilerstandalone-executable");
lf[391]=C_h_intern(&lf[391],29,"\010compilerstring->c-identifier");
lf[392]=C_h_intern(&lf[392],18,"\010compilerstringify");
lf[393]=C_h_intern(&lf[393],10,"stack-size");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[396]=C_h_intern(&lf[396],24,"get-environment-variable");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[398]=C_h_intern(&lf[398],9,"to-stdout");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[400]=C_h_intern(&lf[400],13,"pathname-file");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\003out");
lf[402]=C_h_intern(&lf[402],29,"\010compilerdefault-declarations");
lf[403]=C_h_intern(&lf[403],30,"\010compilerunits-used-by-default");
lf[404]=C_h_intern(&lf[404],28,"\010compilerinitialize-compiler");
lf[405]=C_h_intern(&lf[405],14,"make-parameter");
C_register_lf2(lf,406,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in ... */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2272,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1 /* (set! ##compiler#target-stack-size ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[78],t3);
t5=C_i_not(t4);
t6=C_mutate((C_word*)lf[79]+1 /* (set! ##compiler#emit-trace-info ...) */,t5);
t7=((C_word*)t0)[2];
t8=C_mutate((C_word*)lf[80]+1 /* (set! ##compiler#disable-stack-overflow-checking ...) */,C_u_i_memq(lf[81],t7));
t9=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm:350: feature? */
t10=*((C_word*)lf[292]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,lf[293]);}

/* k3058 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
/* batch-driver.scm:482: display */
t4=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* k3597 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in ... */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:347: arg-val */
f_1854(((C_word*)t0)[3],t1);}

/* k3054 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3056,tmp=(C_word)a,a+=2,tmp);
t3=*((C_word*)lf[216]+1);
t4=C_i_check_list_2(*((C_word*)lf[216]+1),lf[42]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3080,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3080(t8,((C_word*)t0)[2],*((C_word*)lf[216]+1));}

/* f_3056 in k3054 */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3056,3,t0,t1,t2);}
t3=*((C_word*)lf[29]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3059,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:482: display */
t5=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[218],*((C_word*)lf[29]+1));}

/* f_3944 in k2182 in k2179 in k2174 in k2172 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in ... */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3944,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3947,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:281: string-split */
t8=*((C_word*)lf[304]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,lf[325]);}

/* k3946 */
static void C_ccall f_3947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3947,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3952(t5,((C_word*)t0)[4],t1);}

/* f_2713 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in ... */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2713,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k2612 in k2610 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:660: open-output-file */
t3=*((C_word*)lf[123]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t3=t2;
f_2615(2,t3,*((C_word*)lf[29]+1));}}

/* k2614 in k2612 in k2610 */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_a_i_list(&a,1,((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5035,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[122],t3);}

/* k2610 */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm:659: begin-time */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1965(t3,t2);}

/* k2292 in k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in ... */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2293,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[83],t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:379: print-version */
t4=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_memq(lf[85],t3);
t5=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
if(C_truep(t4)){
t6=t5;
f_2311(t6,t4);}
else{
t6=((C_word*)t0)[2];
t7=C_u_i_memq(lf[268],t6);
if(C_truep(t7)){
t8=t5;
f_2311(t8,t7);}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_memq(lf[269],t8);
if(C_truep(t9)){
t10=t5;
f_2311(t10,t9);}
else{
t10=((C_word*)t0)[2];
t11=t5;
f_2311(t11,C_u_i_memq(lf[270],t10));}}}}}

/* k2616 in k2614 in k2612 in k2610 */
static void C_ccall f_2617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2617,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:662: generate-code */
t3=*((C_word*)lf[121]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k2290 in k2288 in k2286 in k2284 in k2281 in k2270 in k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in ... */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm:376: load-identifier-database */
t3=*((C_word*)lf[271]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[272]);}

/* k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm:664: close-output-port */
t3=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_2622(2,t3,C_SCHEME_UNDEFINED);}}

/* k2717 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in ... */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* batch-driver.scm:570: scan-toplevel-assignments */
t3=*((C_word*)lf[158]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* arg-val in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1854(C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1854,NULL,2,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
if(C_truep(C_fixnum_lessp(t3,C_fix(2)))){
t5=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* batch-driver.scm:140: quit */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[43],t2);}}
else{
t5=C_i_string_ref(t2,t4);
t6=C_eqp(t5,C_make_character(109));
t7=(C_truep(t6)?t6:C_eqp(t5,C_make_character(77)));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1896,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:137: substring */
t9=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,t2,C_fix(0),t4);}
else{
t8=C_eqp(t5,C_make_character(107));
t9=(C_truep(t8)?t8:C_eqp(t5,C_make_character(75)));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1913,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:138: substring */
t11=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,t2,C_fix(0),t4);}
else{
t10=C_a_i_string_to_number(&a,2,t2,C_fix(10));
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
/* batch-driver.scm:140: quit */
t11=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[43],t2);}}}}}

/* k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1733(C_word t0,C_word t1){
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
C_word ab[93],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1733,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1750,tmp=(C_word)a,a+=2,tmp));
t21=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1771,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t22=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1792,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1813,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1854,tmp=(C_word)a,a+=2,tmp));
t25=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t26=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1965,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t29=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2064,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=t17,a[13]=t15,a[14]=t19,a[15]=t5,a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=t7,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=t13,a[24]=t9,a[25]=((C_word*)t0)[21],a[26]=((C_word*)t0)[22],a[27]=((C_word*)t0)[23],a[28]=((C_word*)t0)[24],a[29]=((C_word*)t0)[25],a[30]=t1,a[31]=t11,a[32]=((C_word*)t0)[3],a[33]=((C_word*)t0)[26],a[34]=((C_word*)t0)[27],a[35]=((C_word*)t0)[28],a[36]=((C_word*)t0)[5],tmp=(C_word)a,a+=37,tmp);
if(C_truep(((C_word*)t0)[29])){
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4314,a[2]=t29,tmp=(C_word)a,a+=3,tmp);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4317,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4320,a[2]=t31,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:167: option-arg */
f_1657(t32,((C_word*)t0)[29]);}
else{
t30=t29;
f_2064(t30,C_SCHEME_UNDEFINED);}}

/* k2686 in k2681 in k2679 in k2677 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in ... */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:595: emit-type-file */
t2=*((C_word*)lf[144]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}

/* k2681 in k2679 in k2677 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in ... */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2682,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2687,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5047,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[145],t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2473(2,t3,t2);}}

/* k2679 in k2677 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in ... */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[146],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:591: dump-global-refs */
t4=*((C_word*)lf[147]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,((C_word*)t0)[4]);}
else{
t4=t2;
f_2682(2,t4,C_SCHEME_UNDEFINED);}}

/* k2638 in k2623 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:667: ##sys#display-times */
t2=*((C_word*)lf[117]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4394 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_4395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:69: make-pathname */
t2=*((C_word*)lf[161]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[399]);}

/* k2856 in for-each-loop1084 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in ... */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2848(t3,((C_word*)t0)[4],t2);}

/* k2623 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[116],*((C_word*)lf[28]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2639,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:667: ##sys#stop-timer */
t5=*((C_word*)lf[118]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:668: compiler-cleanup-hook */
t5=*((C_word*)lf[115]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2620 in k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:665: end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1975(t3,t2,lf[119]);}

/* k2627 in k2625 in k2623 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2628,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5023,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t3,*((C_word*)lf[113]+1),lf[114],C_SCHEME_END_OF_LIST);}

/* k2625 in k2623 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:668: compiler-cleanup-hook */
t3=*((C_word*)lf[115]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* for-each-loop1084 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in ... */
static void C_fcall f_2848(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2848,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2857,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:534: g1085 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2877 in k2869 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2879,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list(&a,1,((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5067,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[113]+1),lf[182],t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in ... */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2736,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[42]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2801,a[2]=t5,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2801(t7,t3,t1);}

/* k2869 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:527: file-exists? */
t3=*((C_word*)lf[183]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1702(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1702,2,t0,t1);}
t2=*((C_word*)lf[15]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=lf[16];
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t0)[2];
t16=C_u_i_memq(lf[17],t15);
t17=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t10,a[12]=t12,a[13]=t14,a[14]=t8,a[15]=t1,tmp=(C_word)a,a+=16,tmp);
if(C_truep(t16)){
t18=t17;
f_1707(t18,t16);}
else{
t18=((C_word*)t0)[2];
t19=C_u_i_memq(lf[273],t18);
if(C_truep(t19)){
t20=t17;
f_1707(t20,t19);}
else{
t20=((C_word*)t0)[2];
t21=C_u_i_memq(lf[18],t20);
t22=t17;
f_1707(t22,t21);}}}

/* k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1707(C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1707,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[18],t2);
t4=(C_truep(t3)?C_i_cadr(t3):C_SCHEME_FALSE);
t5=((C_word*)t0)[2];
t6=C_u_i_memq(lf[19],t5);
t7=((C_word*)t0)[2];
t8=C_u_i_memq(lf[20],t7);
t9=((C_word*)t0)[2];
t10=C_u_i_memq(lf[21],t9);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t0)[2];
t14=C_u_i_memq(lf[22],t13);
t15=((C_word*)t0)[2];
t16=C_u_i_memq(lf[23],t15);
t17=((C_word*)t0)[2];
t18=C_u_i_memq(lf[24],t17);
t19=((C_word*)t0)[2];
t20=C_u_i_memq(lf[25],t19);
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_FALSE;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_FALSE;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_FALSE;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=((C_word*)t0)[2];
t29=C_u_i_memq(lf[26],t28);
t30=((C_word*)t0)[2];
t31=C_u_i_memq(lf[27],t30);
t32=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_1733,a[2]=t23,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t27,a[8]=((C_word*)t0)[6],a[9]=t12,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t25,a[14]=t10,a[15]=((C_word*)t0)[10],a[16]=t18,a[17]=t16,a[18]=((C_word*)t0)[11],a[19]=((C_word*)t0)[12],a[20]=t21,a[21]=((C_word*)t0)[13],a[22]=t4,a[23]=t29,a[24]=((C_word*)t0)[14],a[25]=t1,a[26]=t6,a[27]=((C_word*)t0)[15],a[28]=t8,a[29]=t14,tmp=(C_word)a,a+=30,tmp);
if(C_truep(t31)){
t33=t32;
f_1733(t33,t31);}
else{
t33=((C_word*)t0)[2];
t34=t32;
f_1733(t34,C_u_i_memq(lf[393],t33));}}

/* f_2725 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in ... */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2725,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2728,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:546: load-type-database */
t4=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_SCHEME_FALSE);}

/* k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in ... */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2725,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm:548: collect-options */
t4=((C_word*)((C_word*)t0)[12])[1];
f_1934(t4,t3,lf[173]);}

/* f_2867 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in k2384 in k2382 in ... */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2867,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2870,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2887,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2890,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm:525: symbol->string */
t6=*((C_word*)lf[163]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2727 */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* batch-driver.scm:547: quit */
t2=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[159],((C_word*)t0)[3]);}}

/* k2677 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in ... */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[148],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:589: dump-defined-globals */
t4=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,((C_word*)t0)[4]);}
else{
t4=t2;
f_2680(2,t4,C_SCHEME_UNDEFINED);}}

/* k1797 in print-db in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1799,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[29]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:120: display */
t4=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[40],*((C_word*)lf[29]+1));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* print-db in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_fcall f_1792(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1792,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1799,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:119: print-header */
f_1750(t6,t2,t3);}

/* k1789 in k1776 in print-node in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:116: pretty-print */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2789 in for-each-loop1128 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in ... */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2781(t3,((C_word*)t0)[4],t2);}

/* k2667 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in ... */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:644: emit-global-inline-file */
t2=*((C_word*)lf[135]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2662 in k2589 in k2587 in k2584 in k2581 in k2579 in k2577 in k2479 in k2477 in k2475 in k2472 in k2470 in k2468 in loop in k2459 in k2457 in k2455 in k2453 in k2451 in k2445 in k2442 in k2440 in ... */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2663,2,t0,t1);}
t2=C_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_greaterp(t2,C_fix(60000)))){
/* batch-driver.scm:651: display */
t3=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],lf[129]);}
else{
t3=((C_word*)t0)[3];
f_2592(2,t3,C_SCHEME_UNDEFINED);}}

/* for-each-loop1128 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in ... */
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2781,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2790,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:549: g1129 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_2835 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in k2386 in ... */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2835,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2838,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list(&a,1,t2);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5059,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[113]+1),lf[179],t4);}

/* k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in ... */
static void C_ccall f_2775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[97] /* ##compiler#first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2447(t3,t2);}

/* k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in ... */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[52]+1))){
/* batch-driver.scm:563: print-node */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1771(t3,t2,lf[164],lf[165],((C_word*)t0)[4]);}
else{
t3=C_set_block_item(lf[97] /* ##compiler#first-analysis */,0,C_SCHEME_TRUE);
t4=((C_word*)t0)[2];
f_2447(t4,t3);}}

/* k2770 in k2768 in k2766 in k2764 in k2762 in k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in ... */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm:561: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1975(t3,t2,lf[166]);}

/* k2837 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:537: load-inline-file */
t2=*((C_word*)lf[178]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2766 in k2764 in k2762 in k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in ... */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:559: debugging */
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[33],lf[168]);}

/* k2764 in k2762 in k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in ... */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm:558: begin-time */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1965(t3,t2);}

/* k2825 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in k2402 in k2400 in k2398 in k2394 in k2391 in ... */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_2724(2,t3,t2);}
else{
/* batch-driver.scm:543: quit */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[175]);}}

/* k2762 in k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in ... */
static void C_ccall f_2763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:557: end-time */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1975(t3,t2,lf[169]);}

/* k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in k2412 in k2410 in k2406 in k2404 in ... */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2761,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm:556: print-db */
t4=((C_word*)((C_word*)t0)[9])[1];
f_1792(t4,t3,lf[170],lf[171],((C_word*)((C_word*)t0)[2])[1],C_fix(0));}

/* k4263 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4269,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4269(t5,((C_word*)t0)[5],t1);}

/* k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in ... */
static void C_ccall f_2262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2262,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1 /* (set! ##sys#explicit-library-modules ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[294],t4))){
t5=C_set_block_item(lf[295] /* ##sys#enable-runtime-macros */,0,C_SCHEME_TRUE);
t6=t3;
f_2264(t6,t5);}
else{
t5=t3;
f_2264(t5,C_SCHEME_UNDEFINED);}}

/* k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in ... */
static void C_fcall f_2264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2264,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_2268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],tmp=(C_word)a,a+=30,tmp);
if(C_truep(((C_word*)t0)[30])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3604,a[2]=((C_word*)t0)[28],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:344: option-arg */
f_1657(t3,((C_word*)t0)[30]);}
else{
t3=t2;
f_2268(2,t3,C_SCHEME_FALSE);}}

/* k2266 in k2263 in k2260 in k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in ... */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2268,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1 /* (set! ##compiler#target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[27])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[28],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm:347: option-arg */
f_1657(t4,((C_word*)t0)[27]);}
else{
t4=t3;
f_2272(2,t4,C_SCHEME_FALSE);}}

/* k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in ... */
static void C_fcall f_2102(C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2102,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[60],t2);
t4=C_i_not(t3);
t5=C_mutate((C_word*)lf[61]+1 /* (set! ##compiler#enable-module-registration ...) */,t4);
t6=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t7=*((C_word*)lf[52]+1);
if(C_truep(*((C_word*)lf[52]+1))){
t8=*((C_word*)lf[52]+1);
if(C_truep(*((C_word*)lf[52]+1))){
t9=C_set_block_item(((C_word*)t0)[21],0,C_SCHEME_TRUE);
t10=t6;
f_2108(t10,t9);}
else{
t9=t6;
f_2108(t9,C_SCHEME_UNDEFINED);}}
else{
t8=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[25],t8))){
t9=C_set_block_item(((C_word*)t0)[21],0,C_SCHEME_TRUE);
t10=t6;
f_2108(t10,t9);}
else{
t9=t6;
f_2108(t9,C_SCHEME_UNDEFINED);}}}

/* k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in ... */
static void C_fcall f_2108(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2108,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t3=*((C_word*)lf[28]+1);
if(C_truep(C_u_i_memq(lf[116],*((C_word*)lf[28]+1)))){
/* batch-driver.scm:196: ##sys#start-timer */
t4=*((C_word*)lf[381]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=t2;
f_2110(2,t4,C_SCHEME_UNDEFINED);}}

/* k2768 in k2766 in k2764 in k2762 in k2759 in k2755 in k2752 in k2739 in k2735 in k2723 in k2442 in k2440 in k2438 in k2436 in k2434 in k2432 in k2430 in k2428 in k2425 in k2418 in k2416 in k2414 in ... */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:560: scrutinize */
t3=*((C_word*)lf[167]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],*((C_word*)lf[52]+1));}

/* k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in k1705 in k1700 in k1698 in k1695 in k4403 in k1684 in compile-source-file in k1649 in k1645 in k1641 in k1637 in k1633 in k1630 in k1628 in ... */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2100,2,t0,t1);}
t2=C_mutate((C_word*)lf[59]+1 /* (set! ##compiler#import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[382],t4))){
if(C_truep(((C_word*)t0)[17])){
t5=t3;
f_2102(t5,C_SCHEME_UNDEFINED);}
else{
t5=C_set_block_item(lf[383] /* ##compiler#all-import-libraries */,0,C_SCHEME_TRUE);
t6=t3;
f_2102(t6,t5);}}
else{
t5=t3;
f_2102(t5,C_SCHEME_UNDEFINED);}}

/* map-loop282 in k4263 */
static void C_fcall f_4269(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4269,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* batch-driver.scm:176: g288 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4056 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in ... */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:261: parenthesis-synonyms */
t2=*((C_word*)lf[337]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4049 in k2170 in k2168 in k2166 in k2163 in k2158 in k2153 in k2149 in k2147 in k2145 in k2143 in k2141 in k2139 in k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in ... */
static void C_ccall f_4050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm:264: symbol-escape */
t2=*((C_word*)lf[329]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in k2179 in ... */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=t1,tmp=(C_word)a,a+=32,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3609,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3617,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=t4,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3655,a[2]=t8,a[3]=t1,a[4]=t12,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm:334: collect-options */
t14=((C_word*)((C_word*)t0)[19])[1];
f_1934(t14,t13,lf[297]);}

/* k2256 in k2252 in k2248 in k2245 in k2241 in k2233 in k2229 in k2218 in k2216 in k2209 in k2207 in k2204 in k2202 in k2200 in k2198 in k2196 in k2194 in k2192 in k2190 in k2188 in k2185 in k2182 in ... */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2258,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[2],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
/* batch-driver.scm:338: append */
t4=*((C_word*)lf[230]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[75]+1),((C_word*)t0)[31]);}

/* k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in ... */
static void C_fcall f_2134(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2134,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[102],t3))){
t4=C_set_block_item(lf[102] /* optimize-leaf-routines */,0,C_SCHEME_TRUE);
t5=t2;
f_2136(t5,t4);}
else{
t4=t2;
f_2136(t4,C_SCHEME_UNDEFINED);}}

/* k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in k2063 in k1731 in ... */
static void C_fcall f_2132(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2132,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[361],t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[21],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5197,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t5,*((C_word*)lf[113]+1),lf[362],C_SCHEME_END_OF_LIST);}
else{
t4=t2;
f_2134(t4,C_SCHEME_UNDEFINED);}}

/* k2137 in k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in ... */
static void C_fcall f_2138(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2138,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[359],t3))){
t4=C_set_block_item(lf[360] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t5=t2;
f_2140(t5,t4);}
else{
t4=t2;
f_2140(t4,C_SCHEME_UNDEFINED);}}

/* k2135 in k2133 in k2131 in k2129 in k2127 in k2125 in k2123 in k2121 in k2119 in k2117 in k2115 in k2113 in k2111 in k2109 in k2107 in k2101 in k2098 in k2094 in k2076 in k2073 in k2067 in k2065 in ... */
static void C_fcall f_2136(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2136,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[157],t3))){
t4=C_set_block_item(lf[157] /* unsafe */,0,C_SCHEME_TRUE);
t5=t2;
f_2138(t5,t4);}
else{
t4=t2;
f_2138(t4,C_SCHEME_UNDEFINED);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[448] = {
{"f5129:batch_2ddriver_2escm",(void*)f5129},
{"f5123:batch_2ddriver_2escm",(void*)f5123},
{"f_2130:batch_2ddriver_2escm",(void*)f_2130},
{"f_4043:batch_2ddriver_2escm",(void*)f_4043},
{"f_4041:batch_2ddriver_2escm",(void*)f_4041},
{"f5179:batch_2ddriver_2escm",(void*)f5179},
{"f5173:batch_2ddriver_2escm",(void*)f5173},
{"f_2112:batch_2ddriver_2escm",(void*)f_2112},
{"f_2114:batch_2ddriver_2escm",(void*)f_2114},
{"f_2116:batch_2ddriver_2escm",(void*)f_2116},
{"f_2118:batch_2ddriver_2escm",(void*)f_2118},
{"f5185:batch_2ddriver_2escm",(void*)f5185},
{"f_2110:batch_2ddriver_2escm",(void*)f_2110},
{"f_4062:batch_2ddriver_2escm",(void*)f_4062},
{"f5155:batch_2ddriver_2escm",(void*)f5155},
{"f_2895:batch_2ddriver_2escm",(void*)f_2895},
{"f_2890:batch_2ddriver_2escm",(void*)f_2890},
{"f_4256:batch_2ddriver_2escm",(void*)f_4256},
{"f_4254:batch_2ddriver_2escm",(void*)f_4254},
{"f_3443:batch_2ddriver_2escm",(void*)f_3443},
{"f_2887:batch_2ddriver_2escm",(void*)f_2887},
{"f_2881:batch_2ddriver_2escm",(void*)f_2881},
{"f_4242:batch_2ddriver_2escm",(void*)f_4242},
{"f5135:batch_2ddriver_2escm",(void*)f5135},
{"f_3448:batch_2ddriver_2escm",(void*)f_3448},
{"f_4249:batch_2ddriver_2escm",(void*)f_4249},
{"f5141:batch_2ddriver_2escm",(void*)f5141},
{"f5117:batch_2ddriver_2escm",(void*)f5117},
{"f_2754:batch_2ddriver_2escm",(void*)f_2754},
{"f_2756:batch_2ddriver_2escm",(void*)f_2756},
{"f_2751:batch_2ddriver_2escm",(void*)f_2751},
{"f_3331:batch_2ddriver_2escm",(void*)f_3331},
{"f_2742:batch_2ddriver_2escm",(void*)f_2742},
{"f_2748:batch_2ddriver_2escm",(void*)f_2748},
{"f_2741:batch_2ddriver_2escm",(void*)f_2741},
{"f4681:batch_2ddriver_2escm",(void*)f4681},
{"f_3351:batch_2ddriver_2escm",(void*)f_3351},
{"f_2810:batch_2ddriver_2escm",(void*)f_2810},
{"f_2904:batch_2ddriver_2escm",(void*)f_2904},
{"f_2801:batch_2ddriver_2escm",(void*)f_2801},
{"f_1647:batch_2ddriver_2escm",(void*)f_1647},
{"f_1643:batch_2ddriver_2escm",(void*)f_1643},
{"f_1913:batch_2ddriver_2escm",(void*)f_1913},
{"f_1657:batch_2ddriver_2escm",(void*)f_1657},
{"f_1651:batch_2ddriver_2escm",(void*)f_1651},
{"f_1653:batch_2ddriver_2escm",(void*)f_1653},
{"f_3617:batch_2ddriver_2escm",(void*)f_3617},
{"f5191:batch_2ddriver_2escm",(void*)f5191},
{"f_2916:batch_2ddriver_2escm",(void*)f_2916},
{"f_1629:batch_2ddriver_2escm",(void*)f_1629},
{"f5197:batch_2ddriver_2escm",(void*)f5197},
{"f_3609:batch_2ddriver_2escm",(void*)f_3609},
{"f_3604:batch_2ddriver_2escm",(void*)f_3604},
{"f_1934:batch_2ddriver_2escm",(void*)f_1934},
{"f_2975:batch_2ddriver_2escm",(void*)f_2975},
{"f_4359:batch_2ddriver_2escm",(void*)f_4359},
{"f_2374:batch_2ddriver_2escm",(void*)f_2374},
{"f_2372:batch_2ddriver_2escm",(void*)f_2372},
{"f_1985:batch_2ddriver_2escm",(void*)f_1985},
{"f_2379:batch_2ddriver_2escm",(void*)f_2379},
{"f_1987:batch_2ddriver_2escm",(void*)f_1987},
{"f_2377:batch_2ddriver_2escm",(void*)f_2377},
{"f_1981:batch_2ddriver_2escm",(void*)f_1981},
{"f_1983:batch_2ddriver_2escm",(void*)f_1983},
{"f_3218:batch_2ddriver_2escm",(void*)f_3218},
{"f_2923:batch_2ddriver_2escm",(void*)f_2923},
{"f_2925:batch_2ddriver_2escm",(void*)f_2925},
{"f_1685:batch_2ddriver_2escm",(void*)f_1685},
{"f_1957:batch_2ddriver_2escm",(void*)f_1957},
{"f_1954:batch_2ddriver_2escm",(void*)f_1954},
{"f_2956:batch_2ddriver_2escm",(void*)f_2956},
{"f_1699:batch_2ddriver_2escm",(void*)f_1699},
{"f_1697:batch_2ddriver_2escm",(void*)f_1697},
{"f_2980:batch_2ddriver_2escm",(void*)f_2980},
{"f_2473:batch_2ddriver_2escm",(void*)f_2473},
{"f_2476:batch_2ddriver_2escm",(void*)f_2476},
{"f_2471:batch_2ddriver_2escm",(void*)f_2471},
{"f_1975:batch_2ddriver_2escm",(void*)f_1975},
{"f_1973:batch_2ddriver_2escm",(void*)f_1973},
{"f_2478:batch_2ddriver_2escm",(void*)f_2478},
{"f_4294:batch_2ddriver_2escm",(void*)f_4294},
{"f_4314:batch_2ddriver_2escm",(void*)f_4314},
{"f_4317:batch_2ddriver_2escm",(void*)f_4317},
{"f_2965:batch_2ddriver_2escm",(void*)f_2965},
{"f_2967:batch_2ddriver_2escm",(void*)f_2967},
{"f_2962:batch_2ddriver_2escm",(void*)f_2962},
{"f_4300:batch_2ddriver_2escm",(void*)f_4300},
{"f_1996:batch_2ddriver_2escm",(void*)f_1996},
{"f_2492:batch_2ddriver_2escm",(void*)f_2492},
{"f_3662:batch_2ddriver_2escm",(void*)f_3662},
{"f_3660:batch_2ddriver_2escm",(void*)f_3660},
{"f_2969:batch_2ddriver_2escm",(void*)f_2969},
{"f_3164:batch_2ddriver_2escm",(void*)f_3164},
{"f_2393:batch_2ddriver_2escm",(void*)f_2393},
{"f_2395:batch_2ddriver_2escm",(void*)f_2395},
{"f_4372:batch_2ddriver_2escm",(void*)f_4372},
{"f_2485:batch_2ddriver_2escm",(void*)f_2485},
{"f_2480:batch_2ddriver_2escm",(void*)f_2480},
{"f_1965:batch_2ddriver_2escm",(void*)f_1965},
{"f_2399:batch_2ddriver_2escm",(void*)f_2399},
{"f_3692:batch_2ddriver_2escm",(void*)f_3692},
{"f_2487:batch_2ddriver_2escm",(void*)f_2487},
{"f_3687:batch_2ddriver_2escm",(void*)f_3687},
{"f_4369:batch_2ddriver_2escm",(void*)f_4369},
{"f_4365:batch_2ddriver_2escm",(void*)f_4365},
{"f_2385:batch_2ddriver_2escm",(void*)f_2385},
{"f_2383:batch_2ddriver_2escm",(void*)f_2383},
{"f_2381:batch_2ddriver_2escm",(void*)f_2381},
{"f_2388:batch_2ddriver_2escm",(void*)f_2388},
{"f_4334:batch_2ddriver_2escm",(void*)f_4334},
{"f_1639:batch_2ddriver_2escm",(void*)f_1639},
{"f_3189:batch_2ddriver_2escm",(void*)f_3189},
{"f_1631:batch_2ddriver_2escm",(void*)f_1631},
{"f_1635:batch_2ddriver_2escm",(void*)f_1635},
{"f_4320:batch_2ddriver_2escm",(void*)f_4320},
{"f_3131:batch_2ddriver_2escm",(void*)f_3131},
{"f_3624:batch_2ddriver_2escm",(void*)f_3624},
{"f_3622:batch_2ddriver_2escm",(void*)f_3622},
{"f_2077:batch_2ddriver_2escm",(void*)f_2077},
{"f_2075:batch_2ddriver_2escm",(void*)f_2075},
{"f_3129:batch_2ddriver_2escm",(void*)f_3129},
{"f_3126:batch_2ddriver_2escm",(void*)f_3126},
{"f_3655:batch_2ddriver_2escm",(void*)f_3655},
{"f_3150:batch_2ddriver_2escm",(void*)f_3150},
{"f_2068:batch_2ddriver_2escm",(void*)f_2068},
{"f_3649:batch_2ddriver_2escm",(void*)f_3649},
{"f_2066:batch_2ddriver_2escm",(void*)f_2066},
{"f_2064:batch_2ddriver_2escm",(void*)f_2064},
{"f_2012:batch_2ddriver_2escm",(void*)f_2012},
{"f_2017:batch_2ddriver_2escm",(void*)f_2017},
{"f_2010:batch_2ddriver_2escm",(void*)f_2010},
{"f_1948:batch_2ddriver_2escm",(void*)f_1948},
{"f_1940:batch_2ddriver_2escm",(void*)f_1940},
{"f_2002:batch_2ddriver_2escm",(void*)f_2002},
{"f_2004:batch_2ddriver_2escm",(void*)f_2004},
{"f_2007:batch_2ddriver_2escm",(void*)f_2007},
{"f_2032:batch_2ddriver_2escm",(void*)f_2032},
{"f_3278:batch_2ddriver_2escm",(void*)f_3278},
{"f_3273:batch_2ddriver_2escm",(void*)f_3273},
{"f_2023:batch_2ddriver_2escm",(void*)f_2023},
{"f_2028:batch_2ddriver_2escm",(void*)f_2028},
{"f_4148:batch_2ddriver_2escm",(void*)f_4148},
{"f_2361:batch_2ddriver_2escm",(void*)f_2361},
{"f_2351:batch_2ddriver_2escm",(void*)f_2351},
{"f_2363:batch_2ddriver_2escm",(void*)f_2363},
{"f_2365:batch_2ddriver_2escm",(void*)f_2365},
{"f_2367:batch_2ddriver_2escm",(void*)f_2367},
{"f_2369:batch_2ddriver_2escm",(void*)f_2369},
{"f_4120:batch_2ddriver_2escm",(void*)f_4120},
{"f_2353:batch_2ddriver_2escm",(void*)f_2353},
{"f_2357:batch_2ddriver_2escm",(void*)f_2357},
{"f_4114:batch_2ddriver_2escm",(void*)f_4114},
{"f_4005:batch_2ddriver_2escm",(void*)f_4005},
{"f_4003:batch_2ddriver_2escm",(void*)f_4003},
{"f_4039:batch_2ddriver_2escm",(void*)f_4039},
{"f_4037:batch_2ddriver_2escm",(void*)f_4037},
{"f_4030:batch_2ddriver_2escm",(void*)f_4030},
{"f_3808:batch_2ddriver_2escm",(void*)f_3808},
{"f_3806:batch_2ddriver_2escm",(void*)f_3806},
{"f_3401:batch_2ddriver_2escm",(void*)f_3401},
{"f_2208:batch_2ddriver_2escm",(void*)f_2208},
{"f_2433:batch_2ddriver_2escm",(void*)f_2433},
{"f_2206:batch_2ddriver_2escm",(void*)f_2206},
{"f_2435:batch_2ddriver_2escm",(void*)f_2435},
{"f_2203:batch_2ddriver_2escm",(void*)f_2203},
{"f_2437:batch_2ddriver_2escm",(void*)f_2437},
{"f_2201:batch_2ddriver_2escm",(void*)f_2201},
{"f_2439:batch_2ddriver_2escm",(void*)f_2439},
{"f_2431:batch_2ddriver_2escm",(void*)f_2431},
{"f_3717:batch_2ddriver_2escm",(void*)f_3717},
{"f_4102:batch_2ddriver_2escm",(void*)f_4102},
{"f_4107:batch_2ddriver_2escm",(void*)f_4107},
{"f_3407:batch_2ddriver_2escm",(void*)f_3407},
{"f_2596:batch_2ddriver_2escm",(void*)f_2596},
{"f_2594:batch_2ddriver_2escm",(void*)f_2594},
{"f_2592:batch_2ddriver_2escm",(void*)f_2592},
{"f_2590:batch_2ddriver_2escm",(void*)f_2590},
{"f_2598:batch_2ddriver_2escm",(void*)f_2598},
{"f_2454:batch_2ddriver_2escm",(void*)f_2454},
{"f_2226:batch_2ddriver_2escm",(void*)f_2226},
{"f_2452:batch_2ddriver_2escm",(void*)f_2452},
{"f_2458:batch_2ddriver_2escm",(void*)f_2458},
{"f_2456:batch_2ddriver_2escm",(void*)f_2456},
{"f_2220:batch_2ddriver_2escm",(void*)f_2220},
{"f_3410:batch_2ddriver_2escm",(void*)f_3410},
{"f_2586:batch_2ddriver_2escm",(void*)f_2586},
{"f_2580:batch_2ddriver_2escm",(void*)f_2580},
{"f_2582:batch_2ddriver_2escm",(void*)f_2582},
{"f_2588:batch_2ddriver_2escm",(void*)f_2588},
{"f_2219:batch_2ddriver_2escm",(void*)f_2219},
{"f_2217:batch_2ddriver_2escm",(void*)f_2217},
{"f_2444:batch_2ddriver_2escm",(void*)f_2444},
{"f_2211:batch_2ddriver_2escm",(void*)f_2211},
{"f_2447:batch_2ddriver_2escm",(void*)f_2447},
{"f_2441:batch_2ddriver_2escm",(void*)f_2441},
{"f_2578:batch_2ddriver_2escm",(void*)f_2578},
{"f_3418:batch_2ddriver_2escm",(void*)f_3418},
{"f_3416:batch_2ddriver_2escm",(void*)f_3416},
{"f_2243:batch_2ddriver_2escm",(void*)f_2243},
{"f_3866:batch_2ddriver_2escm",(void*)f_3866},
{"f_2249:batch_2ddriver_2escm",(void*)f_2249},
{"f_3865:batch_2ddriver_2escm",(void*)f_3865},
{"f_2247:batch_2ddriver_2escm",(void*)f_2247},
{"f_3534:batch_2ddriver_2escm",(void*)f_3534},
{"f_2235:batch_2ddriver_2escm",(void*)f_2235},
{"f_3898:batch_2ddriver_2escm",(void*)f_3898},
{"f_2231:batch_2ddriver_2escm",(void*)f_2231},
{"f_3343:batch_2ddriver_2escm",(void*)f_3343},
{"f_3889:batch_2ddriver_2escm",(void*)f_3889},
{"f_3349:batch_2ddriver_2escm",(void*)f_3349},
{"f_3771:batch_2ddriver_2escm",(void*)f_3771},
{"f_3005:batch_2ddriver_2escm",(void*)f_3005},
{"f_3825:batch_2ddriver_2escm",(void*)f_3825},
{"f_3824:batch_2ddriver_2escm",(void*)f_3824},
{"f_3550:batch_2ddriver_2escm",(void*)f_3550},
{"f_3480:batch_2ddriver_2escm",(void*)f_3480},
{"f_3556:batch_2ddriver_2escm",(void*)f_3556},
{"f_3762:batch_2ddriver_2escm",(void*)f_3762},
{"f_3035:batch_2ddriver_2escm",(void*)f_3035},
{"f_3032:batch_2ddriver_2escm",(void*)f_3032},
{"f_3769:batch_2ddriver_2escm",(void*)f_3769},
{"f_4094:batch_2ddriver_2escm",(void*)f_4094},
{"f_4096:batch_2ddriver_2escm",(void*)f_4096},
{"f_3791:batch_2ddriver_2escm",(void*)f_3791},
{"f_3798:batch_2ddriver_2escm",(void*)f_3798},
{"f_3483:batch_2ddriver_2escm",(void*)f_3483},
{"f_2146:batch_2ddriver_2escm",(void*)f_2146},
{"f_2148:batch_2ddriver_2escm",(void*)f_2148},
{"f_2142:batch_2ddriver_2escm",(void*)f_2142},
{"f_2144:batch_2ddriver_2escm",(void*)f_2144},
{"f_3780:batch_2ddriver_2escm",(void*)f_3780},
{"f_2140:batch_2ddriver_2escm",(void*)f_2140},
{"f_3473:batch_2ddriver_2escm",(void*)f_3473},
{"f_3303:batch_2ddriver_2escm",(void*)f_3303},
{"f_3849:batch_2ddriver_2escm",(void*)f_3849},
{"f_3847:batch_2ddriver_2escm",(void*)f_3847},
{"f_3846:batch_2ddriver_2escm",(void*)f_3846},
{"f_3490:batch_2ddriver_2escm",(void*)f_3490},
{"f_3731:batch_2ddriver_2escm",(void*)f_3731},
{"f_2175:batch_2ddriver_2escm",(void*)f_2175},
{"f_2173:batch_2ddriver_2escm",(void*)f_2173},
{"f_2171:batch_2ddriver_2escm",(void*)f_2171},
{"f_3376:batch_2ddriver_2escm",(void*)f_3376},
{"f_2124:batch_2ddriver_2escm",(void*)f_2124},
{"f_2122:batch_2ddriver_2escm",(void*)f_2122},
{"f_2128:batch_2ddriver_2escm",(void*)f_2128},
{"f_3722:batch_2ddriver_2escm",(void*)f_3722},
{"f_2126:batch_2ddriver_2escm",(void*)f_2126},
{"f_2120:batch_2ddriver_2escm",(void*)f_2120},
{"f_3495:batch_2ddriver_2escm",(void*)f_3495},
{"f_2155:batch_2ddriver_2escm",(void*)f_2155},
{"f_3751:batch_2ddriver_2escm",(void*)f_3751},
{"f_2150:batch_2ddriver_2escm",(void*)f_2150},
{"f_3390:batch_2ddriver_2escm",(void*)f_3390},
{"f_3742:batch_2ddriver_2escm",(void*)f_3742},
{"f_2169:batch_2ddriver_2escm",(void*)f_2169},
{"f_2167:batch_2ddriver_2escm",(void*)f_2167},
{"f_2165:batch_2ddriver_2escm",(void*)f_2165},
{"f_2160:batch_2ddriver_2escm",(void*)f_2160},
{"f_2539:batch_2ddriver_2escm",(void*)f_2539},
{"f5103:batch_2ddriver_2escm",(void*)f5103},
{"f_3385:batch_2ddriver_2escm",(void*)f_3385},
{"f_3381:batch_2ddriver_2escm",(void*)f_3381},
{"f5097:batch_2ddriver_2escm",(void*)f5097},
{"f_2091:batch_2ddriver_2escm",(void*)f_2091},
{"f_2095:batch_2ddriver_2escm",(void*)f_2095},
{"f_2082:batch_2ddriver_2escm",(void*)f_2082},
{"f_2088:batch_2ddriver_2escm",(void*)f_2088},
{"f_4217:batch_2ddriver_2escm",(void*)f_4217},
{"f5079:batch_2ddriver_2escm",(void*)f5079},
{"f5029:batch_2ddriver_2escm",(void*)f5029},
{"f5023:batch_2ddriver_2escm",(void*)f5023},
{"f5059:batch_2ddriver_2escm",(void*)f5059},
{"f5067:batch_2ddriver_2escm",(void*)f5067},
{"f_1813:batch_2ddriver_2escm",(void*)f_1813},
{"f_2344:batch_2ddriver_2escm",(void*)f_2344},
{"f_1801:batch_2ddriver_2escm",(void*)f_1801},
{"f_2349:batch_2ddriver_2escm",(void*)f_2349},
{"f_2347:batch_2ddriver_2escm",(void*)f_2347},
{"f_1808:batch_2ddriver_2escm",(void*)f_1808},
{"f_1803:batch_2ddriver_2escm",(void*)f_1803},
{"f_1805:batch_2ddriver_2escm",(void*)f_1805},
{"f5041:batch_2ddriver_2escm",(void*)f5041},
{"f_2465:batch_2ddriver_2escm",(void*)f_2465},
{"f_2469:batch_2ddriver_2escm",(void*)f_2469},
{"f_2460:batch_2ddriver_2escm",(void*)f_2460},
{"f_2335:batch_2ddriver_2escm",(void*)f_2335},
{"f5035:batch_2ddriver_2escm",(void*)f5035},
{"f_2339:batch_2ddriver_2escm",(void*)f_2339},
{"f_2337:batch_2ddriver_2escm",(void*)f_2337},
{"f_2417:batch_2ddriver_2escm",(void*)f_2417},
{"f_2415:batch_2ddriver_2escm",(void*)f_2415},
{"f_2413:batch_2ddriver_2escm",(void*)f_2413},
{"f_2411:batch_2ddriver_2escm",(void*)f_2411},
{"f_3918:batch_2ddriver_2escm",(void*)f_3918},
{"f5047:batch_2ddriver_2escm",(void*)f5047},
{"f_2327:batch_2ddriver_2escm",(void*)f_2327},
{"f_2321:batch_2ddriver_2escm",(void*)f_2321},
{"f_2300:batch_2ddriver_2escm",(void*)f_2300},
{"f_2405:batch_2ddriver_2escm",(void*)f_2405},
{"f_2407:batch_2ddriver_2escm",(void*)f_2407},
{"f_2401:batch_2ddriver_2escm",(void*)f_2401},
{"f_2403:batch_2ddriver_2escm",(void*)f_2403},
{"f_3909:batch_2ddriver_2escm",(void*)f_3909},
{"f_1834:batch_2ddriver_2escm",(void*)f_1834},
{"f_2311:batch_2ddriver_2escm",(void*)f_2311},
{"f_2181:batch_2ddriver_2escm",(void*)f_2181},
{"f_2183:batch_2ddriver_2escm",(void*)f_2183},
{"f_2187:batch_2ddriver_2escm",(void*)f_2187},
{"f_2189:batch_2ddriver_2escm",(void*)f_2189},
{"f_1843:batch_2ddriver_2escm",(void*)f_1843},
{"f_2429:batch_2ddriver_2escm",(void*)f_2429},
{"f_2427:batch_2ddriver_2escm",(void*)f_2427},
{"f_2421:batch_2ddriver_2escm",(void*)f_2421},
{"f_2420:batch_2ddriver_2escm",(void*)f_2420},
{"f_1896:batch_2ddriver_2escm",(void*)f_1896},
{"f_2525:batch_2ddriver_2escm",(void*)f_2525},
{"f_1821:batch_2ddriver_2escm",(void*)f_1821},
{"f_1820:batch_2ddriver_2escm",(void*)f_1820},
{"f_1824:batch_2ddriver_2escm",(void*)f_1824},
{"f_2191:batch_2ddriver_2escm",(void*)f_2191},
{"f_2193:batch_2ddriver_2escm",(void*)f_2193},
{"f_2195:batch_2ddriver_2escm",(void*)f_2195},
{"f_2197:batch_2ddriver_2escm",(void*)f_2197},
{"f_2199:batch_2ddriver_2escm",(void*)f_2199},
{"f_2506:batch_2ddriver_2escm",(void*)f_2506},
{"f_2508:batch_2ddriver_2escm",(void*)f_2508},
{"f_2503:batch_2ddriver_2escm",(void*)f_2503},
{"f_3504:batch_2ddriver_2escm",(void*)f_3504},
{"f_3500:batch_2ddriver_2escm",(void*)f_3500},
{"f_3063:batch_2ddriver_2escm",(void*)f_3063},
{"f_3061:batch_2ddriver_2escm",(void*)f_3061},
{"f_3977:batch_2ddriver_2escm",(void*)f_3977},
{"f_2603:batch_2ddriver_2escm",(void*)f_2603},
{"f_2608:batch_2ddriver_2escm",(void*)f_2608},
{"f_2561:batch_2ddriver_2escm",(void*)f_2561},
{"f_3522:batch_2ddriver_2escm",(void*)f_3522},
{"f_3065:batch_2ddriver_2escm",(void*)f_3065},
{"f_3528:batch_2ddriver_2escm",(void*)f_3528},
{"f_3080:batch_2ddriver_2escm",(void*)f_3080},
{"f_2555:batch_2ddriver_2escm",(void*)f_2555},
{"f_2553:batch_2ddriver_2escm",(void*)f_2553},
{"f_3998:batch_2ddriver_2escm",(void*)f_3998},
{"f_2559:batch_2ddriver_2escm",(void*)f_2559},
{"f_2557:batch_2ddriver_2escm",(void*)f_2557},
{"f_2551:batch_2ddriver_2escm",(void*)f_2551},
{"f_3248:batch_2ddriver_2escm",(void*)f_3248},
{"f_4404:batch_2ddriver_2escm",(void*)f_4404},
{"f_3983:batch_2ddriver_2escm",(void*)f_3983},
{"f_1750:batch_2ddriver_2escm",(void*)f_1750},
{"f_1754:batch_2ddriver_2escm",(void*)f_1754},
{"f_3243:batch_2ddriver_2escm",(void*)f_3243},
{"f_3089:batch_2ddriver_2escm",(void*)f_3089},
{"f_1769:batch_2ddriver_2escm",(void*)f_1769},
{"f_1766:batch_2ddriver_2escm",(void*)f_1766},
{"f_3116:batch_2ddriver_2escm",(void*)f_3116},
{"f_1762:batch_2ddriver_2escm",(void*)f_1762},
{"f_3118:batch_2ddriver_2escm",(void*)f_3118},
{"f_1764:batch_2ddriver_2escm",(void*)f_1764},
{"f_3024:batch_2ddriver_2escm",(void*)f_3024},
{"f_3022:batch_2ddriver_2escm",(void*)f_3022},
{"f_3100:batch_2ddriver_2escm",(void*)f_3100},
{"f_1778:batch_2ddriver_2escm",(void*)f_1778},
{"f_3052:batch_2ddriver_2escm",(void*)f_3052},
{"f_1771:batch_2ddriver_2escm",(void*)f_1771},
{"f_2285:batch_2ddriver_2escm",(void*)f_2285},
{"f_2283:batch_2ddriver_2escm",(void*)f_2283},
{"f_3029:batch_2ddriver_2escm",(void*)f_3029},
{"f_3026:batch_2ddriver_2escm",(void*)f_3026},
{"f_2289:batch_2ddriver_2escm",(void*)f_2289},
{"f_2287:batch_2ddriver_2escm",(void*)f_2287},
{"f_3952:batch_2ddriver_2escm",(void*)f_3952},
{"f_3041:batch_2ddriver_2escm",(void*)f_3041},
{"toplevel:batch_2ddriver_2escm",(void*)C_driver_toplevel},
{"f_2272:batch_2ddriver_2escm",(void*)f_2272},
{"f_3059:batch_2ddriver_2escm",(void*)f_3059},
{"f_3598:batch_2ddriver_2escm",(void*)f_3598},
{"f_3055:batch_2ddriver_2escm",(void*)f_3055},
{"f_3056:batch_2ddriver_2escm",(void*)f_3056},
{"f_3944:batch_2ddriver_2escm",(void*)f_3944},
{"f_3947:batch_2ddriver_2escm",(void*)f_3947},
{"f_2713:batch_2ddriver_2escm",(void*)f_2713},
{"f_2613:batch_2ddriver_2escm",(void*)f_2613},
{"f_2615:batch_2ddriver_2escm",(void*)f_2615},
{"f_2611:batch_2ddriver_2escm",(void*)f_2611},
{"f_2293:batch_2ddriver_2escm",(void*)f_2293},
{"f_2617:batch_2ddriver_2escm",(void*)f_2617},
{"f_2291:batch_2ddriver_2escm",(void*)f_2291},
{"f_2619:batch_2ddriver_2escm",(void*)f_2619},
{"f_2719:batch_2ddriver_2escm",(void*)f_2719},
{"f_1854:batch_2ddriver_2escm",(void*)f_1854},
{"f_1733:batch_2ddriver_2escm",(void*)f_1733},
{"f_2687:batch_2ddriver_2escm",(void*)f_2687},
{"f_2682:batch_2ddriver_2escm",(void*)f_2682},
{"f_2680:batch_2ddriver_2escm",(void*)f_2680},
{"f_2639:batch_2ddriver_2escm",(void*)f_2639},
{"f_4395:batch_2ddriver_2escm",(void*)f_4395},
{"f_2857:batch_2ddriver_2escm",(void*)f_2857},
{"f_2624:batch_2ddriver_2escm",(void*)f_2624},
{"f_2622:batch_2ddriver_2escm",(void*)f_2622},
{"f_2628:batch_2ddriver_2escm",(void*)f_2628},
{"f_2626:batch_2ddriver_2escm",(void*)f_2626},
{"f_2848:batch_2ddriver_2escm",(void*)f_2848},
{"f_2879:batch_2ddriver_2escm",(void*)f_2879},
{"f_2736:batch_2ddriver_2escm",(void*)f_2736},
{"f_2870:batch_2ddriver_2escm",(void*)f_2870},
{"f_1702:batch_2ddriver_2escm",(void*)f_1702},
{"f_1707:batch_2ddriver_2escm",(void*)f_1707},
{"f_2725:batch_2ddriver_2escm",(void*)f_2725},
{"f_2724:batch_2ddriver_2escm",(void*)f_2724},
{"f_2867:batch_2ddriver_2escm",(void*)f_2867},
{"f_2728:batch_2ddriver_2escm",(void*)f_2728},
{"f_2678:batch_2ddriver_2escm",(void*)f_2678},
{"f_1799:batch_2ddriver_2escm",(void*)f_1799},
{"f_1792:batch_2ddriver_2escm",(void*)f_1792},
{"f_1790:batch_2ddriver_2escm",(void*)f_1790},
{"f_2790:batch_2ddriver_2escm",(void*)f_2790},
{"f_2668:batch_2ddriver_2escm",(void*)f_2668},
{"f_2663:batch_2ddriver_2escm",(void*)f_2663},
{"f_2781:batch_2ddriver_2escm",(void*)f_2781},
{"f_2835:batch_2ddriver_2escm",(void*)f_2835},
{"f_2775:batch_2ddriver_2escm",(void*)f_2775},
{"f_2773:batch_2ddriver_2escm",(void*)f_2773},
{"f_2771:batch_2ddriver_2escm",(void*)f_2771},
{"f_2838:batch_2ddriver_2escm",(void*)f_2838},
{"f_2767:batch_2ddriver_2escm",(void*)f_2767},
{"f_2765:batch_2ddriver_2escm",(void*)f_2765},
{"f_2827:batch_2ddriver_2escm",(void*)f_2827},
{"f_2763:batch_2ddriver_2escm",(void*)f_2763},
{"f_2761:batch_2ddriver_2escm",(void*)f_2761},
{"f_4264:batch_2ddriver_2escm",(void*)f_4264},
{"f_2262:batch_2ddriver_2escm",(void*)f_2262},
{"f_2264:batch_2ddriver_2escm",(void*)f_2264},
{"f_2268:batch_2ddriver_2escm",(void*)f_2268},
{"f_2102:batch_2ddriver_2escm",(void*)f_2102},
{"f_2108:batch_2ddriver_2escm",(void*)f_2108},
{"f_2769:batch_2ddriver_2escm",(void*)f_2769},
{"f_2100:batch_2ddriver_2escm",(void*)f_2100},
{"f_4269:batch_2ddriver_2escm",(void*)f_4269},
{"f_4057:batch_2ddriver_2escm",(void*)f_4057},
{"f_4050:batch_2ddriver_2escm",(void*)f_4050},
{"f_2254:batch_2ddriver_2escm",(void*)f_2254},
{"f_2258:batch_2ddriver_2escm",(void*)f_2258},
{"f_2134:batch_2ddriver_2escm",(void*)f_2134},
{"f_2132:batch_2ddriver_2escm",(void*)f_2132},
{"f_2138:batch_2ddriver_2escm",(void*)f_2138},
{"f_2136:batch_2ddriver_2escm",(void*)f_2136},
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
S|  for-each		11
S|  printf		4
S|  map		17
o|eliminated procedure checks: 104 
o|specializations:
o|  1 (current-output-port)
o|  2 (string=? string string)
o|  1 (string-append string string)
o|  5 (cdr pair)
o|  4 (eqv? (not float) *)
o|  1 (< fixnum fixnum)
o|  8 (##sys#check-list (or pair list) *)
o|  77 (memq * list)
o|  2 (car pair)
o|Removed `not' forms: 5 
o|inlining procedure: k1660 
o|inlining procedure: k1660 
o|substituted constant variable: a1687 
o|substituted constant variable: a1691 
o|substituted constant variable: a1693 
o|substituted constant variable: a1703 
o|substituted constant variable: a1708 
o|substituted constant variable: a1713 
o|substituted constant variable: a1715 
o|substituted constant variable: a1717 
o|substituted constant variable: a1719 
o|substituted constant variable: a1721 
o|substituted constant variable: a1723 
o|substituted constant variable: a1725 
o|substituted constant variable: a1727 
o|substituted constant variable: a1729 
o|merged explicitly consed rest parameter: args125 
o|inlining procedure: k1755 
o|propagated global variable: out132136 ##sys#standard-output 
o|inlining procedure: k1755 
o|inlining procedure: k1774 
o|inlining procedure: k1774 
o|inlining procedure: k1795 
o|propagated global variable: out152156 ##sys#standard-output 
o|inlining procedure: k1795 
o|inlining procedure: k1816 
o|inlining procedure: k1837 
o|inlining procedure: k1837 
o|inlining procedure: k1816 
o|inlining procedure: k1863 
o|inlining procedure: k1863 
o|inlining procedure: k1877 
o|folded constant expression: (* (quote 1024) (quote 1024)) 
o|inlining procedure: k1877 
o|substituted constant variable: a1921 
o|substituted constant variable: a1923 
o|substituted constant variable: a1928 
o|substituted constant variable: a1930 
o|substituted constant variable: a1932 
o|inlining procedure: k1945 
o|inlining procedure: k1945 
o|inlining procedure: k1968 
o|inlining procedure: "(batch-driver.scm:148) cputime113" 
o|inlining procedure: k1968 
o|inlining procedure: k1978 
o|inlining procedure: "(batch-driver.scm:154) cputime113" 
o|propagated global variable: out216220 ##sys#standard-output 
o|inlining procedure: k1978 
o|merged explicitly consed rest parameter: args227 
o|inlining procedure: k2011 
o|propagated global variable: g251252 ##compiler#get 
o|propagated global variable: g265266 ##compiler#put! 
o|inlining procedure: k2011 
o|inlining procedure: k2036 
o|inlining procedure: k2036 
o|substituted constant variable: a2070 
o|substituted constant variable: a2079 
o|propagated global variable: a2080 ##compiler#debugging-chicken 
o|substituted constant variable: a2093 
o|substituted constant variable: a2151 
o|substituted constant variable: a2156 
o|substituted constant variable: a2161 
o|substituted constant variable: a2278 
o|substituted constant variable: a2297 
o|inlining procedure: k2294 
o|inlining procedure: k2294 
o|substituted constant variable: a2307 
o|substituted constant variable: a2318 
o|inlining procedure: k2315 
o|inlining procedure: k2315 
o|contracted procedure: k2331 
o|inlining procedure: k2481 
o|inlining procedure: k2494 
o|inlining procedure: k2494 
o|inlining procedure: k2509 
o|inlining procedure: k2509 
o|contracted procedure: k2535 
o|propagated global variable: r2536 ##compiler#inline-substitutions-enabled 
o|inlining procedure: k2532 
o|consed rest parameter at call site: "(batch-driver.scm:623) analyze123" 3 
o|inlining procedure: k2532 
o|contracted procedure: k2574 
o|inlining procedure: k2481 
o|consed rest parameter at call site: "(batch-driver.scm:669) dribble114" 2 
o|substituted constant variable: a2632 
o|propagated global variable: a2633 ##compiler#debugging-chicken 
o|consed rest parameter at call site: "(batch-driver.scm:661) dribble114" 2 
o|inlining procedure: "(batch-driver.scm:650) cputime113" 
o|consed rest parameter at call site: "(batch-driver.scm:643) dribble114" 2 
o|substituted constant variable: a2672 
o|propagated global variable: a2673 ##compiler#debugging-chicken 
o|inlining procedure: k2683 
o|consed rest parameter at call site: "(batch-driver.scm:594) dribble114" 2 
o|inlining procedure: k2683 
o|substituted constant variable: a2691 
o|propagated global variable: a2692 ##compiler#debugging-chicken 
o|substituted constant variable: a2696 
o|propagated global variable: a2697 ##compiler#debugging-chicken 
o|substituted constant variable: a2701 
o|propagated global variable: a2702 ##compiler#debugging-chicken 
o|consed rest parameter at call site: "(batch-driver.scm:584) analyze123" 3 
o|inlining procedure: k2729 
o|inlining procedure: k2729 
o|inlining procedure: k2774 
o|inlining procedure: k2774 
o|consed rest parameter at call site: "(batch-driver.scm:555) analyze123" 3 
o|inlining procedure: k2784 
o|inlining procedure: k2784 
o|inlining procedure: k2804 
o|inlining procedure: k2804 
o|substituted constant variable: a2820 
o|inlining procedure: k2822 
o|inlining procedure: k2822 
o|consed rest parameter at call site: "(batch-driver.scm:536) dribble114" 2 
o|inlining procedure: k2851 
o|inlining procedure: k2851 
o|inlining procedure: k2871 
o|consed rest parameter at call site: "(batch-driver.scm:528) dribble114" 2 
o|inlining procedure: k2871 
o|inlining procedure: k2898 
o|inlining procedure: k2898 
o|inlining procedure: k2928 
o|inlining procedure: k2928 
o|inlining procedure: k2983 
o|inlining procedure: k2983 
o|consed rest parameter at call site: "(batch-driver.scm:503) dribble114" 2 
o|substituted constant variable: a3009 
o|propagated global variable: out965969 ##sys#standard-output 
o|inlining procedure: k3083 
o|inlining procedure: k3083 
o|propagated global variable: g958960 ##compiler#compiler-syntax-statistics 
o|inlining procedure: k3152 
o|inlining procedure: k3152 
o|contracted procedure: k3157 
o|propagated global variable: r3158 ##compiler#unit-name 
o|inlining procedure: k3167 
o|inlining procedure: k3167 
o|propagated global variable: g932936 ##compiler#profile-lambda-list 
o|contracted procedure: k3211 
o|propagated global variable: r3212 ##compiler#unit-name 
o|inlining procedure: k3209 
o|inlining procedure: k3209 
o|inlining procedure: k3221 
o|inlining procedure: k3221 
o|propagated global variable: g895899 ##compiler#used-units 
o|inlining procedure: k3251 
o|inlining procedure: k3251 
o|propagated global variable: g865869 ##compiler#immutable-constants 
o|inlining procedure: k3281 
o|inlining procedure: k3281 
o|inlining procedure: k3354 
o|inlining procedure: k3354 
o|consed rest parameter at call site: "(batch-driver.scm:436) dribble114" 2 
o|consed rest parameter at call site: "(batch-driver.scm:413) dribble114" 2 
o|inlining procedure: k3393 
o|inlining procedure: k3421 
o|inlining procedure: k3421 
o|inlining procedure: k3451 
o|inlining procedure: k3451 
o|inlining procedure: k3393 
o|inlining procedure: k3505 
o|inlining procedure: k3505 
o|inlining procedure: "(batch-driver.scm:400) cputime113" 
o|consed rest parameter at call site: "(batch-driver.scm:394) dribble114" 2 
o|substituted constant variable: a3535 
o|inlining procedure: k3537 
o|substituted constant variable: a3540 
o|inlining procedure: k3537 
o|substituted constant variable: a3545 
o|consed rest parameter at call site: "(batch-driver.scm:373) dribble114" 2 
o|inlining procedure: k3561 
o|consed rest parameter at call site: "(batch-driver.scm:373) dribble114" 2 
o|inlining procedure: k3561 
o|consed rest parameter at call site: "(batch-driver.scm:373) dribble114" 2 
o|inlining procedure: k3564 
o|inlining procedure: k3564 
o|consed rest parameter at call site: "(batch-driver.scm:355) dribble114" 2 
o|inlining procedure: k3579 
o|consed rest parameter at call site: "(batch-driver.scm:355) dribble114" 2 
o|inlining procedure: k3579 
o|consed rest parameter at call site: "(batch-driver.scm:355) dribble114" 2 
o|substituted constant variable: a3581 
o|substituted constant variable: a3585 
o|propagated global variable: a3586 ##compiler#debugging-chicken 
o|substituted constant variable: a3591 
o|substituted constant variable: a3605 
o|inlining procedure: k3627 
o|inlining procedure: k3627 
o|inlining procedure: k3665 
o|inlining procedure: k3665 
o|inlining procedure: k3695 
o|inlining procedure: k3695 
o|inlining procedure: k3725 
o|inlining procedure: k3725 
o|consed rest parameter at call site: "(batch-driver.scm:317) dribble114" 2 
o|inlining procedure: k3745 
o|inlining procedure: k3745 
o|propagated global variable: g564565 string-split 
o|inlining procedure: k3774 
o|inlining procedure: k3774 
o|propagated global variable: g539540 string-split 
o|substituted constant variable: a3799 
o|propagated global variable: a3800 ##compiler#debugging-chicken 
o|substituted constant variable: a3804 
o|inlining procedure: k3892 
o|inlining procedure: k3892 
o|propagated global variable: g480482 ##compiler#default-extended-bindings 
o|inlining procedure: k3912 
o|inlining procedure: k3912 
o|propagated global variable: g431433 ##compiler#default-standard-bindings 
o|substituted constant variable: a3928 
o|substituted constant variable: a3931 
o|substituted constant variable: a3934 
o|substituted constant variable: a3937 
o|substituted constant variable: a3940 
o|inlining procedure: k3955 
o|inlining procedure: k3955 
o|inlining procedure: k3990 
o|inlining procedure: k3990 
o|inlining procedure: k4008 
o|inlining procedure: k4008 
o|substituted constant variable: a4034 
o|consed rest parameter at call site: "(batch-driver.scm:266) dribble114" 2 
o|substituted constant variable: a4047 
o|consed rest parameter at call site: "(batch-driver.scm:263) dribble114" 2 
o|substituted constant variable: a4054 
o|consed rest parameter at call site: "(batch-driver.scm:260) dribble114" 2 
o|inlining procedure: k4063 
o|inlining procedure: k4063 
o|substituted constant variable: a4075 
o|substituted constant variable: a4083 
o|inlining procedure: k4080 
o|inlining procedure: k4080 
o|substituted constant variable: a4091 
o|consed rest parameter at call site: "(batch-driver.scm:250) dribble114" 2 
o|inlining procedure: k4105 
o|inlining procedure: k4105 
o|substituted constant variable: a4121 
o|substituted constant variable: a4124 
o|substituted constant variable: a4127 
o|substituted constant variable: a4130 
o|substituted constant variable: a4133 
o|substituted constant variable: a4136 
o|substituted constant variable: a4139 
o|substituted constant variable: a4142 
o|substituted constant variable: a4145 
o|consed rest parameter at call site: "(batch-driver.scm:224) dribble114" 2 
o|substituted constant variable: a4151 
o|substituted constant variable: a4157 
o|substituted constant variable: a4161 
o|substituted constant variable: a4164 
o|substituted constant variable: a4167 
o|substituted constant variable: a4170 
o|substituted constant variable: a4175 
o|substituted constant variable: a4180 
o|substituted constant variable: a4185 
o|substituted constant variable: a4190 
o|propagated global variable: a4191 ##compiler#debugging-chicken 
o|substituted constant variable: a4193 
o|propagated global variable: a4194 ##compiler#debugging-chicken 
o|propagated global variable: tmp336338 ##compiler#enable-specialization 
o|inlining procedure: k4198 
o|propagated global variable: tmp336338 ##compiler#enable-specialization 
o|inlining procedure: k4198 
o|substituted constant variable: a4202 
o|substituted constant variable: a4205 
o|substituted constant variable: a4211 
o|inlining procedure: k4207 
o|inlining procedure: k4207 
o|inlining procedure: k4220 
o|inlining procedure: k4220 
o|substituted constant variable: a4246 
o|propagated global variable: a4247 ##compiler#debugging-chicken 
o|inlining procedure: k4272 
o|inlining procedure: k4272 
o|substituted constant variable: a4301 
o|propagated global variable: tmp275277 ##compiler#unit-name 
o|inlining procedure: k4307 
o|propagated global variable: tmp275277 ##compiler#unit-name 
o|inlining procedure: k4307 
o|substituted constant variable: a4321 
o|substituted constant variable: a4326 
o|inlining procedure: k4328 
o|inlining procedure: k4328 
o|substituted constant variable: a4331 
o|inlining procedure: k4337 
o|inlining procedure: k4337 
o|inlining procedure: k4366 
o|inlining procedure: k4366 
o|inlining procedure: k4373 
o|inlining procedure: k4373 
o|substituted constant variable: a4388 
o|inlining procedure: k4385 
o|inlining procedure: k4385 
o|inlining procedure: k4394 
o|inlining procedure: k4394 
o|inlining procedure: k4406 
o|inlining procedure: k4406 
o|replaced variables: 279 
o|removed binding forms: 165 
o|Removed `not' forms: 1 
o|removed side-effect free assignment to unused variable: cputime113 
o|substituted constant variable: r17564416 
o|substituted constant variable: r17564417 
o|contracted procedure: k1892 
o|substituted constant variable: r19464431 
o|substituted constant variable: r28724481 
o|substituted constant variable: a31514491 
o|substituted constant variable: a32084494 
o|inlining procedure: k3209 
o|inlining procedure: k3209 
o|substituted constant variable: a35604518 
o|substituted constant variable: a35604519 
o|substituted constant variable: a35634520 
o|substituted constant variable: a35634521 
o|substituted constant variable: a35784522 
o|substituted constant variable: a35784523 
o|substituted constant variable: r39914543 
o|propagated global variable: r41994554 ##compiler#enable-specialization 
o|contracted procedure: k4207 
o|substituted constant variable: r42084560 
o|propagated global variable: r43084566 ##compiler#unit-name 
o|substituted constant variable: r43674576 
o|substituted constant variable: r43674576 
o|substituted constant variable: r43864580 
o|substituted constant variable: a43934583 
o|substituted constant variable: a44054584 
o|converted assignments to bindings: (option-arg30) 
o|simplifications: ((let . 2)) 
o|replaced variables: 14 
o|removed binding forms: 383 
o|removed conditional forms: 1 
o|substituted constant variable: a1891 
o|inlining procedure: k2625 
o|inlining procedure: k2649 
o|substituted constant variable: a32084621 
o|inlining procedure: k3566 
o|inlining procedure: k3810 
o|inlining procedure: k3827 
o|inlining procedure: k3851 
o|inlining procedure: k3868 
o|inlining procedure: k3984 
o|inlining procedure: k3984 
o|replaced variables: 1 
o|removed binding forms: 36 
o|Removed `not' forms: 1 
o|substituted constant variable: r26504683 
o|contracted procedure: k3566 
o|substituted constant variable: r35674718 
o|substituted constant variable: r38114731 
o|substituted constant variable: r38284732 
o|substituted constant variable: r38524733 
o|substituted constant variable: r38694734 
o|substituted constant variable: r39854741 
o|substituted constant variable: r39854742 
o|removed binding forms: 5 
o|removed conditional forms: 4 
o|removed binding forms: 8 
o|simplifications: ((if . 6) (##core#call . 251)) 
o|  call simplifications:
o|    string->list
o|    string
o|    string=?	2
o|    eof-object?
o|    ##sys#cons	7
o|    length
o|    not	3
o|    ##sys#list	20
o|    list	2
o|    ##sys#setslot	17
o|    first
o|    >
o|    ##sys#call-with-values	2
o|    add1	5
o|    ##sys#make-structure
o|    car	10
o|    inexact->exact
o|    cddr
o|    cons	23
o|    string-length
o|    -	3
o|    fx<
o|    string-ref
o|    eq?	5
o|    *	2
o|    string->number	5
o|    ##sys#check-list	20
o|    pair?	29
o|    ##sys#slot	57
o|    memq	2
o|    write-char	7
o|    apply
o|    cdr	3
o|    null?	10
o|    cadr	2
o|    symbol?	2
o|contracted procedure: k1682 
o|contracted procedure: k1662 
o|contracted procedure: k1670 
o|contracted procedure: k1675 
o|contracted procedure: k4400 
o|contracted procedure: k1689 
o|contracted procedure: k1710 
o|contracted procedure: k1758 
o|contracted procedure: k1828 
o|contracted procedure: k1839 
o|contracted procedure: k1848 
o|contracted procedure: k1851 
o|contracted procedure: k1857 
o|contracted procedure: k1859 
o|contracted procedure: k1869 
o|inlining procedure: k1861 
o|contracted procedure: k1875 
o|contracted procedure: k1880 
o|contracted procedure: k1889 
o|inlining procedure: k1861 
o|contracted procedure: k1900 
o|contracted procedure: k1909 
o|inlining procedure: k1861 
o|inlining procedure: k1861 
o|contracted procedure: k1943 
o|contracted procedure: k1959 
o|contracted procedure: k1992 
o|contracted procedure: k1998 
o|contracted procedure: k2039 
o|contracted procedure: k2045 
o|contracted procedure: k2051 
o|contracted procedure: k2057 
o|contracted procedure: k2096 
o|contracted procedure: k2104 
o|contracted procedure: k2213 
o|contracted procedure: k2227 
o|contracted procedure: k2237 
o|contracted procedure: k2250 
o|contracted procedure: k2274 
o|contracted procedure: k2389 
o|contracted procedure: k2396 
o|contracted procedure: k2516 
o|contracted procedure: k2521 
o|contracted procedure: k2530 
o|contracted procedure: k2566 
o|contracted procedure: k2572 
o|contracted procedure: k2545 
o|inlining procedure: "(batch-driver.scm:669) dribble114" 
o|inlining procedure: "(batch-driver.scm:669) dribble114" 
o|inlining procedure: "(batch-driver.scm:661) dribble114" 
o|contracted procedure: k2659 
o|contracted procedure: k2649 
o|contracted procedure: k2664 
o|inlining procedure: "(batch-driver.scm:643) dribble114" 
o|inlining procedure: "(batch-driver.scm:594) dribble114" 
o|contracted procedure: k2710 
o|contracted procedure: k2720 
o|contracted procedure: k2737 
o|contracted procedure: k2786 
o|contracted procedure: k2795 
o|contracted procedure: k2798 
o|contracted procedure: k2806 
o|contracted procedure: k2815 
o|contracted procedure: k2818 
o|contracted procedure: k2831 
o|inlining procedure: "(batch-driver.scm:536) dribble114" 
o|contracted procedure: k2842 
o|contracted procedure: k2853 
o|contracted procedure: k2862 
o|contracted procedure: k2865 
o|inlining procedure: "(batch-driver.scm:528) dribble114" 
o|contracted procedure: k2900 
o|contracted procedure: k2909 
o|contracted procedure: k2912 
o|contracted procedure: k2930 
o|contracted procedure: k2952 
o|contracted procedure: k2949 
o|contracted procedure: k2933 
o|contracted procedure: k2942 
o|contracted procedure: k2958 
o|contracted procedure: k2971 
o|contracted procedure: k2985 
o|contracted procedure: k2988 
o|contracted procedure: k2997 
o|contracted procedure: k3007 
o|inlining procedure: "(batch-driver.scm:503) dribble114" 
o|contracted procedure: k3014 
o|contracted procedure: k3045 
o|contracted procedure: k3072 
o|contracted procedure: k3074 
o|contracted procedure: k3085 
o|contracted procedure: k3094 
o|contracted procedure: k3097 
o|propagated global variable: g958960 ##compiler#compiler-syntax-statistics 
o|contracted procedure: k3105 
o|contracted procedure: k3108 
o|contracted procedure: k3112 
o|contracted procedure: k3122 
o|contracted procedure: k3144 
o|contracted procedure: k3136 
o|contracted procedure: k3139 
o|contracted procedure: k3146 
o|contracted procedure: k3154 
o|contracted procedure: k3169 
o|contracted procedure: k3172 
o|contracted procedure: k3181 
o|contracted procedure: k3191 
o|propagated global variable: g932936 ##compiler#profile-lambda-list 
o|contracted procedure: k3203 
o|contracted procedure: k3200 
o|contracted procedure: k3197 
o|contracted procedure: k3223 
o|contracted procedure: k3226 
o|contracted procedure: k3235 
o|contracted procedure: k3245 
o|propagated global variable: g895899 ##compiler#used-units 
o|contracted procedure: k3253 
o|contracted procedure: k3256 
o|contracted procedure: k3265 
o|contracted procedure: k3275 
o|propagated global variable: g865869 ##compiler#immutable-constants 
o|contracted procedure: k3283 
o|contracted procedure: k3286 
o|contracted procedure: k3295 
o|contracted procedure: k3305 
o|contracted procedure: k3323 
o|contracted procedure: k3320 
o|contracted procedure: k3317 
o|contracted procedure: k3314 
o|contracted procedure: k3311 
o|contracted procedure: k3325 
o|contracted procedure: k3340 
o|contracted procedure: k3337 
o|contracted procedure: k3333 
o|contracted procedure: k3345 
o|contracted procedure: k3356 
o|contracted procedure: k3359 
o|contracted procedure: k3368 
o|contracted procedure: k3378 
o|inlining procedure: "(batch-driver.scm:436) dribble114" 
o|inlining procedure: "(batch-driver.scm:413) dribble114" 
o|contracted procedure: k3395 
o|contracted procedure: k3403 
o|contracted procedure: k3412 
o|contracted procedure: k3423 
o|contracted procedure: k3426 
o|contracted procedure: k3435 
o|contracted procedure: k3445 
o|contracted procedure: k3453 
o|contracted procedure: k3456 
o|contracted procedure: k3465 
o|contracted procedure: k3475 
o|contracted procedure: k3477 
o|contracted procedure: k3508 
o|contracted procedure: k3515 
o|contracted procedure: k3530 
o|inlining procedure: "(batch-driver.scm:394) dribble114" 
o|contracted procedure: k3576 
o|contracted procedure: k3547 
o|inlining procedure: "(batch-driver.scm:373) dribble114" 
o|inlining procedure: "(batch-driver.scm:373) dribble114" 
o|inlining procedure: "(batch-driver.scm:355) dribble114" 
o|inlining procedure: "(batch-driver.scm:355) dribble114" 
o|contracted procedure: k3614 
o|contracted procedure: k3618 
o|contracted procedure: k3629 
o|contracted procedure: k3632 
o|contracted procedure: k3641 
o|contracted procedure: k3651 
o|contracted procedure: k3656 
o|contracted procedure: k3667 
o|contracted procedure: k3670 
o|contracted procedure: k3679 
o|contracted procedure: k3689 
o|contracted procedure: k3697 
o|contracted procedure: k3700 
o|contracted procedure: k3709 
o|contracted procedure: k3719 
o|contracted procedure: k3727 
o|contracted procedure: k3736 
o|contracted procedure: k3739 
o|inlining procedure: "(batch-driver.scm:317) dribble114" 
o|contracted procedure: k3747 
o|contracted procedure: k3756 
o|contracted procedure: k3759 
o|contracted procedure: k3776 
o|contracted procedure: k3785 
o|contracted procedure: k3788 
o|contracted procedure: k3816 
o|contracted procedure: k3810 
o|contracted procedure: k3833 
o|contracted procedure: k3827 
o|contracted procedure: k3842 
o|contracted procedure: k3857 
o|contracted procedure: k3851 
o|contracted procedure: k3874 
o|contracted procedure: k3868 
o|contracted procedure: k3883 
o|contracted procedure: k3894 
o|contracted procedure: k3903 
o|contracted procedure: k3906 
o|propagated global variable: g480482 ##compiler#default-extended-bindings 
o|contracted procedure: k3914 
o|contracted procedure: k3923 
o|contracted procedure: k3926 
o|propagated global variable: g431433 ##compiler#default-standard-bindings 
o|contracted procedure: k3957 
o|contracted procedure: k3960 
o|contracted procedure: k3969 
o|contracted procedure: k3979 
o|contracted procedure: k3984 
o|contracted procedure: k3999 
o|contracted procedure: k4010 
o|contracted procedure: k4013 
o|contracted procedure: k4022 
o|contracted procedure: k4032 
o|inlining procedure: "(batch-driver.scm:266) dribble114" 
o|inlining procedure: "(batch-driver.scm:263) dribble114" 
o|inlining procedure: "(batch-driver.scm:260) dribble114" 
o|contracted procedure: k4066 
o|inlining procedure: "(batch-driver.scm:250) dribble114" 
o|contracted procedure: k4103 
o|inlining procedure: "(batch-driver.scm:224) dribble114" 
o|contracted procedure: k4222 
o|contracted procedure: k4225 
o|contracted procedure: k4234 
o|contracted procedure: k4244 
o|contracted procedure: k4261 
o|contracted procedure: k4274 
o|contracted procedure: k4277 
o|contracted procedure: k4286 
o|contracted procedure: k4296 
o|contracted procedure: k4339 
o|contracted procedure: k4342 
o|contracted procedure: k4351 
o|contracted procedure: k4361 
o|contracted procedure: k4376 
o|contracted procedure: k4412 
o|contracted procedure: k4406 
o|simplifications: ((let . 47)) 
o|removed binding forms: 208 
o|removed side-effect free assignment to unused variable: dribble114 
o|substituted constant variable: fstr1245020 
o|substituted constant variable: args1255021 
o|substituted constant variable: fstr1245026 
o|substituted constant variable: args1255027 
o|substituted constant variable: fstr1245032 
o|substituted constant variable: fstr1245038 
o|substituted constant variable: fstr1245044 
o|substituted constant variable: fstr1245056 
o|substituted constant variable: fstr1245064 
o|inlining procedure: k2935 
o|inlining procedure: k2935 
o|inlining procedure: k2990 
o|inlining procedure: k2990 
o|substituted constant variable: fstr1245076 
o|substituted constant variable: args1255077 
o|inlining procedure: k3174 
o|inlining procedure: k3174 
o|inlining procedure: k3206 
o|inlining procedure: k3206 
o|inlining procedure: k3206 
o|inlining procedure: k3228 
o|inlining procedure: k3228 
o|inlining procedure: k3258 
o|inlining procedure: k3258 
o|inlining procedure: k3288 
o|inlining procedure: k3288 
o|inlining procedure: k3361 
o|inlining procedure: k3361 
o|substituted constant variable: fstr1245094 
o|substituted constant variable: args1255095 
o|substituted constant variable: fstr1245100 
o|substituted constant variable: args1255101 
o|inlining procedure: k3428 
o|inlining procedure: k3428 
o|inlining procedure: k3458 
o|inlining procedure: k3458 
o|substituted constant variable: fstr1245114 
o|substituted constant variable: fstr1245120 
o|substituted constant variable: fstr1245126 
o|substituted constant variable: fstr1245132 
o|substituted constant variable: fstr1245138 
o|inlining procedure: k3634 
o|inlining procedure: k3634 
o|inlining procedure: k3672 
o|inlining procedure: k3672 
o|inlining procedure: k3702 
o|inlining procedure: k3702 
o|substituted constant variable: fstr1245152 
o|substituted constant variable: args1255153 
o|inlining procedure: k3962 
o|inlining procedure: k3962 
o|inlining procedure: k4015 
o|inlining procedure: k4015 
o|substituted constant variable: fstr1245170 
o|substituted constant variable: args1255171 
o|substituted constant variable: fstr1245176 
o|substituted constant variable: args1255177 
o|substituted constant variable: fstr1245182 
o|substituted constant variable: args1255183 
o|substituted constant variable: fstr1245188 
o|substituted constant variable: args1255189 
o|substituted constant variable: fstr1245194 
o|substituted constant variable: args1255195 
o|inlining procedure: k4227 
o|inlining procedure: k4227 
o|inlining procedure: k4279 
o|inlining procedure: k4279 
o|inlining procedure: k4344 
o|inlining procedure: k4344 
o|replaced variables: 31 
o|removed binding forms: 1 
o|simplifications: ((if . 2)) 
o|removed binding forms: 100 
o|contracted procedure: k1882 
o|contracted procedure: k1902 
o|removed binding forms: 2 
o|customizable procedures: (map-loop7696 k1705 k1731 k2063 k2065 map-loop282300 map-loop310328 k2101 k2107 k2111 k2119 k2121 k2123 k2125 k2127 k2129 k2131 k2133 k2135 k2137 k2139 k2141 k2143 k2145 k2147 k2149 k2153 k2158 k2163 map-loop369386 map-loop398415 k2188 k2190 k2192 k2194 k2196 for-each-loop424466 for-each-loop473515 for-each-loop523541 for-each-loop548566 for-each-loop574585 map-loop594611 map-loop643660 map-loop620667 k2263 arg-val119 k2286 k2309 loop774 doloop709710 map-loop714731 map-loop740757 map-loop788805 k2375 k2382 k2386 map-loop820841 map-loop853874 map-loop883904 k3128 map-loop920941 for-each-loop951974 print-expr118 map-loop9991016 map-loop10371054 for-each-loop10631076 for-each-loop10841096 collect-options120 for-each-loop11071121 for-each-loop11281139 k2445 print-db117 print-node116 analyze123 begin-time121 end-time122 loop1164 option-arg30 loop201 for-each-loop166178 print-header115) 
o|calls to known targets: 290 
o|identified direct recursive calls: f_2925 2 
o|fast box initializations: 41 
o|dropping unused closure argument: f_1657 
o|dropping unused closure argument: f_1750 
o|dropping unused closure argument: f_1854 
*/
/* end of file */
