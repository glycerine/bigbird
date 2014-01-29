/* Generated from c-platform.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: c-platform.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file c-platform.c
   unit: platform
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[939];
static double C_possibly_force_alignment;


C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2707)
static void C_ccall f_2707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3821)
static void C_ccall f_3821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4112)
static void C_ccall f_4112(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2136)
static void C_fcall f_2136(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4173)
static void C_ccall f_4173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4158)
static void C_fcall f_4158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_fcall f_4155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2561)
static void C_ccall f_2561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1947)
static void C_fcall f_1947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4349)
static void C_fcall f_4349(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4048)
static void C_fcall f_4048(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1909)
static void C_ccall f_1909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_platform_toplevel)
C_externexport void C_ccall C_platform_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2097)
static void C_fcall f_2097(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4771)
static void C_fcall f_4771(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4772)
static void C_ccall f_4772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3173)
static void C_ccall f_3173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1741)
static void C_fcall f_1741(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1744)
static void C_fcall f_1744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1718)
static void C_ccall f_1718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_fcall f_1649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3097)
static void C_ccall f_3097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3568)
static void C_ccall f_3568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_fcall f_3722(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3534)
static void C_ccall f_3534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2391)
static void C_ccall f_2391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2365)
static void C_ccall f_2365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2053)
static void C_ccall f_2053(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_fcall f_3911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2032)
static void C_ccall f_2032(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2204)
static void C_ccall f_2204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4197)
static void C_ccall f_4197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2895)
static void C_ccall f_2895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3221)
static void C_ccall f_3221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4674)
static void C_ccall f_4674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4632)
static void C_ccall f_4632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4481)
static void C_ccall f_4481(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4854)
static void C_fcall f_4854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4459)
static void C_ccall f_4459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4467)
static void C_fcall f_4467(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3674)
static void C_ccall f_3674(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2136)
static void C_fcall trf_2136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2136(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2136(t0,t1);}

C_noret_decl(trf_4158)
static void C_fcall trf_4158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4158(t0,t1);}

C_noret_decl(trf_4155)
static void C_fcall trf_4155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4155(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4155(t0,t1);}

C_noret_decl(trf_1947)
static void C_fcall trf_1947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1947(t0,t1,t2);}

C_noret_decl(trf_4349)
static void C_fcall trf_4349(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4349(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4349(t0,t1);}

C_noret_decl(trf_4048)
static void C_fcall trf_4048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4048(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4048(t0,t1,t2,t3);}

C_noret_decl(trf_2097)
static void C_fcall trf_2097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2097(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2097(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4771)
static void C_fcall trf_4771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4771(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4771(t0,t1);}

C_noret_decl(trf_1741)
static void C_fcall trf_1741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1741(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1741(t0,t1);}

C_noret_decl(trf_1744)
static void C_fcall trf_1744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1744(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1744(t0,t1);}

C_noret_decl(trf_1649)
static void C_fcall trf_1649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1649(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1649(t0,t1,t2,t3);}

C_noret_decl(trf_3722)
static void C_fcall trf_3722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3722(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3722(t0,t1);}

C_noret_decl(trf_3911)
static void C_fcall trf_3911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3911(t0,t1);}

C_noret_decl(trf_4854)
static void C_fcall trf_4854(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4854(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4854(t0,t1,t2);}

C_noret_decl(trf_4467)
static void C_fcall trf_4467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4467(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4467(t0,t1);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

/* k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in ... */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:811: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[442],C_fix(13),lf[443],C_SCHEME_TRUE);}

/* k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in ... */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:812: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[440],C_fix(13),lf[441],C_SCHEME_TRUE);}

/* k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in ... */
static void C_ccall f_2947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:813: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[438],C_fix(13),lf[439],C_SCHEME_TRUE);}

/* k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in ... */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:814: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[436],C_fix(13),lf[437],C_SCHEME_TRUE);}

/* k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in ... */
static void C_ccall f_2941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:810: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[444],C_fix(13),lf[445],C_SCHEME_TRUE);}

/* k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in ... */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:820: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[426],C_fix(13),lf[427],C_SCHEME_TRUE);}

/* k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in ... */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:819: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[428],C_fix(13),lf[429],C_SCHEME_TRUE);}

/* k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in ... */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:818: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[430],C_fix(13),lf[431],C_SCHEME_TRUE);}

/* k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in ... */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:817: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[432],C_fix(13),lf[433],C_SCHEME_TRUE);}

/* k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in ... */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:816: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[434],C_fix(13),lf[435],C_SCHEME_TRUE);}

/* k4862 in for-each-loop44 in k1613 in k1591 in k1589 */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4854(t3,((C_word*)t0)[4],t2);}

/* k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in ... */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:801: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[442],C_fix(17),C_fix(2),lf[457]);}

/* k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in ... */
static void C_ccall f_2923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:800: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[444],C_fix(17),C_fix(2),lf[458]);}

/* k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in ... */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:803: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[438],C_fix(17),C_fix(2),lf[455]);}

/* k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in ... */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2929,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:802: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[440],C_fix(17),C_fix(2),lf[456]);}

/* k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in ... */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:798: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[459],C_fix(16),C_fix(1),lf[460],C_SCHEME_TRUE,C_fix(4));}

/* k3622 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3624,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1182: g862 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in ... */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2935,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:806: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[452],C_fix(13),lf[453],C_SCHEME_TRUE);}

/* f_3629 */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3629,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in ... */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:807: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[450],C_fix(13),lf[451],C_SCHEME_TRUE);}

/* k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in ... */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:808: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[448],C_fix(13),lf[449],C_SCHEME_TRUE);}

/* k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in ... */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2941,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:809: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[446],C_fix(13),lf[447],C_SCHEME_TRUE);}

/* k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in ... */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:804: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[436],C_fix(17),C_fix(2),lf[454]);}

/* k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in ... */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:790: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[358],C_fix(18),C_SCHEME_END_OF_LIST);}

/* k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in ... */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:788: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[468],C_fix(18),C_fix(0));}

/* k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in ... */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:789: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[467],C_fix(18),C_fix(1));}

/* f_3618 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3618,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in ... */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:785: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[467],C_fix(12),lf[470],C_SCHEME_TRUE,C_fix(2));}

/* k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in ... */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2905,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:786: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[469],C_fix(12),C_SCHEME_FALSE,C_SCHEME_TRUE,C_fix(1));}

/* f_4813 */
static void C_ccall f_4813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4813,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_3604 */
static void C_ccall f_3604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3604,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4817 */
static void C_ccall f_4819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4819,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4805,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:270: g117 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_4771(t3,C_SCHEME_FALSE);}}

/* k4809 in k4817 */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
f_4771(t3,C_eqp(C_fix(2),t2));}

/* k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in ... */
static void C_ccall f_2915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2917,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:795: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[448],C_fix(16),C_fix(2),lf[463],C_SCHEME_TRUE,C_fix(4));}

/* k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in ... */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:794: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[452],C_fix(16),C_fix(2),lf[464],C_SCHEME_TRUE,C_fix(4));}

/* k2918 in k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in ... */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:797: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[446],C_fix(16),C_fix(2),lf[461],C_SCHEME_TRUE,C_fix(4));}

/* k2916 in k2914 in k2912 in k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in ... */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:796: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[450],C_fix(16),C_fix(2),lf[462],C_SCHEME_TRUE,C_fix(4));}

/* k2910 in k2908 in k2906 in k2904 in k2902 in k2900 in k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in ... */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2911,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:792: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[465],C_fix(13),lf[466],C_SCHEME_TRUE);}

/* f_3660 */
static void C_ccall f_3660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3660,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_3653 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in ... */
static void C_ccall f_3653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3653,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3660,tmp=(C_word)a,a+=2,tmp);
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3674,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3680,a[2]=t4,a[3]=t8,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t12=C_eqp(*((C_word*)lf[39]+1),lf[38]);
t13=(C_truep(t12)?C_a_i_list1(&a,1,lf[108]):C_a_i_list1(&a,1,lf[109]));
/* c-platform.scm:1162: g852 */
t14=t10;
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t11,lf[41],t13,t5);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in ... */
static void C_ccall f_3493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3496,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3769,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1119: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[124],C_fix(8),t3);}

/* k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in ... */
static void C_ccall f_3490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1090: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[125],C_fix(8),((C_word*)t0)[3]);}

/* k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1133: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[122],C_fix(3),lf[121],C_fix(0));}

/* k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in ... */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1134: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[120],C_fix(3),lf[121],C_SCHEME_FALSE);}

/* k3633 */
static void C_ccall f_3635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3635,2,t0,t1);}
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_a_i_list2(&a,2,t1,t2);
/* c-platform.scm:1185: g867 */
t4=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],lf[42],lf[85],t3);}

/* k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in ... */
static void C_ccall f_3484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3484,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3470,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3476,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1075: g766 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_3470 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3470(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3470,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_3478 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in ... */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3478,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k3474 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* c-platform.scm:1075: get */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,lf[75]);}

/* f_3422 in k3419 in k3413 in k3407 */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3422,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3419 in k3413 in k3407 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3421,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3422,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1088: qnode */
t5=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_FALSE);}}

/* k2377 in k2390 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in ... */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2379,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* c-platform.scm:530: g605 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[66],((C_word*)t0)[4],t2);}

/* f_2373 in k2390 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in ... */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2373,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3413 in k3407 */
static void C_ccall f_3415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3415,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1085: get */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],lf[79]);}}

/* k2346 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in ... */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2350,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2356,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2365,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:538: varnode */
t6=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}

/* k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in ... */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:674: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[641],C_fix(2),C_fix(1),lf[642],C_SCHEME_FALSE);}

/* k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in ... */
static void C_ccall f_2707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:673: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[643],C_fix(2),C_fix(2),lf[644],C_SCHEME_FALSE);}

/* k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in ... */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2707,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:672: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[645],C_fix(2),C_fix(2),lf[646],C_SCHEME_TRUE);}

/* k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in ... */
static void C_ccall f_2703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:671: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[647],C_fix(2),C_fix(2),lf[648],C_SCHEME_TRUE);}

/* k3815 in k3793 in k3825 in k3833 */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1129: g814 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in ... */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:670: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[649],C_fix(2),C_fix(2),lf[650],C_SCHEME_TRUE);}

/* f_2198 in k2210 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2198,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2192 in k2210 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2136(t2,C_eqp(lf[61],t1));}

/* k3407 */
static void C_ccall f_3409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3409,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1084: get */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],lf[80]);}}

/* f_2342 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in ... */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2342,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_3841 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in ... */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3841,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_cadr(t5);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3850,tmp=(C_word)a,a+=2,tmp);
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3865,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t10,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3966,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3972,a[2]=t5,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:945: g683 */
t14=t12;
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2354 in k2346 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in ... */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2356,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:528: g600 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[67],((C_word*)t0)[5],t2);}

/* f_2350 in k2346 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in ... */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2350,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in ... */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2328,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2342,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2348,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2391,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:532: gensym */
t7=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,lf[70]);}

/* k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in ... */
static void C_ccall f_2325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2396,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:527: g597 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[7]);}

/* f_2328 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in ... */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2328,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3463 in k3377 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in ... */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3465,2,t0,t1);}
t2=C_eqp(lf[66],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3451,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1077: g773 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2172 in k2134 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2172,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in ... */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2325,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:526: gensym */
t3=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[74]);}

/* f_3821 in k3833 */
static void C_ccall f_3821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3821,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4123 */
static void C_ccall f_4124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4124,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4155,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4234,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4240,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:418: g374 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}}

/* k4128 in k4123 */
static void C_ccall f_4129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4129,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4133,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4147,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4153,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:429: g410 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[41],lf[909],((C_word*)t0)[4]);}}

/* k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in ... */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:690: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[613],C_fix(14),lf[38],C_fix(1),lf[615],lf[616]);}

/* k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in ... */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:688: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[617],C_fix(17),C_fix(2),lf[618],lf[619]);}

/* k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in ... */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:693: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[609],C_fix(21),C_fix(0),lf[610],lf[611],lf[612],*((C_word*)lf[9]+1));}

/* k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in ... */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:691: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[613],C_fix(16),C_fix(1),lf[614],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* f_3829 */
static void C_ccall f_3829(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3829,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k3825 in k3833 */
static void C_ccall f_3827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3827,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3789,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3795,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1127: g810 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_3451 in k3463 in k3377 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in ... */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3451,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in ... */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2733,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:687: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[620],C_fix(17),C_fix(2),lf[621],lf[622]);}

/* k3455 in k3463 in k3377 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in ... */
static void C_ccall f_3457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3457,2,t0,t1);}
t2=C_i_caddr(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3394,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1078: decompose-lambda-list */
t4=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],t2,t3);}

/* k4285 in k4277 in k4293 in k4301 */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4287,2,t0,t1);}
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4256,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4271,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:417: qnode */
t5=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[4];
f_4124(2,t2,C_SCHEME_FALSE);}}

/* f_3459 in k3377 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in ... */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3459,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_4289 in k4301 */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4289,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in ... */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:562: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[847],C_fix(2),C_fix(1),lf[848],C_SCHEME_FALSE);}

/* k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in ... */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:563: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[845],C_fix(2),C_fix(1),lf[846],C_SCHEME_FALSE);}

/* k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in ... */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:564: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[843],C_fix(2),C_fix(1),lf[844],C_SCHEME_FALSE);}

/* k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in ... */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:565: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[841],C_fix(2),C_fix(1),lf[842],C_SCHEME_FALSE);}

/* f_4281 in k4277 in k4293 in k4301 */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4281,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in ... */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:561: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[849],C_fix(2),C_fix(1),lf[850],C_SCHEME_FALSE);}

/* f_4133 in k4128 in k4123 */
static void C_ccall f_4133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4133,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_3850 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3850,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in ... */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:697: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[598],C_fix(22),C_fix(1),lf[599],C_SCHEME_TRUE,*((C_word*)lf[9]+1),lf[600]);}

/* k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in ... */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:695: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[601],C_fix(21),C_fix(0),lf[602],lf[603],lf[604],*((C_word*)lf[9]+1));}

/* k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in ... */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2751,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:700: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[594],C_fix(16),C_fix(2),lf[595],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in ... */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:699: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[596],C_fix(16),C_fix(2),lf[597],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* f_2159 in k2134 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2159,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in ... */
static void C_ccall f_2741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:694: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[605],C_fix(21),C_fix(-1),lf[606],lf[607],lf[608],*((C_word*)lf[9]+1));}

/* k4293 in k4301 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4295,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4273,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:416: g355 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
f_4124(2,t3,C_SCHEME_FALSE);}}

/* f_4297 */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4297,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2151 in k2134 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2152,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:481: g526 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[41],((C_word*)t0)[5],t2);}

/* k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in ... */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:677: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[637],C_fix(2),C_fix(2),lf[638],C_SCHEME_TRUE);}

/* k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in ... */
static void C_ccall f_2715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:678: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[633],C_fix(14),lf[38],C_fix(2),lf[635],lf[636]);}

/* k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in ... */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2719,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:679: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[633],C_fix(2),C_fix(2),lf[634],C_SCHEME_TRUE);}

/* k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in ... */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2721,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:680: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[630],C_fix(17),C_fix(2),lf[631],lf[632]);}

/* k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in ... */
static void C_ccall f_2479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:555: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[860],C_fix(2),C_fix(1),lf[861],C_SCHEME_FALSE);}

/* k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in ... */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2713,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:676: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[637],C_fix(14),lf[38],C_fix(2),lf[639],lf[640]);}

/* k3436 in k3419 in k3413 in k3407 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3437,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* c-platform.scm:1086: g787 */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],lf[37],((C_word*)t0)[6],t2);}

/* k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in ... */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:554: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[862],C_fix(2),C_fix(1),lf[863],C_SCHEME_FALSE);}

/* k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in ... */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:553: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[816],C_fix(2),C_fix(1),lf[864],C_SCHEME_FALSE);}

/* k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in ... */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2475,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:552: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[818],C_fix(2),C_fix(1),lf[865],C_SCHEME_FALSE);}

/* k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in ... */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:551: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[820],C_fix(2),C_fix(1),lf[866],C_SCHEME_FALSE);}

/* f_4112 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_4112(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4112,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4124,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4297,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4303,a[2]=t4,a[3]=t10,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:414: g347 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in ... */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2725,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:682: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[625],C_fix(2),C_fix(2),lf[626],C_SCHEME_TRUE);}

/* k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in ... */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:683: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[623],C_fix(2),C_fix(2),lf[624],C_SCHEME_TRUE);}

/* f_2137 in k2134 */
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2137,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2134 */
static void C_fcall f_2136(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2136,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2137,tmp=(C_word)a,a+=2,tmp);
t3=(C_truep(*((C_word*)lf[40]+1))?lf[59]:lf[60]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:486: qnode */
t5=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=(C_truep(*((C_word*)lf[40]+1))?((C_word*)t0)[5]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2159,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[5]);
/* c-platform.scm:487: g532 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],lf[41],t4,((C_word*)t0)[6]);}
else{
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2172,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[7]);
/* c-platform.scm:488: g537 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],lf[41],t4,((C_word*)t0)[6]);}
else{
/* c-platform.scm:489: return */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],C_SCHEME_FALSE);}}}}

/* k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in ... */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2727,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:685: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[620],C_fix(4),lf[309],C_fix(0));}

/* k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in ... */
static void C_ccall f_2729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2731,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:686: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[617],C_fix(4),lf[309],C_fix(1));}

/* k3833 */
static void C_ccall f_3835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3835,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3821,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1126: g806 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in k2706 in k2704 in k2702 in k2700 in k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in ... */
static void C_ccall f_2721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:681: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[627],C_fix(17),C_fix(2),lf[628],lf[629]);}

/* k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in ... */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:557: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[856],C_fix(2),C_fix(1),lf[857],C_SCHEME_FALSE);}

/* k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in ... */
static void C_ccall f_2485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:558: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[854],C_fix(2),C_fix(1),lf[855],C_SCHEME_FALSE);}

/* k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in ... */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:559: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[852],C_fix(2),C_fix(1),lf[853],C_SCHEME_FALSE);}

/* k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in ... */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:560: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[814],C_fix(2),C_fix(1),lf[851],C_SCHEME_FALSE);}

/* k2132 */
static void C_ccall f_2133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2133,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:475: g511 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k4309 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:382: rewrite */
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[912],C_fix(8),t1);}

/* k4312 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_4313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:381: rewrite */
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[916],C_fix(8),t1);}

/* k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in ... */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:556: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[858],C_fix(2),C_fix(1),lf[859],C_SCHEME_FALSE);}

/* f_4315 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4315,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_eqp(lf[38],*((C_word*)lf[39]+1));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4328,tmp=(C_word)a,a+=2,tmp);
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=C_i_cadr(t5);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4346,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4349,a[2]=t5,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4390,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4396,a[2]=t13,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:353: g223 */
t16=t14;
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,t11);}
else{
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4397,tmp=(C_word)a,a+=2,tmp);
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4409,a[2]=t9,a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4411,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4417,a[2]=t11,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:361: g244 */
t14=t12;
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t13,lf[51],lf[922],C_SCHEME_END_OF_LIST);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in ... */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:717: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[563],C_fix(5),lf[566],C_fix(0),lf[38]);}

/* k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in ... */
static void C_ccall f_2777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:715: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[567],C_fix(16),C_fix(2),lf[568],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3864 */
static void C_ccall f_3865(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_a_i_list2(&a,2,((C_word*)t0)[2],t3);
/* c-platform.scm:942: g675 */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t4);}
else{
t3=C_eqp(*((C_word*)lf[39]+1),lf[38]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3875,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:957: g701 */
t5=t4;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[41],lf[272],((C_word*)t0)[6]);}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3882,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list2(&a,2,lf[273],*((C_word*)lf[9]+1));
/* c-platform.scm:958: g706 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,lf[42],t5,((C_word*)t0)[6]);}}}

/* k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in ... */
static void C_ccall f_2775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:714: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[569],C_fix(16),C_fix(1),lf[570],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k3866 in k3864 */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3868,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:942: g675 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in ... */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:713: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[567],C_fix(16),C_fix(1),lf[571],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* f_2103 in rewrite-c..r in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2103,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2114,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-platform.scm:472: call-with-current-continuation */
t9=*((C_word*)lf[64]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in ... */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2773,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:712: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[572],C_fix(16),C_fix(1),lf[573],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k1971 in map-loop433 in k1981 in k1985 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1972,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1947(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_1947(t6,((C_word*)t0)[5],t5);}}

/* f_4328 */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4328,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_1977 in k1985 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1977(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1977,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4177 in k4156 in k4154 in k4123 */
static void C_ccall f_4179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4179,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:424: g395 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* f_4173 in k4156 in k4154 in k4123 */
static void C_ccall f_4173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4173,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in ... */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:722: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[558],C_fix(2),C_fix(1),lf[560],C_SCHEME_TRUE);}

/* k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in ... */
static void C_ccall f_2787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:721: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[558],C_fix(5),lf[561],C_fix(0),lf[399]);}

/* k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in ... */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2787,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:720: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[558],C_fix(5),lf[562],C_fix(0),lf[38]);}

/* k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in ... */
static void C_ccall f_2783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:719: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[563],C_fix(2),C_fix(1),lf[564],C_SCHEME_FALSE);}

/* f_2118 */
static void C_ccall f_2118(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2118,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_2114 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)tr3,(void*)f_2114,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2118,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2133,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2136,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2206,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2212,a[2]=t7,a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:479: g520 */
t10=t8;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t3);}

/* k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in ... */
static void C_ccall f_2781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:718: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[563],C_fix(2),C_fix(1),lf[565],C_SCHEME_TRUE);}

/* k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in ... */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:569: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[833],C_fix(2),C_fix(1),lf[834],C_SCHEME_FALSE);}

/* k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in ... */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:568: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[835],C_fix(2),C_fix(1),lf[836],C_SCHEME_FALSE);}

/* k1981 in k1985 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1983,2,t0,t1);}
t2=C_i_car(t1);
t3=C_i_check_list_2(t2,lf[48]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1947(t8,t4,t2);}

/* k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in ... */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:570: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[831],C_fix(2),C_fix(1),lf[832],C_SCHEME_FALSE);}

/* k1985 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1986(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1986,2,t0,t1);}
t2=C_i_cdr(t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[43]+1);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1977,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=t4,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:445: g450 */
t10=t8;
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[3]);}

/* k1987 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1988,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1992,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2004,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2006,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2012,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:458: g492 */
t7=t5;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[51],lf[52],C_SCHEME_END_OF_LIST);}}

/* f_4147 in k4128 in k4123 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4147,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in ... */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:567: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[837],C_fix(2),C_fix(1),lf[838],C_SCHEME_FALSE);}

/* k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in ... */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2757,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:704: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[586],C_fix(16),C_fix(1),lf[587],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in ... */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:566: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[839],C_fix(2),C_fix(1),lf[840],C_SCHEME_FALSE);}

/* k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in ... */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:706: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[584],C_fix(16),C_fix(1),lf[585],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in ... */
static void C_ccall f_2753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:702: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[590],C_fix(16),C_fix(2),lf[591],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in ... */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:703: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[588],C_fix(16),C_fix(2),lf[589],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in k2716 in k2714 in k2712 in k2710 in k2708 in ... */
static void C_ccall f_2751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2751,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:701: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[592],C_fix(16),C_fix(2),lf[593],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in ... */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:574: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[823],C_fix(2),C_fix(1),lf[824],C_SCHEME_FALSE);}

/* k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in ... */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:573: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[825],C_fix(2),C_fix(1),lf[826],C_SCHEME_FALSE);}

/* k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in ... */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:575: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[812],C_fix(2),C_fix(1),lf[822],C_SCHEME_FALSE);}

/* k4301 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4303,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4289,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:415: g351 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_4124(2,t3,C_SCHEME_FALSE);}}

/* f_4159 in k4156 in k4154 in k4123 */
static void C_ccall f_4159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4159,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4156 in k4154 in k4123 */
static void C_fcall f_4158(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4158,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4159,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4173,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4179,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:426: g400 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[41],lf[910],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_4129(2,t2,C_SCHEME_FALSE);}}

/* k4154 in k4123 */
static void C_fcall f_4155(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4155,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_4158(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4205,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4211,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:421: g385 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}

/* k4151 in k4128 in k4123 */
static void C_ccall f_4153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4153,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:427: g405 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in ... */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:710: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[576],C_fix(16),C_fix(1),lf[577],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in ... */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:572: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[827],C_fix(2),C_fix(1),lf[828],C_SCHEME_FALSE);}

/* k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in ... */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:711: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[574],C_fix(16),C_fix(1),lf[575],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* f_3875 in k3864 */
static void C_ccall f_3875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3875,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in k2476 in k2474 in k2472 in k2470 in k2468 in ... */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:571: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[829],C_fix(2),C_fix(1),lf[830],C_SCHEME_FALSE);}

/* k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in ... */
static void C_ccall f_2763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:708: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[580],C_fix(16),C_fix(1),lf[581],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in ... */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:709: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[578],C_fix(16),C_fix(1),lf[579],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in k2746 in k2744 in k2742 in k2740 in k2738 in k2736 in k2734 in k2732 in k2730 in k2728 in k2726 in k2724 in k2722 in k2720 in k2718 in ... */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:707: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[582],C_fix(16),C_fix(1),lf[583],C_SCHEME_TRUE,*((C_word*)lf[9]+1));}

/* k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in ... */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:603: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[776],C_fix(2),C_fix(1),lf[777],C_SCHEME_TRUE);}

/* f_4350 in k4347 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4350,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in ... */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:604: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[774],C_fix(2),C_fix(1),lf[775],C_SCHEME_TRUE);}

/* k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in ... */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:601: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[780],C_fix(2),C_fix(1),lf[781],C_SCHEME_TRUE);}

/* k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in ... */
static void C_ccall f_2565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:602: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[778],C_fix(2),C_fix(1),lf[779],C_SCHEME_TRUE);}

/* k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in ... */
static void C_ccall f_2561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2561,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:600: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[782],C_fix(2),C_fix(1),lf[783],C_SCHEME_TRUE);}

/* k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in ... */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2579,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:608: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[766],C_fix(2),C_fix(1),lf[767],C_SCHEME_TRUE);}

/* k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in ... */
static void C_ccall f_2579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:609: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[764],C_fix(2),C_fix(1),lf[765],C_SCHEME_TRUE);}

/* k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in ... */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:606: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[770],C_fix(2),C_fix(1),lf[771],C_SCHEME_TRUE);}

/* k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in ... */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:607: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[768],C_fix(2),C_fix(1),lf[769],C_SCHEME_TRUE);}

/* f_4365 in k4347 */
static void C_ccall f_4365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4365,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4363 in k4347 */
static void C_ccall f_4364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4364,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:355: g229 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[41],lf[920],t2);}

/* k1933 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:443: cons* */
t2=*((C_word*)lf[47]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in ... */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:605: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[772],C_fix(2),C_fix(1),lf[773],C_SCHEME_TRUE);}

/* f_2076 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2076,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2068 in k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2070,2,t0,t1);}
t2=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t2,lf[53]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[54]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2032,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:450: g474 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t3=((C_word*)t0)[4];
f_1988(2,t3,C_SCHEME_FALSE);}}

/* map-loop433 in k1981 in k1985 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_fcall f_1947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1947,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1972,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* c-platform.scm:445: g439 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1943 in k1981 in k1985 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:445: append */
t2=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f_3801 in k3793 in k3825 in k3833 */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3801,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in ... */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2797,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:725: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[553],C_fix(5),lf[556],C_fix(0),lf[399]);}

/* k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in ... */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:726: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[553],C_fix(2),C_fix(1),lf[555],C_SCHEME_TRUE);}

/* k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in ... */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:727: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[553],C_fix(2),C_fix(1),lf[554],C_SCHEME_FALSE);}

/* k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2082,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(C_fix(2),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2064,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:448: g469 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[5]);}
else{
t5=((C_word*)t0)[4];
f_1988(2,t5,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[4];
f_1988(2,t3,C_SCHEME_FALSE);}}

/* f_2084 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2084,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in k2748 in ... */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:723: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[558],C_fix(2),C_fix(1),lf[559],C_SCHEME_FALSE);}

/* k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in k2756 in k2754 in k2752 in k2750 in ... */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:724: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[553],C_fix(5),lf[557],C_fix(0),lf[38]);}

/* f_1917 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1917,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4347 */
static void C_fcall f_4349(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4349,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4350,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4364,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:357: qnode */
t6=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_fix(1));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4365,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:358: g234 */
t3=t2;
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[41],lf[921],((C_word*)t0)[2]);}}

/* k4345 */
static void C_ccall f_4346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4346,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:349: g216 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in ... */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:579: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[816],C_fix(2),C_fix(1),lf[817],C_SCHEME_TRUE);}

/* k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in ... */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:580: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[814],C_fix(2),C_fix(1),lf[815],C_SCHEME_TRUE);}

/* k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in ... */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:581: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[812],C_fix(2),C_fix(1),lf[813],C_SCHEME_TRUE);}

/* k1928 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:441: g426 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],((C_word*)t0)[4],t1);}

/* k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in k2478 in ... */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:577: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[820],C_fix(2),C_fix(1),lf[821],C_SCHEME_TRUE);}

/* k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in k2486 in k2484 in k2482 in k2480 in ... */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2525,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:578: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[818],C_fix(2),C_fix(1),lf[819],C_SCHEME_TRUE);}

/* k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in ... */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2537,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:586: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[807],C_fix(1),C_fix(2),lf[808]);}

/* k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in ... */
static void C_ccall f_2537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:587: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[805],C_fix(1),C_fix(2),lf[806]);}

/* k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in ... */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:588: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[803],C_fix(1),C_fix(2),lf[804]);}

/* build */
static void C_fcall f_4048(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4048,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4051,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4065,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4071,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t8=C_a_i_list2(&a,2,t2,t3);
/* c-platform.scm:865: g639 */
t9=t6;
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,lf[42],lf[365],t8);}

/* k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in k2488 in ... */
static void C_ccall f_2531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:583: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[809],C_fix(7),C_fix(1),lf[811],C_fix(1),C_SCHEME_FALSE);}

/* k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in k2496 in k2494 in k2492 in k2490 in ... */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:584: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[809],C_fix(2),C_fix(1),lf[810],C_SCHEME_TRUE);}

/* f_4045 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in ... */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4045,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4048,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=C_i_length(t5);
switch(t7){
case C_fix(1):
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4091,a[2]=t6,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:870: qnode */
t10=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_fix(10));
case C_fix(2):
t8=C_i_car(t5);
t9=C_i_cadr(t5);
/* c-platform.scm:871: build */
t10=t6;
f_4048(t10,t1,t8,t9);
default:
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in ... */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:665: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[659],C_fix(2),C_fix(1),lf[660],C_SCHEME_TRUE);}

/* k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1909,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2084,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2090,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:440: g423 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t1);}

/* rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1900,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1909,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:438: last */
t7=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in ... */
static void C_ccall f_2685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:662: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[665],C_fix(2),C_fix(2),lf[666],C_SCHEME_FALSE);}

/* k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in ... */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:661: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[667],C_fix(2),C_fix(2),lf[668],C_SCHEME_FALSE);}

/* k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in ... */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:664: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[661],C_fix(2),C_fix(1),lf[662],C_SCHEME_TRUE);}

/* k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in ... */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:663: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[663],C_fix(2),C_fix(1),lf[664],C_SCHEME_TRUE);}

/* k4090 */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:870: build */
t2=((C_word*)t0)[2];
f_4048(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in ... */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:667: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[655],C_fix(2),C_fix(1),lf[656],C_SCHEME_TRUE);}

/* k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in ... */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:666: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[657],C_fix(2),C_fix(1),lf[658],C_SCHEME_TRUE);}

/* k2698 in k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in ... */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:669: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[651],C_fix(2),C_fix(1),lf[652],C_SCHEME_TRUE);}

/* k2696 in k2694 in k2692 in k2690 in k2688 in k2686 in k2684 in k2682 in k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in ... */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:668: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[653],C_fix(2),C_fix(1),lf[654],C_SCHEME_TRUE);}

/* k2010 in k1987 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:458: cons* */
t2=*((C_word*)lf[47]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_platform_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_platform_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("platform_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(14584)){
C_save(t1);
C_rereclaim2(14584*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,939);
lf[0]=C_h_intern(&lf[0],36,"\010compilerdefault-optimization-passes");
lf[1]=C_h_intern(&lf[1],29,"\010compilerdefault-declarations");
lf[2]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014always-bound\376\003\000\000\002\376\001\000\000\022\003sysstandard-input\376\003\000\000\002\376\001\000\000\023\003sysstandard-ou"
"tput\376\003\000\000\002\376\001\000\000\022\003sysstandard-error\376\003\000\000\002\376\001\000\000\023\003sysundefined-value\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022b"
"ound-to-procedure\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\011\003sysprint\376\003\000\000\002"
"\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\020\003sysdynamic-wind\376\003\000\000\002\376\001\000\000\024\003syscall"
"-with-values\376\003\000\000\002\376\001\000\000\017\003sysstart-timer\376\003\000\000\002\376\001\000\000\016\003sysstop-timer\376\003\000\000\002\376\001\000\000\007\003sysgcd\376\003"
"\000\000\002\376\001\000\000\007\003syslcm\376\003\000\000\002\376\001\000\000\020\003sysmake-promise\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\010\003syss"
"lot\376\003\000\000\002\376\001\000\000\023\003sysallocate-vector\376\003\000\000\002\376\001\000\000\020\003syslist->vector\376\003\000\000\002\376\001\000\000\015\003sysblock-re"
"f\376\003\000\000\002\376\001\000\000\016\003sysblock-set!\376\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\012\003sysappen"
"d\376\003\000\000\002\376\001\000\000\012\003sysvector\376\003\000\000\002\376\001\000\000\031\003sysforeign-char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fi"
"xnum-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-flonum-argument\376\003\000\000\002\376\001\000\000\011\003syserror\376\003\000\000\002\376\001\000\000\021\003"
"syspeek-c-string\376\003\000\000\002\376\001\000\000\031\003syspeek-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003syspeek-and-free-c"
"-string\376\003\000\000\002\376\001\000\000\042\003syspeek-and-free-nonnull-c-string\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-a"
"rgument\376\003\000\000\002\376\001\000\000\033\003sysforeign-string-argument\376\003\000\000\002\376\001\000\000\034\003sysforeign-pointer-argume"
"nt\376\003\000\000\002\376\001\000\000\034\003sysforeign-integer-argument\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continua"
"tion\376\377\016\376\377\016");
lf[3]=C_h_intern(&lf[3],39,"\010compilerdefault-debugging-declarations");
lf[4]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004coredeclare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\010debu"
"gger\376\377\016\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005quote\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022bound-to-procedure\376\003\000\000\002\376\001\000\000\024\003syspus"
"h-debug-frame\376\003\000\000\002\376\001\000\000\023\003syspop-debug-frame\376\003\000\000\002\376\001\000\000\025\003syscheck-debug-entry\376\003\000\000\002\376\001"
"\000\000\032\003syscheck-debug-assignment\376\003\000\000\002\376\001\000\000\032\003sysregister-debug-lambdas\376\003\000\000\002\376\001\000\000\034\003sysr"
"egister-debug-variables\376\003\000\000\002\376\001\000\000\016\003sysdebug-call\376\377\016\376\377\016\376\377\016\376\377\016");
lf[5]=C_h_intern(&lf[5],39,"\010compilerdefault-profiling-declarations");
lf[6]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\004coredeclare\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\010profiler\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000"
"\000\022bound-to-procedure\376\003\000\000\002\376\001\000\000\021\003sysprofile-entry\376\003\000\000\002\376\001\000\000\020\003sysprofile-exit\376\377\016\376\377\016\376"
"\377\016");
lf[7]=C_h_intern(&lf[7],30,"\010compilerunits-used-by-default");
lf[8]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007library\376\003\000\000\002\376\001\000\000\004eval\376\377\016");
lf[9]=C_h_intern(&lf[9],25,"\010compilerwords-per-flonum");
lf[10]=C_h_intern(&lf[10],24,"\010compilerparameter-limit");
lf[11]=C_h_intern(&lf[11],21,"small-parameter-limit");
lf[12]=C_h_intern(&lf[12],27,"\010compilerunlikely-variables");
lf[13]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007unquote\376\003\000\000\002\376\001\000\000\020unquote-splicing\376\377\016");
lf[14]=C_h_intern(&lf[14],27,"\010compilereq-inline-operator");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[16]=C_h_intern(&lf[16],34,"\010compilermembership-test-operators");
lf[17]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B\000\000\012C_u_i_memq\376B\000\000\005C_eqp\376\003\000\000\002\376\003\000\000\002\376B"
"\000\000\012C_i_member\376B\000\000\012C_i_equalp\376\003\000\000\002\376\003\000\000\002\376B\000\000\010C_i_memv\376B\000\000\010C_i_eqvp\376\377\016");
lf[18]=C_h_intern(&lf[18],32,"\010compilermembership-unfold-limit");
lf[19]=C_h_intern(&lf[19],28,"\010compilertarget-include-file");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\011chicken.h");
lf[21]=C_h_intern(&lf[21],31,"\010compilervalid-compiler-options");
lf[22]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005-help\376\003\000\000\002\376\001\000\000\001h\376\003\000\000\002\376\001\000\000\004help\376\003\000\000\002\376\001\000\000\007version\376\003\000\000\002\376\001\000\000\007verbose\376\003\000\000\002\376"
"\001\000\000\014explicit-use\376\003\000\000\002\376\001\000\000\010no-trace\376\003\000\000\002\376\001\000\000\013no-warnings\376\003\000\000\002\376\001\000\000\006unsafe\376\003\000\000\002\376\001\000\000"
"\005block\376\003\000\000\002\376\001\000\000\014check-syntax\376\003\000\000\002\376\001\000\000\011to-stdout\376\003\000\000\002\376\001\000\000\025no-usual-integrations\376\003"
"\000\000\002\376\001\000\000\020case-insensitive\376\003\000\000\002\376\001\000\000\016no-lambda-info\376\003\000\000\002\376\001\000\000\007profile\376\003\000\000\002\376\001\000\000\006inlin"
"e\376\003\000\000\002\376\001\000\000\024keep-shadowed-macros\376\003\000\000\002\376\001\000\000\021ignore-repository\376\003\000\000\002\376\001\000\000\021fixnum-arith"
"metic\376\003\000\000\002\376\001\000\000\022disable-interrupts\376\003\000\000\002\376\001\000\000\026optimize-leaf-routines\376\003\000\000\002\376\001\000\000\016compi"
"le-syntax\376\003\000\000\002\376\001\000\000\014tag-pointers\376\003\000\000\002\376\001\000\000\022accumulate-profile\376\003\000\000\002\376\001\000\000\035disable-sta"
"ck-overflow-checks\376\003\000\000\002\376\001\000\000\003raw\376\003\000\000\002\376\001\000\000\012specialize\376\003\000\000\002\376\001\000\000\036emit-external-proto"
"types-first\376\003\000\000\002\376\001\000\000\007release\376\003\000\000\002\376\001\000\000\005local\376\003\000\000\002\376\001\000\000\015inline-global\376\003\000\000\002\376\001\000\000\014anal"
"yze-only\376\003\000\000\002\376\001\000\000\007dynamic\376\003\000\000\002\376\001\000\000\012scrutinize\376\003\000\000\002\376\001\000\000\016no-argc-checks\376\003\000\000\002\376\001\000\000\023n"
"o-procedure-checks\376\003\000\000\002\376\001\000\000)no-procedure-checks-for-toplevel-bindings\376\003\000\000\002\376\001\000\000\006m"
"odule\376\003\000\000\002\376\001\000\000\017no-bound-checks\376\003\000\000\002\376\001\000\000&no-procedure-checks-for-usual-bindings\376\003"
"\000\000\002\376\001\000\000\022no-compiler-syntax\376\003\000\000\002\376\001\000\000\027no-parentheses-synonyms\376\003\000\000\002\376\001\000\000\020no-symbol-e"
"scape\376\003\000\000\002\376\001\000\000\013r5rs-syntax\376\003\000\000\002\376\001\000\000\031emit-all-import-libraries\376\003\000\000\002\376\001\000\000\014strict-ty"
"pes\376\003\000\000\002\376\001\000\000\012clustering\376\003\000\000\002\376\001\000\000\013lambda-lift\376\003\000\000\002\376\001\000\000\010unboxing\376\003\000\000\002\376\001\000\000\012setup-mo"
"de\376\003\000\000\002\376\001\000\000\026no-module-registration\376\377\016");
lf[23]=C_h_intern(&lf[23],45,"\010compilervalid-compiler-options-with-argument");
lf[24]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005debug\376\003\000\000\002\376\001\000\000\013output-file\376\003\000\000\002\376\001\000\000\014include-path\376\003\000\000\002\376\001\000\000\011heap-size\376\003\000"
"\000\002\376\001\000\000\012stack-size\376\003\000\000\002\376\001\000\000\004unit\376\003\000\000\002\376\001\000\000\004uses\376\003\000\000\002\376\001\000\000\015keyword-style\376\003\000\000\002\376\001\000\000\021re"
"quire-extension\376\003\000\000\002\376\001\000\000\014inline-limit\376\003\000\000\002\376\001\000\000\014profile-name\376\003\000\000\002\376\001\000\000\017disable-war"
"ning\376\003\000\000\002\376\001\000\000\024parenthesis-synonyms\376\003\000\000\002\376\001\000\000\007prelude\376\003\000\000\002\376\001\000\000\010postlude\376\003\000\000\002\376\001\000\000\010p"
"rologue\376\003\000\000\002\376\001\000\000\010epilogue\376\003\000\000\002\376\001\000\000\007nursery\376\003\000\000\002\376\001\000\000\006extend\376\003\000\000\002\376\001\000\000\007feature\376\003\000\000\002"
"\376\001\000\000\012no-feature\376\003\000\000\002\376\001\000\000\005types\376\003\000\000\002\376\001\000\000\023emit-import-library\376\003\000\000\002\376\001\000\000\020emit-inline"
"-file\376\003\000\000\002\376\001\000\000\020static-extension\376\003\000\000\002\376\001\000\000\023consult-inline-file\376\003\000\000\002\376\001\000\000\016emit-type-"
"file\376\003\000\000\002\376\001\000\000\013heap-growth\376\003\000\000\002\376\001\000\000\016heap-shrinkage\376\003\000\000\002\376\001\000\000\021heap-initial-size\376\003\000\000"
"\002\376\001\000\000\012ffi-define\376\003\000\000\002\376\001\000\000\020ffi-include-path\376\377\016");
lf[25]=C_h_intern(&lf[25],34,"\010compilerdefault-standard-bindings");
lf[26]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003not\376\003\000\000\002\376\001\000\000\010boolean\077\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\036call-with-current-contin"
"uation\376\003\000\000\002\376\001\000\000\003eq\077\376\003\000\000\002\376\001\000\000\004eqv\077\376\003\000\000\002\376\001\000\000\006equal\077\376\003\000\000\002\376\001\000\000\005pair\077\376\003\000\000\002\376\001\000\000\004cons\376\003"
"\000\000\002\376\001\000\000\003car\376\003\000\000\002\376\001\000\000\003cdr\376\003\000\000\002\376\001\000\000\004caar\376\003\000\000\002\376\001\000\000\004cadr\376\003\000\000\002\376\001\000\000\004cdar\376\003\000\000\002\376\001\000\000\004cddr"
"\376\003\000\000\002\376\001\000\000\005caaar\376\003\000\000\002\376\001\000\000\005caadr\376\003\000\000\002\376\001\000\000\005cadar\376\003\000\000\002\376\001\000\000\005caddr\376\003\000\000\002\376\001\000\000\005cdaar\376\003\000\000\002"
"\376\001\000\000\005cdadr\376\003\000\000\002\376\001\000\000\005cddar\376\003\000\000\002\376\001\000\000\005cdddr\376\003\000\000\002\376\001\000\000\006caaaar\376\003\000\000\002\376\001\000\000\006caaadr\376\003\000\000\002\376\001\000"
"\000\006caadar\376\003\000\000\002\376\001\000\000\006caaddr\376\003\000\000\002\376\001\000\000\006cadaar\376\003\000\000\002\376\001\000\000\006cadadr\376\003\000\000\002\376\001\000\000\006caddar\376\003\000\000\002\376\001\000"
"\000\006cadddr\376\003\000\000\002\376\001\000\000\006cdaaar\376\003\000\000\002\376\001\000\000\006cdaadr\376\003\000\000\002\376\001\000\000\006cdadar\376\003\000\000\002\376\001\000\000\006cdaddr\376\003\000\000\002\376\001\000"
"\000\006cddaar\376\003\000\000\002\376\001\000\000\006cddadr\376\003\000\000\002\376\001\000\000\006cdddar\376\003\000\000\002\376\001\000\000\006cddddr\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376"
"\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\005null\077\376\003\000\000\002\376\001\000\000\004list\376\003\000\000\002\376\001\000\000\005list\077\376\003\000\000\002\376\001\000\000\006length\376\003\000\000\002\376\001\000"
"\000\005zero\077\376\003\000\000\002\376\001\000\000\001\052\376\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001+\376\003\000\000\002\376\001\000\000\001/\376\003\000\000\002\376\001\000\000\001-\376\003\000\000\002\376\001\000\000\001>\376\003\000\000\002\376\001"
"\000\000\001<\376\003\000\000\002\376\001\000\000\002>=\376\003\000\000\002\376\001\000\000\002<=\376\003\000\000\002\376\001\000\000\001=\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\022cu"
"rrent-input-port\376\003\000\000\002\376\001\000\000\012write-char\376\003\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\005write\376\003\000\000\002\376\001\000\000\007di"
"splay\376\003\000\000\002\376\001\000\000\006append\376\003\000\000\002\376\001\000\000\016symbol->string\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\003map\376\003\000\000"
"\002\376\001\000\000\005char\077\376\003\000\000\002\376\001\000\000\015char->integer\376\003\000\000\002\376\001\000\000\015integer->char\376\003\000\000\002\376\001\000\000\013eof-object\077\376\003"
"\000\000\002\376\001\000\000\015vector-length\376\003\000\000\002\376\001\000\000\015string-length\376\003\000\000\002\376\001\000\000\012string-ref\376\003\000\000\002\376\001\000\000\013string"
"-set!\376\003\000\000\002\376\001\000\000\012vector-ref\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\006char=\077\376\003\000\000\002\376\001\000\000\006char<\077\376\003"
"\000\000\002\376\001\000\000\006char>\077\376\003\000\000\002\376\001\000\000\007char>=\077\376\003\000\000\002\376\001\000\000\007char<=\077\376\003\000\000\002\376\001\000\000\003gcd\376\003\000\000\002\376\001\000\000\003lcm\376\003\000\000\002\376"
"\001\000\000\007reverse\376\003\000\000\002\376\001\000\000\007symbol\077\376\003\000\000\002\376\001\000\000\016string->symbol\376\003\000\000\002\376\001\000\000\007number\077\376\003\000\000\002\376\001\000\000\010c"
"omplex\077\376\003\000\000\002\376\001\000\000\005real\077\376\003\000\000\002\376\001\000\000\010integer\077\376\003\000\000\002\376\001\000\000\011rational\077\376\003\000\000\002\376\001\000\000\004odd\077\376\003\000\000\002\376\001"
"\000\000\005even\077\376\003\000\000\002\376\001\000\000\011positive\077\376\003\000\000\002\376\001\000\000\011negative\077\376\003\000\000\002\376\001\000\000\006exact\077\376\003\000\000\002\376\001\000\000\010inexact\077"
"\376\003\000\000\002\376\001\000\000\003max\376\003\000\000\002\376\001\000\000\003min\376\003\000\000\002\376\001\000\000\010quotient\376\003\000\000\002\376\001\000\000\011remainder\376\003\000\000\002\376\001\000\000\006modulo\376"
"\003\000\000\002\376\001\000\000\005floor\376\003\000\000\002\376\001\000\000\007ceiling\376\003\000\000\002\376\001\000\000\010truncate\376\003\000\000\002\376\001\000\000\005round\376\003\000\000\002\376\001\000\000\016exact-"
">inexact\376\003\000\000\002\376\001\000\000\016inexact->exact\376\003\000\000\002\376\001\000\000\003exp\376\003\000\000\002\376\001\000\000\003log\376\003\000\000\002\376\001\000\000\003sin\376\003\000\000\002\376\001\000\000"
"\004expt\376\003\000\000\002\376\001\000\000\004sqrt\376\003\000\000\002\376\001\000\000\003cos\376\003\000\000\002\376\001\000\000\003tan\376\003\000\000\002\376\001\000\000\004asin\376\003\000\000\002\376\001\000\000\004acos\376\003\000\000\002\376\001"
"\000\000\004atan\376\003\000\000\002\376\001\000\000\016number->string\376\003\000\000\002\376\001\000\000\016string->number\376\003\000\000\002\376\001\000\000\011char-ci=\077\376\003\000\000\002\376"
"\001\000\000\011char-ci<\077\376\003\000\000\002\376\001\000\000\011char-ci>\077\376\003\000\000\002\376\001\000\000\012char-ci>=\077\376\003\000\000\002\376\001\000\000\012char-ci<=\077\376\003\000\000\002\376\001\000"
"\000\020char-alphabetic\077\376\003\000\000\002\376\001\000\000\020char-whitespace\077\376\003\000\000\002\376\001\000\000\015char-numeric\077\376\003\000\000\002\376\001\000\000\020cha"
"r-lower-case\077\376\003\000\000\002\376\001\000\000\020char-upper-case\077\376\003\000\000\002\376\001\000\000\013char-upcase\376\003\000\000\002\376\001\000\000\015char-downc"
"ase\376\003\000\000\002\376\001\000\000\007string\077\376\003\000\000\002\376\001\000\000\010string=\077\376\003\000\000\002\376\001\000\000\010string>\077\376\003\000\000\002\376\001\000\000\010string<\077\376\003\000\000\002\376"
"\001\000\000\011string>=\077\376\003\000\000\002\376\001\000\000\011string<=\077\376\003\000\000\002\376\001\000\000\013string-ci=\077\376\003\000\000\002\376\001\000\000\013string-ci<\077\376\003\000\000\002\376"
"\001\000\000\013string-ci>\077\376\003\000\000\002\376\001\000\000\014string-ci<=\077\376\003\000\000\002\376\001\000\000\014string-ci>=\077\376\003\000\000\002\376\001\000\000\015string-appe"
"nd\376\003\000\000\002\376\001\000\000\014string->list\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\007vector\077\376\003\000\000\002\376\001\000\000\014vector-"
">list\376\003\000\000\002\376\001\000\000\014list->vector\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000"
"\002\376\001\000\000\011substring\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000\000\002\376\001\000\000\013make-string"
"\376\003\000\000\002\376\001\000\000\013make-vector\376\003\000\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002\376\001\000"
"\000\024call-with-input-file\376\003\000\000\002\376\001\000\000\025call-with-output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376"
"\003\000\000\002\376\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\006ve"
"ctor\376\003\000\000\002\376\001\000\000\012procedure\077\376\003\000\000\002\376\001\000\000\004memq\376\003\000\000\002\376\001\000\000\004memv\376\003\000\000\002\376\001\000\000\006member\376\003\000\000\002\376\001\000\000\004as"
"sq\376\003\000\000\002\376\001\000\000\004assv\376\003\000\000\002\376\001\000\000\005assoc\376\003\000\000\002\376\001\000\000\011list-tail\376\003\000\000\002\376\001\000\000\010list-ref\376\003\000\000\002\376\001\000\000\003ab"
"s\376\003\000\000\002\376\001\000\000\013char-ready\077\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000\014list->string\376\003\000\000\002\376\001\000\000\014string-"
">list\376\003\000\000\002\376\001\000\000\022current-input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\377\016");
lf[27]=C_h_intern(&lf[27],34,"\010compilerdefault-extended-bindings");
lf[28]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\013bitwise-and\376\003\000\000\002\376\001\000\000\012alist-cons\376\003\000\000\002\376\001\000\000\005xcons\376\003\000\000\002\376\001\000\000\013bitwise-ior\376\003\000"
"\000\002\376\001\000\000\013bitwise-xor\376\003\000\000\002\376\001\000\000\013bitwise-not\376\003\000\000\002\376\001\000\000\004add1\376\003\000\000\002\376\001\000\000\004sub1\376\003\000\000\002\376\001\000\000\003fx+"
"\376\003\000\000\002\376\001\000\000\003fx-\376\003\000\000\002\376\001\000\000\003fx\052\376\003\000\000\002\376\001\000\000\003fx/\376\003\000\000\002\376\001\000\000\004fx+\077\376\003\000\000\002\376\001\000\000\004fx-\077\376\003\000\000\002\376\001\000\000\004fx\052"
"\077\376\003\000\000\002\376\001\000\000\004fx/\077\376\003\000\000\002\376\001\000\000\005fxmod\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\004fp/\077\376\003\000\000\002\376\001\000\000\003fx=\376\003\000\000\002\376\001\000\000\003fx"
">\376\003\000\000\002\376\001\000\000\003fx<\376\003\000\000\002\376\001\000\000\004fx>=\376\003\000\000\002\376\001\000\000\004fx<=\376\003\000\000\002\376\001\000\000\007fixnum\077\376\003\000\000\002\376\001\000\000\005fxneg\376\003\000\000\002\376"
"\001\000\000\005fxmax\376\003\000\000\002\376\001\000\000\005fxmin\376\003\000\000\002\376\001\000\000\010identity\376\003\000\000\002\376\001\000\000\003fp+\376\003\000\000\002\376\001\000\000\003fp-\376\003\000\000\002\376\001\000\000\003fp"
"\052\376\003\000\000\002\376\001\000\000\003fp/\376\003\000\000\002\376\001\000\000\005fpmin\376\003\000\000\002\376\001\000\000\005fpmax\376\003\000\000\002\376\001\000\000\005fpneg\376\003\000\000\002\376\001\000\000\003fp>\376\003\000\000\002\376\001\000"
"\000\003fp<\376\003\000\000\002\376\001\000\000\003fp=\376\003\000\000\002\376\001\000\000\004fp>=\376\003\000\000\002\376\001\000\000\004fp<=\376\003\000\000\002\376\001\000\000\005fxand\376\003\000\000\002\376\001\000\000\005fxnot\376\003\000\000"
"\002\376\001\000\000\005fxior\376\003\000\000\002\376\001\000\000\005fxxor\376\003\000\000\002\376\001\000\000\005fxshr\376\003\000\000\002\376\001\000\000\005fxshl\376\003\000\000\002\376\001\000\000\010bit-set\077\376\003\000\000\002\376"
"\001\000\000\006fxodd\077\376\003\000\000\002\376\001\000\000\007fxeven\077\376\003\000\000\002\376\001\000\000\007fpfloor\376\003\000\000\002\376\001\000\000\011fpceiling\376\003\000\000\002\376\001\000\000\012fptrunc"
"ate\376\003\000\000\002\376\001\000\000\007fpround\376\003\000\000\002\376\001\000\000\005fpsin\376\003\000\000\002\376\001\000\000\005fpcos\376\003\000\000\002\376\001\000\000\005fptan\376\003\000\000\002\376\001\000\000\006fpasi"
"n\376\003\000\000\002\376\001\000\000\006fpacos\376\003\000\000\002\376\001\000\000\006fpatan\376\003\000\000\002\376\001\000\000\007fpatan2\376\003\000\000\002\376\001\000\000\005fpexp\376\003\000\000\002\376\001\000\000\006fpexp"
"t\376\003\000\000\002\376\001\000\000\005fplog\376\003\000\000\002\376\001\000\000\006fpsqrt\376\003\000\000\002\376\001\000\000\005fpabs\376\003\000\000\002\376\001\000\000\012fpinteger\077\376\003\000\000\002\376\001\000\000\020ari"
"thmetic-shift\376\003\000\000\002\376\001\000\000\004void\376\003\000\000\002\376\001\000\000\014flush-output\376\003\000\000\002\376\001\000\000\017thread-specific\376\003\000\000\002\376"
"\001\000\000\024thread-specific-set!\376\003\000\000\002\376\001\000\000\011not-pair\077\376\003\000\000\002\376\001\000\000\005atom\077\376\003\000\000\002\376\001\000\000\012null-list\077\376\003"
"\000\000\002\376\001\000\000\005print\376\003\000\000\002\376\001\000\000\006print\052\376\003\000\000\002\376\001\000\000\005error\376\003\000\000\002\376\001\000\000\014proper-list\077\376\003\000\000\002\376\001\000\000\007call"
"/cc\376\003\000\000\002\376\001\000\000\011blob-size\376\003\000\000\002\376\001\000\000\025u8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8vector->blob/sh"
"ared\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026s16vector->blob/shared\376\003\000\000\002\376\001\000\000\026u3"
"2vector->blob/shared\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->blob/sh"
"ared\376\003\000\000\002\376\001\000\000\026f64vector->blob/shared\376\003\000\000\002\376\001\000\000\025blob->u8vector/shared\376\003\000\000\002\376\001\000\000\025blo"
"b->s8vector/shared\376\003\000\000\002\376\001\000\000\026blob->u16vector/shared\376\003\000\000\002\376\001\000\000\026blob->s16vector/shar"
"ed\376\003\000\000\002\376\001\000\000\026blob->u32vector/shared\376\003\000\000\002\376\001\000\000\026blob->s32vector/shared\376\003\000\000\002\376\001\000\000\026blob"
"->f32vector/shared\376\003\000\000\002\376\001\000\000\026blob->f64vector/shared\376\003\000\000\002\376\001\000\000\011block-ref\376\003\000\000\002\376\001\000\000\012b"
"lock-set!\376\003\000\000\002\376\001\000\000\017number-of-slots\376\003\000\000\002\376\001\000\000\017substring-index\376\003\000\000\002\376\001\000\000\022substring-i"
"ndex-ci\376\003\000\000\002\376\001\000\000\016hash-table-ref\376\003\000\000\002\376\001\000\000\004any\077\376\003\000\000\002\376\001\000\000\013read-string\376\003\000\000\002\376\001\000\000\013subs"
"tring=\077\376\003\000\000\002\376\001\000\000\016substring-ci=\077\376\003\000\000\002\376\001\000\000\005first\376\003\000\000\002\376\001\000\000\006second\376\003\000\000\002\376\001\000\000\005third\376\003\000"
"\000\002\376\001\000\000\006fourth\376\003\000\000\002\376\001\000\000\024make-record-instance\376\003\000\000\002\376\001\000\000\005foldl\376\003\000\000\002\376\001\000\000\005foldr\376\003\000\000\002\376\001"
"\000\000\017u8vector-length\376\003\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\020s"
"16vector-length\376\003\000\000\002\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002\376\001\000\000\020f32"
"vector-length\376\003\000\000\002\376\001\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\006setter\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000"
"\000\002\376\001\000\000\014s8vector-ref\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\015u32ve"
"ctor-ref\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\015f32vector-ref\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\003\000"
"\000\002\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\016f64vector-set!\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\015s8"
"vector-set!\376\003\000\000\002\376\001\000\000\016u16vector-set!\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\016u32vector-s"
"et!\376\003\000\000\002\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\001\000\000\014locative-ref\376\003\000\000\002\376\001\000\000\015locative-set!\376\003\000\000\002\376\001\000"
"\000\020locative->object\376\003\000\000\002\376\001\000\000\011locative\077\376\003\000\000\002\376\001\000\000\015null-pointer\077\376\003\000\000\002\376\001\000\000\017pointer->o"
"bject\376\003\000\000\002\376\001\000\000\007flonum\077\376\003\000\000\002\376\001\000\000\007finite\077\376\003\000\000\002\376\001\000\000\020address->pointer\376\003\000\000\002\376\001\000\000\020point"
"er->address\376\003\000\000\002\376\001\000\000\010pointer+\376\003\000\000\002\376\001\000\000\011pointer=\077\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\003\000\000\002\376\001\000"
"\000\016pointer-s8-ref\376\003\000\000\002\376\001\000\000\017pointer-u16-ref\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\003\000\000\002\376\001\000\000\017poin"
"ter-u32-ref\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\003\000\000\002\376\001\000\000\017pointer-f"
"64-ref\376\003\000\000\002\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\001\000\000\020pointer-u16-se"
"t!\376\003\000\000\002\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\001\000\000\020pointer-u32-set!\376\003\000\000\002\376\001\000\000\020pointer-s32-set!"
"\376\003\000\000\002\376\001\000\000\020pointer-f32-set!\376\003\000\000\002\376\001\000\000\020pointer-f64-set!\376\003\000\000\002\376\001\000\000\022current-error-port"
"\376\003\000\000\002\376\001\000\000\016current-thread\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001"
"\000\000\007fprintf\376\003\000\000\002\376\001\000\000\013get-keyword\376\377\016");
lf[29]=C_h_intern(&lf[29],26,"\010compilerinternal-bindings");
lf[30]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\013\003syssetslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\016\003sysbloc"
"k-set!\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continuation\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003s"
"ysbyte\376\003\000\000\002\376\001\000\000\013\003syssetbyte\376\003\000\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure"
"\077\376\003\000\000\002\376\001\000\000\016\003sysstructure\077\376\003\000\000\002\376\001\000\000\023\003syscheck-structure\376\003\000\000\002\376\001\000\000\017\003syscheck-exact\376"
"\003\000\000\002\376\001\000\000\020\003syscheck-number\376\003\000\000\002\376\001\000\000\016\003syscheck-list\376\003\000\000\002\376\001\000\000\016\003syscheck-pair\376\003\000\000\002\376\001"
"\000\000\020\003syscheck-string\376\003\000\000\002\376\001\000\000\020\003syscheck-symbol\376\003\000\000\002\376\001\000\000\021\003syscheck-boolean\376\003\000\000\002\376\001\000"
"\000\022\003syscheck-locative\376\003\000\000\002\376\001\000\000\016\003syscheck-port\376\003\000\000\002\376\001\000\000\024\003syscheck-input-port\376\003\000\000\002\376"
"\001\000\000\025\003syscheck-output-port\376\003\000\000\002\376\001\000\000\023\003syscheck-open-port\376\003\000\000\002\376\001\000\000\016\003syscheck-char\376\003"
"\000\000\002\376\001\000\000\020\003syscheck-vector\376\003\000\000\002\376\001\000\000\025\003syscheck-byte-vector\376\003\000\000\002\376\001\000\000\010\003syslist\376\003\000\000\002\376\001"
"\000\000\010\003syscons\376\003\000\000\002\376\001\000\000\024\003syscall-with-values\376\003\000\000\002\376\001\000\000\020\003sysfits-in-int\077\376\003\000\000\002\376\001\000\000\031\003sy"
"sfits-in-unsigned-int\077\376\003\000\000\002\376\001\000\000\033\003sysflonum-in-fixnum-range\077\376\003\000\000\002\376\001\000\000\011\003sysfudge\376\003"
"\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002\376\001\000\000\021\003sysdirect-return\376\003\000\000\002\376\001\000\000\022\003syscontext-switch\376\003\000"
"\000\002\376\001\000\000\022\003sysmake-structure\376\003\000\000\002\376\001\000\000\011\003sysapply\376\003\000\000\002\376\001\000\000\020\003sysapply-values\376\003\000\000\002\376\001\000\000\026"
"\003syscontinuation-graft\376\003\000\000\002\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\017\003sysmake-vector\376\003\000\000\002\376\001\000"
"\000\012\003syssetter\376\003\000\000\002\376\001\000\000\007\003syscar\376\003\000\000\002\376\001\000\000\007\003syscdr\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000\002\376\001\000\000\007\003syse"
"q\077\376\003\000\000\002\376\001\000\000\011\003syslist\077\376\003\000\000\002\376\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000\017\003sysget-ke"
"yword\376\003\000\000\002\376\001\000\000\031\003sysforeign-char-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-fixnum-argument\376\003\000"
"\000\002\376\001\000\000\033\003sysforeign-flonum-argument\376\003\000\000\002\376\001\000\000\032\003sysforeign-block-argument\376\003\000\000\002\376\001\000\000#"
"\003sysforeign-struct-wrapper-argument\376\003\000\000\002\376\001\000\000\033\003sysforeign-string-argument\376\003\000\000\002\376\001\000"
"\000\034\003sysforeign-pointer-argument\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000\034\003sysforeign-integer-ar"
"gument\376\003\000\000\002\376\001\000\000%\003sysforeign-unsigned-integer-argument\376\003\000\000\002\376\001\000\000\022\003sysdouble->numbe"
"r\376\003\000\000\002\376\001\000\000\017\003syspeek-fixnum\376\003\000\000\002\376\001\000\000\014\003syssetislot\376\003\000\000\002\376\001\000\000\020\003syspoke-integer\376\003\000\000\002\376"
"\001\000\000\016\003syspermanent\077\376\003\000\000\002\376\001\000\000\012\003sysvalues\376\003\000\000\002\376\001\000\000\017\003syspoke-double\376\003\000\000\002\376\001\000\000\021\003sysint"
"ern-symbol\376\003\000\000\002\376\001\000\000\017\003sysmake-symbol\376\003\000\000\002\376\001\000\000\021\003sysnull-pointer\077\376\003\000\000\002\376\001\000\000\015\003syspeek"
"-byte\376\003\000\000\002\376\001\000\000\020\003sysfile-exists\077\376\377\016");
lf[31]=C_h_intern(&lf[31],30,"\010compilernon-foldable-bindings");
lf[32]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006vector\376\003\000\000\002\376\001\000\000\004cons\376\003\000\000\002\376\001\000\000\004list\376\003\000\000\002\376\001\000\000\006string\376\003\000\000\002\376\001\000\000\013make-vecto"
"r\376\003\000\000\002\376\001\000\000\013make-string\376\003\000\000\002\376\001\000\000\016string->symbol\376\003\000\000\002\376\001\000\000\006values\376\003\000\000\002\376\001\000\000\022current-"
"input-port\376\003\000\000\002\376\001\000\000\023current-output-port\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\012write-char\376\003"
"\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\005apply\376\003\000\000\002\376\001\000\000\036call-wit"
"h-current-continuation\376\003\000\000\002\376\001\000\000\010set-car!\376\003\000\000\002\376\001\000\000\010set-cdr!\376\003\000\000\002\376\001\000\000\012write-char\376\003"
"\000\000\002\376\001\000\000\007newline\376\003\000\000\002\376\001\000\000\005write\376\003\000\000\002\376\001\000\000\007display\376\003\000\000\002\376\001\000\000\011peek-char\376\003\000\000\002\376\001\000\000\013char"
"-ready\077\376\003\000\000\002\376\001\000\000\004read\376\003\000\000\002\376\001\000\000\011read-char\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000"
"\013string-set!\376\003\000\000\002\376\001\000\000\013vector-set!\376\003\000\000\002\376\001\000\000\014string-fill!\376\003\000\000\002\376\001\000\000\014vector-fill!\376\003\000"
"\000\002\376\001\000\000\017open-input-file\376\003\000\000\002\376\001\000\000\020open-output-file\376\003\000\000\002\376\001\000\000\020close-input-port\376\003\000\000\002\376"
"\001\000\000\021close-output-port\376\003\000\000\002\376\001\000\000\024call-with-input-port\376\003\000\000\002\376\001\000\000\025call-with-output-po"
"rt\376\003\000\000\002\376\001\000\000\020call-with-values\376\003\000\000\002\376\001\000\000\004eval\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\013\003syssetslo"
"t\376\003\000\000\002\376\001\000\000\042\003syscall-with-current-continuation\376\003\000\000\002\376\001\000\000\011\003sysfudge\376\003\000\000\002\376\001\000\000\014flush-"
"output\376\003\000\000\002\376\001\000\000\005print\376\003\000\000\002\376\001\000\000\004void\376\003\000\000\002\376\001\000\000\025u8vector->blob/shared\376\003\000\000\002\376\001\000\000\025s8ve"
"ctor->blob/shared\376\003\000\000\002\376\001\000\000\026u16vector->blob/shared\376\003\000\000\002\376\001\000\000\026s16vector->blob/share"
"d\376\003\000\000\002\376\001\000\000\026u32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f32vector->blob/shared\376\003\000\000\002\376\001\000\000\026f64ve"
"ctor->blob/shared\376\003\000\000\002\376\001\000\000\026s32vector->blob/shared\376\003\000\000\002\376\001\000\000\013read-string\376\003\000\000\002\376\001\000\000\014"
"read-string!\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\020address->pointer\376\003\000\000\002\376\001\000\000\020pointer->address\376\003\000\000\002"
"\376\001\000\000\022\003sysmake-structure\376\003\000\000\002\376\001\000\000\006print\052\376\003\000\000\002\376\001\000\000\017\003sysmake-vector\376\003\000\000\002\376\001\000\000\011\003sysap"
"ply\376\003\000\000\002\376\001\000\000\014\003syssetislot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\010\003sysbyte\376\003\000\000\002\376\001\000\000\013\003sys"
"setbyte\376\003\000\000\002\376\001\000\000\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\013get-keyword\376\003\000\000\002\376\001\000\000\017u8vector-length\376\003"
"\000\000\002\376\001\000\000\017s8vector-length\376\003\000\000\002\376\001\000\000\020u16vector-length\376\003\000\000\002\376\001\000\000\020s16vector-length\376\003\000\000\002"
"\376\001\000\000\020u32vector-length\376\003\000\000\002\376\001\000\000\020s32vector-length\376\003\000\000\002\376\001\000\000\020f32vector-length\376\003\000\000\002\376\001"
"\000\000\020f64vector-length\376\003\000\000\002\376\001\000\000\020\003sysapply-values\376\003\000\000\002\376\001\000\000\012\003syssetter\376\003\000\000\002\376\001\000\000\006sette"
"r\376\003\000\000\002\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\001\000\000\016f64vector-set!\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\003\000\000\002\376\001\000\000"
"\014s8vector-ref\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\003\000\000\002\376\001\000\000\015u32vector-r"
"ef\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\003\000\000\002\376\001\000\000\015u8vector-set!\376\003\000\000\002\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\001\000\000"
"\016u16vector-set!\376\003\000\000\002\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\001\000\000\016u32vector-set!\376\003\000\000\002\376\001\000\000\016s32vect"
"or-set!\376\003\000\000\002\376\001\000\000\021\003sysintern-symbol\376\003\000\000\002\376\001\000\000\017\003sysmake-symbol\376\003\000\000\002\376\001\000\000\024make-record"
"-instance\376\003\000\000\002\376\001\000\000\005error\376\003\000\000\002\376\001\000\000\016\003sysblock-set!\376\003\000\000\002\376\001\000\000\022current-error-port\376\003\000\000"
"\002\376\001\000\000\016current-thread\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\003\000\000\002\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\001\000\000\016p"
"ointer-s8-ref\376\003\000\000\002\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\001\000\000\017pointer-u16-ref\376\003\000\000\002\376\001\000\000\020pointer"
"-u16-set!\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\003\000\000\002\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\001\000\000\017pointer-u3"
"2-ref\376\003\000\000\002\376\001\000\000\020pointer-u32-set!\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\003\000\000\002\376\001\000\000\020pointer-s32-se"
"t!\376\003\000\000\002\376\001\000\000\017pointer-f32-ref\376\003\000\000\002\376\001\000\000\020pointer-f32-set!\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\003"
"\000\000\002\376\001\000\000\020pointer-f64-set!\376\377\016");
lf[33]=C_h_intern(&lf[33],26,"\010compilerfoldable-bindings");
lf[34]=C_h_intern(&lf[34],8,"\003sysput!");
lf[35]=C_h_intern(&lf[35],13,"\010compilerpure");
lf[36]=C_h_intern(&lf[36],4,"node");
lf[37]=C_h_intern(&lf[37],9,"\004corecall");
lf[38]=C_h_intern(&lf[38],6,"fixnum");
lf[39]=C_h_intern(&lf[39],11,"number-type");
lf[40]=C_h_intern(&lf[40],6,"unsafe");
lf[41]=C_h_intern(&lf[41],11,"\004coreinline");
lf[42]=C_h_intern(&lf[42],20,"\004coreinline_allocate");
lf[43]=C_h_intern(&lf[43],14,"\010compilerqnode");
lf[44]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016");
lf[45]=C_h_intern(&lf[45],5,"quote");
lf[46]=C_h_intern(&lf[46],13,"\004corevariable");
lf[47]=C_h_intern(&lf[47],5,"cons\052");
lf[48]=C_h_intern(&lf[48],3,"map");
lf[49]=C_h_intern(&lf[49],6,"append");
lf[50]=C_h_intern(&lf[50],7,"butlast");
lf[51]=C_h_intern(&lf[51],9,"\004coreproc");
lf[52]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\007C_apply\376\003\000\000\002\376\377\006\001\376\377\016");
lf[53]=C_h_intern(&lf[53],6,"values");
lf[54]=C_h_intern(&lf[54],10,"\003sysvalues");
lf[55]=C_h_intern(&lf[55],7,"\003sysget");
lf[56]=C_h_intern(&lf[56],18,"\010compilerintrinsic");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_apply_values\376\003\000\000\002\376\377\006\001\376\377\016");
lf[58]=C_h_intern(&lf[58],4,"last");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\006C_slot\376\377\016");
lf[60]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_i_vector_ref\376\377\016");
lf[61]=C_h_intern(&lf[61],6,"vector");
lf[62]=C_h_intern(&lf[62],12,"\010compilerget");
lf[63]=C_h_intern(&lf[63],14,"rest-parameter");
lf[64]=C_h_intern(&lf[64],30,"call-with-current-continuation");
lf[65]=C_h_intern(&lf[65],16,"\010compilerrewrite");
lf[66]=C_h_intern(&lf[66],11,"\004corelambda");
lf[67]=C_h_intern(&lf[67],3,"let");
lf[68]=C_h_intern(&lf[68],16,"\010compilervarnode");
lf[69]=C_h_intern(&lf[69],6,"gensym");
lf[70]=C_h_intern(&lf[70],2,"f_");
lf[71]=C_h_intern(&lf[71],18,"\010compilerdebugging");
lf[72]=C_h_intern(&lf[72],1,"o");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000)removing single-valued `call-with-values\047");
lf[74]=C_h_intern(&lf[74],1,"r");
lf[75]=C_h_intern(&lf[75],5,"value");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[77]=C_h_intern(&lf[77],13,"list-tabulate");
lf[78]=C_h_intern(&lf[78],14,"\004coreundefined");
lf[79]=C_h_intern(&lf[79],16,"inline-transient");
lf[80]=C_h_intern(&lf[80],8,"assigned");
lf[81]=C_h_intern(&lf[81],10,"references");
lf[82]=C_h_intern(&lf[82],30,"\010compilerdecompose-lambda-list");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[84]=C_h_intern(&lf[84],5,"xcons");
lf[85]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[86]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_a_i_cons\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[87]=C_h_intern(&lf[87],10,"alist-cons");
lf[88]=C_h_intern(&lf[88],15,"\003sysget-keyword");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_get_keyword");
lf[90]=C_h_intern(&lf[90],11,"get-keyword");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_get_keyword");
lf[92]=C_h_intern(&lf[92],18,"substring-index-ci");
lf[93]=C_h_intern(&lf[93],22,"\003syssubstring-index-ci");
lf[94]=C_h_intern(&lf[94],15,"substring-index");
lf[95]=C_h_intern(&lf[95],19,"\003syssubstring-index");
lf[96]=C_h_intern(&lf[96],14,"substring-ci=\077");
lf[97]=C_h_intern(&lf[97],18,"\003syssubstring-ci=\077");
lf[98]=C_h_intern(&lf[98],11,"substring=\077");
lf[99]=C_h_intern(&lf[99],15,"\003syssubstring=\077");
lf[100]=C_h_intern(&lf[100],11,"read-string");
lf[101]=C_h_intern(&lf[101],20,"\003sysread-string/port");
lf[102]=C_h_intern(&lf[102],18,"\003sysstandard-input");
lf[103]=C_h_intern(&lf[103],10,"write-char");
lf[104]=C_h_intern(&lf[104],19,"\003syswrite-char/port");
lf[105]=C_h_intern(&lf[105],19,"\003sysstandard-output");
lf[106]=C_h_intern(&lf[106],9,"read-char");
lf[107]=C_h_intern(&lf[107],18,"\003sysread-char/port");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_bit_setp");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_bit_setp");
lf[110]=C_h_intern(&lf[110],8,"bit-set\077");
lf[111]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\006C_anyp\376\377\016");
lf[112]=C_h_intern(&lf[112],6,"global");
lf[113]=C_h_intern(&lf[113],4,"any\077");
lf[114]=C_h_intern(&lf[114],18,"current-error-port");
lf[115]=C_h_intern(&lf[115],18,"\003sysstandard-error");
lf[116]=C_h_intern(&lf[116],19,"current-output-port");
lf[117]=C_h_intern(&lf[117],18,"current-input-port");
lf[118]=C_h_intern(&lf[118],14,"current-thread");
lf[119]=C_h_intern(&lf[119],18,"\003syscurrent-thread");
lf[120]=C_h_intern(&lf[120],8,"\003sysvoid");
lf[121]=C_h_intern(&lf[121],19,"\003sysundefined-value");
lf[122]=C_h_intern(&lf[122],4,"void");
lf[123]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003car\376\001\000\000\010set-car!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003cdr\376\001\000\000\010set-cdr!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016has"
"h-table-ref\376\001\000\000\017hash-table-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011block-ref\376\001\000\000\012block-set!\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\014locative-ref\376\001\000\000\015locative-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014u8vector-ref\376\001\000\000\015u8vector-set!"
"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014s8vector-ref\376\001\000\000\015s8vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u16vector-ref\376\001\000\000\016u1"
"6vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s16vector-ref\376\001\000\000\016s16vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015u32vec"
"tor-ref\376\001\000\000\016u32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015s32vector-ref\376\001\000\000\016s32vector-set!\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\015f32vector-ref\376\001\000\000\016f32vector-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015f64vector-ref\376\001\000\000\016f64vect"
"or-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-u8-ref\376\001\000\000\017pointer-u8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016pointer-s"
"8-ref\376\001\000\000\017pointer-s8-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u16-ref\376\001\000\000\020pointer-u16-set!\376\003\000\000"
"\002\376\003\000\000\002\376\001\000\000\017pointer-s16-ref\376\001\000\000\020pointer-s16-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-u32-ref\376\001\000"
"\000\020pointer-u32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-s32-ref\376\001\000\000\020pointer-s32-set!\376\003\000\000\002\376\003\000\000\002\376"
"\001\000\000\017pointer-f32-ref\376\001\000\000\020pointer-f32-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017pointer-f64-ref\376\001\000\000\020point"
"er-f64-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012string-ref\376\001\000\000\013string-set!\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012vector-ref\376\001\000"
"\000\013vector-set!\376\377\016");
lf[124]=C_h_intern(&lf[124],10,"\003syssetter");
lf[125]=C_h_intern(&lf[125],7,"call/cc");
lf[126]=C_h_intern(&lf[126],20,"thread-specific-set!");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_setslot");
lf[128]=C_h_intern(&lf[128],15,"thread-specific");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[130]=C_h_intern(&lf[130],15,"\003sysmake-vector");
lf[131]=C_h_intern(&lf[131],11,"make-vector");
lf[132]=C_h_intern(&lf[132],22,"f64vector->blob/shared");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[134]=C_h_intern(&lf[134],22,"f32vector->blob/shared");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[136]=C_h_intern(&lf[136],22,"s32vector->blob/shared");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[138]=C_h_intern(&lf[138],22,"u32vector->blob/shared");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[140]=C_h_intern(&lf[140],22,"s16vector->blob/shared");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[142]=C_h_intern(&lf[142],22,"u16vector->blob/shared");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[144]=C_h_intern(&lf[144],21,"s8vector->blob/shared");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[146]=C_h_intern(&lf[146],21,"u8vector->blob/shared");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[148]=C_h_intern(&lf[148],10,"null-list\077");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_null_list_p");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[151]=C_h_intern(&lf[151],5,"atom\077");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_not_pair_p");
lf[153]=C_h_intern(&lf[153],9,"not-pair\077");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_not_pair_p");
lf[155]=C_h_intern(&lf[155],16,"f64vector-length");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_64vector_length");
lf[157]=C_h_intern(&lf[157],16,"f32vector-length");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[159]=C_h_intern(&lf[159],16,"s32vector-length");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[161]=C_h_intern(&lf[161],16,"u32vector-length");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_32vector_length");
lf[163]=C_h_intern(&lf[163],16,"s16vector-length");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_16vector_length");
lf[165]=C_h_intern(&lf[165],16,"u16vector-length");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_16vector_length");
lf[167]=C_h_intern(&lf[167],15,"s8vector-length");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_8vector_length");
lf[169]=C_h_intern(&lf[169],15,"u8vector-length");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_8vector_length");
lf[171]=C_h_intern(&lf[171],14,"f64vector-set!");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_f64vector_set");
lf[173]=C_h_intern(&lf[173],14,"f32vector-set!");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_f32vector_set");
lf[175]=C_h_intern(&lf[175],14,"s32vector-set!");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s32vector_set");
lf[177]=C_h_intern(&lf[177],14,"u32vector-set!");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u32vector_set");
lf[179]=C_h_intern(&lf[179],14,"s16vector-set!");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s16vector_set");
lf[181]=C_h_intern(&lf[181],14,"u16vector-set!");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u16vector_set");
lf[183]=C_h_intern(&lf[183],13,"s8vector-set!");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_s8vector_set");
lf[185]=C_h_intern(&lf[185],13,"u8vector-set!");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_u8vector_set");
lf[187]=C_h_intern(&lf[187],13,"s32vector-ref");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_s32vector_ref");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s32vector_ref");
lf[190]=C_h_intern(&lf[190],13,"u32vector-ref");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_u32vector_ref");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u32vector_ref");
lf[193]=C_h_intern(&lf[193],13,"f64vector-ref");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_f64vector_ref");
lf[195]=C_h_intern(&lf[195],13,"f32vector-ref");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_u_i_f32vector_ref");
lf[197]=C_h_intern(&lf[197],13,"s16vector-ref");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_s16vector_ref");
lf[199]=C_h_intern(&lf[199],13,"u16vector-ref");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_u16vector_ref");
lf[201]=C_h_intern(&lf[201],12,"s8vector-ref");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_s8vector_ref");
lf[203]=C_h_intern(&lf[203],12,"u8vector-ref");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\022C_u_i_u8vector_ref");
lf[205]=C_h_intern(&lf[205],9,"blob-size");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[207]=C_h_intern(&lf[207],17,"\003sysdirect-return");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\017C_direct_return");
lf[209]=C_h_intern(&lf[209],37,"\003sysforeign-unsigned-integer-argument");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000&C_i_foreign_unsigned_integer_argumentp");
lf[211]=C_h_intern(&lf[211],28,"\003sysforeign-integer-argument");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\035C_i_foreign_integer_argumentp");
lf[213]=C_h_intern(&lf[213],28,"\003sysforeign-pointer-argument");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\035C_i_foreign_pointer_argumentp");
lf[215]=C_h_intern(&lf[215],27,"\003sysforeign-string-argument");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_string_argumentp");
lf[217]=C_h_intern(&lf[217],35,"\003sysforeign-struct-wrapper-argument");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000$C_i_foreign_struct_wrapper_argumentp");
lf[219]=C_h_intern(&lf[219],26,"\003sysforeign-block-argument");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\033C_i_foreign_block_argumentp");
lf[221]=C_h_intern(&lf[221],27,"\003sysforeign-flonum-argument");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_flonum_argumentp");
lf[223]=C_h_intern(&lf[223],25,"\003sysforeign-char-argument");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\032C_i_foreign_char_argumentp");
lf[225]=C_h_intern(&lf[225],27,"\003sysforeign-fixnum-argument");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\034C_i_foreign_fixnum_argumentp");
lf[227]=C_h_intern(&lf[227],13,"locative-set!");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_locative_set");
lf[229]=C_h_intern(&lf[229],16,"locative->object");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\026C_i_locative_to_object");
lf[231]=C_h_intern(&lf[231],14,"\003sysimmediate\077");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\006C_immp");
lf[233]=C_h_intern(&lf[233],13,"null-pointer\077");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_null_pointerp");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\017C_null_pointerp");
lf[236]=C_h_intern(&lf[236],17,"\003sysnull-pointer\077");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\017C_null_pointerp");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\017C_null_pointerp");
lf[239]=C_h_intern(&lf[239],14,"\003syspermanent\077");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\014C_permanentp");
lf[241]=C_h_intern(&lf[241],27,"\003sysflonum-in-fixnum-range\077");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\032C_flonum_in_fixnum_range_p");
lf[243]=C_h_intern(&lf[243],25,"\003sysfits-in-unsigned-int\077");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fits_in_unsigned_int_p");
lf[245]=C_h_intern(&lf[245],16,"\003sysfits-in-int\077");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fits_in_int_p");
lf[247]=C_h_intern(&lf[247],9,"\003sysfudge");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\007C_fudge");
lf[249]=C_h_intern(&lf[249],11,"string-ci=\077");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_string_ci_equal_p");
lf[251]=C_h_intern(&lf[251],8,"string=\077");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_string_equal_p");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_string_equal_p");
lf[254]=C_h_intern(&lf[254],18,"\003sysdouble->number");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\022C_double_to_number");
lf[256]=C_h_intern(&lf[256],15,"\003syspoke-double");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\015C_poke_double");
lf[258]=C_h_intern(&lf[258],16,"\003syspoke-integer");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\016C_poke_integer");
lf[260]=C_h_intern(&lf[260],12,"\003syssetislot");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_set_i_slot");
lf[262]=C_h_intern(&lf[262],15,"pointer->object");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\023C_pointer_to_object");
lf[264]=C_h_intern(&lf[264],13,"\003syspeek-byte");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000\013C_peek_byte");
lf[266]=C_h_intern(&lf[266],15,"\003syspeek-fixnum");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\015C_peek_fixnum");
lf[268]=C_h_intern(&lf[268],11,"\003syssetbyte");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\011C_setbyte");
lf[270]=C_h_intern(&lf[270],8,"\003sysbyte");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\011C_subbyte");
lf[272]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\033C_i_fixnum_arithmetic_shift\376\377\016");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\026C_a_i_arithmetic_shift");
lf[274]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[275]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016");
lf[276]=C_h_intern(&lf[276],20,"\010compilerbig-fixnum\077");
lf[277]=C_h_intern(&lf[277],16,"arithmetic-shift");
lf[278]=C_h_intern(&lf[278],5,"fxmod");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_modulo");
lf[281]=C_h_intern(&lf[281],3,"fx/");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_divide");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_divide");
lf[284]=C_h_intern(&lf[284],5,"fxior");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\013C_fixnum_or");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_fixnum_or");
lf[287]=C_h_intern(&lf[287],5,"fxand");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_and");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_fixnum_and");
lf[290]=C_h_intern(&lf[290],5,"fxxor");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[293]=C_h_intern(&lf[293],5,"fxneg");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_negate");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_fixnum_negate");
lf[296]=C_h_intern(&lf[296],5,"fxshr");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\024C_fixnum_shift_right");
lf[298]=C_h_intern(&lf[298],5,"fxshl");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fixnum_shift_left");
lf[300]=C_h_intern(&lf[300],3,"fx-");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fixnum_difference");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_fixnum_difference");
lf[303]=C_h_intern(&lf[303],3,"fx+");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fixnum_plus");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_fixnum_plus");
lf[306]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_i_set_i_slot\376\377\016");
lf[307]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\013C_i_setslot\376\377\016");
lf[308]=C_h_intern(&lf[308],19,"\010compilerimmediate\077");
lf[309]=C_h_intern(&lf[309],11,"\003syssetslot");
lf[310]=C_h_intern(&lf[310],15,"pointer-f64-ref");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_f64_ref");
lf[312]=C_h_intern(&lf[312],15,"pointer-f32-ref");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_f32_ref");
lf[314]=C_h_intern(&lf[314],15,"pointer-s32-ref");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_s32_ref");
lf[316]=C_h_intern(&lf[316],15,"pointer-u32-ref");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_u_i_pointer_u32_ref");
lf[318]=C_h_intern(&lf[318],16,"pointer-f64-set!");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_f64_set");
lf[320]=C_h_intern(&lf[320],16,"pointer-f32-set!");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_f32_set");
lf[322]=C_h_intern(&lf[322],16,"pointer-s32-set!");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s32_set");
lf[324]=C_h_intern(&lf[324],16,"pointer-u32-set!");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u32_set");
lf[326]=C_h_intern(&lf[326],16,"pointer-s16-set!");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s16_set");
lf[328]=C_h_intern(&lf[328],16,"pointer-u16-set!");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u16_set");
lf[330]=C_h_intern(&lf[330],15,"pointer-s8-set!");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_s8_set");
lf[332]=C_h_intern(&lf[332],15,"pointer-u8-set!");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_u8_set");
lf[334]=C_h_intern(&lf[334],15,"pointer-s16-ref");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_s16_ref");
lf[336]=C_h_intern(&lf[336],15,"pointer-u16-ref");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\025C_u_i_pointer_u16_ref");
lf[338]=C_h_intern(&lf[338],14,"pointer-s8-ref");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_s8_ref");
lf[340]=C_h_intern(&lf[340],14,"pointer-u8-ref");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_i_pointer_u8_ref");
lf[342]=C_h_intern(&lf[342],8,"pointer+");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_u_i_pointer_inc");
lf[344]=C_h_intern(&lf[344],16,"pointer->address");
lf[345]=C_decode_literal(C_heaptop,"\376B\000\000\030C_a_i_pointer_to_address");
lf[346]=C_h_intern(&lf[346],16,"address->pointer");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\030C_a_i_address_to_pointer");
lf[348]=C_h_intern(&lf[348],6,"string");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_string");
lf[350]=C_h_intern(&lf[350],18,"\003sysmake-structure");
lf[351]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_record");
lf[352]=C_h_intern(&lf[352],10,"\003sysvector");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_vector");
lf[355]=C_h_intern(&lf[355],8,"\003syslist");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[357]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[358]=C_h_intern(&lf[358],4,"list");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[360]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016");
lf[361]=C_h_intern(&lf[361],8,"\003syscons");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_cons");
lf[363]=C_h_intern(&lf[363],4,"cons");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_cons");
lf[365]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\026C_a_i_string_to_number\376\003\000\000\002\376\377\001\000\000\000\004\376\377\016");
lf[366]=C_h_intern(&lf[366],14,"string->number");
lf[367]=C_h_intern(&lf[367],7,"fpround");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_floor");
lf[369]=C_h_intern(&lf[369],9,"fpceiling");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\024C_a_i_flonum_ceiling");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_round");
lf[372]=C_h_intern(&lf[372],10,"fptruncate");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_i_flonum_truncate");
lf[374]=C_h_intern(&lf[374],5,"fpabs");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_abs");
lf[376]=C_h_intern(&lf[376],6,"fpsqrt");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_sqrt");
lf[378]=C_h_intern(&lf[378],5,"fplog");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_log");
lf[380]=C_h_intern(&lf[380],6,"fpexpt");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_expt");
lf[382]=C_h_intern(&lf[382],5,"fpexp");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_exp");
lf[384]=C_h_intern(&lf[384],7,"fpatan2");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_atan2");
lf[386]=C_h_intern(&lf[386],6,"fpatan");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_atan");
lf[388]=C_h_intern(&lf[388],6,"fpacos");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_acos");
lf[390]=C_h_intern(&lf[390],6,"fpasin");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_asin");
lf[392]=C_h_intern(&lf[392],5,"fptan");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_tan");
lf[394]=C_h_intern(&lf[394],5,"fpcos");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_cos");
lf[396]=C_h_intern(&lf[396],5,"fpsin");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\020C_a_i_flonum_sin");
lf[398]=C_h_intern(&lf[398],8,"truncate");
lf[399]=C_h_intern(&lf[399],6,"flonum");
lf[400]=C_h_intern(&lf[400],7,"ceiling");
lf[401]=C_h_intern(&lf[401],5,"floor");
lf[402]=C_h_intern(&lf[402],7,"fpfloor");
lf[403]=C_h_intern(&lf[403],7,"fxeven\077");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[405]=C_h_intern(&lf[405],6,"fxodd\077");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[407]=C_h_intern(&lf[407],4,"odd\077");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_oddp");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_oddp");
lf[410]=C_h_intern(&lf[410],5,"even\077");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_evenp");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_evenp");
lf[413]=C_h_intern(&lf[413],9,"remainder");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\017C_fixnum_modulo");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnumoddp");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_fixnumevenp");
lf[420]=C_h_intern(&lf[420],15,"\003sysmake-symbol");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\015C_make_symbol");
lf[422]=C_h_intern(&lf[422],17,"\003sysintern-symbol");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\022C_string_to_symbol");
lf[424]=C_h_intern(&lf[424],18,"\003syscontext-switch");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\020C_context_switch");
lf[426]=C_h_intern(&lf[426],14,"return-to-host");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\020C_return_to_host");
lf[428]=C_h_intern(&lf[428],23,"\003sysensure-heap-reserve");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\025C_ensure_heap_reserve");
lf[430]=C_h_intern(&lf[430],19,"\003sysallocate-vector");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\021C_allocate_vector");
lf[432]=C_h_intern(&lf[432],34,"\003syscall-with-current-continuation");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\011C_call_cc");
lf[434]=C_h_intern(&lf[434],14,"number->string");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\022C_number_to_string");
lf[436]=C_h_intern(&lf[436],2,"<=");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\021C_less_or_equal_p");
lf[438]=C_h_intern(&lf[438],2,">=");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\024C_greater_or_equal_p");
lf[440]=C_h_intern(&lf[440],1,"<");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\007C_lessp");
lf[442]=C_h_intern(&lf[442],1,">");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\012C_greaterp");
lf[444]=C_h_intern(&lf[444],1,"=");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\011C_nequalp");
lf[446]=C_h_intern(&lf[446],1,"/");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\010C_divide");
lf[448]=C_h_intern(&lf[448],1,"+");
lf[449]=C_decode_literal(C_heaptop,"\376B\000\000\006C_plus");
lf[450]=C_h_intern(&lf[450],1,"-");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\007C_minus");
lf[452]=C_h_intern(&lf[452],1,"\052");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\007C_times");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_less_or_equalp");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_greater_or_equalp");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_lessp");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_greaterp");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_nequalp");
lf[459]=C_h_intern(&lf[459],14,"exact->inexact");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\026C_a_i_exact_to_inexact");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_divide");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_minus");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_plus");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_times");
lf[465]=C_h_intern(&lf[465],4,"argv");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\012C_get_argv");
lf[467]=C_h_intern(&lf[467],3,"lcm");
lf[468]=C_h_intern(&lf[468],3,"gcd");
lf[469]=C_h_intern(&lf[469],8,"identity");
lf[470]=C_h_intern(&lf[470],7,"\003syslcm");
lf[471]=C_h_intern(&lf[471],7,"\003sysgcd");
lf[472]=C_h_intern(&lf[472],11,"vector-set!");
lf[473]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_vector_set");
lf[474]=C_h_intern(&lf[474],12,"list->string");
lf[475]=C_h_intern(&lf[475],16,"\003syslist->string");
lf[476]=C_h_intern(&lf[476],12,"string->list");
lf[477]=C_h_intern(&lf[477],16,"\003sysstring->list");
lf[478]=C_h_intern(&lf[478],13,"string-append");
lf[479]=C_h_intern(&lf[479],17,"\003sysstring-append");
lf[480]=C_h_intern(&lf[480],9,"substring");
lf[481]=C_h_intern(&lf[481],13,"\003syssubstring");
lf[482]=C_h_intern(&lf[482],20,"make-record-instance");
lf[483]=C_h_intern(&lf[483],14,"\003sysblock-set!");
lf[484]=C_h_intern(&lf[484],10,"block-set!");
lf[485]=C_h_intern(&lf[485],7,"\003sysmap");
lf[486]=C_h_intern(&lf[486],8,"for-each");
lf[487]=C_h_intern(&lf[487],12,"\003sysfor-each");
lf[488]=C_h_intern(&lf[488],6,"setter");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fixnum_less_or_equal_p");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000\030C_flonum_less_or_equal_p");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000\033C_fixnum_greater_or_equal_p");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\033C_flonum_greater_or_equal_p");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[494]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[495]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[496]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[497]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[498]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_equalp");
lf[499]=C_h_intern(&lf[499],14,"\003syscheck-char");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_char_2");
lf[501]=C_h_intern(&lf[501],19,"\003syscheck-structure");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_check_structure_2");
lf[503]=C_h_intern(&lf[503],16,"\003syscheck-vector");
lf[504]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_vector_2");
lf[505]=C_h_intern(&lf[505],21,"\003syscheck-byte-vector");
lf[506]=C_decode_literal(C_heaptop,"\376B\000\000\026C_i_check_bytevector_2");
lf[507]=C_h_intern(&lf[507],16,"\003syscheck-string");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_string_2");
lf[509]=C_h_intern(&lf[509],16,"\003syscheck-symbol");
lf[510]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_symbol_2");
lf[511]=C_h_intern(&lf[511],18,"\003syscheck-locative");
lf[512]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_check_locative_2");
lf[513]=C_h_intern(&lf[513],17,"\003syscheck-boolean");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000\023C_i_check_boolean_2");
lf[515]=C_h_intern(&lf[515],14,"\003syscheck-pair");
lf[516]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_pair_2");
lf[517]=C_h_intern(&lf[517],14,"\003syscheck-list");
lf[518]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_list_2");
lf[519]=C_h_intern(&lf[519],16,"\003syscheck-number");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_number_2");
lf[521]=C_h_intern(&lf[521],15,"\003syscheck-exact");
lf[522]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_check_exact_2");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_char");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000\023C_i_check_structure");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_vector");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_check_bytevector");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_string");
lf[528]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_symbol");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_check_locative");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_check_boolean");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_pair");
lf[532]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_check_list");
lf[533]=C_decode_literal(C_heaptop,"\376B\000\000\020C_i_check_number");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_check_exact");
lf[535]=C_h_intern(&lf[535],14,"inexact->exact");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\024C_i_inexact_to_exact");
lf[537]=C_h_intern(&lf[537],13,"string-length");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_string_length");
lf[539]=C_h_intern(&lf[539],17,"\003sysvector-length");
lf[540]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_vector_length");
lf[541]=C_h_intern(&lf[541],13,"vector-length");
lf[542]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_vector_length");
lf[543]=C_h_intern(&lf[543],13,"integer->char");
lf[544]=C_decode_literal(C_heaptop,"\376B\000\000\020C_make_character");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\007C_unfix");
lf[546]=C_h_intern(&lf[546],13,"char->integer");
lf[547]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\020C_character_code");
lf[549]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\015C_header_size");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[552]=C_decode_literal(C_heaptop,"\376B\000\000\015C_header_size");
lf[553]=C_h_intern(&lf[553],9,"negative\077");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_i_negativep");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_negativep");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[558]=C_h_intern(&lf[558],9,"positive\077");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_i_positivep");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_positivep");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[562]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[563]=C_h_intern(&lf[563],5,"zero\077");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_zerop");
lf[565]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_zerop");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[567]=C_h_intern(&lf[567],4,"atan");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_atan2");
lf[569]=C_h_intern(&lf[569],4,"sqrt");
lf[570]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_sqrt");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_atan");
lf[572]=C_h_intern(&lf[572],4,"acos");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_acos");
lf[574]=C_h_intern(&lf[574],4,"asin");
lf[575]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_asin");
lf[576]=C_h_intern(&lf[576],3,"log");
lf[577]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_log");
lf[578]=C_h_intern(&lf[578],3,"tan");
lf[579]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_tan");
lf[580]=C_h_intern(&lf[580],3,"cos");
lf[581]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_cos");
lf[582]=C_h_intern(&lf[582],3,"sin");
lf[583]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_sin");
lf[584]=C_h_intern(&lf[584],3,"exp");
lf[585]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_exp");
lf[586]=C_h_intern(&lf[586],5,"fpneg");
lf[587]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_i_flonum_negate");
lf[588]=C_h_intern(&lf[588],4,"fp/\077");
lf[589]=C_decode_literal(C_heaptop,"\376B\000\000\035C_a_i_flonum_quotient_checked");
lf[590]=C_h_intern(&lf[590],3,"fp/");
lf[591]=C_decode_literal(C_heaptop,"\376B\000\000\025C_a_i_flonum_quotient");
lf[592]=C_h_intern(&lf[592],3,"fp\052");
lf[593]=C_decode_literal(C_heaptop,"\376B\000\000\022C_a_i_flonum_times");
lf[594]=C_h_intern(&lf[594],3,"fp-");
lf[595]=C_decode_literal(C_heaptop,"\376B\000\000\027C_a_i_flonum_difference");
lf[596]=C_h_intern(&lf[596],3,"fp+");
lf[597]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_flonum_plus");
lf[598]=C_h_intern(&lf[598],11,"bitwise-not");
lf[599]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_not");
lf[600]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_not");
lf[601]=C_h_intern(&lf[601],11,"bitwise-ior");
lf[602]=C_decode_literal(C_heaptop,"\376B\000\000\013C_fixnum_or");
lf[603]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_fixnum_or");
lf[604]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_ior");
lf[605]=C_h_intern(&lf[605],11,"bitwise-and");
lf[606]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_and");
lf[607]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_fixnum_and");
lf[608]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_and");
lf[609]=C_h_intern(&lf[609],11,"bitwise-xor");
lf[610]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[611]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_xor");
lf[612]=C_decode_literal(C_heaptop,"\376B\000\000\021C_a_i_bitwise_xor");
lf[613]=C_h_intern(&lf[613],3,"abs");
lf[614]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i_abs");
lf[615]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_abs");
lf[616]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_abs");
lf[617]=C_h_intern(&lf[617],8,"set-cdr!");
lf[618]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_set_cdr");
lf[619]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_i_set_cdr");
lf[620]=C_h_intern(&lf[620],8,"set-car!");
lf[621]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_set_car");
lf[622]=C_decode_literal(C_heaptop,"\376B\000\000\015C_u_i_set_car");
lf[623]=C_h_intern(&lf[623],6,"member");
lf[624]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_member");
lf[625]=C_h_intern(&lf[625],5,"assoc");
lf[626]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_assoc");
lf[627]=C_h_intern(&lf[627],4,"memq");
lf[628]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memq");
lf[629]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_memq");
lf[630]=C_h_intern(&lf[630],4,"assq");
lf[631]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assq");
lf[632]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_assq");
lf[633]=C_h_intern(&lf[633],4,"memv");
lf[634]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memv");
lf[635]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_memq");
lf[636]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_memq");
lf[637]=C_h_intern(&lf[637],4,"assv");
lf[638]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assv");
lf[639]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_assq");
lf[640]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_assq");
lf[641]=C_h_intern(&lf[641],15,"number-of-slots");
lf[642]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[643]=C_h_intern(&lf[643],9,"block-ref");
lf[644]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[645]=C_h_intern(&lf[645],15,"\003sysbytevector\077");
lf[646]=C_decode_literal(C_heaptop,"\376B\000\000\015C_bytevectorp");
lf[647]=C_h_intern(&lf[647],14,"\003sysstructure\077");
lf[648]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_structurep");
lf[649]=C_h_intern(&lf[649],9,"list-tail");
lf[650]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_list_tail");
lf[651]=C_h_intern(&lf[651],13,"char-downcase");
lf[652]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_char_downcase");
lf[653]=C_h_intern(&lf[653],11,"char-upcase");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\021C_u_i_char_upcase");
lf[655]=C_h_intern(&lf[655],16,"char-lower-case\077");
lf[656]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_lower_casep");
lf[657]=C_h_intern(&lf[657],16,"char-upper-case\077");
lf[658]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_upper_casep");
lf[659]=C_h_intern(&lf[659],16,"char-whitespace\077");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_whitespacep");
lf[661]=C_h_intern(&lf[661],16,"char-alphabetic\077");
lf[662]=C_decode_literal(C_heaptop,"\376B\000\000\026C_u_i_char_alphabeticp");
lf[663]=C_h_intern(&lf[663],13,"char-numeric\077");
lf[664]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_i_char_numericp");
lf[665]=C_h_intern(&lf[665],5,"fpmin");
lf[666]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_flonum_min");
lf[667]=C_h_intern(&lf[667],5,"fpmax");
lf[668]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_flonum_max");
lf[669]=C_h_intern(&lf[669],5,"fxmin");
lf[670]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnum_min");
lf[671]=C_h_intern(&lf[671],5,"fxmax");
lf[672]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_fixnum_max");
lf[673]=C_h_intern(&lf[673],4,"fp<=");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\030C_flonum_less_or_equal_p");
lf[675]=C_h_intern(&lf[675],4,"fp>=");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\033C_flonum_greater_or_equal_p");
lf[677]=C_h_intern(&lf[677],3,"fp<");
lf[678]=C_decode_literal(C_heaptop,"\376B\000\000\016C_flonum_lessp");
lf[679]=C_h_intern(&lf[679],3,"fp>");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\021C_flonum_greaterp");
lf[681]=C_h_intern(&lf[681],3,"fp=");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\017C_flonum_equalp");
lf[683]=C_h_intern(&lf[683],4,"fx<=");
lf[684]=C_decode_literal(C_heaptop,"\376B\000\000\030C_fixnum_less_or_equal_p");
lf[685]=C_h_intern(&lf[685],4,"fx>=");
lf[686]=C_decode_literal(C_heaptop,"\376B\000\000\033C_fixnum_greater_or_equal_p");
lf[687]=C_h_intern(&lf[687],3,"fx<");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_lessp");
lf[689]=C_h_intern(&lf[689],3,"fx>");
lf[690]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_greaterp");
lf[691]=C_h_intern(&lf[691],3,"fx=");
lf[692]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[693]=C_h_intern(&lf[693],4,"fx/\077");
lf[694]=C_decode_literal(C_heaptop,"\376B\000\000\025C_i_o_fixnum_quotient");
lf[695]=C_h_intern(&lf[695],4,"fx\052\077");
lf[696]=C_decode_literal(C_heaptop,"\376B\000\000\022C_i_o_fixnum_times");
lf[697]=C_h_intern(&lf[697],4,"fx-\077");
lf[698]=C_decode_literal(C_heaptop,"\376B\000\000\027C_i_o_fixnum_difference");
lf[699]=C_h_intern(&lf[699],4,"fx+\077");
lf[700]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_o_fixnum_plus");
lf[701]=C_h_intern(&lf[701],3,"fx\052");
lf[702]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fixnum_times");
lf[703]=C_h_intern(&lf[703],5,"fxnot");
lf[704]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fixnum_not");
lf[705]=C_h_intern(&lf[705],8,"\003syssize");
lf[706]=C_decode_literal(C_heaptop,"\376B\000\000\014C_block_size");
lf[707]=C_h_intern(&lf[707],13,"\003sysblock-ref");
lf[708]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_block_ref");
lf[709]=C_h_intern(&lf[709],8,"\003sysslot");
lf[710]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[711]=C_h_intern(&lf[711],7,"char<=\077");
lf[712]=C_decode_literal(C_heaptop,"\376B\000\000\030C_i_char_less_or_equal_p");
lf[713]=C_h_intern(&lf[713],7,"char>=\077");
lf[714]=C_decode_literal(C_heaptop,"\376B\000\000\033C_i_char_greater_or_equal_p");
lf[715]=C_h_intern(&lf[715],6,"char<\077");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_char_lessp");
lf[717]=C_h_intern(&lf[717],6,"char>\077");
lf[718]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_char_greaterp");
lf[719]=C_h_intern(&lf[719],6,"char=\077");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\017C_i_char_equalp");
lf[721]=C_h_intern(&lf[721],10,"vector-ref");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_vector_ref");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[724]=C_h_intern(&lf[724],11,"string-set!");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_string_set");
lf[726]=C_decode_literal(C_heaptop,"\376B\000\000\014C_setsubchar");
lf[727]=C_h_intern(&lf[727],10,"string-ref");
lf[728]=C_decode_literal(C_heaptop,"\376B\000\000\016C_i_string_ref");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\011C_subchar");
lf[730]=C_h_intern(&lf[730],11,"eof-object\077");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\006C_eofp");
lf[732]=C_h_intern(&lf[732],12,"proper-list\077");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_listp");
lf[734]=C_h_intern(&lf[734],5,"list\077");
lf[735]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_listp");
lf[736]=C_h_intern(&lf[736],8,"inexact\077");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_inexactp");
lf[738]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_inexactp");
lf[739]=C_decode_literal(C_heaptop,"\376B\000\000\012C_nfixnump");
lf[740]=C_h_intern(&lf[740],6,"exact\077");
lf[741]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_exactp");
lf[742]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_exactp");
lf[743]=C_decode_literal(C_heaptop,"\376B\000\000\011C_fixnump");
lf[744]=C_h_intern(&lf[744],22,"\003sysgeneric-structure\077");
lf[745]=C_decode_literal(C_heaptop,"\376B\000\000\014C_structurep");
lf[746]=C_h_intern(&lf[746],8,"pointer\077");
lf[747]=C_decode_literal(C_heaptop,"\376B\000\000\021C_i_safe_pointerp");
lf[748]=C_h_intern(&lf[748],12,"\003syspointer\077");
lf[749]=C_decode_literal(C_heaptop,"\376B\000\000\015C_anypointerp");
lf[750]=C_h_intern(&lf[750],10,"fpinteger\077");
lf[751]=C_decode_literal(C_heaptop,"\376B\000\000\020C_u_i_fpintegerp");
lf[752]=C_h_intern(&lf[752],7,"finite\077");
lf[753]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_finitep");
lf[754]=C_h_intern(&lf[754],7,"fixnum\077");
lf[755]=C_decode_literal(C_heaptop,"\376B\000\000\011C_fixnump");
lf[756]=C_h_intern(&lf[756],7,"flonum\077");
lf[757]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_flonump");
lf[758]=C_h_intern(&lf[758],8,"integer\077");
lf[759]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_integerp");
lf[760]=C_h_intern(&lf[760],5,"real\077");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[762]=C_h_intern(&lf[762],9,"rational\077");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_rationalp");
lf[764]=C_h_intern(&lf[764],8,"complex\077");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[766]=C_h_intern(&lf[766],7,"number\077");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_numberp");
lf[768]=C_h_intern(&lf[768],8,"boolean\077");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\012C_booleanp");
lf[770]=C_h_intern(&lf[770],5,"port\077");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_portp");
lf[772]=C_h_intern(&lf[772],10,"procedure\077");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_closurep");
lf[774]=C_h_intern(&lf[774],9,"\003syspair\077");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_pairp");
lf[776]=C_h_intern(&lf[776],5,"pair\077");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_pairp");
lf[778]=C_h_intern(&lf[778],11,"\003sysvector\077");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_vectorp");
lf[780]=C_h_intern(&lf[780],7,"vector\077");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_vectorp");
lf[782]=C_h_intern(&lf[782],7,"symbol\077");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_symbolp");
lf[784]=C_h_intern(&lf[784],9,"locative\077");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\015C_i_locativep");
lf[786]=C_h_intern(&lf[786],7,"string\077");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\013C_i_stringp");
lf[788]=C_h_intern(&lf[788],5,"char\077");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\007C_charp");
lf[790]=C_h_intern(&lf[790],3,"not");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_not");
lf[792]=C_h_intern(&lf[792],6,"length");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_length");
lf[794]=C_h_intern(&lf[794],9,"\003sysnull\077");
lf[795]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[796]=C_h_intern(&lf[796],5,"null\077");
lf[797]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_nullp");
lf[798]=C_h_intern(&lf[798],8,"list-ref");
lf[799]=C_decode_literal(C_heaptop,"\376B\000\000\014C_i_list_ref");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\016C_u_i_list_ref");
lf[801]=C_h_intern(&lf[801],8,"\003syseqv\077");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_eqvp");
lf[803]=C_h_intern(&lf[803],4,"eqv\077");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_eqvp");
lf[805]=C_h_intern(&lf[805],7,"\003syseq\077");
lf[806]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[807]=C_h_intern(&lf[807],3,"eq\077");
lf[808]=C_decode_literal(C_heaptop,"\376B\000\000\005C_eqp");
lf[809]=C_h_intern(&lf[809],3,"cdr");
lf[810]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_cdr");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\006C_slot");
lf[812]=C_h_intern(&lf[812],6,"cddddr");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cddddr");
lf[814]=C_h_intern(&lf[814],5,"cdddr");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_cdddr");
lf[816]=C_h_intern(&lf[816],4,"cddr");
lf[817]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cddr");
lf[818]=C_h_intern(&lf[818],4,"cdar");
lf[819]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cdar");
lf[820]=C_h_intern(&lf[820],4,"caar");
lf[821]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_caar");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddddr");
lf[823]=C_h_intern(&lf[823],6,"cdddar");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdddar");
lf[825]=C_h_intern(&lf[825],6,"cddadr");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddadr");
lf[827]=C_h_intern(&lf[827],6,"cddaar");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cddaar");
lf[829]=C_h_intern(&lf[829],6,"cdaddr");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaddr");
lf[831]=C_h_intern(&lf[831],6,"cdadar");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdadar");
lf[833]=C_h_intern(&lf[833],6,"cdaadr");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaadr");
lf[835]=C_h_intern(&lf[835],6,"cdaaar");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cdaaar");
lf[837]=C_h_intern(&lf[837],6,"cadddr");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[839]=C_h_intern(&lf[839],6,"caddar");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caddar");
lf[841]=C_h_intern(&lf[841],6,"cadadr");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadadr");
lf[843]=C_h_intern(&lf[843],6,"cadaar");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadaar");
lf[845]=C_h_intern(&lf[845],6,"caaddr");
lf[846]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caaddr");
lf[847]=C_h_intern(&lf[847],6,"caadar");
lf[848]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caadar");
lf[849]=C_h_intern(&lf[849],6,"caaaar");
lf[850]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_caaaar");
lf[851]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdddr");
lf[852]=C_h_intern(&lf[852],5,"cddar");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cddar");
lf[854]=C_h_intern(&lf[854],5,"cdadr");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdadr");
lf[856]=C_h_intern(&lf[856],5,"cdaar");
lf[857]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cdaar");
lf[858]=C_h_intern(&lf[858],5,"caddr");
lf[859]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[860]=C_h_intern(&lf[860],5,"cadar");
lf[861]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_cadar");
lf[862]=C_h_intern(&lf[862],5,"caaar");
lf[863]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caaar");
lf[864]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cddr");
lf[865]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cdar");
lf[866]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_caar");
lf[867]=C_h_intern(&lf[867],22,"\003syscontinuation-graft");
lf[868]=C_decode_literal(C_heaptop,"\376B\000\000\024C_continuation_graft");
lf[869]=C_h_intern(&lf[869],12,"locative-ref");
lf[870]=C_decode_literal(C_heaptop,"\376B\000\000\016C_locative_ref");
lf[871]=C_h_intern(&lf[871],20,"\003syscall-with-values");
lf[872]=C_decode_literal(C_heaptop,"\376B\000\000\022C_call_with_values");
lf[873]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_call_with_values");
lf[874]=C_h_intern(&lf[874],16,"call-with-values");
lf[875]=C_decode_literal(C_heaptop,"\376B\000\000\022C_call_with_values");
lf[876]=C_decode_literal(C_heaptop,"\376B\000\000\024C_u_call_with_values");
lf[877]=C_decode_literal(C_heaptop,"\376B\000\000\010C_values");
lf[878]=C_decode_literal(C_heaptop,"\376B\000\000\010C_values");
lf[879]=C_h_intern(&lf[879],6,"fourth");
lf[880]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cadddr");
lf[881]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[882]=C_h_intern(&lf[882],5,"third");
lf[883]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_caddr");
lf[884]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[885]=C_h_intern(&lf[885],6,"second");
lf[886]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cadr");
lf[887]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cadr");
lf[888]=C_h_intern(&lf[888],5,"first");
lf[889]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[890]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[891]=C_decode_literal(C_heaptop,"\376B\000\000\012C_i_cadddr");
lf[892]=C_decode_literal(C_heaptop,"\376B\000\000\014C_u_i_cadddr");
lf[893]=C_decode_literal(C_heaptop,"\376B\000\000\011C_i_caddr");
lf[894]=C_decode_literal(C_heaptop,"\376B\000\000\013C_u_i_caddr");
lf[895]=C_h_intern(&lf[895],4,"cadr");
lf[896]=C_decode_literal(C_heaptop,"\376B\000\000\010C_i_cadr");
lf[897]=C_decode_literal(C_heaptop,"\376B\000\000\012C_u_i_cadr");
lf[898]=C_h_intern(&lf[898],7,"\003syscdr");
lf[899]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_cdr");
lf[900]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_cdr");
lf[901]=C_h_intern(&lf[901],7,"\003syscar");
lf[902]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[903]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[904]=C_h_intern(&lf[904],3,"car");
lf[905]=C_decode_literal(C_heaptop,"\376B\000\000\007C_i_car");
lf[906]=C_decode_literal(C_heaptop,"\376B\000\000\011C_u_i_car");
lf[907]=C_h_intern(&lf[907],9,"\003sysapply");
lf[908]=C_h_intern(&lf[908],5,"apply");
lf[909]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_i_equalp\376\377\016");
lf[910]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_eqp\376\377\016");
lf[911]=C_h_intern(&lf[911],6,"equal\077");
lf[912]=C_h_intern(&lf[912],4,"sub1");
lf[913]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_decrease");
lf[914]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_fixnum_decrease");
lf[915]=C_decode_literal(C_heaptop,"\376B\000\000\013C_a_i_minus");
lf[916]=C_h_intern(&lf[916],4,"add1");
lf[917]=C_decode_literal(C_heaptop,"\376B\000\000\021C_fixnum_increase");
lf[918]=C_decode_literal(C_heaptop,"\376B\000\000\023C_u_fixnum_increase");
lf[919]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_plus");
lf[920]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[921]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016");
lf[922]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\012C_quotient\376\003\000\000\002\376\377\006\001\376\377\016");
lf[923]=C_h_intern(&lf[923],8,"quotient");
lf[924]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\024C_fixnum_shift_right\376\377\016");
lf[925]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_divide\376\377\016");
lf[926]=C_h_intern(&lf[926],19,"\010compilerfold-inner");
lf[927]=C_h_intern(&lf[927],6,"remove");
lf[928]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\021C_u_fixnum_negate\376\377\016");
lf[929]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\017C_fixnum_negate\376\377\016");
lf[930]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\025C_u_fixnum_difference\376\377\016");
lf[931]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_difference\376\377\016");
lf[932]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\023C_fixnum_shift_left\376\377\016");
lf[933]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\016C_fixnum_times\376\377\016");
lf[934]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fixnum_plus");
lf[935]=C_decode_literal(C_heaptop,"\376B\000\000\017C_u_fixnum_plus");
lf[936]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysslot\376\003\000\000\002\376\001\000\000\015\003sysblock-ref\376\003\000\000\002\376\001\000\000\010\003syssize\376\003\000\000\002\376\001\000\000\010\003sysbyte\376\003\000"
"\000\002\376\001\000\000\014\003syspointer\077\376\003\000\000\002\376\001\000\000\026\003sysgeneric-structure\077\376\003\000\000\002\376\001\000\000\020\003sysfits-in-int\077\376\003\000"
"\000\002\376\001\000\000\031\003sysfits-in-unsigned-int\077\376\003\000\000\002\376\001\000\000\033\003sysflonum-in-fixnum-range\077\376\003\000\000\002\376\001\000\000\011\003"
"sysfudge\376\003\000\000\002\376\001\000\000\016\003sysimmediate\077\376\003\000\000\002\376\001\000\000\017\003sysbytevector\077\376\003\000\000\002\376\001\000\000\011\003syspair\077\376\003\000\000"
"\002\376\001\000\000\007\003syseq\077\376\003\000\000\002\376\001\000\000\011\003syslist\077\376\003\000\000\002\376\001\000\000\013\003sysvector\077\376\003\000\000\002\376\001\000\000\010\003syseqv\077\376\003\000\000\002\376\001\000\000"
"\017\003sysget-keyword\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\003\000\000\002\376\001\000\000\016\003syspermanent\077\376\377\016");
lf[937]=C_h_intern(&lf[937],15,"lset-difference");
lf[938]=C_h_intern(&lf[938],10,"lset-union");
C_register_lf2(lf,939,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1590,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in ... */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:645: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[699],C_fix(2),C_fix(2),lf[700],C_SCHEME_TRUE);}

/* k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in ... */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:644: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[701],C_fix(2),C_fix(2),lf[702],C_SCHEME_TRUE);}

/* k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in ... */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:643: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[703],C_fix(2),C_fix(1),lf[704],C_SCHEME_TRUE);}

/* k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in ... */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:642: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[705],C_fix(2),C_fix(1),lf[706],C_SCHEME_TRUE);}

/* k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in ... */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2643,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:641: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[707],C_fix(2),C_fix(2),lf[708],C_SCHEME_TRUE);}

/* f_3882 in k3864 */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3882,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in ... */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:649: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[691],C_fix(2),C_fix(2),lf[692],C_SCHEME_TRUE);}

/* k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in ... */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2659,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:648: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[693],C_fix(2),C_fix(2),lf[694],C_SCHEME_TRUE);}

/* k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in ... */
static void C_ccall f_2655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:647: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[695],C_fix(2),C_fix(2),lf[696],C_SCHEME_TRUE);}

/* k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in ... */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:646: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[697],C_fix(2),C_fix(2),lf[698],C_SCHEME_TRUE);}

/* k2680 in k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in ... */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:660: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[669],C_fix(2),C_fix(2),lf[670],C_SCHEME_TRUE);}

/* f_4575 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4575,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* rewrite-c..r in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_fcall f_2097(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2097,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2103,a[2]=t5,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:465: rewrite */
t7=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,C_fix(8),t6);}

/* k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2097,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2218,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:491: rewrite-c..r */
f_2097(t3,lf[904],lf[905],lf[906],C_fix(0));}

/* k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2092,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:461: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[907],C_fix(8),((C_word*)t0)[3]);}

/* k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2090,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1917,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1929,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=C_u_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1934,a[2]=t5,a[3]=t7,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1986,a[2]=t8,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:445: butlast */
t10=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2076,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:446: g464 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}}

/* f_4589 */
static void C_ccall f_4589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4589,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3289 in k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3291,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1052: g736 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[67],((C_word*)t0)[5],t2);}

/* k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in ... */
static void C_ccall f_3131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:977: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[236],C_fix(17),C_fix(1),lf[237],lf[238]);}

/* k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in ... */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:978: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[233],C_fix(17),C_fix(1),lf[234],lf[235]);}

/* k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in ... */
static void C_ccall f_3135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:979: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[231],C_fix(17),C_fix(1),lf[232]);}

/* k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in ... */
static void C_ccall f_3137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:980: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[229],C_fix(17),C_fix(1),lf[230]);}

/* f_3299 in k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3299,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in ... */
static void C_ccall f_3121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:972: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[247],C_fix(17),C_fix(1),lf[248]);}

/* k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in ... */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:973: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[245],C_fix(17),C_fix(1),lf[246]);}

/* k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in ... */
static void C_ccall f_3125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:974: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[243],C_fix(17),C_fix(1),lf[244]);}

/* f_3285 in k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3285,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in ... */
static void C_ccall f_3127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:975: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[241],C_fix(17),C_fix(1),lf[242]);}

/* k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in ... */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:981: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[227],C_fix(17),C_fix(2),lf[228]);}

/* k4769 */
static void C_fcall f_4771(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4771,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4772,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:271: qnode */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(1));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4785,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
/* c-platform.scm:272: g125 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[41],lf[933],t3);}}

/* f_4772 in k4769 */
static void C_ccall f_4772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4772,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in ... */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:968: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[256],C_fix(17),C_fix(3),lf[257]);}

/* k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in ... */
static void C_ccall f_3111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:967: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[258],C_fix(17),C_fix(3),lf[259]);}

/* k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in ... */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3119,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:970: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[251],C_fix(17),C_fix(2),lf[252],lf[253]);}

/* k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in ... */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:969: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[254],C_fix(17),C_fix(1),lf[255]);}

/* k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in ... */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3131,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:976: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[239],C_fix(17),C_fix(1),lf[240]);}

/* f_3271 in k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3271,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in ... */
static void C_ccall f_3270(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3271,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3285,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3291,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3299,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3305,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t9=C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t10=C_a_i_list2(&a,2,lf[76],t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3311,a[2]=t7,a[3]=t8,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1062: list-tabulate */
t13=*((C_word*)lf[77]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,((C_word*)t0)[5],t12);}

/* f_4785 in k4769 */
static void C_ccall f_4785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4785,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4783 in k4769 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4784,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:271: g120 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[41],lf[932],t2);}

/* k4593 */
static void C_ccall f_4595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4595,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:287: g138 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in ... */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:963: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[266],C_fix(17),C_fix(2),lf[267]);}

/* k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in ... */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3103,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:962: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[268],C_fix(17),C_fix(3),lf[269]);}

/* k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in ... */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:965: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[262],C_fix(17),C_fix(2),lf[263]);}

/* k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in ... */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:964: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[264],C_fix(17),C_fix(2),lf[265]);}

/* k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in ... */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:971: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[249],C_fix(17),C_fix(2),lf[250]);}

/* k4523 */
static void C_ccall f_4524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4524,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_eqp(*((C_word*)lf[39]+1),lf[38]);
if(C_truep(t3)){
t4=C_u_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4444,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4459,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4461,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:334: fold-inner */
t9=*((C_word*)lf[926]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t2);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* f_4526 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4526,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4548,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4554,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:325: g179 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in ... */
static void C_ccall f_3173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1001: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[193],C_fix(16),C_fix(2),lf[194],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in ... */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1003: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[190],C_fix(22),C_fix(2),lf[191],C_SCHEME_FALSE,*((C_word*)lf[9]+1),lf[192]);}

/* k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in ... */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3173,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1000: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[195],C_fix(16),C_fix(2),lf[196],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in ... */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:966: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[260],C_fix(17),C_fix(3),lf[261]);}

/* k3303 in k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3305,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1056: g741 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in ... */
static void C_ccall f_3163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:995: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[203],C_fix(2),C_fix(2),lf[204],C_SCHEME_FALSE);}

/* k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in ... */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:996: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[201],C_fix(2),C_fix(2),lf[202],C_SCHEME_FALSE);}

/* k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in ... */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3163,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:993: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[205],C_fix(2),C_fix(1),lf[206],C_SCHEME_FALSE);}

/* k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in ... */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1004: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[187],C_fix(22),C_fix(2),lf[188],C_SCHEME_FALSE,*((C_word*)lf[9]+1),lf[189]);}

/* k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in ... */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3181,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1006: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[185],C_fix(2),C_fix(3),lf[186],C_SCHEME_FALSE);}

/* f_4501 in k4513 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4501,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_4509 */
static void C_ccall f_4509(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4509,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4505 in k4513 */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
f_4467(t3,C_eqp(C_fix(2),t2));}

/* f_3336 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in ... */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3336,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in ... */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:989: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[211],C_fix(17),C_fix(1),lf[212]);}

/* k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in ... */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:988: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[213],C_fix(17),C_fix(1),lf[214]);}

/* k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in ... */
static void C_ccall f_3151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:987: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[215],C_fix(17),C_fix(1),lf[216]);}

/* k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in ... */
static void C_ccall f_3167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:997: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[199],C_fix(2),C_fix(2),lf[200],C_SCHEME_FALSE);}

/* k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in ... */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:998: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[197],C_fix(2),C_fix(2),lf[198],C_SCHEME_FALSE);}

/* k1708 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1709,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:378: g268 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[42],((C_word*)t0)[5],t2);}

/* k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in ... */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:984: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[221],C_fix(17),C_fix(1),lf[222]);}

/* k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in ... */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:983: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[223],C_fix(17),C_fix(1),lf[224]);}

/* k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in k3102 in k3100 in k3098 in ... */
static void C_ccall f_3141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:982: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[225],C_fix(17),C_fix(1),lf[226]);}

/* k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in ... */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:991: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[207],C_fix(17),C_fix(2),lf[208]);}

/* k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in ... */
static void C_ccall f_3157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:990: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[209],C_fix(17),C_fix(1),lf[210]);}

/* f_4562 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_4562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4562,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(C_i_nullp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=C_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_eqp(*((C_word*)lf[39]+1),lf[38]):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4575,tmp=(C_word)a,a+=2,tmp);
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4589,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4595,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
if(C_truep(*((C_word*)lf[40]+1))){
/* c-platform.scm:290: g143 */
t13=t11;
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t12,lf[41],lf[928],t5);}
else{
/* c-platform.scm:290: g143 */
t13=t11;
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t12,lf[41],lf[929],t5);}}
else{
t9=t5;
t10=C_u_i_car(t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4652,a[2]=t10,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4654,tmp=(C_word)a,a+=2,tmp);
t13=t5;
t14=C_u_i_cdr(t13);
/* c-platform.scm:296: remove */
t15=*((C_word*)lf[927]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t11,t12,t14);}}}

/* k3310 in k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:1059: g746 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[42],((C_word*)t0)[4],t1);}

/* f_3313 in k3269 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3313,3,t0,t1,t2);}
/* c-platform.scm:1062: varnode */
t3=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k4719 in k4697 */
static void C_ccall f_4720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4720,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:260: g96 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* f_4727 in k4697 */
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4727,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_3344 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in ... */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3344,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in ... */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3342,2,t0,t1);}
t2=C_i_car(t1);
if(C_truep(C_fixnump(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1048: <= */
C_less_or_equal_p(5,0,t3,C_fix(0),t2,C_fix(32));}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3377 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3378,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3459,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1076: g769 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_1992 in k1987 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1992,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1733,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1741,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1818,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1824,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:395: g311 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}}

/* f_4540 in k4552 */
static void C_ccall f_4540(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4540,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4544 in k4552 */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(1),t2));}

/* f_4548 */
static void C_ccall f_4548(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4548,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_fcall f_1741(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1741,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_1744(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1790,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1796,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:397: g318 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}

/* f_1745 in k1742 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1745,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k1742 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_fcall f_1744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1744,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1745,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1759,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1765,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:401: g329 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[41],lf[44],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_4705 in k4697 */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4705,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4513 */
static void C_ccall f_4515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4515,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4501,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:336: g198 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_4467(t3,C_SCHEME_FALSE);}}

/* f_3326 in k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in ... */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3326,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in ... */
static void C_ccall f_3357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1067: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[126],C_fix(20),C_fix(2),lf[127],C_fix(10),C_SCHEME_FALSE);}

/* k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in ... */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3361,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3490,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1089: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[64],C_fix(8),t2);}

/* k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1720,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:402: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[803],C_fix(8),t2);}

/* k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4310,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:382: op1 */
f_1649(t3,lf[913],lf[914],lf[915]);}

/* k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in ... */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1066: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[128],C_fix(7),C_fix(1),lf[129],C_fix(10),C_SCHEME_FALSE);}

/* k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in ... */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1045: gensym */
t4=*((C_word*)lf[69]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in ... */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1064: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[130],C_fix(8),((C_word*)t0)[3]);}

/* k4762 in k4697 */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4763,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:264: g106 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1720,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1733,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1881,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1887,a[2]=t4,a[3]=t10,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:391: g287 */
t13=t11;
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* f_4765 in k4697 */
static void C_ccall f_4765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4765,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4771,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4813,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4819,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:270: g114 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}

/* f_1691 */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1691,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in ... */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:892: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[328],C_fix(2),C_fix(2),lf[329],C_SCHEME_FALSE);}

/* k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in ... */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:891: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[330],C_fix(2),C_fix(2),lf[331],C_SCHEME_FALSE);}

/* k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in ... */
static void C_ccall f_3051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:890: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[332],C_fix(2),C_fix(2),lf[333],C_SCHEME_FALSE);}

/* k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in ... */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:894: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[324],C_fix(2),C_fix(2),lf[325],C_SCHEME_FALSE);}

/* k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in ... */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:893: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[326],C_fix(2),C_fix(2),lf[327],C_SCHEME_FALSE);}

/* f_1782 in k1794 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1782(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1782,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in ... */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3081,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:924: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[298],C_fix(17),C_fix(2),lf[299]);}

/* k1786 in k1794 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(t1);
t3=C_i_flonump(t2);
t4=((C_word*)t0)[2];
f_1744(t4,C_i_not(t3));}

/* k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in ... */
static void C_ccall f_3085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:926: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[293],C_fix(17),C_fix(1),lf[294],lf[295]);}

/* f_4748 in k4697 */
static void C_ccall f_4748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4748,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in ... */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3083,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3085,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:925: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[296],C_fix(17),C_fix(2),lf[297]);}

/* k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in ... */
static void C_ccall f_3089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:928: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[287],C_fix(17),C_fix(2),lf[288],lf[289]);}

/* k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in ... */
static void C_ccall f_3087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:927: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[290],C_fix(17),C_fix(2),lf[291],lf[292]);}

/* f_1759 in k1742 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1759,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4315,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:341: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[923],C_fix(8),t3);}

/* k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1643,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4423,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:314: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[446],C_fix(8),t3);}

/* k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4562,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:276: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[450],C_fix(8),t3);}

/* op1 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_fcall f_1649(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1649,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1652,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp));}

/* k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1649,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4313,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:381: op1 */
f_1649(t4,lf[917],lf[918],lf[919]);}

/* k1763 in k1742 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1765,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:399: g324 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* f_1652 in op1 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1652,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1659,tmp=(C_word)a,a+=2,tmp);
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1674,a[2]=t4,a[3]=t8,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=C_eqp(lf[38],*((C_word*)lf[39]+1));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1678,tmp=(C_word)a,a+=2,tmp);
if(C_truep(*((C_word*)lf[40]+1))){
t13=((C_word*)t0)[2];
t14=C_a_i_list1(&a,1,t13);
/* c-platform.scm:377: g263 */
t15=t12;
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t10,lf[41],t14,t5);}
else{
t13=((C_word*)t0)[3];
t14=C_a_i_list1(&a,1,t13);
/* c-platform.scm:377: g263 */
t15=t12;
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t10,lf[41],t14,t5);}}
else{
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1691,tmp=(C_word)a,a+=2,tmp);
t13=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(4));
t14=C_i_car(t5);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1709,a[2]=t14,a[3]=t12,a[4]=t10,a[5]=t13,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:380: qnode */
t16=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_fix(1));}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* f_1659 */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1659,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in ... */
static void C_ccall f_3091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3093,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:929: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[284],C_fix(17),C_fix(2),lf[285],lf[286]);}

/* k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in ... */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3097,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:931: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[278],C_fix(17),C_fix(2),lf[279],lf[280]);}

/* k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in ... */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:930: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[281],C_fix(17),C_fix(2),lf[282],lf[283]);}

/* k3098 in k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in ... */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3101,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:961: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[270],C_fix(17),C_fix(2),lf[271]);}

/* k3096 in k3094 in k3092 in k3090 in k3088 in k3086 in k3084 in k3082 in k3080 in k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in ... */
static void C_ccall f_3097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3841,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:933: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[277],C_fix(8),t3);}

/* k4552 */
static void C_ccall f_4554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4554,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4540,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4546,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:326: g182 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1790 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1790,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k1794 in k1740 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1796,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1782,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1788,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:398: g321 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_1744(t3,C_SCHEME_FALSE);}}

/* k3590 in k3543 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3591,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1206: g893 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[42],lf[83],t2);}

/* k3580 in k3543 */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3582,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1203: g888 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* f_3597 in k3529 in k3527 in k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in ... */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3597,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(3),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3604,tmp=(C_word)a,a+=2,tmp);
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3618,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3624,a[2]=t4,a[3]=t8,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3629,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3635,a[2]=t5,a[3]=t10,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t14=C_i_car(t5);
t15=C_i_cadr(t5);
t16=C_a_i_list2(&a,2,t14,t15);
/* c-platform.scm:1188: g872 */
t17=t12;
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,t13,lf[42],lf[86],t16);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* f_3576 in k3543 */
static void C_ccall f_3576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3576,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3793 in k3825 in k3833 */
static void C_ccall f_3795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3795,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],lf[123]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3801,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=C_i_cdr(t2);
/* c-platform.scm:1131: varnode */
t7=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in ... */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:626: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[734],C_fix(2),C_fix(1),lf[735],C_SCHEME_TRUE);}

/* k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in ... */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:625: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[736],C_fix(2),C_fix(1),lf[737],C_SCHEME_FALSE);}

/* k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in ... */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:623: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[736],C_fix(2),C_fix(1),lf[739],C_SCHEME_FALSE);}

/* k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in ... */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:622: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[740],C_fix(2),C_fix(1),lf[741],C_SCHEME_FALSE);}

/* k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in ... */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:624: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[736],C_fix(2),C_fix(1),lf[738],C_SCHEME_TRUE);}

/* f_3789 in k3825 in k3833 */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3789,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[56]);}

/* k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in ... */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:650: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[689],C_fix(2),C_fix(2),lf[690],C_SCHEME_TRUE);}

/* k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in ... */
static void C_ccall f_2617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2617,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:628: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[730],C_fix(2),C_fix(1),lf[731],C_SCHEME_TRUE);}

/* k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in ... */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2615,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:627: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[732],C_fix(2),C_fix(1),lf[733],C_SCHEME_TRUE);}

/* k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in ... */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:629: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[727],C_fix(2),C_fix(2),lf[729],C_SCHEME_FALSE);}

/* k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in ... */
static void C_ccall f_2671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:655: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[679],C_fix(2),C_fix(2),lf[680],C_SCHEME_FALSE);}

/* k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in ... */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2669,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:653: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[683],C_fix(2),C_fix(2),lf[684],C_SCHEME_TRUE);}

/* k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in ... */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:654: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[681],C_fix(2),C_fix(2),lf[682],C_SCHEME_FALSE);}

/* k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in ... */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:651: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[687],C_fix(2),C_fix(2),lf[688],C_SCHEME_TRUE);}

/* k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in ... */
static void C_ccall f_2665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:652: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[685],C_fix(2),C_fix(2),lf[686],C_SCHEME_TRUE);}

/* k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in ... */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1168: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[103],C_fix(23),C_fix(1),lf[104],lf[105]);}

/* k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in ... */
static void C_ccall f_3516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1169: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[100],C_fix(23),C_fix(1),lf[101],lf[102]);}

/* k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in ... */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3653,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1155: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[110],C_fix(8),t3);}

/* k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in ... */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1167: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[106],C_fix(23),C_fix(0),lf[107],lf[102]);}

/* k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in ... */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:640: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[709],C_fix(2),C_fix(2),lf[710],C_SCHEME_TRUE);}

/* k3527 in k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in ... */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1176: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[88],C_fix(7),C_fix(2),lf[89],C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in ... */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:658: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[673],C_fix(2),C_fix(2),lf[674],C_SCHEME_FALSE);}

/* k2678 in k2676 in k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in ... */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2679,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:659: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[671],C_fix(2),C_fix(2),lf[672],C_SCHEME_TRUE);}

/* k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in k2630 in ... */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:656: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[677],C_fix(2),C_fix(2),lf[678],C_SCHEME_FALSE);}

/* k2674 in k2672 in k2670 in k2668 in k2666 in k2664 in k2662 in k2660 in k2658 in k2656 in k2654 in k2652 in k2650 in k2648 in k2646 in k2644 in k2642 in k2640 in k2638 in k2636 in k2634 in k2632 in ... */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:657: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[675],C_fix(2),C_fix(2),lf[676],C_SCHEME_FALSE);}

/* k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in ... */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1138: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[114],C_fix(3),lf[115],C_fix(0));}

/* k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in ... */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1137: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[116],C_fix(3),lf[105],C_fix(0));}

/* k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in ... */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1136: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[117],C_fix(3),lf[102],C_fix(0));}

/* k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in ... */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3502,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1135: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[118],C_fix(3),lf[119],C_fix(0));}

/* k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in ... */
static void C_ccall f_3518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1170: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[98],C_fix(23),C_fix(2),lf[99],C_fix(0),C_fix(0),C_SCHEME_FALSE);}

/* k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in ... */
static void C_ccall f_2414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2414,2,t0,t1);}
t2=C_i_caddr(t1);
if(C_truep(C_i_listp(t2))){
t3=C_i_length(t2);
t4=C_eqp(C_fix(2),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:525: gensym */
t6=*((C_word*)lf[69]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_2416 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in ... */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2416,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in ... */
static void C_ccall f_3508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3695,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1140: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[113],C_fix(8),t3);}

/* k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in ... */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2621,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:630: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[727],C_fix(2),C_fix(2),lf[728],C_SCHEME_TRUE);}

/* k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in ... */
static void C_ccall f_2623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:631: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[724],C_fix(2),C_fix(3),lf[726],C_SCHEME_FALSE);}

/* f_2424 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in ... */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2424,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in ... */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2422,2,t0,t1);}
t2=C_eqp(lf[66],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2408,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:522: g590 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in ... */
static void C_ccall f_2631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:635: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[719],C_fix(2),C_fix(2),lf[720],C_SCHEME_TRUE);}

/* k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in ... */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:636: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[717],C_fix(2),C_fix(2),lf[718],C_SCHEME_TRUE);}

/* k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in ... */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:632: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[724],C_fix(2),C_fix(3),lf[725],C_SCHEME_TRUE);}

/* k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in ... */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:633: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[721],C_fix(2),C_fix(2),lf[723],C_SCHEME_FALSE);}

/* k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in ... */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:634: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[721],C_fix(2),C_fix(2),lf[722],C_SCHEME_TRUE);}

/* k3955 in k3962 in k3970 */
static void C_ccall f_3956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3911(t2,C_i_not(t1));}

/* f_3958 in k3970 */
static void C_ccall f_3958(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3958,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k3566 in k3543 */
static void C_ccall f_3568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3568,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1199: g883 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[67],((C_word*)t0)[5],t2);}

/* k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in ... */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:621: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[740],C_fix(2),C_fix(1),lf[742],C_SCHEME_TRUE);}

/* k2600 in k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in ... */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:620: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[740],C_fix(2),C_fix(1),lf[743],C_SCHEME_FALSE);}

/* k4029 in k4037 */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* c-platform.scm:917: immediate? */
t3=*((C_word*)lf[308]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k3931 in k3909 in k3962 in k3970 */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3932,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:950: g691 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[41],lf[274],t2);}

/* f_4033 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4033,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4037 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4039,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4025,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:917: g666 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_4014(2,t3,C_SCHEME_FALSE);}}

/* f_2408 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in ... */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2408,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in k2592 in ... */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:637: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[715],C_fix(2),C_fix(2),lf[716],C_SCHEME_TRUE);}

/* k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in k2594 in ... */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2637,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:638: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[713],C_fix(2),C_fix(2),lf[714],C_SCHEME_TRUE);}

/* f_3726 in k3720 */
static void C_ccall f_3726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3726,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2638 in k2636 in k2634 in k2632 in k2630 in k2628 in k2626 in k2624 in k2622 in k2620 in k2618 in k2616 in k2614 in k2612 in k2610 in k2608 in k2606 in k2604 in k2602 in k2600 in k2598 in k2596 in ... */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:639: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[711],C_fix(2),C_fix(2),lf[712],C_SCHEME_TRUE);}

/* k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in ... */
static void C_ccall f_2298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2298,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2416,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:521: g586 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3720 */
static void C_fcall f_3722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3722,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-platform.scm:1150: qnode */
t2=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3726,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
/* c-platform.scm:1151: g837 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],lf[41],lf[111],t3);}}

/* k3718 */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3719,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1145: g825 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k3543 */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3545,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,t1);
t4=C_i_car(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3562,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3568,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3576,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=C_i_cadr(((C_word*)t0)[2]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3591,a[2]=t10,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1209: varnode */
t12=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t1);}

/* k2400 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in ... */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:527: debugging */
t2=*((C_word*)lf[71]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[72],lf[73],t1);}

/* f_3545 in k3543 */
static void C_ccall f_3545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3545,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in ... */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:543: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[54],C_fix(13),lf[877],C_SCHEME_TRUE);}

/* k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in ... */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:544: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[874],C_fix(13),lf[876],C_SCHEME_FALSE);}

/* k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in ... */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:542: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[53],C_fix(13),lf[878],C_SCHEME_TRUE);}

/* k3934 in k3909 in k3962 in k3970 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:952: qnode */
t2=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_3936 in k3909 in k3962 in k3970 */
static void C_ccall f_3936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3936,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k3531 in k3529 in k3527 in k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in ... */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3536,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1194: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[84],C_fix(8),t3);}

/* k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in ... */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:540: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[871],C_fix(8),((C_word*)t0)[3]);}

/* k3529 in k3527 in k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in ... */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3530,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3597,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1178: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[87],C_fix(8),t3);}

/* f_3536 in k3531 in k3529 in k3527 in k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in ... */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3536,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3544,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1198: gensym */
t9=*((C_word*)lf[69]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k3533 in k3531 in k3529 in k3527 in k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in ... */
static void C_ccall f_3534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k2387 in k2390 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in ... */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2388,2,t0,t1);}
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
/* c-platform.scm:533: g610 */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],lf[37],((C_word*)t0)[6],t2);}

/* k2468 in k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in ... */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:549: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[867],C_fix(13),lf[868],C_SCHEME_TRUE);}

/* k4012 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-platform.scm:913: g656 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[41],lf[306],((C_word*)t0)[4]);}
else{
/* c-platform.scm:913: g656 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[41],lf[307],((C_word*)t0)[4]);}}

/* k2466 in k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in ... */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:548: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[869],C_fix(13),lf[870],C_SCHEME_TRUE);}

/* k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in ... */
static void C_ccall f_2809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2809,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:734: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[541],C_fix(2),C_fix(1),lf[542],C_SCHEME_TRUE);}

/* k2464 in k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in ... */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:547: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[871],C_fix(13),lf[872],C_SCHEME_TRUE);}

/* k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in ... */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2809,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:732: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[543],C_fix(6),lf[544],lf[545],C_SCHEME_TRUE);}

/* k2462 in k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in ... */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:546: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[871],C_fix(13),lf[873],C_SCHEME_FALSE);}

/* k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in ... */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:731: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[546],C_fix(6),lf[547],lf[548],C_SCHEME_TRUE);}

/* k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in ... */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:730: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[537],C_fix(6),lf[549],lf[550],C_SCHEME_FALSE);}

/* k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in k2766 in k2764 in k2762 in k2760 in k2758 in ... */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:729: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[541],C_fix(6),lf[551],lf[552],C_SCHEME_FALSE);}

/* f_3704 */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3704,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2460 in k2458 in k2456 in k2453 in k2451 in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in ... */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:545: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[874],C_fix(13),lf[875],C_SCHEME_TRUE);}

/* k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in ... */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1173: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[92],C_fix(23),C_fix(2),lf[93],C_fix(0));}

/* k3525 in k3523 in k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in ... */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1175: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[90],C_fix(7),C_fix(2),lf[91],C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in ... */
static void C_ccall f_3520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1171: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[96],C_fix(23),C_fix(2),lf[97],C_fix(0),C_fix(0),C_SCHEME_FALSE);}

/* k3521 in k3519 in k3517 in k3515 in k3513 in k3511 in k3509 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in ... */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1172: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[94],C_fix(23),C_fix(2),lf[95],C_fix(0));}

/* f_2396 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in ... */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2396,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2390 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in ... */
static void C_ccall f_2391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2391,2,t0,t1);}
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2373,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=t5,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:535: varnode */
t8=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[2]);}

/* f_4025 in k4037 */
static void C_ccall f_4025(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4025,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in ... */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2438,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2424,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:519: g581 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_3769 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in ... */
static void C_ccall f_3769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3769,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3829,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3835,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1125: g802 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* f_2432 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in ... */
static void C_ccall f_2432(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2432,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in ... */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2430,2,t0,t1);}
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:520: get */
t4=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[6],t2,lf[75]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2364 in k2346 in k2326 in k2324 in k2322 in k2412 in k2420 in k2297 in k2428 in k2436 in k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in ... */
static void C_ccall f_2365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2365,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:536: g615 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k4069 in build */
static void C_ccall f_4071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4071,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:862: g634 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k3970 */
static void C_ccall f_3972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3972,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=C_eqp(*((C_word*)lf[39]+1),lf[38]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3958,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:947: g687 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
f_3865(2,t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_3865(2,t3,C_SCHEME_FALSE);}}

/* k2444 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in ... */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2432,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:518: g577 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3761 */
static void C_ccall f_3763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3763,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3749,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3755,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1149: g834 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[2];
f_3722(t3,C_SCHEME_FALSE);}}

/* f_2440 in rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in ... */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2440,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in ... */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:499: rewrite-c..r */
f_2097(t2,lf[882],lf[883],lf[884],C_fix(2));}

/* k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in ... */
static void C_ccall f_2230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:498: rewrite-c..r */
f_2097(t2,lf[885],lf[886],lf[887],C_fix(1));}

/* k4230 in k4238 in k4123 */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4232,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:420: immediate? */
t4=*((C_word*)lf[308]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_4234 in k4123 */
static void C_ccall f_4234(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4234,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k1861 in k1877 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1865,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1871,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:393: g298 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_1865 in k1861 in k1877 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1865,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4003 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4005,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:910: g651 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in ... */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:748: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[503],C_fix(2),C_fix(1),lf[525],C_SCHEME_TRUE);}

/* k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in ... */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:747: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[505],C_fix(2),C_fix(1),lf[526],C_SCHEME_TRUE);}

/* f_3966 */
static void C_ccall f_3966(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3966,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in ... */
static void C_ccall f_2839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:750: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[499],C_fix(2),C_fix(1),lf[523],C_SCHEME_TRUE);}

/* k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in ... */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2268,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:539: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[874],C_fix(8),t2);}

/* k3962 in k3970 */
static void C_ccall f_3964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3964,2,t0,t1);}
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3911,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3956,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:948: big-fixnum? */
t5=*((C_word*)lf[276]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=t3;
f_3911(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_3865(2,t3,C_SCHEME_FALSE);}}

/* k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in ... */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:749: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[501],C_fix(2),C_fix(2),lf[524],C_SCHEME_TRUE);}

/* rewrite-c-w-v in k2264 in k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in ... */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2268,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2440,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2446,a[2]=t1,a[3]=t8,a[4]=t9,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:517: g573 */
t12=t10;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* f_3978 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in ... */
static void C_ccall f_3978(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3978,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3985,tmp=(C_word)a,a+=2,tmp);
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3999,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4005,a[2]=t4,a[3]=t8,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t12=C_i_caddr(t5);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4014,a[2]=t10,a[3]=t11,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4033,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4039,a[2]=t13,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:916: g663 */
t16=t14;
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,t12);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in ... */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:746: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[507],C_fix(2),C_fix(1),lf[527],C_SCHEME_TRUE);}

/* f_3757 */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3757,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k3753 in k3761 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* c-platform.scm:1149: get */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,lf[112]);}

/* f_3749 in k3761 */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3749,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4201 in k4209 in k4154 in k4123 */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4203,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:423: immediate? */
t4=*((C_word*)lf[308]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_4205 in k4154 in k4123 */
static void C_ccall f_4205(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4205,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_4051 in build */
static void C_ccall f_4051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4051,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in ... */
static void C_ccall f_2845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:753: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[517],C_fix(2),C_fix(2),lf[518],C_SCHEME_TRUE);}

/* k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in ... */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2845,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:752: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[519],C_fix(2),C_fix(2),lf[520],C_SCHEME_TRUE);}

/* k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in ... */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2238,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2263,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:507: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[53],C_fix(8),t2);}

/* k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in ... */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:755: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[513],C_fix(2),C_fix(2),lf[514],C_SCHEME_TRUE);}

/* k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in ... */
static void C_ccall f_2234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:500: rewrite-c..r */
f_2097(t2,lf[879],lf[880],lf[881],C_fix(3));}

/* k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in ... */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:754: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[515],C_fix(2),C_fix(2),lf[516],C_SCHEME_TRUE);}

/* f_2238 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in ... */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2238,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2245,tmp=(C_word)a,a+=2,tmp);
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=C_a_i_cons(&a,2,t4,t5);
/* c-platform.scm:506: g558 */
t11=t8;
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,lf[37],t9,t10);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in ... */
static void C_ccall f_2841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:751: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[521],C_fix(2),C_fix(2),lf[522],C_SCHEME_TRUE);}

/* k3743 in k3761 */
static void C_ccall f_3744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3722(t2,C_i_not(t1));}

/* f_3562 in k3543 */
static void C_ccall f_3562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3562,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2210 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2212,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2198,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2204,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:480: g523 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[2];
f_2136(t3,C_SCHEME_FALSE);}}

/* k2262 in k2235 in k2233 in k2231 in k2229 in k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in ... */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:508: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[54],C_fix(8),((C_word*)t0)[3]);}

/* k2003 in k1987 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:456: g487 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],((C_word*)t0)[4],t1);}

/* f_2006 in k1987 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2006,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4209 in k4154 in k4123 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4211,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4197,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:422: g389 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_4158(t3,C_SCHEME_FALSE);}}

/* k4217 in k4230 in k4238 in k4123 */
static void C_ccall f_4218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_4155(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_4155(t2,C_i_symbolp(((C_word*)t0)[3]));}}

/* f_1881 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1881,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in ... */
static void C_ccall f_2813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:736: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[537],C_fix(2),C_fix(1),lf[538],C_SCHEME_TRUE);}

/* k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1873,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:392: g291 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_1733(2,t3,C_SCHEME_FALSE);}}

/* k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in ... */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:737: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[535],C_fix(2),C_fix(1),lf[536],C_SCHEME_TRUE);}

/* f_4065 in build */
static void C_ccall f_4065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4065,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in ... */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:739: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[521],C_fix(2),C_fix(1),lf[534],C_SCHEME_TRUE);}

/* f_2245 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2245,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in ... */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:740: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[519],C_fix(2),C_fix(1),lf[533],C_SCHEME_TRUE);}

/* k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in k2776 in k2774 in k2772 in k2770 in k2768 in ... */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:735: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[539],C_fix(2),C_fix(1),lf[540],C_SCHEME_TRUE);}

/* k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:493: rewrite-c..r */
f_2097(t2,lf[898],lf[899],lf[900],C_fix(0));}

/* k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:494: rewrite-c..r */
f_2097(t2,lf[895],lf[896],lf[897],C_fix(1));}

/* k2057 in k2036 in k2068 in k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2059,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list3(&a,3,t1,((C_word*)t0)[3],t2);
/* c-platform.scm:451: g477 */
t4=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[5],lf[37],((C_word*)t0)[6],t3);}

/* k1854 in k1869 in k1861 in k1877 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1855,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:394: g301 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in ... */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:742: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[515],C_fix(2),C_fix(1),lf[531],C_SCHEME_TRUE);}

/* f_1857 in k1877 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1857,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in ... */
static void C_ccall f_2825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:743: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[513],C_fix(2),C_fix(1),lf[530],C_SCHEME_TRUE);}

/* k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2218,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:492: rewrite-c..r */
f_2097(t2,lf[901],lf[902],lf[903],C_fix(0));}

/* k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in ... */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:744: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[511],C_fix(2),C_fix(1),lf[529],C_SCHEME_TRUE);}

/* f_2053 in k2036 in k2068 in k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2053(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2053,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in ... */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:745: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[509],C_fix(2),C_fix(1),lf[528],C_SCHEME_TRUE);}

/* k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in k2806 in k2804 in k2802 in k2800 in k2798 in k2796 in k2794 in k2792 in k2790 in k2788 in k2786 in k2784 in k2782 in k2780 in k2778 in ... */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:741: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[517],C_fix(2),C_fix(1),lf[532],C_SCHEME_TRUE);}

/* k4270 in k4285 in k4277 in k4293 in k4301 */
static void C_ccall f_4271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4271,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:417: g361 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* f_2064 in k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2064,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k4277 in k4293 in k4301 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4281,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4287,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:416: g358 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_4273 in k4293 in k4301 */
static void C_ccall f_4273(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4273,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in ... */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:772: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[48],C_fix(11),C_fix(2),lf[485],C_SCHEME_TRUE);}

/* k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in ... */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:771: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[486],C_fix(11),C_fix(2),lf[487],C_SCHEME_TRUE);}

/* k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in ... */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:770: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[488],C_fix(11),C_fix(1),lf[124],C_SCHEME_TRUE);}

/* k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in ... */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:768: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[436],C_fix(9),lf[489],lf[490],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k1822 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1824,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1810,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:396: g314 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_1741(t3,C_SCHEME_FALSE);}}

/* k2227 in k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 in ... */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:497: rewrite-c..r */
f_2097(t2,lf[888],lf[889],lf[890],C_fix(0));}

/* k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2224,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:495: rewrite-c..r */
f_2097(t2,lf[858],lf[893],lf[894],C_fix(2));}

/* k2225 in k2223 in k2221 in k2219 in k2217 in k2093 in k2091 in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:496: rewrite-c..r */
f_2097(t2,lf[837],lf[891],lf[892],C_fix(3));}

/* k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in ... */
static void C_ccall f_2871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:767: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[438],C_fix(9),lf[491],lf[492],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k4238 in k4123 */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4240,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4226,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4232,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:419: g378 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_4155(t3,C_SCHEME_FALSE);}}

/* k2036 in k2068 in k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2038,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2039,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2053,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:453: g482 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[51],lf[57],C_SCHEME_END_OF_LIST);}
else{
t2=((C_word*)t0)[4];
f_1988(2,t2,C_SCHEME_FALSE);}}

/* f_2039 in k2036 in k2068 in k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2039,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_1873 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1873(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1873,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in ... */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:777: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[478],C_fix(11),C_fix(2),lf[479],C_SCHEME_FALSE);}

/* k1869 in k1861 in k1877 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1871,2,t0,t1);}
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1840,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1855,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:394: qnode */
t5=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[4];
f_1733(2,t2,C_SCHEME_FALSE);}}

/* k3909 in k3962 in k3970 */
static void C_fcall f_3911(C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3911,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_negativep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3918,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3932,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3935,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:952: - */
C_minus(3,0,t6,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3936,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
t5=C_a_i_list2(&a,2,t4,((C_word*)t0)[5]);
/* c-platform.scm:953: g696 */
t6=t2;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,((C_word*)t0)[4],lf[41],lf[275],t5);}}
else{
t2=((C_word*)t0)[4];
f_3865(2,t2,C_SCHEME_FALSE);}}

/* k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in ... */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:776: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[480],C_fix(11),C_fix(3),lf[481],C_SCHEME_FALSE);}

/* k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in ... */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:775: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[482],C_fix(11),C_SCHEME_FALSE,lf[350],C_SCHEME_FALSE);}

/* k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in ... */
static void C_ccall f_2883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:774: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[483],C_fix(11),C_fix(3),lf[309],C_SCHEME_FALSE);}

/* k1877 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1879,2,t0,t1);}
t2=C_eqp(lf[46],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1857,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:393: g295 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
f_1733(2,t3,C_SCHEME_FALSE);}}

/* f_2032 in k2068 in k2080 in k2088 in k1908 in rewrite-apply in k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_2032(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2032,3,t0,t1,t2);}
/* tweaks.scm:51: ##sys#get */
t3=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[56]);}

/* k4188 in k4201 in k4209 in k4154 in k4123 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4158(t2,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[3])));}

/* k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in ... */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:773: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[484],C_fix(11),C_fix(3),lf[309],C_SCHEME_TRUE);}

/* f_4256 in k4285 in k4277 in k4293 in k4301 */
static void C_ccall f_4256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4256,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in ... */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:759: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[505],C_fix(2),C_fix(2),lf[506],C_SCHEME_TRUE);}

/* k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in ... */
static void C_ccall f_2859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:760: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[503],C_fix(2),C_fix(2),lf[504],C_SCHEME_TRUE);}

/* k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in ... */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:757: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[509],C_fix(2),C_fix(2),lf[510],C_SCHEME_TRUE);}

/* f_1840 in k1869 in k1861 in k1877 in k1885 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1840,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in ... */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:758: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[507],C_fix(2),C_fix(2),lf[508],C_SCHEME_TRUE);}

/* f_2206 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2206,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2202 in k2210 */
static void C_ccall f_2204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
/* c-platform.scm:480: get */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,lf[63]);}

/* f_4197 in k4209 in k4154 in k4123 */
static void C_ccall f_4197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4197,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_3918 in k3909 in k3962 in k3970 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3918,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in k2816 in k2814 in k2812 in k2810 in k2808 in ... */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:756: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[511],C_fix(2),C_fix(2),lf[512],C_SCHEME_TRUE);}

/* f_4226 in k4238 in k4123 */
static void C_ccall f_4226(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4226,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k1814 in k1822 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(t1);
t3=C_i_flonump(t2);
t4=((C_word*)t0)[2];
f_1741(t4,C_i_not(t3));}

/* f_1818 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1818,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in ... */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:765: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[442],C_fix(9),lf[495],lf[496],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in ... */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:766: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[440],C_fix(9),lf[493],lf[494],C_SCHEME_TRUE,C_SCHEME_FALSE);}

/* f_4397 */
static void C_ccall f_4397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4397,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in ... */
static void C_ccall f_2863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:762: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[499],C_fix(2),C_fix(2),lf[500],C_SCHEME_TRUE);}

/* k4394 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4396,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4382,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4388,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:354: g226 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_4349(t3,C_SCHEME_FALSE);}}

/* k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in ... */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:764: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[444],C_fix(9),lf[497],lf[498],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* f_1810 in k1822 in k1732 in eqv?-id in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1810,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_4390 */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4390,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in k2846 in k2844 in k2842 in k2840 in k2838 in k2836 in k2834 in k2832 in k2830 in k2828 in k2826 in k2824 in k2822 in k2820 in k2818 in ... */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:761: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[501],C_fix(2),C_fix(3),lf[502],C_SCHEME_TRUE);}

/* k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in ... */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:612: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[758],C_fix(2),C_fix(1),lf[759],C_SCHEME_TRUE);}

/* k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in ... */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:611: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[760],C_fix(2),C_fix(1),lf[761],C_SCHEME_TRUE);}

/* k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in ... */
static void C_ccall f_2589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:614: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[754],C_fix(2),C_fix(1),lf[755],C_SCHEME_TRUE);}

/* k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in ... */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2589,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:613: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[756],C_fix(2),C_fix(1),lf[757],C_SCHEME_TRUE);}

/* k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in ... */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:610: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[762],C_fix(2),C_fix(1),lf[763],C_SCHEME_TRUE);}

/* f_4382 in k4394 */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4382,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in ... */
static void C_ccall f_2895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:781: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[472],C_fix(11),C_fix(3),lf[309],C_SCHEME_FALSE);}

/* k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in ... */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:782: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[472],C_fix(2),C_fix(3),lf[473],C_SCHEME_TRUE);}

/* k2898 in k2896 in k2894 in k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in ... */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:784: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[468],C_fix(12),lf[471],C_SCHEME_TRUE,C_fix(2));}

/* k4386 in k4394 */
static void C_ccall f_4388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
f_4349(t3,C_eqp(C_fix(2),t2));}

/* k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in ... */
static void C_ccall f_2595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:617: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[748],C_fix(2),C_fix(1),lf[749],C_SCHEME_TRUE);}

/* k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in ... */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:616: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[750],C_fix(2),C_fix(1),lf[751],C_SCHEME_FALSE);}

/* k2598 in k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in ... */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:619: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[744],C_fix(2),C_fix(1),lf[745],C_SCHEME_TRUE);}

/* k2596 in k2594 in k2592 in k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in ... */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:618: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[746],C_fix(2),C_fix(1),lf[747],C_SCHEME_TRUE);}

/* k2590 in k2588 in k2586 in k2584 in k2582 in k2580 in k2578 in k2576 in k2574 in k2572 in k2570 in k2568 in k2566 in k2564 in k2562 in k2560 in k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in ... */
static void C_ccall f_2591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2591,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:615: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[752],C_fix(2),C_fix(1),lf[753],C_SCHEME_FALSE);}

/* k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in k2848 in ... */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:778: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[476],C_fix(11),C_fix(1),lf[477],C_SCHEME_TRUE);}

/* k2892 in k2890 in k2888 in k2886 in k2884 in k2882 in k2880 in k2878 in k2876 in k2874 in k2872 in k2870 in k2868 in k2866 in k2864 in k2862 in k2860 in k2858 in k2856 in k2854 in k2852 in k2850 in ... */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:779: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[474],C_fix(11),C_fix(1),lf[475],C_SCHEME_TRUE);}

/* k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in ... */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1031: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[140],C_fix(7),C_fix(1),lf[141],C_fix(1),C_SCHEME_FALSE);}

/* k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in ... */
static void C_ccall f_3221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3223,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1030: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[142],C_fix(7),C_fix(1),lf[143],C_fix(1),C_SCHEME_FALSE);}

/* k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in ... */
static void C_ccall f_3227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3227,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1033: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[136],C_fix(7),C_fix(1),lf[137],C_fix(1),C_SCHEME_FALSE);}

/* k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in ... */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1032: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[138],C_fix(7),C_fix(1),lf[139],C_fix(1),C_SCHEME_FALSE);}

/* k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in ... */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1034: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[134],C_fix(7),C_fix(1),lf[135],C_fix(1),C_SCHEME_FALSE);}

/* k4697 */
static void C_ccall f_4698(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4698,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4705,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4720,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:260: qnode */
t5=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(0));}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4727,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=t1;
t6=C_u_i_car(t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[2],t6);
/* c-platform.scm:262: g101 */
t8=t3;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,((C_word*)t0)[3],lf[37],t4,t7);}
else{
t3=C_eqp(*((C_word*)lf[39]+1),lf[38]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4748,tmp=(C_word)a,a+=2,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4765,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:268: fold-inner */
t8=*((C_word*)lf[926]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t1);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}}

/* f_4695 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_4695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4695,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4698,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4824,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:255: remove */
t8=*((C_word*)lf[927]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t5);}

/* k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in ... */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1024: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[153],C_fix(17),C_fix(1),lf[154]);}

/* k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in ... */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:594: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[794],C_fix(2),C_fix(1),lf[795],C_SCHEME_TRUE);}

/* k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in ... */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1025: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[151],C_fix(17),C_fix(1),lf[152]);}

/* k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in ... */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:593: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[796],C_fix(2),C_fix(1),lf[797],C_SCHEME_TRUE);}

/* k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in ... */
static void C_ccall f_3215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3217,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1026: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[148],C_fix(17),C_fix(1),lf[149],lf[150]);}

/* k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in ... */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:592: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[798],C_fix(2),C_fix(2),lf[799],C_SCHEME_TRUE);}

/* k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in ... */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1028: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[146],C_fix(7),C_fix(1),lf[147],C_fix(1),C_SCHEME_FALSE);}

/* k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in ... */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:591: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[798],C_fix(2),C_fix(2),lf[800],C_SCHEME_FALSE);}

/* k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in ... */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3221,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1029: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[144],C_fix(7),C_fix(1),lf[145],C_fix(1),C_SCHEME_FALSE);}

/* k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in k2506 in k2504 in k2502 in k2500 in k2498 in ... */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:589: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[801],C_fix(1),C_fix(2),lf[802]);}

/* k2558 in k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in ... */
static void C_ccall f_2559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:599: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[784],C_fix(2),C_fix(1),lf[785],C_SCHEME_TRUE);}

/* k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in ... */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3203,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1018: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[163],C_fix(2),C_fix(1),lf[164],C_SCHEME_FALSE);}

/* k2556 in k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in ... */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:598: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[786],C_fix(2),C_fix(1),lf[787],C_SCHEME_TRUE);}

/* k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in ... */
static void C_ccall f_3203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1019: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[161],C_fix(2),C_fix(1),lf[162],C_SCHEME_FALSE);}

/* k2554 in k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in ... */
static void C_ccall f_2555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2557,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:597: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[788],C_fix(2),C_fix(1),lf[789],C_SCHEME_TRUE);}

/* k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in ... */
static void C_ccall f_3205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1020: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[159],C_fix(2),C_fix(1),lf[160],C_SCHEME_FALSE);}

/* k2552 in k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in ... */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:596: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[790],C_fix(2),C_fix(1),lf[791],C_SCHEME_TRUE);}

/* k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in ... */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1021: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[157],C_fix(2),C_fix(1),lf[158],C_SCHEME_FALSE);}

/* k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in ... */
static void C_ccall f_3209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3211,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1022: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[155],C_fix(2),C_fix(1),lf[156],C_SCHEME_FALSE);}

/* f_3985 */
static void C_ccall f_3985(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3985,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_3999 */
static void C_ccall f_3999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3999,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_4676 */
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4676,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k2550 in k2548 in k2546 in k2544 in k2542 in k2540 in k2538 in k2536 in k2534 in k2532 in k2530 in k2528 in k2526 in k2524 in k2522 in k2520 in k2518 in k2516 in k2514 in k2512 in k2510 in k2508 in ... */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:595: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[792],C_fix(2),C_fix(1),lf[793],C_SCHEME_TRUE);}

/* k4672 in k4680 */
static void C_ccall f_4674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_zerop(t2));}

/* k4680 */
static void C_ccall f_4682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4682,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4668,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4674,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:299: g154 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k3266 in k3340 in k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in ... */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3268,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_cdr(t3);
if(C_truep(C_i_pairp(t4))){
t5=t2;
f_3270(2,t5,C_i_cadr(((C_word*)t0)[6]));}
else{
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3326,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:1051: g731 */
t6=t5;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,lf[78],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3253 in k3348 in rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in ... */
static void C_ccall f_3254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3336,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3342,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1046: g725 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in ... */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3235,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:1063: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[131],C_fix(8),t2);}

/* k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in ... */
static void C_ccall f_3231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1035: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[132],C_fix(7),C_fix(1),lf[133],C_fix(1),C_SCHEME_FALSE);}

/* rewrite-make-vector in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in k3198 in k3196 in k3194 in k3192 in ... */
static void C_ccall f_3235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3235,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
if(C_truep(C_i_pairp(t5))){
t7=t5;
t8=C_u_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3344,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3350,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1044: g720 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t8);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* f_4613 in k4651 */
static void C_ccall f_4613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4613,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4627 in k4651 */
static void C_ccall f_4628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4628,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:303: g159 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k1673 */
static void C_ccall f_1674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1674,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:372: g258 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* f_1678 */
static void C_ccall f_1678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1678,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4651 */
static void C_ccall f_4652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4652,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_eqp(*((C_word*)lf[39]+1),lf[38]);
if(C_truep(t3)){
t4=C_u_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4613,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4628,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4630,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:307: fold-inner */
t9=*((C_word*)lf[926]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t2);}
else{
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* f_4654 */
static void C_ccall f_4654(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4654,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4676,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4682,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:298: g151 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in ... */
static void C_ccall f_3021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:874: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[363],C_fix(16),C_fix(2),lf[364],C_SCHEME_TRUE,C_fix(3));}

/* k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in ... */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3025,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:875: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[361],C_fix(16),C_fix(2),lf[362],C_SCHEME_TRUE,C_fix(3));}

/* k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in ... */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:876: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[358],C_fix(16),C_SCHEME_FALSE,lf[359],C_SCHEME_TRUE,lf[360],C_SCHEME_TRUE);}

/* f_1616 in k1613 in k1591 in k1589 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1616,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1618,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:231: g60 */
t4=t3;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,lf[35],C_SCHEME_TRUE);}

/* f_4668 in k4680 */
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4668,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in ... */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:877: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[355],C_fix(16),C_SCHEME_FALSE,lf[356],C_SCHEME_TRUE,lf[357]);}

/* k1613 in k1591 in k1589 */
static void C_ccall f_1615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1615,2,t0,t1);}
t2=C_mutate((C_word*)lf[33]+1 /* (set! ##compiler#foldable-bindings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1616,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4854,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4854(t8,t4,lf[936]);}

/* k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in ... */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:878: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[61],C_fix(16),C_SCHEME_FALSE,lf[354],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* f_1618 */
static void C_ccall f_1618(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_1618r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1618r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1618r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[34]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* f_4630 in k4651 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4630,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4632,tmp=(C_word)a,a+=2,tmp);
t5=(C_truep(*((C_word*)lf[40]+1))?lf[930]:lf[931]);
t6=C_a_i_list2(&a,2,t2,t3);
/* c-platform.scm:309: g166 */
t7=t4;
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,lf[41],t5,t6);}

/* f_4632 */
static void C_ccall f_4632(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4632,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k1589 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1591 in k1589 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1592,2,t0,t1);}
t2=C_set_block_item(lf[0] /* ##compiler#default-optimization-passes */,0,C_fix(3));
t3=C_mutate((C_word*)lf[1]+1 /* (set! ##compiler#default-declarations ...) */,lf[2]);
t4=C_mutate((C_word*)lf[3]+1 /* (set! ##compiler#default-debugging-declarations ...) */,lf[4]);
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##compiler#default-profiling-declarations ...) */,lf[6]);
t6=C_mutate((C_word*)lf[7]+1 /* (set! ##compiler#units-used-by-default ...) */,lf[8]);
t7=C_set_block_item(lf[9] /* ##compiler#words-per-flonum */,0,C_fix(4));
t8=C_set_block_item(lf[10] /* ##compiler#parameter-limit */,0,C_fix(1024));
t9=C_set_block_item(lf[11] /* small-parameter-limit */,0,C_fix(128));
t10=C_mutate((C_word*)lf[12]+1 /* (set! ##compiler#unlikely-variables ...) */,lf[13]);
t11=C_mutate((C_word*)lf[14]+1 /* (set! ##compiler#eq-inline-operator ...) */,lf[15]);
t12=C_mutate((C_word*)lf[16]+1 /* (set! ##compiler#membership-test-operators ...) */,lf[17]);
t13=C_set_block_item(lf[18] /* ##compiler#membership-unfold-limit */,0,C_fix(20));
t14=C_mutate((C_word*)lf[19]+1 /* (set! ##compiler#target-include-file ...) */,lf[20]);
t15=C_mutate((C_word*)lf[21]+1 /* (set! ##compiler#valid-compiler-options ...) */,lf[22]);
t16=C_mutate((C_word*)lf[23]+1 /* (set! ##compiler#valid-compiler-options-with-argument ...) */,lf[24]);
t17=C_mutate((C_word*)lf[25]+1 /* (set! ##compiler#default-standard-bindings ...) */,lf[26]);
t18=C_mutate((C_word*)lf[27]+1 /* (set! ##compiler#default-extended-bindings ...) */,lf[28]);
t19=C_mutate((C_word*)lf[29]+1 /* (set! ##compiler#internal-bindings ...) */,lf[30]);
t20=C_mutate((C_word*)lf[31]+1 /* (set! ##compiler#non-foldable-bindings ...) */,lf[32]);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4875,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:227: lset-union */
t23=*((C_word*)lf[938]+1);
((C_proc5)(void*)(*((C_word*)t23+1)))(5,t23,t22,*((C_word*)lf[807]+1),*((C_word*)lf[25]+1),*((C_word*)lf[27]+1));}

/* k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in ... */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:847: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[380],C_fix(16),C_fix(2),lf[381],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in ... */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:846: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[382],C_fix(16),C_fix(1),lf[383],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in ... */
static void C_ccall f_3007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:849: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[376],C_fix(16),C_fix(1),lf[377],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in ... */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:848: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[378],C_fix(16),C_fix(1),lf[379],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1637,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:244: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[448],C_fix(19),C_fix(0),lf[934],lf[935],C_SCHEME_FALSE);}

/* k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4695,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:246: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[452],C_fix(8),t3);}

/* k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in ... */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:850: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[374],C_fix(16),C_fix(1),lf[375],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* f_4481 in k4465 */
static void C_ccall f_4481(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4481,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4479 in k4465 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:337: g201 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[41],lf[924],t2);}

/* k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in ... */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:879: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[352],C_fix(16),C_SCHEME_FALSE,lf[353],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in ... */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:880: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[350],C_fix(16),C_SCHEME_FALSE,lf[351],C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in ... */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:881: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[348],C_fix(16),C_SCHEME_FALSE,lf[349],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in ... */
static void C_ccall f_3037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:882: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[346],C_fix(16),C_fix(1),lf[347],C_SCHEME_FALSE,C_fix(2));}

/* k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in ... */
static void C_ccall f_3039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:883: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[344],C_fix(16),C_fix(1),lf[345],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in ... */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:896: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[320],C_fix(2),C_fix(2),lf[321],C_SCHEME_FALSE);}

/* k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in ... */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:897: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[318],C_fix(2),C_fix(2),lf[319],C_SCHEME_FALSE);}

/* k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in ... */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:895: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[322],C_fix(2),C_fix(2),lf[323],C_SCHEME_FALSE);}

/* k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in ... */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:899: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[316],C_fix(16),C_fix(1),lf[317],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in ... */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:900: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[314],C_fix(16),C_fix(1),lf[315],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in ... */
static void C_ccall f_3013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:852: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[367],C_fix(16),C_fix(1),lf[371],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in ... */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3013,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:851: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[372],C_fix(16),C_fix(1),lf[373],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in ... */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:854: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[367],C_fix(16),C_fix(1),lf[368],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in ... */
static void C_ccall f_3015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:853: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[369],C_fix(16),C_fix(1),lf[370],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in ... */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4045,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:856: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[366],C_fix(8),t3);}

/* k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:403: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[801],C_fix(8),((C_word*)t0)[3]);}

/* k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4112,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:405: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[911],C_fix(8),t3);}

/* k1897 in k1894 in k1892 in k1716 in k1714 in k1646 in k1644 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1900,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2092,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:460: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[908],C_fix(8),t2);}

/* k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in ... */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:887: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[338],C_fix(2),C_fix(1),lf[339],C_SCHEME_FALSE);}

/* k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in ... */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:886: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[340],C_fix(2),C_fix(1),lf[341],C_SCHEME_FALSE);}

/* k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in k3002 in k3000 in k2998 in ... */
static void C_ccall f_3041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:884: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[342],C_fix(16),C_fix(2),lf[343],C_SCHEME_FALSE,C_fix(2));}

/* k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in ... */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:889: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[334],C_fix(2),C_fix(1),lf[335],C_SCHEME_FALSE);}

/* k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in k3026 in k3024 in k3022 in k3020 in k3018 in k3016 in k3014 in k3012 in k3010 in k3008 in k3006 in k3004 in ... */
static void C_ccall f_3047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:888: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[336],C_fix(2),C_fix(1),lf[337],C_SCHEME_FALSE);}

/* k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in ... */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:902: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[310],C_fix(16),C_fix(1),lf[311],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in ... */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3978,tmp=(C_word)a,a+=2,tmp);
/* c-platform.scm:904: rewrite */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[309],C_fix(8),t3);}

/* k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in k3032 in k3030 in k3028 in ... */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:901: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[312],C_fix(16),C_fix(1),lf[313],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in k3034 in ... */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:922: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[303],C_fix(17),C_fix(2),lf[304],lf[305]);}

/* k3078 in k3076 in k3074 in k3072 in k3070 in k3068 in k3066 in k3064 in k3062 in k3060 in k3058 in k3056 in k3054 in k3052 in k3050 in k3048 in k3046 in k3044 in k3042 in k3040 in k3038 in k3036 in ... */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:923: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[300],C_fix(17),C_fix(2),lf[301],lf[302]);}

/* f_4411 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4411,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k4415 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:361: cons* */
t2=*((C_word*)lf[47]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in ... */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3151,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:986: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[217],C_fix(17),C_fix(2),lf[218]);}

/* k3146 in k3144 in k3142 in k3140 in k3138 in k3136 in k3134 in k3132 in k3130 in k3128 in k3126 in k3124 in k3122 in k3120 in k3118 in k3116 in k3114 in k3112 in k3110 in k3108 in k3106 in k3104 in ... */
static void C_ccall f_3147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:985: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[219],C_fix(17),C_fix(1),lf[220]);}

/* f_4423 in k1642 in k1640 in k1638 in k1635 in k1613 in k1591 in k1589 */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4423,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
if(C_truep(C_fixnum_greater_or_equal_p(t6,C_fix(2)))){
t7=C_i_car(t5);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4524,a[2]=t7,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4526,tmp=(C_word)a,a+=2,tmp);
t10=t5;
t11=C_u_i_cdr(t10);
/* c-platform.scm:323: remove */
t12=*((C_word*)lf[927]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t8,t9,t11);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* f_4805 in k4817 */
static void C_ccall f_4805(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4805,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in ... */
static void C_ccall f_3191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1012: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[173],C_fix(2),C_fix(3),lf[174],C_SCHEME_FALSE);}

/* k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in ... */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3197,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1015: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[169],C_fix(2),C_fix(1),lf[170],C_SCHEME_FALSE);}

/* k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in ... */
static void C_ccall f_3193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1013: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[171],C_fix(2),C_fix(3),lf[172],C_SCHEME_FALSE);}

/* k4850 */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4852,2,t0,t1);}
t2=C_eqp(lf[45],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4838,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:258: g90 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* for-each-loop44 in k1613 in k1591 in k1589 */
static void C_fcall f_4854(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4854,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4863,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* c-platform.scm:230: g45 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4408 */
static void C_ccall f_4409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:359: g239 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],((C_word*)t0)[4],t1);}

/* k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in k3138 in ... */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1007: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[183],C_fix(2),C_fix(3),lf[184],C_SCHEME_FALSE);}

/* k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in ... */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1009: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[179],C_fix(2),C_fix(3),lf[180],C_SCHEME_FALSE);}

/* k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in k3142 in k3140 in ... */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1008: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[181],C_fix(2),C_fix(3),lf[182],C_SCHEME_FALSE);}

/* k3198 in k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in ... */
static void C_ccall f_3199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1017: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[165],C_fix(2),C_fix(1),lf[166],C_SCHEME_FALSE);}

/* k3196 in k3194 in k3192 in k3190 in k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in ... */
static void C_ccall f_3197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3199,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1016: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[167],C_fix(2),C_fix(1),lf[168],C_SCHEME_FALSE);}

/* k4458 in k4523 */
static void C_ccall f_4459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4459,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:330: g187 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k3188 in k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in ... */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3191,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1011: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[175],C_fix(2),C_fix(3),lf[176],C_SCHEME_FALSE);}

/* f_4838 in k4850 */
static void C_ccall f_4838(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4838,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k3186 in k3184 in k3182 in k3180 in k3178 in k3176 in k3174 in k3172 in k3170 in k3168 in k3166 in k3164 in k3162 in k3160 in k3158 in k3156 in k3154 in k3152 in k3150 in k3148 in k3146 in k3144 in ... */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:1010: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[177],C_fix(2),C_fix(3),lf[178],C_SCHEME_FALSE);}

/* f_4461 in k4523 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4461,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4467,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4509,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4515,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:336: g195 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}

/* k4465 */
static void C_fcall f_4467(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4467,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4468,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:337: qnode */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(1));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4481,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
/* c-platform.scm:338: g206 */
t4=t2;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[41],lf[925],t3);}}

/* f_4468 in k4465 */
static void C_ccall f_4468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4468,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_4846 */
static void C_ccall f_4846(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4846,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k4842 in k4850 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(1),t2));}

/* k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in ... */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2989,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:839: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[396],C_fix(16),C_fix(1),lf[397],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in ... */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:840: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[394],C_fix(16),C_fix(1),lf[395],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in ... */
static void C_ccall f_2983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:836: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[400],C_fix(15),lf[399],lf[38],lf[369],C_SCHEME_FALSE);}

/* k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in ... */
static void C_ccall f_2985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:837: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[398],C_fix(15),lf[399],lf[38],lf[372],C_SCHEME_FALSE);}

/* f_3695 in k3507 in k3505 in k3503 in k3501 in k3499 in k3497 in k3495 in k3491 in k3489 in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in ... */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3695,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3704,tmp=(C_word)a,a+=2,tmp);
t10=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3719,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3722,a[2]=t11,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3757,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3763,a[2]=t12,a[3]=t2,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* c-platform.scm:1148: g831 */
t15=t13;
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in ... */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:835: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[401],C_fix(15),lf[399],lf[38],lf[402],C_SCHEME_FALSE);}

/* k3678 */
static void C_ccall f_3680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3680,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* c-platform.scm:1159: g847 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[37],((C_word*)t0)[5],t2);}

/* k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in ... */
static void C_ccall f_2997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:844: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[386],C_fix(16),C_fix(1),lf[387],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in ... */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:843: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[388],C_fix(16),C_fix(1),lf[389],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2998 in k2996 in k2994 in k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in ... */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:845: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[384],C_fix(16),C_fix(2),lf[385],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* f_4444 in k4523 */
static void C_ccall f_4444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4444,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* k2992 in k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in ... */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:842: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[390],C_fix(16),C_fix(1),lf[391],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* k2990 in k2988 in k2986 in k2984 in k2982 in k2980 in k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in ... */
static void C_ccall f_2991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:841: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[392],C_fix(16),C_fix(1),lf[393],C_SCHEME_FALSE,*((C_word*)lf[9]+1));}

/* rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in k3208 in k3206 in k3204 in k3202 in k3200 in ... */
static void C_ccall f_3361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3361,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3478,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3484,a[2]=t8,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-platform.scm:1074: g762 */
t11=t9;
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* f_3674 */
static void C_ccall f_3674(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3674,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[36],t2,t3,t4));}

/* f_4824 */
static void C_ccall f_4824(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4824,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4846,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4852,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-platform.scm:257: g87 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in ... */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:826: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[407],C_fix(14),lf[38],C_fix(1),lf[416],lf[417]);}

/* k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in ... */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:825: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[410],C_fix(14),lf[38],C_fix(1),lf[418],lf[419]);}

/* k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in ... */
static void C_ccall f_2965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:823: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[420],C_fix(13),lf[421],C_SCHEME_TRUE);}

/* k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in ... */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:822: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[422],C_fix(13),lf[423],C_SCHEME_TRUE);}

/* k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in k2926 in k2924 in k2922 in k2920 in k2918 in ... */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2961,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:821: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[424],C_fix(13),lf[425],C_SCHEME_TRUE);}

/* f_3394 in k3455 in k3463 in k3377 in k3482 in rewrite-call/cc in k3358 in k3356 in k3353 in k3351 in k3232 in k3230 in k3228 in k3226 in k3224 in k3222 in k3220 in k3218 in k3216 in k3214 in k3212 in k3210 in ... */
static void C_ccall f_3394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3394,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nequalp(t3,C_fix(2)))){
t5=(C_truep(t4)?t4:C_i_cadr(((C_word*)t0)[2]));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3409,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* c-platform.scm:1083: get */
t7=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[5],t5,lf[81]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in ... */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:832: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[405],C_fix(2),C_fix(1),lf[406],C_SCHEME_TRUE);}

/* k4874 in k1591 in k1589 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-platform.scm:225: lset-difference */
t2=*((C_word*)lf[937]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],*((C_word*)lf[807]+1),t1,*((C_word*)lf[31]+1));}

/* k2978 in k2976 in k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in ... */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:833: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[403],C_fix(2),C_fix(1),lf[404],C_SCHEME_TRUE);}

/* k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in ... */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:829: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[410],C_fix(17),C_fix(1),lf[411],lf[412]);}

/* k2974 in k2972 in k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in ... */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:830: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[407],C_fix(17),C_fix(1),lf[408],lf[409]);}

/* k2970 in k2968 in k2966 in k2964 in k2962 in k2960 in k2958 in k2956 in k2954 in k2952 in k2950 in k2948 in k2946 in k2944 in k2942 in k2940 in k2938 in k2936 in k2934 in k2932 in k2930 in k2928 in ... */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-platform.scm:827: rewrite */
t3=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t3+1)))(8,t3,t2,lf[413],C_fix(14),lf[38],C_fix(2),lf[414],lf[415]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[756] = {
{"f_2943:c_2dplatform_2escm",(void*)f_2943},
{"f_2945:c_2dplatform_2escm",(void*)f_2945},
{"f_2947:c_2dplatform_2escm",(void*)f_2947},
{"f_2949:c_2dplatform_2escm",(void*)f_2949},
{"f_2941:c_2dplatform_2escm",(void*)f_2941},
{"f_2959:c_2dplatform_2escm",(void*)f_2959},
{"f_2957:c_2dplatform_2escm",(void*)f_2957},
{"f_2955:c_2dplatform_2escm",(void*)f_2955},
{"f_2953:c_2dplatform_2escm",(void*)f_2953},
{"f_2951:c_2dplatform_2escm",(void*)f_2951},
{"f_4863:c_2dplatform_2escm",(void*)f_4863},
{"f_2925:c_2dplatform_2escm",(void*)f_2925},
{"f_2923:c_2dplatform_2escm",(void*)f_2923},
{"f_2929:c_2dplatform_2escm",(void*)f_2929},
{"f_2927:c_2dplatform_2escm",(void*)f_2927},
{"f_2921:c_2dplatform_2escm",(void*)f_2921},
{"f_3624:c_2dplatform_2escm",(void*)f_3624},
{"f_2933:c_2dplatform_2escm",(void*)f_2933},
{"f_3629:c_2dplatform_2escm",(void*)f_3629},
{"f_2935:c_2dplatform_2escm",(void*)f_2935},
{"f_2937:c_2dplatform_2escm",(void*)f_2937},
{"f_2939:c_2dplatform_2escm",(void*)f_2939},
{"f_2931:c_2dplatform_2escm",(void*)f_2931},
{"f_2909:c_2dplatform_2escm",(void*)f_2909},
{"f_2905:c_2dplatform_2escm",(void*)f_2905},
{"f_2907:c_2dplatform_2escm",(void*)f_2907},
{"f_3618:c_2dplatform_2escm",(void*)f_3618},
{"f_2901:c_2dplatform_2escm",(void*)f_2901},
{"f_2903:c_2dplatform_2escm",(void*)f_2903},
{"f_4813:c_2dplatform_2escm",(void*)f_4813},
{"f_3604:c_2dplatform_2escm",(void*)f_3604},
{"f_4819:c_2dplatform_2escm",(void*)f_4819},
{"f_4811:c_2dplatform_2escm",(void*)f_4811},
{"f_2915:c_2dplatform_2escm",(void*)f_2915},
{"f_2913:c_2dplatform_2escm",(void*)f_2913},
{"f_2919:c_2dplatform_2escm",(void*)f_2919},
{"f_2917:c_2dplatform_2escm",(void*)f_2917},
{"f_2911:c_2dplatform_2escm",(void*)f_2911},
{"f_3660:c_2dplatform_2escm",(void*)f_3660},
{"f_3653:c_2dplatform_2escm",(void*)f_3653},
{"f_3493:c_2dplatform_2escm",(void*)f_3493},
{"f_3490:c_2dplatform_2escm",(void*)f_3490},
{"f_3496:c_2dplatform_2escm",(void*)f_3496},
{"f_3498:c_2dplatform_2escm",(void*)f_3498},
{"f_3635:c_2dplatform_2escm",(void*)f_3635},
{"f_3484:c_2dplatform_2escm",(void*)f_3484},
{"f_3470:c_2dplatform_2escm",(void*)f_3470},
{"f_3478:c_2dplatform_2escm",(void*)f_3478},
{"f_3476:c_2dplatform_2escm",(void*)f_3476},
{"f_3422:c_2dplatform_2escm",(void*)f_3422},
{"f_3421:c_2dplatform_2escm",(void*)f_3421},
{"f_2379:c_2dplatform_2escm",(void*)f_2379},
{"f_2373:c_2dplatform_2escm",(void*)f_2373},
{"f_3415:c_2dplatform_2escm",(void*)f_3415},
{"f_2348:c_2dplatform_2escm",(void*)f_2348},
{"f_2709:c_2dplatform_2escm",(void*)f_2709},
{"f_2707:c_2dplatform_2escm",(void*)f_2707},
{"f_2705:c_2dplatform_2escm",(void*)f_2705},
{"f_2703:c_2dplatform_2escm",(void*)f_2703},
{"f_3816:c_2dplatform_2escm",(void*)f_3816},
{"f_2701:c_2dplatform_2escm",(void*)f_2701},
{"f_2198:c_2dplatform_2escm",(void*)f_2198},
{"f_2193:c_2dplatform_2escm",(void*)f_2193},
{"f_3409:c_2dplatform_2escm",(void*)f_3409},
{"f_2342:c_2dplatform_2escm",(void*)f_2342},
{"f_3841:c_2dplatform_2escm",(void*)f_3841},
{"f_2356:c_2dplatform_2escm",(void*)f_2356},
{"f_2350:c_2dplatform_2escm",(void*)f_2350},
{"f_2327:c_2dplatform_2escm",(void*)f_2327},
{"f_2325:c_2dplatform_2escm",(void*)f_2325},
{"f_2328:c_2dplatform_2escm",(void*)f_2328},
{"f_3465:c_2dplatform_2escm",(void*)f_3465},
{"f_2172:c_2dplatform_2escm",(void*)f_2172},
{"f_2323:c_2dplatform_2escm",(void*)f_2323},
{"f_3821:c_2dplatform_2escm",(void*)f_3821},
{"f_4124:c_2dplatform_2escm",(void*)f_4124},
{"f_4129:c_2dplatform_2escm",(void*)f_4129},
{"f_2735:c_2dplatform_2escm",(void*)f_2735},
{"f_2733:c_2dplatform_2escm",(void*)f_2733},
{"f_2739:c_2dplatform_2escm",(void*)f_2739},
{"f_2737:c_2dplatform_2escm",(void*)f_2737},
{"f_3829:c_2dplatform_2escm",(void*)f_3829},
{"f_3827:c_2dplatform_2escm",(void*)f_3827},
{"f_3451:c_2dplatform_2escm",(void*)f_3451},
{"f_2731:c_2dplatform_2escm",(void*)f_2731},
{"f_3457:c_2dplatform_2escm",(void*)f_3457},
{"f_4287:c_2dplatform_2escm",(void*)f_4287},
{"f_3459:c_2dplatform_2escm",(void*)f_3459},
{"f_4289:c_2dplatform_2escm",(void*)f_4289},
{"f_2493:c_2dplatform_2escm",(void*)f_2493},
{"f_2495:c_2dplatform_2escm",(void*)f_2495},
{"f_2497:c_2dplatform_2escm",(void*)f_2497},
{"f_2499:c_2dplatform_2escm",(void*)f_2499},
{"f_4281:c_2dplatform_2escm",(void*)f_4281},
{"f_2491:c_2dplatform_2escm",(void*)f_2491},
{"f_4133:c_2dplatform_2escm",(void*)f_4133},
{"f_3850:c_2dplatform_2escm",(void*)f_3850},
{"f_2745:c_2dplatform_2escm",(void*)f_2745},
{"f_2743:c_2dplatform_2escm",(void*)f_2743},
{"f_2749:c_2dplatform_2escm",(void*)f_2749},
{"f_2747:c_2dplatform_2escm",(void*)f_2747},
{"f_2159:c_2dplatform_2escm",(void*)f_2159},
{"f_2741:c_2dplatform_2escm",(void*)f_2741},
{"f_4295:c_2dplatform_2escm",(void*)f_4295},
{"f_4297:c_2dplatform_2escm",(void*)f_4297},
{"f_2152:c_2dplatform_2escm",(void*)f_2152},
{"f_2713:c_2dplatform_2escm",(void*)f_2713},
{"f_2715:c_2dplatform_2escm",(void*)f_2715},
{"f_2717:c_2dplatform_2escm",(void*)f_2717},
{"f_2719:c_2dplatform_2escm",(void*)f_2719},
{"f_2479:c_2dplatform_2escm",(void*)f_2479},
{"f_2711:c_2dplatform_2escm",(void*)f_2711},
{"f_3437:c_2dplatform_2escm",(void*)f_3437},
{"f_2477:c_2dplatform_2escm",(void*)f_2477},
{"f_2475:c_2dplatform_2escm",(void*)f_2475},
{"f_2473:c_2dplatform_2escm",(void*)f_2473},
{"f_2471:c_2dplatform_2escm",(void*)f_2471},
{"f_4112:c_2dplatform_2escm",(void*)f_4112},
{"f_2723:c_2dplatform_2escm",(void*)f_2723},
{"f_2725:c_2dplatform_2escm",(void*)f_2725},
{"f_2137:c_2dplatform_2escm",(void*)f_2137},
{"f_2136:c_2dplatform_2escm",(void*)f_2136},
{"f_2727:c_2dplatform_2escm",(void*)f_2727},
{"f_2729:c_2dplatform_2escm",(void*)f_2729},
{"f_3835:c_2dplatform_2escm",(void*)f_3835},
{"f_2721:c_2dplatform_2escm",(void*)f_2721},
{"f_2483:c_2dplatform_2escm",(void*)f_2483},
{"f_2485:c_2dplatform_2escm",(void*)f_2485},
{"f_2487:c_2dplatform_2escm",(void*)f_2487},
{"f_2489:c_2dplatform_2escm",(void*)f_2489},
{"f_2133:c_2dplatform_2escm",(void*)f_2133},
{"f_4310:c_2dplatform_2escm",(void*)f_4310},
{"f_4313:c_2dplatform_2escm",(void*)f_4313},
{"f_2481:c_2dplatform_2escm",(void*)f_2481},
{"f_4315:c_2dplatform_2escm",(void*)f_4315},
{"f_2779:c_2dplatform_2escm",(void*)f_2779},
{"f_2777:c_2dplatform_2escm",(void*)f_2777},
{"f_3865:c_2dplatform_2escm",(void*)f_3865},
{"f_2775:c_2dplatform_2escm",(void*)f_2775},
{"f_3868:c_2dplatform_2escm",(void*)f_3868},
{"f_2773:c_2dplatform_2escm",(void*)f_2773},
{"f_2103:c_2dplatform_2escm",(void*)f_2103},
{"f_2771:c_2dplatform_2escm",(void*)f_2771},
{"f_1972:c_2dplatform_2escm",(void*)f_1972},
{"f_4328:c_2dplatform_2escm",(void*)f_4328},
{"f_1977:c_2dplatform_2escm",(void*)f_1977},
{"f_4179:c_2dplatform_2escm",(void*)f_4179},
{"f_4173:c_2dplatform_2escm",(void*)f_4173},
{"f_2789:c_2dplatform_2escm",(void*)f_2789},
{"f_2787:c_2dplatform_2escm",(void*)f_2787},
{"f_2785:c_2dplatform_2escm",(void*)f_2785},
{"f_2783:c_2dplatform_2escm",(void*)f_2783},
{"f_2118:c_2dplatform_2escm",(void*)f_2118},
{"f_2114:c_2dplatform_2escm",(void*)f_2114},
{"f_2781:c_2dplatform_2escm",(void*)f_2781},
{"f_2507:c_2dplatform_2escm",(void*)f_2507},
{"f_2505:c_2dplatform_2escm",(void*)f_2505},
{"f_1983:c_2dplatform_2escm",(void*)f_1983},
{"f_2509:c_2dplatform_2escm",(void*)f_2509},
{"f_1986:c_2dplatform_2escm",(void*)f_1986},
{"f_1988:c_2dplatform_2escm",(void*)f_1988},
{"f_4147:c_2dplatform_2escm",(void*)f_4147},
{"f_2503:c_2dplatform_2escm",(void*)f_2503},
{"f_2757:c_2dplatform_2escm",(void*)f_2757},
{"f_2501:c_2dplatform_2escm",(void*)f_2501},
{"f_2759:c_2dplatform_2escm",(void*)f_2759},
{"f_2753:c_2dplatform_2escm",(void*)f_2753},
{"f_2755:c_2dplatform_2escm",(void*)f_2755},
{"f_2751:c_2dplatform_2escm",(void*)f_2751},
{"f_2517:c_2dplatform_2escm",(void*)f_2517},
{"f_2515:c_2dplatform_2escm",(void*)f_2515},
{"f_2519:c_2dplatform_2escm",(void*)f_2519},
{"f_4303:c_2dplatform_2escm",(void*)f_4303},
{"f_4159:c_2dplatform_2escm",(void*)f_4159},
{"f_4158:c_2dplatform_2escm",(void*)f_4158},
{"f_4155:c_2dplatform_2escm",(void*)f_4155},
{"f_4153:c_2dplatform_2escm",(void*)f_4153},
{"f_2767:c_2dplatform_2escm",(void*)f_2767},
{"f_2513:c_2dplatform_2escm",(void*)f_2513},
{"f_2769:c_2dplatform_2escm",(void*)f_2769},
{"f_3875:c_2dplatform_2escm",(void*)f_3875},
{"f_2511:c_2dplatform_2escm",(void*)f_2511},
{"f_2763:c_2dplatform_2escm",(void*)f_2763},
{"f_2765:c_2dplatform_2escm",(void*)f_2765},
{"f_2761:c_2dplatform_2escm",(void*)f_2761},
{"f_2567:c_2dplatform_2escm",(void*)f_2567},
{"f_4350:c_2dplatform_2escm",(void*)f_4350},
{"f_2569:c_2dplatform_2escm",(void*)f_2569},
{"f_2563:c_2dplatform_2escm",(void*)f_2563},
{"f_2565:c_2dplatform_2escm",(void*)f_2565},
{"f_2561:c_2dplatform_2escm",(void*)f_2561},
{"f_2577:c_2dplatform_2escm",(void*)f_2577},
{"f_2579:c_2dplatform_2escm",(void*)f_2579},
{"f_2573:c_2dplatform_2escm",(void*)f_2573},
{"f_2575:c_2dplatform_2escm",(void*)f_2575},
{"f_4365:c_2dplatform_2escm",(void*)f_4365},
{"f_4364:c_2dplatform_2escm",(void*)f_4364},
{"f_1934:c_2dplatform_2escm",(void*)f_1934},
{"f_2571:c_2dplatform_2escm",(void*)f_2571},
{"f_2076:c_2dplatform_2escm",(void*)f_2076},
{"f_2070:c_2dplatform_2escm",(void*)f_2070},
{"f_1947:c_2dplatform_2escm",(void*)f_1947},
{"f_1945:c_2dplatform_2escm",(void*)f_1945},
{"f_3801:c_2dplatform_2escm",(void*)f_3801},
{"f_2795:c_2dplatform_2escm",(void*)f_2795},
{"f_2797:c_2dplatform_2escm",(void*)f_2797},
{"f_2799:c_2dplatform_2escm",(void*)f_2799},
{"f_2082:c_2dplatform_2escm",(void*)f_2082},
{"f_2084:c_2dplatform_2escm",(void*)f_2084},
{"f_2791:c_2dplatform_2escm",(void*)f_2791},
{"f_2793:c_2dplatform_2escm",(void*)f_2793},
{"f_1917:c_2dplatform_2escm",(void*)f_1917},
{"f_4349:c_2dplatform_2escm",(void*)f_4349},
{"f_4346:c_2dplatform_2escm",(void*)f_4346},
{"f_2525:c_2dplatform_2escm",(void*)f_2525},
{"f_2527:c_2dplatform_2escm",(void*)f_2527},
{"f_2529:c_2dplatform_2escm",(void*)f_2529},
{"f_1929:c_2dplatform_2escm",(void*)f_1929},
{"f_2521:c_2dplatform_2escm",(void*)f_2521},
{"f_2523:c_2dplatform_2escm",(void*)f_2523},
{"f_2535:c_2dplatform_2escm",(void*)f_2535},
{"f_2537:c_2dplatform_2escm",(void*)f_2537},
{"f_2539:c_2dplatform_2escm",(void*)f_2539},
{"f_4048:c_2dplatform_2escm",(void*)f_4048},
{"f_2531:c_2dplatform_2escm",(void*)f_2531},
{"f_2533:c_2dplatform_2escm",(void*)f_2533},
{"f_4045:c_2dplatform_2escm",(void*)f_4045},
{"f_2691:c_2dplatform_2escm",(void*)f_2691},
{"f_1909:c_2dplatform_2escm",(void*)f_1909},
{"f_1900:c_2dplatform_2escm",(void*)f_1900},
{"f_2685:c_2dplatform_2escm",(void*)f_2685},
{"f_2683:c_2dplatform_2escm",(void*)f_2683},
{"f_2689:c_2dplatform_2escm",(void*)f_2689},
{"f_2687:c_2dplatform_2escm",(void*)f_2687},
{"f_4091:c_2dplatform_2escm",(void*)f_4091},
{"f_2695:c_2dplatform_2escm",(void*)f_2695},
{"f_2693:c_2dplatform_2escm",(void*)f_2693},
{"f_2699:c_2dplatform_2escm",(void*)f_2699},
{"f_2697:c_2dplatform_2escm",(void*)f_2697},
{"f_2012:c_2dplatform_2escm",(void*)f_2012},
{"toplevel:c_2dplatform_2escm",(void*)C_platform_toplevel},
{"f_2651:c_2dplatform_2escm",(void*)f_2651},
{"f_2649:c_2dplatform_2escm",(void*)f_2649},
{"f_2647:c_2dplatform_2escm",(void*)f_2647},
{"f_2645:c_2dplatform_2escm",(void*)f_2645},
{"f_2643:c_2dplatform_2escm",(void*)f_2643},
{"f_3882:c_2dplatform_2escm",(void*)f_3882},
{"f_2659:c_2dplatform_2escm",(void*)f_2659},
{"f_2657:c_2dplatform_2escm",(void*)f_2657},
{"f_2655:c_2dplatform_2escm",(void*)f_2655},
{"f_2653:c_2dplatform_2escm",(void*)f_2653},
{"f_2681:c_2dplatform_2escm",(void*)f_2681},
{"f_4575:c_2dplatform_2escm",(void*)f_4575},
{"f_2097:c_2dplatform_2escm",(void*)f_2097},
{"f_2095:c_2dplatform_2escm",(void*)f_2095},
{"f_2092:c_2dplatform_2escm",(void*)f_2092},
{"f_2090:c_2dplatform_2escm",(void*)f_2090},
{"f_4589:c_2dplatform_2escm",(void*)f_4589},
{"f_3291:c_2dplatform_2escm",(void*)f_3291},
{"f_3131:c_2dplatform_2escm",(void*)f_3131},
{"f_3133:c_2dplatform_2escm",(void*)f_3133},
{"f_3135:c_2dplatform_2escm",(void*)f_3135},
{"f_3137:c_2dplatform_2escm",(void*)f_3137},
{"f_3299:c_2dplatform_2escm",(void*)f_3299},
{"f_3121:c_2dplatform_2escm",(void*)f_3121},
{"f_3123:c_2dplatform_2escm",(void*)f_3123},
{"f_3125:c_2dplatform_2escm",(void*)f_3125},
{"f_3285:c_2dplatform_2escm",(void*)f_3285},
{"f_3127:c_2dplatform_2escm",(void*)f_3127},
{"f_3139:c_2dplatform_2escm",(void*)f_3139},
{"f_4771:c_2dplatform_2escm",(void*)f_4771},
{"f_4772:c_2dplatform_2escm",(void*)f_4772},
{"f_3113:c_2dplatform_2escm",(void*)f_3113},
{"f_3111:c_2dplatform_2escm",(void*)f_3111},
{"f_3117:c_2dplatform_2escm",(void*)f_3117},
{"f_3115:c_2dplatform_2escm",(void*)f_3115},
{"f_3129:c_2dplatform_2escm",(void*)f_3129},
{"f_3271:c_2dplatform_2escm",(void*)f_3271},
{"f_3270:c_2dplatform_2escm",(void*)f_3270},
{"f_4785:c_2dplatform_2escm",(void*)f_4785},
{"f_4784:c_2dplatform_2escm",(void*)f_4784},
{"f_4595:c_2dplatform_2escm",(void*)f_4595},
{"f_3103:c_2dplatform_2escm",(void*)f_3103},
{"f_3101:c_2dplatform_2escm",(void*)f_3101},
{"f_3107:c_2dplatform_2escm",(void*)f_3107},
{"f_3105:c_2dplatform_2escm",(void*)f_3105},
{"f_3119:c_2dplatform_2escm",(void*)f_3119},
{"f_4524:c_2dplatform_2escm",(void*)f_4524},
{"f_4526:c_2dplatform_2escm",(void*)f_4526},
{"f_3173:c_2dplatform_2escm",(void*)f_3173},
{"f_3175:c_2dplatform_2escm",(void*)f_3175},
{"f_3171:c_2dplatform_2escm",(void*)f_3171},
{"f_3109:c_2dplatform_2escm",(void*)f_3109},
{"f_3305:c_2dplatform_2escm",(void*)f_3305},
{"f_3163:c_2dplatform_2escm",(void*)f_3163},
{"f_3165:c_2dplatform_2escm",(void*)f_3165},
{"f_3161:c_2dplatform_2escm",(void*)f_3161},
{"f_3177:c_2dplatform_2escm",(void*)f_3177},
{"f_3179:c_2dplatform_2escm",(void*)f_3179},
{"f_4501:c_2dplatform_2escm",(void*)f_4501},
{"f_4509:c_2dplatform_2escm",(void*)f_4509},
{"f_4507:c_2dplatform_2escm",(void*)f_4507},
{"f_3336:c_2dplatform_2escm",(void*)f_3336},
{"f_3155:c_2dplatform_2escm",(void*)f_3155},
{"f_3153:c_2dplatform_2escm",(void*)f_3153},
{"f_3151:c_2dplatform_2escm",(void*)f_3151},
{"f_3167:c_2dplatform_2escm",(void*)f_3167},
{"f_3169:c_2dplatform_2escm",(void*)f_3169},
{"f_1709:c_2dplatform_2escm",(void*)f_1709},
{"f_3145:c_2dplatform_2escm",(void*)f_3145},
{"f_3143:c_2dplatform_2escm",(void*)f_3143},
{"f_3141:c_2dplatform_2escm",(void*)f_3141},
{"f_3159:c_2dplatform_2escm",(void*)f_3159},
{"f_3157:c_2dplatform_2escm",(void*)f_3157},
{"f_4562:c_2dplatform_2escm",(void*)f_4562},
{"f_3311:c_2dplatform_2escm",(void*)f_3311},
{"f_3313:c_2dplatform_2escm",(void*)f_3313},
{"f_4720:c_2dplatform_2escm",(void*)f_4720},
{"f_4727:c_2dplatform_2escm",(void*)f_4727},
{"f_3344:c_2dplatform_2escm",(void*)f_3344},
{"f_3342:c_2dplatform_2escm",(void*)f_3342},
{"f_3378:c_2dplatform_2escm",(void*)f_3378},
{"f_1992:c_2dplatform_2escm",(void*)f_1992},
{"f_1733:c_2dplatform_2escm",(void*)f_1733},
{"f_4540:c_2dplatform_2escm",(void*)f_4540},
{"f_4546:c_2dplatform_2escm",(void*)f_4546},
{"f_4548:c_2dplatform_2escm",(void*)f_4548},
{"f_1741:c_2dplatform_2escm",(void*)f_1741},
{"f_1745:c_2dplatform_2escm",(void*)f_1745},
{"f_1744:c_2dplatform_2escm",(void*)f_1744},
{"f_4705:c_2dplatform_2escm",(void*)f_4705},
{"f_4515:c_2dplatform_2escm",(void*)f_4515},
{"f_3326:c_2dplatform_2escm",(void*)f_3326},
{"f_3357:c_2dplatform_2escm",(void*)f_3357},
{"f_3359:c_2dplatform_2escm",(void*)f_3359},
{"f_1718:c_2dplatform_2escm",(void*)f_1718},
{"f_1715:c_2dplatform_2escm",(void*)f_1715},
{"f_3355:c_2dplatform_2escm",(void*)f_3355},
{"f_3350:c_2dplatform_2escm",(void*)f_3350},
{"f_3352:c_2dplatform_2escm",(void*)f_3352},
{"f_4763:c_2dplatform_2escm",(void*)f_4763},
{"f_1720:c_2dplatform_2escm",(void*)f_1720},
{"f_4765:c_2dplatform_2escm",(void*)f_4765},
{"f_1691:c_2dplatform_2escm",(void*)f_1691},
{"f_3055:c_2dplatform_2escm",(void*)f_3055},
{"f_3053:c_2dplatform_2escm",(void*)f_3053},
{"f_3051:c_2dplatform_2escm",(void*)f_3051},
{"f_3059:c_2dplatform_2escm",(void*)f_3059},
{"f_3057:c_2dplatform_2escm",(void*)f_3057},
{"f_1782:c_2dplatform_2escm",(void*)f_1782},
{"f_3081:c_2dplatform_2escm",(void*)f_3081},
{"f_1788:c_2dplatform_2escm",(void*)f_1788},
{"f_3085:c_2dplatform_2escm",(void*)f_3085},
{"f_4748:c_2dplatform_2escm",(void*)f_4748},
{"f_3083:c_2dplatform_2escm",(void*)f_3083},
{"f_3089:c_2dplatform_2escm",(void*)f_3089},
{"f_3087:c_2dplatform_2escm",(void*)f_3087},
{"f_1759:c_2dplatform_2escm",(void*)f_1759},
{"f_1645:c_2dplatform_2escm",(void*)f_1645},
{"f_1643:c_2dplatform_2escm",(void*)f_1643},
{"f_1641:c_2dplatform_2escm",(void*)f_1641},
{"f_1649:c_2dplatform_2escm",(void*)f_1649},
{"f_1647:c_2dplatform_2escm",(void*)f_1647},
{"f_1765:c_2dplatform_2escm",(void*)f_1765},
{"f_1652:c_2dplatform_2escm",(void*)f_1652},
{"f_1659:c_2dplatform_2escm",(void*)f_1659},
{"f_3091:c_2dplatform_2escm",(void*)f_3091},
{"f_3095:c_2dplatform_2escm",(void*)f_3095},
{"f_3093:c_2dplatform_2escm",(void*)f_3093},
{"f_3099:c_2dplatform_2escm",(void*)f_3099},
{"f_3097:c_2dplatform_2escm",(void*)f_3097},
{"f_4554:c_2dplatform_2escm",(void*)f_4554},
{"f_1790:c_2dplatform_2escm",(void*)f_1790},
{"f_1796:c_2dplatform_2escm",(void*)f_1796},
{"f_3591:c_2dplatform_2escm",(void*)f_3591},
{"f_3582:c_2dplatform_2escm",(void*)f_3582},
{"f_3597:c_2dplatform_2escm",(void*)f_3597},
{"f_3576:c_2dplatform_2escm",(void*)f_3576},
{"f_3795:c_2dplatform_2escm",(void*)f_3795},
{"f_2613:c_2dplatform_2escm",(void*)f_2613},
{"f_2611:c_2dplatform_2escm",(void*)f_2611},
{"f_2607:c_2dplatform_2escm",(void*)f_2607},
{"f_2605:c_2dplatform_2escm",(void*)f_2605},
{"f_2609:c_2dplatform_2escm",(void*)f_2609},
{"f_3789:c_2dplatform_2escm",(void*)f_3789},
{"f_2661:c_2dplatform_2escm",(void*)f_2661},
{"f_2617:c_2dplatform_2escm",(void*)f_2617},
{"f_2615:c_2dplatform_2escm",(void*)f_2615},
{"f_2619:c_2dplatform_2escm",(void*)f_2619},
{"f_2671:c_2dplatform_2escm",(void*)f_2671},
{"f_2667:c_2dplatform_2escm",(void*)f_2667},
{"f_2669:c_2dplatform_2escm",(void*)f_2669},
{"f_2663:c_2dplatform_2escm",(void*)f_2663},
{"f_2665:c_2dplatform_2escm",(void*)f_2665},
{"f_3514:c_2dplatform_2escm",(void*)f_3514},
{"f_3516:c_2dplatform_2escm",(void*)f_3516},
{"f_3510:c_2dplatform_2escm",(void*)f_3510},
{"f_3512:c_2dplatform_2escm",(void*)f_3512},
{"f_2641:c_2dplatform_2escm",(void*)f_2641},
{"f_3528:c_2dplatform_2escm",(void*)f_3528},
{"f_2677:c_2dplatform_2escm",(void*)f_2677},
{"f_2679:c_2dplatform_2escm",(void*)f_2679},
{"f_2673:c_2dplatform_2escm",(void*)f_2673},
{"f_2675:c_2dplatform_2escm",(void*)f_2675},
{"f_3506:c_2dplatform_2escm",(void*)f_3506},
{"f_3504:c_2dplatform_2escm",(void*)f_3504},
{"f_3502:c_2dplatform_2escm",(void*)f_3502},
{"f_3500:c_2dplatform_2escm",(void*)f_3500},
{"f_3518:c_2dplatform_2escm",(void*)f_3518},
{"f_2414:c_2dplatform_2escm",(void*)f_2414},
{"f_2416:c_2dplatform_2escm",(void*)f_2416},
{"f_3508:c_2dplatform_2escm",(void*)f_3508},
{"f_2621:c_2dplatform_2escm",(void*)f_2621},
{"f_2623:c_2dplatform_2escm",(void*)f_2623},
{"f_2424:c_2dplatform_2escm",(void*)f_2424},
{"f_2422:c_2dplatform_2escm",(void*)f_2422},
{"f_2631:c_2dplatform_2escm",(void*)f_2631},
{"f_2633:c_2dplatform_2escm",(void*)f_2633},
{"f_2625:c_2dplatform_2escm",(void*)f_2625},
{"f_2627:c_2dplatform_2escm",(void*)f_2627},
{"f_2629:c_2dplatform_2escm",(void*)f_2629},
{"f_3956:c_2dplatform_2escm",(void*)f_3956},
{"f_3958:c_2dplatform_2escm",(void*)f_3958},
{"f_3568:c_2dplatform_2escm",(void*)f_3568},
{"f_2603:c_2dplatform_2escm",(void*)f_2603},
{"f_2601:c_2dplatform_2escm",(void*)f_2601},
{"f_4031:c_2dplatform_2escm",(void*)f_4031},
{"f_3932:c_2dplatform_2escm",(void*)f_3932},
{"f_4033:c_2dplatform_2escm",(void*)f_4033},
{"f_4039:c_2dplatform_2escm",(void*)f_4039},
{"f_2408:c_2dplatform_2escm",(void*)f_2408},
{"f_2635:c_2dplatform_2escm",(void*)f_2635},
{"f_2637:c_2dplatform_2escm",(void*)f_2637},
{"f_3726:c_2dplatform_2escm",(void*)f_3726},
{"f_2639:c_2dplatform_2escm",(void*)f_2639},
{"f_2298:c_2dplatform_2escm",(void*)f_2298},
{"f_3722:c_2dplatform_2escm",(void*)f_3722},
{"f_3719:c_2dplatform_2escm",(void*)f_3719},
{"f_3544:c_2dplatform_2escm",(void*)f_3544},
{"f_2402:c_2dplatform_2escm",(void*)f_2402},
{"f_3545:c_2dplatform_2escm",(void*)f_3545},
{"f_2457:c_2dplatform_2escm",(void*)f_2457},
{"f_2459:c_2dplatform_2escm",(void*)f_2459},
{"f_2455:c_2dplatform_2escm",(void*)f_2455},
{"f_3935:c_2dplatform_2escm",(void*)f_3935},
{"f_3936:c_2dplatform_2escm",(void*)f_3936},
{"f_3532:c_2dplatform_2escm",(void*)f_3532},
{"f_2452:c_2dplatform_2escm",(void*)f_2452},
{"f_3530:c_2dplatform_2escm",(void*)f_3530},
{"f_3536:c_2dplatform_2escm",(void*)f_3536},
{"f_3534:c_2dplatform_2escm",(void*)f_3534},
{"f_2388:c_2dplatform_2escm",(void*)f_2388},
{"f_2469:c_2dplatform_2escm",(void*)f_2469},
{"f_4014:c_2dplatform_2escm",(void*)f_4014},
{"f_2467:c_2dplatform_2escm",(void*)f_2467},
{"f_2809:c_2dplatform_2escm",(void*)f_2809},
{"f_2465:c_2dplatform_2escm",(void*)f_2465},
{"f_2807:c_2dplatform_2escm",(void*)f_2807},
{"f_2463:c_2dplatform_2escm",(void*)f_2463},
{"f_2805:c_2dplatform_2escm",(void*)f_2805},
{"f_2803:c_2dplatform_2escm",(void*)f_2803},
{"f_2801:c_2dplatform_2escm",(void*)f_2801},
{"f_3704:c_2dplatform_2escm",(void*)f_3704},
{"f_2461:c_2dplatform_2escm",(void*)f_2461},
{"f_3524:c_2dplatform_2escm",(void*)f_3524},
{"f_3526:c_2dplatform_2escm",(void*)f_3526},
{"f_3520:c_2dplatform_2escm",(void*)f_3520},
{"f_3522:c_2dplatform_2escm",(void*)f_3522},
{"f_2396:c_2dplatform_2escm",(void*)f_2396},
{"f_2391:c_2dplatform_2escm",(void*)f_2391},
{"f_4025:c_2dplatform_2escm",(void*)f_4025},
{"f_2438:c_2dplatform_2escm",(void*)f_2438},
{"f_3769:c_2dplatform_2escm",(void*)f_3769},
{"f_2432:c_2dplatform_2escm",(void*)f_2432},
{"f_2430:c_2dplatform_2escm",(void*)f_2430},
{"f_2365:c_2dplatform_2escm",(void*)f_2365},
{"f_4071:c_2dplatform_2escm",(void*)f_4071},
{"f_3972:c_2dplatform_2escm",(void*)f_3972},
{"f_2446:c_2dplatform_2escm",(void*)f_2446},
{"f_3763:c_2dplatform_2escm",(void*)f_3763},
{"f_2440:c_2dplatform_2escm",(void*)f_2440},
{"f_2232:c_2dplatform_2escm",(void*)f_2232},
{"f_2230:c_2dplatform_2escm",(void*)f_2230},
{"f_4232:c_2dplatform_2escm",(void*)f_4232},
{"f_4234:c_2dplatform_2escm",(void*)f_4234},
{"f_1863:c_2dplatform_2escm",(void*)f_1863},
{"f_1865:c_2dplatform_2escm",(void*)f_1865},
{"f_4005:c_2dplatform_2escm",(void*)f_4005},
{"f_2835:c_2dplatform_2escm",(void*)f_2835},
{"f_2833:c_2dplatform_2escm",(void*)f_2833},
{"f_3966:c_2dplatform_2escm",(void*)f_3966},
{"f_2839:c_2dplatform_2escm",(void*)f_2839},
{"f_2266:c_2dplatform_2escm",(void*)f_2266},
{"f_3964:c_2dplatform_2escm",(void*)f_3964},
{"f_2837:c_2dplatform_2escm",(void*)f_2837},
{"f_2268:c_2dplatform_2escm",(void*)f_2268},
{"f_3978:c_2dplatform_2escm",(void*)f_3978},
{"f_2831:c_2dplatform_2escm",(void*)f_2831},
{"f_3757:c_2dplatform_2escm",(void*)f_3757},
{"f_3755:c_2dplatform_2escm",(void*)f_3755},
{"f_3749:c_2dplatform_2escm",(void*)f_3749},
{"f_4203:c_2dplatform_2escm",(void*)f_4203},
{"f_4205:c_2dplatform_2escm",(void*)f_4205},
{"f_4051:c_2dplatform_2escm",(void*)f_4051},
{"f_2845:c_2dplatform_2escm",(void*)f_2845},
{"f_2843:c_2dplatform_2escm",(void*)f_2843},
{"f_2237:c_2dplatform_2escm",(void*)f_2237},
{"f_2849:c_2dplatform_2escm",(void*)f_2849},
{"f_2234:c_2dplatform_2escm",(void*)f_2234},
{"f_2847:c_2dplatform_2escm",(void*)f_2847},
{"f_2238:c_2dplatform_2escm",(void*)f_2238},
{"f_2841:c_2dplatform_2escm",(void*)f_2841},
{"f_3744:c_2dplatform_2escm",(void*)f_3744},
{"f_3562:c_2dplatform_2escm",(void*)f_3562},
{"f_2212:c_2dplatform_2escm",(void*)f_2212},
{"f_2263:c_2dplatform_2escm",(void*)f_2263},
{"f_2004:c_2dplatform_2escm",(void*)f_2004},
{"f_2006:c_2dplatform_2escm",(void*)f_2006},
{"f_4211:c_2dplatform_2escm",(void*)f_4211},
{"f_4218:c_2dplatform_2escm",(void*)f_4218},
{"f_1881:c_2dplatform_2escm",(void*)f_1881},
{"f_2813:c_2dplatform_2escm",(void*)f_2813},
{"f_1887:c_2dplatform_2escm",(void*)f_1887},
{"f_2815:c_2dplatform_2escm",(void*)f_2815},
{"f_4065:c_2dplatform_2escm",(void*)f_4065},
{"f_2817:c_2dplatform_2escm",(void*)f_2817},
{"f_2245:c_2dplatform_2escm",(void*)f_2245},
{"f_2819:c_2dplatform_2escm",(void*)f_2819},
{"f_2811:c_2dplatform_2escm",(void*)f_2811},
{"f_2220:c_2dplatform_2escm",(void*)f_2220},
{"f_2222:c_2dplatform_2escm",(void*)f_2222},
{"f_2059:c_2dplatform_2escm",(void*)f_2059},
{"f_1855:c_2dplatform_2escm",(void*)f_1855},
{"f_2823:c_2dplatform_2escm",(void*)f_2823},
{"f_1857:c_2dplatform_2escm",(void*)f_1857},
{"f_2825:c_2dplatform_2escm",(void*)f_2825},
{"f_2218:c_2dplatform_2escm",(void*)f_2218},
{"f_2827:c_2dplatform_2escm",(void*)f_2827},
{"f_2053:c_2dplatform_2escm",(void*)f_2053},
{"f_2829:c_2dplatform_2escm",(void*)f_2829},
{"f_2821:c_2dplatform_2escm",(void*)f_2821},
{"f_4271:c_2dplatform_2escm",(void*)f_4271},
{"f_2064:c_2dplatform_2escm",(void*)f_2064},
{"f_4279:c_2dplatform_2escm",(void*)f_4279},
{"f_4273:c_2dplatform_2escm",(void*)f_4273},
{"f_2879:c_2dplatform_2escm",(void*)f_2879},
{"f_2877:c_2dplatform_2escm",(void*)f_2877},
{"f_2875:c_2dplatform_2escm",(void*)f_2875},
{"f_2873:c_2dplatform_2escm",(void*)f_2873},
{"f_1824:c_2dplatform_2escm",(void*)f_1824},
{"f_2228:c_2dplatform_2escm",(void*)f_2228},
{"f_2224:c_2dplatform_2escm",(void*)f_2224},
{"f_2226:c_2dplatform_2escm",(void*)f_2226},
{"f_2871:c_2dplatform_2escm",(void*)f_2871},
{"f_4240:c_2dplatform_2escm",(void*)f_4240},
{"f_2038:c_2dplatform_2escm",(void*)f_2038},
{"f_2039:c_2dplatform_2escm",(void*)f_2039},
{"f_1873:c_2dplatform_2escm",(void*)f_1873},
{"f_2889:c_2dplatform_2escm",(void*)f_2889},
{"f_1871:c_2dplatform_2escm",(void*)f_1871},
{"f_3911:c_2dplatform_2escm",(void*)f_3911},
{"f_2887:c_2dplatform_2escm",(void*)f_2887},
{"f_2885:c_2dplatform_2escm",(void*)f_2885},
{"f_2883:c_2dplatform_2escm",(void*)f_2883},
{"f_1879:c_2dplatform_2escm",(void*)f_1879},
{"f_2032:c_2dplatform_2escm",(void*)f_2032},
{"f_4189:c_2dplatform_2escm",(void*)f_4189},
{"f_2881:c_2dplatform_2escm",(void*)f_2881},
{"f_4256:c_2dplatform_2escm",(void*)f_4256},
{"f_2857:c_2dplatform_2escm",(void*)f_2857},
{"f_2859:c_2dplatform_2escm",(void*)f_2859},
{"f_2853:c_2dplatform_2escm",(void*)f_2853},
{"f_1840:c_2dplatform_2escm",(void*)f_1840},
{"f_2855:c_2dplatform_2escm",(void*)f_2855},
{"f_2206:c_2dplatform_2escm",(void*)f_2206},
{"f_2204:c_2dplatform_2escm",(void*)f_2204},
{"f_4197:c_2dplatform_2escm",(void*)f_4197},
{"f_3918:c_2dplatform_2escm",(void*)f_3918},
{"f_2851:c_2dplatform_2escm",(void*)f_2851},
{"f_4226:c_2dplatform_2escm",(void*)f_4226},
{"f_1816:c_2dplatform_2escm",(void*)f_1816},
{"f_1818:c_2dplatform_2escm",(void*)f_1818},
{"f_2867:c_2dplatform_2escm",(void*)f_2867},
{"f_2869:c_2dplatform_2escm",(void*)f_2869},
{"f_4397:c_2dplatform_2escm",(void*)f_4397},
{"f_2863:c_2dplatform_2escm",(void*)f_2863},
{"f_4396:c_2dplatform_2escm",(void*)f_4396},
{"f_2865:c_2dplatform_2escm",(void*)f_2865},
{"f_1810:c_2dplatform_2escm",(void*)f_1810},
{"f_4390:c_2dplatform_2escm",(void*)f_4390},
{"f_2861:c_2dplatform_2escm",(void*)f_2861},
{"f_2585:c_2dplatform_2escm",(void*)f_2585},
{"f_2583:c_2dplatform_2escm",(void*)f_2583},
{"f_2589:c_2dplatform_2escm",(void*)f_2589},
{"f_2587:c_2dplatform_2escm",(void*)f_2587},
{"f_2581:c_2dplatform_2escm",(void*)f_2581},
{"f_4382:c_2dplatform_2escm",(void*)f_4382},
{"f_2895:c_2dplatform_2escm",(void*)f_2895},
{"f_2897:c_2dplatform_2escm",(void*)f_2897},
{"f_2899:c_2dplatform_2escm",(void*)f_2899},
{"f_4388:c_2dplatform_2escm",(void*)f_4388},
{"f_2595:c_2dplatform_2escm",(void*)f_2595},
{"f_2593:c_2dplatform_2escm",(void*)f_2593},
{"f_2599:c_2dplatform_2escm",(void*)f_2599},
{"f_2597:c_2dplatform_2escm",(void*)f_2597},
{"f_2591:c_2dplatform_2escm",(void*)f_2591},
{"f_2891:c_2dplatform_2escm",(void*)f_2891},
{"f_2893:c_2dplatform_2escm",(void*)f_2893},
{"f_3223:c_2dplatform_2escm",(void*)f_3223},
{"f_3221:c_2dplatform_2escm",(void*)f_3221},
{"f_3227:c_2dplatform_2escm",(void*)f_3227},
{"f_3225:c_2dplatform_2escm",(void*)f_3225},
{"f_3229:c_2dplatform_2escm",(void*)f_3229},
{"f_4698:c_2dplatform_2escm",(void*)f_4698},
{"f_4695:c_2dplatform_2escm",(void*)f_4695},
{"f_3211:c_2dplatform_2escm",(void*)f_3211},
{"f_2549:c_2dplatform_2escm",(void*)f_2549},
{"f_3213:c_2dplatform_2escm",(void*)f_3213},
{"f_2547:c_2dplatform_2escm",(void*)f_2547},
{"f_3215:c_2dplatform_2escm",(void*)f_3215},
{"f_2545:c_2dplatform_2escm",(void*)f_2545},
{"f_3217:c_2dplatform_2escm",(void*)f_3217},
{"f_2543:c_2dplatform_2escm",(void*)f_2543},
{"f_3219:c_2dplatform_2escm",(void*)f_3219},
{"f_2541:c_2dplatform_2escm",(void*)f_2541},
{"f_2559:c_2dplatform_2escm",(void*)f_2559},
{"f_3201:c_2dplatform_2escm",(void*)f_3201},
{"f_2557:c_2dplatform_2escm",(void*)f_2557},
{"f_3203:c_2dplatform_2escm",(void*)f_3203},
{"f_2555:c_2dplatform_2escm",(void*)f_2555},
{"f_3205:c_2dplatform_2escm",(void*)f_3205},
{"f_2553:c_2dplatform_2escm",(void*)f_2553},
{"f_3207:c_2dplatform_2escm",(void*)f_3207},
{"f_3209:c_2dplatform_2escm",(void*)f_3209},
{"f_3985:c_2dplatform_2escm",(void*)f_3985},
{"f_3999:c_2dplatform_2escm",(void*)f_3999},
{"f_4676:c_2dplatform_2escm",(void*)f_4676},
{"f_2551:c_2dplatform_2escm",(void*)f_2551},
{"f_4674:c_2dplatform_2escm",(void*)f_4674},
{"f_4682:c_2dplatform_2escm",(void*)f_4682},
{"f_3268:c_2dplatform_2escm",(void*)f_3268},
{"f_3254:c_2dplatform_2escm",(void*)f_3254},
{"f_3233:c_2dplatform_2escm",(void*)f_3233},
{"f_3231:c_2dplatform_2escm",(void*)f_3231},
{"f_3235:c_2dplatform_2escm",(void*)f_3235},
{"f_4613:c_2dplatform_2escm",(void*)f_4613},
{"f_4628:c_2dplatform_2escm",(void*)f_4628},
{"f_1674:c_2dplatform_2escm",(void*)f_1674},
{"f_1678:c_2dplatform_2escm",(void*)f_1678},
{"f_4652:c_2dplatform_2escm",(void*)f_4652},
{"f_4654:c_2dplatform_2escm",(void*)f_4654},
{"f_3021:c_2dplatform_2escm",(void*)f_3021},
{"f_3023:c_2dplatform_2escm",(void*)f_3023},
{"f_3025:c_2dplatform_2escm",(void*)f_3025},
{"f_1616:c_2dplatform_2escm",(void*)f_1616},
{"f_4668:c_2dplatform_2escm",(void*)f_4668},
{"f_3027:c_2dplatform_2escm",(void*)f_3027},
{"f_1615:c_2dplatform_2escm",(void*)f_1615},
{"f_3029:c_2dplatform_2escm",(void*)f_3029},
{"f_1618:c_2dplatform_2escm",(void*)f_1618},
{"f_4630:c_2dplatform_2escm",(void*)f_4630},
{"f_4632:c_2dplatform_2escm",(void*)f_4632},
{"f_1590:c_2dplatform_2escm",(void*)f_1590},
{"f_1592:c_2dplatform_2escm",(void*)f_1592},
{"f_3003:c_2dplatform_2escm",(void*)f_3003},
{"f_3001:c_2dplatform_2escm",(void*)f_3001},
{"f_3007:c_2dplatform_2escm",(void*)f_3007},
{"f_3005:c_2dplatform_2escm",(void*)f_3005},
{"f_1637:c_2dplatform_2escm",(void*)f_1637},
{"f_1639:c_2dplatform_2escm",(void*)f_1639},
{"f_3009:c_2dplatform_2escm",(void*)f_3009},
{"f_4481:c_2dplatform_2escm",(void*)f_4481},
{"f_4480:c_2dplatform_2escm",(void*)f_4480},
{"f_3031:c_2dplatform_2escm",(void*)f_3031},
{"f_3033:c_2dplatform_2escm",(void*)f_3033},
{"f_3035:c_2dplatform_2escm",(void*)f_3035},
{"f_3037:c_2dplatform_2escm",(void*)f_3037},
{"f_3039:c_2dplatform_2escm",(void*)f_3039},
{"f_3063:c_2dplatform_2escm",(void*)f_3063},
{"f_3065:c_2dplatform_2escm",(void*)f_3065},
{"f_3061:c_2dplatform_2escm",(void*)f_3061},
{"f_3067:c_2dplatform_2escm",(void*)f_3067},
{"f_3069:c_2dplatform_2escm",(void*)f_3069},
{"f_3013:c_2dplatform_2escm",(void*)f_3013},
{"f_3011:c_2dplatform_2escm",(void*)f_3011},
{"f_3017:c_2dplatform_2escm",(void*)f_3017},
{"f_3015:c_2dplatform_2escm",(void*)f_3015},
{"f_3019:c_2dplatform_2escm",(void*)f_3019},
{"f_1893:c_2dplatform_2escm",(void*)f_1893},
{"f_1896:c_2dplatform_2escm",(void*)f_1896},
{"f_1898:c_2dplatform_2escm",(void*)f_1898},
{"f_3045:c_2dplatform_2escm",(void*)f_3045},
{"f_3043:c_2dplatform_2escm",(void*)f_3043},
{"f_3041:c_2dplatform_2escm",(void*)f_3041},
{"f_3049:c_2dplatform_2escm",(void*)f_3049},
{"f_3047:c_2dplatform_2escm",(void*)f_3047},
{"f_3073:c_2dplatform_2escm",(void*)f_3073},
{"f_3075:c_2dplatform_2escm",(void*)f_3075},
{"f_3071:c_2dplatform_2escm",(void*)f_3071},
{"f_3077:c_2dplatform_2escm",(void*)f_3077},
{"f_3079:c_2dplatform_2escm",(void*)f_3079},
{"f_4411:c_2dplatform_2escm",(void*)f_4411},
{"f_4417:c_2dplatform_2escm",(void*)f_4417},
{"f_3149:c_2dplatform_2escm",(void*)f_3149},
{"f_3147:c_2dplatform_2escm",(void*)f_3147},
{"f_4423:c_2dplatform_2escm",(void*)f_4423},
{"f_4805:c_2dplatform_2escm",(void*)f_4805},
{"f_3191:c_2dplatform_2escm",(void*)f_3191},
{"f_3195:c_2dplatform_2escm",(void*)f_3195},
{"f_3193:c_2dplatform_2escm",(void*)f_3193},
{"f_4852:c_2dplatform_2escm",(void*)f_4852},
{"f_4854:c_2dplatform_2escm",(void*)f_4854},
{"f_4409:c_2dplatform_2escm",(void*)f_4409},
{"f_3181:c_2dplatform_2escm",(void*)f_3181},
{"f_3185:c_2dplatform_2escm",(void*)f_3185},
{"f_3183:c_2dplatform_2escm",(void*)f_3183},
{"f_3199:c_2dplatform_2escm",(void*)f_3199},
{"f_3197:c_2dplatform_2escm",(void*)f_3197},
{"f_4459:c_2dplatform_2escm",(void*)f_4459},
{"f_3189:c_2dplatform_2escm",(void*)f_3189},
{"f_4838:c_2dplatform_2escm",(void*)f_4838},
{"f_3187:c_2dplatform_2escm",(void*)f_3187},
{"f_4461:c_2dplatform_2escm",(void*)f_4461},
{"f_4467:c_2dplatform_2escm",(void*)f_4467},
{"f_4468:c_2dplatform_2escm",(void*)f_4468},
{"f_4846:c_2dplatform_2escm",(void*)f_4846},
{"f_4844:c_2dplatform_2escm",(void*)f_4844},
{"f_2987:c_2dplatform_2escm",(void*)f_2987},
{"f_2989:c_2dplatform_2escm",(void*)f_2989},
{"f_2983:c_2dplatform_2escm",(void*)f_2983},
{"f_2985:c_2dplatform_2escm",(void*)f_2985},
{"f_3695:c_2dplatform_2escm",(void*)f_3695},
{"f_2981:c_2dplatform_2escm",(void*)f_2981},
{"f_3680:c_2dplatform_2escm",(void*)f_3680},
{"f_2997:c_2dplatform_2escm",(void*)f_2997},
{"f_2995:c_2dplatform_2escm",(void*)f_2995},
{"f_2999:c_2dplatform_2escm",(void*)f_2999},
{"f_4444:c_2dplatform_2escm",(void*)f_4444},
{"f_2993:c_2dplatform_2escm",(void*)f_2993},
{"f_2991:c_2dplatform_2escm",(void*)f_2991},
{"f_3361:c_2dplatform_2escm",(void*)f_3361},
{"f_3674:c_2dplatform_2escm",(void*)f_3674},
{"f_4824:c_2dplatform_2escm",(void*)f_4824},
{"f_2969:c_2dplatform_2escm",(void*)f_2969},
{"f_2967:c_2dplatform_2escm",(void*)f_2967},
{"f_2965:c_2dplatform_2escm",(void*)f_2965},
{"f_2963:c_2dplatform_2escm",(void*)f_2963},
{"f_2961:c_2dplatform_2escm",(void*)f_2961},
{"f_3394:c_2dplatform_2escm",(void*)f_3394},
{"f_2977:c_2dplatform_2escm",(void*)f_2977},
{"f_4875:c_2dplatform_2escm",(void*)f_4875},
{"f_2979:c_2dplatform_2escm",(void*)f_2979},
{"f_2973:c_2dplatform_2escm",(void*)f_2973},
{"f_2975:c_2dplatform_2escm",(void*)f_2975},
{"f_2971:c_2dplatform_2escm",(void*)f_2971},
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
S|  map		1
S|  for-each		1
o|eliminated procedure checks: 59 
o|specializations:
o|  2 (eqv? (not float) *)
o|  1 (memq * list)
o|  17 (= fixnum fixnum)
o|  3 (>= fixnum fixnum)
o|  2 (length list)
o|  3 (cdr pair)
o|  2 (car pair)
o|  6 (first pair)
o|  1 (##sys#check-list (or pair list) *)
o|safe globals: (##compiler#non-foldable-bindings ##compiler#internal-bindings ##compiler#default-extended-bindings ##compiler#default-standard-bindings ##compiler#valid-compiler-options-with-argument ##compiler#valid-compiler-options ##compiler#target-include-file ##compiler#membership-unfold-limit ##compiler#membership-test-operators ##compiler#eq-inline-operator ##compiler#unlikely-variables small-parameter-limit ##compiler#parameter-limit ##compiler#words-per-flonum ##compiler#units-used-by-default ##compiler#default-profiling-declarations ##compiler#default-debugging-declarations ##compiler#default-declarations ##compiler#default-optimization-passes) 
o|Removed `not' forms: 3 
o|inlining procedure: k1654 
o|inlining procedure: k1673 
o|inlining procedure: k1689 
o|inlining procedure: k1689 
o|inlining procedure: k1673 
o|inlining procedure: k1654 
o|substituted constant variable: a1713 
o|inlining procedure: k1723 
o|inlining procedure: k1737 
o|inlining procedure: k1737 
o|inlining procedure: k1766 
o|inlining procedure: k1766 
o|inlining procedure: k1828 
o|inlining procedure: k1828 
o|inlining procedure: k1723 
o|substituted constant variable: a1891 
o|inlining procedure: k1903 
o|inlining procedure: k1950 
o|inlining procedure: k1950 
o|inlining procedure: k1989 
o|inlining procedure: k1989 
o|inlining procedure: k2016 
o|substituted constant variable: a2028 
o|inlining procedure: k2029 
o|inlining procedure: k2029 
o|inlining procedure: k2016 
o|substituted constant variable: a2071 
o|inlining procedure: k1903 
o|inlining procedure: k2105 
o|inlining procedure: k2132 
o|inlining procedure: k2132 
o|inlining procedure: k2169 
o|inlining procedure: k2169 
o|inlining procedure: k2105 
o|substituted constant variable: a2216 
o|inlining procedure: k2240 
o|inlining procedure: k2240 
o|substituted constant variable: a2261 
o|inlining procedure: k2271 
o|inlining procedure: k2286 
o|inlining procedure: k2299 
o|inlining procedure: k2310 
o|substituted constant variable: a2403 
o|inlining procedure: k2310 
o|inlining procedure: k2299 
o|inlining procedure: k2286 
o|inlining procedure: k2271 
o|substituted constant variable: a2447 
o|inlining procedure: k3240 
o|inlining procedure: k3257 
o|inlining procedure: k3257 
o|inlining procedure: k3240 
o|inlining procedure: k3364 
o|inlining procedure: k3379 
o|inlining procedure: k3396 
o|inlining procedure: k3410 
o|inlining procedure: k3410 
o|inlining procedure: k3396 
o|inlining procedure: k3379 
o|inlining procedure: k3364 
o|substituted constant variable: a3485 
o|inlining procedure: k3538 
o|inlining procedure: k3538 
o|substituted constant variable: a3592 
o|inlining procedure: k3599 
o|inlining procedure: k3599 
o|substituted constant variable: a3648 
o|inlining procedure: k3655 
o|inlining procedure: k3685 
o|inlining procedure: k3685 
o|inlining procedure: k3655 
o|substituted constant variable: a3690 
o|inlining procedure: k3697 
o|inlining procedure: k3718 
o|inlining procedure: k3718 
o|inlining procedure: k3697 
o|substituted constant variable: a3764 
o|inlining procedure: k3771 
o|inlining procedure: k3786 
o|substituted constant variable: setter-map 
o|inlining procedure: k3786 
o|inlining procedure: k3771 
o|substituted constant variable: a3836 
o|inlining procedure: k3843 
o|inlining procedure: k3866 
o|inlining procedure: k3866 
o|inlining procedure: k3895 
o|inlining procedure: k3906 
o|inlining procedure: k3906 
o|inlining procedure: k3895 
o|inlining procedure: k3843 
o|substituted constant variable: a3973 
o|inlining procedure: k3980 
o|inlining procedure: k4009 
o|inlining procedure: k4009 
o|inlining procedure: k3980 
o|substituted constant variable: a4043 
o|inlining procedure: k4077 
o|inlining procedure: k4077 
o|substituted constant variable: a4108 
o|substituted constant variable: a4110 
o|inlining procedure: k4114 
o|inlining procedure: k4130 
o|inlining procedure: k4130 
o|inlining procedure: k4180 
o|inlining procedure: k4180 
o|inlining procedure: k4219 
o|inlining procedure: k4219 
o|inlining procedure: k4244 
o|inlining procedure: k4244 
o|inlining procedure: k4114 
o|substituted constant variable: a4307 
o|inlining procedure: k4317 
o|inlining procedure: k4345 
o|inlining procedure: k4345 
o|inlining procedure: k4317 
o|substituted constant variable: a4421 
o|inlining procedure: k4425 
o|inlining procedure: k4438 
o|inlining procedure: k4463 
o|inlining procedure: k4463 
o|inlining procedure: k4438 
o|substituted constant variable: a4518 
o|inlining procedure: k4528 
o|inlining procedure: k4528 
o|inlining procedure: k4425 
o|substituted constant variable: a4560 
o|inlining procedure: k4564 
o|inlining procedure: k4564 
o|inlining procedure: k4597 
o|inlining procedure: k4597 
o|inlining procedure: k4601 
o|substituted constant variable: a4647 
o|inlining procedure: k4601 
o|inlining procedure: k4656 
o|inlining procedure: k4656 
o|inlining procedure: k4699 
o|inlining procedure: k4699 
o|inlining procedure: k4742 
o|inlining procedure: k4767 
o|inlining procedure: k4767 
o|inlining procedure: k4742 
o|inlining procedure: k4826 
o|inlining procedure: k4826 
o|inlining procedure: k4857 
o|inlining procedure: k4857 
o|simplifications: ((if . 1)) 
o|replaced variables: 378 
o|removed binding forms: 43 
o|substituted constant variable: f_16534881 
o|substituted constant variable: r17384884 
o|substituted constant variable: r17674886 
o|substituted constant variable: r18294888 
o|substituted constant variable: f_17224889 
o|substituted constant variable: r20304897 
o|substituted constant variable: r20174899 
o|substituted constant variable: f_19024900 
o|substituted constant variable: f_21044906 
o|substituted constant variable: f_22394908 
o|substituted constant variable: r23114913 
o|substituted constant variable: r23004914 
o|substituted constant variable: r22874915 
o|substituted constant variable: f_22704916 
o|substituted constant variable: r32584919 
o|substituted constant variable: r32414920 
o|substituted constant variable: r34114924 
o|substituted constant variable: f_33954926 
o|substituted constant variable: r33804927 
o|substituted constant variable: f_33634928 
o|removed side-effect free assignment to unused variable: setter-map 
o|substituted constant variable: f_35374930 
o|substituted constant variable: f_35984932 
o|substituted constant variable: a36844934 
o|substituted constant variable: a36844935 
o|substituted constant variable: f_36544936 
o|substituted constant variable: f_36964940 
o|substituted constant variable: r37874943 
o|substituted constant variable: f_37704944 
o|converted assignments to bindings: (rewrite-call/cc754) 
o|converted assignments to bindings: (rewrite-make-vector711) 
o|substituted constant variable: r39074952 
o|substituted constant variable: r38964953 
o|substituted constant variable: f_38424954 
o|substituted constant variable: r40104956 
o|substituted constant variable: r40104956 
o|substituted constant variable: r40104958 
o|substituted constant variable: r40104958 
o|substituted constant variable: f_39794960 
o|converted assignments to bindings: (build631) 
o|converted assignments to bindings: (rewrite-c-w-v564) 
o|converted assignments to bindings: (rewrite-c..r499) 
o|converted assignments to bindings: (rewrite-apply415) 
o|substituted constant variable: r41814967 
o|substituted constant variable: r42454971 
o|substituted constant variable: f_41134972 
o|converted assignments to bindings: (eqv?-id275) 
o|converted assignments to bindings: (op1249) 
o|substituted constant variable: f_43164976 
o|substituted constant variable: r44394981 
o|substituted constant variable: f_45274983 
o|substituted constant variable: f_44244984 
o|substituted constant variable: f_45634985 
o|substituted constant variable: a45964987 
o|substituted constant variable: a45964988 
o|substituted constant variable: r46024990 
o|substituted constant variable: f_46554992 
o|substituted constant variable: r47434998 
o|substituted constant variable: f_48255000 
o|substituted constant variable: g5153 
o|simplifications: ((let . 8)) 
o|replaced variables: 3 
o|removed binding forms: 392 
o|inlining procedure: k1620 
o|removed binding forms: 54 
o|substituted constant variable: r16215015 
o|removed binding forms: 1 
o|simplifications: ((if . 7) (##core#call . 390)) 
o|  call simplifications:
o|    zero?
o|    fx>=	3
o|    symbol?	2
o|    negative?
o|    -
o|    assq
o|    =
o|    fixnum?	2
o|    <=
o|    add1
o|    third	4
o|    proper-list?
o|    cadr	2
o|    cdr	4
o|    ##sys#check-list
o|    pair?	5
o|    cons	4
o|    ##sys#setslot
o|    second	9
o|    equal?	2
o|    first	24
o|    ##sys#slot	58
o|    flonum?	2
o|    not	4
o|    length	20
o|    eq?	61
o|    list	92
o|    ##sys#make-structure	67
o|    null?	5
o|    car	10
o|contracted procedure: k1626 
o|contracted procedure: k1620 
o|contracted procedure: k1711 
o|contracted procedure: k1656 
o|contracted procedure: k1667 
o|contracted procedure: k1670 
o|contracted procedure: k1675 
o|inlining procedure: k1686 
o|inlining procedure: k1686 
o|contracted procedure: k1699 
o|contracted procedure: k1705 
o|contracted procedure: k1702 
o|contracted procedure: k1889 
o|contracted procedure: k1725 
o|contracted procedure: k1728 
o|contracted procedure: k1730 
o|contracted procedure: k1753 
o|contracted procedure: k1756 
o|contracted procedure: k1769 
o|contracted procedure: k1779 
o|contracted procedure: k1776 
o|contracted procedure: k1797 
o|contracted procedure: k1807 
o|contracted procedure: k1804 
o|contracted procedure: k1825 
o|contracted procedure: k1831 
o|contracted procedure: k1837 
o|contracted procedure: k1848 
o|contracted procedure: k1851 
o|contracted procedure: k1905 
o|contracted procedure: k1914 
o|contracted procedure: k1925 
o|contracted procedure: k1936 
o|contracted procedure: k1939 
o|contracted procedure: k1941 
o|contracted procedure: k1952 
o|contracted procedure: k1955 
o|contracted procedure: k1964 
o|contracted procedure: k1974 
o|contracted procedure: k2000 
o|contracted procedure: k2013 
o|contracted procedure: k2073 
o|contracted procedure: k2019 
o|contracted procedure: k2022 
o|contracted procedure: k2047 
o|contracted procedure: k2061 
o|contracted procedure: k2050 
o|contracted procedure: k2214 
o|contracted procedure: k2107 
o|contracted procedure: k2116 
o|contracted procedure: k2126 
o|contracted procedure: k2129 
o|contracted procedure: k2145 
o|contracted procedure: k2148 
o|contracted procedure: k2156 
o|contracted procedure: k2167 
o|contracted procedure: k2180 
o|contracted procedure: k2185 
o|contracted procedure: k2195 
o|contracted procedure: k2259 
o|contracted procedure: k2242 
o|contracted procedure: k2253 
o|contracted procedure: k2256 
o|contracted procedure: k2449 
o|contracted procedure: k2273 
o|contracted procedure: k2276 
o|contracted procedure: k2278 
o|contracted procedure: k2283 
o|contracted procedure: k2289 
o|contracted procedure: k2292 
o|contracted procedure: k2305 
o|contracted procedure: k2308 
o|contracted procedure: k2313 
o|contracted procedure: k2405 
o|contracted procedure: k2319 
o|contracted procedure: k2336 
o|contracted procedure: k2339 
o|contracted procedure: k2358 
o|contracted procedure: k2361 
o|contracted procedure: k2393 
o|contracted procedure: k2367 
o|contracted procedure: k2370 
o|contracted procedure: k2381 
o|contracted procedure: k2384 
o|contracted procedure: k3238 
o|contracted procedure: k3243 
o|contracted procedure: k3250 
o|contracted procedure: k3255 
o|contracted procedure: k3260 
o|contracted procedure: k3279 
o|contracted procedure: k3282 
o|contracted procedure: k3293 
o|contracted procedure: k3296 
o|contracted procedure: k3318 
o|contracted procedure: k3307 
o|contracted procedure: k3320 
o|contracted procedure: k3487 
o|contracted procedure: k3366 
o|contracted procedure: k3369 
o|contracted procedure: k3374 
o|contracted procedure: k3385 
o|contracted procedure: k3388 
o|contracted procedure: k3398 
o|contracted procedure: k3401 
o|contracted procedure: k3430 
o|contracted procedure: k3433 
o|contracted procedure: k3467 
o|contracted procedure: k3594 
o|contracted procedure: k3540 
o|contracted procedure: k3553 
o|contracted procedure: k3559 
o|contracted procedure: k3556 
o|contracted procedure: k3570 
o|contracted procedure: k3573 
o|contracted procedure: k3587 
o|contracted procedure: k3584 
o|contracted procedure: k3650 
o|contracted procedure: k3601 
o|contracted procedure: k3612 
o|contracted procedure: k3615 
o|contracted procedure: k3637 
o|contracted procedure: k3626 
o|contracted procedure: k3643 
o|contracted procedure: k3646 
o|contracted procedure: k3640 
o|contracted procedure: k3692 
o|contracted procedure: k3657 
o|contracted procedure: k3668 
o|contracted procedure: k3671 
o|contracted procedure: k3687 
o|contracted procedure: k3682 
o|contracted procedure: k3766 
o|contracted procedure: k3699 
o|contracted procedure: k3702 
o|contracted procedure: k3712 
o|contracted procedure: k3715 
o|contracted procedure: k3734 
o|contracted procedure: k3736 
o|contracted procedure: k3746 
o|contracted procedure: k3838 
o|contracted procedure: k3773 
o|contracted procedure: k3776 
o|contracted procedure: k3781 
o|contracted procedure: k3784 
o|contracted procedure: k3796 
o|contracted procedure: k3809 
o|contracted procedure: k3812 
o|contracted procedure: k3818 
o|contracted procedure: k3975 
o|contracted procedure: k3845 
o|contracted procedure: k3848 
o|contracted procedure: k3858 
o|inlining procedure: k3861 
o|inlining procedure: k3861 
o|contracted procedure: k3872 
o|contracted procedure: k3890 
o|contracted procedure: k3892 
o|contracted procedure: k3898 
o|contracted procedure: k3901 
o|contracted procedure: k3915 
o|contracted procedure: k3926 
o|contracted procedure: k3944 
o|contracted procedure: k3948 
o|contracted procedure: k4041 
o|contracted procedure: k3982 
o|contracted procedure: k3993 
o|contracted procedure: k3996 
o|contracted procedure: k4007 
o|contracted procedure: k4015 
o|contracted procedure: k4022 
o|contracted procedure: k4059 
o|contracted procedure: k4062 
o|contracted procedure: k4073 
o|contracted procedure: k4075 
o|contracted procedure: k4080 
o|contracted procedure: k4087 
o|contracted procedure: k4095 
o|contracted procedure: k4102 
o|contracted procedure: k4105 
o|contracted procedure: k4305 
o|contracted procedure: k4116 
o|contracted procedure: k4119 
o|contracted procedure: k4121 
o|contracted procedure: k4141 
o|contracted procedure: k4144 
o|contracted procedure: k4167 
o|contracted procedure: k4170 
o|contracted procedure: k4183 
o|contracted procedure: k4186 
o|contracted procedure: k4212 
o|contracted procedure: k4215 
o|contracted procedure: k4241 
o|contracted procedure: k4247 
o|contracted procedure: k4253 
o|contracted procedure: k4264 
o|contracted procedure: k4267 
o|contracted procedure: k4419 
o|contracted procedure: k4319 
o|contracted procedure: k4325 
o|contracted procedure: k4336 
o|contracted procedure: k4339 
o|contracted procedure: k4341 
o|contracted procedure: k4358 
o|contracted procedure: k4372 
o|contracted procedure: k4379 
o|contracted procedure: k4405 
o|contracted procedure: k4558 
o|contracted procedure: k4427 
o|contracted procedure: k4520 
o|contracted procedure: k4430 
o|contracted procedure: k4435 
o|contracted procedure: k4441 
o|contracted procedure: k4452 
o|contracted procedure: k4455 
o|contracted procedure: k4476 
o|contracted procedure: k4489 
o|contracted procedure: k4491 
o|contracted procedure: k4498 
o|contracted procedure: k4530 
o|contracted procedure: k4537 
o|contracted procedure: k4566 
o|contracted procedure: k4692 
o|contracted procedure: k4685 
o|contracted procedure: k4572 
o|contracted procedure: k4583 
o|contracted procedure: k4586 
o|contracted procedure: k4599 
o|contracted procedure: k4604 
o|contracted procedure: k4610 
o|contracted procedure: k4621 
o|contracted procedure: k4624 
o|contracted procedure: k4640 
o|contracted procedure: k4643 
o|contracted procedure: k4658 
o|contracted procedure: k4665 
o|contracted procedure: k4702 
o|contracted procedure: k4713 
o|contracted procedure: k4716 
o|contracted procedure: k4821 
o|contracted procedure: k4724 
o|contracted procedure: k4735 
o|contracted procedure: k4738 
o|contracted procedure: k4745 
o|contracted procedure: k4756 
o|contracted procedure: k4759 
o|contracted procedure: k4780 
o|contracted procedure: k4793 
o|contracted procedure: k4795 
o|contracted procedure: k4802 
o|contracted procedure: k4828 
o|contracted procedure: k4835 
o|contracted procedure: k4859 
o|contracted procedure: k4868 
o|contracted procedure: k4871 
o|simplifications: ((let . 19)) 
o|removed binding forms: 250 
o|inlining procedure: k1957 
o|inlining procedure: k1957 
o|replaced variables: 8 
o|removed binding forms: 2 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|customizable procedures: (for-each-loop4475 k4769 k4465 k4347 op1249 k4154 k4156 rewrite-c..r499 build631 k3909 k3720 k2134 map-loop433453 k1740 k1742) 
o|calls to known targets: 59 
o|fast box initializations: 2 
o|dropping unused closure argument: f_2097 
o|dropping unused closure argument: f_1649 
*/
/* end of file */
