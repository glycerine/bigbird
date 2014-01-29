/* Generated from support.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:48
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: support.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file support.c
   unit: support
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[558];
static double C_possibly_force_alignment;


/* from k5421 */
static C_word C_fcall stub351(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub351(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k5414 */
static C_word C_fcall stub346(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub346(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(f_14516)
static void C_ccall f_14516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14518)
static void C_ccall f_14518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5534)
static void C_fcall f_5534(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14514)
static void C_ccall f_14514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10621)
static void C_ccall f_10621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10623)
static void C_ccall f_10623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9008)
static void C_fcall f_9008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10625)
static void C_ccall f_10625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8376)
static void C_ccall f_8376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10627)
static void C_ccall f_10627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7662)
static void C_ccall f_7662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14502)
static void C_ccall f_14502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10632)
static void C_ccall f_10632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10634)
static void C_ccall f_10634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10630)
static void C_ccall f_10630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10639)
static void C_ccall f_10639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10637)
static void C_ccall f_10637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10644)
static void C_ccall f_10644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10641)
static void C_ccall f_10641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7423)
static void C_ccall f_7423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10648)
static void C_ccall f_10648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8397)
static void C_ccall f_8397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10646)
static void C_ccall f_10646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10653)
static void C_ccall f_10653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10651)
static void C_ccall f_10651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7415)
static void C_fcall f_7415(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10658)
static void C_ccall f_10658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10655)
static void C_ccall f_10655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8067)
static void C_ccall f_8067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8069)
static void C_fcall f_8069(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7477)
static void C_ccall f_7477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7471)
static void C_ccall f_7471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10602)
static void C_ccall f_10602(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10608)
static void C_ccall f_10608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9120)
static void C_ccall f_9120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5060)
static void C_fcall f_5060(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10613)
static void C_ccall f_10613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_10619)
static void C_ccall f_10619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9110)
static void C_ccall f_9110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7077)
static void C_ccall f_7077(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5042)
static void C_fcall f_5042(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7063)
static void C_ccall f_7063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7066)
static void C_ccall f_7066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7435)
static void C_ccall f_7435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14538)
static void C_ccall f_14538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14531)
static void C_ccall f_14531(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_14531)
static void C_ccall f_14531r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_14529)
static void C_ccall f_14529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14526)
static void C_ccall f_14526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14523)
static void C_ccall f_14523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14520)
static void C_ccall f_14520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5031)
static void C_ccall f_5031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12658)
static void C_ccall f_12658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10660)
static void C_ccall f_10660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10662)
static void C_ccall f_10662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10667)
static void C_ccall f_10667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10671)
static void C_ccall f_10671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10673)
static void C_ccall f_10673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10683)
static void C_ccall f_10683(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10681)
static void C_ccall f_10681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10686)
static void C_ccall f_10686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10696)
static void C_fcall f_10696(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7459)
static void C_ccall f_7459(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7440)
static void C_ccall f_7440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7446)
static void C_ccall f_7446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9141)
static void C_ccall f_9141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5107)
static void C_fcall f_5107(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9135)
static void C_ccall f_9135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9160)
static void C_ccall f_9160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9161)
static void C_ccall f_9161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14129)
static void C_ccall f_14129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14121)
static void C_ccall f_14121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9156)
static void C_ccall f_9156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9154)
static void C_ccall f_9154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4815)
static void C_ccall f_4815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8480)
static void C_ccall f_8480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4942)
static void C_fcall f_4942(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9101)
static void C_ccall f_9101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8492)
static void C_ccall f_8492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9107)
static void C_ccall f_9107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7095)
static void C_ccall f_7095(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4834)
static void C_fcall f_4834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4923)
static void C_fcall f_4923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7081)
static void C_fcall f_7081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6251)
static void C_ccall f_6251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_14116)
static void C_ccall f_14116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13757)
static void C_ccall f_13757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14106)
static void C_ccall f_14106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13760)
static void C_ccall f_13760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14107)
static void C_ccall f_14107(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4807)
static void C_fcall f_4807(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4803)
static void C_ccall f_4803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13769)
static void C_ccall f_13769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13766)
static void C_ccall f_13766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14103)
static void C_ccall f_14103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14101)
static void C_ccall f_14101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13778)
static void C_ccall f_13778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13774)
static void C_ccall f_13774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8594)
static void C_ccall f_8594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13792)
static void C_ccall f_13792(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13795)
static void C_ccall f_13795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13797)
static void C_ccall f_13797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13799)
static void C_ccall f_13799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6206)
static void C_ccall f_6206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_13633)
static void C_ccall f_13633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13639)
static void C_ccall f_13639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13636)
static void C_ccall f_13636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13631)
static void C_ccall f_13631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8569)
static void C_fcall f_8569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8567)
static void C_ccall f_8567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13645)
static void C_ccall f_13645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13642)
static void C_ccall f_13642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13649)
static void C_ccall f_13649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4854)
static void C_fcall f_4854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12528)
static void C_fcall f_12528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6247)
static void C_ccall f_6247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_14139)
static void C_fcall f_14139(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14134)
static void C_ccall f_14134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14132)
static void C_ccall f_14132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11703)
static void C_fcall f_11703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11708)
static void C_ccall f_11708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13671)
static void C_fcall f_13671(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8754)
static void C_ccall f_8754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13675)
static void C_ccall f_13675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11712)
static void C_ccall f_11712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8521)
static void C_fcall f_8521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6210)
static void C_ccall f_6210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13680)
static void C_ccall f_13680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13685)
static void C_ccall f_13685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14151)
static void C_ccall f_14151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5410)
static void C_ccall f_5410(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8771)
static void C_fcall f_8771(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12552)
static void C_ccall f_12552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13611)
static void C_ccall f_13611(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14148)
static void C_ccall f_14148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8546)
static void C_ccall f_8546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13627)
static void C_ccall f_13627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13629)
static void C_ccall f_13629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13620)
static void C_ccall f_13620(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_13620)
static void C_ccall f_13620r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8796)
static void C_ccall f_8796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8502)
static void C_ccall f_8502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10839)
static void C_fcall f_10839(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7971)
static void C_ccall f_7971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8054)
static void C_ccall f_8054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7964)
static void C_ccall f_7964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7977)
static void C_ccall f_7977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11129)
static void C_fcall f_11129(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8727)
static void C_ccall f_8727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13605)
static void C_ccall f_13605(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8729)
static void C_fcall f_8729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7790)
static void C_ccall f_7790(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7955)
static void C_ccall f_7955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7952)
static void C_fcall f_7952(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5492)
static void C_fcall f_5492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11131)
static void C_ccall f_11131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7789)
static void C_fcall f_7789(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7957)
static void C_ccall f_7957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7772)
static void C_ccall f_7772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14174)
static void C_ccall f_14174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11159)
static void C_ccall f_11159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7760)
static void C_ccall f_7760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14165)
static void C_fcall f_14165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5448)
static void C_fcall f_5448(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8769)
static void C_ccall f_8769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8763)
static void C_ccall f_8763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7757)
static void C_ccall f_7757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14192)
static void C_fcall f_14192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13327)
static void C_ccall f_13327(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7742)
static void C_ccall f_7742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10827)
static void C_ccall f_10827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14185)
static void C_ccall f_14185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14189)
static void C_ccall f_14189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13331)
static void C_fcall f_13331(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13334)
static void C_ccall f_13334(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8704)
static void C_ccall f_8704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9369)
static void C_ccall f_9369(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13347)
static void C_ccall f_13347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13348)
static void C_ccall f_13348(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13341)
static void C_ccall f_13341(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13340)
static void C_ccall f_13340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9367)
static void C_ccall f_9367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9358)
static void C_ccall f_9358(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7727)
static void C_ccall f_7727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13354)
static void C_ccall f_13354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9354)
static void C_ccall f_9354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7549)
static void C_fcall f_7549(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7547)
static void C_ccall f_7547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7700)
static void C_ccall f_7700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7702)
static void C_fcall f_7702(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14579)
static void C_ccall f_14579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14572)
static void C_ccall f_14572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14577)
static void C_ccall f_14577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14575)
static void C_ccall f_14575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13380)
static void C_ccall f_13380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13386)
static void C_ccall f_13386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14561)
static void C_ccall f_14561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14566)
static void C_ccall f_14566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13390)
static void C_ccall f_13390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14592)
static void C_ccall f_14592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14594)
static void C_ccall f_14594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7279)
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7277)
static void C_ccall f_7277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7271)
static void C_ccall f_7271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14581)
static void C_ccall f_14581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10375)
static void C_fcall f_10375(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14586)
static void C_ccall f_14586(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10383)
static void C_ccall f_10383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10377)
static void C_ccall f_10377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10363)
static void C_ccall f_10363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10090)
static void C_ccall f_10090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7539)
static void C_fcall f_7539(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9329)
static void C_fcall f_9329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7528)
static void C_ccall f_7528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7515)
static void C_ccall f_7515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10754)
static void C_fcall f_10754(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7503)
static void C_ccall f_7503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7506)
static void C_ccall f_7506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7574)
static void C_ccall f_7574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10730)
static void C_fcall f_10730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10725)
static void C_ccall f_10725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7904)
static void C_ccall f_7904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10400)
static void C_ccall f_10400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12684)
static void C_fcall f_12684(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10406)
static void C_ccall f_10406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6721)
static void C_fcall f_6721(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10414)
static void C_ccall f_10414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10412)
static void C_fcall f_10412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10006)
static void C_ccall f_10006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13362)
static void C_fcall f_13362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10420)
static void C_ccall f_10420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12662)
static void C_ccall f_12662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10719)
static void C_ccall f_10719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11626)
static void C_ccall f_11626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11623)
static void C_ccall f_11623(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10434)
static void C_ccall f_10434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10021)
static void C_fcall f_10021(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11630)
static void C_ccall f_11630(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7946)
static void C_ccall f_7946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10440)
static void C_ccall f_10440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7921)
static void C_fcall f_7921(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14600)
static void C_ccall f_14600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13946)
static void C_ccall f_13946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10450)
static void C_ccall f_10450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10043)
static void C_ccall f_10043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10048)
static void C_ccall f_10048(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11658)
static void C_ccall f_11658(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11653)
static void C_ccall f_11653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13912)
static void C_ccall f_13912(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13917)
static void C_ccall f_13917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10054)
static void C_ccall f_10054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10468)
static void C_ccall f_10468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10059)
static void C_fcall f_10059(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7919)
static void C_ccall f_7919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13969)
static void C_ccall f_13969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10705)
static void C_ccall f_10705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13935)
static void C_ccall f_13935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13930)
static void C_ccall f_13930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11600)
static void C_ccall f_11600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13907)
static void C_ccall f_13907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13903)
static void C_ccall f_13903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4897)
static void C_ccall f_4897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11617)
static void C_ccall f_11617(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6297)
static void C_fcall f_6297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_13922)
static void C_ccall f_13922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13928)
static void C_ccall f_13928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10768)
static void C_fcall f_10768(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11664)
static void C_ccall f_11664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4977)
static void C_ccall f_4977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_fcall f_5006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4878)
static void C_ccall f_4878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11673)
static void C_fcall f_11673(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11681)
static void C_fcall f_11681(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11692)
static void C_fcall f_11692(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9697)
static void C_ccall f_9697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9681)
static void C_ccall f_9681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9688)
static void C_fcall f_9688(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9657)
static void C_ccall f_9657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13660)
static void C_ccall f_13660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13667)
static void C_ccall f_13667(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_13667)
static void C_ccall f_13667r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6973)
static void C_ccall f_6973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9675)
static void C_ccall f_9675(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9674)
static void C_ccall f_9674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9666)
static void C_ccall f_9666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9662)
static void C_ccall f_9662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9668)
static void C_ccall f_9668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9610)
static void C_ccall f_9610(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9601)
static void C_ccall f_9601(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10876)
static void C_ccall f_10876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10874)
static void C_fcall f_10874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9607)
static void C_fcall f_9607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13545)
static void C_fcall f_13545(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9632)
static void C_fcall f_9632(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9630)
static void C_ccall f_9630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10888)
static void C_fcall f_10888(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9298)
static void C_fcall f_9298(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8654)
static void C_ccall f_8654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9285)
static void C_ccall f_9285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9287)
static void C_fcall f_9287(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8664)
static void C_fcall f_8664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8670)
static void C_ccall f_8670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8679)
static void C_fcall f_8679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8677)
static void C_ccall f_8677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13500)
static void C_ccall f_13500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5763)
static void C_fcall f_5763(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9960)
static void C_ccall f_9960(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13519)
static void C_ccall f_13519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13510)
static void C_fcall f_13510(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8620)
static void C_fcall f_8620(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9952)
static void C_fcall f_9952(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8633)
static void C_ccall f_8633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8636)
static void C_ccall f_8636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9984)
static void C_fcall f_9984(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10127)
static void C_ccall f_10127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10122)
static void C_ccall f_10122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10134)
static void C_ccall f_10134(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10132)
static void C_ccall f_10132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9918)
static void C_ccall f_9918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_9918)
static void C_ccall f_9918r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_9911)
static void C_ccall f_9911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10180)
static void C_fcall f_10180(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10116)
static void C_ccall f_10116(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5740)
static void C_fcall f_5740(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9948)
static void C_ccall f_9948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10111)
static void C_ccall f_10111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9943)
static void C_ccall f_9943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10784)
static void C_ccall f_10784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6652)
static void C_ccall f_6652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6650)
static void C_fcall f_6650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9934)
static void C_ccall f_9934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6640)
static void C_ccall f_6640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10148)
static void C_ccall f_10148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10140)
static void C_ccall f_10140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10142)
static void C_ccall f_10142(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9902)
static void C_ccall f_9902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9907)
static void C_fcall f_9907(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13535)
static void C_ccall f_13535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13530)
static void C_ccall f_13530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13210)
static void C_ccall f_13210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5139)
static void C_fcall f_5139(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10105)
static void C_ccall f_10105(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13238)
static void C_ccall f_13238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5991)
static void C_ccall f_5991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5133)
static void C_ccall f_5133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13204)
static void C_ccall f_13204(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13203)
static void C_ccall f_13203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13250)
static void C_fcall f_13250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12419)
static void C_ccall f_12419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12414)
static void C_ccall f_12414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13229)
static void C_fcall f_13229(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13222)
static void C_fcall f_13222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12423)
static void C_ccall f_12423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13295)
static void C_ccall f_13295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9484)
static void C_ccall f_9484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6628)
static void C_fcall f_6628(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9487)
static void C_ccall f_9487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6600)
static void C_ccall f_6600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13265)
static void C_ccall f_13265(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9471)
static void C_fcall f_9471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6608)
static void C_ccall f_6608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13286)
static void C_fcall f_13286(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9493)
static void C_ccall f_9493(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9499)
static void C_ccall f_9499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9497)
static void C_ccall f_9497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10476)
static void C_ccall f_10476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10485)
static void C_ccall f_10485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6420)
static void C_ccall f_6420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10496)
static void C_ccall f_10496(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6488)
static void C_ccall f_6488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9596)
static void C_ccall f_9596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7196)
static void C_ccall f_7196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7190)
static void C_ccall f_7190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7188)
static void C_fcall f_7188(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_13997)
static void C_fcall f_13997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13995)
static void C_ccall f_13995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6440)
static void C_fcall f_6440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9545)
static void C_ccall f_9545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9558)
static void C_ccall f_9558(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9571)
static void C_fcall f_9571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5645)
static void C_fcall f_5645(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13982)
static void C_ccall f_13982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9564)
static void C_ccall f_9564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13987)
static void C_ccall f_13987(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13271)
static void C_ccall f_13271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13279)
static void C_fcall f_13279(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9569)
static void C_ccall f_9569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13954)
static void C_ccall f_13954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7486)
static void C_ccall f_7486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7480)
static void C_ccall f_7480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9501)
static void C_ccall f_9501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9503)
static void C_ccall f_9503(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9519)
static void C_ccall f_9519(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6438)
static void C_ccall f_6438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9533)
static void C_fcall f_9533(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13977)
static void C_ccall f_13977(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_13977)
static void C_ccall f_13977r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9509)
static void C_ccall f_9509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9743)
static void C_fcall f_9743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9527)
static void C_ccall f_9527(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9525)
static void C_ccall f_9525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9539)
static void C_ccall f_9539(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11559)
static void C_ccall f_11559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11554)
static void C_ccall f_11554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13824)
static void C_ccall f_13824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13821)
static void C_ccall f_13821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9556)
static void C_ccall f_9556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9550)
static void C_ccall f_9550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9764)
static void C_ccall f_9764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9766)
static void C_ccall f_9766(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13832)
static void C_ccall f_13832(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10199)
static void C_ccall f_10199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14260)
static void C_fcall f_14260(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14264)
static void C_ccall f_14264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9752)
static void C_ccall f_9752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7250)
static void C_ccall f_7250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7253)
static void C_ccall f_7253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7256)
static void C_ccall f_7256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14204)
static void C_ccall f_14204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10193)
static void C_ccall f_10193(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14207)
static void C_ccall f_14207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13850)
static void C_ccall f_13850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13857)
static void C_ccall f_13857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10166)
static void C_ccall f_10166(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10165)
static void C_ccall f_10165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8112)
static void C_ccall f_8112(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9055)
static void C_fcall f_9055(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8118)
static void C_fcall f_8118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14223)
static void C_ccall f_14223(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9511)
static void C_ccall f_9511(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10172)
static void C_ccall f_10172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9517)
static void C_ccall f_9517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14229)
static void C_ccall f_14229(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8121)
static void C_ccall f_8121(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9047)
static void C_ccall f_9047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8127)
static void C_ccall f_8127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_10159)
static void C_ccall f_10159(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9793)
static void C_fcall f_9793(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13804)
static void C_ccall f_13804(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14240)
static void C_ccall f_14240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10156)
static void C_ccall f_10156(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10150)
static void C_ccall f_10150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9738)
static void C_ccall f_9738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14238)
static void C_ccall f_14238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9735)
static void C_ccall f_9735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6496)
static void C_ccall f_6496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6492)
static void C_ccall f_6492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6490)
static void C_ccall f_6490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10279)
static void C_ccall f_10279(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14251)
static void C_ccall f_14251(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9033)
static void C_ccall f_9033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6479)
static void C_ccall f_6479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14255)
static void C_ccall f_14255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6474)
static void C_fcall f_6474(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6470)
static void C_ccall f_6470(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9038)
static void C_ccall f_9038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_11571)
static void C_ccall f_11571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14281)
static void C_ccall f_14281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11588)
static void C_ccall f_11588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8185)
static void C_ccall f_8185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9772)
static void C_ccall f_9772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7231)
static void C_ccall f_7231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7239)
static void C_ccall f_7239(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9723)
static void C_ccall f_9723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9727)
static void C_ccall f_9727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9726)
static void C_ccall f_9726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10201)
static void C_ccall f_10201(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14292)
static void C_ccall f_14292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8134)
static void C_ccall f_8134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8135)
static void C_ccall f_8135(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8149)
static void C_fcall f_8149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8158)
static void C_ccall f_8158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13560)
static void C_ccall f_13560(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13569)
static void C_fcall f_13569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8160)
static void C_fcall f_8160(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8102)
static void C_ccall f_8102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8104)
static void C_ccall f_8104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13599)
static void C_ccall f_13599(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12087)
static void C_ccall f_12087(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12083)
static void C_ccall f_12083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9176)
static void C_ccall f_9176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13447)
static void C_ccall f_13447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12067)
static void C_fcall f_12067(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13456)
static void C_ccall f_13456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12078)
static void C_fcall f_12078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9198)
static void C_ccall f_9198(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7389)
static void C_ccall f_7389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9196)
static void C_ccall f_9196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6594)
static void C_ccall f_6594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12045)
static void C_ccall f_12045(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12040)
static void C_ccall f_12040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6584)
static void C_fcall f_6584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6586)
static void C_ccall f_6586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12058)
static void C_ccall f_12058(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5245)
static void C_fcall f_5245(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7052)
static void C_ccall f_7052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7049)
static void C_ccall f_7049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7043)
static void C_ccall f_7043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7041)
static void C_ccall f_7041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12756)
static void C_fcall f_12756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13413)
static void C_ccall f_13413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7346)
static void C_ccall f_7346(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6556)
static void C_ccall f_6556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6554)
static void C_fcall f_6554(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7032)
static void C_ccall f_7032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5237)
static void C_ccall f_5237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6548)
static void C_ccall f_6548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14027)
static void C_fcall f_14027(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7023)
static void C_ccall f_7023(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6540)
static void C_ccall f_6540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14022)
static void C_ccall f_14022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7014)
static void C_ccall f_7014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6570)
static void C_ccall f_6570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5216)
static void C_ccall f_5216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6564)
static void C_ccall f_6564(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5311)
static void C_fcall f_5311(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_fcall f_5317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7304)
static void C_ccall f_7304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6515)
static void C_ccall f_6515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7309)
static void C_fcall f_7309(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7334)
static void C_ccall f_7334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5328)
static void C_ccall f_5328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6534)
static void C_ccall f_6534(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6524)
static void C_fcall f_6524(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6526)
static void C_ccall f_6526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5347)
static void C_ccall f_5347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13421)
static void C_ccall f_13421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13430)
static void C_ccall f_13430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13197)
static void C_ccall f_13197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13192)
static void C_ccall f_13192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13194)
static void C_fcall f_13194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13188)
static void C_ccall f_13188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14069)
static void C_ccall f_14069(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14066)
static void C_fcall f_14066(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14061)
static void C_ccall f_14061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12117)
static void C_fcall f_12117(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11022)
static void C_ccall f_11022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11020)
static void C_fcall f_11020(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_14312)
static void C_ccall f_14312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5899)
static void C_ccall f_5899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14305)
static void C_ccall f_14305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14303)
static void C_ccall f_14303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_14317)
static void C_ccall f_14317(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8998)
static void C_ccall f_8998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9380)
static void C_fcall f_9380(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14095)
static void C_ccall f_14095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14097)
static void C_ccall f_14097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14099)
static void C_ccall f_14099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6347)
static void C_ccall f_6347(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14091)
static void C_ccall f_14091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9378)
static void C_ccall f_9378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8351)
static void C_fcall f_8351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14343)
static void C_ccall f_14343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_14343)
static void C_ccall f_14343r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_14340)
static void C_ccall f_14340(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6364)
static void C_fcall f_6364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6362)
static void C_ccall f_6362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8954)
static void C_ccall f_8954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8957)
static void C_ccall f_8957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8958)
static void C_ccall f_8958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14451)
static void C_ccall f_14451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11099)
static void C_ccall f_11099(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11095)
static void C_ccall f_11095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14057)
static void C_ccall f_14057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14052)
static void C_ccall f_14052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14455)
static void C_ccall f_14455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5905)
static C_word C_fcall f_5905(C_word t0,C_word t1);
C_noret_decl(f_11034)
static void C_fcall f_11034(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14443)
static void C_ccall f_14443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14440)
static void C_ccall f_14440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14083)
static void C_ccall f_14083(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14082)
static void C_ccall f_14082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14089)
static void C_ccall f_14089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5803)
static void C_ccall f_5803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8973)
static void C_ccall f_8973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14382)
static void C_ccall f_14382(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14386)
static void C_ccall f_14386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14075)
static void C_ccall f_14075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14076)
static void C_ccall f_14076(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4707)
static void C_fcall f_4707(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8980)
static void C_ccall f_8980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8917)
static void C_ccall f_8917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8911)
static void C_ccall f_8911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11057)
static void C_fcall f_11057(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8927)
static void C_ccall f_8927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8922)
static void C_ccall f_8922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4761)
static void C_fcall f_4761(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10546)
static void C_ccall f_10546(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9842)
static void C_ccall f_9842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6152)
static void C_fcall f_6152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8937)
static void C_ccall f_8937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14407)
static void C_ccall f_14407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_14407)
static void C_ccall f_14407r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8932)
static void C_ccall f_8932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8930)
static void C_ccall f_8930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10552)
static void C_ccall f_10552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8939)
static void C_ccall f_8939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6397)
static void C_fcall f_6397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6391)
static void C_ccall f_6391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8301)
static void C_ccall f_8301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9894)
static void C_ccall f_9894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8309)
static void C_fcall f_8309(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8307)
static void C_ccall f_8307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9896)
static void C_ccall f_9896(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9880)
static void C_ccall f_9880(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10507)
static void C_ccall f_10507(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9888)
static void C_ccall f_9888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9886)
static void C_ccall f_9886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7374)
static void C_ccall f_7374(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10500)
static void C_ccall f_10500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10505)
static void C_ccall f_10505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6112)
static void C_fcall f_6112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9465)
static void C_ccall f_9465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8320)
static void C_fcall f_8320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9825)
static void C_ccall f_9825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9828)
static void C_fcall f_9828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6132)
static void C_fcall f_6132(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13887)
static void C_ccall f_13887(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13884)
static void C_ccall f_13884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9211)
static void C_ccall f_9211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9210)
static void C_ccall f_9210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8867)
static void C_ccall f_8867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13892)
static void C_ccall f_13892(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13898)
static void C_ccall f_13898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9203)
static void C_ccall f_9203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9201)
static void C_ccall f_9201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9208)
static void C_ccall f_9208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13745)
static void C_ccall f_13745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8884)
static void C_ccall f_8884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14432)
static void C_ccall f_14432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7168)
static void C_ccall f_7168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_fcall f_4741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9222)
static void C_ccall f_9222(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8899)
static void C_ccall f_8899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8896)
static void C_ccall f_8896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14423)
static void C_ccall f_14423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14429)
static void C_ccall f_14429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10292)
static void C_ccall f_10292(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9815)
static void C_ccall f_9815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8451)
static void C_ccall f_8451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10298)
static void C_ccall f_10298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9819)
static void C_ccall f_9819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14361)
static void C_ccall f_14361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8458)
static void C_fcall f_8458(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14364)
static void C_ccall f_14364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_14364)
static void C_ccall f_14364r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7143)
static void C_fcall f_7143(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12849)
static void C_fcall f_12849(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9800)
static void C_ccall f_9800(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9806)
static void C_ccall f_9806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f15853)
static void C_ccall f15853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10582)
static void C_fcall f_10582(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13786)
static void C_ccall f_13786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9270)
static void C_ccall f_9270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9276)
static void C_ccall f_9276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12829)
static void C_fcall f_12829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10591)
static void C_ccall f_10591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13712)
static void C_fcall f_13712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_13710)
static void C_ccall f_13710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10285)
static void C_ccall f_10285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13725)
static void C_ccall f_13725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9405)
static void C_ccall f_9405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10253)
static void C_ccall f_10253(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10250)
static void C_ccall f_10250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10259)
static void C_ccall f_10259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10330)
static void C_ccall f_10330(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13733)
static void C_ccall f_13733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10369)
static void C_ccall f_10369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8873)
static void C_fcall f_8873(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9423)
static void C_fcall f_9423(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10336)
static void C_ccall f_10336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9231)
static void C_ccall f_9231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9233)
static void C_fcall f_9233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_10347)
static void C_ccall f_10347(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10322)
static void C_ccall f_10322(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9258)
static void C_ccall f_9258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9434)
static void C_fcall f_9434(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10328)
static void C_ccall f_10328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7126)
static void C_ccall f_7126(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10931)
static void C_fcall f_10931(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7897)
static void C_ccall f_7897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9264)
static void C_ccall f_9264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7889)
static void C_ccall f_7889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8418)
static void C_ccall f_8418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7101)
static void C_ccall f_7101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12886)
static void C_fcall f_12886(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7864)
static void C_fcall f_7864(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7862)
static void C_ccall f_7862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8233)
static void C_ccall f_8233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12865)
static void C_fcall f_12865(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8448)
static void C_ccall f_8448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8208)
static void C_fcall f_8208(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8206)
static void C_ccall f_8206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7846)
static void C_ccall f_7846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7836)
static void C_ccall f_7836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7649)
static void C_ccall f_7649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10985)
static void C_ccall f_10985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13497)
static void C_fcall f_13497(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10983)
static void C_fcall f_10983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7811)
static void C_fcall f_7811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14475)
static void C_ccall f_14475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7809)
static void C_ccall f_7809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14478)
static void C_ccall f_14478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9064)
static void C_ccall f_9064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9065)
static void C_ccall f_9065(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14460)
static void C_ccall f_14460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14466)
static void C_ccall f_14466(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14465)
static void C_ccall f_14465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7683)
static void C_ccall f_7683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14493)
static void C_fcall f_14493(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9085)
static void C_ccall f_9085(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14488)
static void C_ccall f_14488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10957)
static void C_fcall f_10957(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10908)
static void C_fcall f_10908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14559)
static void C_ccall f_14559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14555)
static void C_ccall f_14555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5574)
static void C_ccall f_5574(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7622)
static void C_ccall f_7622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7624)
static void C_fcall f_7624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14544)
static void C_ccall f_14544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9072)
static void C_ccall f_9072(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9071)
static void C_ccall f_9071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9078)
static void C_ccall f_9078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8294)
static void C_ccall f_8294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8291)
static void C_ccall f_8291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8094)
static void C_ccall f_8094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7603)
static void C_ccall f_7603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;

C_noret_decl(trf_5534)
static void C_fcall trf_5534(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5534(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5534(t0,t1,t2,t3);}

C_noret_decl(trf_9008)
static void C_fcall trf_9008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9008(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9008(t0,t1,t2);}

C_noret_decl(trf_7415)
static void C_fcall trf_7415(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7415(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7415(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8069)
static void C_fcall trf_8069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8069(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8069(t0,t1,t2);}

C_noret_decl(trf_5060)
static void C_fcall trf_5060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5060(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5060(t0,t1,t2,t3);}

C_noret_decl(trf_5042)
static void C_fcall trf_5042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5042(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5042(t0,t1);}

C_noret_decl(trf_10696)
static void C_fcall trf_10696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10696(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10696(t0,t1,t2);}

C_noret_decl(trf_5107)
static void C_fcall trf_5107(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5107(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5107(t0,t1,t2,t3);}

C_noret_decl(trf_4942)
static void C_fcall trf_4942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4942(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4942(t0,t1,t2);}

C_noret_decl(trf_4834)
static void C_fcall trf_4834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4834(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4834(t0,t1,t2);}

C_noret_decl(trf_4923)
static void C_fcall trf_4923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4923(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4923(t0,t1);}

C_noret_decl(trf_7081)
static void C_fcall trf_7081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7081(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7081(t0,t1,t2);}

C_noret_decl(trf_4807)
static void C_fcall trf_4807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4807(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4807(t0,t1,t2);}

C_noret_decl(trf_8569)
static void C_fcall trf_8569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8569(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8569(t0,t1,t2);}

C_noret_decl(trf_4854)
static void C_fcall trf_4854(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4854(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4854(t0,t1,t2);}

C_noret_decl(trf_12528)
static void C_fcall trf_12528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12528(t0,t1);}

C_noret_decl(trf_14139)
static void C_fcall trf_14139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14139(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14139(t0,t1,t2);}

C_noret_decl(trf_11703)
static void C_fcall trf_11703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11703(t0,t1);}

C_noret_decl(trf_13671)
static void C_fcall trf_13671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13671(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13671(t0,t1);}

C_noret_decl(trf_8521)
static void C_fcall trf_8521(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8521(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8521(t0,t1,t2);}

C_noret_decl(trf_8771)
static void C_fcall trf_8771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8771(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8771(t0,t1,t2);}

C_noret_decl(trf_10839)
static void C_fcall trf_10839(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10839(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10839(t0,t1);}

C_noret_decl(trf_11129)
static void C_fcall trf_11129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11129(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11129(t0,t1);}

C_noret_decl(trf_8729)
static void C_fcall trf_8729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8729(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8729(t0,t1,t2);}

C_noret_decl(trf_7952)
static void C_fcall trf_7952(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7952(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7952(t0,t1);}

C_noret_decl(trf_5492)
static void C_fcall trf_5492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5492(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5492(t0,t1,t2);}

C_noret_decl(trf_7789)
static void C_fcall trf_7789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7789(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7789(t0,t1);}

C_noret_decl(trf_14165)
static void C_fcall trf_14165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14165(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14165(t0,t1,t2);}

C_noret_decl(trf_5448)
static void C_fcall trf_5448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5448(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5448(t0,t1);}

C_noret_decl(trf_14192)
static void C_fcall trf_14192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14192(t0,t1);}

C_noret_decl(trf_13331)
static void C_fcall trf_13331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13331(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_13331(t0,t1,t2,t3);}

C_noret_decl(trf_7549)
static void C_fcall trf_7549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7549(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7549(t0,t1,t2);}

C_noret_decl(trf_7702)
static void C_fcall trf_7702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7702(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7702(t0,t1,t2);}

C_noret_decl(trf_7279)
static void C_fcall trf_7279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7279(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7279(t0,t1,t2);}

C_noret_decl(trf_10375)
static void C_fcall trf_10375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10375(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10375(t0,t1);}

C_noret_decl(trf_7539)
static void C_fcall trf_7539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7539(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7539(t0,t1);}

C_noret_decl(trf_9329)
static void C_fcall trf_9329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9329(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9329(t0,t1,t2);}

C_noret_decl(trf_10754)
static void C_fcall trf_10754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10754(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10754(t0,t1);}

C_noret_decl(trf_10730)
static void C_fcall trf_10730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10730(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10730(t0,t1,t2);}

C_noret_decl(trf_12684)
static void C_fcall trf_12684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12684(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12684(t0,t1);}

C_noret_decl(trf_6721)
static void C_fcall trf_6721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6721(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6721(t0,t1);}

C_noret_decl(trf_10412)
static void C_fcall trf_10412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10412(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10412(t0,t1);}

C_noret_decl(trf_13362)
static void C_fcall trf_13362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13362(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13362(t0,t1);}

C_noret_decl(trf_10021)
static void C_fcall trf_10021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10021(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10021(t0,t1,t2,t3);}

C_noret_decl(trf_7921)
static void C_fcall trf_7921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7921(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7921(t0,t1,t2);}

C_noret_decl(trf_10059)
static void C_fcall trf_10059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10059(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10059(t0,t1,t2,t3);}

C_noret_decl(trf_6297)
static void C_fcall trf_6297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6297(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6297(t0,t1);}

C_noret_decl(trf_10768)
static void C_fcall trf_10768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10768(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10768(t0,t1);}

C_noret_decl(trf_5006)
static void C_fcall trf_5006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5006(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5006(t0,t1,t2);}

C_noret_decl(trf_11673)
static void C_fcall trf_11673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11673(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11673(t0,t1);}

C_noret_decl(trf_11681)
static void C_fcall trf_11681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11681(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11681(t0,t1);}

C_noret_decl(trf_11692)
static void C_fcall trf_11692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11692(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11692(t0,t1);}

C_noret_decl(trf_9688)
static void C_fcall trf_9688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9688(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9688(t0,t1,t2);}

C_noret_decl(trf_10874)
static void C_fcall trf_10874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10874(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10874(t0,t1);}

C_noret_decl(trf_9607)
static void C_fcall trf_9607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9607(t0,t1,t2);}

C_noret_decl(trf_13545)
static void C_fcall trf_13545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13545(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13545(t0,t1);}

C_noret_decl(trf_9632)
static void C_fcall trf_9632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9632(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9632(t0,t1,t2);}

C_noret_decl(trf_10888)
static void C_fcall trf_10888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10888(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10888(t0,t1);}

C_noret_decl(trf_9298)
static void C_fcall trf_9298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9298(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9298(t0,t1);}

C_noret_decl(trf_9287)
static void C_fcall trf_9287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9287(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9287(t0,t1,t2,t3);}

C_noret_decl(trf_8664)
static void C_fcall trf_8664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8664(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8664(t0,t1);}

C_noret_decl(trf_8679)
static void C_fcall trf_8679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8679(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8679(t0,t1,t2);}

C_noret_decl(trf_5763)
static void C_fcall trf_5763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5763(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5763(t0,t1);}

C_noret_decl(trf_13510)
static void C_fcall trf_13510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13510(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13510(t0,t1,t2);}

C_noret_decl(trf_8620)
static void C_fcall trf_8620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8620(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8620(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9952)
static void C_fcall trf_9952(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9952(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9952(t0,t1,t2,t3);}

C_noret_decl(trf_9984)
static void C_fcall trf_9984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9984(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9984(t0,t1,t2,t3);}

C_noret_decl(trf_10180)
static void C_fcall trf_10180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10180(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10180(t0,t1);}

C_noret_decl(trf_5740)
static void C_fcall trf_5740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5740(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5740(t0,t1,t2);}

C_noret_decl(trf_6650)
static void C_fcall trf_6650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6650(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6650(t0,t1);}

C_noret_decl(trf_9907)
static void C_fcall trf_9907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9907(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9907(t0,t1);}

C_noret_decl(trf_5139)
static void C_fcall trf_5139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5139(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5139(t0,t1,t2,t3);}

C_noret_decl(trf_13250)
static void C_fcall trf_13250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13250(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13250(t0,t1);}

C_noret_decl(trf_13229)
static void C_fcall trf_13229(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13229(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13229(t0,t1,t2);}

C_noret_decl(trf_13222)
static void C_fcall trf_13222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13222(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13222(t0,t1);}

C_noret_decl(trf_6628)
static void C_fcall trf_6628(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6628(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6628(t0,t1,t2);}

C_noret_decl(trf_9471)
static void C_fcall trf_9471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9471(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9471(t0,t1,t2);}

C_noret_decl(trf_13286)
static void C_fcall trf_13286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13286(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13286(t0,t1,t2);}

C_noret_decl(trf_7188)
static void C_fcall trf_7188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7188(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7188(t0,t1);}

C_noret_decl(trf_13997)
static void C_fcall trf_13997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13997(t0,t1,t2);}

C_noret_decl(trf_6440)
static void C_fcall trf_6440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6440(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6440(t0,t1,t2);}

C_noret_decl(trf_9571)
static void C_fcall trf_9571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9571(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9571(t0,t1,t2);}

C_noret_decl(trf_5645)
static void C_fcall trf_5645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5645(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5645(t0,t1);}

C_noret_decl(trf_13279)
static void C_fcall trf_13279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13279(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13279(t0,t1);}

C_noret_decl(trf_9533)
static void C_fcall trf_9533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9533(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9533(t0,t1,t2);}

C_noret_decl(trf_9743)
static void C_fcall trf_9743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9743(t0,t1,t2);}

C_noret_decl(trf_14260)
static void C_fcall trf_14260(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14260(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_14260(t0,t1);}

C_noret_decl(trf_9055)
static void C_fcall trf_9055(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9055(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9055(t0,t1,t2,t3);}

C_noret_decl(trf_8118)
static void C_fcall trf_8118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8118(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8118(t0,t1,t2);}

C_noret_decl(trf_9793)
static void C_fcall trf_9793(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9793(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9793(t0,t1);}

C_noret_decl(trf_6474)
static void C_fcall trf_6474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6474(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6474(t0,t1);}

C_noret_decl(trf_8149)
static void C_fcall trf_8149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8149(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8149(t0,t1);}

C_noret_decl(trf_13569)
static void C_fcall trf_13569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13569(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13569(t0,t1,t2);}

C_noret_decl(trf_8160)
static void C_fcall trf_8160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8160(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8160(t0,t1,t2);}

C_noret_decl(trf_12067)
static void C_fcall trf_12067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12067(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12067(t0,t1);}

C_noret_decl(trf_12078)
static void C_fcall trf_12078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12078(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12078(t0,t1);}

C_noret_decl(trf_6584)
static void C_fcall trf_6584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6584(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6584(t0,t1);}

C_noret_decl(trf_5245)
static void C_fcall trf_5245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5245(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5245(t0,t1,t2,t3);}

C_noret_decl(trf_12756)
static void C_fcall trf_12756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12756(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12756(t0,t1);}

C_noret_decl(trf_6554)
static void C_fcall trf_6554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6554(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6554(t0,t1);}

C_noret_decl(trf_14027)
static void C_fcall trf_14027(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14027(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14027(t0,t1,t2);}

C_noret_decl(trf_5311)
static void C_fcall trf_5311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5311(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5311(t0,t1);}

C_noret_decl(trf_5317)
static void C_fcall trf_5317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5317(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5317(t0,t1);}

C_noret_decl(trf_7309)
static void C_fcall trf_7309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7309(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7309(t0,t1,t2);}

C_noret_decl(trf_6524)
static void C_fcall trf_6524(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6524(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6524(t0,t1);}

C_noret_decl(trf_13194)
static void C_fcall trf_13194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13194(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13194(t0,t1,t2);}

C_noret_decl(trf_5292)
static void C_fcall trf_5292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5292(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5292(t0,t1,t2);}

C_noret_decl(trf_14066)
static void C_fcall trf_14066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14066(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_14066(t0,t1,t2,t3);}

C_noret_decl(trf_12117)
static void C_fcall trf_12117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12117(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12117(t0,t1);}

C_noret_decl(trf_11020)
static void C_fcall trf_11020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11020(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11020(t0,t1);}

C_noret_decl(trf_9380)
static void C_fcall trf_9380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9380(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9380(t0,t1,t2);}

C_noret_decl(trf_8351)
static void C_fcall trf_8351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8351(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8351(t0,t1,t2);}

C_noret_decl(trf_6364)
static void C_fcall trf_6364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6364(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6364(t0,t1);}

C_noret_decl(trf_11034)
static void C_fcall trf_11034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11034(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11034(t0,t1);}

C_noret_decl(trf_4707)
static void C_fcall trf_4707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4707(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4707(t0,t1);}

C_noret_decl(trf_11057)
static void C_fcall trf_11057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11057(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11057(t0,t1);}

C_noret_decl(trf_4761)
static void C_fcall trf_4761(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4761(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4761(t0,t1,t2);}

C_noret_decl(trf_6152)
static void C_fcall trf_6152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6152(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6152(t0,t1,t2);}

C_noret_decl(trf_6397)
static void C_fcall trf_6397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6397(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6397(t0,t1,t2);}

C_noret_decl(trf_8309)
static void C_fcall trf_8309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8309(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8309(t0,t1,t2,t3);}

C_noret_decl(trf_6112)
static void C_fcall trf_6112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6112(t0,t1,t2);}

C_noret_decl(trf_8320)
static void C_fcall trf_8320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8320(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8320(t0,t1);}

C_noret_decl(trf_9828)
static void C_fcall trf_9828(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9828(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9828(t0,t1);}

C_noret_decl(trf_6132)
static void C_fcall trf_6132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6132(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6132(t0,t1,t2);}

C_noret_decl(trf_4741)
static void C_fcall trf_4741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4741(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4741(t0,t1,t2);}

C_noret_decl(trf_8458)
static void C_fcall trf_8458(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8458(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8458(t0,t1,t2,t3);}

C_noret_decl(trf_7143)
static void C_fcall trf_7143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7143(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7143(t0,t1,t2);}

C_noret_decl(trf_12849)
static void C_fcall trf_12849(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12849(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12849(t0,t1);}

C_noret_decl(trf_10582)
static void C_fcall trf_10582(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10582(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10582(t0,t1,t2);}

C_noret_decl(trf_12829)
static void C_fcall trf_12829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12829(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12829(t0,t1);}

C_noret_decl(trf_13712)
static void C_fcall trf_13712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13712(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_13712(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8873)
static void C_fcall trf_8873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8873(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8873(t0,t1,t2);}

C_noret_decl(trf_9423)
static void C_fcall trf_9423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9423(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9423(t0,t1,t2,t3);}

C_noret_decl(trf_9233)
static void C_fcall trf_9233(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9233(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9233(t0,t1,t2);}

C_noret_decl(trf_9434)
static void C_fcall trf_9434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9434(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9434(t0,t1);}

C_noret_decl(trf_10931)
static void C_fcall trf_10931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10931(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10931(t0,t1);}

C_noret_decl(trf_12886)
static void C_fcall trf_12886(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12886(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12886(t0,t1);}

C_noret_decl(trf_7864)
static void C_fcall trf_7864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7864(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7864(t0,t1,t2);}

C_noret_decl(trf_12865)
static void C_fcall trf_12865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12865(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12865(t0,t1);}

C_noret_decl(trf_8208)
static void C_fcall trf_8208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8208(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8208(t0,t1,t2);}

C_noret_decl(trf_13497)
static void C_fcall trf_13497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13497(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_13497(t0,t1,t2,t3);}

C_noret_decl(trf_10983)
static void C_fcall trf_10983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10983(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10983(t0,t1);}

C_noret_decl(trf_7811)
static void C_fcall trf_7811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7811(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7811(t0,t1,t2);}

C_noret_decl(trf_14493)
static void C_fcall trf_14493(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14493(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14493(t0,t1,t2);}

C_noret_decl(trf_10957)
static void C_fcall trf_10957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10957(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10957(t0,t1);}

C_noret_decl(trf_10908)
static void C_fcall trf_10908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10908(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10908(t0,t1);}

C_noret_decl(trf_7624)
static void C_fcall trf_7624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7624(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7624(t0,t1,t2);}

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

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

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

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

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

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

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

/* k14515 in k14513 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1602: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k14517 in k14515 in k14513 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1602: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[543],((C_word*)t0)[4]);}

/* loop in follow-without-loop in k4698 in k4665 in k4663 */
static void C_fcall f_5534(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5534,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_member(t2,t3))){
/* support.scm:241: abort */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5549,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:242: proc */
t5=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}}

/* k14513 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14514,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14516,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1602: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[544],t2);}

/* k10620 in k10617 */
static void C_ccall f_10621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10621,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:987: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k10622 in k10620 in k10617 */
static void C_ccall f_10623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:987: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[334],((C_word*)t0)[8]);}

/* map-loop1814 */
static void C_fcall f_9008(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9008,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9033,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:690: g1820 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:987: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[8]);}

/* k8375 in map-loop1590 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8376(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8376,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8351(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8351(t6,((C_word*)t0)[5],t5);}}

/* k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[8]);}

/* f_7662 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7662,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k14501 in for-each-loop3917 in k14487 in k14464 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14493(t3,((C_word*)t0)[4],t2);}

/* k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* support.scm:988: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[8],((C_word*)t0)[7]);}

/* k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[7]);}

/* k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10630,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:988: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[333],*((C_word*)lf[13]+1));}

/* k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:989: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[6]);}

/* k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10637,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* support.scm:989: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[332],*((C_word*)lf[13]+1));}

/* k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10644,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:990: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[331],*((C_word*)lf[13]+1));}

/* k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[6]);}

/* f_7423 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7423,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k10647 in k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[5]);}

/* k8396 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8397,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list3(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:990: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}

/* k10652 in k10649 in k10647 in k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:991: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10649 in k10647 in k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10651,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:991: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[330],*((C_word*)lf[13]+1));}

/* loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7415(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7415,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7423,tmp=(C_word)a,a+=2,tmp);
t6=C_i_cadr(((C_word*)t0)[2]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7452,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* support.scm:567: reverse */
t8=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t5=C_i_caar(t2);
t6=C_eqp(lf[233],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7459,tmp=(C_word)a,a+=2,tmp);
t8=C_i_cadr(((C_word*)t0)[2]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7486,a[2]=t8,a[3]=t7,a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t10=C_a_i_cons(&a,2,lf[235],t3);
/* support.scm:573: reverse */
t11=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
t7=t2;
t8=C_u_i_cdr(t7);
t9=C_i_caar(t2);
t10=C_a_i_cons(&a,2,t9,t3);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7503,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t8,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7506,a[2]=((C_word*)t0)[3],a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* support.scm:577: cadar */
t13=*((C_word*)lf[234]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t2);}}}

/* k10656 in k10654 in k10652 in k10649 in k10647 in k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10658,2,t0,t1);}
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10660,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:992: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[329],*((C_word*)lf[13]+1));}

/* k10654 in k10652 in k10649 in k10647 in k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k8065 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:617: g1435 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[247],((C_word*)t0)[4],t1);}

/* map-loop1442 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8069(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8069,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8094,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:617: g1448 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7476 in k7485 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7477,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:574: reverse */
t3=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k7470 in k7485 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:571: g1198 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[232],((C_word*)t0)[4],t1);}

/* ##compiler#print-program-statistics in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10602(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10602,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10608,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10613,tmp=(C_word)a,a+=2,tmp);
/* support.scm:983: ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* f_10608 in print-program-statistics in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10608,2,t0,t1);}
/* support.scm:985: compute-database-statistics */
t2=*((C_word*)lf[325]+1);
f_10496(3,t2,t1,((C_word*)t0)[2]);}

/* f_9120 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9120,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* loop in check-signature in k4698 in k4665 in k4663 */
static void C_fcall f_5060(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5060,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* support.scm:141: err */
t4=((C_word*)t0)[2];
f_5042(t4,t1);}}
else{
t4=C_i_symbolp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_i_nullp(t2))){
/* support.scm:143: err */
t5=((C_word*)t0)[2];
f_5042(t5,t1);}
else{
t5=C_i_cdr(t2);
t6=C_i_cdr(t3);
/* support.scm:144: loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* f_10613 in print-program-statistics in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_10613,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10619,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* support.scm:986: debugging */
t10=*((C_word*)lf[11]+1);
f_4703(4,t10,t9,lf[336],lf[337]);}

/* k10617 */
static void C_ccall f_10619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10619,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* support.scm:987: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[335],*((C_word*)lf[13]+1));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_5549 in loop in follow-without-loop in k4698 in k4665 in k4663 */
static void C_ccall f_5549(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5549,3,t0,t1,t2);}
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* support.scm:242: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_5534(t4,t1,t2,t3);}

/* k9108 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:723: cfk */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_9101(2,t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7077(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_7077,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7081,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8102,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:618: walk */
t9=((C_word*)t6)[1];
f_7081(t9,t8,t2);}

/* err in check-signature in k4698 in k4665 in k4663 */
static void C_fcall f_5042(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5042,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5049,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:138: real-name */
t3=*((C_word*)lf[45]+1);
f_13667(3,t3,t2,((C_word*)t0)[3]);}

/* ##compiler#sort-symbols in k4698 in k4665 in k4663 */
static void C_ccall f_5557(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5557,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5563,tmp=(C_word)a,a+=2,tmp);
/* support.scm:245: sort */
t4=*((C_word*)lf[93]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* ##compiler#qnode in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7063,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7066,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,t2);
/* support.scm:521: g1048 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[95],t4,C_SCHEME_END_OF_LIST);}

/* f_7066 in qnode in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7066,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k5048 in err in check-signature in k4698 in k4665 in k4663 */
static void C_ccall f_5049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* support.scm:139: map-llist */
t4=*((C_word*)lf[42]+1);
f_5000(4,t4,t2,*((C_word*)lf[45]+1),t3);}

/* k7434 in k7451 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:565: g1188 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[232],((C_word*)t0)[4],t1);}

/* k14537 in print-version in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14544,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1616: chicken-version */
t3=*((C_word*)lf[300]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_SCHEME_TRUE);}

/* k5051 in k5048 in err in check-signature in k4698 in k4665 in k4663 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:137: quit */
t2=*((C_word*)lf[26]+1);
f_4905(5,t2,((C_word*)t0)[2],lf[44],((C_word*)t0)[3],t1);}

/* ##compiler#print-version in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14531(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_14531r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_14531r(t0,t1,t2);}}

static void C_ccall f_14531r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14538,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
/* support.scm:1615: print* */
t6=*((C_word*)lf[548]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[549]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f15853,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1616: chicken-version */
t7=*((C_word*)lf[300]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,C_SCHEME_TRUE);}}

/* k14528 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1601: file-exists? */
t2=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k14524 in k14521 in k14519 in k14517 in k14515 in k14513 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1602: debugging */
t2=*((C_word*)lf[11]+1);
f_4703(4,t2,((C_word*)t0)[2],lf[542],t1);}

/* k14521 in k14519 in k14517 in k14515 in k14513 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1602: get-output-string */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5027 in loop in map-llist in k4698 in k4665 in k4663 */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5031,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* support.scm:133: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5006(t5,t2,t4);}

/* k14519 in k14517 in k14515 in k14513 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5030 in k5027 in loop in map-llist in k4698 in k4665 in k4663 */
static void C_ccall f_5031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5031,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##compiler#check-signature in k4698 in k4665 in k4663 */
static void C_ccall f_5038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5038,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5042,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5060,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5060(t9,t1,t3,t4);}

/* ##compiler#foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12658,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12662,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1254: final-foreign-type */
t5=*((C_word*)lf[430]+1);
f_11617(3,t5,t4,t2);}

/* k10659 in k10656 in k10654 in k10652 in k10649 in k10647 in k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:992: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k10661 in k10659 in k10656 in k10654 in k10652 in k10649 in k10647 in k10645 in k10642 in k10640 in k10638 in k10635 in k10633 in k10631 in k10628 in k10626 in k10624 in k10622 in k10620 in k10617 */
static void C_ccall f_10662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* ##compiler#pprint-expressions-to-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10667,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10671,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* support.scm:998: open-output-file */
t5=*((C_word*)lf[342]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
t5=t4;
f_10671(2,t5,*((C_word*)lf[13]+1));}}

/* k4781 in k4779 in k4777 in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(((C_word*)t0)[3],*((C_word*)lf[9]+1)))){
/* support.scm:75: dump */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4761(t3,t2,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}}

/* k4783 in k4781 in k4779 in k4777 in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k4779 in k4777 in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:73: flush-output */
t3=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k10670 in pprint-expressions-to-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10681,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:999: with-output-to-port */
t4=*((C_word*)lf[341]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,t3);}

/* k10672 in k10670 in pprint-expressions-to-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[2])){
/* support.scm:1006: close-output-port */
t2=*((C_word*)lf[339]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_10683 */
static void C_ccall f_10683(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10683,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10686,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1003: pretty-print */
t4=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_10681 in k10670 in pprint-expressions-to-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10681(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10683,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_i_check_list_2(t3,lf[33]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10696,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10696(t8,t1,t3);}

/* k10685 */
static void C_ccall f_10686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1004: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k7451 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7452,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7435,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7440,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7446,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:569: g1193 */
t6=t4;
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[222],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* for-each-loop2565 */
static void C_fcall f_10696(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10696,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10705,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1000: g2566 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_7459 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7459(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7459,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k4791 in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_7440 in k7451 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7440,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k7444 in k7451 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7446,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:568: reverse */
t3=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t2);}

/* k9140 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9141,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9135,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* support.scm:728: walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9055(t5,t3,t4,((C_word*)t0)[6]);}

/* loop in posq in k4698 in k4665 in k4663 */
static void C_fcall f_5107(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5107,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_car(t2);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=t2;
t7=C_u_i_cdr(t6);
t8=C_a_i_plus(&a,2,t3,C_fix(1));
/* support.scm:153: loop */
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* k4777 in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm:72: display */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* ##compiler#posq in k4698 in k4665 in k4663 */
static void C_ccall f_5101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5101,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5107,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5107(t7,t1,t3,C_fix(0));}

/* k9134 in k9140 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9135,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* support.scm:726: g1925 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[240],((C_word*)t0)[4],t2);}

/* k9159 in k9155 in k9153 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9161,tmp=(C_word)a,a+=2,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9176,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:737: walk */
t6=((C_word*)((C_word*)t0)[6])[1];
f_9055(t6,t4,t5,((C_word*)t0)[7]);}

/* f_9161 in k9159 in k9155 in k9153 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9161(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9161,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k14128 in k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(4));
/* support.scm:1505: write */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[5]);}

/* k14119 in k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[13]+1));}

/* k9155 in k9153 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9156,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9160,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* support.scm:734: put! */
t4=*((C_word*)lf[148]+1);
f_6206(6,t4,t3,((C_word*)t0)[8],t1,lf[282],C_SCHEME_TRUE);}

/* k9153 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:732: gensym */
t3=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* f_4810 in collect in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4810,3,t0,t1,t2);}
t3=*((C_word*)lf[8]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4813,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t5=((C_word*)t0)[2];
t6=C_u_i_car(t5);
/* support.scm:85: display */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t6,*((C_word*)lf[8]+1));}
else{
t5=((C_word*)t0)[2];
/* support.scm:85: display */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t3);}}

/* k4816 in k4814 in k4812 */
static void C_ccall f_4817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k4812 */
static void C_ccall f_4813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(124),((C_word*)t0)[3]);}

/* k4814 in k4812 */
static void C_ccall f_4815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:85: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k8479 in loop in k8447 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8480,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[233],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,1,t2));}

/* for-each-loop177 in k4924 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_fcall f_4942(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4942,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4951,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:120: g178 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9100 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* support.scm:712: alist-ref */
t4=*((C_word*)lf[281]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[4],t3,*((C_word*)lf[25]+1),((C_word*)t0)[4]);}

/* k4842 in for-each-loop103 in k4828 in collect in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4834(t3,((C_word*)t0)[4],t2);}

/* k8491 in k8501 in loop in k8447 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8492,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k4936 in k4933 in k4924 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:122: exit */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(70));}

/* k4933 in k4924 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:121: print-call-chain */
t3=*((C_word*)lf[34]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],C_fix(0),*((C_word*)lf[35]+1),lf[36]);}

/* k9106 in k9100 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:724: varnode */
t2=*((C_word*)lf[216]+1);
f_7049(3,t2,((C_word*)t0)[2],t1);}

/* f_7095 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7095(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7095,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[207]));}

/* for-each-loop103 in k4828 in collect in with-debugging-output in k4698 in k4665 in k4663 */
static void C_fcall f_4834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4834,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4843,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:82: g104 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_fcall f_4923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4923,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4962,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm:118: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[38],((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4975,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:119: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[39],((C_word*)t0)[2]);}}

/* k4924 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_i_check_list_2(t3,lf[33]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4942,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4942(t9,t5,t3);}

/* f_4926 in k4924 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4926,3,t0,t1,t2);}
/* support.scm:120: g193 */
t3=*((C_word*)lf[29]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[2],lf[32],t2);}

/* walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7081(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7081,NULL,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* support.scm:526: varnode */
t3=*((C_word*)lf[216]+1);
f_7049(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7095,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7101,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* support.scm:527: g1061 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k6250 in collect! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6251(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6251,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(1),t4));}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_slot(t1,C_fix(1));
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t3),t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_setslot(t1,C_fix(1),t5));}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:396: ##sys#hash-table-set! */
t4=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);}}

/* k4910 in k4908 in quit in k4698 in k4665 in k4663 */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:107: exit */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* k4916 in quit in k4698 in k4665 in k4663 */
static void C_ccall f_4917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[2],*((C_word*)lf[29]+1),((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* ##sys#syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4919r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4919r(t0,t1,t2,t3);}}

static void C_ccall f_4919r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=*((C_word*)lf[27]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4923,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t4)[1]))){
t8=((C_word*)t4)[1];
t9=C_i_car(((C_word*)t5)[1]);
t10=C_set_block_item(t4,0,t9);
t11=C_i_cdr(((C_word*)t5)[1]);
t12=C_set_block_item(t5,0,t11);
t13=t7;
f_4923(t13,t8);}
else{
t8=t7;
f_4923(t8,C_SCHEME_FALSE);}}

/* k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14116,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14121,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_greaterp(t2,C_fix(4)))){
t4=*((C_word*)lf[13]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14129,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(91),*((C_word*)lf[13]+1));}
else{
/* write-char/port */
t4=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],C_make_character(62),*((C_word*)lf[13]+1));}}

/* k13756 in k13759 in k13732 in loop in k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1435: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_13712(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k4908 in quit in k4698 in k4665 in k4663 */
static void C_ccall f_4909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:106: newline */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* ##compiler#quit in k4698 in k4665 in k4663 */
static void C_ccall f_4905(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4905r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4905r(t0,t1,t2,t3);}}

static void C_ccall f_4905r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=*((C_word*)lf[27]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4909,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4917,a[2]=t5,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:105: string-append */
t7=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,lf[30],t2);}

/* k4902 in k4895 in k4874 in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:101: collect */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4807(t2,((C_word*)t0)[3],t1);}

/* k4800 in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:79: dump */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4761(t2,((C_word*)t0)[3],t1);}

/* k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[4],lf[33]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14116,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14165,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_14165(t8,t4,((C_word*)t0)[4]);}

/* k13759 in k13732 in loop in k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13760,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13757,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1437: get */
t5=*((C_word*)lf[144]+1);
f_6172(5,t5,t4,((C_word*)t0)[6],((C_word*)t0)[7],lf[157]);}

/* f_14107 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14107(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14107,3,t0,t1,t2);}
/* support.scm:1502: g3736 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_14066(t3,t1,((C_word*)t0)[3],t2);}

/* collect in with-debugging-output in k4698 in k4665 in k4663 */
static void C_fcall f_4807(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4807,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4829,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:89: string-split */
t5=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[23]);}

/* ##compiler#with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4803,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4807,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4854,tmp=(C_word)a,a+=2,tmp));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4876,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:94: test-mode */
f_4854(t10,t2,*((C_word*)lf[1]+1));}

/* k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13769,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1427: get */
t4=*((C_word*)lf[144]+1);
f_6172(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[5],lf[157]);}

/* k13765 in loop in k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1438: string-intersperse */
t2=*((C_word*)lf[492]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[496]);}

/* k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1494: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[8]);}

/* k13777 in real-name2 in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:1443: real-name */
t2=*((C_word*)lf[45]+1);
f_13667(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#real-name2 in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13774,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13778,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1442: ##sys#hash-table-ref */
t5=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[490]+1),t2);}

/* k8593 in map-loop1665 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8594(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8594,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8569(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8569(t6,((C_word*)t0)[5],t5);}}

/* k4828 in collect in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4829,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4834,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4834(t5,((C_word*)t0)[3],t1);}

/* f_13792 in display-real-name-table in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13792(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13792,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[13]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13795,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1447: write */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,*((C_word*)lf[13]+1));}

/* k13794 */
static void C_ccall f_13795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k13796 in k13794 */
static void C_ccall f_13797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1447: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k13798 in k13796 in k13794 */
static void C_ccall f_13799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* ##compiler#put! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6206,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6210,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:383: ##sys#hash-table-ref */
t7=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* k13632 in k13630 in k13628 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13642,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1398: random */
t4=*((C_word*)lf[487]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(1000));}

/* k13637 in k13634 in k13632 in k13630 in k13628 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1394: string->symbol */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k13634 in k13632 in k13630 in k13628 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1395: get-output-string */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k13630 in k13628 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13645,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1397: current-seconds */
t4=*((C_word*)lf[488]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* map-loop1665 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8569(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8569,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8594,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:663: g1671 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8565 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:663: cons* */
t2=*((C_word*)lf[264]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[238],((C_word*)t0)[3],t1);}

/* k13644 in k13630 in k13628 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1395: display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k13641 in k13632 in k13630 in k13628 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1395: display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k13647 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1395: display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* test-mode in with-debugging-output in k4698 in k4665 in k4663 */
static void C_fcall f_4854(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4854,NULL,3,t1,t2,t3);}
if(C_truep(C_i_symbolp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(t2,t3));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:93: lset-intersection */
t5=*((C_word*)lf[24]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[25]+1),t2,t3);}}

/* k12526 in k12422 in finish-foreign-result in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_12528(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12528,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* support.scm:1235: finish-foreign-result */
t3=*((C_word*)lf[440]+1);
f_12419(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(3),t2);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_eqp(t4,lf[381]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[382]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12552,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1239: gensym */
t8=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(t4,lf[385]);
if(C_truep(t7)){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_a_i_list(&a,2,lf[95],lf[383]);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,4,lf[450],t8,t9,((C_word*)t0)[4]));}
else{
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[4]);}}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}}}

/* ##compiler#collect! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_6247,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6251,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:391: ##sys#hash-table-ref */
t7=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* doloop3753 in k14130 in k14128 in k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 in ... */
static void C_fcall f_14139(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14139,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[13]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14148,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t5=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(32),*((C_word*)lf[13]+1));}}

/* k14133 in k14130 in k14128 in k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 in ... */
static void C_ccall f_14134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(93),*((C_word*)lf[13]+1));}

/* k14130 in k14128 in k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14139,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_14139(t6,t2,C_fix(5));}

/* k11701 in k11690 in k11679 in k11671 */
static void C_fcall f_11703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11703,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub351(C_SCHEME_UNDEFINED,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11708,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1177: ##sys#hash-table-ref */
t3=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[391]+1),((C_word*)t0)[4]);}
else{
t3=t2;
f_11708(2,t3,C_SCHEME_FALSE);}}}

/* k11707 in k11701 in k11690 in k11679 in k11671 */
static void C_ccall f_11708(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11708,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1177: g2978 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[380]);
if(C_truep(t4)){
if(C_truep(t4)){
t5=((C_word*)t0)[3];
t6=C_i_foreign_fixnum_argumentp(C_fix(3));
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub351(C_SCHEME_UNDEFINED,t6));}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}}
else{
t5=C_eqp(t3,lf[388]);
if(C_truep(t5)){
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=C_i_foreign_fixnum_argumentp(C_fix(3));
t8=t6;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub351(C_SCHEME_UNDEFINED,t7));}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(0));}}
else{
t6=C_eqp(t3,lf[389]);
if(C_truep(t6)){
if(C_truep(t6)){
t7=((C_word*)t0)[3];
t8=C_i_foreign_fixnum_argumentp(C_fix(3));
t9=t7;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,stub351(C_SCHEME_UNDEFINED,t8));}
else{
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fix(0));}}
else{
t7=C_eqp(t3,lf[371]);
if(C_truep(t7)){
if(C_truep(t7)){
t8=((C_word*)t0)[3];
t9=C_i_foreign_fixnum_argumentp(C_fix(3));
t10=t8;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,stub351(C_SCHEME_UNDEFINED,t9));}
else{
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fix(0));}}
else{
t8=C_eqp(t3,lf[373]);
if(C_truep(t8)){
if(C_truep(t8)){
t9=((C_word*)t0)[3];
t10=C_i_foreign_fixnum_argumentp(C_fix(3));
t11=t9;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,stub351(C_SCHEME_UNDEFINED,t10));}
else{
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_fix(0));}}
else{
t9=C_eqp(t3,lf[390]);
if(C_truep(t9)){
if(C_truep(t9)){
t10=((C_word*)t0)[3];
t11=C_i_foreign_fixnum_argumentp(C_fix(3));
t12=t10;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub351(C_SCHEME_UNDEFINED,t11));}
else{
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_fix(0));}}
else{
t10=C_eqp(t3,lf[381]);
if(C_truep(t10)){
if(C_truep(t10)){
t11=((C_word*)t0)[3];
t12=C_i_foreign_fixnum_argumentp(C_fix(3));
t13=t11;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,stub351(C_SCHEME_UNDEFINED,t12));}
else{
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_fix(0));}}
else{
t11=C_eqp(t3,lf[382]);
if(C_truep(t11)){
if(C_truep(t11)){
t12=((C_word*)t0)[3];
t13=C_i_foreign_fixnum_argumentp(C_fix(3));
t14=t12;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,stub351(C_SCHEME_UNDEFINED,t13));}
else{
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_fix(0));}}
else{
t12=C_eqp(t3,lf[385]);
if(C_truep(t12)){
t13=((C_word*)t0)[3];
t14=C_i_foreign_fixnum_argumentp(C_fix(3));
t15=t13;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,stub351(C_SCHEME_UNDEFINED,t14));}
else{
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_fix(0));}}}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}}

/* k4961 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:118: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k4963 in k4961 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:118: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[37],((C_word*)t0)[3]);}

/* k4965 in k4963 in k4961 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:118: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);}

/* k4967 in k4965 in k4963 in k4961 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* resolve in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13671(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13671,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13675,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1416: ##sys#hash-table-ref */
t4=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[490]+1),t2);}

/* k8753 in map-loop1737 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8754(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8754,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8729(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8729(t6,((C_word*)t0)[5],t5);}}

/* k13674 in resolve in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13675,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13680,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1418: ##sys#hash-table-ref */
t3=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[490]+1),t1);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_11712 in k11707 in k11701 in k11690 in k11679 in k11671 */
static void C_ccall f_11712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11712,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1179: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1179: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* map-loop1639 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8521(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8521,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8546,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:662: g1645 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6209 in put! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6210,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]));}
else{
if(C_truep(((C_word*)t0)[4])){
t3=C_slot(t1,C_fix(1));
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]),t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t1,C_fix(1),t4));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:388: ##sys#hash-table-set! */
t4=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[6],t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}}

/* k5407 in valid-c-identifier? in k4698 in k4665 in k4663 */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4950 in for-each-loop177 in k4924 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4942(t3,((C_word*)t0)[4],t2);}

/* k13679 in k13674 in resolve in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13685,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13769,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1425: ##sys#symbol->qualified-string */
t6=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t1);}
else{
/* support.scm:1439: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],t1);}}
else{
/* support.scm:1422: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k14149 in k14147 in doloop3753 in k14130 in k14128 in k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in ... */
static void C_ccall f_14151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14139(t3,((C_word*)t0)[4],t2);}

/* ##compiler#words in k4698 in k4665 in k4663 */
static void C_ccall f_5410(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5410,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub346(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#words->bytes in k4698 in k4665 in k4663 */
static void C_ccall f_5417(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5417,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub351(C_SCHEME_UNDEFINED,t3));}

/* f_6201 in k6192 in get-all in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6201(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6201,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_assq(t2,((C_word*)t0)[2]));}

/* map-loop1763 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8771(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8771,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8796,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:674: g1769 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12551 in k12526 in k12422 in finish-foreign-result in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12552(C_word c,C_word t0,C_word t1){
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
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12552,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[448],t1);
t5=C_a_i_list(&a,2,lf[449],t4);
t6=C_i_caddr(((C_word*)t0)[3]);
t7=C_a_i_list(&a,2,lf[95],lf[383]);
t8=C_a_i_list(&a,4,lf[450],t6,t7,t1);
t9=C_a_i_list(&a,4,lf[451],t1,t5,t8);
t10=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_a_i_list(&a,3,lf[105],t3,t9));}

/* ##compiler#block-variable-literal-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13611(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13611,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[482],lf[485]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* k14147 in doloop3753 in k14130 in k14128 in k14114 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in ... */
static void C_ccall f_14148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],((C_word*)t0)[2]);
/* support.scm:1506: write */
t4=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[6]);}

/* ##compiler#close-checked-input-file in k4698 in k4665 in k4663 */
static void C_ccall f_5465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5465,4,t0,t1,t2,t3);}
if(C_truep(C_i_string_equal_p(t3,lf[86]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* support.scm:226: close-input-port */
t4=*((C_word*)lf[87]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* k8545 in map-loop1639 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8546(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8546,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8521(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8521(t6,((C_word*)t0)[5],t5);}}

/* k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13627,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13629,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13649,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* support.scm:1396: gensym */
t6=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_car(t4);
/* support.scm:1395: display */
t7=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,t2);}}

/* k13628 in k13626 in make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(45),((C_word*)t0)[4]);}

/* ##compiler#make-random-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13620(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_13620r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_13620r(t0,t1,t2);}}

static void C_ccall f_13620r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13627,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1395: open-output-string */
t4=*((C_word*)lf[51]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ##compiler#fold-inner in k4698 in k4665 in k4663 */
static void C_ccall f_5477(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5477,4,t0,t1,t2,t3);}
t4=C_i_cdr(t3);
if(C_truep(C_i_nullp(t4))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5490,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:231: reverse */
t6=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}

/* k8795 in map-loop1763 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8796(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8796,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8771(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8771(t6,((C_word*)t0)[5],t5);}}

/* ##compiler#check-and-open-input-file in k4698 in k4665 in k4663 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5424r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5424r(t0,t1,t2,t3);}}

static void C_ccall f_5424r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
if(C_truep(C_i_string_equal_p(t2,lf[79]))){
t4=*((C_word*)lf[80]+1);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,*((C_word*)lf[80]+1));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5437,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:221: file-exists? */
t5=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k8501 in loop in k8447 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8502,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8492,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[4];
t5=C_u_i_cdr(t4);
t6=((C_word*)t0)[5];
t7=C_u_i_cdr(t6);
/* support.scm:660: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_8458(t8,t3,t5,t7);}

/* k10838 in k10826 in k10766 in k10752 in repeat */
static void C_fcall f_10839(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10839,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[221],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[105],((C_word*)t0)[4],t3));}

/* f_7971 */
static void C_ccall f_7971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7971,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* f_8054 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8054,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k5435 in check-and-open-input-file in k4698 in k4665 in k4663 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
if(C_truep(t1)){
/* support.scm:221: open-input-file */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=C_i_nullp(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_5448(t4,t2);}
else{
t4=C_i_car(((C_word*)t0)[4]);
t5=t3;
f_5448(t5,C_i_not(t4));}}}

/* k7962 in k7956 in k7951 */
static void C_ccall f_7964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7964,2,t0,t1);}
t2=((C_word*)t0)[2];
f_7955(2,t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k7975 */
static void C_ccall f_7977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7977,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];
f_7952(t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
f_7952(t2,C_SCHEME_FALSE);}}

/* k11127 in k11094 in k11055 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_11129(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11129,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1108: gensym */
t3=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[381]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[382]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1114: gensym */
t5=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[385]);
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[95],lf[383]);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[384],((C_word*)t0)[2],t5));}
else{
t5=C_eqp(((C_word*)t0)[4],lf[386]);
if(C_truep(t5)){
t6=C_i_cadr(((C_word*)t0)[5]);
/* support.scm:1121: repeat */
t7=((C_word*)((C_word*)t0)[6])[1];
f_10730(t7,((C_word*)t0)[3],t6);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[387]);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(*((C_word*)lf[346]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[364],((C_word*)t0)[2])));}
else{
t7=C_eqp(((C_word*)t0)[4],lf[388]);
if(C_truep(t7)){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_truep(t7)?C_a_i_list(&a,2,lf[372],((C_word*)t0)[2]):((C_word*)t0)[2]));}
else{
t8=C_eqp(((C_word*)t0)[4],lf[373]);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?C_a_i_list(&a,2,lf[372],((C_word*)t0)[2]):((C_word*)t0)[2]));}}}}}}}

/* k8725 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:673: cons* */
t2=*((C_word*)lf[264]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* ##compiler#block-variable-literal? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13605(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13605,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[482]));}

/* map-loop1737 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8729,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8754,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:673: g1743 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_7790 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7790(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7790,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k7954 in k7951 */
static void C_ccall f_7955(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7955,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[3];
t8=C_i_check_list_2(t7,lf[159]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7919,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7921,a[2]=t6,a[3]=t11,a[4]=t4,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7921(t13,t9,t7);}

/* k7951 */
static void C_fcall f_7952(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7952,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7955,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7957,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* support.scm:612: real-name */
t4=*((C_word*)lf[45]+1);
f_13667(3,t4,t3,((C_word*)t0)[7]);}
else{
/* support.scm:615: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}}

/* k5489 in fold-inner in k4698 in k4665 in k4663 */
static void C_ccall f_5490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5490,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5492,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5492(t5,((C_word*)t0)[3],t1);}

/* fold in k5489 in fold-inner in k4698 in k4665 in k4663 */
static void C_fcall f_5492(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5492,NULL,3,t0,t1,t2);}
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=C_u_i_cdr(t4);
t6=C_u_i_car(t5);
t7=t2;
t8=C_u_i_car(t7);
t9=C_a_i_list2(&a,2,t6,t8);
C_apply(4,0,t1,((C_word*)t0)[2],t9);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5516,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=C_u_i_cdr(t5);
/* support.scm:236: fold */
t14=t4;
t15=t6;
t1=t14;
t2=t15;
goto loop;}}

/* k11130 in k11127 in k11094 in k11055 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_ccall f_11131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11131,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[372],t1);
t5=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[221],t1,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[105],t3,t6));}

/* k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7789(C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7789,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7790,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_i_check_list_2(t12,lf[159]);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7809,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7811,a[2]=t9,a[3]=t16,a[4]=t7,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_7811(t18,t14,t12);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[246]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7846,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t0)[2];
t10=C_u_i_cdr(t9);
t11=C_i_check_list_2(t10,lf[159]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7862,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7864,a[2]=t8,a[3]=t14,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_7864(t16,t12,t10);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:604: ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t3,t4);}}}

/* k7956 in k7951 */
static void C_ccall f_7957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[2];
f_7955(2,t4,C_a_i_list2(&a,2,((C_word*)t0)[3],t3));}
else{
/* support.scm:614: ##sys#symbol->qualified-string */
t3=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* k7771 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7772,2,t0,t1);}
t2=C_i_cadr(t1);
t3=C_a_i_list4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7757,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7760,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:597: sixth */
t6=*((C_word*)lf[243]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[8]);}

/* k14173 in for-each-loop3720 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_14165(t3,((C_word*)t0)[4],t2);}

/* k11158 in k11127 in k11094 in k11055 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_ccall f_11159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11159,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[95],lf[383]);
t5=C_a_i_list(&a,3,lf[384],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t7=C_a_i_list(&a,4,lf[221],t1,t5,t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,3,lf[105],t3,t7));}

/* k7759 in k7771 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:597: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7081(t2,((C_word*)t0)[3],t1);}

/* for-each-loop3720 in k14104 in k14102 in k14100 in k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_14165(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14165,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14174,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1502: g3721 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5446 in k5435 in check-and-open-input-file in k4698 in k4665 in k4663 */
static void C_fcall f_5448(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm:222: quit */
t2=*((C_word*)lf[26]+1);
f_4905(4,t2,((C_word*)t0)[2],lf[82],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)t0)[4]);
/* support.scm:223: quit */
t3=*((C_word*)lf[26]+1);
f_4905(5,t3,((C_word*)t0)[2],lf[83],t2,((C_word*)t0)[3]);}}

/* k8767 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:674: append */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k8762 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8763,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k7756 in k7771 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7757,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* support.scm:594: g1311 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[242],((C_word*)t0)[4],t2);}

/* k14190 in read-info-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_14192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14192,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1522: conc */
t4=*((C_word*)lf[500]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[519]+1),lf[520],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* ##compiler#scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13327(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13327,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13331,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13497,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13530,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1362: walk */
t14=((C_word*)t8)[1];
f_13331(t14,t13,t2,C_SCHEME_END_OF_LIST);}

/* f_7742 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7742,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k10826 in k10766 in k10752 in repeat */
static void C_ccall f_10827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10827,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10839,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[346]+1))){
t5=t4;
f_10839(t5,t1);}
else{
t5=C_a_i_list(&a,2,lf[95],lf[357]);
t6=t4;
f_10839(t6,C_a_i_list(&a,3,lf[358],t5,t1));}}

/* ##compiler#read-info-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_14185,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14189,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14192,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(lf[521],t2);
if(C_truep(t7)){
t8=C_i_car(t3);
t9=t6;
f_14192(t9,C_i_symbolp(t8));}
else{
t8=t6;
f_14192(t8,C_SCHEME_FALSE);}}

/* k14188 in read-info-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13331(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13331,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13334,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13340,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* support.scm:1335: g3436 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* f_13334 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13334(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13334,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k8703 in map-loop1708 in k8669 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8704(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8704,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8679(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8679(t6,((C_word*)t0)[5],t5);}}

/* f_9369 in k9366 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9369(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9369,3,t0,t1,t2);}
/* support.scm:754: g2075 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9055(t3,t1,t2,((C_word*)t0)[3]);}

/* k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13348,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13354,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1337: g3447 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}

/* f_13348 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13348(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13348,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* f_13341 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13341(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13341,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13341,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1336: g3439 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* k9366 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9367(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9367,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[159]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9378,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9380,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9380(t12,t8,((C_word*)t0)[4]);}

/* f_9358 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9358(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9358,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k7726 in map-loop1286 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7727(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7727,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7702(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7702(t6,((C_word*)t0)[5],t5);}}

/* k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13354,2,t0,t1);}
t2=C_eqp(t1,lf[95]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_13362,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=t3;
f_13362(t4,t2);}
else{
t4=C_eqp(t1,lf[222]);
if(C_truep(t4)){
t5=t3;
f_13362(t5,t4);}
else{
t5=C_eqp(t1,lf[236]);
if(C_truep(t5)){
t6=t3;
f_13362(t6,t5);}
else{
t6=C_eqp(t1,lf[239]);
t7=t3;
f_13362(t7,(C_truep(t6)?t6:C_eqp(t1,lf[251])));}}}}

/* k9353 in map-loop1946 */
static void C_ccall f_9354(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9354,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9329(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9329(t6,((C_word*)t0)[5],t5);}}

/* map-loop1213 in k7538 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7549(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7549,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7574,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:583: g1219 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7545 in k7538 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:580: g1205 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k7698 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:589: g1279 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[240],((C_word*)t0)[4],t1);}

/* map-loop1286 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7702(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7702,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7727,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:591: g1292 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14578 in k14576 in k14574 */
static void C_ccall f_14579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14586,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14592,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:515: g1028 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* f_14572 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_14572,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14575,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:514: display */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[554],t3);}

/* k14576 in k14574 */
static void C_ccall f_14577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k14574 */
static void C_ccall f_14575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14594,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14600,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:515: g1025 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* k13378 in k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13380,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13386,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1343: variable-visible? */
t4=*((C_word*)lf[307]+1);
f_14382(3,t4,t3,((C_word*)t0)[5]);}

/* k13384 in k13378 in k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13386,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1344: lset-adjoin */
t3=*((C_word*)lf[476]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[25]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4]);}}

/* k14560 in k14558 in print-usage in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1621: display */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[551]);}

/* ##compiler#print-debug-options in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14566,2,t0,t1);}
/* support.scm:1746: display */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,lf[553]);}

/* k13388 in k13384 in k13378 in k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k14590 in k14578 in k14576 in k14574 */
static void C_ccall f_14592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:514: display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_14594 in k14574 */
static void C_ccall f_14594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14594,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* map-loop1143 in k7251 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7279,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7304,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:553: g1149 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7276 in k7269 in k7251 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7277,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* support.scm:553: append */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2);}

/* k7269 in k7251 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7277,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:554: walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7081(t3,t2,((C_word*)t0)[4]);}

/* k14580 in k14578 in k14576 in k14574 */
static void C_ccall f_14581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(62),((C_word*)t0)[3]);}

/* k10373 */
static void C_fcall f_10375(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10375,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10377,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:909: write */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_14586 in k14578 in k14576 in k14574 */
static void C_ccall f_14586(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14586,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k10381 */
static void C_ccall f_10383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_10375(t2,C_SCHEME_FALSE);}
else{
if(C_truep(C_i_assq(lf[186],((C_word*)t0)[3]))){
t2=C_i_assq(lf[184],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_10375(t3,C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_10375(t2,C_SCHEME_FALSE);}}}

/* k10376 in k10373 */
static void C_ccall f_10377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:910: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k10351 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:898: every */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],t1);}

/* ##compiler#dump-undefined-globals in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10363(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10363,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10369,tmp=(C_word)a,a+=2,tmp);
/* support.scm:904: ##sys#hash-table-for-each */
t4=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* k10088 in loop in k10052 in k10041 in k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:859: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10059(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7538 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7539(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7539,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_u_i_cdr(t7);
t9=C_i_check_list_2(t8,lf[159]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7547,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7549,a[2]=t5,a[3]=t12,a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7549(t14,t10,t8);}

/* map-loop1946 */
static void C_fcall f_9329(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9329,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9354,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:742: g1952 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_7528 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7528,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7515,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7415(t6,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_END_OF_LIST,t2);}

/* k10752 in repeat */
static void C_fcall f_10754(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10754,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[346]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[349],((C_word*)t0)[2]));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[350]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10768(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[418]);
t5=t3;
f_10768(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[419])));}}}

/* k7502 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7503,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:575: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7415(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k7505 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:577: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7081(t2,((C_word*)t0)[3],t1);}

/* k7573 in map-loop1213 in k7538 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7574(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7574,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7549(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7549(t6,((C_word*)t0)[5],t5);}}

/* repeat */
static void C_fcall f_10730(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10730,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_eqp(t3,lf[344]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[345]));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(*((C_word*)lf[346]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[347],((C_word*)t0)[2])));}
else{
t6=C_eqp(t3,lf[348]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10754,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_10754(t8,t6);}
else{
t8=C_eqp(t3,lf[420]);
if(C_truep(t8)){
t9=t7;
f_10754(t9,t8);}
else{
t9=C_eqp(t3,lf[421]);
if(C_truep(t9)){
t10=t7;
f_10754(t10,t9);}
else{
t10=C_eqp(t3,lf[422]);
if(C_truep(t10)){
t11=t7;
f_10754(t11,t10);}
else{
t11=C_eqp(t3,lf[423]);
if(C_truep(t11)){
t12=t7;
f_10754(t12,t11);}
else{
t12=C_eqp(t3,lf[424]);
if(C_truep(t12)){
t13=t7;
f_10754(t13,t12);}
else{
t13=C_eqp(t3,lf[425]);
t14=t7;
f_10754(t14,(C_truep(t13)?t13:C_eqp(t3,lf[426])));}}}}}}}}

/* f_10725 in foreign-type-check in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10725,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10730,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_10730(t7,t1,t2);}

/* f_7904 */
static void C_ccall f_7904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7904,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* ##compiler#dump-defined-globals in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10400(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10400,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10406,tmp=(C_word)a,a+=2,tmp);
/* support.scm:914: ##sys#hash-table-for-each */
t4=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* k12682 in k12661 in foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_12684(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12684,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[226]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[350]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[418]));
if(C_truep(t3)){
t4=((C_word*)t0)[4];
t5=C_eqp(t4,lf[455]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?lf[419]:lf[350]));}
else{
t4=C_eqp(((C_word*)t0)[3],lf[353]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[3],lf[355]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[235]);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[352]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
t8=C_eqp(t7,lf[455]);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?lf[456]:lf[352]));}
else{
t7=C_eqp(((C_word*)t0)[3],lf[356]);
if(C_truep(t7)){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[352]);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[357]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=C_eqp(t9,lf[455]);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?lf[457]:lf[357]));}
else{
t9=C_eqp(((C_word*)t0)[3],lf[359]);
if(C_truep(t9)){
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[357]);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[360]);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12756,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t10)){
t12=t11;
f_12756(t12,t10);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[411]);
if(C_truep(t12)){
t13=t11;
f_12756(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[412]);
if(C_truep(t13)){
t14=t11;
f_12756(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[3],lf[413]);
if(C_truep(t14)){
t15=t11;
f_12756(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[3],lf[414]);
if(C_truep(t15)){
t16=t11;
f_12756(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[3],lf[415]);
if(C_truep(t16)){
t17=t11;
f_12756(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[3],lf[416]);
t18=t11;
f_12756(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[3],lf[417])));}}}}}}}}}}}}}}

/* f_10406 in dump-defined-globals in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10406,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10412,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10420,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:916: keyword? */
t6=*((C_word*)lf[319]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k6726 in k6724 in k6722 in k6719 in k6648 in loop in k6487 */
static void C_ccall f_6727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdar(((C_word*)t0)[2]);
/* support.scm:484: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* k6724 in k6722 in k6719 in k6648 in loop in k6487 */
static void C_ccall f_6725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(61),((C_word*)t0)[4]);}

/* k6722 in k6719 in k6648 in loop in k6487 */
static void C_ccall f_6723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_caar(((C_word*)t0)[2]);
/* support.scm:484: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* k6719 in k6648 in loop in k6487 */
static void C_fcall f_6721(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6721,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6723,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),*((C_word*)lf[13]+1));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[174]);
if(C_truep(t2)){
t3=C_i_cdar(((C_word*)t0)[2]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* support.scm:490: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6628(t7,((C_word*)t0)[7],t6);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[175]);
if(C_truep(t3)){
t4=C_i_cdar(((C_word*)t0)[2]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,t4);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* support.scm:490: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_6628(t8,((C_word*)t0)[7],t7);}
else{
t4=((C_word*)t0)[2];
t5=C_u_i_car(t4);
/* support.scm:489: bomb */
t6=*((C_word*)lf[3]+1);
f_4676(4,t6,((C_word*)t0)[3],lf[176],t5);}}}}

/* k10413 in k10410 */
static void C_ccall f_10414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:920: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k10410 */
static void C_fcall f_10412(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10412,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:919: write */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k10004 in match1 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
/* support.scm:845: match1 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_9984(t6,((C_word*)t0)[5],t3,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13362(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13362,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[217]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_memq(t3,((C_word*)t0)[5]))){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13380,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1342: lset-adjoin */
t5=*((C_word*)lf[476]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[25]+1),((C_word*)((C_word*)t0)[6])[1],t3);}}
else{
t3=C_eqp(((C_word*)t0)[3],lf[240]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_memq(t4,((C_word*)t0)[5]))){
t5=C_i_car(((C_word*)t0)[8]);
/* support.scm:1348: walk */
t6=((C_word*)((C_word*)t0)[9])[1];
f_13331(t6,((C_word*)t0)[2],t5,((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13413,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1347: lset-adjoin */
t6=*((C_word*)lf[476]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,*((C_word*)lf[25]+1),((C_word*)((C_word*)t0)[6])[1],t4);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[105]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13421,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(((C_word*)t0)[8]);
/* support.scm:1350: walk */
t7=((C_word*)((C_word*)t0)[9])[1];
f_13331(t7,t5,t6,((C_word*)t0)[5]);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[129]);
if(C_truep(t5)){
t6=C_i_caddr(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13447,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1353: decompose-lambda-list */
t8=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[2],t6,t7);}
else{
/* support.scm:1357: walkeach */
t6=((C_word*)((C_word*)t0)[10])[1];
f_13497(t6,((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[5]);}}}}}}

/* k10418 */
static void C_ccall f_10420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_10412(t2,C_SCHEME_FALSE);}
else{
t2=C_i_assq(lf[186],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_10412(t3,(C_truep(t2)?C_i_assq(lf[184],((C_word*)t0)[3]):C_SCHEME_FALSE));}}

/* k12661 in foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12662(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12662,2,t0,t1);}
t2=t1;
t3=C_eqp(t2,lf[434]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[192]);}
else{
t4=C_eqp(t2,lf[344]);
t5=(C_truep(t4)?t4:C_eqp(t2,lf[345]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[344]);}
else{
t6=C_eqp(t2,lf[348]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12684,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t8=t7;
f_12684(t8,t6);}
else{
t8=C_eqp(t2,lf[420]);
if(C_truep(t8)){
t9=t7;
f_12684(t9,t8);}
else{
t9=C_eqp(t2,lf[421]);
if(C_truep(t9)){
t10=t7;
f_12684(t10,t9);}
else{
t10=C_eqp(t2,lf[422]);
if(C_truep(t10)){
t11=t7;
f_12684(t11,t10);}
else{
t11=C_eqp(t2,lf[423]);
if(C_truep(t11)){
t12=t7;
f_12684(t12,t11);}
else{
t12=C_eqp(t2,lf[424]);
if(C_truep(t12)){
t13=t7;
f_12684(t13,t12);}
else{
t13=C_eqp(t2,lf[425]);
t14=t7;
f_12684(t14,(C_truep(t13)?t13:C_eqp(t2,lf[426])));}}}}}}}}}

/* ##compiler#foreign-type-check in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10719,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10725,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11554,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1017: follow-without-loop */
t6=*((C_word*)lf[90]+1);
f_5528(5,t6,t1,t3,t4,t5);}

/* k11625 */
static void C_ccall f_11626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11626,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1150: g2861 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_11623 in final-foreign-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11623(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11623,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11626,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(t2))){
/* support.scm:1151: ##sys#hash-table-ref */
t5=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[391]+1),t2);}
else{
t5=t4;
f_11626(2,t5,C_SCHEME_FALSE);}}

/* ##compiler#basic-literal? in k4698 in k4665 in k4663 */
static void C_ccall f_5682(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5682,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_i_symbolp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:276: constant? */
t6=*((C_word*)lf[94]+1);
f_5574(3,t6,t5,t2);}}}

/* k5679 in immediate? in k4698 in k4665 in k4663 */
static void C_ccall f_5680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5645(t2,C_i_not(t1));}

/* ##compiler#dump-global-refs in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10434(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10434,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10440,tmp=(C_word)a,a+=2,tmp);
/* support.scm:924: ##sys#hash-table-for-each */
t4=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_10021(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10021,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:850: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_9952(t4,t1,t3,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10116,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10122,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* support.scm:851: g2315 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}

/* f_11630 in k11625 */
static void C_ccall f_11630(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11630,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1153: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1153: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k7945 in map-loop1411 in k7954 in k7951 */
static void C_ccall f_7946(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7946,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7921(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7921(t6,((C_word*)t0)[5],t5);}}

/* f_10440 in dump-global-refs in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10440,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10468,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:926: keyword? */
t5=*((C_word*)lf[319]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* map-loop1411 in k7954 in k7951 */
static void C_fcall f_7921(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7921,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7946,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:616: g1417 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14598 in k14574 */
static void C_ccall f_14600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:514: display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k13945 */
static void C_ccall f_13946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13946,2,t0,t1);}
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13954,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1485: debugging */
t5=*((C_word*)lf[11]+1);
f_4703(5,t5,t4,lf[255],lf[513],((C_word*)t0)[4]);}
else{
/* support.scm:1488: bomb */
t4=*((C_word*)lf[3]+1);
f_4676(4,t4,((C_word*)t0)[3],lf[514],((C_word*)t0)[4]);}}

/* k10449 in k10466 */
static void C_ccall f_10450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:929: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k10041 in k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10043,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10048,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:853: g2330 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_10048 in k10041 in k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10048(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10048,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* ##compiler#estimate-foreign-result-size in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11658(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11658,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11664,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12040,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1161: follow-without-loop */
t5=*((C_word*)lf[90]+1);
f_5528(5,t5,t1,t2,t3,t4);}

/* f_11653 in final-foreign-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11653,2,t0,t1);}
/* support.scm:1155: quit */
t2=*((C_word*)lf[26]+1);
f_4905(4,t2,t1,lf[431],((C_word*)t0)[2]);}

/* f_13912 in k13993 in k13901 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13912(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13912,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13930,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1474: with-exception-handler */
t5=*((C_word*)lf[118]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_13917 */
static void C_ccall f_13917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13917,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1474: k3671 */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k10052 in k10041 in k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10054,2,t0,t1);}
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10059,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_10059(t6,((C_word*)t0)[5],t1,t2);}

/* f_7902 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7902,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7904,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7952,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7971,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7977,a[2]=((C_word*)t0)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:607: g1400 */
t8=t6;
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,t2,lf[250]);}

/* k10466 */
static void C_ccall f_10468(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10468,2,t0,t1);}
t2=(C_truep(t1)?C_SCHEME_FALSE:C_i_assq(lf[186],((C_word*)t0)[2]));
if(C_truep(t2)){
t3=C_i_assq(lf[174],((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10450,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=C_i_cdr(t3);
t6=C_i_length(t5);
t7=C_a_i_list2(&a,2,((C_word*)t0)[4],t6);
/* support.scm:928: write */
t8=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t4,t7);}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(0));
/* support.scm:928: write */
t6=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in k10052 in k10041 in k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_10059(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10059,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_nullp(t2));}
else{
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:856: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_9952(t4,t1,t3,t2);}
else{
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10090,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:858: matchn */
t7=((C_word*)((C_word*)t0)[4])[1];
f_10021(t7,t4,t5,t6);}}}}

/* k7917 in k7954 in k7951 */
static void C_ccall f_7919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:605: g1392 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[247],((C_word*)t0)[4],t1);}

/* f_13969 */
static void C_ccall f_13969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13969,2,t0,t1);}
C_apply(4,0,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k10704 in for-each-loop2565 */
static void C_ccall f_10705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10696(t3,((C_word*)t0)[4],t2);}

/* f_13935 */
static void C_ccall f_13935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13935,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(0));
if(C_truep(C_i_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13946,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13969,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1483: ##sys#call-with-values */
C_call_with_values(4,0,t3,t4,*((C_word*)lf[515]+1));}
else{
/* support.scm:1489: bomb */
t3=*((C_word*)lf[3]+1);
f_4676(4,t3,t1,lf[516],((C_word*)t0)[4]);}}

/* k5695 in basic-literal? in k4698 in k4665 in k4663 */
static void C_ccall f_5696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5696,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5732,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:277: vector->list */
t4=*((C_word*)lf[101]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
t3=t2;
f_5701(2,t3,C_SCHEME_FALSE);}}}

/* f_13930 */
static void C_ccall f_13930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13977,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1474: ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* k11599 in foreign-type-convert-argument in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11600,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(1));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k13906 in k13993 in k13901 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1474: g3675 */
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k13901 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13903(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13903,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13987,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(t1,lf[159]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13997,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_13997(t12,t8,t1);}

/* k4895 in k4874 in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4897,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:101: with-output-to-string */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#final-foreign-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11617(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11617,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11623,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11653,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1148: follow-without-loop */
t5=*((C_word*)lf[90]+1);
f_5528(5,t5,t1,t2,t3,t4);}

/* k6294 in count! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6297,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=t2;
f_6297(t4,C_u_i_car(t3));}
else{
t3=t2;
f_6297(t3,C_fix(1));}}

/* k6296 in k6294 in count! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_6297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6297,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=C_i_assq(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(1));
t4=C_a_i_plus(&a,2,t3,t1);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(1),t4));}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1),t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(((C_word*)t0)[2],C_fix(1),t4));}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[5]);
t3=C_a_i_list1(&a,1,t2);
/* support.scm:405: ##sys#hash-table-set! */
t4=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[7],t3);}}

/* ##compiler#count! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_6291r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6291r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6291r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6295,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm:399: ##sys#hash-table-ref */
t7=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,t3);}

/* f_13922 */
static void C_ccall f_13922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13928,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1479: get-condition-property */
t3=*((C_word*)lf[510]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],lf[511],lf[512]);}

/* k13927 */
static void C_ccall f_13928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1479: k */
t2=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k10766 in k10752 in repeat */
static void C_fcall f_10768(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10768,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(*((C_word*)lf[346]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[351],((C_word*)t0)[3])));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[352]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[353]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10784,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1027: gensym */
t5=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[355]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[356]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(*((C_word*)lf[346]+1))?((C_word*)t0)[3]:C_a_i_list(&a,2,lf[354],((C_word*)t0)[3])));}
else{
t6=C_eqp(((C_word*)t0)[4],lf[357]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10827,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1039: gensym */
t8=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[359]);
if(C_truep(t7)){
if(C_truep(*((C_word*)lf[346]+1))){
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[3]);}
else{
t8=C_a_i_list(&a,2,lf[95],lf[357]);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,3,lf[358],t8,((C_word*)t0)[3]));}}
else{
t8=C_eqp(((C_word*)t0)[4],lf[360]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10874,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t8)){
t10=t9;
f_10874(t10,t8);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[411]);
if(C_truep(t10)){
t11=t9;
f_10874(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[412]);
if(C_truep(t11)){
t12=t9;
f_10874(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[413]);
if(C_truep(t12)){
t13=t9;
f_10874(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[414]);
if(C_truep(t13)){
t14=t9;
f_10874(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[415]);
if(C_truep(t14)){
t15=t9;
f_10874(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[416]);
t16=t9;
f_10874(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[4],lf[417])));}}}}}}}}}}}}

/* ##compiler#emit-syntax-trace-info in k4698 in k4665 in k4663 */
static void C_ccall f_4996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4996,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_emit_syntax_trace_info(t2,t3,*((C_word*)lf[35]+1)));}

/* k4886 in k4881 in k4879 in k4877 in k4874 in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:99: collect */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4807(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k4881 in k4879 in k4877 in k4874 in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:98: test-mode */
f_4854(t2,((C_word*)t0)[6],*((C_word*)lf[9]+1));}

/* k4879 in k4877 in k4874 in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:97: flush-output */
t3=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_11664 in estimate-foreign-result-size in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t18;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11664,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,lf[344]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11673,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_11673(t7,t5);}
else{
t7=C_eqp(t4,lf[348]);
if(C_truep(t7)){
t8=t6;
f_11673(t8,t7);}
else{
t8=C_eqp(t4,lf[421]);
if(C_truep(t8)){
t9=t6;
f_11673(t9,t8);}
else{
t9=C_eqp(t4,lf[433]);
if(C_truep(t9)){
t10=t6;
f_11673(t10,t9);}
else{
t10=C_eqp(t4,lf[434]);
if(C_truep(t10)){
t11=t6;
f_11673(t11,t10);}
else{
t11=C_eqp(t4,lf[422]);
if(C_truep(t11)){
t12=t6;
f_11673(t12,t11);}
else{
t12=C_eqp(t4,lf[435]);
if(C_truep(t12)){
t13=t6;
f_11673(t13,t12);}
else{
t13=C_eqp(t4,lf[345]);
if(C_truep(t13)){
t14=t6;
f_11673(t14,t13);}
else{
t14=C_eqp(t4,lf[420]);
if(C_truep(t14)){
t15=t6;
f_11673(t15,t14);}
else{
t15=C_eqp(t4,lf[423]);
if(C_truep(t15)){
t16=t6;
f_11673(t16,t15);}
else{
t16=C_eqp(t4,lf[424]);
if(C_truep(t16)){
t17=t6;
f_11673(t17,t16);}
else{
t17=C_eqp(t4,lf[425]);
t18=t6;
f_11673(t18,(C_truep(t17)?t17:C_eqp(t4,lf[426])));}}}}}}}}}}}}

/* map-llist in k4698 in k4665 in k4663 */
static void C_ccall f_5000(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5000,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5006,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5006(t7,t1,t3);}

/* k4976 in k4974 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[3]);}

/* k4974 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:119: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);}

/* k4969 in k4967 in k4965 in k4963 in k4961 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* loop in map-llist in k4698 in k4665 in k4663 */
static void C_fcall f_5006(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5006,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:132: proc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5028,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* support.scm:133: proc */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}}

/* k4877 in k4874 in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm:96: display */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4874 in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4876,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:95: with-output-to-string */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* support.scm:100: test-mode */
f_4854(t2,((C_word*)t0)[5],*((C_word*)lf[9]+1));}}

/* k4869 in test-mode in with-debugging-output in k4698 in k4665 in k4663 */
static void C_ccall f_4870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_pairp(t1));}

/* k4978 in k4976 in k4974 in k4922 in syntax-error-hook in k4698 in k4665 in k4663 */
static void C_ccall f_4979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k11671 */
static void C_fcall f_11673(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11673,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[374]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_11681(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[377]);
if(C_truep(t4)){
t5=t3;
f_11681(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[371]);
if(C_truep(t5)){
t6=t3;
f_11681(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[373]);
if(C_truep(t6)){
t7=t3;
f_11681(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[378]);
if(C_truep(t7)){
t8=t3;
f_11681(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[394]);
if(C_truep(t8)){
t9=t3;
f_11681(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[3],lf[392]);
if(C_truep(t9)){
t10=t3;
f_11681(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[3],lf[395]);
if(C_truep(t10)){
t11=t3;
f_11681(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[3],lf[396]);
if(C_truep(t11)){
t12=t3;
f_11681(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[3],lf[393]);
if(C_truep(t12)){
t13=t3;
f_11681(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[3],lf[397]);
t14=t3;
f_11681(t14,(C_truep(t13)?t13:C_eqp(((C_word*)t0)[3],lf[398])));}}}}}}}}}}}}

/* k11679 in k11671 */
static void C_fcall f_11681(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11681,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(3));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub351(C_SCHEME_UNDEFINED,t3));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[367]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_11692(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[401]);
if(C_truep(t4)){
t5=t3;
f_11692(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[363]);
if(C_truep(t5)){
t6=t3;
f_11692(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[402]);
if(C_truep(t6)){
t7=t3;
f_11692(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[400]);
if(C_truep(t7)){
t8=t3;
f_11692(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[3],lf[403]);
t9=t3;
f_11692(t9,(C_truep(t8)?t8:C_eqp(((C_word*)t0)[3],lf[399])));}}}}}}}

/* k11690 in k11679 in k11671 */
static void C_fcall f_11692(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11692,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub351(C_SCHEME_UNDEFINED,t3));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[350]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_11703(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[418]);
if(C_truep(t4)){
t5=t3;
f_11703(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[419]);
if(C_truep(t5)){
t6=t3;
f_11703(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[365]);
t7=t3;
f_11703(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[369])));}}}}}

/* k9696 in for-each-loop2242 in k9680 in k9672 in k9667 in k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9688(t3,((C_word*)t0)[4],t2);}

/* k9680 in k9672 in k9667 in k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9681,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[33]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9688,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9688(t6,((C_word*)t0)[3],t1);}

/* for-each-loop2242 in k9680 in k9672 in k9667 in k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9688(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9688,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9697,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:815: g2243 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9656 in map-loop2160 in walk in sexpr->node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9657(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9657,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9632(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9632(t6,((C_word*)t0)[5],t5);}}

/* node? in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6981(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6981,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[207]));}

/* ##compiler#set-real-name! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13660,4,t0,t1,t2,t3);}
/* support.scm:1409: ##sys#hash-table-set! */
t4=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[490]+1),t2,t3);}

/* ##compiler#real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13667(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_13667r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_13667r(t0,t1,t2,t3);}}

static void C_ccall f_13667r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13671,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13685,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1421: resolve */
f_13671(t5,t2);}

/* k6971 in display-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_6474(t3,t2);}

/* f_6975 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6975,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* f_9675 in k9672 in k9667 in k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9675(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9675,3,t0,t1,t2);}
/* support.scm:815: g2258 */
t3=*((C_word*)lf[289]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[290],t2);}

/* k9672 in k9667 in k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9674,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9675,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9681,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:815: sort-symbols */
t4=*((C_word*)lf[91]+1);
f_5557(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* node-class in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6987(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6987,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[207],lf[209]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(1)));}

/* k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[4])[1]))){
/* support.scm:802: delete-file* */
t3=*((C_word*)lf[293]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9723,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm:803: with-output-to-file */
t4=*((C_word*)lf[301]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[5],t3);}}

/* ##compiler#emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9662,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9666,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9766,a[2]=t5,a[3]=t7,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:782: ##sys#hash-table-for-each */
t10=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,t3);}

/* k9667 in k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:814: debugging */
t3=*((C_word*)lf[11]+1);
f_4703(4,t3,t2,lf[291],lf[292]);}
else{
t3=t2;
f_9674(2,t3,C_SCHEME_FALSE);}}

/* f_9610 in walk in sexpr->node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9610(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9610,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* ##compiler#sexpr->node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9601(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9601,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9607,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_9607(t6,t1,t2);}

/* k10875 in k10872 in k10766 in k10752 in repeat */
static void C_ccall f_10876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10876,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10888,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[346]+1))){
t5=t4;
f_10888(t5,t1);}
else{
t5=C_a_i_list(&a,2,lf[95],((C_word*)t0)[4]);
t6=t4;
f_10888(t6,C_a_i_list(&a,3,lf[358],t5,t1));}}

/* k10872 in k10766 in k10752 in repeat */
static void C_fcall f_10874(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10874,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:1051: gensym */
t3=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[361]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10908,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10908(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[404]);
if(C_truep(t4)){
t5=t3;
f_10908(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[405]);
if(C_truep(t5)){
t6=t3;
f_10908(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[406]);
if(C_truep(t6)){
t7=t3;
f_10908(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[407]);
if(C_truep(t7)){
t8=t3;
f_10908(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[408]);
if(C_truep(t8)){
t9=t3;
f_10908(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[409]);
t10=t3;
f_10908(t10,(C_truep(t9)?t9:C_eqp(((C_word*)t0)[5],lf[410])));}}}}}}}}

/* walk in sexpr->node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9607(C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9607,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9610,tmp=(C_word)a,a+=2,tmp);
t4=C_i_car(t2);
t5=C_i_cadr(t2);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=t2;
t11=C_u_i_cdr(t10);
t12=C_u_i_cdr(t11);
t13=C_i_check_list_2(t12,lf[159]);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9630,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9632,a[2]=t9,a[3]=t16,a[4]=t7,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_9632(t18,t14,t12);}

/* k13543 in chop-separator in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13545(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm:1372: substring */
t2=*((C_word*)lf[478]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* map-loop2160 in walk in sexpr->node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9632(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9632,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9657,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:777: g2166 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9607(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9628 in walk in sexpr->node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:777: g2153 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k10887 in k10875 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_10888(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10888,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[221],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[105],((C_word*)t0)[4],t3));}

/* k9297 in map-loop1976 in k9206 */
static void C_fcall f_9298(C_word t0,C_word t1){
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
f_9287(t5,((C_word*)t0)[7],t3,t4);}

/* k8653 in loop in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8654,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:669: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8620(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k9283 in k9206 */
static void C_ccall f_9285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:747: append */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* map-loop1976 in k9206 */
static void C_fcall f_9287(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9287,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9298,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_9298(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_9298(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8664(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8664,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[2]);
/* support.scm:671: walk */
t4=((C_word*)((C_word*)t0)[6])[1];
f_8118(t4,t2,t3);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[245]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[267]));
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_i_check_list_2(((C_word*)t0)[2],lf[159]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8727,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8729,a[2]=t7,a[3]=t11,a[4]=t5,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8729(t13,t9,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_list_2(((C_word*)t0)[2],lf[159]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8769,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8771,a[2]=t8,a[3]=t12,a[4]=t6,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8771(t14,t10,((C_word*)t0)[2]);}}}

/* node-class-set! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6996,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[207],C_SCHEME_FALSE);
/* support.scm:507: ##sys#block-set! */
t5=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* k8669 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8670(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8670,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[159]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8677,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8679,a[2]=t5,a[3]=t10,a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8679(t12,t8,t6);}

/* map-loop1708 in k8669 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8679,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8704,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:671: g1714 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8675 in k8669 in k8662 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:671: cons* */
t2=*((C_word*)lf[264]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* f_13500 in walkeach in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13500,3,t0,t1,t2);}
/* support.scm:1360: walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_13331(t3,t1,t2,((C_word*)t0)[3]);}

/* k5761 in loop in canonicalize-begin-body in k4698 in k4665 in k4663 */
static void C_fcall f_5763(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5763,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:293: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5740(t4,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:294: gensym */
t3=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[107]);}}

/* f_9960 in resolve in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9960(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9960,3,t0,t1,t2);}
t3=C_i_cdr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_equalp(((C_word*)t0)[2],t3));}

/* k13518 in for-each-loop3474 in walkeach in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13510(t3,((C_word*)t0)[4],t2);}

/* for-each-loop3474 in walkeach in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13510(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13510,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13519,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1330: g3475 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8620(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8620,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_zerop(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8633,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:668: reverse */
t6=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t5=C_a_i_minus(&a,2,t2,C_fix(1));
t6=C_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8654,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t8=t3;
t9=C_u_i_car(t8);
/* support.scm:669: walk */
t10=((C_word*)((C_word*)t0)[2])[1];
f_8118(t10,t7,t9);}}

/* resolve in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9952(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9952,NULL,4,t0,t1,t2,t3);}
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9960,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:832: g2303 */
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t4);}
else{
if(C_truep(C_i_memq(t2,((C_word*)t0)[3]))){
t5=C_a_i_cons(&a,2,C_a_i_cons(&a,2,t2,t3),((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_TRUE);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_eqp(t2,t3));}}}

/* k8632 in loop in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8636,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:668: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8118(t4,t2,t3);}

/* k5700 in k5695 in basic-literal? in k4698 in k4665 in k4663 */
static void C_ccall f_5701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5701,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5716,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* support.scm:279: basic-literal? */
t5=*((C_word*)lf[99]+1);
f_5682(3,t5,t2,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k8635 in k8632 in loop in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8636,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[265],((C_word*)t0)[3],t1));}

/* match1 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9984(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9984,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_not_pair_p(t3))){
/* support.scm:843: resolve */
t4=((C_word*)((C_word*)t0)[2])[1];
f_9952(t4,t1,t3,t2);}
else{
if(C_truep(C_i_not_pair_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10006,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
t6=C_i_car(t3);
/* support.scm:845: match1 */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* k10126 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10127,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10134,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10140,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm:864: g2335 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5714 in k5700 in k5695 in basic-literal? in k4698 in k4665 in k4663 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:280: basic-literal? */
t4=*((C_word*)lf[99]+1);
f_5682(3,t4,((C_word*)t0)[3],t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10122,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10105,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* support.scm:852: g2319 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[6]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* ##compiler#symbolify in k4698 in k4665 in k4663 */
static void C_ccall f_5191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5191,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_stringp(t2))){
/* support.scm:168: string->symbol */
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5213,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:169: open-output-string */
t4=*((C_word*)lf[51]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}

/* f_10134 in k10126 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10134(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10134,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k10131 in k10126 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5731 in k5695 in basic-literal? in k4698 in k4665 in k4663 */
static void C_ccall f_5732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:277: every */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[99]+1),t1);}

/* ##compiler#canonicalize-begin-body in k4698 in k4665 in k4663 */
static void C_ccall f_5734(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5734,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5740,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5740(t6,t1,t2);}

/* f_9918 in k9910 in loop */
static void C_ccall f_9918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_9918r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_9918r(t0,t1,t2,t3,t4);}}

static void C_ccall f_9918r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* k9910 in loop */
static void C_ccall f_9911(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9911,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9918,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9934,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9943,a[2]=t2,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cadr(t1);
/* support.scm:826: sexpr->node */
t7=*((C_word*)lf[287]+1);
f_9601(3,t7,t5,t6);}}

/* k10178 in k10170 in k10163 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_10180(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10180,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[129]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10201,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:876: g2372 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=C_eqp(((C_word*)t0)[3],lf[221]);
if(C_truep(t3)){
if(C_truep(t3)){
/* support.scm:880: any */
t4=*((C_word*)lf[75]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6]);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}}
else{
t4=C_eqp(((C_word*)t0)[3],lf[105]);
if(C_truep(t4)){
/* support.scm:880: any */
t5=*((C_word*)lf[75]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}}}}}

/* f_10116 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10116(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10116,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* loop in canonicalize-begin-body in k4698 in k4665 in k4663 */
static void C_fcall f_5740(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5740,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[103]);}
else{
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_u_i_car(t4));}
else{
t4=t2;
t5=C_u_i_car(t4);
t6=C_i_equalp(t5,lf[104]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5763,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_5763(t8,t6);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5789,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm:291: constant? */
t9=*((C_word*)lf[94]+1);
f_5574(3,t9,t8,t5);}}}}

/* ##compiler#match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9948,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9952,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9984,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10021,a[2]=t8,a[3]=t12,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10127,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:861: matchn */
t17=((C_word*)t12)[1];
f_10021(t17,t16,t2,t3);}

/* k10109 in k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[2]);
/* support.scm:852: match1 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9984(t3,((C_word*)t0)[4],t1,t2);}

/* k9942 in k9910 in loop */
static void C_ccall f_9943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:823: g2271 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[306],t1);}

/* k10783 in k10766 in k10752 in repeat */
static void C_ccall f_10784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10784,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(C_truep(*((C_word*)lf[346]+1))?t1:C_a_i_list(&a,2,lf[354],t1));
t5=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[221],t1,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[105],t3,t6));}

/* k5182 in stringify in k4698 in k4665 in k4663 */
static void C_ccall f_5183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5183,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5186,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:164: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],t2);}

/* k5184 in k5182 in stringify in k4698 in k4665 in k4663 */
static void C_ccall f_5186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:164: get-output-string */
t2=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6651 in k6648 in loop in k6487 */
static void C_ccall f_6652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,lf[169]);
t4=C_i_cdr(t3);
/* support.scm:473: display */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t4,((C_word*)t0)[4]);}

/* k6648 in loop in k6487 */
static void C_fcall f_6650(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6650,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),*((C_word*)lf[13]+1));}
else{
t2=C_eqp(((C_word*)t0)[4],lf[167]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[167]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* support.scm:490: loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_6628(t6,((C_word*)t0)[7],t5);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[170]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[167]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
t6=C_u_i_cdr(t5);
/* support.scm:490: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6628(t7,((C_word*)t0)[7],t6);}
else{
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
/* support.scm:490: loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_6628(t9,((C_word*)t0)[7],t8);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[171]);
if(C_truep(t4)){
t5=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[167]);
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
/* support.scm:490: loop */
t8=((C_word*)((C_word*)t0)[6])[1];
f_6628(t8,((C_word*)t0)[7],t7);}
else{
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[8])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:490: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_6628(t10,((C_word*)t0)[7],t9);}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[172]);
if(C_truep(t5)){
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[9])+1,t6);
t8=((C_word*)t0)[2];
t9=C_u_i_cdr(t8);
/* support.scm:490: loop */
t10=((C_word*)((C_word*)t0)[6])[1];
f_6628(t10,((C_word*)t0)[7],t9);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[173]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_6721(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[177]);
if(C_truep(t8)){
t9=t7;
f_6721(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[178]);
if(C_truep(t9)){
t10=t7;
f_6721(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[157]);
if(C_truep(t10)){
t11=t7;
f_6721(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[179]);
if(C_truep(t11)){
t12=t7;
f_6721(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[180]);
if(C_truep(t12)){
t13=t7;
f_6721(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[181]);
if(C_truep(t13)){
t14=t7;
f_6721(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[182]);
t15=t7;
f_6721(t15,(C_truep(t14)?t14:C_eqp(((C_word*)t0)[4],lf[183])));}}}}}}}}}}}}}

/* k9932 in k9910 in loop */
static void C_ccall f_9934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:827: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9907(t2,((C_word*)t0)[3]);}

/* k6638 in loop in k6487 */
static void C_ccall f_6640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* support.scm:490: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6628(t4,((C_word*)t0)[4],t3);}

/* k10146 in k10138 in k10126 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:864: debugging */
t2=*((C_word*)lf[11]+1);
f_4703(7,t2,((C_word*)t0)[2],lf[311],lf[312],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k10138 in k10126 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10142,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10148,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:864: g2338 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_10142 in k10138 in k10126 in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10142(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10142,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_9902 in load-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9902,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9907,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_9907(t5,t1);}

/* loop */
static void C_fcall f_9907(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9907,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9911,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:821: read */
t3=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5776 in k5784 in k5761 in loop in canonicalize-begin-body in k4698 in k4665 in k4663 */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5777,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[105],((C_word*)t0)[3],t1));}

/* ##compiler#chop-separator in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13535,3,t0,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13545,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(t4,C_fix(0)))){
t6=C_i_string_ref(t2,t4);
t7=t5;
f_13545(t7,C_u_i_memq(t6,lf[479]));}
else{
t6=t5;
f_13545(t6,C_SCHEME_FALSE);}}

/* k13529 in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1363: values */
C_values(4,0,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13210(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13210,2,t0,t1);}
t2=C_eqp(t1,lf[217]);
t3=(C_truep(t2)?t2:C_eqp(t1,lf[240]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13265,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm:1319: g3379 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[7]);}
else{
t4=C_eqp(t1,lf[95]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13279,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_13279(t6,t4);}
else{
t6=C_eqp(t1,lf[222]);
t7=t5;
f_13279(t7,(C_truep(t6)?t6:C_eqp(t1,lf[236])));}}}

/* k5788 in loop in canonicalize-begin-body in k4698 in k4665 in k4663 */
static void C_ccall f_5789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
f_5763(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_5763(t2,C_i_equalp(((C_word*)t0)[3],lf[108]));}}

/* k5784 in k5761 in loop in canonicalize-begin-body in k4698 in k4665 in k4663 */
static void C_ccall f_5785(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5785,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list(&a,2,t1,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5777,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=((C_word*)t0)[2];
t8=C_u_i_cdr(t7);
/* support.scm:295: loop */
t9=((C_word*)((C_word*)t0)[4])[1];
f_5740(t9,t6,t8);}

/* ##compiler#stringify in k4698 in k4665 in k4663 */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5165,3,t0,t1,t2);}
if(C_truep(C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_symbolp(t2))){
/* support.scm:163: symbol->string */
t3=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5183,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:164: open-output-string */
t4=*((C_word*)lf[51]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}

/* f_5995 */
static void C_ccall f_5995(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_5995r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5995r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5995r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* loop in posv in k4698 in k4665 in k4663 */
static void C_fcall f_5139(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5139,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_car(t2);
if(C_truep(C_i_eqvp(((C_word*)t0)[2],t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=t2;
t6=C_u_i_cdr(t5);
t7=C_a_i_plus(&a,2,t3,C_fix(1));
/* support.scm:159: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* f_10105 in k10120 in matchn in match-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10105(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10105,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k13237 in for-each-loop3385 in k13221 in k13269 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13229(t3,((C_word*)t0)[4],t2);}

/* k5990 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_5993 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5993,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5995,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6011,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:354: g537 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,lf[137],lf[138]);}

/* ##compiler#posv in k4698 in k4665 in k4663 */
static void C_ccall f_5133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5133,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5139,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5139(t7,t1,t3,C_fix(0));}

/* f_13204 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13204(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13204,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13204,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13210,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1317: g3372 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[6]);}

/* k13248 in k13269 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13250(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13250,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_13222(t4,t3);}
else{
t2=((C_word*)t0)[4];
f_13222(t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#finish-foreign-result in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12419,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12423,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1218: ##sys#strip-syntax */
t5=*((C_word*)lf[453]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_12414 in estimate-foreign-result-location-size in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12414,2,t0,t1);}
/* support.scm:1212: quit */
t2=*((C_word*)lf[26]+1);
f_4905(4,t2,t1,lf[439],((C_word*)t0)[2]);}

/* ##compiler#initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5991,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5993,tmp=(C_word)a,a+=2,tmp);
t4=*((C_word*)lf[139]+1);
t5=C_i_check_list_2(*((C_word*)lf[139]+1),lf[33]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6039,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6152,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6152(t10,t6,*((C_word*)lf[139]+1));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* for-each-loop3385 in k13221 in k13269 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13229(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13229,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13238,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1322: g3386 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_13194(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13221 in k13269 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13222,NULL,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[33]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13229,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_13229(t6,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k12422 in finish-foreign-result in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12423(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12423,2,t0,t1);}
t2=t1;
t3=C_eqp(t2,lf[374]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[395]));
if(C_truep(t4)){
t5=C_a_i_list(&a,2,lf[95],C_fix(0));
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[441],((C_word*)t0)[3],t5));}
else{
t5=C_eqp(t2,lf[377]);
if(C_truep(t5)){
t6=C_a_i_list(&a,2,lf[95],C_fix(0));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[442],((C_word*)t0)[3],t6));}
else{
t6=C_eqp(t2,lf[394]);
t7=(C_truep(t6)?t6:C_eqp(t2,lf[396]));
if(C_truep(t7)){
t8=C_a_i_list(&a,2,lf[95],C_fix(0));
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,3,lf[443],((C_word*)t0)[3],t8));}
else{
t8=C_eqp(t2,lf[392]);
t9=(C_truep(t8)?t8:C_eqp(t2,lf[393]));
if(C_truep(t9)){
t10=C_a_i_list(&a,2,lf[95],C_fix(0));
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,3,lf[444],((C_word*)t0)[3],t10));}
else{
t10=C_eqp(t2,lf[378]);
if(C_truep(t10)){
t11=C_a_i_list(&a,2,lf[95],C_fix(0));
t12=C_a_i_list(&a,3,lf[441],((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,2,lf[445],t12));}
else{
t11=C_eqp(t2,lf[397]);
if(C_truep(t11)){
t12=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list(&a,3,lf[446],((C_word*)t0)[3],t12));}
else{
t12=C_eqp(t2,lf[398]);
if(C_truep(t12)){
t13=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_a_i_list(&a,3,lf[447],((C_word*)t0)[3],t13));}
else{
if(C_truep(C_i_listp(t1))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12528,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=C_i_car(t1);
t15=C_eqp(t14,lf[386]);
if(C_truep(t15)){
t16=C_i_length(t1);
t17=C_eqp(C_fix(2),t16);
if(C_truep(t17)){
t18=C_i_cadr(t1);
t19=C_u_i_memq(t18,lf[452]);
t20=t13;
f_12528(t20,t19);}
else{
t18=t13;
f_12528(t18,C_SCHEME_FALSE);}}
else{
t16=t13;
f_12528(t16,C_SCHEME_FALSE);}}
else{
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,((C_word*)t0)[3]);}}}}}}}}}

/* k13294 in for-each-loop3409 in k13277 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13286(t3,((C_word*)t0)[4],t2);}

/* k9483 in rec in tree-copy in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9484,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9487,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* support.scm:760: rec */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9471(t5,t2,t4);}

/* loop in k6487 */
static void C_fcall f_6628(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6628,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6640,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[168]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6650,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t5)){
t7=t6;
f_6650(t7,t5);}
else{
t7=C_eqp(t3,lf[184]);
if(C_truep(t7)){
t8=t6;
f_6650(t8,t7);}
else{
t8=C_eqp(t3,lf[185]);
if(C_truep(t8)){
t9=t6;
f_6650(t9,t8);}
else{
t9=C_eqp(t3,lf[186]);
if(C_truep(t9)){
t10=t6;
f_6650(t10,t9);}
else{
t10=C_eqp(t3,lf[187]);
if(C_truep(t10)){
t11=t6;
f_6650(t11,t10);}
else{
t11=C_eqp(t3,lf[188]);
if(C_truep(t11)){
t12=t6;
f_6650(t12,t11);}
else{
t12=C_eqp(t3,lf[189]);
if(C_truep(t12)){
t13=t6;
f_6650(t13,t12);}
else{
t13=C_eqp(t3,lf[190]);
if(C_truep(t13)){
t14=t6;
f_6650(t14,t13);}
else{
t14=C_eqp(t3,lf[191]);
if(C_truep(t14)){
t15=t6;
f_6650(t15,t14);}
else{
t15=C_eqp(t3,lf[192]);
if(C_truep(t15)){
t16=t6;
f_6650(t16,t15);}
else{
t16=C_eqp(t3,lf[193]);
if(C_truep(t16)){
t17=t6;
f_6650(t17,t16);}
else{
t17=C_eqp(t3,lf[194]);
if(C_truep(t17)){
t18=t6;
f_6650(t18,t17);}
else{
t18=C_eqp(t3,lf[195]);
if(C_truep(t18)){
t19=t6;
f_6650(t19,t18);}
else{
t19=C_eqp(t3,lf[196]);
if(C_truep(t19)){
t20=t6;
f_6650(t20,t19);}
else{
t20=C_eqp(t3,lf[197]);
if(C_truep(t20)){
t21=t6;
f_6650(t21,t20);}
else{
t21=C_eqp(t3,lf[198]);
if(C_truep(t21)){
t22=t6;
f_6650(t22,t21);}
else{
t22=C_eqp(t3,lf[199]);
if(C_truep(t22)){
t23=t6;
f_6650(t23,t22);}
else{
t23=C_eqp(t3,lf[200]);
if(C_truep(t23)){
t24=t6;
f_6650(t24,t23);}
else{
t24=C_eqp(t3,lf[201]);
if(C_truep(t24)){
t25=t6;
f_6650(t25,t24);}
else{
t25=C_eqp(t3,lf[202]);
t26=t6;
f_6650(t26,(C_truep(t25)?t25:C_eqp(t3,lf[203])));}}}}}}}}}}}}}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9486 in k9483 in rec in tree-copy in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9487,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* f_6602 in k6598 in k6585 in k6582 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6602(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6602,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k6598 in k6585 in k6582 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6602,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6608,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:496: g949 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* f_13265 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13265(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13265,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* rec in tree-copy in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9471(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9471,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9484,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:760: rec */
t8=t3;
t9=t5;
t1=t8;
t2=t9;
goto loop;}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#display-line-number-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6420,tmp=(C_word)a,a+=2,tmp);
/* support.scm:431: ##sys#hash-table-for-each */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[154]+1));}

/* k6606 in k6598 in k6585 in k6582 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6608,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* support.scm:496: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* for-each-loop3409 in k13277 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13286(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13286,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13295,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1324: g3410 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_13194(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9493(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9493,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9497,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9519,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9525,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:764: g2094 */
t7=t5;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k9498 in k9496 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9503,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9509,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:766: g2100 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* k9496 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9511,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9517,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:765: g2097 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* ##sys#toplevel-definition-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_10476,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_not(t4));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10485,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:938: debugging */
t8=*((C_word*)lf[11]+1);
f_4703(5,t8,t7,lf[255],lf[324],t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k10484 in toplevel-definition-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:939: hide-variable */
t2=*((C_word*)lf[323]+1);
f_14340(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6428 in k6426 in k6424 */
static void C_ccall f_6429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k6426 in k6424 */
static void C_ccall f_6427(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[159]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6438,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6440,a[2]=t6,a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6440(t13,t9,t7);}

/* k6424 */
static void C_ccall f_6425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* f_6420 in display-line-number-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6420,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=*((C_word*)lf[13]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6425,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:433: write */
t6=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,*((C_word*)lf[13]+1));}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* ##compiler#collapsable-literal? in k4698 in k4665 in k4663 */
static void C_ccall f_5614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5614,3,t0,t1,t2);}
t3=C_booleanp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_eofp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_i_numberp(t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_i_symbolp(t2)));}}}}

/* ##compiler#compute-database-statistics in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10496(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10496,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10500,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t8,a[6]=t12,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10505,a[2]=t10,a[3]=t8,a[4]=t6,a[5]=t4,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
/* support.scm:961: ##sys#hash-table-for-each */
t15=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,t14,t2);}

/* k6487 */
static void C_ccall f_6488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6628,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6628(t6,t2,((C_word*)t0)[8]);}

/* k9595 in map-loop2121 in k9562 in k9554 in k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9596(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9596,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9571(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9571(t6,((C_word*)t0)[5],t5);}}

/* k7195 in k7189 in k7186 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
/* support.scm:534: qnode */
t3=*((C_word*)lf[218]+1);
f_7063(3,t3,((C_word*)t0)[2],t2);}

/* k7189 in k7186 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7196,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:540: truncate */
t3=*((C_word*)lf[223]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k7186 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7188(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7188,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:538: warning */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[225],((C_word*)t0)[3]);}
else{
/* support.scm:534: qnode */
t2=*((C_word*)lf[218]+1);
f_7063(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* f_6065 in k6056 */
static void C_ccall f_6065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_6065r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6065r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6065r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* map-loop3643 in k13901 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13997,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14022,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1476: g3649 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13993 in k13901 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13995,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13907,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13912,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:1474: call-with-current-continuation */
t5=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* map-loop751 in k6426 in k6424 */
static void C_fcall f_6440(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6440,NULL,3,t0,t1,t2);}
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

/* k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9550,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9556,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:772: g2116 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_9558 in k9554 in k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9558(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9558,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* map-loop2121 in k9562 in k9554 in k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9571(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9571,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9596,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:773: g2127 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_9533(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#immediate? in k4698 in k4665 in k4663 */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5641,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5645,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5680,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:266: big-fixnum? */
t5=*((C_word*)lf[98]+1);
f_14317(3,t5,t4,t2);}
else{
t4=t3;
f_5645(t4,C_SCHEME_FALSE);}}

/* k5644 in immediate? in k4698 in k4665 in k4663 */
static void C_fcall f_5645(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(C_SCHEME_UNDEFINED,((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_i_nullp(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_eofp(((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_charp(((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?t5:C_booleanp(((C_word*)t0)[3])));}}}}}

/* f_13982 */
static void C_ccall f_13982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13982,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k9562 in k9554 in k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9564,2,t0,t1);}
t2=C_i_check_list_2(t1,lf[159]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9571,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_9571(t7,t3,t1);}

/* f_13987 in k13901 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13987(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13987,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[95],t2));}

/* k13269 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13271,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13250,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(t2,((C_word*)t0)[6]))){
t5=C_i_memq(t2,((C_word*)((C_word*)t0)[5])[1]);
t6=t4;
f_13250(t6,C_i_not(t5));}
else{
t5=t4;
f_13250(t5,C_SCHEME_FALSE);}}

/* k13277 in k13208 in k13201 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13279(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13279,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_check_list_2(((C_word*)t0)[3],lf[33]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13286,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_13286(t6,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k9567 in k9562 in k9554 in k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9569,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,((C_word*)t0)[4],t2));}

/* k13953 in k13945 */
static void C_ccall f_13954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[2]);
/* support.scm:1486: k */
t3=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[5],t2,C_SCHEME_FALSE);}

/* k6405 in loop in find-lambda-container in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:428: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6397(t2,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7485 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7486,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7471,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7477,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7480,a[2]=((C_word*)t0)[6],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:574: cadar */
t6=*((C_word*)lf[234]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[7]);}

/* k7479 in k7485 in loop in k7514 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:574: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7081(t2,((C_word*)t0)[3],t1);}

/* k9500 in k9498 in k9496 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_9503 in k9498 in k9496 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9503(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9503,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* f_9519 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9519(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9519,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k6436 in k6426 in k6424 */
static void C_ccall f_6438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:433: write */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9533(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9533,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9539,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9545,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:771: g2113 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_13977 */
static void C_ccall f_13977(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_13977r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_13977r(t0,t1,t2);}}

static void C_ccall f_13977r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13982,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1474: k3671 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k9507 in k9498 in k9496 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[207],C_SCHEME_FALSE);
/* support.scm:507: ##sys#block-set! */
t4=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(3),t1);}

/* for-each-loop2220 in k9734 in k9725 */
static void C_fcall f_9743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9743,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9752,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:807: g2221 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9527(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9527,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9533,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_9533(t6,t1,t2);}

/* k9523 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[207],C_SCHEME_FALSE);
/* support.scm:507: ##sys#block-set! */
t4=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(1),t1);}

/* f_9539 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9539(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9539,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* ##compiler#foreign-type-convert-result in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11559,4,t0,t1,t2,t3);}
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11571,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1135: ##sys#hash-table-ref */
t5=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[391]+1),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_11554 in foreign-type-check in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11554,2,t0,t1);}
/* support.scm:1128: quit */
t2=*((C_word*)lf[26]+1);
f_4905(4,t2,t1,lf[427],((C_word*)t0)[2]);}

/* k13823 in source-info->string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1455: make-string */
t2=*((C_word*)lf[503]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k13820 in source-info->string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1455: conc */
t2=*((C_word*)lf[500]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[501],t1,lf[502],((C_word*)t0)[4]);}

/* k9554 in k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9556,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9558,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9564,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t3,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* support.scm:773: g2138 */
t8=t6;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[5]);}

/* f_9550 in k9543 in walk in node->sexpr in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9550,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9763 */
static void C_ccall f_9764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:805: print */
t2=*((C_word*)lf[289]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[2],lf[296],t1,lf[297],*((C_word*)lf[298]+1),lf[299]);}

/* f_9766 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9766(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9766,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9772,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* support.scm:784: variable-visible? */
t5=*((C_word*)lf[307]+1);
f_14382(3,t5,t4,t2);}

/* ##compiler#source-info->line in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13832(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13832,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_car(t2));}
else{
if(C_truep(t2)){
/* support.scm:1461: ->string */
t3=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}}

/* k10198 */
static void C_ccall f_10199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[3],t1));}

/* loop in k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_14260(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14260,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14264,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* read-char/port */
t3=*((C_word*)lf[528]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k14263 in loop in k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14264,2,t0,t1);}
if(C_truep(C_eofp(t1))){
/* support.scm:1546: quit */
t2=*((C_word*)lf[26]+1);
f_4905(3,t2,((C_word*)t0)[2],lf[529]);}
else{
if(C_truep(C_i_char_equalp(t1,C_make_character(10)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14281,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1548: newline */
t3=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
if(C_truep(C_i_char_equalp(t1,C_make_character(60)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* read-char/port */
t3=*((C_word*)lf[528]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14312,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}}}}

/* k9751 in for-each-loop2220 in k9734 in k9725 */
static void C_ccall f_9752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9743(t3,((C_word*)t0)[4],t2);}

/* k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7250,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7309(t6,t2,t1);}

/* k7251 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7253(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7258,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t8=C_i_cadr(((C_word*)t0)[5]);
t9=C_i_check_list_2(t8,lf[159]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7271,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7279,a[2]=t6,a[3]=t12,a[4]=t4,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7279(t14,t10,t8);}

/* k7255 in k7251 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:547: g1109 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[105],((C_word*)t0)[4],t1);}

/* f_7258 in k7251 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7258,3,t0,t1,t2);}
t3=C_i_cadr(t2);
/* support.scm:553: walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7081(t4,t1,t3);}

/* k14203 in k14190 in read-info-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14207,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
/* support.scm:1523: ##sys#hash-table-ref */
t5=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,*((C_word*)lf[154]+1),t4);}

/* f_10193 in k10205 in k10178 in k10170 in k10163 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10193(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10193,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10199,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:878: foreign-callback-stub-id */
t4=*((C_word*)lf[314]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k14206 in k14203 in k14190 in read-info-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14207,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),t2);
/* support.scm:1518: ##sys#hash-table-set! */
t4=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[4],*((C_word*)lf[154]+1),((C_word*)t0)[5],t3);}
else{
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),C_SCHEME_END_OF_LIST);
/* support.scm:1518: ##sys#hash-table-set! */
t3=*((C_word*)lf[149]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],*((C_word*)lf[154]+1),((C_word*)t0)[5],t2);}}

/* ##compiler#call-info in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13850,4,t0,t1,t2,t3);}
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_cadr(t2):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13857,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
if(C_truep(C_i_listp(t6))){
t8=C_i_car(t6);
t9=C_i_cadr(t6);
/* support.scm:1468: conc */
t10=*((C_word*)lf[500]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t7,lf[507],t8,lf[508],t3);}
else{
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}
else{
t8=t3;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k13855 in call-info in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13857(C_word c,C_word t0,C_word t1){
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

/* f_10166 in k10163 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10166(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10166,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k10163 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10166,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm:873: g2359 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* ##compiler#build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8112(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8112,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8118,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8118(t6,t1,t2);}

/* walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9055(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9055,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9058,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9064,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* support.scm:714: g1904 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* f_9058 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9058(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9058,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8118(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8118,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8121,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8127,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:625: g1476 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* ##compiler#read/source-info in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14223(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14223,3,t0,t1,t2);}
/* support.scm:1528: ##sys#read */
t3=*((C_word*)lf[523]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[518]+1));}

/* f_9511 in k9496 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9511(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9511,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k10170 in k10163 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10172,2,t0,t1);}
t2=C_eqp(t1,lf[217]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10180,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_10180(t4,t2);}
else{
t4=C_eqp(t1,lf[95]);
if(C_truep(t4)){
t5=t3;
f_10180(t5,t4);}
else{
t5=C_eqp(t1,lf[222]);
t6=t3;
f_10180(t6,(C_truep(t5)?t5:C_eqp(t1,lf[239])));}}}

/* k9515 in k9496 in copy-node! in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_check_structure_2(t2,lf[207],C_SCHEME_FALSE);
/* support.scm:507: ##sys#block-set! */
t4=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t2,C_fix(2),t1);}

/* ##sys#user-read-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14229(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_14229,4,t0,t1,t2,t3);}
if(C_truep(C_i_char_equalp(C_make_character(62),t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14238,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* read-char/port */
t5=*((C_word*)lf[528]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
/* support.scm:1540: old-hook */
t4=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}}

/* f_8121 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8121(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8121,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9047,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
/* support.scm:755: walk */
t5=((C_word*)t3)[1];
f_9055(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* f_8128 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8128(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8128,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8128,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8134,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:626: g1479 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_6087 in k6084 in k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6087,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6089,tmp=(C_word)a,a+=2,tmp);
/* support.scm:366: g635 */
t4=t3;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,lf[137],lf[142]);}

/* k6084 in k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6086(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6087,tmp=(C_word)a,a+=2,tmp);
t3=*((C_word*)lf[143]+1);
t4=C_i_check_list_2(*((C_word*)lf[143]+1),lf[33]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6112,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6112(t8,((C_word*)t0)[2],*((C_word*)lf[143]+1));}

/* f_6089 */
static void C_ccall f_6089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_6089r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6089r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6089r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* f_10159 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10159(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10159,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9791 in k9884 in k9770 */
static void C_fcall f_9793(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9793,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_assq(lf[196],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9800,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9806,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=C_i_cdr(((C_word*)t0)[7]);
/* support.scm:791: g2205 */
t5=t2;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#source-info->string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13804(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13804,3,t0,t1,t2);}
if(C_truep(C_i_listp(t2))){
t3=C_i_car(t2);
t4=C_i_cadr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13821,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13824,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_string_length(t3);
t8=C_a_i_minus(&a,2,C_fix(4),t7);
/* support.scm:1455: max */
t9=*((C_word*)lf[504]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,C_fix(0),t8);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14239 in k14237 in user-read-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14240,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[525],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[526],t2));}

/* walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10156(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10156,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10159,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10165,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm:872: g2351 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* ##compiler#expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10150,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10156,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_10156(3,t7,t1,t2);}

/* k9736 in k9734 in k9725 */
static void C_ccall f_9738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:812: print */
t2=*((C_word*)lf[289]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[295]);}

/* k9729 */
static void C_ccall f_9730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:810: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k14237 in user-read-hook in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1538: scan-sharp-greater-string */
t3=*((C_word*)lf[527]+1);
f_14251(3,t3,t2,((C_word*)t0)[3]);}

/* k9734 in k9725 */
static void C_ccall f_9735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9743,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_9743(t6,t2,t1);}

/* k6495 in k6493 in k6491 in k6489 in k6487 */
static void C_ccall f_6496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:499: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k6493 in k6491 in k6489 in k6487 */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6496,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=*((C_word*)lf[13]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6504,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:498: display */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[162],*((C_word*)lf[13]+1));}
else{
/* support.scm:499: newline */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k6491 in k6489 in k6487 */
static void C_ccall f_6492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[4])[1]))){
t3=*((C_word*)lf[13]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6515,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:497: display */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[163],*((C_word*)lf[13]+1));}
else{
t3=t2;
f_6494(2,t3,C_SCHEME_UNDEFINED);}}

/* k6489 in k6487 */
static void C_ccall f_6490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6524,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[167]);
t5=t3;
f_6524(t5,C_i_not(t4));}
else{
t4=t3;
f_6524(t4,C_SCHEME_FALSE);}}

/* rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10276(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10276,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10279,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10285,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* support.scm:890: g2398 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_10279 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10279(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10279,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* ##compiler#scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14251(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14251,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14255,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1543: open-output-string */
t4=*((C_word*)lf[51]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k9032 in map-loop1814 */
static void C_ccall f_9033(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9033,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9008(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9008(t6,((C_word*)t0)[5],t5);}}

/* f_6479 in k6473 in display-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6479,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t14=C_SCHEME_UNDEFINED;
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6488,a[2]=t1,a[3]=t11,a[4]=t13,a[5]=t5,a[6]=t7,a[7]=t9,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* support.scm:465: write */
t15=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,t2);}}

/* k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14255,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14260,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_14260(t5,((C_word*)t0)[3]);}

/* k6473 in display-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_6474(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6474,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:457: ##sys#hash-table-for-each */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* ##compiler#display-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6470(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6470,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6474,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_6474(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6973,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:454: append */
t5=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[204]+1),*((C_word*)lf[205]+1),*((C_word*)lf[143]+1));}}

/* ##compiler#copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_9038,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_check_list_2(t3,lf[159]);
t12=C_i_check_list_2(t4,lf[159]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9047,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9423,a[2]=t10,a[3]=t15,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_9423(t17,t13,t3,t4);}

/* k11570 in foreign-type-convert-result in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11571,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_i_vectorp(t1))){
t2=C_i_vector_ref(t1,C_fix(2));
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k14280 in k14263 in loop in k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1549: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14260(t2,((C_word*)t0)[3]);}

/* ##compiler#foreign-type-convert-argument in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_11588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11588,4,t0,t1,t2,t3);}
if(C_truep(C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11600,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1142: ##sys#hash-table-ref */
t5=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[391]+1),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k8184 in map-loop1498 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8185(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8185,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8160(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8160(t6,((C_word*)t0)[5],t5);}}

/* k9770 */
static void C_ccall f_9772(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9772,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_assq(lf[171],((C_word*)t0)[2]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9880,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9886,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9888,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9894,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:786: g2196 */
t7=t5;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],lf[306]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* f_7231 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7231(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7231,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* f_7239 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7239(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7239,3,t0,t1,t2);}
t3=C_eqp(lf[228],t2);
if(C_truep(t3)){
/* support.scm:551: gensym */
t4=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* f_9723 in k9665 in emit-global-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9726,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9764,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:805: chicken-version */
t4=*((C_word*)lf[300]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_9727 in k9725 */
static void C_ccall f_9727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9727,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9730,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:809: pp */
t4=*((C_word*)lf[294]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k9725 */
static void C_ccall f_9726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9727,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9735,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:811: reverse */
t4=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* f_10201 in k10178 in k10170 in k10163 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10201(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10201,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k14291 in k14263 in loop in k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14292,2,t0,t1);}
t2=t1;
t3=C_eqp(C_make_character(35),t2);
if(C_truep(t3)){
/* support.scm:1553: get-output-string */
t4=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14303,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t5=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(60),((C_word*)t0)[3]);}}

/* k10205 in k10178 in k10170 in k10163 in walk in expression-has-side-effects? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10207,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10193,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:877: find */
t4=*((C_word*)lf[315]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t3,*((C_word*)lf[316]+1));}

/* k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8135,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm:627: g1482 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* f_8135 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8135(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8135,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8141,2,t0,t1);}
t2=C_eqp(t1,lf[221]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_8149(t4,t2);}
else{
t4=C_eqp(t1,lf[271]);
t5=t3;
f_8149(t5,(C_truep(t4)?t4:C_eqp(t1,lf[272])));}}

/* k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8149(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8149,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[159]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8160,a[2]=t5,a[3]=t9,a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_8160(t11,t7,((C_word*)t0)[2]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[258]);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[159]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8206,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8208,a[2]=t6,a[3]=t10,a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8208(t12,t8,((C_word*)t0)[2]);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[217]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_car(((C_word*)t0)[6]));}
else{
t4=C_eqp(((C_word*)t0)[4],lf[95]);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[6]);
t6=C_booleanp(t5);
if(C_truep(t6)){
if(C_truep(t6)){
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}
else{
t7=C_u_i_car(((C_word*)t0)[6]);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_a_i_list(&a,2,lf[95],t7));}}
else{
t7=C_i_stringp(t5);
if(C_truep(t7)){
if(C_truep(t7)){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}
else{
t8=C_u_i_car(((C_word*)t0)[6]);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_list(&a,2,lf[95],t8));}}
else{
t8=C_i_numberp(t5);
t9=(C_truep(t8)?t8:C_charp(t5));
if(C_truep(t9)){
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t5);}
else{
t10=C_u_i_car(((C_word*)t0)[6]);
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_a_i_list(&a,2,lf[95],t10));}}}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[105]);
if(C_truep(t5)){
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8291,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t9,a[7]=t7,a[8]=t13,a[9]=t11,tmp=(C_word)a,a+=10,tmp);
/* support.scm:639: butlast */
t15=*((C_word*)lf[260]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,((C_word*)t0)[2]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[129]);
if(C_truep(t6)){
t7=C_i_cadr(((C_word*)t0)[6]);
t8=(C_truep(t7)?lf[230]:lf[129]);
t9=C_i_caddr(((C_word*)t0)[6]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8397,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_i_car(((C_word*)t0)[2]);
/* support.scm:646: walk */
t12=((C_word*)((C_word*)t0)[5])[1];
f_8118(t12,t10,t11);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[231]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t0)[6]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8418,a[2]=((C_word*)t0)[3],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_i_car(((C_word*)t0)[2]);
/* support.scm:648: walk */
t11=((C_word*)((C_word*)t0)[5])[1];
f_8118(t11,t9,t10);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[262]);
if(C_truep(t8)){
t9=C_i_car(((C_word*)t0)[2]);
/* support.scm:650: walk */
t10=((C_word*)((C_word*)t0)[5])[1];
f_8118(t10,((C_word*)t0)[3],t9);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[232]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8448,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t11=C_i_car(((C_word*)t0)[2]);
/* support.scm:653: walk */
t12=((C_word*)((C_word*)t0)[5])[1];
f_8118(t12,t10,t11);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[247]);
if(C_truep(t10)){
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_i_check_list_2(((C_word*)t0)[2],lf[159]);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8521,a[2]=t14,a[3]=t17,a[4]=t12,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_8521(t19,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[238]);
if(C_truep(t11)){
t12=C_i_car(((C_word*)t0)[6]);
t13=C_SCHEME_END_OF_LIST;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_i_check_list_2(((C_word*)t0)[2],lf[159]);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8567,a[2]=((C_word*)t0)[3],a[3]=t12,tmp=(C_word)a,a+=4,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8569,a[2]=t16,a[3]=t20,a[4]=t14,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_8569(t22,t18,((C_word*)t0)[2]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[222]);
if(C_truep(t12)){
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_a_i_list1(&a,1,((C_word*)t0)[4]));}
else{
t13=C_eqp(((C_word*)t0)[4],lf[265]);
if(C_truep(t13)){
t14=C_i_car(((C_word*)t0)[6]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8620,a[2]=((C_word*)t0)[5],a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_8620(t18,((C_word*)t0)[3],t14,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[266]);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t14)){
t16=t15;
f_8664(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[268]);
if(C_truep(t16)){
t17=t15;
f_8664(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[269]);
t18=t15;
f_8664(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[4],lf[270])));}}}}}}}}}}}}}}}}

/* k8156 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8158,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* ##compiler#chop-extension in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13560(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13560,3,t0,t1,t2);}
t3=C_i_string_length(t2);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13569,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_13569(t8,t1,t4);}

/* loop in chop-extension in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13569(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_13569,NULL,3,t0,t1,t2);}
if(C_truep(C_i_zerop(t2))){
t3=((C_word*)t0)[2];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_i_string_ref(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(46),t3))){
/* support.scm:1379: substring */
t4=*((C_word*)lf[478]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],C_fix(0),t2);}
else{
t4=C_a_i_minus(&a,2,t2,C_fix(1));
/* support.scm:1380: loop */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}}

/* map-loop1498 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8160(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8160,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8185,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:629: g1504 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_support_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("support_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(6114)){
C_save(t1);
C_rereclaim2(6114*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,558);
lf[0]=C_h_intern(&lf[0],30,"\010compilercompiler-cleanup-hook");
lf[1]=C_h_intern(&lf[1],26,"\010compilerdebugging-chicken");
lf[2]=C_h_intern(&lf[2],26,"\010compilerdisabled-warnings");
lf[3]=C_h_intern(&lf[3],13,"\010compilerbomb");
lf[4]=C_h_intern(&lf[4],5,"error");
lf[5]=C_h_intern(&lf[5],13,"string-append");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\032[internal compiler error] ");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\031[internal compiler error]");
lf[8]=C_h_intern(&lf[8],35,"\010compilercollected-debugging-output");
lf[9]=C_h_intern(&lf[9],24,"+logged-debugging-modes+");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\001x\376\003\000\000\002\376\001\000\000\001S\376\377\016");
lf[11]=C_h_intern(&lf[11],18,"\010compilerdebugging");
lf[12]=C_h_intern(&lf[12],7,"newline");
lf[13]=C_h_intern(&lf[13],19,"\003sysstandard-output");
lf[14]=C_h_intern(&lf[14],19,"\003syswrite-char/port");
lf[15]=C_h_intern(&lf[15],5,"write");
lf[16]=C_h_intern(&lf[16],5,"force");
lf[17]=C_h_intern(&lf[17],7,"display");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[19]=C_h_intern(&lf[19],21,"with-output-to-string");
lf[20]=C_h_intern(&lf[20],12,"flush-output");
lf[21]=C_h_intern(&lf[21],30,"\010compilerwith-debugging-output");
lf[22]=C_h_intern(&lf[22],12,"string-split");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[24]=C_h_intern(&lf[24],17,"lset-intersection");
lf[25]=C_h_intern(&lf[25],3,"eq\077");
lf[26]=C_h_intern(&lf[26],13,"\010compilerquit");
lf[27]=C_h_intern(&lf[27],18,"\003sysstandard-error");
lf[28]=C_h_intern(&lf[28],4,"exit");
lf[29]=C_h_intern(&lf[29],7,"fprintf");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\010\012Error: ");
lf[31]=C_h_intern(&lf[31],21,"\003syssyntax-error-hook");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\005\011~s~%");
lf[33]=C_h_intern(&lf[33],8,"for-each");
lf[34]=C_h_intern(&lf[34],16,"print-call-chain");
lf[35]=C_h_intern(&lf[35],18,"\003syscurrent-thread");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\025\012\011Expansion history:\012");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\003): ");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\017\012Syntax error (");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\017\012Syntax error: ");
lf[40]=C_h_intern(&lf[40],12,"syntax-error");
lf[41]=C_h_intern(&lf[41],31,"\010compileremit-syntax-trace-info");
lf[42]=C_h_intern(&lf[42],9,"map-llist");
lf[43]=C_h_intern(&lf[43],24,"\010compilercheck-signature");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000@Arguments to inlined call of `~A\047 do not match parameter-list ~A");
lf[45]=C_h_intern(&lf[45],18,"\010compilerreal-name");
lf[46]=C_h_intern(&lf[46],13,"\010compilerposq");
lf[47]=C_h_intern(&lf[47],13,"\010compilerposv");
lf[48]=C_h_intern(&lf[48],18,"\010compilerstringify");
lf[49]=C_h_intern(&lf[49],14,"symbol->string");
lf[50]=C_h_intern(&lf[50],17,"get-output-string");
lf[51]=C_h_intern(&lf[51],18,"open-output-string");
lf[52]=C_h_intern(&lf[52],18,"\010compilersymbolify");
lf[53]=C_h_intern(&lf[53],14,"string->symbol");
lf[54]=C_h_intern(&lf[54],17,"\010compilerslashify");
lf[55]=C_h_intern(&lf[55],16,"string-translate");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[58]=C_h_intern(&lf[58],8,"->string");
lf[59]=C_h_intern(&lf[59],21,"\010compileruncommentify");
lf[60]=C_h_intern(&lf[60],17,"string-translate\052");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002\052/\376B\000\000\003\052_/\376\377\016");
lf[62]=C_h_intern(&lf[62],26,"\010compilerbuild-lambda-list");
lf[63]=C_h_intern(&lf[63],29,"\010compilerstring->c-identifier");
lf[64]=C_h_intern(&lf[64],24,"\003sysstring->c-identifier");
lf[65]=C_h_intern(&lf[65],21,"\010compilerc-ify-string");
lf[66]=C_h_intern(&lf[66],16,"\003syslist->string");
lf[67]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\377\016");
lf[68]=C_h_intern(&lf[68],6,"append");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\377\016");
lf[70]=C_h_intern(&lf[70],16,"\003sysstring->list");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[72]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[73]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\077\376\003\000\000\002\376\377\012\000\000\052\376\377\016");
lf[74]=C_h_intern(&lf[74],28,"\010compilervalid-c-identifier\077");
lf[75]=C_h_intern(&lf[75],3,"any");
lf[76]=C_h_intern(&lf[76],14,"\010compilerwords");
lf[77]=C_h_intern(&lf[77],21,"\010compilerwords->bytes");
lf[78]=C_h_intern(&lf[78],34,"\010compilercheck-and-open-input-file");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[80]=C_h_intern(&lf[80],18,"\003sysstandard-input");
lf[81]=C_h_intern(&lf[81],15,"open-input-file");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\024Can not open file ~s");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\000\031(~a) can not open file ~s");
lf[84]=C_h_intern(&lf[84],12,"file-exists\077");
lf[85]=C_h_intern(&lf[85],33,"\010compilerclose-checked-input-file");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[87]=C_h_intern(&lf[87],16,"close-input-port");
lf[88]=C_h_intern(&lf[88],19,"\010compilerfold-inner");
lf[89]=C_h_intern(&lf[89],7,"reverse");
lf[90]=C_h_intern(&lf[90],28,"\010compilerfollow-without-loop");
lf[91]=C_h_intern(&lf[91],21,"\010compilersort-symbols");
lf[92]=C_h_intern(&lf[92],8,"string<\077");
lf[93]=C_h_intern(&lf[93],4,"sort");
lf[94]=C_h_intern(&lf[94],18,"\010compilerconstant\077");
lf[95]=C_h_intern(&lf[95],5,"quote");
lf[96]=C_h_intern(&lf[96],29,"\010compilercollapsable-literal\077");
lf[97]=C_h_intern(&lf[97],19,"\010compilerimmediate\077");
lf[98]=C_h_intern(&lf[98],20,"\010compilerbig-fixnum\077");
lf[99]=C_h_intern(&lf[99],23,"\010compilerbasic-literal\077");
lf[100]=C_h_intern(&lf[100],5,"every");
lf[101]=C_h_intern(&lf[101],12,"vector->list");
lf[102]=C_h_intern(&lf[102],32,"\010compilercanonicalize-begin-body");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[104]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[105]=C_h_intern(&lf[105],3,"let");
lf[106]=C_h_intern(&lf[106],6,"gensym");
lf[107]=C_h_intern(&lf[107],1,"t");
lf[108]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\377\016");
lf[109]=C_h_intern(&lf[109],21,"\010compilerstring->expr");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot parse expression: ~s [~a]~%");
lf[111]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[112]=C_h_intern(&lf[112],5,"begin");
lf[113]=C_h_intern(&lf[113],4,"read");
lf[114]=C_h_intern(&lf[114],6,"unfold");
lf[115]=C_h_intern(&lf[115],11,"eof-object\077");
lf[116]=C_h_intern(&lf[116],6,"values");
lf[117]=C_h_intern(&lf[117],22,"with-input-from-string");
lf[118]=C_h_intern(&lf[118],22,"with-exception-handler");
lf[119]=C_h_intern(&lf[119],30,"call-with-current-continuation");
lf[120]=C_h_intern(&lf[120],30,"\010compilerdecompose-lambda-list");
lf[121]=C_h_intern(&lf[121],25,"\003sysdecompose-lambda-list");
lf[122]=C_h_intern(&lf[122],21,"\010compilerllist-length");
lf[123]=C_h_intern(&lf[123],21,"\010compilerllist-match\077");
lf[124]=C_h_intern(&lf[124],30,"\010compilerexpand-profile-lambda");
lf[125]=C_h_intern(&lf[125],29,"\010compilerprofile-lambda-index");
lf[126]=C_h_intern(&lf[126],28,"\010compilerprofile-lambda-list");
lf[127]=C_h_intern(&lf[127],17,"\003sysprofile-entry");
lf[128]=C_h_intern(&lf[128],33,"\010compilerprofile-info-vector-name");
lf[129]=C_h_intern(&lf[129],11,"\004corelambda");
lf[130]=C_h_intern(&lf[130],9,"\003sysapply");
lf[131]=C_h_intern(&lf[131],16,"\003sysprofile-exit");
lf[132]=C_h_intern(&lf[132],16,"\003sysdynamic-wind");
lf[133]=C_h_intern(&lf[133],37,"\010compilerinitialize-analysis-database");
lf[134]=C_h_intern(&lf[134],8,"\003sysput!");
lf[135]=C_h_intern(&lf[135],26,"\010compilerfoldable-bindings");
lf[136]=C_h_intern(&lf[136],17,"\010compilerfoldable");
lf[137]=C_h_intern(&lf[137],18,"\010compilerintrinsic");
lf[138]=C_h_intern(&lf[138],8,"standard");
lf[139]=C_h_intern(&lf[139],17,"standard-bindings");
lf[140]=C_h_intern(&lf[140],8,"extended");
lf[141]=C_h_intern(&lf[141],17,"extended-bindings");
lf[142]=C_h_intern(&lf[142],8,"internal");
lf[143]=C_h_intern(&lf[143],26,"\010compilerinternal-bindings");
lf[144]=C_h_intern(&lf[144],12,"\010compilerget");
lf[145]=C_h_intern(&lf[145],18,"\003syshash-table-ref");
lf[146]=C_h_intern(&lf[146],16,"\010compilerget-all");
lf[147]=C_h_intern(&lf[147],10,"filter-map");
lf[148]=C_h_intern(&lf[148],13,"\010compilerput!");
lf[149]=C_h_intern(&lf[149],19,"\003syshash-table-set!");
lf[150]=C_h_intern(&lf[150],17,"\010compilercollect!");
lf[151]=C_h_intern(&lf[151],15,"\010compilercount!");
lf[152]=C_h_intern(&lf[152],17,"\010compilerget-list");
lf[153]=C_h_intern(&lf[153],17,"\010compilerget-line");
lf[154]=C_h_intern(&lf[154],24,"\003sysline-number-database");
lf[155]=C_h_intern(&lf[155],19,"\010compilerget-line-2");
lf[156]=C_h_intern(&lf[156],30,"\010compilerfind-lambda-container");
lf[157]=C_h_intern(&lf[157],12,"contained-in");
lf[158]=C_h_intern(&lf[158],37,"\010compilerdisplay-line-number-database");
lf[159]=C_h_intern(&lf[159],3,"map");
lf[160]=C_h_intern(&lf[160],23,"\003syshash-table-for-each");
lf[161]=C_h_intern(&lf[161],34,"\010compilerdisplay-analysis-database");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\005\011css=");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\006\011refs=");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\005\011val=");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\006\011lval=");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\006\011pval=");
lf[167]=C_h_intern(&lf[167],7,"unknown");
lf[168]=C_h_intern(&lf[168],8,"captured");
lf[169]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010captured\376\001\000\000\003cpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010assigned\376\001\000\000\003set\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005box"
"ed\376\001\000\000\003box\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006global\376\001\000\000\003glo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020assigned-locally\376\001\000\000\003stl\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014contractable\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020standard-binding\376\001\000\000\003stb\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006simple\376\001\000\000\003sim\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011inlinable\376\001\000\000\003inl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013collapsable\376"
"\001\000\000\003col\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011removable\376\001\000\000\003rem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010constant\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\015inline-target\376\001\000\000\003ilt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020inline-transient\376\001\000\000\003itr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"undefined\376\001\000\000\003und\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011replacing\376\001\000\000\003rpg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006unused\376\001\000\000\003uud\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\020extended-binding\376\001\000\000\003xtb\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015inline-export\376\001\000\000\003ilx\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\013hidden-refs\376\001\000\000\003hrf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011value-ref\376\001\000\000\003vvf\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014custom"
"izable\376\001\000\000\003cst\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025has-unused-parameters\376\001\000\000\003hup\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012boxed-r"
"est\376\001\000\000\003bxr\376\377\016");
lf[170]=C_h_intern(&lf[170],5,"value");
lf[171]=C_h_intern(&lf[171],11,"local-value");
lf[172]=C_h_intern(&lf[172],15,"potential-value");
lf[173]=C_h_intern(&lf[173],10,"replacable");
lf[174]=C_h_intern(&lf[174],10,"references");
lf[175]=C_h_intern(&lf[175],10,"call-sites");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\020Illegal property");
lf[177]=C_h_intern(&lf[177],4,"home");
lf[178]=C_h_intern(&lf[178],8,"contains");
lf[179]=C_h_intern(&lf[179],8,"use-expr");
lf[180]=C_h_intern(&lf[180],12,"closure-size");
lf[181]=C_h_intern(&lf[181],14,"rest-parameter");
lf[182]=C_h_intern(&lf[182],18,"captured-variables");
lf[183]=C_h_intern(&lf[183],13,"explicit-rest");
lf[184]=C_h_intern(&lf[184],8,"assigned");
lf[185]=C_h_intern(&lf[185],5,"boxed");
lf[186]=C_h_intern(&lf[186],6,"global");
lf[187]=C_h_intern(&lf[187],12,"contractable");
lf[188]=C_h_intern(&lf[188],16,"standard-binding");
lf[189]=C_h_intern(&lf[189],16,"assigned-locally");
lf[190]=C_h_intern(&lf[190],11,"collapsable");
lf[191]=C_h_intern(&lf[191],9,"removable");
lf[192]=C_h_intern(&lf[192],9,"undefined");
lf[193]=C_h_intern(&lf[193],9,"replacing");
lf[194]=C_h_intern(&lf[194],6,"unused");
lf[195]=C_h_intern(&lf[195],6,"simple");
lf[196]=C_h_intern(&lf[196],9,"inlinable");
lf[197]=C_h_intern(&lf[197],13,"inline-export");
lf[198]=C_h_intern(&lf[198],21,"has-unused-parameters");
lf[199]=C_h_intern(&lf[199],16,"extended-binding");
lf[200]=C_h_intern(&lf[200],12,"customizable");
lf[201]=C_h_intern(&lf[201],8,"constant");
lf[202]=C_h_intern(&lf[202],10,"boxed-rest");
lf[203]=C_h_intern(&lf[203],11,"hidden-refs");
lf[204]=C_h_intern(&lf[204],34,"\010compilerdefault-standard-bindings");
lf[205]=C_h_intern(&lf[205],34,"\010compilerdefault-extended-bindings");
lf[206]=C_h_intern(&lf[206],9,"make-node");
lf[207]=C_h_intern(&lf[207],4,"node");
lf[208]=C_h_intern(&lf[208],5,"node\077");
lf[209]=C_h_intern(&lf[209],10,"node-class");
lf[210]=C_h_intern(&lf[210],15,"node-class-set!");
lf[211]=C_h_intern(&lf[211],14,"\003sysblock-set!");
lf[212]=C_h_intern(&lf[212],15,"node-parameters");
lf[213]=C_h_intern(&lf[213],20,"node-parameters-set!");
lf[214]=C_h_intern(&lf[214],19,"node-subexpressions");
lf[215]=C_h_intern(&lf[215],24,"node-subexpressions-set!");
lf[216]=C_h_intern(&lf[216],16,"\010compilervarnode");
lf[217]=C_h_intern(&lf[217],13,"\004corevariable");
lf[218]=C_h_intern(&lf[218],14,"\010compilerqnode");
lf[219]=C_h_intern(&lf[219],25,"\010compilerbuild-node-graph");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\016bad expression");
lf[221]=C_h_intern(&lf[221],2,"if");
lf[222]=C_h_intern(&lf[222],14,"\004coreundefined");
lf[223]=C_h_intern(&lf[223],8,"truncate");
lf[224]=C_h_intern(&lf[224],7,"warning");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\0006literal is out of range - will be truncated to integer");
lf[226]=C_h_intern(&lf[226],6,"fixnum");
lf[227]=C_h_intern(&lf[227],11,"number-type");
lf[228]=C_h_intern(&lf[228],4,"\000tmp");
lf[229]=C_h_intern(&lf[229],6,"unzip1");
lf[230]=C_h_intern(&lf[230],6,"lambda");
lf[231]=C_h_intern(&lf[231],8,"\004corethe");
lf[232]=C_h_intern(&lf[232],13,"\004coretypecase");
lf[233]=C_h_intern(&lf[233],4,"else");
lf[234]=C_h_intern(&lf[234],5,"cadar");
lf[235]=C_h_intern(&lf[235],1,"\052");
lf[236]=C_h_intern(&lf[236],14,"\004coreprimitive");
lf[237]=C_h_intern(&lf[237],11,"\004coreinline");
lf[238]=C_h_intern(&lf[238],13,"\004corecallunit");
lf[239]=C_h_intern(&lf[239],9,"\004coreproc");
lf[240]=C_h_intern(&lf[240],4,"set!");
lf[241]=C_h_intern(&lf[241],9,"\004coreset!");
lf[242]=C_h_intern(&lf[242],29,"\004coreforeign-callback-wrapper");
lf[243]=C_h_intern(&lf[243],5,"sixth");
lf[244]=C_h_intern(&lf[244],5,"fifth");
lf[245]=C_h_intern(&lf[245],20,"\004coreinline_allocate");
lf[246]=C_h_intern(&lf[246],8,"\004coreapp");
lf[247]=C_h_intern(&lf[247],9,"\004corecall");
lf[248]=C_h_intern(&lf[248],28,"\003syssymbol->qualified-string");
lf[249]=C_h_intern(&lf[249],7,"\003sysget");
lf[250]=C_h_intern(&lf[250],34,"\010compileralways-bound-to-procedure");
lf[251]=C_h_intern(&lf[251],15,"\004coreinline_ref");
lf[252]=C_h_intern(&lf[252],18,"\004coreinline_update");
lf[253]=C_h_intern(&lf[253],19,"\004coreinline_loc_ref");
lf[254]=C_h_intern(&lf[254],22,"\004coreinline_loc_update");
lf[255]=C_h_intern(&lf[255],1,"o");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\033eliminated procedure checks");
lf[257]=C_h_intern(&lf[257],30,"\010compilerbuild-expression-tree");
lf[258]=C_h_intern(&lf[258],12,"\004coreclosure");
lf[259]=C_h_intern(&lf[259],4,"last");
lf[260]=C_h_intern(&lf[260],7,"butlast");
lf[261]=C_h_intern(&lf[261],3,"the");
lf[262]=C_h_intern(&lf[262],15,"\004corethe/result");
lf[263]=C_h_intern(&lf[263],17,"compiler-typecase");
lf[264]=C_h_intern(&lf[264],5,"cons\052");
lf[265]=C_h_intern(&lf[265],9,"\004corebind");
lf[266]=C_h_intern(&lf[266],10,"\004coreunbox");
lf[267]=C_h_intern(&lf[267],16,"\004corelet_unboxed");
lf[268]=C_h_intern(&lf[268],8,"\004coreref");
lf[269]=C_h_intern(&lf[269],11,"\004coreupdate");
lf[270]=C_h_intern(&lf[270],13,"\004coreupdate_i");
lf[271]=C_h_intern(&lf[271],8,"\004corebox");
lf[272]=C_h_intern(&lf[272],9,"\004corecond");
lf[273]=C_h_intern(&lf[273],21,"\010compilerfold-boolean");
lf[274]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_and\376\377\016");
lf[275]=C_h_intern(&lf[275],31,"\010compilerinline-lambda-bindings");
lf[276]=C_h_intern(&lf[276],8,"split-at");
lf[277]=C_h_intern(&lf[277],10,"fold-right");
lf[278]=C_h_intern(&lf[278],4,"take");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[280]=C_h_intern(&lf[280],34,"\010compilercopy-node-tree-and-rename");
lf[281]=C_h_intern(&lf[281],9,"alist-ref");
lf[282]=C_h_intern(&lf[282],16,"inline-transient");
lf[283]=C_h_intern(&lf[283],1,"f");
lf[284]=C_h_intern(&lf[284],18,"\010compilertree-copy");
lf[285]=C_h_intern(&lf[285],19,"\010compilercopy-node!");
lf[286]=C_h_intern(&lf[286],20,"\010compilernode->sexpr");
lf[287]=C_h_intern(&lf[287],20,"\010compilersexpr->node");
lf[288]=C_h_intern(&lf[288],32,"\010compileremit-global-inline-file");
lf[289]=C_h_intern(&lf[289],5,"print");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[291]=C_h_intern(&lf[291],1,"i");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\0001the following procedures can be globally inlined:");
lf[293]=C_h_intern(&lf[293],12,"delete-file\052");
lf[294]=C_h_intern(&lf[294],2,"pp");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\015; END OF FILE");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\027; GENERATED BY CHICKEN ");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\006 FROM ");
lf[298]=C_h_intern(&lf[298],24,"\010compilersource-filename");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[300]=C_h_intern(&lf[300],15,"chicken-version");
lf[301]=C_h_intern(&lf[301],19,"with-output-to-file");
lf[302]=C_h_intern(&lf[302],3,"yes");
lf[303]=C_h_intern(&lf[303],2,"no");
lf[304]=C_h_intern(&lf[304],24,"\010compilerinline-max-size");
lf[305]=C_h_intern(&lf[305],15,"\010compilerinline");
lf[306]=C_h_intern(&lf[306],22,"\010compilerinline-global");
lf[307]=C_h_intern(&lf[307],26,"\010compilervariable-visible\077");
lf[308]=C_h_intern(&lf[308],25,"\010compilerload-inline-file");
lf[309]=C_h_intern(&lf[309],20,"with-input-from-file");
lf[310]=C_h_intern(&lf[310],19,"\010compilermatch-node");
lf[311]=C_h_intern(&lf[311],1,"a");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\007matched");
lf[313]=C_h_intern(&lf[313],37,"\010compilerexpression-has-side-effects\077");
lf[314]=C_h_intern(&lf[314],24,"foreign-callback-stub-id");
lf[315]=C_h_intern(&lf[315],4,"find");
lf[316]=C_h_intern(&lf[316],22,"foreign-callback-stubs");
lf[317]=C_h_intern(&lf[317],28,"\010compilersimple-lambda-node\077");
lf[318]=C_h_intern(&lf[318],31,"\010compilerdump-undefined-globals");
lf[319]=C_h_intern(&lf[319],8,"keyword\077");
lf[320]=C_h_intern(&lf[320],29,"\010compilerdump-defined-globals");
lf[321]=C_h_intern(&lf[321],25,"\010compilerdump-global-refs");
lf[322]=C_h_intern(&lf[322],28,"\003systoplevel-definition-hook");
lf[323]=C_h_intern(&lf[323],22,"\010compilerhide-variable");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\042hiding nonexported module bindings");
lf[325]=C_h_intern(&lf[325],36,"\010compilercompute-database-statistics");
lf[326]=C_h_intern(&lf[326],29,"\010compilercurrent-program-size");
lf[327]=C_h_intern(&lf[327],30,"\010compileroriginal-program-size");
lf[328]=C_h_intern(&lf[328],33,"\010compilerprint-program-statistics");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\027;   database entries: \011");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known call sites: \011");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\027;   global variables: \011");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known procedures: \011");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\042;   variables with known values: \011");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\032 \011original program size: \011");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\023;   program size: \011");
lf[336]=C_h_intern(&lf[336],1,"s");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\023program statistics:");
lf[338]=C_h_intern(&lf[338],35,"\010compilerpprint-expressions-to-file");
lf[339]=C_h_intern(&lf[339],17,"close-output-port");
lf[340]=C_h_intern(&lf[340],12,"pretty-print");
lf[341]=C_h_intern(&lf[341],19,"with-output-to-port");
lf[342]=C_h_intern(&lf[342],16,"open-output-file");
lf[343]=C_h_intern(&lf[343],27,"\010compilerforeign-type-check");
lf[344]=C_h_intern(&lf[344],4,"char");
lf[345]=C_h_intern(&lf[345],13,"unsigned-char");
lf[346]=C_h_intern(&lf[346],6,"unsafe");
lf[347]=C_h_intern(&lf[347],25,"\003sysforeign-char-argument");
lf[348]=C_h_intern(&lf[348],3,"int");
lf[349]=C_h_intern(&lf[349],27,"\003sysforeign-fixnum-argument");
lf[350]=C_h_intern(&lf[350],5,"float");
lf[351]=C_h_intern(&lf[351],27,"\003sysforeign-flonum-argument");
lf[352]=C_h_intern(&lf[352],4,"blob");
lf[353]=C_h_intern(&lf[353],14,"scheme-pointer");
lf[354]=C_h_intern(&lf[354],26,"\003sysforeign-block-argument");
lf[355]=C_h_intern(&lf[355],22,"nonnull-scheme-pointer");
lf[356]=C_h_intern(&lf[356],12,"nonnull-blob");
lf[357]=C_h_intern(&lf[357],14,"pointer-vector");
lf[358]=C_h_intern(&lf[358],35,"\003sysforeign-struct-wrapper-argument");
lf[359]=C_h_intern(&lf[359],22,"nonnull-pointer-vector");
lf[360]=C_h_intern(&lf[360],8,"u8vector");
lf[361]=C_h_intern(&lf[361],16,"nonnull-u8vector");
lf[362]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-u8vector\376\001\000\000\010u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u16vector\376\001\000\000"
"\011u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-s8vector\376\001\000\000\010s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-s16"
"vector\376\001\000\000\011s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u32vector\376\001\000\000\011u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\021nonnull-s32vector\376\001\000\000\011s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f32vector\376\001\000\000\011f32vector\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f64vector\376\001\000\000\011f64vector\376\377\016");
lf[363]=C_h_intern(&lf[363],7,"integer");
lf[364]=C_h_intern(&lf[364],28,"\003sysforeign-integer-argument");
lf[365]=C_h_intern(&lf[365],9,"integer64");
lf[366]=C_h_intern(&lf[366],30,"\003sysforeign-integer64-argument");
lf[367]=C_h_intern(&lf[367],16,"unsigned-integer");
lf[368]=C_h_intern(&lf[368],37,"\003sysforeign-unsigned-integer-argument");
lf[369]=C_h_intern(&lf[369],18,"unsigned-integer64");
lf[370]=C_h_intern(&lf[370],39,"\003sysforeign-unsigned-integer64-argument");
lf[371]=C_h_intern(&lf[371],9,"c-pointer");
lf[372]=C_h_intern(&lf[372],28,"\003sysforeign-pointer-argument");
lf[373]=C_h_intern(&lf[373],17,"nonnull-c-pointer");
lf[374]=C_h_intern(&lf[374],8,"c-string");
lf[375]=C_h_intern(&lf[375],17,"\003sysmake-c-string");
lf[376]=C_h_intern(&lf[376],27,"\003sysforeign-string-argument");
lf[377]=C_h_intern(&lf[377],16,"nonnull-c-string");
lf[378]=C_h_intern(&lf[378],6,"symbol");
lf[379]=C_h_intern(&lf[379],18,"\003syssymbol->string");
lf[380]=C_h_intern(&lf[380],3,"ref");
lf[381]=C_h_intern(&lf[381],8,"instance");
lf[382]=C_h_intern(&lf[382],12,"instance-ref");
lf[383]=C_h_intern(&lf[383],4,"this");
lf[384]=C_h_intern(&lf[384],8,"slot-ref");
lf[385]=C_h_intern(&lf[385],16,"nonnull-instance");
lf[386]=C_h_intern(&lf[386],5,"const");
lf[387]=C_h_intern(&lf[387],4,"enum");
lf[388]=C_h_intern(&lf[388],15,"nonnull-pointer");
lf[389]=C_h_intern(&lf[389],7,"pointer");
lf[390]=C_h_intern(&lf[390],8,"function");
lf[391]=C_h_intern(&lf[391],27,"\010compilerforeign-type-table");
lf[392]=C_h_intern(&lf[392],17,"nonnull-c-string\052");
lf[393]=C_h_intern(&lf[393],26,"nonnull-unsigned-c-string\052");
lf[394]=C_h_intern(&lf[394],9,"c-string\052");
lf[395]=C_h_intern(&lf[395],17,"unsigned-c-string");
lf[396]=C_h_intern(&lf[396],18,"unsigned-c-string\052");
lf[397]=C_h_intern(&lf[397],13,"c-string-list");
lf[398]=C_h_intern(&lf[398],14,"c-string-list\052");
lf[399]=C_h_intern(&lf[399],18,"unsigned-integer32");
lf[400]=C_h_intern(&lf[400],13,"unsigned-long");
lf[401]=C_h_intern(&lf[401],4,"long");
lf[402]=C_h_intern(&lf[402],6,"size_t");
lf[403]=C_h_intern(&lf[403],9,"integer32");
lf[404]=C_h_intern(&lf[404],17,"nonnull-u16vector");
lf[405]=C_h_intern(&lf[405],16,"nonnull-s8vector");
lf[406]=C_h_intern(&lf[406],17,"nonnull-s16vector");
lf[407]=C_h_intern(&lf[407],17,"nonnull-u32vector");
lf[408]=C_h_intern(&lf[408],17,"nonnull-s32vector");
lf[409]=C_h_intern(&lf[409],17,"nonnull-f32vector");
lf[410]=C_h_intern(&lf[410],17,"nonnull-f64vector");
lf[411]=C_h_intern(&lf[411],9,"u16vector");
lf[412]=C_h_intern(&lf[412],8,"s8vector");
lf[413]=C_h_intern(&lf[413],9,"s16vector");
lf[414]=C_h_intern(&lf[414],9,"u32vector");
lf[415]=C_h_intern(&lf[415],9,"s32vector");
lf[416]=C_h_intern(&lf[416],9,"f32vector");
lf[417]=C_h_intern(&lf[417],9,"f64vector");
lf[418]=C_h_intern(&lf[418],6,"double");
lf[419]=C_h_intern(&lf[419],6,"number");
lf[420]=C_h_intern(&lf[420],12,"unsigned-int");
lf[421]=C_h_intern(&lf[421],5,"short");
lf[422]=C_h_intern(&lf[422],14,"unsigned-short");
lf[423]=C_h_intern(&lf[423],4,"byte");
lf[424]=C_h_intern(&lf[424],13,"unsigned-byte");
lf[425]=C_h_intern(&lf[425],5,"int32");
lf[426]=C_h_intern(&lf[426],14,"unsigned-int32");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[428]=C_h_intern(&lf[428],36,"\010compilerforeign-type-convert-result");
lf[429]=C_h_intern(&lf[429],38,"\010compilerforeign-type-convert-argument");
lf[430]=C_h_intern(&lf[430],27,"\010compilerfinal-foreign-type");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[432]=C_h_intern(&lf[432],37,"\010compilerestimate-foreign-result-size");
lf[433]=C_h_intern(&lf[433],4,"bool");
lf[434]=C_h_intern(&lf[434],4,"void");
lf[435]=C_h_intern(&lf[435],13,"scheme-object");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[437]=C_h_intern(&lf[437],46,"\010compilerestimate-foreign-result-location-size");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\0005cannot compute size of location for foreign type `~S\047");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[440]=C_h_intern(&lf[440],30,"\010compilerfinish-foreign-result");
lf[441]=C_h_intern(&lf[441],17,"\003syspeek-c-string");
lf[442]=C_h_intern(&lf[442],25,"\003syspeek-nonnull-c-string");
lf[443]=C_h_intern(&lf[443],26,"\003syspeek-and-free-c-string");
lf[444]=C_h_intern(&lf[444],34,"\003syspeek-and-free-nonnull-c-string");
lf[445]=C_h_intern(&lf[445],17,"\003sysintern-symbol");
lf[446]=C_h_intern(&lf[446],22,"\003syspeek-c-string-list");
lf[447]=C_h_intern(&lf[447],31,"\003syspeek-and-free-c-string-list");
lf[448]=C_h_intern(&lf[448],17,"\003sysnull-pointer\077");
lf[449]=C_h_intern(&lf[449],3,"not");
lf[450]=C_h_intern(&lf[450],4,"make");
lf[451]=C_h_intern(&lf[451],3,"and");
lf[452]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010c-string\376\003\000\000\002\376\001\000\000\011c-string\052\376\003\000\000\002\376\001\000\000\021unsigned-c-string\376\003\000\000\002\376\001\000\000\022unsign"
"ed-c-string\052\376\003\000\000\002\376\001\000\000\020nonnull-c-string\376\003\000\000\002\376\001\000\000\021nonnull-c-string\052\376\003\000\000\002\376\001\000\000\030nonnu"
"ll-unsigned-string\052\376\377\016");
lf[453]=C_h_intern(&lf[453],16,"\003sysstrip-syntax");
lf[454]=C_h_intern(&lf[454],36,"\010compilerforeign-type->scrutiny-type");
lf[455]=C_h_intern(&lf[455],3,"arg");
lf[456]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\004blob\376\377\016");
lf[457]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\016pointer-vector\376\377\016");
lf[458]=C_h_intern(&lf[458],6,"struct");
lf[459]=C_h_intern(&lf[459],2,"or");
lf[460]=C_h_intern(&lf[460],7,"boolean");
lf[461]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010u8vector\376\377\016");
lf[462]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\010s8vector\376\377\016");
lf[463]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u16vector\376\377\016");
lf[464]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s16vector\376\377\016");
lf[465]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011u32vector\376\377\016");
lf[466]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011s32vector\376\377\016");
lf[467]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f32vector\376\377\016");
lf[468]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006struct\376\003\000\000\002\376\001\000\000\011f64vector\376\377\016");
lf[469]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016");
lf[470]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[471]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007list-of\376\003\000\000\002\376\001\000\000\006string\376\377\016");
lf[472]=C_h_intern(&lf[472],6,"string");
lf[473]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\002or\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\010locative\376\377\016");
lf[474]=C_h_intern(&lf[474],28,"\010compilerscan-used-variables");
lf[475]=C_h_intern(&lf[475],28,"\010compilerscan-free-variables");
lf[476]=C_h_intern(&lf[476],11,"lset-adjoin");
lf[477]=C_h_intern(&lf[477],23,"\010compilerchop-separator");
lf[478]=C_h_intern(&lf[478],9,"substring");
lf[479]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[480]=C_h_intern(&lf[480],23,"\010compilerchop-extension");
lf[481]=C_h_intern(&lf[481],36,"\010compilermake-block-variable-literal");
lf[482]=C_h_intern(&lf[482],22,"block-variable-literal");
lf[483]=C_h_intern(&lf[483],32,"\010compilerblock-variable-literal\077");
lf[484]=C_h_intern(&lf[484],36,"\010compilerblock-variable-literal-name");
lf[485]=C_h_intern(&lf[485],27,"block-variable-literal-name");
lf[486]=C_h_intern(&lf[486],25,"\010compilermake-random-name");
lf[487]=C_h_intern(&lf[487],6,"random");
lf[488]=C_h_intern(&lf[488],15,"current-seconds");
lf[489]=C_h_intern(&lf[489],23,"\010compilerset-real-name!");
lf[490]=C_h_intern(&lf[490],24,"\010compilerreal-name-table");
lf[491]=C_h_intern(&lf[491],19,"real-name-max-depth");
lf[492]=C_h_intern(&lf[492],18,"string-intersperse");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[494]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[495]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[496]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[497]=C_h_intern(&lf[497],19,"\010compilerreal-name2");
lf[498]=C_h_intern(&lf[498],32,"\010compilerdisplay-real-name-table");
lf[499]=C_h_intern(&lf[499],28,"\010compilersource-info->string");
lf[500]=C_h_intern(&lf[500],4,"conc");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[503]=C_h_intern(&lf[503],11,"make-string");
lf[504]=C_h_intern(&lf[504],3,"max");
lf[505]=C_h_intern(&lf[505],26,"\010compilersource-info->line");
lf[506]=C_h_intern(&lf[506],18,"\010compilercall-info");
lf[507]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[509]=C_h_intern(&lf[509],27,"\010compilerconstant-form-eval");
lf[510]=C_h_intern(&lf[510],22,"get-condition-property");
lf[511]=C_h_intern(&lf[511],3,"exn");
lf[512]=C_h_intern(&lf[512],7,"message");
lf[513]=C_decode_literal(C_heaptop,"\376B\000\000\032folded constant expression");
lf[514]=C_decode_literal(C_heaptop,"\376B\000\000Dattempt to constant-fold call to procedure that has multiple results");
lf[515]=C_h_intern(&lf[515],8,"\003syslist");
lf[516]=C_decode_literal(C_heaptop,"\376B\000\000.attempt to constant-fold call to non-procedure");
lf[517]=C_h_intern(&lf[517],19,"\010compilerdump-nodes");
lf[518]=C_h_intern(&lf[518],23,"\010compilerread-info-hook");
lf[519]=C_h_intern(&lf[519],27,"\003syscurrent-source-filename");
lf[520]=C_decode_literal(C_heaptop,"\376B\000\000\001:");
lf[521]=C_h_intern(&lf[521],9,"list-info");
lf[522]=C_h_intern(&lf[522],25,"\010compilerread/source-info");
lf[523]=C_h_intern(&lf[523],8,"\003sysread");
lf[524]=C_h_intern(&lf[524],18,"\003sysuser-read-hook");
lf[525]=C_h_intern(&lf[525],15,"foreign-declare");
lf[526]=C_h_intern(&lf[526],7,"declare");
lf[527]=C_h_intern(&lf[527],34,"\010compilerscan-sharp-greater-string");
lf[528]=C_h_intern(&lf[528],18,"\003sysread-char/port");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000&unexpected end of `#> ... <#\047 sequence");
lf[530]=C_h_intern(&lf[530],19,"\010compilervisibility");
lf[531]=C_h_intern(&lf[531],6,"hidden");
lf[532]=C_h_intern(&lf[532],24,"\010compilerexport-variable");
lf[533]=C_h_intern(&lf[533],8,"exported");
lf[534]=C_h_intern(&lf[534],26,"\010compilerblock-compilation");
lf[535]=C_h_intern(&lf[535],22,"\010compilermark-variable");
lf[536]=C_h_intern(&lf[536],22,"\010compilervariable-mark");
lf[537]=C_h_intern(&lf[537],19,"\010compilerintrinsic\077");
lf[538]=C_h_intern(&lf[538],9,"foldable\077");
lf[539]=C_h_intern(&lf[539],33,"\010compilerload-identifier-database");
lf[540]=C_h_intern(&lf[540],7,"\004coredb");
lf[541]=C_h_intern(&lf[541],9,"read-file");
lf[542]=C_h_intern(&lf[542],1,"p");
lf[543]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[544]=C_decode_literal(C_heaptop,"\376B\000\000\034loading identifier database ");
lf[545]=C_h_intern(&lf[545],13,"make-pathname");
lf[546]=C_h_intern(&lf[546],15,"repository-path");
lf[547]=C_h_intern(&lf[547],22,"\010compilerprint-version");
lf[548]=C_h_intern(&lf[548],6,"print\052");
lf[549]=C_decode_literal(C_heaptop,"\376B\000\000C(c) 2008-2013, The Chicken Team\012(c) 2000-2007, Felix L. Winkelmann\012");
lf[550]=C_h_intern(&lf[550],20,"\010compilerprint-usage");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\030\027Usage: chicken FILENAME OPTION ...\012\012  `chicken\047 is the CHICKEN compiler.\012  "
"\012  FILENAME should be a complete source file name with extension, or \042-\042 for\012  s"
"tandard input. OPTION may be one of the following:\012\012  General options:\012\012    -hel"
"p                        display this text and exit\012    -version                "
"     display compiler version and exit\012    -release                     print re"
"lease number and exit\012    -verbose                     display information on co"
"mpilation progress\012\012  File and pathname options:\012\012    -output-file FILENAME     "
"   specifies output-filename, default is \047out.c\047\012    -include-path PATHNAME     "
"  specifies alternative path for included files\012    -to-stdout                  "
" write compiled file to stdout instead of file\012\012  Language options:\012\012    -featur"
"e SYMBOL              register feature identifier\012    -no-feature SYMBOL        "
"   disable built-in feature identifier\012\012  Syntax related options:\012\012    -case-ins"
"ensitive            don\047t preserve case of read symbols\012    -keyword-style STYLE"
"         allow alternative keyword syntax\012                                  (pre"
"fix, suffix or none)\012    -no-parentheses-synonyms     disables list delimiter sy"
"nonyms\012    -no-symbol-escape            disables support for escaped symbols\012   "
" -r5rs-syntax                 disables the Chicken extensions to\012               "
"                   R5RS syntax\012    -compile-syntax              macros are made "
"available at run-time\012    -emit-import-library MODULE  write compile-time module"
" information into\012                                  separate file\012    -emit-all-"
"import-libraries   emit import-libraries for all defined modules\012    -no-module-"
"registration      do not generate module registration code\012    -no-compiler-synt"
"ax          disable expansion of compiler-macros\012    -module                    "
"  wrap compiled code into implicit module\012\012  Translation options:\012\012    -explicit"
"-use                do not use units \047library\047 and \047eval\047 by\012                   "
"               default\012    -check-syntax                stop compilation after m"
"acro-expansion\012    -analyze-only                stop compilation after first ana"
"lysis pass\012\012  Debugging options:\012\012    -no-warnings                 disable warni"
"ngs\012    -debug-level NUMBER          set level of available debugging informatio"
"n\012    -no-trace                    disable tracing information\012    -profile     "
"                executable emits profiling information \012    -profile-name FILENA"
"ME       name of the generated profile information file\012    -accumulate-profile "
"         executable emits profiling information in\012                             "
"     append mode\012    -no-lambda-info              omit additional procedure-info"
"rmation\012    -scrutinize                  perform local flow analysis for static "
"checks\012    -types FILENAME              load additional type database\012    -emit-"
"type-file FILENAME     write type-declaration information into file\012\012  Optimizat"
"ion options:\012\012    -optimize-level NUMBER       enable certain sets of optimizati"
"on options\012    -optimize-leaf-routines      enable leaf routine optimization\012   "
" -no-usual-integrations       standard procedures may be redefined\012    -unsafe  "
"                    disable all safety checks\012    -local                       a"
"ssume globals are only modified in current\012                                  fil"
"e\012    -block                       enable block-compilation\012    -disable-interru"
"pts          disable interrupts in compiled code\012    -fixnum-arithmetic         "
"  assume all numbers are fixnums\012    -disable-stack-overflow-checks  disables de"
"tection of stack-overflows\012    -inline                      enable inlining\012    "
"-inline-limit LIMIT          set inlining threshold\012    -inline-global          "
"     enable cross-module inlining\012    -specialize                  perform type-"
"based specialization of primitive calls\012    -emit-inline-file FILENAME   generat"
"e file with globally inlinable\012                                  procedures (imp"
"lies -inline -local)\012    -consult-inline-file FILENAME  explicitly load inline f"
"ile\012    -no-argc-checks              disable argument count checks\012    -no-bound"
"-checks             disable bound variable checks\012    -no-procedure-checks      "
"   disable procedure call checks\012    -no-procedure-checks-for-usual-bindings\012   "
"                                disable procedure call checks only for usual\012   "
"                                bindings\012    -no-procedure-checks-for-toplevel-b"
"indings\012                                   disable procedure call checks for top"
"level\012                                   bindings\012    -strict-types             "
"   assume variable do not change their type\012    -clustering                  com"
"bine groups of local procedures into dispatch\012                                  "
" loop\012\012  Configuration options:\012\012    -unit NAME                   compile file a"
"s a library unit\012    -uses NAME                   declare library unit as used.\012"
"    -heap-size NUMBER            specifies heap-size of compiled executable\012    "
"-nursery NUMBER  -stack-size NUMBER\012                                 specifies n"
"ursery size of compiled executable\012    -extend FILENAME             load file be"
"fore compilation commences\012    -prelude EXPRESSION          add expression to fr"
"ont of source file\012    -postlude EXPRESSION         add expression to end of sou"
"rce file\012    -prologue FILENAME           include file before main source file\012 "
"   -epilogue FILENAME           include file after main source file\012    -dynamic"
"                     compile as dynamically loadable code\012    -require-extension"
" NAME      require and import extension NAME\012\012  Obscure options:\012\012    -debug MOD"
"ES                 display debugging output for the given modes\012    -raw        "
"                 do not generate implicit init- and exit code                   "
"        \012    -emit-external-prototypes-first\012                                 em"
"it prototypes for callbacks before foreign\012                                  dec"
"larations\012    -ignore-repository           do not refer to repository for extens"
"ions\012    -setup-mode                  prefer the current directory when locating"
" extensions\012");
lf[552]=C_h_intern(&lf[552],28,"\010compilerprint-debug-options");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\007\026\012Available debugging options:\012\012     a          show node-matching during si"
"mplification\012     b          show breakdown of time needed for each compiler pas"
"s\012     c          print every expression before macro-expansion\012     d          "
"lists all assigned global variables\012     e          show information about speci"
"alizations\012     h          you already figured that out\012     i          show inf"
"ormation about inlining\012     m          show GC statistics during compilation\012  "
"   n          print the line-number database \012     o          show performed opt"
"imizations\012     p          display information about what the compiler is curren"
"tly doing\012     r          show invocation parameters\012     s          show progra"
"m-size information and other statistics\012     t          show time needed for com"
"pilation\012     u          lists all unassigned global variable references\012     x "
"         display information about experimental features\012     D          when pr"
"inting nodes, use node-tree output\012     I          show inferred type informatio"
"n for unexported globals\012     M          show syntax-/runtime-requirements\012     "
"N          show the real-name mapping table\012     P          show expressions aft"
"er specialization\012     S          show applications of compiler syntax\012     T   "
"       show expressions after converting to node tree\012     1          show sourc"
"e expressions\012     2          show canonicalized expressions\012     3          sho"
"w expressions converted into CPS\012     4          show database after each analys"
"is pass\012     5          show expressions after each optimization pass\012     6    "
"      show expressions after each inlining pass\012     7          show expressions"
" after complete optimization\012     8          show database after final analysis\012"
"     9          show expressions after closure conversion\012\012");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\007#<node ");
lf[555]=C_h_intern(&lf[555],27,"\003sysregister-record-printer");
lf[556]=C_h_intern(&lf[556],27,"condition-property-accessor");
lf[557]=C_h_intern(&lf[557],19,"condition-predicate");
C_register_lf2(lf,558,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4664,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k8101 in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8104,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_positivep(((C_word*)((C_word*)t0)[3])[1]))){
/* support.scm:620: debugging */
t3=*((C_word*)lf[11]+1);
f_4703(5,t3,t2,lf[255],lf[256],((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k8103 in k8101 in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* ##compiler#make-block-variable-literal in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13599(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13599,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record2(&a,2,lf[482],t2));}

/* f_12087 in k12082 in k12076 in k12065 */
static void C_ccall f_12087(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12087,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1206: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1206: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k12082 in k12076 in k12065 */
static void C_ccall f_12083(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12083,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1204: g3132 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[380]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12117,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_12117(t6,t4);}
else{
t6=C_eqp(t3,lf[388]);
if(C_truep(t6)){
t7=t5;
f_12117(t7,t6);}
else{
t7=C_eqp(t3,lf[389]);
if(C_truep(t7)){
t8=t5;
f_12117(t8,t7);}
else{
t8=C_eqp(t3,lf[371]);
if(C_truep(t8)){
t9=t5;
f_12117(t9,t8);}
else{
t9=C_eqp(t3,lf[373]);
t10=t5;
f_12117(t10,(C_truep(t9)?t9:C_eqp(t3,lf[390])));}}}}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
/* support.scm:1190: quit */
t4=*((C_word*)lf[26]+1);
f_4905(4,t4,t2,lf[438],t3);}}}

/* k9175 in k9159 in k9155 in k9153 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9176,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* support.scm:735: g1934 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[105],((C_word*)t0)[5],t2);}

/* f_13447 in k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_13447,5,t0,t1,t2,t3,t4);}
t5=C_i_car(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13456,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1356: append */
t7=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t2,((C_word*)t0)[4]);}

/* k12065 */
static void C_fcall f_12067(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12067,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub351(C_SCHEME_UNDEFINED,t3));}
else{
t2=C_eqp(((C_word*)t0)[3],lf[418]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_12078(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[419]);
if(C_truep(t4)){
t5=t3;
f_12078(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[3],lf[365]);
t6=t3;
f_12078(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[3],lf[369])));}}}}

/* k13455 */
static void C_ccall f_13456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1356: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_13331(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12076 in k12065 */
static void C_fcall f_12078(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12078,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(2));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub351(C_SCHEME_UNDEFINED,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12083,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* support.scm:1204: ##sys#hash-table-ref */
t3=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[391]+1),((C_word*)t0)[4]);}
else{
t3=t2;
f_12083(2,t3,C_SCHEME_FALSE);}}}

/* f_9198 */
static void C_ccall f_9198(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9198,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9201,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:743: gensym */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k7388 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7389,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* support.scm:558: g1176 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[231],((C_word*)t0)[4],t2);}

/* f_9196 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9196,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=t2;
t11=C_i_check_list_2(t10,lf[159]);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,a[7]=t4,a[8]=t2,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9329,a[2]=t8,a[3]=t14,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_9329(t16,t12,t10);}

/* f_6594 in k6585 in k6582 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6594,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* ##compiler#estimate-foreign-result-location-size in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12045(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12045,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12058,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12414,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1191: follow-without-loop */
t5=*((C_word*)lf[90]+1);
f_5528(5,t5,t1,t2,t3,t4);}

/* f_12040 in estimate-foreign-result-size in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12040,2,t0,t1);}
/* support.scm:1186: quit */
t2=*((C_word*)lf[26]+1);
f_4905(4,t2,t1,lf[436],((C_word*)t0)[2]);}

/* k6582 in k6552 in k6522 in k6489 in k6487 */
static void C_fcall f_6584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6584,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6586,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:496: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[166],*((C_word*)lf[13]+1));}
else{
t2=((C_word*)t0)[2];
f_6492(2,t2,C_SCHEME_UNDEFINED);}}

/* k6585 in k6582 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6594,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:496: g946 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* f_12058 in estimate-foreign-result-location-size in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_12058(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12058,4,t0,t1,t2,t3);}
t4=t2;
t5=C_eqp(t4,lf[344]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12067,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_12067(t7,t5);}
else{
t7=C_eqp(t4,lf[348]);
if(C_truep(t7)){
t8=t6;
f_12067(t8,t7);}
else{
t8=C_eqp(t4,lf[421]);
if(C_truep(t8)){
t9=t6;
f_12067(t9,t8);}
else{
t9=C_eqp(t4,lf[433]);
if(C_truep(t9)){
t10=t6;
f_12067(t10,t9);}
else{
t10=C_eqp(t4,lf[422]);
if(C_truep(t10)){
t11=t6;
f_12067(t11,t10);}
else{
t11=C_eqp(t4,lf[345]);
if(C_truep(t11)){
t12=t6;
f_12067(t12,t11);}
else{
t12=C_eqp(t4,lf[420]);
if(C_truep(t12)){
t13=t6;
f_12067(t13,t12);}
else{
t13=C_eqp(t4,lf[401]);
if(C_truep(t13)){
t14=t6;
f_12067(t14,t13);}
else{
t14=C_eqp(t4,lf[400]);
if(C_truep(t14)){
t15=t6;
f_12067(t15,t14);}
else{
t15=C_eqp(t4,lf[423]);
if(C_truep(t15)){
t16=t6;
f_12067(t16,t15);}
else{
t16=C_eqp(t4,lf[424]);
if(C_truep(t16)){
t17=t6;
f_12067(t17,t16);}
else{
t17=C_eqp(t4,lf[371]);
if(C_truep(t17)){
t18=t6;
f_12067(t18,t17);}
else{
t18=C_eqp(t4,lf[373]);
if(C_truep(t18)){
t19=t6;
f_12067(t19,t18);}
else{
t19=C_eqp(t4,lf[367]);
if(C_truep(t19)){
t20=t6;
f_12067(t20,t19);}
else{
t20=C_eqp(t4,lf[363]);
if(C_truep(t20)){
t21=t6;
f_12067(t21,t20);}
else{
t21=C_eqp(t4,lf[350]);
if(C_truep(t21)){
t22=t6;
f_12067(t22,t21);}
else{
t22=C_eqp(t4,lf[374]);
if(C_truep(t22)){
t23=t6;
f_12067(t23,t22);}
else{
t23=C_eqp(t4,lf[378]);
if(C_truep(t23)){
t24=t6;
f_12067(t24,t23);}
else{
t24=C_eqp(t4,lf[353]);
if(C_truep(t24)){
t25=t6;
f_12067(t25,t24);}
else{
t25=C_eqp(t4,lf[355]);
if(C_truep(t25)){
t26=t6;
f_12067(t26,t25);}
else{
t26=C_eqp(t4,lf[425]);
if(C_truep(t26)){
t27=t6;
f_12067(t27,t26);}
else{
t27=C_eqp(t4,lf[426]);
if(C_truep(t27)){
t28=t6;
f_12067(t28,t27);}
else{
t28=C_eqp(t4,lf[403]);
if(C_truep(t28)){
t29=t6;
f_12067(t29,t28);}
else{
t29=C_eqp(t4,lf[399]);
if(C_truep(t29)){
t30=t6;
f_12067(t30,t29);}
else{
t30=C_eqp(t4,lf[395]);
if(C_truep(t30)){
t31=t6;
f_12067(t31,t30);}
else{
t31=C_eqp(t4,lf[396]);
if(C_truep(t31)){
t32=t6;
f_12067(t32,t31);}
else{
t32=C_eqp(t4,lf[393]);
if(C_truep(t32)){
t33=t6;
f_12067(t33,t32);}
else{
t33=C_eqp(t4,lf[402]);
if(C_truep(t33)){
t34=t6;
f_12067(t34,t33);}
else{
t34=C_eqp(t4,lf[377]);
if(C_truep(t34)){
t35=t6;
f_12067(t35,t34);}
else{
t35=C_eqp(t4,lf[394]);
if(C_truep(t35)){
t36=t6;
f_12067(t36,t35);}
else{
t36=C_eqp(t4,lf[392]);
if(C_truep(t36)){
t37=t6;
f_12067(t37,t36);}
else{
t37=C_eqp(t4,lf[397]);
t38=t6;
f_12067(t38,(C_truep(t37)?t37:C_eqp(t4,lf[398])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* loop in build-lambda-list in k4698 in k4665 in k4663 */
static void C_fcall f_5245(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5245,NULL,4,t0,t1,t2,t3);}
t4=C_i_zerop(t3);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
t6=((C_word*)t0)[2];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_SCHEME_END_OF_LIST));}
else{
t6=C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5266,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_a_i_minus(&a,2,t3,C_fix(1));
/* support.scm:178: loop */
t13=t7;
t14=t9;
t15=t10;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}

/* f_7052 in varnode in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7052,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* ##compiler#varnode in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7049,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7052,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,t2);
/* support.scm:520: g1041 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[217],t4,C_SCHEME_END_OF_LIST);}

/* make-node in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7043,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7041(C_word c,C_word t0,C_word t1){
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
C_word ab[131],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7041,2,t0,t1);}
t2=C_mutate((C_word*)lf[206]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7043,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[216]+1 /* (set! ##compiler#varnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7049,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[218]+1 /* (set! ##compiler#qnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7063,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[219]+1 /* (set! ##compiler#build-node-graph ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7077,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[257]+1 /* (set! ##compiler#build-expression-tree ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8112,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[273]+1 /* (set! ##compiler#fold-boolean ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8867,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[275]+1 /* (set! ##compiler#inline-lambda-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8911,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[280]+1 /* (set! ##compiler#copy-node-tree-and-rename ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9038,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[284]+1 /* (set! ##compiler#tree-copy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9465,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[285]+1 /* (set! ##compiler#copy-node! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9493,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[286]+1 /* (set! ##compiler#node->sexpr ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9527,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[287]+1 /* (set! ##compiler#sexpr->node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9601,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[288]+1 /* (set! ##compiler#emit-global-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9662,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[308]+1 /* (set! ##compiler#load-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9896,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[310]+1 /* (set! ##compiler#match-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9948,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[313]+1 /* (set! ##compiler#expression-has-side-effects? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10150,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[317]+1 /* (set! ##compiler#simple-lambda-node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10250,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[318]+1 /* (set! ##compiler#dump-undefined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10363,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[320]+1 /* (set! ##compiler#dump-defined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10400,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[321]+1 /* (set! ##compiler#dump-global-refs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10434,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[322]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10476,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[325]+1 /* (set! ##compiler#compute-database-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10496,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[328]+1 /* (set! ##compiler#print-program-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10602,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[338]+1 /* (set! ##compiler#pprint-expressions-to-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10667,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[343]+1 /* (set! ##compiler#foreign-type-check ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10719,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[428]+1 /* (set! ##compiler#foreign-type-convert-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11559,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[429]+1 /* (set! ##compiler#foreign-type-convert-argument ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11588,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[430]+1 /* (set! ##compiler#final-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11617,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[432]+1 /* (set! ##compiler#estimate-foreign-result-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11658,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[437]+1 /* (set! ##compiler#estimate-foreign-result-location-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12045,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[440]+1 /* (set! ##compiler#finish-foreign-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12419,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[454]+1 /* (set! ##compiler#foreign-type->scrutiny-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12658,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate((C_word*)lf[474]+1 /* (set! ##compiler#scan-used-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13188,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate((C_word*)lf[475]+1 /* (set! ##compiler#scan-free-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13327,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[477]+1 /* (set! ##compiler#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13535,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[480]+1 /* (set! ##compiler#chop-extension ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13560,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[481]+1 /* (set! ##compiler#make-block-variable-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13599,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[483]+1 /* (set! ##compiler#block-variable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13605,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[484]+1 /* (set! ##compiler#block-variable-literal-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13611,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[486]+1 /* (set! ##compiler#make-random-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13620,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[489]+1 /* (set! ##compiler#set-real-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13660,tmp=(C_word)a,a+=2,tmp));
t43=C_set_block_item(lf[491] /* real-name-max-depth */,0,C_fix(20));
t44=C_mutate((C_word*)lf[45]+1 /* (set! ##compiler#real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13667,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[497]+1 /* (set! ##compiler#real-name2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13774,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[498]+1 /* (set! ##compiler#display-real-name-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13786,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[499]+1 /* (set! ##compiler#source-info->string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13804,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[505]+1 /* (set! ##compiler#source-info->line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13832,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[506]+1 /* (set! ##compiler#call-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13850,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[509]+1 /* (set! ##compiler#constant-form-eval ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13884,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[517]+1 /* (set! ##compiler#dump-nodes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14057,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[518]+1 /* (set! ##compiler#read-info-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14185,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[522]+1 /* (set! ##compiler#read/source-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14223,tmp=(C_word)a,a+=2,tmp));
t54=*((C_word*)lf[524]+1);
t55=C_mutate((C_word*)lf[524]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14229,a[2]=t54,tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[527]+1 /* (set! ##compiler#scan-sharp-greater-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14251,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate((C_word*)lf[98]+1 /* (set! ##compiler#big-fixnum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14317,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[323]+1 /* (set! ##compiler#hide-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14340,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[532]+1 /* (set! ##compiler#export-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14361,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[307]+1 /* (set! ##compiler#variable-visible? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14382,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate((C_word*)lf[535]+1 /* (set! ##compiler#mark-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14407,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[536]+1 /* (set! ##compiler#variable-mark ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14423,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[537]+1 /* (set! ##compiler#intrinsic? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14429,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[538]+1 /* (set! foldable? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14440,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[539]+1 /* (set! ##compiler#load-identifier-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14451,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate((C_word*)lf[547]+1 /* (set! ##compiler#print-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14531,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate((C_word*)lf[550]+1 /* (set! ##compiler#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14555,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[552]+1 /* (set! ##compiler#print-debug-options ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14566,tmp=(C_word)a,a+=2,tmp));
t69=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t69+1)))(2,t69,C_SCHEME_UNDEFINED);}

/* k12754 in k12682 in k12661 in foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_12756(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12756,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_eqp(t2,lf[455]);
if(C_truep(t3)){
t4=C_a_i_list(&a,2,lf[458],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,3,lf[459],lf[460],t4));}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[458],((C_word*)t0)[3]));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[361]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[461]);}
else{
t3=C_eqp(((C_word*)t0)[5],lf[405]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[462]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[404]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[463]);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[406]);
if(C_truep(t5)){
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[464]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[407]);
if(C_truep(t6)){
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[465]);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[408]);
if(C_truep(t7)){
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[466]);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[409]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[467]);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[410]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[468]);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[363]);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12829,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;
f_12829(t12,t10);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[401]);
if(C_truep(t12)){
t13=t11;
f_12829(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[5],lf[402]);
if(C_truep(t13)){
t14=t11;
f_12829(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[403]);
if(C_truep(t14)){
t15=t11;
f_12829(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[5],lf[399]);
if(C_truep(t15)){
t16=t11;
f_12829(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[365]);
if(C_truep(t16)){
t17=t11;
f_12829(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[5],lf[369]);
t18=t11;
f_12829(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[5],lf[400])));}}}}}}}}}}}}}}}}

/* k13411 in k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_car(((C_word*)t0)[3]);
/* support.scm:1348: walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_13331(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6]);}

/* ##compiler#slashify in k4698 in k4665 in k4663 */
static void C_ccall f_5221(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5221,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5228,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:171: ->string */
t4=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* f_7346 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7346(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7346,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k6555 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6564,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:494: g930 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* k5227 in slashify in k4698 in k4665 in k4663 */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:171: string-translate */
t2=*((C_word*)lf[55]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,lf[56],lf[57]);}

/* k6552 in k6522 in k6489 in k6487 */
static void C_fcall f_6554(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6554,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6556,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:494: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[165],*((C_word*)lf[13]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[167]);
t4=t2;
f_6584(t4,C_i_not(t3));}
else{
t3=t2;
f_6584(t3,C_SCHEME_FALSE);}}}

/* node-subexpressions-set! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7032,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[207],C_SCHEME_FALSE);
/* support.scm:507: ##sys#block-set! */
t5=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* ##compiler#uncommentify in k4698 in k4665 in k4663 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5230,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5237,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:173: ->string */
t4=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k5236 in uncommentify in k4698 in k4665 in k4663 */
static void C_ccall f_5237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:173: string-translate* */
t2=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[61]);}

/* k6546 in k6538 in k6525 in k6522 in k6489 in k6487 */
static void C_ccall f_6548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6548,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* support.scm:492: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* map-loop3612 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_14027(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14027,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14052,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1475: g3618 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#build-lambda-list in k4698 in k4665 in k4663 */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5239,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5245,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5245(t8,t1,t2,t3);}

/* node-subexpressions in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7023(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7023,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[207],lf[214]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(3)));}

/* f_6542 in k6538 in k6525 in k6522 in k6489 in k6487 */
static void C_ccall f_6542(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6542,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k6538 in k6525 in k6522 in k6489 in k6487 */
static void C_ccall f_6540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6542,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6548,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:492: g917 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* k14021 in map-loop3643 in k13901 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14022(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_14022,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_13997(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_13997(t6,((C_word*)t0)[5],t5);}}

/* k6576 in k6568 in k6555 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6578,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* support.scm:494: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* node-parameters-set! in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7014,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[207],C_SCHEME_FALSE);
/* support.scm:507: ##sys#block-set! */
t5=*((C_word*)lf[211]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* k6568 in k6555 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6572,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6578,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:494: g933 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* f_6572 in k6568 in k6555 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6572(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6572,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k5212 in symbolify in k4698 in k4665 in k4663 */
static void C_ccall f_5213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5213,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5216,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:169: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],t2);}

/* k5214 in k5212 in symbolify in k4698 in k4665 in k4663 */
static void C_ccall f_5216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:169: get-output-string */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5217 in k5214 in k5212 in symbolify in k4698 in k4665 in k4663 */
static void C_ccall f_5219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:169: string->symbol */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_6564 in k6555 in k6552 in k6522 in k6489 in k6487 */
static void C_ccall f_6564(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6564,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* node-parameters in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7005,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[207],lf[212]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_block_ref(t2,C_fix(2)));}

/* k5309 in loop in k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_fcall f_5311(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5311,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[5],C_fix(8)))){
t3=t2;
f_5317(t3,lf[71]);}
else{
t3=C_fixnum_lessp(((C_word*)t0)[5],C_fix(64));
t4=t2;
f_5317(t4,(C_truep(t3)?lf[72]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_cdr(t3);
/* support.scm:198: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5292(t5,t2,t4);}}

/* k5316 in k5309 in loop in k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_fcall f_5317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5317,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5328,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:196: number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[5],C_fix(8));}

/* k4665 in k4663 */
static void C_ccall f_4666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4666,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! ##compiler#compiler-cleanup-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4670,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[1] /* ##compiler#debugging-chicken */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[2] /* ##compiler#disabled-warnings */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate((C_word*)lf[3]+1 /* (set! ##compiler#bomb ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4676,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:53: open-output-string */
t7=*((C_word*)lf[51]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4663 */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4666,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k7303 in map-loop1143 in k7251 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7304(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7304,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7279(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7279(t6,((C_word*)t0)[5],t5);}}

/* k6514 in k6491 in k6489 in k6487 */
static void C_ccall f_6515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm:497: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* map-loop1116 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7309(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7309,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7334,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:549: g1122 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5322 in k5319 in k5316 in k5309 in loop in k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_ccall f_5323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:192: append */
t2=*((C_word*)lf[68]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[69],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k5319 in k5316 in k5309 in loop in k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* support.scm:197: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5292(t5,t2,t4);}

/* k7333 in map-loop1116 in k7249 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7334(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7334,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7309(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7309(t6,((C_word*)t0)[5],t5);}}

/* k6503 in k6493 in k6491 in k6489 in k6487 */
static void C_ccall f_6504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm:498: write */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}

/* k5327 in k5316 in k5309 in loop in k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_ccall f_5328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7360 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7361,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
/* support.scm:556: g1171 */
t3=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[230],((C_word*)t0)[4],t2);}

/* f_6534 in k6525 in k6522 in k6489 in k6487 */
static void C_ccall f_6534(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6534,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k6522 in k6489 in k6487 */
static void C_fcall f_6524(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6524,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[13]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6526,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:492: display */
t4=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[164],*((C_word*)lf[13]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[167]);
t4=t2;
f_6554(t4,C_i_not(t3));}
else{
t3=t2;
f_6554(t3,C_SCHEME_FALSE);}}}

/* k6525 in k6522 in k6489 in k6487 */
static void C_ccall f_6526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6534,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:492: g914 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* k5346 in k5309 in loop in k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_ccall f_5347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5347,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k13420 in k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13421,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13430,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:1351: append */
t4=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k5365 in valid-c-identifier? in k4698 in k4665 in k4663 */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5366,2,t0,t1);}
if(C_truep(C_i_pairp(t1))){
t2=t1;
t3=C_u_i_car(t2);
t4=C_u_i_char_alphabeticp(t3);
t5=(C_truep(t4)?t4:C_i_char_equalp(C_make_character(95),t3));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5386,tmp=(C_word)a,a+=2,tmp);
t7=t1;
t8=C_u_i_cdr(t7);
/* support.scm:205: any */
t9=*((C_word*)lf[75]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,((C_word*)t0)[2],t6,t8);}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#valid-c-identifier? in k4698 in k4665 in k4663 */
static void C_ccall f_5362(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5362,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5366,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5408,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm:201: ->string */
t5=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k13429 in k13420 in k13360 in k13352 in k13345 in k13338 in walk in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1351: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_13331(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_13197 in walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13197,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k13191 in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[3])[1]);}

/* walk in scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13194(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13194,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13197,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13203,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1316: g3364 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5286 in c-ify-string in k4698 in k4665 in k4663 */
static void C_ccall f_5287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5287,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_make_character(34),t1);
/* list->string */
t3=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_ccall f_5290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5290,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5292,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5292(t5,((C_word*)t0)[2],t1);}

/* loop in k5289 in c-ify-string in k4698 in k4665 in k4663 */
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5292,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[67]);}
else{
t3=C_i_car(t2);
t4=C_fix(C_character_code(t3));
t5=C_fixnum_lessp(t4,C_fix(32));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5311,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_5311(t7,t5);}
else{
t7=C_fixnum_greater_or_equal_p(t4,C_fix(127));
if(C_truep(t7)){
t8=t6;
f_5311(t8,t7);}
else{
t8=C_u_i_memq(t3,lf[73]);
t9=t6;
f_5311(t9,t8);}}}}

/* f_5386 in k5365 in valid-c-identifier? in k4698 in k4665 in k4663 */
static void C_ccall f_5386(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5386,3,t0,t1,t2);}
t3=C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_u_i_char_numericp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:C_i_char_equalp(C_make_character(95),t2)));}}

/* k5265 in loop in build-lambda-list in k4698 in k4665 in k4663 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5266,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[3],t1));}

/* k6056 */
static void C_ccall f_6058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6058,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[135]+1)))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6065,tmp=(C_word)a,a+=2,tmp);
/* support.scm:362: g601 */
t3=t2;
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[136],C_SCHEME_TRUE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#scan-used-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13188(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13188,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13192,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13194,a[2]=t8,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_13194(t10,t6,t2);}

/* f_6042 */
static void C_ccall f_6042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_6042r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6042r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6042r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* f_6040 in k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6040(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6040,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6042,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6058,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:360: g586 */
t5=t3;
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,lf[137],lf[140]);}

/* f_14069 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14069(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14069,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* ##compiler#c-ify-string in k4698 in k4665 in k4663 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5277,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5287,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5290,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* string->list */
t5=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_14066(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14066,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14069,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14075,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm:1496: g3696 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k14060 in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1511: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k12115 in k12082 in k12076 in k12065 */
static void C_fcall f_12117(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub351(C_SCHEME_UNDEFINED,t3));}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
/* support.scm:1190: quit */
t4=*((C_word*)lf[26]+1);
f_4905(4,t4,t2,lf[438],t3);}}

/* k4688 in bomb in k4665 in k4663 */
static void C_ccall f_4689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
C_apply(5,0,((C_word*)t0)[3],*((C_word*)lf[4]+1),t1,t3);}

/* k11021 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_ccall f_11022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11022,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11034,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[346]+1))){
t5=t4;
f_11034(t5,C_a_i_list(&a,2,lf[375],t1));}
else{
t5=C_a_i_list(&a,2,lf[376],t1);
t6=t4;
f_11034(t6,C_a_i_list(&a,2,lf[375],t5));}}

/* k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6039(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6040,tmp=(C_word)a,a+=2,tmp);
t3=*((C_word*)lf[141]+1);
t4=C_i_check_list_2(*((C_word*)lf[141]+1),lf[33]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6132,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6132(t9,t5,*((C_word*)lf[141]+1));}

/* k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_11020(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11020,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1086: gensym */
t3=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[377]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11057,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_11057(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[392]);
t5=t3;
f_11057(t5,(C_truep(t4)?t4:C_eqp(((C_word*)t0)[4],lf[393])));}}}

/* f_5883 */
static void C_ccall f_5883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5883,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* ##compiler#bomb in k4665 in k4663 */
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4676r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4676r(t0,t1,t2);}}

static void C_ccall f_4676r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4689,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_u_i_car(t4);
/* support.scm:49: string-append */
t6=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[6],t5);}
else{
/* support.scm:50: error */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,lf[7]);}}

/* k14311 in k14263 in loop in k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1560: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14260(t2,((C_word*)t0)[3]);}

/* ##compiler#compiler-cleanup-hook in k4665 in k4663 */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4670,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k5891 */
static void C_ccall f_5892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tmp24289 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* ##compiler#get-list in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6338,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6342,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:408: get */
t6=*((C_word*)lf[144]+1);
f_6172(5,t6,t5,t2,t3,t4);}

/* ##compiler#llist-match? in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5899,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5905,tmp=(C_word)a,a+=2,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5905(t2,t3));}

/* ##compiler#llist-length in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5895,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_u_i_length(t2));}

/* k14304 in k14302 in k14291 in k14263 in loop in k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1557: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_14260(t2,((C_word*)t0)[3]);}

/* k14302 in k14291 in k14263 in loop in k14254 in scan-sharp-greater-string in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* f_6018 in k6009 */
static void C_ccall f_6018(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_6018r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6018r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6018r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* ##compiler#big-fixnum? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14317(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14317,3,t0,t1,t2);}
if(C_truep(C_fixnump(t2))){
if(C_truep(C_fudge(C_fix(3)))){
t3=C_fixnum_greaterp(t2,C_fix(1073741823));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:C_fixnum_lessp(t2,C_fix(-1073741824))));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6009 */
static void C_ccall f_6011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6011,2,t0,t1);}
if(C_truep(C_i_memq(((C_word*)t0)[2],*((C_word*)lf[135]+1)))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6018,tmp=(C_word)a,a+=2,tmp);
/* support.scm:356: g552 */
t3=t2;
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[136],C_SCHEME_TRUE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#get-line-2 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6356(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6356,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6362,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm:419: ##sys#hash-table-ref */
t5=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[154]+1),t3);}

/* f_5871 */
static void C_ccall f_5871(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5871,3,t0,t1,t2);}
/* support.scm:309: read */
t3=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k8997 in k8931 in k8929 */
static void C_ccall f_8998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8998,2,t0,t1);}
t2=C_a_i_list1(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
/* support.scm:700: qnode */
t4=*((C_word*)lf[218]+1);
f_7063(3,t4,t3,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8980,tmp=(C_word)a,a+=2,tmp);
t5=C_i_length(((C_word*)t0)[5]);
t6=C_a_i_times(&a,2,C_fix(3),t5);
t7=C_a_i_list2(&a,2,lf[279],t6);
/* support.scm:701: g1852 */
t8=t4;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t3,lf[245],t7,((C_word*)t0)[5]);}}

/* f_5878 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5878r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5878r(t0,t1,t2);}}

static void C_ccall f_5878r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5883,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:298: k478 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k5876 */
static void C_ccall f_5877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:309: unfold */
t2=*((C_word*)lf[114]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],*((C_word*)lf[115]+1),*((C_word*)lf[116]+1),((C_word*)t0)[3],t1);}

/* map-loop2052 in k9366 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9380(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9380,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9405,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:754: g2058 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_14097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm:1494: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_14099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(60),((C_word*)t0)[8]);}

/* k14098 in k14096 in k14094 in k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1494: display */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[9],((C_word*)t0)[8]);}

/* ##compiler#get-line in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6347(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6347,3,t0,t1,t2);}
t3=C_i_car(t2);
/* support.scm:415: get */
t4=*((C_word*)lf[144]+1);
f_6172(5,t4,t1,*((C_word*)lf[154]+1),t3,t2);}

/* k14090 in k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14091,2,t0,t1);}
t2=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=*((C_word*)lf[13]+1);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_14095,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* write-char/port */
t5=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(10),*((C_word*)lf[13]+1));}

/* k9376 in k9366 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:754: g2045 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* map-loop1590 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8351,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8376,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:639: g1596 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#expand-profile-lambda in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5940,5,t0,t1,t2,t3,t4);}
t5=*((C_word*)lf[125]+1);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5944,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm:331: gensym */
t7=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k5943 in expand-profile-lambda in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5944(C_word c,C_word t0,C_word t1){
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
C_word ab[106],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5944,2,t0,t1);}
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]),*((C_word*)lf[126]+1));
t3=C_mutate((C_word*)lf[126]+1 /* (set! ##compiler#profile-lambda-list ...) */,t2);
t4=C_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_mutate((C_word*)lf[125]+1 /* (set! ##compiler#profile-lambda-index ...) */,t4);
t6=C_a_i_list(&a,2,lf[95],((C_word*)t0)[2]);
t7=C_a_i_list(&a,3,lf[127],t6,*((C_word*)lf[128]+1));
t8=C_a_i_list(&a,3,lf[129],C_SCHEME_END_OF_LIST,t7);
t9=C_a_i_list(&a,3,lf[129],((C_word*)t0)[4],((C_word*)t0)[5]);
t10=C_a_i_list(&a,3,lf[130],t9,t1);
t11=C_a_i_list(&a,3,lf[129],C_SCHEME_END_OF_LIST,t10);
t12=C_a_i_list(&a,2,lf[95],((C_word*)t0)[2]);
t13=C_a_i_list(&a,3,lf[131],t12,*((C_word*)lf[128]+1));
t14=C_a_i_list(&a,3,lf[129],C_SCHEME_END_OF_LIST,t13);
t15=C_a_i_list(&a,4,lf[132],t8,t11,t14);
t16=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_a_i_list(&a,3,lf[129],t1,t15));}

/* k6341 in get-list in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* f_5842 */
static void C_ccall f_5842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5845,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5866,tmp=(C_word)a,a+=2,tmp);
/* support.scm:307: with-input-from-string */
t4=*((C_word*)lf[117]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* f_5840 */
static void C_ccall f_5840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5892,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp14288 */
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5844 */
static void C_ccall f_5845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5845,2,t0,t1);}
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[111]);}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_u_i_car(t3));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[112],t1));}}}

/* f_14343 in hide-variable in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_14343r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_14343r(t0,t1,t2,t3,t4);}}

static void C_ccall f_14343r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* ##compiler#hide-variable in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14340(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14340,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14343,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1575: g3816 */
t4=t3;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,lf[530],lf[531]);}

/* k6363 in k6361 in get-line-2 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_6364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6364,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:417: g723 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
/* support.scm:422: values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE);}}

/* f_6368 in k6363 in k6361 in get-line-2 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6368(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6368,3,t0,t1,t2);}
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
/* support.scm:421: values */
C_values(4,0,t1,t3,t4);}

/* k6361 in get-line-2 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6364,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=C_i_cdr(t1);
t4=t2;
f_6364(t4,C_i_assq(((C_word*)t0)[4],t3));}
else{
t3=t2;
f_6364(t3,C_SCHEME_FALSE);}}

/* f_5823 */
static void C_ccall f_5823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5829,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5832,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:304: exn? */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k8953 in k8931 in k8929 */
static void C_ccall f_8954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:707: take */
t3=*((C_word*)lf[278]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k8956 in k8953 in k8931 in k8929 */
static void C_ccall f_8957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:694: fold-right */
t2=*((C_word*)lf[277]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* f_8958 in k8931 in k8929 */
static void C_ccall f_8958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8958,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k5828 */
static void C_ccall f_5829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:302: quit */
t2=*((C_word*)lf[26]+1);
f_4905(5,t2,((C_word*)t0)[2],lf[110],((C_word*)t0)[3],t1);}

/* ##compiler#load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14451,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14455,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1600: repository-path */
t4=*((C_word*)lf[546]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_11099 in k11094 in k11055 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_ccall f_11099(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11099,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
/* support.scm:1104: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm:1104: next */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k11094 in k11055 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_ccall f_11095(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11095,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1102: g2796 */
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(t3,lf[380]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11129,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_11129(t6,t4);}
else{
t6=C_eqp(t3,lf[389]);
if(C_truep(t6)){
t7=t5;
f_11129(t7,t6);}
else{
t7=C_eqp(t3,lf[390]);
t8=t5;
f_11129(t8,(C_truep(t7)?t7:C_eqp(t3,lf[371])));}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}}

/* ##compiler#dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14057,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14061,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14066,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_14066(t7,t3,C_fix(0),t2);}

/* k6120 in for-each-loop624 in k6084 in k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6112(t3,((C_word*)t0)[4],t2);}

/* k14051 in map-loop3612 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14052(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_14052,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_14027(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_14027(t6,((C_word*)t0)[5],t5);}}

/* k5830 */
static void C_ccall f_5832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm:305: exn-msg */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
/* support.scm:306: ->string */
t2=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14455,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14529,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1601: make-pathname */
t4=*((C_word*)lf[545]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop in llist-match? in k5802 in k5800 in k4698 in k4665 in k4663 */
static C_word C_fcall f_5905(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:
if(C_truep(C_i_nullp(t1))){
return(C_i_nullp(t2));}
else{
t3=C_i_symbolp(t1);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_nullp(t2))){
return(C_i_not_pair_p(t1));}
else{
t4=C_i_cdr(t1);
t5=C_i_cdr(t2);
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}}}

/* k11033 in k11021 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_11034(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11034,NULL,2,t0,t1);}
t2=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t3=C_a_i_list(&a,4,lf[221],((C_word*)t0)[2],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,3,lf[105],((C_word*)t0)[4],t3));}

/* k6192 in get-all in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6193,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6201,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:379: filter-map */
t3=*((C_word*)lf[147]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* f_14443 in foldable? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_14443,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* foldable? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14440,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14443,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1594: g3891 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[136]);}

/* f_14083 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14083(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14083,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14082,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14083,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1498: g3702 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k14087 in k14080 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:1499: make-string */
t3=*((C_word*)lf[503]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_make_character(32));}

/* k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5803(C_word c,C_word t0,C_word t1){
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
C_word ab[61],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5803,2,t0,t1);}
t2=C_mutate((C_word*)lf[109]+1 /* (set! ##compiler#string->expr ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5804,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[120]+1 /* (set! ##compiler#decompose-lambda-list ...) */,*((C_word*)lf[121]+1));
t4=C_mutate((C_word*)lf[122]+1 /* (set! ##compiler#llist-length ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5895,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[123]+1 /* (set! ##compiler#llist-match? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5899,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[124]+1 /* (set! ##compiler#expand-profile-lambda ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5940,tmp=(C_word)a,a+=2,tmp));
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_mutate((C_word*)lf[133]+1 /* (set! ##compiler#initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5987,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[144]+1 /* (set! ##compiler#get ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6172,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[146]+1 /* (set! ##compiler#get-all ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6189,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[148]+1 /* (set! ##compiler#put! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6206,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[150]+1 /* (set! ##compiler#collect! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6247,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[151]+1 /* (set! ##compiler#count! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6291,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[152]+1 /* (set! ##compiler#get-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6338,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[153]+1 /* (set! ##compiler#get-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6347,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[155]+1 /* (set! ##compiler#get-line-2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6356,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[156]+1 /* (set! ##compiler#find-lambda-container ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6391,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[158]+1 /* (set! ##compiler#display-line-number-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6414,tmp=(C_word)a,a+=2,tmp));
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_mutate((C_word*)lf[161]+1 /* (set! ##compiler#display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6470,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[206]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6975,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[208]+1 /* (set! node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6981,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[209]+1 /* (set! node-class ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6987,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[210]+1 /* (set! node-class-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6996,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[212]+1 /* (set! node-parameters ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7005,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[213]+1 /* (set! node-parameters-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7014,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[214]+1 /* (set! node-subexpressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7023,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[215]+1 /* (set! node-subexpressions-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7032,tmp=(C_word)a,a+=2,tmp));
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7041,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14572,tmp=(C_word)a,a+=2,tmp);
/* support.scm:514: ##sys#register-record-printer */
t33=*((C_word*)lf[555]+1);
((C_proc4)(void*)(*((C_word*)t33+1)))(4,t33,t31,lf[207],t32);}

/* ##compiler#string->expr in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5804(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5804,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5808,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5813,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm:298: call-with-current-continuation */
t5=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5803,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:299: condition-property-accessor */
t3=*((C_word*)lf[556]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[511],lf[512]);}

/* k8972 in k8997 in k8931 in k8929 */
static void C_ccall f_8973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8973,2,t0,t1);}
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
/* support.scm:697: g1847 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[105],((C_word*)t0)[5],t2);}

/* k5807 in string->expr in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:298: g482 */
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4749 in for-each-loop46 in k4725 in k4715 */
static void C_ccall f_4750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4741(t3,((C_word*)t0)[4],t2);}

/* ##compiler#variable-visible? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14382(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14382,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14386,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1581: ##sys#get */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[530]);}

/* k14385 in variable-visible? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,lf[531]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_eqp(t1,lf[533]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_SCHEME_TRUE:C_i_not(*((C_word*)lf[534]+1))));}}

/* k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14076,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm:1497: g3699 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* f_5813 in string->expr in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_5813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5813,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:298: with-exception-handler */
t5=*((C_word*)lf[118]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_14076 in k14073 in loop in dump-nodes in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14076(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14076,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* f_5818 */
static void C_ccall f_5818(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5818,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm:298: k478 */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k4698 in k4665 in k4663 */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1){
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
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4700,2,t0,t1);}
t2=C_mutate((C_word*)lf[8]+1 /* (set! ##compiler#collected-debugging-output ...) */,t1);
t3=C_mutate((C_word*)lf[9]+1 /* (set! +logged-debugging-modes+ ...) */,lf[10]);
t4=C_mutate((C_word*)lf[11]+1 /* (set! ##compiler#debugging ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4703,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[21]+1 /* (set! ##compiler#with-debugging-output ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4803,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[26]+1 /* (set! ##compiler#quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4905,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[31]+1 /* (set! ##sys#syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4919,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[40]+1 /* (set! syntax-error ...) */,*((C_word*)lf[31]+1));
t9=C_mutate((C_word*)lf[41]+1 /* (set! ##compiler#emit-syntax-trace-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4996,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[42]+1 /* (set! map-llist ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5000,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[43]+1 /* (set! ##compiler#check-signature ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5038,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[46]+1 /* (set! ##compiler#posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5101,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[47]+1 /* (set! ##compiler#posv ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5133,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[48]+1 /* (set! ##compiler#stringify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5165,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[52]+1 /* (set! ##compiler#symbolify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5191,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[54]+1 /* (set! ##compiler#slashify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5221,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[59]+1 /* (set! ##compiler#uncommentify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5230,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[62]+1 /* (set! ##compiler#build-lambda-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5239,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[63]+1 /* (set! ##compiler#string->c-identifier ...) */,*((C_word*)lf[64]+1));
t20=C_mutate((C_word*)lf[65]+1 /* (set! ##compiler#c-ify-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5277,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[74]+1 /* (set! ##compiler#valid-c-identifier? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5362,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[76]+1 /* (set! ##compiler#words ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5410,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[77]+1 /* (set! ##compiler#words->bytes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5417,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[78]+1 /* (set! ##compiler#check-and-open-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5424,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[85]+1 /* (set! ##compiler#close-checked-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5465,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[88]+1 /* (set! ##compiler#fold-inner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5477,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[90]+1 /* (set! ##compiler#follow-without-loop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5528,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[91]+1 /* (set! ##compiler#sort-symbols ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5557,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[94]+1 /* (set! ##compiler#constant? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5574,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[96]+1 /* (set! ##compiler#collapsable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5614,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[97]+1 /* (set! ##compiler#immediate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5641,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[99]+1 /* (set! ##compiler#basic-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5682,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[102]+1 /* (set! ##compiler#canonicalize-begin-body ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5734,tmp=(C_word)a,a+=2,tmp));
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:298: condition-predicate */
t35=*((C_word*)lf[557]+1);
((C_proc3)(void*)(*((C_word*)t35+1)))(3,t35,t34,lf[511]);}

/* text in debugging in k4698 in k4665 in k4663 */
static void C_fcall f_4707(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4707,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:59: with-output-to-string */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_8980 in k8997 in k8931 in k8929 */
static void C_ccall f_8980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8980,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* ##compiler#debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4r,(void*)f_4703r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4703r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4703r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(16);
t5=C_SCHEME_UNDEFINED;
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4707,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4761,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
if(C_truep(C_i_memq(t2,*((C_word*)lf[1]+1)))){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4778,a[2]=t1,a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* support.scm:71: text */
t11=t5;
f_4707(t11,t10);}
else{
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4792,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(t2,*((C_word*)lf[9]+1)))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4801,a[2]=t7,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* support.scm:79: text */
t12=t5;
f_4707(t12,t11);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}}

/* f_8917 in inline-lambda-bindings in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8917(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8917,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8922,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8927,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* support.scm:688: ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* ##compiler#inline-lambda-bindings in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_8911,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8917,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* support.scm:686: decompose-lambda-list */
t9=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t1,t2,t8);}

/* k4729 */
static void C_ccall f_4730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(32),((C_word*)t0)[3]);}

/* k4735 */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:65: write */
t2=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k11055 in k11018 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_11057(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11057,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[346]+1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[375],((C_word*)t0)[3]));}
else{
t2=C_a_i_list(&a,2,lf[376],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[375],t2));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[378]);
if(C_truep(t2)){
if(C_truep(*((C_word*)lf[346]+1))){
t3=C_a_i_list(&a,2,lf[379],((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_list(&a,2,lf[375],t3));}
else{
t3=C_a_i_list(&a,2,lf[379],((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,lf[376],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,lf[375],t4));}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11095,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
/* support.scm:1102: ##sys#hash-table-ref */
t4=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[391]+1),((C_word*)t0)[6]);}
else{
t4=t3;
f_11095(2,t4,C_SCHEME_FALSE);}}}}

/* f_8927 */
static void C_ccall f_8927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8927,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8930,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[106]+1);
t10=((C_word*)t0)[6];
t11=C_i_check_list_2(t10,lf[159]);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9008,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9008(t15,t4,t10);}
else{
t5=t4;
f_8930(2,t5,((C_word*)t0)[6]);}}

/* f_8922 */
static void C_ccall f_8922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8922,2,t0,t1);}
/* support.scm:689: split-at */
t2=*((C_word*)lf[276]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* dump in debugging in k4698 in k4665 in k4663 */
static void C_fcall f_4761(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4761,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[8]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4765,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm:57: display */
t5=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],*((C_word*)lf[8]+1));}

/* k4766 in k4764 in dump in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:57: display */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4764 in dump in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(124),((C_word*)t0)[4]);}

/* f_10546 */
static void C_ccall f_10546(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10546,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k9841 in k9826 in k9823 in k9813 in k9804 in k9791 in k9884 in k9770 */
static void C_ccall f_9842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9842,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* for-each-loop526 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_6152(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6152,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6161,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:352: g527 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_8937 in k8931 in k8929 */
static void C_ccall f_8937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8937,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8939,tmp=(C_word)a,a+=2,tmp);
t6=C_a_i_list1(&a,1,t2);
t7=C_a_i_list2(&a,2,t3,t4);
/* support.scm:695: g1842 */
t8=t5;
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[105],t6,t7);}

/* ##compiler#mark-variable in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_14407r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_14407r(t0,t1,t2,t3,t4);}}

static void C_ccall f_14407r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* support.scm:1588: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* support.scm:1588: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* k8931 in k8929 */
static void C_ccall f_8932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8937,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8954,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8958,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8998,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* support.scm:698: last */
t6=*((C_word*)lf[259]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t4=t3;
f_8954(2,t4,t1);}}

/* k8929 */
static void C_ccall f_8930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* support.scm:692: copy-node-tree-and-rename */
t3=*((C_word*)lf[280]+1);
f_9038(7,t3,t2,((C_word*)t0)[8],((C_word*)t0)[9],t1,((C_word*)t0)[10],((C_word*)t0)[11]);}
else{
t3=t2;
f_8932(2,t3,((C_word*)t0)[8]);}}

/* k4717 in k4715 */
static void C_ccall f_4718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:67: newline */
t2=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4715 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4726,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:63: display */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[18]);}
else{
/* support.scm:67: newline */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* f_4713 in text in debugging in k4698 in k4665 in k4663 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4716,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:61: display */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k10550 */
static void C_ccall f_10552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10552,2,t0,t1);}
t2=C_eqp(lf[129],t1);
if(C_truep(t2)){
t3=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_8939 */
static void C_ccall f_8939(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8939,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* loop in find-lambda-container in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_6397(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6397,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6406,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:427: get */
t5=*((C_word*)lf[144]+1);
f_6172(5,t5,t4,((C_word*)t0)[4],t2,lf[157]);}}

/* ##compiler#find-lambda-container in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6391(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6391,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6397,a[2]=t3,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6397(t8,t1,t2);}

/* k8299 in k8292 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8304,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8307,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:640: last */
t4=*((C_word*)lf[259]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k9892 in k9770 */
static void C_ccall f_9894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:786: g2193 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* map-loop1569 in k8292 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8309(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8309,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8320,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_8320(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_8320(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8306 in k8299 in k8292 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:640: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8118(t2,((C_word*)t0)[3],t1);}

/* k8303 in k8299 in k8292 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8304,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[105],((C_word*)t0)[3],t1));}

/* ##compiler#load-inline-file in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9896(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9896,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9902,tmp=(C_word)a,a+=2,tmp);
/* support.scm:818: with-input-from-file */
t4=*((C_word*)lf[309]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* f_9880 in k9770 */
static void C_ccall f_9880(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9880,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[207]));}

/* f_10507 */
static void C_ccall f_10507(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10507,3,t0,t1,t2);}
t3=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_car(t2);
t6=C_eqp(t5,lf[186]);
if(C_truep(t6)){
t7=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t8=C_mutate(((C_word *)((C_word*)t0)[3])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t7=C_eqp(t5,lf[170]);
if(C_truep(t7)){
t8=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10546,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10552,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=t2;
t13=C_u_i_cdr(t12);
/* support.scm:970: g2472 */
t14=t10;
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t11,t13);}
else{
t8=C_eqp(t5,lf[175]);
if(C_truep(t8)){
t9=t2;
t10=C_u_i_cdr(t9);
t11=C_i_length(t10);
t12=C_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],t11);
t13=C_mutate(((C_word *)((C_word*)t0)[6])+1,t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}}}

/* f_4727 in k4725 in k4715 */
static void C_ccall f_4727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4727,3,t0,t1,t2);}
t3=*((C_word*)lf[13]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4730,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4736,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:65: force */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k4725 in k4715 */
static void C_ccall f_4726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4727,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[2];
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4741,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4741(t7,((C_word*)t0)[3],t3);}

/* f_9888 in k9770 */
static void C_ccall f_9888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9888,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* k9884 in k9770 */
static void C_ccall f_9886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9886,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_i_assq(lf[170],((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9793,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_9793(t5,t3);}
else{
t5=C_i_cdr(t2);
t6=C_eqp(lf[167],t5);
t7=t4;
f_9793(t7,C_i_not(t6));}}}

/* f_7374 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7374(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7374,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k10499 in compute-database-statistics in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:975: values */
C_values(9,0,((C_word*)t0)[2],*((C_word*)lf[326]+1),*((C_word*)lf[327]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);}

/* f_10505 in compute-database-statistics in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10505,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_i_check_list_2(t3,lf[33]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10582,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_10582(t9,t1,t3);}

/* for-each-loop624 in k6084 in k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_6112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6112,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6121,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:364: g625 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#tree-copy in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9465,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9471,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_9471(t6,t1,t2);}

/* k8319 in map-loop1569 in k8292 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8320(C_word t0,C_word t1){
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
f_8309(t5,((C_word*)t0)[7],t3,t4);}

/* k6140 in for-each-loop575 in k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6132(t3,((C_word*)t0)[4],t2);}

/* k9823 in k9813 in k9804 in k9791 in k9884 in k9770 */
static void C_ccall f_9825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(t1,lf[302]);
if(C_truep(t3)){
t4=t2;
f_9828(t4,C_SCHEME_TRUE);}
else{
t4=C_eqp(t1,lf[303]);
if(C_truep(t4)){
t5=t2;
f_9828(t5,C_SCHEME_FALSE);}
else{
t5=C_i_cadddr(((C_word*)t0)[7]);
t6=t2;
f_9828(t6,C_i_lessp(t5,*((C_word*)lf[304]+1)));}}}

/* k9826 in k9823 in k9813 in k9804 in k9791 in k9884 in k9770 */
static void C_fcall f_9828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9828,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9842,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_u_i_cdr(((C_word*)t0)[6]);
/* support.scm:799: node->sexpr */
t6=*((C_word*)lf[286]+1);
f_9527(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* for-each-loop575 in k6037 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_6132(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6132,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6141,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:358: g576 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_5866 */
static void C_ccall f_5866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5871,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5877,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:309: read */
t4=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* f_13887 in constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13887(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13887,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13892,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13898,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1475: g3630 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* ##compiler#constant-form-eval in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_13884,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13887,tmp=(C_word)a,a+=2,tmp);
t10=C_i_check_list_2(t3,lf[159]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13903,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14027,a[2]=t8,a[3]=t13,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_14027(t15,t11,t3);}

/* f_9211 in k9209 in k9206 */
static void C_ccall f_9211(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9211,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k9209 in k9206 */
static void C_ccall f_9210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9211,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* support.scm:750: gensym */
t4=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[283]);}

/* ##compiler#fold-boolean in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8867,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8873,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8873(t7,t1,t3);}

/* k6160 in for-each-loop526 in initialize-analysis-database in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6152(t3,((C_word*)t0)[4],t2);}

/* f_13892 */
static void C_ccall f_13892(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13892,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k13896 */
static void C_ccall f_13898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* k9202 in k9200 */
static void C_ccall f_9203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* k9200 */
static void C_ccall f_9201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9203,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:744: put! */
t3=*((C_word*)lf[148]+1);
f_6206(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[282],C_SCHEME_TRUE);}

/* k9206 */
static void C_ccall f_9208(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t0)[8];
t8=C_i_check_list_2(t1,lf[159]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9285,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9287,a[2]=t6,a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_9287(t13,t9,t7,t1);}

/* k13744 in k13732 in loop in k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1434: string-intersperse */
t2=*((C_word*)lf[492]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[495]);}

/* f_8884 in fold in fold-boolean in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8884(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8884,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* f_14432 in intrinsic? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_14432,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* k7167 in map-loop1079 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7168(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7168,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7143(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7143(t6,((C_word*)t0)[5],t5);}}

/* for-each-loop46 in k4725 in k4715 */
static void C_fcall f_4741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4741,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4750,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:64: g47 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_9222 in k9269 in k9263 in k9209 in k9206 */
static void C_ccall f_9222(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9222,3,t0,t1,t2);}
/* support.scm:753: g2036 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9055(t3,t1,t2,((C_word*)t0)[3]);}

/* k8898 in k8895 in fold in fold-boolean in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8899,2,t0,t1);}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
/* support.scm:680: g1793 */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],lf[237],lf[274],t2);}

/* k8895 in fold in fold-boolean in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8899,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=C_u_i_cdr(t3);
/* support.scm:683: fold */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8873(t5,t2,t4);}

/* ##compiler#variable-mark in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_14423,4,t0,t1,t2,t3);}
/* support.scm:1591: ##sys#get */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* ##compiler#intrinsic? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14429(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14429,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14432,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1593: g3880 */
t4=t3;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,lf[137]);}

/* f_10292 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10292(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10292,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k9813 in k9804 in k9791 in k9884 in k9770 */
static void C_ccall f_9815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9815,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9819,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9825,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* support.scm:793: g2213 */
t4=t2;
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[305]);}}

/* k8450 in k8447 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8451,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[263],t2));}

/* k10296 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10298,2,t0,t1);}
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10330,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10336,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* support.scm:894: g2407 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* f_9819 in k9813 in k9804 in k9791 in k9884 in k9770 */
static void C_ccall f_9819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9819,4,t0,t1,t2,t3);}
/* tweaks.scm:57: ##sys#get */
t4=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* ##compiler#export-variable in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14361,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14364,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1578: g3833 */
t4=t3;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,lf[530],lf[533]);}

/* loop in k8447 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8458(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8458,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8480,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_i_car(t3);
/* support.scm:658: walk */
t6=((C_word*)((C_word*)t0)[2])[1];
f_8118(t6,t4,t5);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8502,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=C_i_car(t3);
/* support.scm:659: walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_8118(t7,t5,t6);}}

/* f_14364 in export-variable in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_14364r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_14364r(t0,t1,t2,t3,t4);}}

static void C_ccall f_14364r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
if(C_truep(C_i_nullp(t4))){
/* tweaks.scm:54: ##sys#put! */
t5=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,C_SCHEME_TRUE);}
else{
t5=C_i_car(t4);
/* tweaks.scm:54: ##sys#put! */
t6=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}}

/* map-loop1079 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7143(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7143,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7168,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:531: g1085 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7139 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:531: g1072 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t1);}

/* k12847 in k12827 in k12754 in k12682 in k12661 in foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_12849(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12849,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[470]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[397]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[3],lf[398]));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[471]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[377]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_12865(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[392]);
t7=t5;
f_12865(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[3],lf[393])));}}}}

/* f_9800 in k9791 in k9884 in k9770 */
static void C_ccall f_9800(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9800,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9804 in k9791 in k9884 in k9770 */
static void C_ccall f_9806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9806,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* support.scm:792: get */
t3=*((C_word*)lf[144]+1);
f_6172(5,t3,t2,((C_word*)t0)[7],((C_word*)t0)[3],lf[203]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f15853 in print-version in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f15853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1616: print */
t2=*((C_word*)lf[289]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* for-each-loop2456 */
static void C_fcall f_10582(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10582,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10591,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:962: g2457 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#display-real-name-table in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13792,tmp=(C_word)a,a+=2,tmp);
/* support.scm:1446: ##sys#hash-table-for-each */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[490]+1));}

/* k9269 in k9263 in k9209 in k9206 */
static void C_ccall f_9270(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9270,2,t0,t1);}
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9222,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(((C_word*)t0)[7],lf[159]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9231,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9233,a[2]=t7,a[3]=t12,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9233(t14,t10,((C_word*)t0)[7]);}

/* k9275 in k9263 in k9209 in k9206 */
static void C_ccall f_9276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:751: build-lambda-list */
t2=*((C_word*)lf[62]+1);
f_5239(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12827 in k12754 in k12682 in k12661 in foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_12829(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12829,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[419]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[371]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[469]);}
else{
t3=C_eqp(((C_word*)t0)[3],lf[373]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[389]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[374]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_12849(t6,t4);}
else{
t6=C_eqp(((C_word*)t0)[3],lf[394]);
if(C_truep(t6)){
t7=t5;
f_12849(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[3],lf[395]);
t8=t5;
f_12849(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[3],lf[396])));}}}}}}

/* k10590 in for-each-loop2456 */
static void C_ccall f_10591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10582(t3,((C_word*)t0)[4],t2);}

/* loop in k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13712,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(C_i_greaterp(t3,*((C_word*)lf[491]+1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13725,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,lf[494],t2);
/* support.scm:1430: reverse */
t7=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13733,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1432: resolve */
f_13671(t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13766,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1438: reverse */
t6=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}}

/* k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13710,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13712,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_13712(t5,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),t1);}

/* k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10285,2,t0,t1);}
t2=C_eqp(t1,lf[247]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10292,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm:892: g2402 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}
else{
t3=C_eqp(t1,lf[238]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10347,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10353,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm:898: g2414 */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[5]);}}}

/* k13724 in loop in k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1430: string-intersperse */
t2=*((C_word*)lf[492]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[493]);}

/* k9404 in map-loop2052 in k9366 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9405(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9405,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9380(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9380(t6,((C_word*)t0)[5],t5);}}

/* f_10253 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10253(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10253,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* ##compiler#simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10250,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10253,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10259,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm:884: g2383 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10259,2,t0,t1);}
t2=C_i_caddr(t1);
t3=(C_truep(C_i_pairp(t2))?C_u_i_car(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_u_i_cdr(t1);
if(C_truep(C_u_i_car(t4))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10276,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10276(3,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* f_10330 in k10296 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10330(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10330,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k13732 in loop in k13709 in k13768 in k13684 in real-name in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_13733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13733,2,t0,t1);}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13745,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1434: reverse */
t4=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13760,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* support.scm:1435: symbol->string */
t4=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}}

/* f_10369 in dump-undefined-globals in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10369,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10375,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10383,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:906: keyword? */
t6=*((C_word*)lf[319]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* fold in fold-boolean in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8873(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8873,NULL,3,t0,t1,t2);}
t3=C_i_cddr(t2);
if(C_truep(C_i_nullp(t3))){
C_apply(4,0,t1,((C_word*)t0)[2],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8884,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8896,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=t2;
t7=C_u_i_car(t6);
t8=C_i_cadr(t2);
/* support.scm:682: proc */
t9=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t5,t7,t8);}}

/* map-loop1866 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9423(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9423,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9434,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t11=t10;
f_9434(t11,C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9));}
else{
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t12=t10;
f_9434(t12,t11);}}
else{
t6=((C_word*)((C_word*)t0)[4])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k10334 in k10296 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10336,2,t0,t1);}
t2=C_eqp(lf[217],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10322,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm:895: g2411 */
t5=t3;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k9229 in k9269 in k9263 in k9209 in k9206 */
static void C_ccall f_9231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:748: g2005 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[129],((C_word*)t0)[4],t1);}

/* map-loop2013 in k9269 in k9263 in k9209 in k9206 */
static void C_fcall f_9233(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9233,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9258,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:753: g2019 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* ##compiler#get-all in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_6189r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6189r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6189r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6193,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:377: ##sys#hash-table-ref */
t6=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* f_10347 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10347(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10347,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(3)));}

/* k6175 in get in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#get in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6172,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6176,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:371: ##sys#hash-table-ref */
t6=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}

/* f_10322 in k10334 in k10296 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10322(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10322,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k9257 in map-loop2013 in k9269 in k9263 in k9209 in k9206 */
static void C_ccall f_9258(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9258,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9233(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_9233(t6,((C_word*)t0)[5],t5);}}

/* k9433 in map-loop1866 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_9434(C_word t0,C_word t1){
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
f_9423(t5,((C_word*)t0)[7],t3,t4);}

/* k10326 in k10334 in k10296 in k10283 in rec in k10257 in simple-lambda-node? in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_10328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_car(t1);
t3=C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=C_u_i_cdr(((C_word*)t0)[3]);
/* support.scm:896: every */
t5=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],t4);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* f_7126 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7126(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7126,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_10931(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10931,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[346]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[364],((C_word*)t0)[2]));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[365]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(*((C_word*)lf[346]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[366],((C_word*)t0)[2])));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[367]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_10957(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[399]);
t6=t4;
f_10957(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[400])));}}}}

/* f_7897 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7897,2,t0,t1);}
/* support.scm:604: get-line-2 */
t2=*((C_word*)lf[155]+1);
f_6356(3,t2,t1,((C_word*)t0)[2]);}

/* k9263 in k9209 in k9206 */
static void C_ccall f_9264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9264,2,t0,t1);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9270,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9276,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[10])){
t5=((C_word*)t0)[10];
t6=((C_word*)t0)[4];
/* support.scm:712: alist-ref */
t7=*((C_word*)lf[281]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,t5,t6,*((C_word*)lf[25]+1),t5);}
else{
/* support.scm:751: build-lambda-list */
t5=*((C_word*)lf[62]+1);
f_5239(5,t5,t3,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_FALSE);}}

/* k7888 in map-loop1366 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7889(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7889,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7864(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7864(t6,((C_word*)t0)[5],t5);}}

/* k8417 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8418,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,3,lf[261],((C_word*)t0)[3],t1));}

/* k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7101(C_word c,C_word t0,C_word t1){
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
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7101,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep(C_i_not_pair_p(((C_word*)t0)[3]))){
/* support.scm:528: bomb */
t2=*((C_word*)lf[3]+1);
f_4676(4,t2,((C_word*)t0)[2],lf[220],((C_word*)t0)[3]);}
else{
t2=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_symbolp(t2))){
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
t5=C_eqp(t4,lf[221]);
t6=(C_truep(t5)?t5:C_eqp(t4,lf[222]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7126,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[3];
t9=C_u_i_car(t8);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t0)[3];
t15=C_u_i_cdr(t14);
t16=C_i_check_list_2(t15,lf[159]);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7141,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7143,a[2]=t13,a[3]=t19,a[4]=t11,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t21=((C_word*)t19)[1];
f_7143(t21,t17,t15);}
else{
t7=C_eqp(t4,lf[95]);
if(C_truep(t7)){
t8=C_i_cadr(((C_word*)t0)[3]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7188,a[2]=((C_word*)t0)[2],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_numberp(t8))){
t10=C_eqp(lf[226],*((C_word*)lf[227]+1));
if(C_truep(t10)){
t11=C_i_integerp(t8);
t12=t9;
f_7188(t12,C_i_not(t11));}
else{
t11=t9;
f_7188(t11,C_SCHEME_FALSE);}}
else{
t10=t9;
f_7188(t10,C_SCHEME_FALSE);}}
else{
t8=C_eqp(t4,lf[105]);
if(C_truep(t8)){
t9=C_i_cadr(((C_word*)t0)[3]);
t10=C_i_caddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t9))){
/* support.scm:546: walk */
t11=((C_word*)((C_word*)t0)[4])[1];
f_7081(t11,((C_word*)t0)[2],t10);}
else{
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7231,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7239,tmp=(C_word)a,a+=2,tmp);
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7250,a[2]=t11,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t15,a[8]=t13,a[9]=t16,tmp=(C_word)a,a+=10,tmp);
/* support.scm:552: unzip1 */
t18=*((C_word*)lf[229]+1);
((C_proc3)(void*)(*((C_word*)t18+1)))(3,t18,t17,t9);}}
else{
t9=C_eqp(t4,lf[230]);
t10=(C_truep(t9)?t9:C_eqp(t4,lf[129]));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7346,tmp=(C_word)a,a+=2,tmp);
t12=C_i_cadr(((C_word*)t0)[3]);
t13=C_a_i_list1(&a,1,t12);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7361,a[2]=t11,a[3]=((C_word*)t0)[2],a[4]=t13,tmp=(C_word)a,a+=5,tmp);
t15=C_i_caddr(((C_word*)t0)[3]);
/* support.scm:556: walk */
t16=((C_word*)((C_word*)t0)[4])[1];
f_7081(t16,t14,t15);}
else{
t11=C_eqp(t4,lf[231]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7374,tmp=(C_word)a,a+=2,tmp);
t13=C_i_cadr(((C_word*)t0)[3]);
t14=C_i_caddr(((C_word*)t0)[3]);
t15=C_a_i_list2(&a,2,t13,t14);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7389,a[2]=t12,a[3]=((C_word*)t0)[2],a[4]=t15,tmp=(C_word)a,a+=5,tmp);
t17=C_i_cadddr(((C_word*)t0)[3]);
/* support.scm:560: walk */
t18=((C_word*)((C_word*)t0)[4])[1];
f_7081(t18,t16,t17);}
else{
t12=C_eqp(t4,lf[232]);
if(C_truep(t12)){
t13=C_i_cdddr(((C_word*)t0)[3]);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7515,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t13,tmp=(C_word)a,a+=6,tmp);
t15=((C_word*)t0)[3];
t16=C_u_i_cdr(t15);
t17=C_u_i_cdr(t16);
t18=C_u_i_car(t17);
/* support.scm:563: walk */
t19=((C_word*)((C_word*)t0)[4])[1];
f_7081(t19,t14,t18);}
else{
t13=C_eqp(t4,lf[236]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[3]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7528,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t0)[3];
t17=C_u_i_car(t16);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7539,a[2]=((C_word*)t0)[3],a[3]=t15,a[4]=((C_word*)t0)[2],a[5]=t17,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t14))){
t19=C_u_i_car(t14);
t20=C_eqp(lf[95],t19);
if(C_truep(t20)){
t21=C_i_cadr(t14);
t22=t18;
f_7539(t22,C_a_i_list1(&a,1,t21));}
else{
t21=t18;
f_7539(t21,C_a_i_list1(&a,1,t14));}}
else{
t19=t18;
f_7539(t19,C_a_i_list1(&a,1,t14));}}
else{
t14=C_eqp(t4,lf[237]);
t15=(C_truep(t14)?t14:C_eqp(t4,lf[238]));
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7603,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t0)[3];
t18=C_u_i_car(t17);
t19=C_i_cadr(((C_word*)t0)[3]);
t20=C_a_i_list1(&a,1,t19);
t21=C_SCHEME_END_OF_LIST;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_FALSE;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=((C_word*)t0)[3];
t26=C_u_i_cdr(t25);
t27=C_u_i_cdr(t26);
t28=C_i_check_list_2(t27,lf[159]);
t29=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7622,a[2]=t16,a[3]=((C_word*)t0)[2],a[4]=t18,a[5]=t20,tmp=(C_word)a,a+=6,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7624,a[2]=t24,a[3]=t31,a[4]=t22,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t33=((C_word*)t31)[1];
f_7624(t33,t29,t27);}
else{
t16=C_eqp(t4,lf[239]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7662,tmp=(C_word)a,a+=2,tmp);
t18=C_i_cadr(((C_word*)t0)[3]);
t19=C_a_i_list2(&a,2,t18,C_SCHEME_TRUE);
/* support.scm:587: g1271 */
t20=t17;
((C_proc5)(void*)(*((C_word*)t20+1)))(5,t20,((C_word*)t0)[2],lf[239],t19,C_SCHEME_END_OF_LIST);}
else{
t17=C_eqp(t4,lf[240]);
t18=(C_truep(t17)?t17:C_eqp(t4,lf[241]));
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7683,tmp=(C_word)a,a+=2,tmp);
t20=C_i_cadr(((C_word*)t0)[3]);
t21=C_a_i_list1(&a,1,t20);
t22=C_SCHEME_END_OF_LIST;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_FALSE;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=((C_word*)t0)[3];
t27=C_u_i_cdr(t26);
t28=C_u_i_cdr(t27);
t29=C_i_check_list_2(t28,lf[159]);
t30=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7700,a[2]=t19,a[3]=((C_word*)t0)[2],a[4]=t21,tmp=(C_word)a,a+=5,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7702,a[2]=t25,a[3]=t32,a[4]=t23,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t34=((C_word*)t32)[1];
f_7702(t34,t30,t28);}
else{
t19=C_eqp(t4,lf[242]);
if(C_truep(t19)){
t20=C_i_cadr(((C_word*)t0)[3]);
t21=C_i_cadr(t20);
t22=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7742,tmp=(C_word)a,a+=2,tmp);
t23=C_i_caddr(((C_word*)t0)[3]);
t24=C_i_cadr(t23);
t25=C_i_cadddr(((C_word*)t0)[3]);
t26=C_i_cadr(t25);
t27=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7772,a[2]=t21,a[3]=t24,a[4]=t26,a[5]=t22,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* support.scm:596: fifth */
t28=*((C_word*)lf[244]+1);
((C_proc3)(void*)(*((C_word*)t28+1)))(3,t28,t27,((C_word*)t0)[3]);}
else{
t20=C_eqp(t4,lf[245]);
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7789,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t20)){
t22=t21;
f_7789(t22,t20);}
else{
t22=C_eqp(t4,lf[251]);
if(C_truep(t22)){
t23=t21;
f_7789(t23,t22);}
else{
t23=C_eqp(t4,lf[252]);
if(C_truep(t23)){
t24=t21;
f_7789(t24,t23);}
else{
t24=C_eqp(t4,lf[253]);
t25=t21;
f_7789(t25,(C_truep(t24)?t24:C_eqp(t4,lf[254])));}}}}}}}}}}}}}}}
else{
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8054,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t0)[3];
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8067,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8069,a[2]=t8,a[3]=t12,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8069(t14,t10,t9);}}}}

/* k12884 in k12863 in k12847 in k12827 in k12754 in k12682 in k12661 in foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_12886(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[473]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[386]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
/* support.scm:1304: foreign-type->scrutiny-type */
t4=*((C_word*)lf[454]+1);
f_12658(4,t4,((C_word*)t0)[2],t3,((C_word*)t0)[5]);}
else{
t3=C_eqp(((C_word*)t0)[3],lf[387]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[419]);}
else{
t4=C_eqp(((C_word*)t0)[3],lf[388]);
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[389]:lf[235]));}
else{
t5=C_eqp(((C_word*)t0)[3],lf[373]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?lf[389]:lf[235]));}}}}}

/* map-loop1366 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7864(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7864,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7889,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:602: g1372 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7860 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:602: g1359 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[247],((C_word*)t0)[4],t1);}

/* k8232 in map-loop1527 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8233(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8233,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8208(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8208(t6,((C_word*)t0)[5],t5);}}

/* k12863 in k12847 in k12827 in k12754 in k12682 in k12661 in foreign-type->scrutiny-type in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_12865(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12865,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[472]);}
else{
t2=C_eqp(((C_word*)t0)[3],lf[378]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[378]);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[4];
t4=C_u_i_car(t3);
t5=C_eqp(t4,lf[380]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12886,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_12886(t7,t5);}
else{
t7=C_eqp(t4,lf[389]);
if(C_truep(t7)){
t8=t6;
f_12886(t8,t7);}
else{
t8=C_eqp(t4,lf[390]);
t9=t6;
f_12886(t9,(C_truep(t8)?t8:C_eqp(t4,lf[371])));}}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[235]);}}}}

/* k8447 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8451,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8458,a[2]=((C_word*)t0)[5],a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_8458(t8,t2,t3,t4);}

/* map-loop1527 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_8208(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8208,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8233,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:631: g1533 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8118(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8204 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8206,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_cons(&a,2,lf[258],t2));}

/* f_7846 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7846,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k7835 in map-loop1335 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7836(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7836,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7811(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7811(t6,((C_word*)t0)[5],t5);}}

/* k7648 in map-loop1247 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7649(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7649,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7624(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_7624(t6,((C_word*)t0)[5],t5);}}

/* k10984 in k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_ccall f_10985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10985,2,t0,t1);}
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[372],t1);
t5=C_a_i_list(&a,2,lf[95],C_SCHEME_FALSE);
t6=C_a_i_list(&a,4,lf[221],t1,t4,t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_list(&a,3,lf[105],t3,t6));}

/* walkeach in scan-free-variables in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_13497(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13497,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13500,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t2,lf[33]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13510,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_13510(t9,t1,t2);}

/* k10981 in k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_10983(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10983,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1078: gensym */
t3=*((C_word*)lf[106]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[373]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[372],((C_word*)t0)[2]));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[374]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_11020(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[394]);
if(C_truep(t5)){
t6=t4;
f_11020(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[395]);
t7=t4;
f_11020(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[396])));}}}}}

/* map-loop1335 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7811(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7811,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7836,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:600: g1341 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14474 */
static void C_ccall f_14475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1606: ##sys#put! */
t2=*((C_word*)lf[134]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[540],t1);}

/* k7807 in k7787 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:600: g1328 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k14477 */
static void C_ccall f_14478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14478,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_a_i_list1(&a,1,t4);
/* support.scm:1608: append */
t6=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],t2,t5);}

/* k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9065,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:715: g1907 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}

/* f_9065 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9065(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9065,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(2)));}

/* k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14460,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14465,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14514,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1602: open-output-string */
t4=*((C_word*)lf[51]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_14466 in k14464 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14466(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_14466,3,t0,t1,t2);}
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14475,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14478,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm:1608: ##sys#get */
t6=*((C_word*)lf[249]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[540]);}

/* k14464 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14466,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14488,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm:1609: read-file */
t4=*((C_word*)lf[541]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* f_7683 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7683,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* for-each-loop3917 in k14487 in k14464 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_14493(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14493,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14502,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:1603: g3918 */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* f_9085 in k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9085(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9085,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

/* k14487 in k14464 in k14459 in k14454 in load-identifier-database in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14488,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14493,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_14493(t5,((C_word*)t0)[3],t1);}

/* k10955 in k10929 in k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_10957(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10957,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[346]+1))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,lf[368],((C_word*)t0)[2]));}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[369]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(*((C_word*)lf[346]+1))?((C_word*)t0)[2]:C_a_i_list(&a,2,lf[370],((C_word*)t0)[2])));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[371]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_10983(t5,t3);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[397]);
t6=t4;
f_10983(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[4],lf[398])));}}}}

/* k5568 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm:245: symbol->string */
t3=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* f_5563 in sort-symbols in k4698 in k4665 in k4663 */
static void C_ccall f_5563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5563,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5569,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* support.scm:245: symbol->string */
t5=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k10906 in k10872 in k10766 in k10752 in repeat */
static void C_fcall f_10908(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10908,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(*((C_word*)lf[346]+1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_assq(t2,lf[362]);
t4=C_slot(t3,C_fix(1));
t5=C_a_i_list(&a,2,lf[95],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_list(&a,3,lf[358],t5,((C_word*)t0)[3]));}}
else{
t2=C_eqp(((C_word*)t0)[5],lf[363]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10931,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10931(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[401]);
if(C_truep(t4)){
t5=t3;
f_10931(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[402]);
t6=t3;
f_10931(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[5],lf[403])));}}}}

/* k14558 in print-usage in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm:1620: newline */
t3=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#print-usage in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14555,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14559,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm:1619: print-version */
t3=*((C_word*)lf[547]+1);
f_14531(2,t3,t2);}

/* ##compiler#constant? in k4698 in k4665 in k4663 */
static void C_ccall f_5574(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5574,3,t0,t1,t2);}
t3=C_i_numberp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_i_stringp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_booleanp(t2);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=C_eofp(t2);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
if(C_truep(C_i_pairp(t2))){
t8=t2;
t9=C_u_i_car(t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_eqp(lf[95],t9));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}}}}}

/* k5571 in k5568 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:245: string<? */
t2=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k7620 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:585: g1240 */
t2=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* map-loop1247 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_fcall f_7624(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7624,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7649,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* support.scm:585: g1253 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7081(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k14543 in k14537 in print-version in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_14544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm:1616: print */
t2=*((C_word*)lf[289]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_9072 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9072(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9072,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}

/* k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9072,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9078,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* support.scm:716: g1910 */
t4=t2;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}

/* k9076 in k9069 in k9062 in walk in k9045 in copy-node-tree-and-rename in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_9078(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9078,2,t0,t1);}
t2=C_eqp(t1,lf[95]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9085,tmp=(C_word)a,a+=2,tmp);
/* support.scm:719: g1918 */
t4=t3;
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],t1,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t3=C_eqp(t1,lf[217]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9110,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* support.scm:722: get */
t7=*((C_word*)lf[144]+1);
f_6172(5,t7,t6,((C_word*)t0)[6],t4,lf[187]);}
else{
t4=C_eqp(t1,lf[240]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9120,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9141,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=C_i_car(((C_word*)t0)[3]);
t8=((C_word*)t0)[4];
/* support.scm:712: alist-ref */
t9=*((C_word*)lf[281]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t6,t7,t8,*((C_word*)lf[25]+1),t7);}
else{
t5=C_eqp(t1,lf[105]);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9154,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t8=C_i_car(((C_word*)t0)[7]);
/* support.scm:731: walk */
t9=((C_word*)((C_word*)t0)[8])[1];
f_9055(t9,t7,t8,((C_word*)t0)[4]);}
else{
t6=C_eqp(t1,lf[129]);
if(C_truep(t6)){
t7=C_i_caddr(((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9196,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* support.scm:739: decompose-lambda-list */
t9=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,((C_word*)t0)[2],t7,t8);}
else{
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9358,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9367,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=t7,a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* support.scm:754: tree-copy */
t9=*((C_word*)lf[284]+1);
f_9465(3,t9,t8,((C_word*)t0)[3]);}}}}}}

/* k5515 in fold in k5489 in fold-inner in k4698 in k4665 in k4663 */
static void C_ccall f_5516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5516,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_u_i_car(t2);
t4=C_a_i_list2(&a,2,t1,t3);
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[4],t4);}

/* ##compiler#follow-without-loop in k4698 in k4665 in k4663 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5528,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5534,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5534(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* k8292 in k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8294(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8294,2,t0,t1);}
t2=C_i_check_list_2(((C_word*)t0)[2],lf[159]);
t3=C_i_check_list_2(t1,lf[159]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8301,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8309,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8309(t8,t4,((C_word*)t0)[2],t1);}

/* k8290 in k8147 in k8139 in k8132 in k8125 in walk in build-expression-tree in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8351,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8351(t6,t2,t1);}

/* k8093 in map-loop1442 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_8094(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8094,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8069(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_8069(t6,((C_word*)t0)[5],t5);}}

/* f_7603 in k7099 in walk in build-node-graph in k7040 in k5802 in k5800 in k4698 in k4665 in k4663 */
static void C_ccall f_7603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7603,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record4(&a,4,lf[207],t2,t3,t4));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[904] = {
{"f_14516:support_2escm",(void*)f_14516},
{"f_14518:support_2escm",(void*)f_14518},
{"f_5534:support_2escm",(void*)f_5534},
{"f_14514:support_2escm",(void*)f_14514},
{"f_10621:support_2escm",(void*)f_10621},
{"f_10623:support_2escm",(void*)f_10623},
{"f_9008:support_2escm",(void*)f_9008},
{"f_10625:support_2escm",(void*)f_10625},
{"f_8376:support_2escm",(void*)f_8376},
{"f_10627:support_2escm",(void*)f_10627},
{"f_7662:support_2escm",(void*)f_7662},
{"f_14502:support_2escm",(void*)f_14502},
{"f_10632:support_2escm",(void*)f_10632},
{"f_10634:support_2escm",(void*)f_10634},
{"f_10630:support_2escm",(void*)f_10630},
{"f_10639:support_2escm",(void*)f_10639},
{"f_10637:support_2escm",(void*)f_10637},
{"f_10644:support_2escm",(void*)f_10644},
{"f_10641:support_2escm",(void*)f_10641},
{"f_7423:support_2escm",(void*)f_7423},
{"f_10648:support_2escm",(void*)f_10648},
{"f_8397:support_2escm",(void*)f_8397},
{"f_10646:support_2escm",(void*)f_10646},
{"f_10653:support_2escm",(void*)f_10653},
{"f_10651:support_2escm",(void*)f_10651},
{"f_7415:support_2escm",(void*)f_7415},
{"f_10658:support_2escm",(void*)f_10658},
{"f_10655:support_2escm",(void*)f_10655},
{"f_8067:support_2escm",(void*)f_8067},
{"f_8069:support_2escm",(void*)f_8069},
{"f_7477:support_2escm",(void*)f_7477},
{"f_7471:support_2escm",(void*)f_7471},
{"f_10602:support_2escm",(void*)f_10602},
{"f_10608:support_2escm",(void*)f_10608},
{"f_9120:support_2escm",(void*)f_9120},
{"f_5060:support_2escm",(void*)f_5060},
{"f_10613:support_2escm",(void*)f_10613},
{"f_10619:support_2escm",(void*)f_10619},
{"f_5549:support_2escm",(void*)f_5549},
{"f_9110:support_2escm",(void*)f_9110},
{"f_7077:support_2escm",(void*)f_7077},
{"f_5042:support_2escm",(void*)f_5042},
{"f_5557:support_2escm",(void*)f_5557},
{"f_7063:support_2escm",(void*)f_7063},
{"f_7066:support_2escm",(void*)f_7066},
{"f_5049:support_2escm",(void*)f_5049},
{"f_7435:support_2escm",(void*)f_7435},
{"f_14538:support_2escm",(void*)f_14538},
{"f_5052:support_2escm",(void*)f_5052},
{"f_14531:support_2escm",(void*)f_14531},
{"f_14529:support_2escm",(void*)f_14529},
{"f_14526:support_2escm",(void*)f_14526},
{"f_14523:support_2escm",(void*)f_14523},
{"f_5028:support_2escm",(void*)f_5028},
{"f_14520:support_2escm",(void*)f_14520},
{"f_5031:support_2escm",(void*)f_5031},
{"f_5038:support_2escm",(void*)f_5038},
{"f_12658:support_2escm",(void*)f_12658},
{"f_10660:support_2escm",(void*)f_10660},
{"f_10662:support_2escm",(void*)f_10662},
{"f_10667:support_2escm",(void*)f_10667},
{"f_4782:support_2escm",(void*)f_4782},
{"f_4784:support_2escm",(void*)f_4784},
{"f_4780:support_2escm",(void*)f_4780},
{"f_10671:support_2escm",(void*)f_10671},
{"f_10673:support_2escm",(void*)f_10673},
{"f_10683:support_2escm",(void*)f_10683},
{"f_10681:support_2escm",(void*)f_10681},
{"f_10686:support_2escm",(void*)f_10686},
{"f_7452:support_2escm",(void*)f_7452},
{"f_10696:support_2escm",(void*)f_10696},
{"f_7459:support_2escm",(void*)f_7459},
{"f_4792:support_2escm",(void*)f_4792},
{"f_7440:support_2escm",(void*)f_7440},
{"f_7446:support_2escm",(void*)f_7446},
{"f_9141:support_2escm",(void*)f_9141},
{"f_5107:support_2escm",(void*)f_5107},
{"f_4778:support_2escm",(void*)f_4778},
{"f_5101:support_2escm",(void*)f_5101},
{"f_9135:support_2escm",(void*)f_9135},
{"f_9160:support_2escm",(void*)f_9160},
{"f_9161:support_2escm",(void*)f_9161},
{"f_14129:support_2escm",(void*)f_14129},
{"f_14121:support_2escm",(void*)f_14121},
{"f_9156:support_2escm",(void*)f_9156},
{"f_9154:support_2escm",(void*)f_9154},
{"f_4810:support_2escm",(void*)f_4810},
{"f_4817:support_2escm",(void*)f_4817},
{"f_4813:support_2escm",(void*)f_4813},
{"f_4815:support_2escm",(void*)f_4815},
{"f_8480:support_2escm",(void*)f_8480},
{"f_4942:support_2escm",(void*)f_4942},
{"f_9101:support_2escm",(void*)f_9101},
{"f_4843:support_2escm",(void*)f_4843},
{"f_8492:support_2escm",(void*)f_8492},
{"f_4937:support_2escm",(void*)f_4937},
{"f_4935:support_2escm",(void*)f_4935},
{"f_9107:support_2escm",(void*)f_9107},
{"f_7095:support_2escm",(void*)f_7095},
{"f_4834:support_2escm",(void*)f_4834},
{"f_4923:support_2escm",(void*)f_4923},
{"f_4925:support_2escm",(void*)f_4925},
{"f_4926:support_2escm",(void*)f_4926},
{"f_7081:support_2escm",(void*)f_7081},
{"f_6251:support_2escm",(void*)f_6251},
{"f_4911:support_2escm",(void*)f_4911},
{"f_4917:support_2escm",(void*)f_4917},
{"f_4919:support_2escm",(void*)f_4919},
{"f_14116:support_2escm",(void*)f_14116},
{"f_13757:support_2escm",(void*)f_13757},
{"f_4909:support_2escm",(void*)f_4909},
{"f_4905:support_2escm",(void*)f_4905},
{"f_4903:support_2escm",(void*)f_4903},
{"f_4801:support_2escm",(void*)f_4801},
{"f_14106:support_2escm",(void*)f_14106},
{"f_13760:support_2escm",(void*)f_13760},
{"f_14107:support_2escm",(void*)f_14107},
{"f_4807:support_2escm",(void*)f_4807},
{"f_4803:support_2escm",(void*)f_4803},
{"f_13769:support_2escm",(void*)f_13769},
{"f_13766:support_2escm",(void*)f_13766},
{"f_14103:support_2escm",(void*)f_14103},
{"f_14101:support_2escm",(void*)f_14101},
{"f_13778:support_2escm",(void*)f_13778},
{"f_13774:support_2escm",(void*)f_13774},
{"f_8594:support_2escm",(void*)f_8594},
{"f_4829:support_2escm",(void*)f_4829},
{"f_13792:support_2escm",(void*)f_13792},
{"f_13795:support_2escm",(void*)f_13795},
{"f_13797:support_2escm",(void*)f_13797},
{"f_13799:support_2escm",(void*)f_13799},
{"f_6206:support_2escm",(void*)f_6206},
{"f_13633:support_2escm",(void*)f_13633},
{"f_13639:support_2escm",(void*)f_13639},
{"f_13636:support_2escm",(void*)f_13636},
{"f_13631:support_2escm",(void*)f_13631},
{"f_8569:support_2escm",(void*)f_8569},
{"f_8567:support_2escm",(void*)f_8567},
{"f_13645:support_2escm",(void*)f_13645},
{"f_13642:support_2escm",(void*)f_13642},
{"f_13649:support_2escm",(void*)f_13649},
{"f_4854:support_2escm",(void*)f_4854},
{"f_12528:support_2escm",(void*)f_12528},
{"f_6247:support_2escm",(void*)f_6247},
{"f_14139:support_2escm",(void*)f_14139},
{"f_14134:support_2escm",(void*)f_14134},
{"f_14132:support_2escm",(void*)f_14132},
{"f_11703:support_2escm",(void*)f_11703},
{"f_11708:support_2escm",(void*)f_11708},
{"f_4962:support_2escm",(void*)f_4962},
{"f_4964:support_2escm",(void*)f_4964},
{"f_4966:support_2escm",(void*)f_4966},
{"f_4968:support_2escm",(void*)f_4968},
{"f_13671:support_2escm",(void*)f_13671},
{"f_8754:support_2escm",(void*)f_8754},
{"f_13675:support_2escm",(void*)f_13675},
{"f_11712:support_2escm",(void*)f_11712},
{"f_8521:support_2escm",(void*)f_8521},
{"f_6210:support_2escm",(void*)f_6210},
{"f_5408:support_2escm",(void*)f_5408},
{"f_4951:support_2escm",(void*)f_4951},
{"f_13680:support_2escm",(void*)f_13680},
{"f_13685:support_2escm",(void*)f_13685},
{"f_14151:support_2escm",(void*)f_14151},
{"f_5410:support_2escm",(void*)f_5410},
{"f_5417:support_2escm",(void*)f_5417},
{"f_6201:support_2escm",(void*)f_6201},
{"f_8771:support_2escm",(void*)f_8771},
{"f_12552:support_2escm",(void*)f_12552},
{"f_13611:support_2escm",(void*)f_13611},
{"f_14148:support_2escm",(void*)f_14148},
{"f_5465:support_2escm",(void*)f_5465},
{"f_8546:support_2escm",(void*)f_8546},
{"f_13627:support_2escm",(void*)f_13627},
{"f_13629:support_2escm",(void*)f_13629},
{"f_13620:support_2escm",(void*)f_13620},
{"f_5477:support_2escm",(void*)f_5477},
{"f_8796:support_2escm",(void*)f_8796},
{"f_5424:support_2escm",(void*)f_5424},
{"f_8502:support_2escm",(void*)f_8502},
{"f_10839:support_2escm",(void*)f_10839},
{"f_7971:support_2escm",(void*)f_7971},
{"f_8054:support_2escm",(void*)f_8054},
{"f_5437:support_2escm",(void*)f_5437},
{"f_7964:support_2escm",(void*)f_7964},
{"f_7977:support_2escm",(void*)f_7977},
{"f_11129:support_2escm",(void*)f_11129},
{"f_8727:support_2escm",(void*)f_8727},
{"f_13605:support_2escm",(void*)f_13605},
{"f_8729:support_2escm",(void*)f_8729},
{"f_7790:support_2escm",(void*)f_7790},
{"f_7955:support_2escm",(void*)f_7955},
{"f_7952:support_2escm",(void*)f_7952},
{"f_5490:support_2escm",(void*)f_5490},
{"f_5492:support_2escm",(void*)f_5492},
{"f_11131:support_2escm",(void*)f_11131},
{"f_7789:support_2escm",(void*)f_7789},
{"f_7957:support_2escm",(void*)f_7957},
{"f_7772:support_2escm",(void*)f_7772},
{"f_14174:support_2escm",(void*)f_14174},
{"f_11159:support_2escm",(void*)f_11159},
{"f_7760:support_2escm",(void*)f_7760},
{"f_14165:support_2escm",(void*)f_14165},
{"f_5448:support_2escm",(void*)f_5448},
{"f_8769:support_2escm",(void*)f_8769},
{"f_8763:support_2escm",(void*)f_8763},
{"f_7757:support_2escm",(void*)f_7757},
{"f_14192:support_2escm",(void*)f_14192},
{"f_13327:support_2escm",(void*)f_13327},
{"f_7742:support_2escm",(void*)f_7742},
{"f_10827:support_2escm",(void*)f_10827},
{"f_14185:support_2escm",(void*)f_14185},
{"f_14189:support_2escm",(void*)f_14189},
{"f_13331:support_2escm",(void*)f_13331},
{"f_13334:support_2escm",(void*)f_13334},
{"f_8704:support_2escm",(void*)f_8704},
{"f_9369:support_2escm",(void*)f_9369},
{"f_13347:support_2escm",(void*)f_13347},
{"f_13348:support_2escm",(void*)f_13348},
{"f_13341:support_2escm",(void*)f_13341},
{"f_13340:support_2escm",(void*)f_13340},
{"f_9367:support_2escm",(void*)f_9367},
{"f_9358:support_2escm",(void*)f_9358},
{"f_7727:support_2escm",(void*)f_7727},
{"f_13354:support_2escm",(void*)f_13354},
{"f_9354:support_2escm",(void*)f_9354},
{"f_7549:support_2escm",(void*)f_7549},
{"f_7547:support_2escm",(void*)f_7547},
{"f_7700:support_2escm",(void*)f_7700},
{"f_7702:support_2escm",(void*)f_7702},
{"f_14579:support_2escm",(void*)f_14579},
{"f_14572:support_2escm",(void*)f_14572},
{"f_14577:support_2escm",(void*)f_14577},
{"f_14575:support_2escm",(void*)f_14575},
{"f_13380:support_2escm",(void*)f_13380},
{"f_13386:support_2escm",(void*)f_13386},
{"f_14561:support_2escm",(void*)f_14561},
{"f_14566:support_2escm",(void*)f_14566},
{"f_13390:support_2escm",(void*)f_13390},
{"f_14592:support_2escm",(void*)f_14592},
{"f_14594:support_2escm",(void*)f_14594},
{"f_7279:support_2escm",(void*)f_7279},
{"f_7277:support_2escm",(void*)f_7277},
{"f_7271:support_2escm",(void*)f_7271},
{"f_14581:support_2escm",(void*)f_14581},
{"f_10375:support_2escm",(void*)f_10375},
{"f_14586:support_2escm",(void*)f_14586},
{"f_10383:support_2escm",(void*)f_10383},
{"f_10377:support_2escm",(void*)f_10377},
{"f_10353:support_2escm",(void*)f_10353},
{"f_10363:support_2escm",(void*)f_10363},
{"f_10090:support_2escm",(void*)f_10090},
{"f_7539:support_2escm",(void*)f_7539},
{"f_9329:support_2escm",(void*)f_9329},
{"f_7528:support_2escm",(void*)f_7528},
{"f_7515:support_2escm",(void*)f_7515},
{"f_10754:support_2escm",(void*)f_10754},
{"f_7503:support_2escm",(void*)f_7503},
{"f_7506:support_2escm",(void*)f_7506},
{"f_7574:support_2escm",(void*)f_7574},
{"f_10730:support_2escm",(void*)f_10730},
{"f_10725:support_2escm",(void*)f_10725},
{"f_7904:support_2escm",(void*)f_7904},
{"f_10400:support_2escm",(void*)f_10400},
{"f_12684:support_2escm",(void*)f_12684},
{"f_10406:support_2escm",(void*)f_10406},
{"f_6727:support_2escm",(void*)f_6727},
{"f_6725:support_2escm",(void*)f_6725},
{"f_6723:support_2escm",(void*)f_6723},
{"f_6721:support_2escm",(void*)f_6721},
{"f_10414:support_2escm",(void*)f_10414},
{"f_10412:support_2escm",(void*)f_10412},
{"f_10006:support_2escm",(void*)f_10006},
{"f_13362:support_2escm",(void*)f_13362},
{"f_10420:support_2escm",(void*)f_10420},
{"f_12662:support_2escm",(void*)f_12662},
{"f_10719:support_2escm",(void*)f_10719},
{"f_11626:support_2escm",(void*)f_11626},
{"f_11623:support_2escm",(void*)f_11623},
{"f_5682:support_2escm",(void*)f_5682},
{"f_5680:support_2escm",(void*)f_5680},
{"f_10434:support_2escm",(void*)f_10434},
{"f_10021:support_2escm",(void*)f_10021},
{"f_11630:support_2escm",(void*)f_11630},
{"f_7946:support_2escm",(void*)f_7946},
{"f_10440:support_2escm",(void*)f_10440},
{"f_7921:support_2escm",(void*)f_7921},
{"f_14600:support_2escm",(void*)f_14600},
{"f_13946:support_2escm",(void*)f_13946},
{"f_10450:support_2escm",(void*)f_10450},
{"f_10043:support_2escm",(void*)f_10043},
{"f_10048:support_2escm",(void*)f_10048},
{"f_11658:support_2escm",(void*)f_11658},
{"f_11653:support_2escm",(void*)f_11653},
{"f_13912:support_2escm",(void*)f_13912},
{"f_13917:support_2escm",(void*)f_13917},
{"f_10054:support_2escm",(void*)f_10054},
{"f_7902:support_2escm",(void*)f_7902},
{"f_10468:support_2escm",(void*)f_10468},
{"f_10059:support_2escm",(void*)f_10059},
{"f_7919:support_2escm",(void*)f_7919},
{"f_13969:support_2escm",(void*)f_13969},
{"f_10705:support_2escm",(void*)f_10705},
{"f_13935:support_2escm",(void*)f_13935},
{"f_5696:support_2escm",(void*)f_5696},
{"f_13930:support_2escm",(void*)f_13930},
{"f_11600:support_2escm",(void*)f_11600},
{"f_13907:support_2escm",(void*)f_13907},
{"f_13903:support_2escm",(void*)f_13903},
{"f_4897:support_2escm",(void*)f_4897},
{"f_11617:support_2escm",(void*)f_11617},
{"f_6295:support_2escm",(void*)f_6295},
{"f_6297:support_2escm",(void*)f_6297},
{"f_6291:support_2escm",(void*)f_6291},
{"f_13922:support_2escm",(void*)f_13922},
{"f_13928:support_2escm",(void*)f_13928},
{"f_10768:support_2escm",(void*)f_10768},
{"f_4996:support_2escm",(void*)f_4996},
{"f_4888:support_2escm",(void*)f_4888},
{"f_4882:support_2escm",(void*)f_4882},
{"f_4880:support_2escm",(void*)f_4880},
{"f_11664:support_2escm",(void*)f_11664},
{"f_5000:support_2escm",(void*)f_5000},
{"f_4977:support_2escm",(void*)f_4977},
{"f_4975:support_2escm",(void*)f_4975},
{"f_4970:support_2escm",(void*)f_4970},
{"f_5006:support_2escm",(void*)f_5006},
{"f_4878:support_2escm",(void*)f_4878},
{"f_4876:support_2escm",(void*)f_4876},
{"f_4870:support_2escm",(void*)f_4870},
{"f_4979:support_2escm",(void*)f_4979},
{"f_11673:support_2escm",(void*)f_11673},
{"f_11681:support_2escm",(void*)f_11681},
{"f_11692:support_2escm",(void*)f_11692},
{"f_9697:support_2escm",(void*)f_9697},
{"f_9681:support_2escm",(void*)f_9681},
{"f_9688:support_2escm",(void*)f_9688},
{"f_9657:support_2escm",(void*)f_9657},
{"f_6981:support_2escm",(void*)f_6981},
{"f_13660:support_2escm",(void*)f_13660},
{"f_13667:support_2escm",(void*)f_13667},
{"f_6973:support_2escm",(void*)f_6973},
{"f_6975:support_2escm",(void*)f_6975},
{"f_9675:support_2escm",(void*)f_9675},
{"f_9674:support_2escm",(void*)f_9674},
{"f_6987:support_2escm",(void*)f_6987},
{"f_9666:support_2escm",(void*)f_9666},
{"f_9662:support_2escm",(void*)f_9662},
{"f_9668:support_2escm",(void*)f_9668},
{"f_9610:support_2escm",(void*)f_9610},
{"f_9601:support_2escm",(void*)f_9601},
{"f_10876:support_2escm",(void*)f_10876},
{"f_10874:support_2escm",(void*)f_10874},
{"f_9607:support_2escm",(void*)f_9607},
{"f_13545:support_2escm",(void*)f_13545},
{"f_9632:support_2escm",(void*)f_9632},
{"f_9630:support_2escm",(void*)f_9630},
{"f_10888:support_2escm",(void*)f_10888},
{"f_9298:support_2escm",(void*)f_9298},
{"f_8654:support_2escm",(void*)f_8654},
{"f_9285:support_2escm",(void*)f_9285},
{"f_9287:support_2escm",(void*)f_9287},
{"f_8664:support_2escm",(void*)f_8664},
{"f_6996:support_2escm",(void*)f_6996},
{"f_8670:support_2escm",(void*)f_8670},
{"f_8679:support_2escm",(void*)f_8679},
{"f_8677:support_2escm",(void*)f_8677},
{"f_13500:support_2escm",(void*)f_13500},
{"f_5763:support_2escm",(void*)f_5763},
{"f_9960:support_2escm",(void*)f_9960},
{"f_13519:support_2escm",(void*)f_13519},
{"f_13510:support_2escm",(void*)f_13510},
{"f_8620:support_2escm",(void*)f_8620},
{"f_9952:support_2escm",(void*)f_9952},
{"f_8633:support_2escm",(void*)f_8633},
{"f_5701:support_2escm",(void*)f_5701},
{"f_8636:support_2escm",(void*)f_8636},
{"f_9984:support_2escm",(void*)f_9984},
{"f_10127:support_2escm",(void*)f_10127},
{"f_5716:support_2escm",(void*)f_5716},
{"f_10122:support_2escm",(void*)f_10122},
{"f_5191:support_2escm",(void*)f_5191},
{"f_10134:support_2escm",(void*)f_10134},
{"f_10132:support_2escm",(void*)f_10132},
{"f_5732:support_2escm",(void*)f_5732},
{"f_5734:support_2escm",(void*)f_5734},
{"f_9918:support_2escm",(void*)f_9918},
{"f_9911:support_2escm",(void*)f_9911},
{"f_10180:support_2escm",(void*)f_10180},
{"f_10116:support_2escm",(void*)f_10116},
{"f_5740:support_2escm",(void*)f_5740},
{"f_9948:support_2escm",(void*)f_9948},
{"f_10111:support_2escm",(void*)f_10111},
{"f_9943:support_2escm",(void*)f_9943},
{"f_10784:support_2escm",(void*)f_10784},
{"f_5183:support_2escm",(void*)f_5183},
{"f_5186:support_2escm",(void*)f_5186},
{"f_6652:support_2escm",(void*)f_6652},
{"f_6650:support_2escm",(void*)f_6650},
{"f_9934:support_2escm",(void*)f_9934},
{"f_6640:support_2escm",(void*)f_6640},
{"f_10148:support_2escm",(void*)f_10148},
{"f_10140:support_2escm",(void*)f_10140},
{"f_10142:support_2escm",(void*)f_10142},
{"f_9902:support_2escm",(void*)f_9902},
{"f_9907:support_2escm",(void*)f_9907},
{"f_5777:support_2escm",(void*)f_5777},
{"f_13535:support_2escm",(void*)f_13535},
{"f_13530:support_2escm",(void*)f_13530},
{"f_13210:support_2escm",(void*)f_13210},
{"f_5789:support_2escm",(void*)f_5789},
{"f_5785:support_2escm",(void*)f_5785},
{"f_5165:support_2escm",(void*)f_5165},
{"f_5995:support_2escm",(void*)f_5995},
{"f_5139:support_2escm",(void*)f_5139},
{"f_10105:support_2escm",(void*)f_10105},
{"f_13238:support_2escm",(void*)f_13238},
{"f_5991:support_2escm",(void*)f_5991},
{"f_5993:support_2escm",(void*)f_5993},
{"f_5133:support_2escm",(void*)f_5133},
{"f_13204:support_2escm",(void*)f_13204},
{"f_13203:support_2escm",(void*)f_13203},
{"f_13250:support_2escm",(void*)f_13250},
{"f_12419:support_2escm",(void*)f_12419},
{"f_12414:support_2escm",(void*)f_12414},
{"f_5987:support_2escm",(void*)f_5987},
{"f_13229:support_2escm",(void*)f_13229},
{"f_13222:support_2escm",(void*)f_13222},
{"f_12423:support_2escm",(void*)f_12423},
{"f_13295:support_2escm",(void*)f_13295},
{"f_9484:support_2escm",(void*)f_9484},
{"f_6628:support_2escm",(void*)f_6628},
{"f_9487:support_2escm",(void*)f_9487},
{"f_6602:support_2escm",(void*)f_6602},
{"f_6600:support_2escm",(void*)f_6600},
{"f_13265:support_2escm",(void*)f_13265},
{"f_9471:support_2escm",(void*)f_9471},
{"f_6414:support_2escm",(void*)f_6414},
{"f_6608:support_2escm",(void*)f_6608},
{"f_13286:support_2escm",(void*)f_13286},
{"f_9493:support_2escm",(void*)f_9493},
{"f_9499:support_2escm",(void*)f_9499},
{"f_9497:support_2escm",(void*)f_9497},
{"f_10476:support_2escm",(void*)f_10476},
{"f_10485:support_2escm",(void*)f_10485},
{"f_6429:support_2escm",(void*)f_6429},
{"f_6427:support_2escm",(void*)f_6427},
{"f_6425:support_2escm",(void*)f_6425},
{"f_6420:support_2escm",(void*)f_6420},
{"f_5614:support_2escm",(void*)f_5614},
{"f_10496:support_2escm",(void*)f_10496},
{"f_6488:support_2escm",(void*)f_6488},
{"f_9596:support_2escm",(void*)f_9596},
{"f_7196:support_2escm",(void*)f_7196},
{"f_7190:support_2escm",(void*)f_7190},
{"f_7188:support_2escm",(void*)f_7188},
{"f_6065:support_2escm",(void*)f_6065},
{"f_13997:support_2escm",(void*)f_13997},
{"f_13995:support_2escm",(void*)f_13995},
{"f_6440:support_2escm",(void*)f_6440},
{"f_9545:support_2escm",(void*)f_9545},
{"f_9558:support_2escm",(void*)f_9558},
{"f_9571:support_2escm",(void*)f_9571},
{"f_5641:support_2escm",(void*)f_5641},
{"f_5645:support_2escm",(void*)f_5645},
{"f_13982:support_2escm",(void*)f_13982},
{"f_9564:support_2escm",(void*)f_9564},
{"f_13987:support_2escm",(void*)f_13987},
{"f_13271:support_2escm",(void*)f_13271},
{"f_13279:support_2escm",(void*)f_13279},
{"f_9569:support_2escm",(void*)f_9569},
{"f_13954:support_2escm",(void*)f_13954},
{"f_6406:support_2escm",(void*)f_6406},
{"f_7486:support_2escm",(void*)f_7486},
{"f_7480:support_2escm",(void*)f_7480},
{"f_9501:support_2escm",(void*)f_9501},
{"f_9503:support_2escm",(void*)f_9503},
{"f_9519:support_2escm",(void*)f_9519},
{"f_6438:support_2escm",(void*)f_6438},
{"f_9533:support_2escm",(void*)f_9533},
{"f_13977:support_2escm",(void*)f_13977},
{"f_9509:support_2escm",(void*)f_9509},
{"f_9743:support_2escm",(void*)f_9743},
{"f_9527:support_2escm",(void*)f_9527},
{"f_9525:support_2escm",(void*)f_9525},
{"f_9539:support_2escm",(void*)f_9539},
{"f_11559:support_2escm",(void*)f_11559},
{"f_11554:support_2escm",(void*)f_11554},
{"f_13824:support_2escm",(void*)f_13824},
{"f_13821:support_2escm",(void*)f_13821},
{"f_9556:support_2escm",(void*)f_9556},
{"f_9550:support_2escm",(void*)f_9550},
{"f_9764:support_2escm",(void*)f_9764},
{"f_9766:support_2escm",(void*)f_9766},
{"f_13832:support_2escm",(void*)f_13832},
{"f_10199:support_2escm",(void*)f_10199},
{"f_14260:support_2escm",(void*)f_14260},
{"f_14264:support_2escm",(void*)f_14264},
{"f_9752:support_2escm",(void*)f_9752},
{"f_7250:support_2escm",(void*)f_7250},
{"f_7253:support_2escm",(void*)f_7253},
{"f_7256:support_2escm",(void*)f_7256},
{"f_7258:support_2escm",(void*)f_7258},
{"f_14204:support_2escm",(void*)f_14204},
{"f_10193:support_2escm",(void*)f_10193},
{"f_14207:support_2escm",(void*)f_14207},
{"f_13850:support_2escm",(void*)f_13850},
{"f_13857:support_2escm",(void*)f_13857},
{"f_10166:support_2escm",(void*)f_10166},
{"f_10165:support_2escm",(void*)f_10165},
{"f_8112:support_2escm",(void*)f_8112},
{"f_9055:support_2escm",(void*)f_9055},
{"f_9058:support_2escm",(void*)f_9058},
{"f_8118:support_2escm",(void*)f_8118},
{"f_14223:support_2escm",(void*)f_14223},
{"f_9511:support_2escm",(void*)f_9511},
{"f_10172:support_2escm",(void*)f_10172},
{"f_9517:support_2escm",(void*)f_9517},
{"f_14229:support_2escm",(void*)f_14229},
{"f_8121:support_2escm",(void*)f_8121},
{"f_9047:support_2escm",(void*)f_9047},
{"f_8128:support_2escm",(void*)f_8128},
{"f_8127:support_2escm",(void*)f_8127},
{"f_6087:support_2escm",(void*)f_6087},
{"f_6086:support_2escm",(void*)f_6086},
{"f_6089:support_2escm",(void*)f_6089},
{"f_10159:support_2escm",(void*)f_10159},
{"f_9793:support_2escm",(void*)f_9793},
{"f_13804:support_2escm",(void*)f_13804},
{"f_14240:support_2escm",(void*)f_14240},
{"f_10156:support_2escm",(void*)f_10156},
{"f_10150:support_2escm",(void*)f_10150},
{"f_9738:support_2escm",(void*)f_9738},
{"f_9730:support_2escm",(void*)f_9730},
{"f_14238:support_2escm",(void*)f_14238},
{"f_9735:support_2escm",(void*)f_9735},
{"f_6496:support_2escm",(void*)f_6496},
{"f_6494:support_2escm",(void*)f_6494},
{"f_6492:support_2escm",(void*)f_6492},
{"f_6490:support_2escm",(void*)f_6490},
{"f_10276:support_2escm",(void*)f_10276},
{"f_10279:support_2escm",(void*)f_10279},
{"f_14251:support_2escm",(void*)f_14251},
{"f_9033:support_2escm",(void*)f_9033},
{"f_6479:support_2escm",(void*)f_6479},
{"f_14255:support_2escm",(void*)f_14255},
{"f_6474:support_2escm",(void*)f_6474},
{"f_6470:support_2escm",(void*)f_6470},
{"f_9038:support_2escm",(void*)f_9038},
{"f_11571:support_2escm",(void*)f_11571},
{"f_14281:support_2escm",(void*)f_14281},
{"f_11588:support_2escm",(void*)f_11588},
{"f_8185:support_2escm",(void*)f_8185},
{"f_9772:support_2escm",(void*)f_9772},
{"f_7231:support_2escm",(void*)f_7231},
{"f_7239:support_2escm",(void*)f_7239},
{"f_9723:support_2escm",(void*)f_9723},
{"f_9727:support_2escm",(void*)f_9727},
{"f_9726:support_2escm",(void*)f_9726},
{"f_10201:support_2escm",(void*)f_10201},
{"f_14292:support_2escm",(void*)f_14292},
{"f_10207:support_2escm",(void*)f_10207},
{"f_8134:support_2escm",(void*)f_8134},
{"f_8135:support_2escm",(void*)f_8135},
{"f_8141:support_2escm",(void*)f_8141},
{"f_8149:support_2escm",(void*)f_8149},
{"f_8158:support_2escm",(void*)f_8158},
{"f_13560:support_2escm",(void*)f_13560},
{"f_13569:support_2escm",(void*)f_13569},
{"f_8160:support_2escm",(void*)f_8160},
{"toplevel:support_2escm",(void*)C_support_toplevel},
{"f_8102:support_2escm",(void*)f_8102},
{"f_8104:support_2escm",(void*)f_8104},
{"f_13599:support_2escm",(void*)f_13599},
{"f_12087:support_2escm",(void*)f_12087},
{"f_12083:support_2escm",(void*)f_12083},
{"f_9176:support_2escm",(void*)f_9176},
{"f_13447:support_2escm",(void*)f_13447},
{"f_12067:support_2escm",(void*)f_12067},
{"f_13456:support_2escm",(void*)f_13456},
{"f_12078:support_2escm",(void*)f_12078},
{"f_9198:support_2escm",(void*)f_9198},
{"f_7389:support_2escm",(void*)f_7389},
{"f_9196:support_2escm",(void*)f_9196},
{"f_6594:support_2escm",(void*)f_6594},
{"f_12045:support_2escm",(void*)f_12045},
{"f_12040:support_2escm",(void*)f_12040},
{"f_6584:support_2escm",(void*)f_6584},
{"f_6586:support_2escm",(void*)f_6586},
{"f_12058:support_2escm",(void*)f_12058},
{"f_5245:support_2escm",(void*)f_5245},
{"f_7052:support_2escm",(void*)f_7052},
{"f_7049:support_2escm",(void*)f_7049},
{"f_7043:support_2escm",(void*)f_7043},
{"f_7041:support_2escm",(void*)f_7041},
{"f_12756:support_2escm",(void*)f_12756},
{"f_13413:support_2escm",(void*)f_13413},
{"f_5221:support_2escm",(void*)f_5221},
{"f_7346:support_2escm",(void*)f_7346},
{"f_6556:support_2escm",(void*)f_6556},
{"f_5228:support_2escm",(void*)f_5228},
{"f_6554:support_2escm",(void*)f_6554},
{"f_7032:support_2escm",(void*)f_7032},
{"f_5230:support_2escm",(void*)f_5230},
{"f_5237:support_2escm",(void*)f_5237},
{"f_6548:support_2escm",(void*)f_6548},
{"f_14027:support_2escm",(void*)f_14027},
{"f_5239:support_2escm",(void*)f_5239},
{"f_7023:support_2escm",(void*)f_7023},
{"f_6542:support_2escm",(void*)f_6542},
{"f_6540:support_2escm",(void*)f_6540},
{"f_14022:support_2escm",(void*)f_14022},
{"f_6578:support_2escm",(void*)f_6578},
{"f_7014:support_2escm",(void*)f_7014},
{"f_6570:support_2escm",(void*)f_6570},
{"f_6572:support_2escm",(void*)f_6572},
{"f_5213:support_2escm",(void*)f_5213},
{"f_5216:support_2escm",(void*)f_5216},
{"f_5219:support_2escm",(void*)f_5219},
{"f_6564:support_2escm",(void*)f_6564},
{"f_7005:support_2escm",(void*)f_7005},
{"f_5311:support_2escm",(void*)f_5311},
{"f_5317:support_2escm",(void*)f_5317},
{"f_4666:support_2escm",(void*)f_4666},
{"f_4664:support_2escm",(void*)f_4664},
{"f_7304:support_2escm",(void*)f_7304},
{"f_6515:support_2escm",(void*)f_6515},
{"f_7309:support_2escm",(void*)f_7309},
{"f_5323:support_2escm",(void*)f_5323},
{"f_5320:support_2escm",(void*)f_5320},
{"f_7334:support_2escm",(void*)f_7334},
{"f_6504:support_2escm",(void*)f_6504},
{"f_5328:support_2escm",(void*)f_5328},
{"f_7361:support_2escm",(void*)f_7361},
{"f_6534:support_2escm",(void*)f_6534},
{"f_6524:support_2escm",(void*)f_6524},
{"f_6526:support_2escm",(void*)f_6526},
{"f_5347:support_2escm",(void*)f_5347},
{"f_13421:support_2escm",(void*)f_13421},
{"f_5366:support_2escm",(void*)f_5366},
{"f_5362:support_2escm",(void*)f_5362},
{"f_13430:support_2escm",(void*)f_13430},
{"f_13197:support_2escm",(void*)f_13197},
{"f_13192:support_2escm",(void*)f_13192},
{"f_13194:support_2escm",(void*)f_13194},
{"f_5287:support_2escm",(void*)f_5287},
{"f_5290:support_2escm",(void*)f_5290},
{"f_5292:support_2escm",(void*)f_5292},
{"f_5386:support_2escm",(void*)f_5386},
{"f_5266:support_2escm",(void*)f_5266},
{"f_6058:support_2escm",(void*)f_6058},
{"f_13188:support_2escm",(void*)f_13188},
{"f_6042:support_2escm",(void*)f_6042},
{"f_6040:support_2escm",(void*)f_6040},
{"f_14069:support_2escm",(void*)f_14069},
{"f_5277:support_2escm",(void*)f_5277},
{"f_14066:support_2escm",(void*)f_14066},
{"f_14061:support_2escm",(void*)f_14061},
{"f_12117:support_2escm",(void*)f_12117},
{"f_4689:support_2escm",(void*)f_4689},
{"f_11022:support_2escm",(void*)f_11022},
{"f_6039:support_2escm",(void*)f_6039},
{"f_11020:support_2escm",(void*)f_11020},
{"f_5883:support_2escm",(void*)f_5883},
{"f_4676:support_2escm",(void*)f_4676},
{"f_14312:support_2escm",(void*)f_14312},
{"f_4670:support_2escm",(void*)f_4670},
{"f_5892:support_2escm",(void*)f_5892},
{"f_6338:support_2escm",(void*)f_6338},
{"f_5899:support_2escm",(void*)f_5899},
{"f_5895:support_2escm",(void*)f_5895},
{"f_14305:support_2escm",(void*)f_14305},
{"f_14303:support_2escm",(void*)f_14303},
{"f_6018:support_2escm",(void*)f_6018},
{"f_14317:support_2escm",(void*)f_14317},
{"f_6011:support_2escm",(void*)f_6011},
{"f_6356:support_2escm",(void*)f_6356},
{"f_5871:support_2escm",(void*)f_5871},
{"f_8998:support_2escm",(void*)f_8998},
{"f_5878:support_2escm",(void*)f_5878},
{"f_5877:support_2escm",(void*)f_5877},
{"f_9380:support_2escm",(void*)f_9380},
{"f_14095:support_2escm",(void*)f_14095},
{"f_14097:support_2escm",(void*)f_14097},
{"f_14099:support_2escm",(void*)f_14099},
{"f_6347:support_2escm",(void*)f_6347},
{"f_14091:support_2escm",(void*)f_14091},
{"f_9378:support_2escm",(void*)f_9378},
{"f_8351:support_2escm",(void*)f_8351},
{"f_5940:support_2escm",(void*)f_5940},
{"f_5944:support_2escm",(void*)f_5944},
{"f_6342:support_2escm",(void*)f_6342},
{"f_5842:support_2escm",(void*)f_5842},
{"f_5840:support_2escm",(void*)f_5840},
{"f_5845:support_2escm",(void*)f_5845},
{"f_14343:support_2escm",(void*)f_14343},
{"f_14340:support_2escm",(void*)f_14340},
{"f_6364:support_2escm",(void*)f_6364},
{"f_6368:support_2escm",(void*)f_6368},
{"f_6362:support_2escm",(void*)f_6362},
{"f_5823:support_2escm",(void*)f_5823},
{"f_8954:support_2escm",(void*)f_8954},
{"f_8957:support_2escm",(void*)f_8957},
{"f_8958:support_2escm",(void*)f_8958},
{"f_5829:support_2escm",(void*)f_5829},
{"f_14451:support_2escm",(void*)f_14451},
{"f_11099:support_2escm",(void*)f_11099},
{"f_11095:support_2escm",(void*)f_11095},
{"f_14057:support_2escm",(void*)f_14057},
{"f_6121:support_2escm",(void*)f_6121},
{"f_14052:support_2escm",(void*)f_14052},
{"f_5832:support_2escm",(void*)f_5832},
{"f_14455:support_2escm",(void*)f_14455},
{"f_5905:support_2escm",(void*)f_5905},
{"f_11034:support_2escm",(void*)f_11034},
{"f_6193:support_2escm",(void*)f_6193},
{"f_14443:support_2escm",(void*)f_14443},
{"f_14440:support_2escm",(void*)f_14440},
{"f_14083:support_2escm",(void*)f_14083},
{"f_14082:support_2escm",(void*)f_14082},
{"f_14089:support_2escm",(void*)f_14089},
{"f_5803:support_2escm",(void*)f_5803},
{"f_5804:support_2escm",(void*)f_5804},
{"f_5801:support_2escm",(void*)f_5801},
{"f_8973:support_2escm",(void*)f_8973},
{"f_5808:support_2escm",(void*)f_5808},
{"f_4750:support_2escm",(void*)f_4750},
{"f_14382:support_2escm",(void*)f_14382},
{"f_14386:support_2escm",(void*)f_14386},
{"f_14075:support_2escm",(void*)f_14075},
{"f_5813:support_2escm",(void*)f_5813},
{"f_14076:support_2escm",(void*)f_14076},
{"f_5818:support_2escm",(void*)f_5818},
{"f_4700:support_2escm",(void*)f_4700},
{"f_4707:support_2escm",(void*)f_4707},
{"f_8980:support_2escm",(void*)f_8980},
{"f_4703:support_2escm",(void*)f_4703},
{"f_8917:support_2escm",(void*)f_8917},
{"f_8911:support_2escm",(void*)f_8911},
{"f_4730:support_2escm",(void*)f_4730},
{"f_4736:support_2escm",(void*)f_4736},
{"f_11057:support_2escm",(void*)f_11057},
{"f_8927:support_2escm",(void*)f_8927},
{"f_8922:support_2escm",(void*)f_8922},
{"f_4761:support_2escm",(void*)f_4761},
{"f_4767:support_2escm",(void*)f_4767},
{"f_4765:support_2escm",(void*)f_4765},
{"f_10546:support_2escm",(void*)f_10546},
{"f_9842:support_2escm",(void*)f_9842},
{"f_6152:support_2escm",(void*)f_6152},
{"f_8937:support_2escm",(void*)f_8937},
{"f_14407:support_2escm",(void*)f_14407},
{"f_8932:support_2escm",(void*)f_8932},
{"f_8930:support_2escm",(void*)f_8930},
{"f_4718:support_2escm",(void*)f_4718},
{"f_4716:support_2escm",(void*)f_4716},
{"f_4713:support_2escm",(void*)f_4713},
{"f_10552:support_2escm",(void*)f_10552},
{"f_8939:support_2escm",(void*)f_8939},
{"f_6397:support_2escm",(void*)f_6397},
{"f_6391:support_2escm",(void*)f_6391},
{"f_8301:support_2escm",(void*)f_8301},
{"f_9894:support_2escm",(void*)f_9894},
{"f_8309:support_2escm",(void*)f_8309},
{"f_8307:support_2escm",(void*)f_8307},
{"f_8304:support_2escm",(void*)f_8304},
{"f_9896:support_2escm",(void*)f_9896},
{"f_9880:support_2escm",(void*)f_9880},
{"f_10507:support_2escm",(void*)f_10507},
{"f_4727:support_2escm",(void*)f_4727},
{"f_4726:support_2escm",(void*)f_4726},
{"f_9888:support_2escm",(void*)f_9888},
{"f_9886:support_2escm",(void*)f_9886},
{"f_7374:support_2escm",(void*)f_7374},
{"f_10500:support_2escm",(void*)f_10500},
{"f_10505:support_2escm",(void*)f_10505},
{"f_6112:support_2escm",(void*)f_6112},
{"f_9465:support_2escm",(void*)f_9465},
{"f_8320:support_2escm",(void*)f_8320},
{"f_6141:support_2escm",(void*)f_6141},
{"f_9825:support_2escm",(void*)f_9825},
{"f_9828:support_2escm",(void*)f_9828},
{"f_6132:support_2escm",(void*)f_6132},
{"f_5866:support_2escm",(void*)f_5866},
{"f_13887:support_2escm",(void*)f_13887},
{"f_13884:support_2escm",(void*)f_13884},
{"f_9211:support_2escm",(void*)f_9211},
{"f_9210:support_2escm",(void*)f_9210},
{"f_8867:support_2escm",(void*)f_8867},
{"f_6161:support_2escm",(void*)f_6161},
{"f_13892:support_2escm",(void*)f_13892},
{"f_13898:support_2escm",(void*)f_13898},
{"f_9203:support_2escm",(void*)f_9203},
{"f_9201:support_2escm",(void*)f_9201},
{"f_9208:support_2escm",(void*)f_9208},
{"f_13745:support_2escm",(void*)f_13745},
{"f_8884:support_2escm",(void*)f_8884},
{"f_14432:support_2escm",(void*)f_14432},
{"f_7168:support_2escm",(void*)f_7168},
{"f_4741:support_2escm",(void*)f_4741},
{"f_9222:support_2escm",(void*)f_9222},
{"f_8899:support_2escm",(void*)f_8899},
{"f_8896:support_2escm",(void*)f_8896},
{"f_14423:support_2escm",(void*)f_14423},
{"f_14429:support_2escm",(void*)f_14429},
{"f_10292:support_2escm",(void*)f_10292},
{"f_9815:support_2escm",(void*)f_9815},
{"f_8451:support_2escm",(void*)f_8451},
{"f_10298:support_2escm",(void*)f_10298},
{"f_9819:support_2escm",(void*)f_9819},
{"f_14361:support_2escm",(void*)f_14361},
{"f_8458:support_2escm",(void*)f_8458},
{"f_14364:support_2escm",(void*)f_14364},
{"f_7143:support_2escm",(void*)f_7143},
{"f_7141:support_2escm",(void*)f_7141},
{"f_12849:support_2escm",(void*)f_12849},
{"f_9800:support_2escm",(void*)f_9800},
{"f_9806:support_2escm",(void*)f_9806},
{"f15853:support_2escm",(void*)f15853},
{"f_10582:support_2escm",(void*)f_10582},
{"f_13786:support_2escm",(void*)f_13786},
{"f_9270:support_2escm",(void*)f_9270},
{"f_9276:support_2escm",(void*)f_9276},
{"f_12829:support_2escm",(void*)f_12829},
{"f_10591:support_2escm",(void*)f_10591},
{"f_13712:support_2escm",(void*)f_13712},
{"f_13710:support_2escm",(void*)f_13710},
{"f_10285:support_2escm",(void*)f_10285},
{"f_13725:support_2escm",(void*)f_13725},
{"f_9405:support_2escm",(void*)f_9405},
{"f_10253:support_2escm",(void*)f_10253},
{"f_10250:support_2escm",(void*)f_10250},
{"f_10259:support_2escm",(void*)f_10259},
{"f_10330:support_2escm",(void*)f_10330},
{"f_13733:support_2escm",(void*)f_13733},
{"f_10369:support_2escm",(void*)f_10369},
{"f_8873:support_2escm",(void*)f_8873},
{"f_9423:support_2escm",(void*)f_9423},
{"f_10336:support_2escm",(void*)f_10336},
{"f_9231:support_2escm",(void*)f_9231},
{"f_9233:support_2escm",(void*)f_9233},
{"f_6189:support_2escm",(void*)f_6189},
{"f_10347:support_2escm",(void*)f_10347},
{"f_6176:support_2escm",(void*)f_6176},
{"f_6172:support_2escm",(void*)f_6172},
{"f_10322:support_2escm",(void*)f_10322},
{"f_9258:support_2escm",(void*)f_9258},
{"f_9434:support_2escm",(void*)f_9434},
{"f_10328:support_2escm",(void*)f_10328},
{"f_7126:support_2escm",(void*)f_7126},
{"f_10931:support_2escm",(void*)f_10931},
{"f_7897:support_2escm",(void*)f_7897},
{"f_9264:support_2escm",(void*)f_9264},
{"f_7889:support_2escm",(void*)f_7889},
{"f_8418:support_2escm",(void*)f_8418},
{"f_7101:support_2escm",(void*)f_7101},
{"f_12886:support_2escm",(void*)f_12886},
{"f_7864:support_2escm",(void*)f_7864},
{"f_7862:support_2escm",(void*)f_7862},
{"f_8233:support_2escm",(void*)f_8233},
{"f_12865:support_2escm",(void*)f_12865},
{"f_8448:support_2escm",(void*)f_8448},
{"f_8208:support_2escm",(void*)f_8208},
{"f_8206:support_2escm",(void*)f_8206},
{"f_7846:support_2escm",(void*)f_7846},
{"f_7836:support_2escm",(void*)f_7836},
{"f_7649:support_2escm",(void*)f_7649},
{"f_10985:support_2escm",(void*)f_10985},
{"f_13497:support_2escm",(void*)f_13497},
{"f_10983:support_2escm",(void*)f_10983},
{"f_7811:support_2escm",(void*)f_7811},
{"f_14475:support_2escm",(void*)f_14475},
{"f_7809:support_2escm",(void*)f_7809},
{"f_14478:support_2escm",(void*)f_14478},
{"f_9064:support_2escm",(void*)f_9064},
{"f_9065:support_2escm",(void*)f_9065},
{"f_14460:support_2escm",(void*)f_14460},
{"f_14466:support_2escm",(void*)f_14466},
{"f_14465:support_2escm",(void*)f_14465},
{"f_7683:support_2escm",(void*)f_7683},
{"f_14493:support_2escm",(void*)f_14493},
{"f_9085:support_2escm",(void*)f_9085},
{"f_14488:support_2escm",(void*)f_14488},
{"f_10957:support_2escm",(void*)f_10957},
{"f_5569:support_2escm",(void*)f_5569},
{"f_5563:support_2escm",(void*)f_5563},
{"f_10908:support_2escm",(void*)f_10908},
{"f_14559:support_2escm",(void*)f_14559},
{"f_14555:support_2escm",(void*)f_14555},
{"f_5574:support_2escm",(void*)f_5574},
{"f_5572:support_2escm",(void*)f_5572},
{"f_7622:support_2escm",(void*)f_7622},
{"f_7624:support_2escm",(void*)f_7624},
{"f_14544:support_2escm",(void*)f_14544},
{"f_9072:support_2escm",(void*)f_9072},
{"f_9071:support_2escm",(void*)f_9071},
{"f_9078:support_2escm",(void*)f_9078},
{"f_5516:support_2escm",(void*)f_5516},
{"f_5528:support_2escm",(void*)f_5528},
{"f_8294:support_2escm",(void*)f_8294},
{"f_8291:support_2escm",(void*)f_8291},
{"f_8094:support_2escm",(void*)f_8094},
{"f_7603:support_2escm",(void*)f_7603},
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
S|  map		30
S|  sprintf		4
S|  fprintf		5
S|  printf		19
S|  for-each		15
o|eliminated procedure checks: 337 
o|specializations:
o|  1 (eqv? (not float) *)
o|  3 (= fixnum fixnum)
o|  1 (assq * list)
o|  1 (current-output-port)
o|  1 (second (pair * pair))
o|  3 (first pair)
o|  5 (cddr (pair * pair))
o|  1 (caddr (pair * (pair * pair)))
o|  349 (eqv? * (not float))
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (cadr (pair * pair))
o|  1 (current-input-port)
o|  3 (memq * list)
o|  1 (>= fixnum fixnum)
o|  3 (< fixnum fixnum)
o|  2 (current-error-port)
o|  8 (##sys#check-list (or pair list) *)
o|  31 (cdr pair)
o|  27 (car pair)
o|safe globals: (##compiler#bomb ##compiler#disabled-warnings ##compiler#debugging-chicken ##compiler#compiler-cleanup-hook constant25 constant22) 
o|Removed `not' forms: 7 
o|removed side-effect free assignment to unused variable: constant22 
o|inlining procedure: k4679 
o|inlining procedure: k4679 
o|inlining procedure: k4717 
o|inlining procedure: k4744 
o|inlining procedure: k4744 
o|inlining procedure: k4717 
o|propagated global variable: out7882 ##compiler#collected-debugging-output 
o|inlining procedure: k4771 
o|inlining procedure: k4771 
o|inlining procedure: k4822 
o|inlining procedure: k4822 
o|inlining procedure: k4837 
o|inlining procedure: k4837 
o|inlining procedure: k4857 
o|inlining procedure: k4857 
o|inlining procedure: k4871 
o|inlining procedure: k4871 
o|inlining procedure: k4945 
o|inlining procedure: k4945 
o|inlining procedure: k5009 
o|inlining procedure: k5009 
o|inlining procedure: k5063 
o|inlining procedure: k5063 
o|inlining procedure: k5082 
o|inlining procedure: k5082 
o|inlining procedure: k5110 
o|inlining procedure: k5110 
o|inlining procedure: k5142 
o|inlining procedure: k5142 
o|inlining procedure: k5168 
o|inlining procedure: k5168 
o|inlining procedure: k5194 
o|inlining procedure: k5194 
o|inlining procedure: k5248 
o|inlining procedure: k5248 
o|inlining procedure: k5295 
o|inlining procedure: k5295 
o|inlining procedure: k5332 
o|inlining procedure: k5332 
o|substituted constant variable: a5339 
o|substituted constant variable: a5341 
o|inlining procedure: k5352 
o|inlining procedure: k5352 
o|substituted constant variable: a5356 
o|substituted constant variable: a5358 
o|substituted constant variable: a5360 
o|inlining procedure: k5367 
o|inlining procedure: k5390 
o|inlining procedure: k5390 
o|inlining procedure: k5367 
o|inlining procedure: k5427 
o|propagated global variable: f_542614651 ##sys#standard-input 
o|inlining procedure: k5427 
o|inlining procedure: k5441 
o|inlining procedure: k5441 
o|inlining procedure: k5468 
o|inlining procedure: k5468 
o|inlining procedure: k5480 
o|inlining procedure: k5480 
o|inlining procedure: k5498 
o|inlining procedure: k5498 
o|inlining procedure: k5537 
o|inlining procedure: k5537 
o|inlining procedure: k5579 
o|inlining procedure: k5579 
o|inlining procedure: k5589 
o|inlining procedure: k5589 
o|inlining procedure: k5599 
o|inlining procedure: k5599 
o|inlining procedure: k5619 
o|inlining procedure: k5619 
o|inlining procedure: k5629 
o|inlining procedure: k5629 
o|inlining procedure: k5646 
o|inlining procedure: k5646 
o|inlining procedure: k5656 
o|inlining procedure: k5656 
o|inlining procedure: k5666 
o|inlining procedure: k5666 
o|inlining procedure: k5687 
o|inlining procedure: k5687 
o|inlining procedure: k5697 
o|inlining procedure: k5697 
o|inlining procedure: k5705 
o|inlining procedure: k5705 
o|inlining procedure: k5743 
o|inlining procedure: k5743 
o|inlining procedure: k5755 
o|inlining procedure: k5755 
o|inlining procedure: k5790 
o|inlining procedure: k5790 
o|inlining procedure: k5828 
o|inlining procedure: k5828 
o|inlining procedure: k5846 
o|inlining procedure: k5846 
o|inlining procedure: k5908 
o|inlining procedure: k5908 
o|inlining procedure: k5921 
o|inlining procedure: k5921 
o|inlining procedure: k6012 
o|inlining procedure: k6012 
o|inlining procedure: k6059 
o|inlining procedure: k6059 
o|inlining procedure: k5990 
o|inlining procedure: k6115 
o|inlining procedure: k6115 
o|propagated global variable: g631633 ##compiler#internal-bindings 
o|inlining procedure: k6135 
o|inlining procedure: k6135 
o|propagated global variable: g582584 extended-bindings 
o|inlining procedure: k6155 
o|inlining procedure: k6155 
o|propagated global variable: g533535 standard-bindings 
o|inlining procedure: k5990 
o|inlining procedure: k6177 
o|inlining procedure: k6177 
o|inlining procedure: k6194 
o|inlining procedure: k6194 
o|inlining procedure: k6211 
o|inlining procedure: k6222 
o|inlining procedure: k6222 
o|inlining procedure: k6211 
o|inlining procedure: k6252 
o|inlining procedure: k6252 
o|inlining procedure: k6298 
o|inlining procedure: k6298 
o|inlining procedure: k6343 
o|inlining procedure: k6343 
o|inlining procedure: k6365 
o|inlining procedure: k6365 
o|inlining procedure: k6402 
o|inlining procedure: k6402 
o|inlining procedure: k6422 
o|inlining procedure: k6443 
o|inlining procedure: k6443 
o|propagated global variable: out744748 ##sys#standard-output 
o|inlining procedure: k6422 
o|inlining procedure: k6481 
o|inlining procedure: k6481 
o|propagated global variable: out965969 ##sys#standard-output 
o|propagated global variable: out956960 ##sys#standard-output 
o|propagated global variable: out909913 ##sys#standard-output 
o|inlining procedure: k6549 
o|propagated global variable: out925929 ##sys#standard-output 
o|inlining procedure: k6549 
o|propagated global variable: out941945 ##sys#standard-output 
o|inlining procedure: k6631 
o|substituted constant variable: names779 
o|propagated global variable: out859863 ##sys#standard-output 
o|inlining procedure: k6665 
o|inlining procedure: k6665 
o|inlining procedure: k6678 
o|inlining procedure: k6678 
o|inlining procedure: k6688 
o|inlining procedure: k6688 
o|inlining procedure: k6714 
o|propagated global variable: out892896 ##sys#standard-output 
o|inlining procedure: k6714 
o|inlining procedure: k6747 
o|inlining procedure: k6747 
o|substituted constant variable: a6763 
o|substituted constant variable: a6765 
o|inlining procedure: k6768 
o|inlining procedure: k6768 
o|inlining procedure: k6778 
o|inlining procedure: k6778 
o|inlining procedure: k6788 
o|inlining procedure: k6788 
o|inlining procedure: k6798 
o|inlining procedure: k6798 
o|substituted constant variable: a6805 
o|substituted constant variable: a6807 
o|substituted constant variable: a6809 
o|substituted constant variable: a6811 
o|substituted constant variable: a6813 
o|substituted constant variable: a6815 
o|substituted constant variable: a6817 
o|substituted constant variable: a6819 
o|substituted constant variable: a6821 
o|substituted constant variable: a6823 
o|substituted constant variable: a6825 
o|substituted constant variable: a6827 
o|substituted constant variable: a6829 
o|inlining procedure: k6832 
o|inlining procedure: k6832 
o|inlining procedure: k6842 
o|inlining procedure: k6842 
o|inlining procedure: k6852 
o|inlining procedure: k6852 
o|inlining procedure: k6862 
o|inlining procedure: k6862 
o|inlining procedure: k6872 
o|inlining procedure: k6872 
o|inlining procedure: k6882 
o|inlining procedure: k6882 
o|inlining procedure: k6892 
o|inlining procedure: k6892 
o|inlining procedure: k6902 
o|inlining procedure: k6902 
o|inlining procedure: k6912 
o|inlining procedure: k6912 
o|inlining procedure: k6922 
o|inlining procedure: k6922 
o|substituted constant variable: a6929 
o|substituted constant variable: a6931 
o|substituted constant variable: a6933 
o|substituted constant variable: a6935 
o|substituted constant variable: a6937 
o|substituted constant variable: a6939 
o|substituted constant variable: a6941 
o|substituted constant variable: a6943 
o|substituted constant variable: a6945 
o|substituted constant variable: a6947 
o|substituted constant variable: a6949 
o|substituted constant variable: a6951 
o|substituted constant variable: a6953 
o|substituted constant variable: a6955 
o|substituted constant variable: a6957 
o|substituted constant variable: a6959 
o|substituted constant variable: a6961 
o|substituted constant variable: a6963 
o|substituted constant variable: a6965 
o|substituted constant variable: a6967 
o|substituted constant variable: a6969 
o|inlining procedure: k6631 
o|inlining procedure: k7084 
o|inlining procedure: k7084 
o|inlining procedure: k7102 
o|inlining procedure: k7102 
o|inlining procedure: k7118 
o|inlining procedure: k7146 
o|inlining procedure: k7146 
o|inlining procedure: k7118 
o|inlining procedure: k7184 
o|inlining procedure: k7184 
o|inlining procedure: k7200 
o|inlining procedure: k7200 
o|inlining procedure: k7212 
o|inlining procedure: k7241 
o|inlining procedure: k7241 
o|inlining procedure: k7282 
o|inlining procedure: k7282 
o|inlining procedure: k7312 
o|inlining procedure: k7312 
o|inlining procedure: k7212 
o|inlining procedure: k7368 
o|inlining procedure: k7368 
o|inlining procedure: k7418 
o|inlining procedure: k7418 
o|inlining procedure: k7520 
o|inlining procedure: k7552 
o|inlining procedure: k7552 
o|inlining procedure: k7579 
o|inlining procedure: k7579 
o|inlining procedure: k7520 
o|inlining procedure: k7627 
o|inlining procedure: k7627 
o|inlining procedure: k7656 
o|inlining procedure: k7656 
o|inlining procedure: k7705 
o|inlining procedure: k7705 
o|inlining procedure: k7734 
o|inlining procedure: k7734 
o|inlining procedure: k7814 
o|inlining procedure: k7814 
o|inlining procedure: k7840 
o|inlining procedure: k7867 
o|inlining procedure: k7867 
o|inlining procedure: k7840 
o|inlining procedure: k7924 
o|inlining procedure: k7924 
o|inlining procedure: k7954 
o|inlining procedure: k7962 
o|inlining procedure: k7962 
o|inlining procedure: k7954 
o|substituted constant variable: a7983 
o|inlining procedure: k7986 
o|inlining procedure: k7986 
o|inlining procedure: k7996 
o|inlining procedure: k7996 
o|substituted constant variable: a8003 
o|substituted constant variable: a8005 
o|substituted constant variable: a8007 
o|substituted constant variable: a8009 
o|substituted constant variable: a8011 
o|substituted constant variable: a8013 
o|substituted constant variable: a8018 
o|substituted constant variable: a8020 
o|substituted constant variable: a8022 
o|substituted constant variable: a8027 
o|substituted constant variable: a8029 
o|substituted constant variable: a8031 
o|substituted constant variable: a8033 
o|substituted constant variable: a8035 
o|substituted constant variable: a8040 
o|substituted constant variable: a8042 
o|substituted constant variable: a8044 
o|substituted constant variable: a8046 
o|substituted constant variable: a8051 
o|substituted constant variable: a8053 
o|inlining procedure: k8072 
o|inlining procedure: k8072 
o|inlining procedure: k8103 
o|inlining procedure: k8103 
o|inlining procedure: k8142 
o|inlining procedure: k8163 
o|inlining procedure: k8163 
o|inlining procedure: k8142 
o|inlining procedure: k8211 
o|inlining procedure: k8211 
o|inlining procedure: k8237 
o|inlining procedure: k8237 
o|inlining procedure: k8254 
o|inlining procedure: k8254 
o|inlining procedure: k8269 
o|inlining procedure: k8269 
o|inlining procedure: k8280 
o|inlining procedure: k8312 
o|inlining procedure: k8312 
o|inlining procedure: k8354 
o|inlining procedure: k8354 
o|inlining procedure: k8280 
o|inlining procedure: k8404 
o|inlining procedure: k8404 
o|inlining procedure: k8434 
o|inlining procedure: k8461 
o|inlining procedure: k8461 
o|inlining procedure: k8434 
o|inlining procedure: k8524 
o|inlining procedure: k8524 
o|inlining procedure: k8550 
o|inlining procedure: k8572 
o|inlining procedure: k8572 
o|inlining procedure: k8550 
o|inlining procedure: k8607 
o|inlining procedure: k8623 
o|inlining procedure: k8623 
o|inlining procedure: k8607 
o|inlining procedure: k8682 
o|inlining procedure: k8682 
o|inlining procedure: k8711 
o|inlining procedure: k8732 
o|inlining procedure: k8732 
o|inlining procedure: k8711 
o|inlining procedure: k8774 
o|inlining procedure: k8774 
o|substituted constant variable: a8804 
o|substituted constant variable: a8806 
o|inlining procedure: k8809 
o|inlining procedure: k8809 
o|substituted constant variable: a8821 
o|substituted constant variable: a8823 
o|substituted constant variable: a8825 
o|substituted constant variable: a8827 
o|substituted constant variable: a8829 
o|substituted constant variable: a8831 
o|substituted constant variable: a8833 
o|substituted constant variable: a8835 
o|substituted constant variable: a8837 
o|substituted constant variable: a8839 
o|substituted constant variable: a8841 
o|substituted constant variable: a8843 
o|substituted constant variable: a8845 
o|substituted constant variable: a8847 
o|substituted constant variable: a8849 
o|substituted constant variable: a8851 
o|inlining procedure: k8854 
o|inlining procedure: k8854 
o|substituted constant variable: a8861 
o|substituted constant variable: a8863 
o|substituted constant variable: a8865 
o|inlining procedure: k8876 
o|inlining procedure: k8876 
o|inlining procedure: k8972 
o|inlining procedure: k8972 
o|inlining procedure: k9011 
o|inlining procedure: k9011 
o|inlining procedure: k9079 
o|inlining procedure: k9079 
o|inlining procedure: "(support.scm:724) rename1895" 
o|inlining procedure: k9114 
o|inlining procedure: "(support.scm:727) rename1895" 
o|inlining procedure: k9114 
o|inlining procedure: k9183 
o|inlining procedure: k9236 
o|inlining procedure: k9236 
o|inlining procedure: k9275 
o|inlining procedure: "(support.scm:751) rename1895" 
o|inlining procedure: k9275 
o|inlining procedure: k9290 
o|inlining procedure: k9290 
o|inlining procedure: k9332 
o|inlining procedure: k9332 
o|inlining procedure: k9183 
o|inlining procedure: k9383 
o|inlining procedure: k9383 
o|substituted constant variable: a9410 
o|substituted constant variable: a9412 
o|substituted constant variable: a9414 
o|substituted constant variable: a9416 
o|substituted constant variable: a9418 
o|inlining procedure: k9426 
o|inlining procedure: k9426 
o|inlining procedure: k9474 
o|inlining procedure: k9474 
o|inlining procedure: k9574 
o|inlining procedure: k9574 
o|inlining procedure: k9635 
o|inlining procedure: k9635 
o|inlining procedure: k9669 
o|inlining procedure: k9691 
o|inlining procedure: k9691 
o|inlining procedure: k9669 
o|inlining procedure: k9746 
o|inlining procedure: k9746 
o|inlining procedure: k9768 
o|contracted procedure: k9781 
o|inlining procedure: k9778 
o|inlining procedure: k9778 
o|inlining procedure: k9794 
o|inlining procedure: k9810 
o|inlining procedure: k9810 
o|inlining procedure: k9848 
o|inlining procedure: k9848 
o|substituted constant variable: a9861 
o|substituted constant variable: a9863 
o|inlining procedure: k9794 
o|inlining procedure: k9768 
o|inlining procedure: k9912 
o|inlining procedure: k9912 
o|inlining procedure: k9957 
o|inlining procedure: k9957 
o|inlining procedure: k9987 
o|inlining procedure: k9987 
o|inlining procedure: k10001 
o|inlining procedure: k10001 
o|inlining procedure: k10024 
o|inlining procedure: k10024 
o|inlining procedure: k10038 
o|inlining procedure: k10062 
o|inlining procedure: k10062 
o|inlining procedure: k10079 
o|inlining procedure: k10079 
o|inlining procedure: k10038 
o|inlining procedure: k10128 
o|inlining procedure: k10128 
o|inlining procedure: k10173 
o|inlining procedure: k10173 
o|inlining procedure: k10208 
o|inlining procedure: k10208 
o|substituted constant variable: a10223 
o|substituted constant variable: a10225 
o|substituted constant variable: a10227 
o|inlining procedure: k10230 
o|inlining procedure: k10230 
o|substituted constant variable: a10242 
o|substituted constant variable: a10244 
o|substituted constant variable: a10246 
o|substituted constant variable: a10248 
o|inlining procedure: k10264 
o|inlining procedure: k10286 
o|inlining procedure: k10307 
o|inlining procedure: k10307 
o|inlining procedure: k10286 
o|substituted constant variable: a10355 
o|substituted constant variable: a10357 
o|inlining procedure: k10264 
o|inlining procedure: k10371 
o|inlining procedure: k10371 
o|inlining procedure: k10384 
o|inlining procedure: k10384 
o|inlining procedure: k10408 
o|inlining procedure: k10408 
o|inlining procedure: k10421 
o|inlining procedure: k10421 
o|inlining procedure: k10442 
o|inlining procedure: k10458 
o|inlining procedure: k10458 
o|inlining procedure: k10442 
o|inlining procedure: k10479 
o|inlining procedure: k10479 
o|contracted procedure: k10489 
o|inlining procedure: k10515 
o|inlining procedure: k10515 
o|inlining procedure: k10535 
o|inlining procedure: k10535 
o|inlining procedure: k10555 
o|inlining procedure: k10555 
o|substituted constant variable: a10571 
o|substituted constant variable: a10573 
o|substituted constant variable: a10575 
o|inlining procedure: k10585 
o|inlining procedure: k10585 
o|inlining procedure: k10615 
o|propagated global variable: out25472551 ##sys#standard-output 
o|propagated global variable: out25372541 ##sys#standard-output 
o|propagated global variable: out25272531 ##sys#standard-output 
o|propagated global variable: out25172521 ##sys#standard-output 
o|propagated global variable: out25072511 ##sys#standard-output 
o|propagated global variable: out24952499 ##sys#standard-output 
o|inlining procedure: k10615 
o|inlining procedure: k10674 
o|inlining procedure: k10674 
o|inlining procedure: k10699 
o|inlining procedure: k10699 
o|inlining procedure: k10733 
o|inlining procedure: k10733 
o|inlining procedure: k10755 
o|inlining procedure: k10755 
o|inlining procedure: k10761 
o|inlining procedure: k10761 
o|inlining procedure: k10806 
o|inlining procedure: k10806 
o|inlining procedure: k10852 
o|inlining procedure: k10852 
o|inlining procedure: k10901 
o|substituted constant variable: tmap2584 
o|substituted constant variable: tmap2584 
o|inlining procedure: k10901 
o|inlining procedure: k10932 
o|inlining procedure: k10932 
o|inlining procedure: k10938 
o|inlining procedure: k10938 
o|inlining procedure: k10958 
o|inlining procedure: k10958 
o|inlining procedure: k10964 
o|inlining procedure: k10964 
o|inlining procedure: k11004 
o|inlining procedure: k11004 
o|inlining procedure: k11050 
o|inlining procedure: k11050 
o|inlining procedure: k11076 
o|inlining procedure: k11076 
o|inlining procedure: k11104 
o|inlining procedure: k11104 
o|inlining procedure: k11096 
o|inlining procedure: k11096 
o|inlining procedure: k11122 
o|inlining procedure: k11122 
o|inlining procedure: k11181 
o|inlining procedure: k11181 
o|inlining procedure: k11205 
o|inlining procedure: k11205 
o|substituted constant variable: a11232 
o|substituted constant variable: a11234 
o|substituted constant variable: a11236 
o|substituted constant variable: a11238 
o|substituted constant variable: a11240 
o|substituted constant variable: a11245 
o|substituted constant variable: a11247 
o|inlining procedure: k11250 
o|inlining procedure: k11250 
o|substituted constant variable: a11262 
o|substituted constant variable: a11264 
o|substituted constant variable: a11266 
o|substituted constant variable: a11268 
o|substituted constant variable: a11276 
o|inlining procedure: k11279 
o|inlining procedure: k11279 
o|substituted constant variable: a11286 
o|substituted constant variable: a11288 
o|substituted constant variable: a11290 
o|inlining procedure: k11293 
o|inlining procedure: k11293 
o|substituted constant variable: a11305 
o|substituted constant variable: a11307 
o|substituted constant variable: a11309 
o|substituted constant variable: a11311 
o|substituted constant variable: a11313 
o|inlining procedure: k11316 
o|inlining procedure: k11316 
o|substituted constant variable: a11323 
o|substituted constant variable: a11325 
o|substituted constant variable: a11327 
o|substituted constant variable: a11329 
o|inlining procedure: k11332 
o|inlining procedure: k11332 
o|substituted constant variable: a11339 
o|substituted constant variable: a11341 
o|substituted constant variable: a11343 
o|substituted constant variable: a11345 
o|inlining procedure: k11348 
o|inlining procedure: k11348 
o|substituted constant variable: a11360 
o|substituted constant variable: a11362 
o|substituted constant variable: a11364 
o|substituted constant variable: a11366 
o|inlining procedure: k11369 
o|inlining procedure: k11369 
o|inlining procedure: k11379 
o|inlining procedure: k11379 
o|inlining procedure: k11389 
o|inlining procedure: k11389 
o|substituted constant variable: a11401 
o|substituted constant variable: a11403 
o|substituted constant variable: a11405 
o|substituted constant variable: a11407 
o|substituted constant variable: a11409 
o|substituted constant variable: a11411 
o|substituted constant variable: a11413 
o|substituted constant variable: a11415 
o|inlining procedure: k11418 
o|inlining procedure: k11418 
o|inlining procedure: k11428 
o|inlining procedure: k11428 
o|inlining procedure: k11438 
o|inlining procedure: k11438 
o|substituted constant variable: a11450 
o|substituted constant variable: a11452 
o|substituted constant variable: a11454 
o|substituted constant variable: a11456 
o|substituted constant variable: a11458 
o|substituted constant variable: a11460 
o|substituted constant variable: a11462 
o|substituted constant variable: a11464 
o|substituted constant variable: a11466 
o|substituted constant variable: a11468 
o|substituted constant variable: a11473 
o|substituted constant variable: a11475 
o|substituted constant variable: a11480 
o|substituted constant variable: a11482 
o|inlining procedure: k11485 
o|inlining procedure: k11485 
o|substituted constant variable: a11492 
o|substituted constant variable: a11494 
o|substituted constant variable: a11496 
o|inlining procedure: k11499 
o|inlining procedure: k11499 
o|inlining procedure: k11509 
o|inlining procedure: k11509 
o|inlining procedure: k11519 
o|inlining procedure: k11519 
o|substituted constant variable: a11531 
o|substituted constant variable: a11533 
o|substituted constant variable: a11535 
o|substituted constant variable: a11537 
o|substituted constant variable: a11539 
o|substituted constant variable: a11541 
o|substituted constant variable: a11543 
o|substituted constant variable: a11545 
o|substituted constant variable: a11550 
o|substituted constant variable: a11552 
o|inlining procedure: k11564 
o|inlining procedure: k11564 
o|inlining procedure: k11572 
o|inlining procedure: k11572 
o|inlining procedure: k11593 
o|inlining procedure: k11593 
o|inlining procedure: k11601 
o|inlining procedure: k11601 
o|inlining procedure: k11635 
o|inlining procedure: k11635 
o|inlining procedure: k11627 
o|inlining procedure: k11627 
o|inlining procedure: k11666 
o|inlining procedure: k11666 
o|inlining procedure: "(support.scm:1171) words->bytes" 
o|inlining procedure: k11685 
o|inlining procedure: "(support.scm:1173) words->bytes" 
o|inlining procedure: k11685 
o|inlining procedure: "(support.scm:1175) words->bytes" 
o|inlining procedure: k11717 
o|inlining procedure: k11717 
o|inlining procedure: k11709 
o|inlining procedure: k11709 
o|inlining procedure: k11735 
o|inlining procedure: "(support.scm:1183) words->bytes" 
o|inlining procedure: k11735 
o|inlining procedure: k11748 
o|inlining procedure: k11748 
o|inlining procedure: k11758 
o|inlining procedure: k11758 
o|inlining procedure: k11768 
o|inlining procedure: k11768 
o|inlining procedure: k11778 
o|inlining procedure: k11778 
o|substituted constant variable: a11785 
o|substituted constant variable: a11787 
o|substituted constant variable: a11789 
o|substituted constant variable: a11791 
o|substituted constant variable: a11793 
o|substituted constant variable: a11795 
o|substituted constant variable: a11797 
o|substituted constant variable: a11799 
o|substituted constant variable: a11801 
o|inlining procedure: k11810 
o|inlining procedure: k11810 
o|inlining procedure: k11820 
o|inlining procedure: k11820 
o|substituted constant variable: a11827 
o|substituted constant variable: a11829 
o|substituted constant variable: a11831 
o|substituted constant variable: a11833 
o|substituted constant variable: a11835 
o|inlining procedure: k11838 
o|inlining procedure: k11838 
o|inlining procedure: k11848 
o|inlining procedure: k11848 
o|inlining procedure: k11858 
o|inlining procedure: k11858 
o|substituted constant variable: a11865 
o|substituted constant variable: a11867 
o|substituted constant variable: a11869 
o|substituted constant variable: a11871 
o|substituted constant variable: a11873 
o|substituted constant variable: a11875 
o|substituted constant variable: a11877 
o|inlining procedure: k11880 
o|inlining procedure: k11880 
o|inlining procedure: k11890 
o|inlining procedure: k11890 
o|inlining procedure: k11900 
o|inlining procedure: k11900 
o|inlining procedure: k11910 
o|inlining procedure: k11910 
o|inlining procedure: k11920 
o|inlining procedure: k11920 
o|substituted constant variable: a11932 
o|substituted constant variable: a11934 
o|substituted constant variable: a11936 
o|substituted constant variable: a11938 
o|substituted constant variable: a11940 
o|substituted constant variable: a11942 
o|substituted constant variable: a11944 
o|substituted constant variable: a11946 
o|substituted constant variable: a11948 
o|substituted constant variable: a11950 
o|substituted constant variable: a11952 
o|substituted constant variable: a11954 
o|inlining procedure: k11957 
o|inlining procedure: k11957 
o|inlining procedure: k11967 
o|inlining procedure: k11967 
o|inlining procedure: k11977 
o|inlining procedure: k11977 
o|inlining procedure: k11987 
o|inlining procedure: k11987 
o|inlining procedure: k11997 
o|inlining procedure: k11997 
o|inlining procedure: k12007 
o|inlining procedure: k12007 
o|substituted constant variable: a12014 
o|substituted constant variable: a12016 
o|substituted constant variable: a12018 
o|substituted constant variable: a12020 
o|substituted constant variable: a12022 
o|substituted constant variable: a12024 
o|substituted constant variable: a12026 
o|substituted constant variable: a12028 
o|substituted constant variable: a12030 
o|substituted constant variable: a12032 
o|substituted constant variable: a12034 
o|substituted constant variable: a12036 
o|substituted constant variable: a12038 
o|inlining procedure: k12060 
o|inlining procedure: "(support.scm:1200) words->bytes" 
o|inlining procedure: k12060 
o|inlining procedure: "(support.scm:1202) words->bytes" 
o|inlining procedure: k12092 
o|inlining procedure: k12092 
o|inlining procedure: k12084 
o|inlining procedure: k12084 
o|inlining procedure: k12110 
o|inlining procedure: "(support.scm:1209) words->bytes" 
o|inlining procedure: k12110 
o|inlining procedure: "(support.scm:1210) err3012" 
o|inlining procedure: k12126 
o|inlining procedure: k12126 
o|inlining procedure: k12136 
o|inlining procedure: k12136 
o|substituted constant variable: a12148 
o|substituted constant variable: a12150 
o|substituted constant variable: a12152 
o|substituted constant variable: a12154 
o|substituted constant variable: a12156 
o|substituted constant variable: a12158 
o|inlining procedure: "(support.scm:1211) err3012" 
o|inlining procedure: k12170 
o|inlining procedure: k12170 
o|substituted constant variable: a12182 
o|substituted constant variable: a12184 
o|substituted constant variable: a12186 
o|substituted constant variable: a12188 
o|inlining procedure: k12191 
o|inlining procedure: k12191 
o|inlining procedure: k12201 
o|inlining procedure: k12201 
o|inlining procedure: k12211 
o|inlining procedure: k12211 
o|inlining procedure: k12221 
o|inlining procedure: k12221 
o|inlining procedure: k12231 
o|inlining procedure: k12231 
o|inlining procedure: k12241 
o|inlining procedure: k12241 
o|inlining procedure: k12251 
o|inlining procedure: k12251 
o|inlining procedure: k12261 
o|inlining procedure: k12261 
o|inlining procedure: k12271 
o|inlining procedure: k12271 
o|inlining procedure: k12281 
o|inlining procedure: k12281 
o|inlining procedure: k12291 
o|inlining procedure: k12291 
o|inlining procedure: k12301 
o|inlining procedure: k12301 
o|inlining procedure: k12311 
o|inlining procedure: k12311 
o|inlining procedure: k12321 
o|inlining procedure: k12321 
o|inlining procedure: k12331 
o|inlining procedure: k12331 
o|inlining procedure: k12341 
o|inlining procedure: k12341 
o|substituted constant variable: a12348 
o|substituted constant variable: a12350 
o|substituted constant variable: a12352 
o|substituted constant variable: a12354 
o|substituted constant variable: a12356 
o|substituted constant variable: a12358 
o|substituted constant variable: a12360 
o|substituted constant variable: a12362 
o|substituted constant variable: a12364 
o|substituted constant variable: a12366 
o|substituted constant variable: a12368 
o|substituted constant variable: a12370 
o|substituted constant variable: a12372 
o|substituted constant variable: a12374 
o|substituted constant variable: a12376 
o|substituted constant variable: a12378 
o|substituted constant variable: a12380 
o|substituted constant variable: a12382 
o|substituted constant variable: a12384 
o|substituted constant variable: a12386 
o|substituted constant variable: a12388 
o|substituted constant variable: a12390 
o|substituted constant variable: a12392 
o|substituted constant variable: a12394 
o|substituted constant variable: a12396 
o|substituted constant variable: a12398 
o|substituted constant variable: a12400 
o|substituted constant variable: a12402 
o|substituted constant variable: a12404 
o|substituted constant variable: a12406 
o|substituted constant variable: a12408 
o|substituted constant variable: a12410 
o|substituted constant variable: a12412 
o|inlining procedure: k12424 
o|inlining procedure: k12424 
o|inlining procedure: k12450 
o|inlining procedure: k12450 
o|inlining procedure: k12478 
o|inlining procedure: k12478 
o|inlining procedure: k12505 
o|inlining procedure: k12505 
o|inlining procedure: k12523 
o|inlining procedure: k12523 
o|inlining procedure: k12543 
o|inlining procedure: k12543 
o|substituted constant variable: a12596 
o|substituted constant variable: a12601 
o|substituted constant variable: a12603 
o|substituted constant variable: a12604 
o|inlining procedure: k12611 
o|substituted constant variable: a12620 
o|inlining procedure: k12611 
o|substituted constant variable: a12621 
o|substituted constant variable: a12629 
o|substituted constant variable: a12631 
o|substituted constant variable: a12633 
o|substituted constant variable: a12638 
o|substituted constant variable: a12640 
o|substituted constant variable: a12645 
o|substituted constant variable: a12647 
o|substituted constant variable: a12649 
o|substituted constant variable: a12654 
o|substituted constant variable: a12656 
o|inlining procedure: k12663 
o|inlining procedure: k12663 
o|inlining procedure: k12677 
o|inlining procedure: k12677 
o|inlining procedure: k12693 
o|inlining procedure: k12693 
o|substituted constant variable: a12700 
o|inlining procedure: k12701 
o|inlining procedure: k12701 
o|inlining procedure: k12715 
o|inlining procedure: k12715 
o|substituted constant variable: a12722 
o|inlining procedure: k12723 
o|inlining procedure: k12723 
o|inlining procedure: k12735 
o|inlining procedure: k12735 
o|substituted constant variable: a12742 
o|inlining procedure: k12743 
o|inlining procedure: k12743 
o|inlining procedure: k12757 
o|inlining procedure: k12757 
o|substituted constant variable: a12773 
o|inlining procedure: k12774 
o|inlining procedure: k12774 
o|inlining procedure: k12786 
o|inlining procedure: k12786 
o|inlining procedure: k12798 
o|inlining procedure: k12798 
o|inlining procedure: k12810 
o|inlining procedure: k12810 
o|inlining procedure: k12822 
o|inlining procedure: k12822 
o|inlining procedure: k12836 
o|inlining procedure: k12836 
o|inlining procedure: k12850 
o|inlining procedure: k12850 
o|inlining procedure: k12866 
o|inlining procedure: k12866 
o|inlining procedure: k12879 
o|inlining procedure: k12879 
o|inlining procedure: k12899 
o|inlining procedure: k12899 
o|inlining procedure: k12910 
o|inlining procedure: k12910 
o|substituted constant variable: a12917 
o|substituted constant variable: a12919 
o|substituted constant variable: a12921 
o|substituted constant variable: a12923 
o|inlining procedure: k12926 
o|inlining procedure: k12926 
o|substituted constant variable: a12938 
o|substituted constant variable: a12940 
o|substituted constant variable: a12942 
o|substituted constant variable: a12944 
o|substituted constant variable: a12946 
o|inlining procedure: k12949 
o|inlining procedure: k12949 
o|substituted constant variable: a12956 
o|substituted constant variable: a12958 
o|substituted constant variable: a12960 
o|substituted constant variable: a12965 
o|substituted constant variable: a12967 
o|inlining procedure: k12970 
o|inlining procedure: k12970 
o|substituted constant variable: a12982 
o|substituted constant variable: a12984 
o|substituted constant variable: a12986 
o|substituted constant variable: a12988 
o|substituted constant variable: a12990 
o|substituted constant variable: a12992 
o|inlining procedure: k12995 
o|inlining procedure: k12995 
o|inlining procedure: k13005 
o|inlining procedure: k13005 
o|inlining procedure: k13015 
o|inlining procedure: k13015 
o|substituted constant variable: a13027 
o|substituted constant variable: a13029 
o|substituted constant variable: a13031 
o|substituted constant variable: a13033 
o|substituted constant variable: a13035 
o|substituted constant variable: a13037 
o|substituted constant variable: a13039 
o|substituted constant variable: a13041 
o|substituted constant variable: a13043 
o|substituted constant variable: a13045 
o|substituted constant variable: a13047 
o|substituted constant variable: a13049 
o|substituted constant variable: a13051 
o|substituted constant variable: a13053 
o|substituted constant variable: a13055 
o|substituted constant variable: a13057 
o|inlining procedure: k13060 
o|inlining procedure: k13060 
o|inlining procedure: k13070 
o|inlining procedure: k13070 
o|inlining procedure: k13080 
o|inlining procedure: k13080 
o|substituted constant variable: a13092 
o|substituted constant variable: a13094 
o|substituted constant variable: a13096 
o|substituted constant variable: a13098 
o|substituted constant variable: a13100 
o|substituted constant variable: a13102 
o|substituted constant variable: a13104 
o|substituted constant variable: a13106 
o|substituted constant variable: a13108 
o|substituted constant variable: a13110 
o|substituted constant variable: a13112 
o|substituted constant variable: a13114 
o|substituted constant variable: a13119 
o|substituted constant variable: a13121 
o|substituted constant variable: a13126 
o|substituted constant variable: a13128 
o|inlining procedure: k13131 
o|inlining procedure: k13131 
o|inlining procedure: k13141 
o|inlining procedure: k13141 
o|inlining procedure: k13151 
o|inlining procedure: k13151 
o|substituted constant variable: a13163 
o|substituted constant variable: a13165 
o|substituted constant variable: a13167 
o|substituted constant variable: a13169 
o|substituted constant variable: a13171 
o|substituted constant variable: a13173 
o|substituted constant variable: a13175 
o|substituted constant variable: a13177 
o|substituted constant variable: a13182 
o|substituted constant variable: a13184 
o|substituted constant variable: a13186 
o|inlining procedure: k13211 
o|inlining procedure: k13232 
o|inlining procedure: k13232 
o|inlining procedure: k13211 
o|inlining procedure: k13289 
o|inlining procedure: k13289 
o|inlining procedure: k13307 
o|inlining procedure: k13307 
o|substituted constant variable: a13314 
o|substituted constant variable: a13316 
o|substituted constant variable: a13318 
o|substituted constant variable: a13323 
o|substituted constant variable: a13325 
o|inlining procedure: k13355 
o|inlining procedure: k13355 
o|inlining procedure: k13371 
o|inlining procedure: k13371 
o|inlining procedure: k13391 
o|inlining procedure: k13391 
o|inlining procedure: k13434 
o|inlining procedure: k13434 
o|substituted constant variable: a13461 
o|substituted constant variable: a13463 
o|substituted constant variable: a13465 
o|substituted constant variable: a13467 
o|inlining procedure: k13470 
o|inlining procedure: k13470 
o|inlining procedure: k13480 
o|inlining procedure: k13480 
o|substituted constant variable: a13487 
o|substituted constant variable: a13489 
o|substituted constant variable: a13491 
o|substituted constant variable: a13493 
o|substituted constant variable: a13495 
o|inlining procedure: k13513 
o|inlining procedure: k13513 
o|inlining procedure: k13540 
o|inlining procedure: k13540 
o|substituted constant variable: a13555 
o|inlining procedure: k13572 
o|inlining procedure: k13572 
o|inlining procedure: k13647 
o|inlining procedure: k13647 
o|inlining procedure: k13676 
o|inlining procedure: k13676 
o|contracted procedure: k13689 
o|inlining procedure: k13686 
o|inlining procedure: k13715 
o|inlining procedure: k13715 
o|inlining procedure: k13734 
o|inlining procedure: k13734 
o|inlining procedure: k13686 
o|inlining procedure: k13779 
o|inlining procedure: k13779 
o|propagated global variable: out35793583 ##sys#standard-output 
o|inlining procedure: k13807 
o|inlining procedure: k13807 
o|inlining procedure: k13835 
o|inlining procedure: k13835 
o|inlining procedure: k13858 
o|inlining procedure: k13858 
o|inlining procedure: k13861 
o|inlining procedure: k13861 
o|inlining procedure: k13939 
o|substituted constant variable: a13964 
o|inlining procedure: k13939 
o|inlining procedure: k14000 
o|inlining procedure: k14000 
o|inlining procedure: k14030 
o|inlining procedure: k14030 
o|inlining procedure: k14119 
o|inlining procedure: k14142 
o|inlining procedure: k14142 
o|propagated global variable: out37593763 ##sys#standard-output 
o|propagated global variable: out37473751 ##sys#standard-output 
o|inlining procedure: k14119 
o|inlining procedure: k14168 
o|inlining procedure: k14168 
o|propagated global variable: out37083712 ##sys#standard-output 
o|inlining procedure: k14188 
o|inlining procedure: k14208 
o|inlining procedure: k14208 
o|inlining procedure: k14188 
o|inlining procedure: k14232 
o|inlining procedure: k14232 
o|inlining procedure: k14265 
o|inlining procedure: k14265 
o|inlining procedure: k14285 
o|substituted constant variable: a14309 
o|inlining procedure: k14285 
o|inlining procedure: k14320 
o|inlining procedure: k14333 
o|inlining procedure: k14333 
o|inlining procedure: k14320 
o|inlining procedure: k14387 
o|inlining procedure: k14387 
o|substituted constant variable: a14403 
o|substituted constant variable: a14405 
o|inlining procedure: k14456 
o|inlining procedure: k14496 
o|inlining procedure: k14496 
o|inlining procedure: k14456 
o|substituted constant variable: constant25 
o|replaced variables: 2036 
o|removed binding forms: 301 
o|removed side-effect free assignment to unused variable: constant25 
o|substituted constant variable: r477214613 
o|inlining procedure: k4783 
o|substituted constant variable: r477214614 
o|inlining procedure: k4791 
o|substituted constant variable: f_500814625 
o|converted assignments to bindings: (err219) 
o|substituted constant variable: f_510914631 
o|substituted constant variable: f_514114633 
o|substituted constant variable: f_529414641 
o|substituted constant variable: r533314643 
o|substituted constant variable: r533314644 
o|substituted constant variable: r536814650 
o|substituted constant variable: r570614684 
o|substituted constant variable: f_574214685 
o|substituted constant variable: r584714693 
o|substituted constant variable: r617814714 
o|substituted constant variable: r619514716 
o|substituted constant variable: r634414726 
o|inlining procedure: k6495 
o|substituted constant variable: r720114790 
o|removed side-effect free assignment to unused variable: rename1895 
o|substituted constant variable: a927414917 
o|substituted constant variable: r977914940 
o|substituted constant variable: r981114943 
o|substituted constant variable: r984914945 
o|substituted constant variable: r979514947 
o|substituted constant variable: r1000214956 
o|substituted constant variable: r1008014962 
o|substituted constant variable: r1003914964 
o|substituted constant variable: r1012914966 
o|substituted constant variable: r1017414967 
o|substituted constant variable: r1020914970 
o|substituted constant variable: r1030814976 
o|substituted constant variable: r1026514978 
o|substituted constant variable: r1038514982 
o|substituted constant variable: r1042214986 
o|substituted constant variable: a1045714989 
o|substituted constant variable: r1157315078 
o|substituted constant variable: r1160215082 
o|substituted constant variable: r1166715087 
o|substituted constant variable: a35035315090 
o|substituted constant variable: a35035315096 
o|substituted constant variable: a35035315102 
o|substituted constant variable: a35035315112 
o|substituted constant variable: r1173615116 
o|removed side-effect free assignment to unused variable: err3012 
o|substituted constant variable: a35035315159 
o|substituted constant variable: a35035315165 
o|substituted constant variable: a35035315175 
o|substituted constant variable: r1261215241 
o|substituted constant variable: r1266415242 
o|substituted constant variable: r1267815244 
o|substituted constant variable: r1269415246 
o|substituted constant variable: r1269415247 
o|substituted constant variable: r1270215248 
o|substituted constant variable: r1271615250 
o|substituted constant variable: r1271615251 
o|substituted constant variable: r1272415252 
o|substituted constant variable: r1273615254 
o|substituted constant variable: r1273615255 
o|substituted constant variable: r1274415256 
o|substituted constant variable: r1277515260 
o|substituted constant variable: r1278715262 
o|substituted constant variable: r1279915264 
o|substituted constant variable: r1281115266 
o|substituted constant variable: r1282315268 
o|substituted constant variable: r1283715270 
o|substituted constant variable: r1285115272 
o|substituted constant variable: r1286715274 
o|substituted constant variable: r1288015276 
o|substituted constant variable: r1290015278 
o|substituted constant variable: r1335615314 
o|converted assignments to bindings: (resolve3548) 
o|substituted constant variable: r1378015345 
o|substituted constant variable: r1386215353 
o|substituted constant variable: r1420915377 
o|substituted constant variable: r1420915377 
o|substituted constant variable: f_1431915389 
o|substituted constant variable: r1438815390 
o|substituted constant variable: r1445715395 
o|simplifications: ((let . 2)) 
o|replaced variables: 21 
o|removed binding forms: 2058 
o|substituted constant variable: r47721461315401 
o|substituted constant variable: r47721461415403 
o|inlining procedure: k5997 
o|inlining procedure: k6020 
o|inlining procedure: k6044 
o|inlining procedure: k6067 
o|inlining procedure: k6091 
o|inlining procedure: k6638 
o|inlining procedure: k6638 
o|inlining procedure: k6638 
o|inlining procedure: k6638 
o|inlining procedure: k6638 
o|inlining procedure: k6638 
o|inlining procedure: k6638 
o|inlining procedure: k6638 
o|inlining procedure: k9920 
o|inlining procedure: k10213 
o|inlining procedure: k11222 
o|inlining procedure: k11562 
o|inlining procedure: k11562 
o|inlining procedure: k11562 
o|inlining procedure: k11591 
o|inlining procedure: k11591 
o|inlining procedure: k11591 
o|inlining procedure: k13399 
o|inlining procedure: k13399 
o|inlining procedure: k13855 
o|inlining procedure: k13855 
o|inlining procedure: k14345 
o|inlining procedure: k14366 
o|inlining procedure: k14410 
o|inlining procedure: k14537 
o|replaced variables: 1 
o|removed binding forms: 103 
o|substituted constant variable: r599815651 
o|substituted constant variable: r602115652 
o|substituted constant variable: r604515653 
o|substituted constant variable: r606815654 
o|substituted constant variable: r609215655 
o|substituted constant variable: r992115772 
o|substituted constant variable: tmp2840284215790 
o|substituted constant variable: tmp2840284215790 
o|substituted constant variable: tmp2840284215790 
o|substituted constant variable: tmp2840284215793 
o|substituted constant variable: tmp2840284215793 
o|substituted constant variable: tmp2840284215793 
o|substituted constant variable: tmp2840284215796 
o|substituted constant variable: tmp2840284215796 
o|substituted constant variable: tmp2840284215796 
o|substituted constant variable: tmp2847284915799 
o|substituted constant variable: tmp2847284915799 
o|substituted constant variable: tmp2847284915799 
o|substituted constant variable: tmp2847284915802 
o|substituted constant variable: tmp2847284915802 
o|substituted constant variable: tmp2847284915802 
o|substituted constant variable: tmp2847284915805 
o|substituted constant variable: tmp2847284915805 
o|substituted constant variable: tmp2847284915805 
o|substituted constant variable: r1385615828 
o|substituted constant variable: r1385615828 
o|substituted constant variable: r1385615828 
o|substituted constant variable: r1385615831 
o|substituted constant variable: r1385615831 
o|substituted constant variable: r1385615831 
o|substituted constant variable: r1434615846 
o|substituted constant variable: r1436715847 
o|substituted constant variable: r1441115848 
o|removed binding forms: 16 
o|removed conditional forms: 8 
o|removed binding forms: 18 
o|simplifications: ((if . 67) (##core#call . 1406)) 
o|  call simplifications:
o|    ##sys#fudge
o|    read-char	3
o|    ##sys#size
o|    fx>	2
o|    procedure?
o|    fx+	2
o|    string-length	3
o|    >	2
o|    string-ref	2
o|    list?	4
o|    vector-ref	6
o|    <
o|    *
o|    -	2
o|    first	19
o|    positive?
o|    not-pair?	5
o|    ##sys#call-with-values	5
o|    cdddr
o|    second	10
o|    third	6
o|    fourth	4
o|    caddr	4
o|    cadr	24
o|    integer?
o|    inexact->exact
o|    ##sys#check-structure	7
o|    ##sys#block-ref	4
o|    ##sys#structure?	4
o|    ##sys#make-structure	31
o|    cdar	6
o|    caar	5
o|    length	8
o|    values	4
o|    +	7
o|    ##sys#setslot	36
o|    assq	17
o|    alist-cons	8
o|    atom?
o|    ##sys#apply	2
o|    ##sys#cons	7
o|    equal?	3
o|    ##sys#list	124
o|    vector?	7
o|    fixnum?	2
o|    number?	4
o|    char?	4
o|    boolean?	4
o|    eof-object?	5
o|    member
o|    cddr	3
o|    list	49
o|    string=?	2
o|    not	12
o|    ##sys#foreign-fixnum-argument	9
o|    char-alphabetic?	2
o|    char-numeric?
o|    char=?	6
o|    char->integer
o|    fx>=	2
o|    fx<	4
o|    number->string
o|    string->list	3
o|    list->string
o|    zero?	3
o|    sub1	4
o|    string?	4
o|    eqv?
o|    eq?	376
o|    add1	4
o|    null?	41
o|    cons	61
o|    car	51
o|    cdr	20
o|    ##sys#check-list	40
o|    symbol?	18
o|    memq	12
o|    ##sys#slot	152
o|    write-char	36
o|    pair?	69
o|    apply	5
o|contracted procedure: k4681 
o|contracted procedure: k4722 
o|contracted procedure: k4746 
o|contracted procedure: k4755 
o|contracted procedure: k4758 
o|contracted procedure: k4774 
o|contracted procedure: k4785 
o|contracted procedure: k4793 
o|contracted procedure: k4824 
o|propagated global variable: out117121 ##compiler#collected-debugging-output 
o|contracted procedure: k4839 
o|contracted procedure: k4848 
o|contracted procedure: k4851 
o|contracted procedure: k4859 
o|contracted procedure: k4931 
o|contracted procedure: k4947 
o|contracted procedure: k4956 
o|contracted procedure: k4959 
o|contracted procedure: k4983 
o|contracted procedure: k4987 
o|contracted procedure: k4991 
o|contracted procedure: k5011 
o|contracted procedure: k5017 
o|contracted procedure: k5035 
o|contracted procedure: k5054 
o|contracted procedure: k5065 
o|contracted procedure: k5071 
o|contracted procedure: k5077 
o|contracted procedure: k5085 
o|contracted procedure: k5095 
o|contracted procedure: k5098 
o|contracted procedure: k5112 
o|contracted procedure: k5130 
o|contracted procedure: k5118 
o|contracted procedure: k5127 
o|contracted procedure: k5144 
o|contracted procedure: k5162 
o|contracted procedure: k5150 
o|contracted procedure: k5159 
o|contracted procedure: k5170 
o|contracted procedure: k5176 
o|contracted procedure: k5196 
o|contracted procedure: k5202 
o|contracted procedure: k5250 
o|contracted procedure: k5252 
o|contracted procedure: k5262 
o|contracted procedure: k5270 
o|contracted procedure: k5283 
o|contracted procedure: k5297 
o|contracted procedure: k5300 
o|contracted procedure: k5302 
o|contracted procedure: k5307 
o|contracted procedure: k5329 
o|contracted procedure: k5335 
o|contracted procedure: k5350 
o|contracted procedure: k5370 
o|contracted procedure: k5377 
o|contracted procedure: k5379 
o|contracted procedure: k5388 
o|contracted procedure: k5393 
o|contracted procedure: k5414 
o|contracted procedure: k5421 
o|contracted procedure: k5429 
o|contracted procedure: k5444 
o|contracted procedure: k5456 
o|contracted procedure: k5462 
o|contracted procedure: k5470 
o|contracted procedure: k5525 
o|contracted procedure: k5482 
o|contracted procedure: k5522 
o|contracted procedure: k5500 
o|inlining procedure: k5498 
o|inlining procedure: k5498 
o|contracted procedure: k5539 
o|contracted procedure: k5554 
o|contracted procedure: k5577 
o|contracted procedure: k5582 
o|contracted procedure: k5587 
o|contracted procedure: k5592 
o|contracted procedure: k5597 
o|contracted procedure: k5605 
o|contracted procedure: k5617 
o|contracted procedure: k5622 
o|contracted procedure: k5627 
o|contracted procedure: k5632 
o|contracted procedure: k5649 
o|contracted procedure: k5654 
o|contracted procedure: k5659 
o|contracted procedure: k5664 
o|contracted procedure: k5672 
o|contracted procedure: k5685 
o|contracted procedure: k5690 
o|contracted procedure: k5708 
o|contracted procedure: k5724 
o|contracted procedure: k5745 
o|contracted procedure: k5797 
o|contracted procedure: k5751 
o|contracted procedure: k5759 
o|contracted procedure: k5781 
o|contracted procedure: k5773 
o|contracted procedure: k5849 
o|contracted procedure: k5863 
o|contracted procedure: k5855 
o|contracted procedure: k5910 
o|contracted procedure: k5916 
o|contracted procedure: k5924 
o|contracted procedure: k5934 
o|contracted procedure: k5937 
o|contracted procedure: k5946 
o|contracted procedure: k5950 
o|contracted procedure: k5984 
o|contracted procedure: k5981 
o|contracted procedure: k5960 
o|contracted procedure: k5978 
o|contracted procedure: k5975 
o|contracted procedure: k5963 
o|contracted procedure: k5972 
o|contracted procedure: k5969 
o|contracted procedure: k5966 
o|contracted procedure: k5957 
o|contracted procedure: k6003 
o|contracted procedure: k5997 
o|contracted procedure: k6015 
o|contracted procedure: k6026 
o|contracted procedure: k6020 
o|contracted procedure: k6035 
o|contracted procedure: k6050 
o|contracted procedure: k6044 
o|contracted procedure: k6062 
o|contracted procedure: k6073 
o|contracted procedure: k6067 
o|contracted procedure: k6082 
o|contracted procedure: k6097 
o|contracted procedure: k6091 
o|contracted procedure: k6106 
o|contracted procedure: k6117 
o|contracted procedure: k6126 
o|contracted procedure: k6129 
o|propagated global variable: g631633 ##compiler#internal-bindings 
o|contracted procedure: k6137 
o|contracted procedure: k6146 
o|contracted procedure: k6149 
o|propagated global variable: g582584 extended-bindings 
o|contracted procedure: k6157 
o|contracted procedure: k6166 
o|contracted procedure: k6169 
o|propagated global variable: g533535 standard-bindings 
o|contracted procedure: k6180 
o|contracted procedure: k6214 
o|contracted procedure: k6232 
o|contracted procedure: k6229 
o|contracted procedure: k6244 
o|contracted procedure: k6241 
o|contracted procedure: k6255 
o|contracted procedure: k6267 
o|contracted procedure: k6264 
o|contracted procedure: k6276 
o|contracted procedure: k6279 
o|contracted procedure: k6273 
o|contracted procedure: k6288 
o|contracted procedure: k6285 
o|contracted procedure: k6301 
o|contracted procedure: k6313 
o|contracted procedure: k6310 
o|contracted procedure: k6322 
o|contracted procedure: k6319 
o|contracted procedure: k6331 
o|contracted procedure: k6328 
o|contracted procedure: k6333 
o|contracted procedure: k6353 
o|contracted procedure: k6359 
o|contracted procedure: k6373 
o|contracted procedure: k6376 
o|contracted procedure: k6388 
o|contracted procedure: k6400 
o|contracted procedure: k6434 
o|contracted procedure: k6445 
o|contracted procedure: k6467 
o|contracted procedure: k6464 
o|contracted procedure: k6448 
o|contracted procedure: k6457 
o|contracted procedure: k6484 
o|contracted procedure: k6500 
o|contracted procedure: k6509 
o|contracted procedure: k6511 
o|contracted procedure: k6520 
o|contracted procedure: k6531 
o|contracted procedure: k6561 
o|contracted procedure: k6591 
o|contracted procedure: k6613 
o|contracted procedure: k6619 
o|contracted procedure: k6625 
o|contracted procedure: k6633 
o|contracted procedure: k6636 
o|contracted procedure: k6646 
o|contracted procedure: k6663 
o|contracted procedure: k6660 
o|contracted procedure: k6657 
o|contracted procedure: k6668 
o|contracted procedure: k6675 
o|contracted procedure: k6681 
o|contracted procedure: k6685 
o|contracted procedure: k6691 
o|contracted procedure: k6697 
o|contracted procedure: k6701 
o|contracted procedure: k6707 
o|contracted procedure: k6711 
o|contracted procedure: k6717 
o|contracted procedure: k6732 
o|contracted procedure: k6735 
o|contracted procedure: k6740 
o|contracted procedure: k6744 
o|contracted procedure: k6750 
o|contracted procedure: k6754 
o|contracted procedure: k6766 
o|contracted procedure: k6771 
o|contracted procedure: k6776 
o|contracted procedure: k6781 
o|contracted procedure: k6786 
o|contracted procedure: k6791 
o|contracted procedure: k6796 
o|contracted procedure: k6830 
o|contracted procedure: k6835 
o|contracted procedure: k6840 
o|contracted procedure: k6845 
o|contracted procedure: k6850 
o|contracted procedure: k6855 
o|contracted procedure: k6860 
o|contracted procedure: k6865 
o|contracted procedure: k6870 
o|contracted procedure: k6875 
o|contracted procedure: k6880 
o|contracted procedure: k6885 
o|contracted procedure: k6890 
o|contracted procedure: k6895 
o|contracted procedure: k6900 
o|contracted procedure: k6905 
o|contracted procedure: k6910 
o|contracted procedure: k6915 
o|contracted procedure: k6920 
o|contracted procedure: k6990 
o|contracted procedure: k6999 
o|contracted procedure: k7008 
o|contracted procedure: k7017 
o|contracted procedure: k7026 
o|contracted procedure: k7035 
o|contracted procedure: k7060 
o|contracted procedure: k7074 
o|contracted procedure: k7086 
o|contracted procedure: k7105 
o|contracted procedure: k8099 
o|contracted procedure: k7114 
o|contracted procedure: k7121 
o|contracted procedure: k7123 
o|contracted procedure: k7137 
o|contracted procedure: k7148 
o|contracted procedure: k7151 
o|contracted procedure: k7160 
o|contracted procedure: k7170 
o|contracted procedure: k7175 
o|contracted procedure: k7178 
o|contracted procedure: k7184 
o|contracted procedure: k7197 
o|contracted procedure: k7203 
o|contracted procedure: k7210 
o|contracted procedure: k7215 
o|contracted procedure: k7218 
o|contracted procedure: k7220 
o|contracted procedure: k7225 
o|contracted procedure: k7243 
o|contracted procedure: k7263 
o|contracted procedure: k7265 
o|contracted procedure: k7267 
o|contracted procedure: k7273 
o|contracted procedure: k7284 
o|contracted procedure: k7287 
o|contracted procedure: k7296 
o|contracted procedure: k7306 
o|contracted procedure: k7314 
o|contracted procedure: k7317 
o|contracted procedure: k7326 
o|contracted procedure: k7336 
o|contracted procedure: k7341 
o|contracted procedure: k7343 
o|contracted procedure: k7366 
o|contracted procedure: k7354 
o|contracted procedure: k7357 
o|contracted procedure: k7363 
o|contracted procedure: k7371 
o|contracted procedure: k7394 
o|contracted procedure: k7397 
o|contracted procedure: k7382 
o|contracted procedure: k7385 
o|contracted procedure: k7391 
o|contracted procedure: k7402 
o|contracted procedure: k7409 
o|contracted procedure: k7412 
o|contracted procedure: k7420 
o|contracted procedure: k7448 
o|contracted procedure: k7431 
o|contracted procedure: k7437 
o|contracted procedure: k7511 
o|contracted procedure: k7456 
o|contracted procedure: k7482 
o|contracted procedure: k7467 
o|contracted procedure: k7473 
o|contracted procedure: k7488 
o|contracted procedure: k7508 
o|contracted procedure: k7496 
o|contracted procedure: k7499 
o|contracted procedure: k7523 
o|contracted procedure: k7526 
o|contracted procedure: k7543 
o|contracted procedure: k7554 
o|contracted procedure: k7557 
o|contracted procedure: k7566 
o|contracted procedure: k7576 
o|contracted procedure: k7579 
o|contracted procedure: k7587 
o|contracted procedure: k7598 
o|contracted procedure: k7600 
o|contracted procedure: k7654 
o|contracted procedure: k7613 
o|contracted procedure: k7618 
o|contracted procedure: k7629 
o|contracted procedure: k7632 
o|contracted procedure: k7641 
o|contracted procedure: k7651 
o|contracted procedure: k7659 
o|contracted procedure: k7673 
o|contracted procedure: k7670 
o|contracted procedure: k7678 
o|contracted procedure: k7680 
o|contracted procedure: k7732 
o|contracted procedure: k7691 
o|contracted procedure: k7696 
o|contracted procedure: k7707 
o|contracted procedure: k7710 
o|contracted procedure: k7719 
o|contracted procedure: k7729 
o|contracted procedure: k7737 
o|contracted procedure: k7780 
o|contracted procedure: k7740 
o|contracted procedure: k7777 
o|contracted procedure: k7762 
o|contracted procedure: k7774 
o|contracted procedure: k7765 
o|contracted procedure: k7768 
o|contracted procedure: k7750 
o|contracted procedure: k7753 
o|contracted procedure: k7785 
o|contracted procedure: k7800 
o|contracted procedure: k7805 
o|contracted procedure: k7816 
o|contracted procedure: k7819 
o|contracted procedure: k7828 
o|contracted procedure: k7838 
o|contracted procedure: k7843 
o|contracted procedure: k7854 
o|contracted procedure: k7858 
o|contracted procedure: k7869 
o|contracted procedure: k7872 
o|contracted procedure: k7881 
o|contracted procedure: k7891 
o|contracted procedure: k7912 
o|contracted procedure: k7915 
o|contracted procedure: k7926 
o|contracted procedure: k7929 
o|contracted procedure: k7938 
o|contracted procedure: k7948 
o|contracted procedure: k7979 
o|contracted procedure: k7984 
o|contracted procedure: k7989 
o|contracted procedure: k7994 
o|contracted procedure: k8062 
o|contracted procedure: k8074 
o|contracted procedure: k8077 
o|contracted procedure: k8086 
o|contracted procedure: k8096 
o|contracted procedure: k8105 
o|contracted procedure: k8145 
o|contracted procedure: k8154 
o|contracted procedure: k8165 
o|contracted procedure: k8168 
o|contracted procedure: k8177 
o|contracted procedure: k8187 
o|contracted procedure: k8192 
o|contracted procedure: k8202 
o|contracted procedure: k8199 
o|contracted procedure: k8213 
o|contracted procedure: k8216 
o|contracted procedure: k8225 
o|contracted procedure: k8235 
o|contracted procedure: k8240 
o|contracted procedure: k8249 
o|contracted procedure: k8252 
o|contracted procedure: k8257 
o|contracted procedure: k8267 
o|contracted procedure: k8272 
o|contracted procedure: k8283 
o|contracted procedure: k8295 
o|contracted procedure: k8297 
o|contracted procedure: k8344 
o|contracted procedure: k8314 
o|contracted procedure: k8339 
o|contracted procedure: k8342 
o|contracted procedure: k8336 
o|contracted procedure: k8317 
o|contracted procedure: k8326 
o|contracted procedure: k8329 
o|contracted procedure: k8356 
o|contracted procedure: k8359 
o|contracted procedure: k8368 
o|contracted procedure: k8378 
o|contracted procedure: k8383 
o|contracted procedure: k8401 
o|contracted procedure: k8390 
o|contracted procedure: k8393 
o|contracted procedure: k8399 
o|contracted procedure: k8407 
o|contracted procedure: k8414 
o|contracted procedure: k8420 
o|contracted procedure: k8425 
o|contracted procedure: k8432 
o|contracted procedure: k8437 
o|contracted procedure: k8444 
o|contracted procedure: k8453 
o|contracted procedure: k8463 
o|contracted procedure: k8469 
o|contracted procedure: k8476 
o|contracted procedure: k8482 
o|contracted procedure: k8498 
o|contracted procedure: k8488 
o|contracted procedure: k8504 
o|contracted procedure: k8507 
o|contracted procedure: k8512 
o|contracted procedure: k8515 
o|contracted procedure: k8526 
o|contracted procedure: k8529 
o|contracted procedure: k8538 
o|contracted procedure: k8548 
o|contracted procedure: k8553 
o|contracted procedure: k8560 
o|contracted procedure: k8563 
o|contracted procedure: k8574 
o|contracted procedure: k8577 
o|contracted procedure: k8586 
o|contracted procedure: k8596 
o|contracted procedure: k8601 
o|contracted procedure: k8610 
o|contracted procedure: k8617 
o|contracted procedure: k8625 
o|contracted procedure: k8638 
o|contracted procedure: k8644 
o|contracted procedure: k8647 
o|contracted procedure: k8650 
o|contracted procedure: k8660 
o|contracted procedure: k8673 
o|contracted procedure: k8684 
o|contracted procedure: k8687 
o|contracted procedure: k8696 
o|contracted procedure: k8706 
o|contracted procedure: k8709 
o|contracted procedure: k8714 
o|contracted procedure: k8716 
o|contracted procedure: k8723 
o|contracted procedure: k8734 
o|contracted procedure: k8737 
o|contracted procedure: k8746 
o|contracted procedure: k8756 
o|contracted procedure: k8765 
o|contracted procedure: k8776 
o|contracted procedure: k8779 
o|contracted procedure: k8788 
o|contracted procedure: k8798 
o|contracted procedure: k8807 
o|contracted procedure: k8812 
o|contracted procedure: k8852 
o|contracted procedure: k8908 
o|contracted procedure: k8878 
o|contracted procedure: k8892 
o|contracted procedure: k8905 
o|contracted procedure: k8947 
o|contracted procedure: k8950 
o|contracted procedure: k8966 
o|contracted procedure: k8969 
o|contracted procedure: k8974 
o|contracted procedure: k8994 
o|contracted procedure: k8991 
o|contracted procedure: k8988 
o|contracted procedure: k9002 
o|contracted procedure: k9013 
o|contracted procedure: k9016 
o|contracted procedure: k9025 
o|contracted procedure: k9035 
o|contracted procedure: k9041 
o|contracted procedure: k9043 
o|contracted procedure: k9082 
o|contracted procedure: k9095 
o|contracted procedure: k9098 
o|contracted procedure: k9117 
o|contracted procedure: k9128 
o|contracted procedure: k9131 
o|contracted procedure: k9137 
o|contracted procedure: k9143 
o|contracted procedure: k9148 
o|contracted procedure: k9151 
o|contracted procedure: k9157 
o|contracted procedure: k9169 
o|contracted procedure: k9172 
o|contracted procedure: k9178 
o|contracted procedure: k9181 
o|contracted procedure: k9186 
o|contracted procedure: k9193 
o|contracted procedure: k9204 
o|contracted procedure: k9266 
o|contracted procedure: k9272 
o|contracted procedure: k9219 
o|contracted procedure: k9227 
o|contracted procedure: k9238 
o|contracted procedure: k9241 
o|contracted procedure: k9250 
o|contracted procedure: k9260 
o|contracted procedure: k9281 
o|contracted procedure: k9322 
o|contracted procedure: k9292 
o|contracted procedure: k9317 
o|contracted procedure: k9320 
o|contracted procedure: k9314 
o|contracted procedure: k9295 
o|contracted procedure: k9304 
o|contracted procedure: k9307 
o|contracted procedure: k9334 
o|contracted procedure: k9337 
o|contracted procedure: k9346 
o|contracted procedure: k9356 
o|contracted procedure: k9374 
o|contracted procedure: k9385 
o|contracted procedure: k9388 
o|contracted procedure: k9397 
o|contracted procedure: k9407 
o|contracted procedure: k9458 
o|contracted procedure: k9428 
o|contracted procedure: k9453 
o|contracted procedure: k9456 
o|contracted procedure: k9450 
o|contracted procedure: k9431 
o|contracted procedure: k9440 
o|contracted procedure: k9443 
o|contracted procedure: k9476 
o|contracted procedure: k9565 
o|contracted procedure: k9547 
o|contracted procedure: k9576 
o|contracted procedure: k9579 
o|contracted procedure: k9588 
o|contracted procedure: k9598 
o|contracted procedure: k9618 
o|contracted procedure: k9621 
o|contracted procedure: k9626 
o|contracted procedure: k9637 
o|contracted procedure: k9640 
o|contracted procedure: k9649 
o|contracted procedure: k9659 
o|contracted procedure: k9682 
o|contracted procedure: k9693 
o|contracted procedure: k9702 
o|contracted procedure: k9705 
o|contracted procedure: k9707 
o|contracted procedure: k9713 
o|contracted procedure: k9748 
o|contracted procedure: k9757 
o|contracted procedure: k9760 
o|contracted procedure: k9773 
o|contracted procedure: k9787 
o|contracted procedure: k9789 
o|contracted procedure: k9797 
o|contracted procedure: k9830 
o|contracted procedure: k9838 
o|contracted procedure: k9834 
o|contracted procedure: k9845 
o|contracted procedure: k9851 
o|contracted procedure: k9858 
o|contracted procedure: k9868 
o|contracted procedure: k9877 
o|contracted procedure: k9874 
o|contracted procedure: k9915 
o|contracted procedure: k9926 
o|contracted procedure: k9920 
o|contracted procedure: k9939 
o|contracted procedure: k9945 
o|contracted procedure: k9955 
o|contracted procedure: k9965 
o|contracted procedure: k9973 
o|contracted procedure: k9977 
o|contracted procedure: k9989 
o|contracted procedure: k9998 
o|contracted procedure: k10015 
o|contracted procedure: k10018 
o|contracted procedure: k10026 
o|contracted procedure: k10124 
o|contracted procedure: k10035 
o|contracted procedure: k10056 
o|contracted procedure: k10064 
o|contracted procedure: k10073 
o|contracted procedure: k10082 
o|contracted procedure: k10099 
o|contracted procedure: k10102 
o|contracted procedure: k10113 
o|contracted procedure: k10176 
o|contracted procedure: k10184 
o|contracted procedure: k10187 
o|contracted procedure: k10211 
o|contracted procedure: k10213 
o|contracted procedure: k10228 
o|contracted procedure: k10233 
o|contracted procedure: k10260 
o|contracted procedure: k10289 
o|contracted procedure: k10299 
o|contracted procedure: k10304 
o|contracted procedure: k10319 
o|contracted procedure: k10310 
o|contracted procedure: k10340 
o|contracted procedure: k10358 
o|contracted procedure: k10387 
o|contracted procedure: k10394 
o|contracted procedure: k10424 
o|contracted procedure: k10444 
o|contracted procedure: k10447 
o|contracted procedure: k10464 
o|contracted procedure: k10458 
o|inlining procedure: k10455 
o|inlining procedure: k10455 
o|contracted procedure: k10481 
o|contracted procedure: k10510 
o|contracted procedure: k10513 
o|contracted procedure: k10518 
o|contracted procedure: k10522 
o|contracted procedure: k10528 
o|contracted procedure: k10532 
o|contracted procedure: k10538 
o|contracted procedure: k10542 
o|contracted procedure: k10558 
o|contracted procedure: k10566 
o|contracted procedure: k10562 
o|contracted procedure: k10576 
o|contracted procedure: k10587 
o|contracted procedure: k10596 
o|contracted procedure: k10599 
o|contracted procedure: k10690 
o|contracted procedure: k10701 
o|contracted procedure: k10710 
o|contracted procedure: k10713 
o|contracted procedure: k10736 
o|contracted procedure: k10738 
o|contracted procedure: k10750 
o|contracted procedure: k10764 
o|contracted procedure: k10778 
o|contracted procedure: k10780 
o|contracted procedure: k10804 
o|contracted procedure: k10789 
o|contracted procedure: k10795 
o|contracted procedure: k10798 
o|contracted procedure: k10792 
o|contracted procedure: k10809 
o|contracted procedure: k10811 
o|contracted procedure: k10823 
o|contracted procedure: k10850 
o|contracted procedure: k10832 
o|contracted procedure: k10841 
o|contracted procedure: k10835 
o|contracted procedure: k10847 
o|contracted procedure: k10855 
o|contracted procedure: k10865 
o|contracted procedure: k10870 
o|contracted procedure: k10899 
o|contracted procedure: k10881 
o|contracted procedure: k10890 
o|contracted procedure: k10884 
o|contracted procedure: k10896 
o|contracted procedure: k10904 
o|contracted procedure: k10919 
o|contracted procedure: k10916 
o|contracted procedure: k10927 
o|contracted procedure: k10941 
o|contracted procedure: k10953 
o|contracted procedure: k10967 
o|contracted procedure: k10979 
o|contracted procedure: k11002 
o|contracted procedure: k10990 
o|contracted procedure: k10996 
o|contracted procedure: k10999 
o|contracted procedure: k10993 
o|contracted procedure: k11007 
o|contracted procedure: k11016 
o|contracted procedure: k11048 
o|contracted procedure: k11027 
o|contracted procedure: k11036 
o|contracted procedure: k11030 
o|contracted procedure: k11045 
o|contracted procedure: k11053 
o|contracted procedure: k11068 
o|contracted procedure: k11073 
o|contracted procedure: k11083 
o|contracted procedure: k11092 
o|contracted procedure: k11089 
o|contracted procedure: k11106 
o|contracted procedure: k11104 
o|contracted procedure: k11118 
o|contracted procedure: k11125 
o|contracted procedure: k11148 
o|contracted procedure: k11136 
o|contracted procedure: k11142 
o|contracted procedure: k11145 
o|contracted procedure: k11139 
o|contracted procedure: k11153 
o|contracted procedure: k11155 
o|contracted procedure: k11179 
o|contracted procedure: k11164 
o|contracted procedure: k11176 
o|contracted procedure: k11170 
o|contracted procedure: k11173 
o|contracted procedure: k11167 
o|contracted procedure: k11184 
o|contracted procedure: k11191 
o|contracted procedure: k11196 
o|contracted procedure: k11203 
o|contracted procedure: k11208 
o|contracted procedure: k11220 
o|contracted procedure: k11222 
o|contracted procedure: k11248 
o|contracted procedure: k11253 
o|contracted procedure: k11269 
o|contracted procedure: k11277 
o|contracted procedure: k11291 
o|contracted procedure: k11296 
o|contracted procedure: k11314 
o|contracted procedure: k11330 
o|contracted procedure: k11346 
o|contracted procedure: k11351 
o|contracted procedure: k11367 
o|contracted procedure: k11372 
o|contracted procedure: k11377 
o|contracted procedure: k11382 
o|contracted procedure: k11387 
o|contracted procedure: k11392 
o|contracted procedure: k11416 
o|contracted procedure: k11421 
o|contracted procedure: k11426 
o|contracted procedure: k11431 
o|contracted procedure: k11436 
o|contracted procedure: k11441 
o|contracted procedure: k11483 
o|contracted procedure: k11497 
o|contracted procedure: k11502 
o|contracted procedure: k11507 
o|contracted procedure: k11512 
o|contracted procedure: k11517 
o|contracted procedure: k11522 
o|contracted procedure: k11567 
o|contracted procedure: k11578 
o|contracted procedure: k11585 
o|contracted procedure: k11562 
o|contracted procedure: k11596 
o|contracted procedure: k11607 
o|contracted procedure: k11614 
o|contracted procedure: k11591 
o|contracted procedure: k11637 
o|contracted procedure: k11635 
o|contracted procedure: k11646 
o|contracted procedure: k11669 
o|contracted procedure: k11677 
o|contracted procedure: k542115093 
o|contracted procedure: k11688 
o|contracted procedure: k542115099 
o|contracted procedure: k11699 
o|contracted procedure: k542115105 
o|contracted procedure: k11719 
o|contracted procedure: k11717 
o|contracted procedure: k11731 
o|contracted procedure: k11738 
o|contracted procedure: k542115115 
o|contracted procedure: k11746 
o|contracted procedure: k11751 
o|contracted procedure: k11756 
o|contracted procedure: k11761 
o|contracted procedure: k11766 
o|contracted procedure: k11771 
o|contracted procedure: k11776 
o|contracted procedure: k11802 
o|contracted procedure: k11808 
o|contracted procedure: k11813 
o|contracted procedure: k11818 
o|contracted procedure: k11836 
o|contracted procedure: k11841 
o|contracted procedure: k11846 
o|contracted procedure: k11851 
o|contracted procedure: k11856 
o|contracted procedure: k11878 
o|contracted procedure: k11883 
o|contracted procedure: k11888 
o|contracted procedure: k11893 
o|contracted procedure: k11898 
o|contracted procedure: k11903 
o|contracted procedure: k11908 
o|contracted procedure: k11913 
o|contracted procedure: k11918 
o|contracted procedure: k11923 
o|contracted procedure: k11955 
o|contracted procedure: k11960 
o|contracted procedure: k11965 
o|contracted procedure: k11970 
o|contracted procedure: k11975 
o|contracted procedure: k11980 
o|contracted procedure: k11985 
o|contracted procedure: k11990 
o|contracted procedure: k11995 
o|contracted procedure: k12000 
o|contracted procedure: k12005 
o|contracted procedure: k12063 
o|contracted procedure: k542115162 
o|contracted procedure: k12074 
o|contracted procedure: k542115168 
o|contracted procedure: k12094 
o|contracted procedure: k12092 
o|contracted procedure: k12106 
o|contracted procedure: k12113 
o|contracted procedure: k542115178 
o|contracted procedure: k12124 
o|contracted procedure: k12129 
o|contracted procedure: k12134 
o|contracted procedure: k12139 
o|contracted procedure: k12162 
o|contracted procedure: k12168 
o|contracted procedure: k12173 
o|contracted procedure: k12189 
o|contracted procedure: k12194 
o|contracted procedure: k12199 
o|contracted procedure: k12204 
o|contracted procedure: k12209 
o|contracted procedure: k12214 
o|contracted procedure: k12219 
o|contracted procedure: k12224 
o|contracted procedure: k12229 
o|contracted procedure: k12234 
o|contracted procedure: k12239 
o|contracted procedure: k12244 
o|contracted procedure: k12249 
o|contracted procedure: k12254 
o|contracted procedure: k12259 
o|contracted procedure: k12264 
o|contracted procedure: k12269 
o|contracted procedure: k12274 
o|contracted procedure: k12279 
o|contracted procedure: k12284 
o|contracted procedure: k12289 
o|contracted procedure: k12294 
o|contracted procedure: k12299 
o|contracted procedure: k12304 
o|contracted procedure: k12309 
o|contracted procedure: k12314 
o|contracted procedure: k12319 
o|contracted procedure: k12324 
o|contracted procedure: k12329 
o|contracted procedure: k12334 
o|contracted procedure: k12339 
o|contracted procedure: k12427 
o|contracted procedure: k12429 
o|contracted procedure: k12436 
o|contracted procedure: k12441 
o|contracted procedure: k12448 
o|contracted procedure: k12453 
o|contracted procedure: k12455 
o|contracted procedure: k12462 
o|contracted procedure: k12467 
o|contracted procedure: k12469 
o|contracted procedure: k12476 
o|contracted procedure: k12481 
o|contracted procedure: k12491 
o|contracted procedure: k12488 
o|contracted procedure: k12496 
o|contracted procedure: k12503 
o|contracted procedure: k12508 
o|contracted procedure: k12515 
o|contracted procedure: k12520 
o|contracted procedure: k12533 
o|contracted procedure: k12606 
o|contracted procedure: k12538 
o|contracted procedure: k12541 
o|contracted procedure: k12546 
o|contracted procedure: k12578 
o|contracted procedure: k12557 
o|contracted procedure: k12575 
o|contracted procedure: k12563 
o|contracted procedure: k12569 
o|contracted procedure: k12572 
o|contracted procedure: k12566 
o|contracted procedure: k12560 
o|contracted procedure: k12583 
o|contracted procedure: k12590 
o|contracted procedure: k12593 
o|contracted procedure: k12626 
o|contracted procedure: k12608 
o|contracted procedure: k12623 
o|contracted procedure: k12614 
o|contracted procedure: k12618 
o|contracted procedure: k12666 
o|contracted procedure: k12672 
o|contracted procedure: k12674 
o|contracted procedure: k12680 
o|contracted procedure: k12688 
o|contracted procedure: k12690 
o|contracted procedure: k12696 
o|contracted procedure: k12704 
o|contracted procedure: k12706 
o|contracted procedure: k12712 
o|contracted procedure: k12718 
o|contracted procedure: k12726 
o|contracted procedure: k12732 
o|contracted procedure: k12738 
o|contracted procedure: k12746 
o|contracted procedure: k12752 
o|contracted procedure: k12760 
o|contracted procedure: k12767 
o|contracted procedure: k12777 
o|contracted procedure: k12783 
o|contracted procedure: k12789 
o|contracted procedure: k12795 
o|contracted procedure: k12801 
o|contracted procedure: k12807 
o|contracted procedure: k12813 
o|contracted procedure: k12819 
o|contracted procedure: k12825 
o|contracted procedure: k12833 
o|contracted procedure: k12839 
o|contracted procedure: k12845 
o|contracted procedure: k12853 
o|contracted procedure: k12855 
o|contracted procedure: k12861 
o|contracted procedure: k12869 
o|contracted procedure: k12875 
o|contracted procedure: k12882 
o|contracted procedure: k12890 
o|contracted procedure: k12897 
o|contracted procedure: k12902 
o|contracted procedure: k12908 
o|contracted procedure: k12910 
o|contracted procedure: k12924 
o|contracted procedure: k12929 
o|contracted procedure: k12947 
o|contracted procedure: k12968 
o|contracted procedure: k12973 
o|contracted procedure: k12993 
o|contracted procedure: k12998 
o|contracted procedure: k13003 
o|contracted procedure: k13008 
o|contracted procedure: k13013 
o|contracted procedure: k13018 
o|contracted procedure: k13058 
o|contracted procedure: k13063 
o|contracted procedure: k13068 
o|contracted procedure: k13073 
o|contracted procedure: k13078 
o|contracted procedure: k13083 
o|contracted procedure: k13129 
o|contracted procedure: k13134 
o|contracted procedure: k13139 
o|contracted procedure: k13144 
o|contracted procedure: k13149 
o|contracted procedure: k13154 
o|contracted procedure: k13214 
o|contracted procedure: k13216 
o|contracted procedure: k13219 
o|contracted procedure: k13223 
o|contracted procedure: k13234 
o|contracted procedure: k13243 
o|contracted procedure: k13246 
o|contracted procedure: k13252 
o|contracted procedure: k13255 
o|contracted procedure: k13262 
o|contracted procedure: k13275 
o|contracted procedure: k13280 
o|contracted procedure: k13291 
o|contracted procedure: k13300 
o|contracted procedure: k13303 
o|contracted procedure: k13305 
o|contracted procedure: k13358 
o|contracted procedure: k13366 
o|contracted procedure: k13369 
o|contracted procedure: k13374 
o|contracted procedure: k13394 
o|contracted procedure: k13397 
o|contracted procedure: k13407 
o|contracted procedure: k1340515817 
o|contracted procedure: k1340515821 
o|contracted procedure: k13417 
o|contracted procedure: k13426 
o|contracted procedure: k13432 
o|contracted procedure: k13437 
o|contracted procedure: k13444 
o|contracted procedure: k13452 
o|contracted procedure: k13468 
o|contracted procedure: k13473 
o|contracted procedure: k13478 
o|contracted procedure: k13504 
o|contracted procedure: k13515 
o|contracted procedure: k13524 
o|contracted procedure: k13527 
o|contracted procedure: k13557 
o|contracted procedure: k13538 
o|contracted procedure: k13549 
o|contracted procedure: k13553 
o|contracted procedure: k13596 
o|contracted procedure: k13563 
o|contracted procedure: k13574 
o|contracted procedure: k13593 
o|contracted procedure: k13580 
o|contracted procedure: k13590 
o|contracted procedure: k13614 
o|contracted procedure: k13650 
o|inlining procedure: k13647 
o|contracted procedure: k13698 
o|contracted procedure: k13706 
o|contracted procedure: k13717 
o|contracted procedure: k13727 
o|contracted procedure: k13737 
o|contracted procedure: k13750 
o|contracted procedure: k13753 
o|contracted procedure: k13809 
o|contracted procedure: k13812 
o|contracted procedure: k13814 
o|contracted procedure: k13829 
o|contracted procedure: k13826 
o|contracted procedure: k13837 
o|contracted procedure: k13881 
o|contracted procedure: k13874 
o|contracted procedure: k13853 
o|contracted procedure: k13864 
o|contracted procedure: k13867 
o|contracted procedure: k13869 
o|contracted procedure: k13899 
o|contracted procedure: k13991 
o|contracted procedure: k13904 
o|contracted procedure: k13937 
o|contracted procedure: k13942 
o|contracted procedure: k13966 
o|contracted procedure: k13950 
o|contracted procedure: k13959 
o|contracted procedure: k14002 
o|contracted procedure: k14005 
o|contracted procedure: k14014 
o|contracted procedure: k14024 
o|contracted procedure: k14032 
o|contracted procedure: k14035 
o|contracted procedure: k14044 
o|contracted procedure: k14054 
o|contracted procedure: k14092 
o|contracted procedure: k14112 
o|contracted procedure: k14117 
o|contracted procedure: k14125 
o|contracted procedure: k14144 
o|contracted procedure: k14156 
o|contracted procedure: k14159 
o|contracted procedure: k14162 
o|contracted procedure: k14170 
o|contracted procedure: k14179 
o|contracted procedure: k14182 
o|contracted procedure: k14197 
o|inlining procedure: k14200 
o|inlining procedure: k14200 
o|contracted procedure: k14213 
o|contracted procedure: k14220 
o|contracted procedure: k14234 
o|contracted procedure: k14245 
o|contracted procedure: k14268 
o|contracted procedure: k14277 
o|contracted procedure: k14288 
o|contracted procedure: k14296 
o|contracted procedure: k14322 
o|contracted procedure: k14328 
o|contracted procedure: k14331 
o|contracted procedure: k14351 
o|contracted procedure: k14345 
o|contracted procedure: k14372 
o|contracted procedure: k14366 
o|contracted procedure: k14390 
o|contracted procedure: k14396 
o|contracted procedure: k14416 
o|contracted procedure: k14410 
o|contracted procedure: k14468 
o|contracted procedure: k14479 
o|contracted procedure: k14483 
o|contracted procedure: k14498 
o|contracted procedure: k14507 
o|contracted procedure: k14510 
o|contracted procedure: k14548 
o|contracted procedure: k14534 
o|simplifications: ((let . 161)) 
o|removed binding forms: 1085 
o|inlining procedure: k6450 
o|inlining procedure: k6450 
o|inlining procedure: k7153 
o|inlining procedure: k7153 
o|inlining procedure: k7289 
o|inlining procedure: k7289 
o|inlining procedure: k7319 
o|inlining procedure: k7319 
o|inlining procedure: k7559 
o|inlining procedure: k7559 
o|inlining procedure: k7634 
o|inlining procedure: k7634 
o|inlining procedure: k7712 
o|inlining procedure: k7712 
o|inlining procedure: k7821 
o|inlining procedure: k7821 
o|inlining procedure: k7874 
o|inlining procedure: k7874 
o|inlining procedure: k7931 
o|inlining procedure: k7931 
o|inlining procedure: k8079 
o|inlining procedure: k8079 
o|inlining procedure: k8170 
o|inlining procedure: k8170 
o|inlining procedure: k8218 
o|inlining procedure: k8218 
o|inlining procedure: k8361 
o|inlining procedure: k8361 
o|inlining procedure: k8531 
o|inlining procedure: k8531 
o|inlining procedure: k8579 
o|inlining procedure: k8579 
o|inlining procedure: k8689 
o|inlining procedure: k8689 
o|inlining procedure: k8739 
o|inlining procedure: k8739 
o|inlining procedure: k8781 
o|inlining procedure: k8781 
o|inlining procedure: k9018 
o|inlining procedure: k9018 
o|inlining procedure: k9243 
o|inlining procedure: k9243 
o|inlining procedure: k9339 
o|inlining procedure: k9339 
o|inlining procedure: k9390 
o|inlining procedure: k9390 
o|inlining procedure: "(support.scm:766) node-subexpressions-set!" 
o|inlining procedure: "(support.scm:765) node-parameters-set!" 
o|inlining procedure: "(support.scm:764) node-class-set!" 
o|inlining procedure: k9581 
o|inlining procedure: k9581 
o|inlining procedure: k9642 
o|inlining procedure: k9642 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k11740 
o|inlining procedure: k14007 
o|inlining procedure: k14007 
o|inlining procedure: k14037 
o|inlining procedure: k14037 
o|replaced variables: 162 
o|removed binding forms: 3 
o|simplifications: ((if . 19)) 
o|replaced variables: 14 
o|removed binding forms: 216 
o|inlining procedure: k7581 
o|inlining procedure: k7581 
o|inlining procedure: k8259 
o|inlining procedure: k8259 
o|inlining procedure: k8259 
o|contracted procedure: k10262 
o|contracted procedure: k12548 
o|removed binding forms: 16 
o|substituted constant variable: r758217205 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed conditional forms: 1 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop501 0 
o|converted assignments to bindings: (loop501) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (for-each-loop39173932 loop3796 k14190 for-each-loop37203738 doloop37533754 loop3688 map-loop36123633 map-loop36433664 resolve3548 loop3559 loop3500 k13543 for-each-loop34743485 k13360 walkeach3431 walk3430 k13277 for-each-loop34093419 k13248 k13221 walk3361 for-each-loop33853395 k12682 k12754 k12827 k12847 k12863 k12884 k12526 k12065 k12076 k12115 k11671 k11679 k11690 k11701 k10752 k10766 k10872 k10906 k10929 k10955 k10981 k11018 k11055 k11127 repeat2589 k11033 k10887 k10838 for-each-loop25652577 for-each-loop24562477 k10410 k10373 k10178 matchn2295 loop2322 match12294 resolve2293 loop2269 k9791 k9826 for-each-loop22202232 for-each-loop22422260 walk2151 map-loop21602177 walk2108 map-loop21212141 rec2088 k9433 map-loop18661885 map-loop20522077 map-loop19461966 k9297 map-loop19761995 map-loop20132038 walk1896 map-loop18141831 fold1791 k8147 k8662 map-loop17631780 map-loop17371754 map-loop17081725 loop1689 map-loop16651682 map-loop16391656 loop1630 map-loop15901607 k8319 map-loop15691614 map-loop15271544 walk1471 map-loop14981515 map-loop14421459 k7787 k7951 map-loop14111428 map-loop13661383 map-loop13351352 map-loop12861303 map-loop12471264 k7538 map-loop12131230 loop1181 map-loop11161134 map-loop11431161 k7186 walk1056 map-loop10791096 k6473 k6648 k6719 loop789 k6522 k6552 k6582 map-loop751768 loop730 k6363 k6296 for-each-loop526568 for-each-loop575617 for-each-loop624650 k5761 loop458 k5644 loop380 fold373 k5446 k5309 k5316 loop311 loop295 loop244 loop234 loop220 err219 loop209 k4922 for-each-loop177195 test-mode99 collect98 for-each-loop103125 text42 dump43 for-each-loop4666) 
o|calls to known targets: 593 
o|identified direct recursive calls: f_5060 1 
o|identified direct recursive calls: f_5107 1 
o|identified direct recursive calls: f_5139 1 
o|identified direct recursive calls: f_5245 1 
o|identified direct recursive calls: f_5492 1 
o|identified direct recursive calls: f_5905 1 
o|identified direct recursive calls: f_6440 2 
o|identified direct recursive calls: f_9471 1 
o|identified direct recursive calls: f_9984 1 
o|identified direct recursive calls: f_13569 1 
o|fast box initializations: 87 
o|dropping unused closure argument: f_4854 
o|dropping unused closure argument: f_13671 
o|dropping unused closure argument: f_5905 
*/
/* end of file */
