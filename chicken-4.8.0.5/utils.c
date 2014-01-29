/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-cc.org
   2013-10-03 20:46
   Version 4.8.0.5 (stability/4.8.0) (rev 5bd53ac)
   macosx-unix-clang-x86-64 [ 64bit manyargs ptables ]
   compiled 2013-10-03 on aeryn.xorinia.dim (Darwin)
   command line: utils.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file utils.c
   unit: utils
*/

#include "chicken.h"


#if defined(_WIN32) && !defined(__CYGWIN__)
# include <windows.h>
# define C_HAS_MESSAGE_BOX 1
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort)
{
  int d = 0, r;
  int t = abort ? MB_YESNOCANCEL : MB_YESNO;

  switch(def) {
  case 0: d = MB_DEFBUTTON1; break;
  case 1: d = MB_DEFBUTTON2; break;
  case 2: d = MB_DEFBUTTON3;
  }

  r = MessageBox(NULL, msg, caption, t | MB_ICONQUESTION | d);

  switch(r) {
  case IDYES: return 1;
  case IDNO: return 0;
  default: return -1;
  }
}
#else
# define C_HAS_MESSAGE_BOX 0
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort) { return -1; }
#endif


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[88];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,115,121,115,116,101,109,42,32,102,115,116,114,54,50,32,46,32,97,114,103,115,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,7),40,102,95,53,56,51,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,97,108,108,32,46,32,102,105,108,101,54,55,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,12),40,102,95,54,50,48,32,99,49,49,53,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,57,56,32,103,49,49,48,49,50,48,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,113,115,32,115,116,114,56,52,32,46,32,116,109,112,56,51,56,53,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,7),40,102,95,55,55,51,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,13),40,102,95,55,54,56,32,101,120,50,48,51,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,7),40,102,95,55,56,51,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,7),40,102,95,55,57,50,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,20),40,102,95,55,56,55,32,46,32,97,114,103,115,49,57,55,50,48,54,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,7),40,102,95,55,56,49,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,15),40,102,95,55,54,51,32,107,49,57,54,50,48,50,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,7),40,102,95,56,50,52,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,102,95,56,49,57,32,101,120,49,57,48,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,7),40,102,95,56,50,57,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,7),40,102,95,56,51,56,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,20),40,102,95,56,51,51,32,46,32,97,114,103,115,49,56,52,49,57,49,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,7),40,102,95,56,50,55,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,15),40,102,95,56,49,52,32,107,49,56,51,49,56,57,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,102,95,56,48,54,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,7),40,102,95,56,57,52,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,38),40,99,111,109,112,105,108,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,49,51,56,32,46,32,116,109,112,49,51,55,49,51,57,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,18),40,102,95,57,51,54,32,103,50,51,48,50,51,49,50,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,36),40,115,99,97,110,45,105,110,112,117,116,45,108,105,110,101,115,32,114,120,50,49,53,32,46,32,116,109,112,50,49,52,50,49,54,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,39),40,102,95,57,52,56,32,97,50,52,55,50,53,50,32,97,50,52,54,50,53,51,32,97,50,52,53,50,53,52,32,97,50,52,52,50,53,53,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,103,101,116,45,105,110,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,8),40,102,95,49,49,51,57,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,31),40,121,101,115,45,111,114,45,110,111,63,32,115,116,114,50,54,51,32,46,32,116,109,112,50,54,50,50,54,52,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k959 */
static C_word C_fcall stub248(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub248(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_truep(C_a3);
C_r=C_fix((C_word)C_confirmation_dialog(t0,t1,t2,t3));
return C_r;}

C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_781)
static void C_ccall f_781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_904)
static void C_fcall f_904(C_word t0,C_word t1) C_noret;
C_noret_decl(f_909)
static void C_fcall f_909(C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_ccall f_776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_600)
static void C_ccall f_600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_575)
static void C_ccall f_575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_953)
static void C_ccall f_953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_564)
static void C_ccall f_564(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_564)
static void C_ccall f_564r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1085)
static void C_ccall f_1085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_538)
static void C_ccall f_538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_595)
static void C_ccall f_595(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_595)
static void C_ccall f_595r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_724)
static void C_ccall f_724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_722)
static void C_ccall f_722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_728)
static void C_ccall f_728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_712)
static void C_ccall f_712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static void C_ccall f_718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_550)
static void C_ccall f_550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_540)
static void C_ccall f_540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_542)
static void C_ccall f_542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_544)
static void C_ccall f_544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_827)
static void C_ccall f_827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static void C_fcall f_983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_985)
static void C_fcall f_985(C_word t0,C_word t1) C_noret;
C_noret_decl(f_668)
static void C_ccall f_668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_638)
static void C_ccall f_638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_758)
static void C_ccall f_758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_707)
static void C_ccall f_707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_742)
static void C_ccall f_742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_730)
static void C_ccall f_730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_732)
static void C_ccall f_732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_806)
static void C_ccall f_806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_643)
static void C_fcall f_643(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_824)
static void C_ccall f_824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1078)
static void C_ccall f_1078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1123)
static void C_ccall f_1123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_fcall f_1048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1040)
static void C_fcall f_1040(C_word t0,C_word t1) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;

C_noret_decl(trf_904)
static void C_fcall trf_904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_904(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_904(t0,t1);}

C_noret_decl(trf_909)
static void C_fcall trf_909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_909(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_909(t0,t1);}

C_noret_decl(trf_983)
static void C_fcall trf_983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_983(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_983(t0,t1);}

C_noret_decl(trf_985)
static void C_fcall trf_985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_985(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_985(t0,t1);}

C_noret_decl(trf_643)
static void C_fcall trf_643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_643(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_643(t0,t1,t2);}

C_noret_decl(trf_1048)
static void C_fcall trf_1048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1048(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1048(t0,t1);}

C_noret_decl(trf_1040)
static void C_fcall trf_1040(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1040(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1040(t0,t1);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* k1117 in k1114 in k1112 in k1110 in k1108 in k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:193: flush-output */
t2=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1114 in k1112 in k1110 in k1108 in k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1118,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=*((C_word*)lf[70]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1123,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t5=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(91),*((C_word*)lf[70]+1));}
else{
/* utils.scm:193: flush-output */
t3=*((C_word*)lf[75]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k1110 in k1108 in k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* utils.scm:191: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[78],((C_word*)t0)[4]);}
else{
/* utils.scm:191: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[79],((C_word*)t0)[4]);}}

/* k1112 in k1110 in k1108 in k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:191: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[77],((C_word*)t0)[4]);}

/* k1034 in get-input in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:188: string-trim-both */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_781 */
static void C_ccall f_781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_787,a[2]=((C_word*)t0)[4],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_801,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1527 */
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* f_783 */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_786,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:112: load-file */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k785 */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}

/* f_787 */
static void C_ccall f_787(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_787r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_787r(t0,t1,t2);}}

static void C_ccall f_787r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_792,a[2]=t2,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:107: k196 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k903 in scan-input-lines in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_fcall f_904(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_904,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_909,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_909(t5,((C_word*)t0)[3]);}

/* loop in k903 in scan-input-lines in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_fcall f_909(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_909,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_913,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* utils.scm:125: read-line */
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* f_773 */
static void C_ccall f_773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_776,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:110: delete-file* */
t3=*((C_word*)lf[29]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_973(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_973r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_973r(t0,t1,t2,t3);}}

static void C_ccall f_973r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t4=C_i_get_keyword(lf[58],t3,C_SCHEME_FALSE);
t5=C_i_get_keyword(lf[59],t3,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_981,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1139,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:171: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t6,lf[82],t3,t7);}

/* k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_883,2,t0,t1);}
t2=C_eqp(t1,lf[12]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* utils.scm:90: open-output-string */
t4=*((C_word*)lf[45]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k775 */
static void C_ccall f_776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:111: abort */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* f_936 in k934 in scan-input-lines in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_936,3,t0,t1,t2);}
/* utils.scm:123: g226227 */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[3],t2);}

/* k934 in scan-input-lines in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_935,2,t0,t1);}
t2=*((C_word*)lf[54]+1);
t3=((C_word*)t0)[2];
f_904(t3,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_936,a[2]=t2,a[3]=t1,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));}

/* k869 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:93: string-intersperse */
t2=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k598 in qs in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_600(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_600,2,t0,t1);}
t2=C_eqp(t1,lf[12]);
if(C_truep(t2)){
/* utils.scm:64: string-append */
t3=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[14],((C_word*)t0)[3],lf[15]);}
else{
t3=C_i_string_length(((C_word*)t0)[3]);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[16]);}
else{
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_620,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_638,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* string->list */
t11=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t0)[3]);}}}

/* k573 in read-all in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_575,2,t0,t1);}
if(C_truep(t1)){
/* read-string/port */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_583,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:56: with-input-from-file */
t3=*((C_word*)lf[8]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],((C_word*)t0)[3],t2,lf[9]);}}

/* k990 in get-input in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[60]);}
else{
t3=C_eqp(t1,C_fix(1));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[61]:lf[62]));}}

/* k876 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:90: display */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k951 */
static void C_ccall f_953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_953,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=C_i_foreign_string_argumentp(t2);
/* utils.scm:171: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(3,*((C_word*)lf[56]+1),t3,t4);}
else{
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub248(C_SCHEME_UNDEFINED,t1,C_SCHEME_FALSE,t4,((C_word*)t0)[5]));}}

/* k955 in k951 */
static void C_ccall f_957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub248(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]));}

/* read-all in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_564(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_564r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_564r(t0,t1,t2);}}

static void C_ccall f_564r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[6]+1):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_575,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:54: port? */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k1084 in k1082 in k1047 in k1045 in k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k537 in k535 in k533 */
static void C_ccall f_538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k535 in k533 */
static void C_ccall f_536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_posix_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* qs in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_595(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_595r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_595r(t0,t1,t2,t3);}}

static void C_ccall f_595r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_600,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* utils.scm:61: build-platform */
t5=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t4;
f_600(2,t5,C_i_car(t3));}}

/* k1082 in k1047 in k1045 in k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1083,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:203: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[72],((C_word*)t0)[3]);}

/* k533 */
static void C_ccall f_534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_534,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_536,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_2d13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_864,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:96: qs */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[11]);}

/* k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* write-char/port */
t3=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[10]);}

/* k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_867,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_871,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[12])){
/* utils.scm:93: string-intersperse */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,((C_word*)t0)[12]);}
else{
/* utils.scm:95: compile-file-options */
t5=*((C_word*)lf[21]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* utils.scm:90: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[42],((C_word*)t0)[10]);}

/* k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* utils.scm:90: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[39],((C_word*)t0)[10]);}

/* f_583 in k573 in read-all in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_583,2,t0,t1);}
/* read-string/port */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_SCHEME_FALSE,*((C_word*)lf[6]+1));}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_utils_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("utils_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(625)){
C_save(t1);
C_rereclaim2(625*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,88);
lf[0]=C_h_intern(&lf[0],7,"system\052");
lf[1]=C_h_intern(&lf[1],9,"\003syserror");
lf[2]=C_decode_literal(C_heaptop,"\376B\000\0003shell invocation failed with non-zero return status");
lf[3]=C_h_intern(&lf[3],6,"system");
lf[4]=C_h_intern(&lf[4],7,"sprintf");
lf[5]=C_h_intern(&lf[5],8,"read-all");
lf[6]=C_h_intern(&lf[6],18,"\003sysstandard-input");
lf[7]=C_h_intern(&lf[7],20,"\003sysread-string/port");
lf[8]=C_h_intern(&lf[8],20,"with-input-from-file");
lf[9]=C_h_intern(&lf[9],7,"\000binary");
lf[10]=C_h_intern(&lf[10],5,"port\077");
lf[11]=C_h_intern(&lf[11],2,"qs");
lf[12]=C_h_intern(&lf[12],7,"mingw32");
lf[13]=C_h_intern(&lf[13],13,"string-append");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\002\047\047");
lf[17]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000#\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000`\376\003\000\000\002\376\377\012\000\000\264\376\003\000\000\002\376\377\012\000\000~\376\003\000\000\002\376\377\012\000\000&\376\003\000"
"\000\002\376\377\012\000\000%\376\003\000\000\002\376\377\012\000\000$\376\003\000\000\002\376\377\012\000\000!\376\003\000\000\002\376\377\012\000\000\052\376\003\000\000\002\376\377\012\000\000;\376\003\000\000\002\376\377\012\000\000<\376\003\000\000\002\376\377\012\000\000>\376\003\000\000\002\376"
"\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000(\376\003\000\000\002\376\377\012\000\000)\376\003\000\000\002\376\377\012\000\000[\376\003\000\000\002\376\377\012\000\000]\376\003\000\000\002\376\377\012\000\000{\376\003\000\000\002\376\377\012\000\000}\376\003\000\000\002\376\377\012\000"
"\000\077\376\377\016");
lf[18]=C_h_intern(&lf[18],18,"string-concatenate");
lf[19]=C_h_intern(&lf[19],16,"\003sysstring->list");
lf[20]=C_h_intern(&lf[20],14,"build-platform");
lf[21]=C_h_intern(&lf[21],20,"compile-file-options");
lf[22]=C_h_intern(&lf[22],4,"load");
lf[23]=C_h_intern(&lf[23],12,"compile-file");
lf[24]=C_h_intern(&lf[24],8,"\000options");
lf[25]=C_h_intern(&lf[25],12,"\000output-file");
lf[26]=C_h_intern(&lf[26],8,"\000verbose");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[28]=C_h_intern(&lf[28],5,"abort");
lf[29]=C_h_intern(&lf[29],12,"delete-file\052");
lf[30]=C_h_intern(&lf[30],22,"with-exception-handler");
lf[31]=C_h_intern(&lf[31],30,"call-with-current-continuation");
lf[32]=C_h_intern(&lf[32],7,"on-exit");
lf[33]=C_h_intern(&lf[33],5,"print");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[35]=C_h_intern(&lf[35],17,"get-output-string");
lf[36]=C_h_intern(&lf[36],7,"display");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\004 -o ");
lf[40]=C_h_intern(&lf[40],19,"\003syswrite-char/port");
lf[41]=C_h_intern(&lf[41],18,"string-intersperse");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\004 -s ");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[45]=C_h_intern(&lf[45],18,"open-output-string");
lf[46]=C_h_intern(&lf[46],21,"create-temporary-file");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[48]=C_h_intern(&lf[48],12,"file-exists\077");
lf[49]=C_h_intern(&lf[49],13,"make-pathname");
lf[50]=C_h_intern(&lf[50],15,"\003sysget-keyword");
lf[51]=C_h_intern(&lf[51],5,"\000load");
lf[52]=C_h_intern(&lf[52],16,"scan-input-lines");
lf[53]=C_h_intern(&lf[53],9,"read-line");
lf[54]=C_h_intern(&lf[54],14,"irregex-search");
lf[55]=C_h_intern(&lf[55],7,"irregex");
lf[56]=C_h_intern(&lf[56],17,"\003sysmake-c-string");
lf[57]=C_h_intern(&lf[57],10,"yes-or-no\077");
lf[58]=C_h_intern(&lf[58],8,"\000default");
lf[59]=C_h_intern(&lf[59],6,"\000title");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN Runtime");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[66]=C_h_intern(&lf[66],16,"string-trim-both");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[70]=C_h_intern(&lf[70],19,"\003sysstandard-output");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000$Please enter \042yes\042, \042no\042 or \042abort\042.");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000\033Please enter \042yes\042 or \042no\042.");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[75]=C_h_intern(&lf[75],12,"flush-output");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\006/abort");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\010 (yes/no");
lf[81]=C_h_intern(&lf[81],5,"reset");
lf[82]=C_h_intern(&lf[82],6,"\000abort");
lf[83]=C_h_intern(&lf[83],17,"\003syspeek-c-string");
lf[84]=C_h_intern(&lf[84],14,"make-parameter");
lf[85]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\002-S\376\003\000\000\002\376B\000\000\003-O2\376\003\000\000\002\376B\000\000\003-d2\376\377\016");
lf[86]=C_h_intern(&lf[86],17,"register-feature!");
lf[87]=C_h_intern(&lf[87],5,"utils");
C_register_lf2(lf,88,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_534,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_716,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=t2,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
/* utils.scm:90: display */
t4=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[43],t2);}
else{
/* utils.scm:90: display */
t4=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[44],t2);}}

/* k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* utils.scm:89: build-platform */
t3=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_877,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:92: qs */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[13]);}

/* k549 in system* in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_552,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:45: system */
t3=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k551 in k549 in system* in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=t1;
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* utils.scm:47: ##sys#error */
t4=*((C_word*)lf[1]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[2],lf[2],((C_word*)t0)[3],t1);}}

/* k1108 in k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:191: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[80],((C_word*)t0)[4]);}

/* k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:191: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[6],((C_word*)t0)[4]);}

/* system* in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_546(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_546r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_546r(t0,t1,t2,t3);}}

static void C_ccall f_546r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_550,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t4,*((C_word*)lf[4]+1),t2,t3);}

/* f_814 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_814,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_819,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_827,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:104: with-exception-handler */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k539 in k537 in k535 in k533 */
static void C_ccall f_540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_irregex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_544,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:37: register-feature! */
t3=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[87]);}

/* k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_544,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_546,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[5]+1 /* (set! read-all ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_564,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[11]+1 /* (set! qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_595,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:80: make-parameter */
t6=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[85]);}

/* f_829 */
static void C_ccall f_829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_829,2,t0,t1);}
/* utils.scm:105: delete-file* */
t2=*((C_word*)lf[29]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* f_827 */
static void C_ccall f_827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_833,a[2]=((C_word*)t0)[3],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_847,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1525 */
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_fcall f_983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_983,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_985,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li27),tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1040,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word)li28),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_1040(t6,((C_word*)t0)[7]);}

/* k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_mk_bool(C_HAS_MESSAGE_BOX))){
t3=C_fudge(C_fix(4));
t4=t2;
f_983(t4,C_i_not(t3));}
else{
t3=t2;
f_983(t3,C_SCHEME_FALSE);}}

/* get-input in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_fcall f_985(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_985,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_991,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:lf[63]);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(C_i_string_ci_equal_p(((C_word*)t0)[4],lf[64]))){
/* utils.scm:176: dialog */
t4=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[6],t3,C_fix(0),((C_word*)t0)[7]);}
else{
if(C_truep(C_i_string_ci_equal_p(((C_word*)t0)[4],lf[65]))){
/* utils.scm:176: dialog */
t4=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[6],t3,C_fix(1),((C_word*)t0)[7]);}
else{
/* utils.scm:176: dialog */
t4=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[6],t3,C_fix(2),((C_word*)t0)[7]);}}}
else{
/* utils.scm:176: dialog */
t4=((C_word*)t0)[5];
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[6],t3,C_fix(3),((C_word*)t0)[7]);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:188: read-line */
t3=*((C_word*)lf[53]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k667 in map-loop98 in k637 in k598 in qs in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_668(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_668,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_643(t6,((C_word*)t0)[5],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_643(t6,((C_word*)t0)[5],t5);}}

/* f_819 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_819,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_824,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:104: k183 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_763 in k749 in k741 in k739 in k736 in k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in ... */
static void C_ccall f_763(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_763,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_768,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
/* utils.scm:107: with-exception-handler */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* f_768 */
static void C_ccall f_768(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_768,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_773,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:107: k196 */
t4=((C_word*)t0)[3];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* k637 in k598 in qs in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_643,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li4),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_643(t6,t2,t1);}

/* compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_695(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_695r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_695r(t0,t1,t2,t3);}}

static void C_ccall f_695r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(13);
t4=C_i_get_keyword(lf[24],t3,C_SCHEME_FALSE);
t5=C_i_get_keyword(lf[25],t3,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_703,a[2]=t3,a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_894,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:83: ##sys#get-keyword */
((C_proc5)C_fast_retrieve_proc(*((C_word*)lf[50]+1)))(5,*((C_word*)lf[50]+1),t6,lf[51],t3,t7);}

/* k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_692,2,t0,t1);}
t2=*((C_word*)lf[22]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_694,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}

/* k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_694,2,t0,t1);}
t2=C_mutate((C_word*)lf[23]+1 /* (set! compile-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_695,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t3=C_mutate((C_word*)lf[52]+1 /* (set! scan-input-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_897,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_948,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[57]+1 /* (set! yes-or-no? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_973,a[2]=t4,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}

/* k749 in k741 in k739 in k736 in k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in ... */
static void C_ccall f_750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_750,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
t2=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_758,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_763,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:107: call-with-current-continuation */
t5=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k757 in k749 in k741 in k739 in k736 in k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in ... */
static void C_ccall f_758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:107: g200 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_689,2,t0,t1);}
t2=C_mutate((C_word*)lf[21]+1 /* (set! compile-file-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_CSC_PROGRAM),C_fix(0));}

/* f_620 in k598 in qs in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_620(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_620,3,t0,t1,t2);}
t3=C_u_i_char_whitespacep(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_a_i_string(&a,2,C_make_character(92),t2):C_a_i_string(&a,1,t2)));}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(C_u_i_memq(t4,lf[17]))?C_a_i_string(&a,2,C_make_character(92),t2):C_a_i_string(&a,1,t2)));}}

/* k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_703,2,t0,t1);}
t2=C_i_get_keyword(lf[26],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_707,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_892,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:87: make-pathname */
t5=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_707,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[27]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_712(2,t4,C_SCHEME_FALSE);}
else{
/* utils.scm:88: create-temporary-file */
t4=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[47]);}}

/* k739 in k736 in k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in ... */
static void C_ccall f_740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* utils.scm:100: system */
t3=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k741 in k739 in k736 in k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in ... */
static void C_ccall f_742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_742,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_750(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_806,a[2]=((C_word*)t0)[4],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:103: on-exit */
t5=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k856 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in ... */
static void C_ccall f_857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:90: display */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_1139 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1139,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[81]+1));}

/* k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 in ... */
static void C_ccall f_730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_857,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* utils.scm:97: qs */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
t4=((C_word*)t0)[4];
/* utils.scm:97: qs */
t5=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in ... */
static void C_ccall f_732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
/* utils.scm:90: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[37],((C_word*)t0)[10]);}
else{
/* utils.scm:90: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[38],((C_word*)t0)[10]);}}

/* f_806 in k741 in k739 in k736 in k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in ... */
static void C_ccall f_806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_809,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_814,a[2]=((C_word*)t0)[2],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:104: call-with-current-continuation */
t4=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in ... */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* utils.scm:90: get-output-string */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}

/* k800 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tmp2528 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k639 in k637 in k598 in qs in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:68: string-concatenate */
t2=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k736 in k733 in k731 in k729 in k727 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in ... */
static void C_ccall f_738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* utils.scm:99: print */
t3=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[34],t1);}
else{
t3=t2;
f_740(2,t3,C_SCHEME_UNDEFINED);}}

/* map-loop98 in k637 in k598 in qs in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_fcall f_643(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_643,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_668,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
/* utils.scm:69: g104 */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k846 */
static void C_ccall f_847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tmp2526 */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}

/* k920 in k912 in loop in k903 in scan-input-lines in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* utils.scm:128: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_909(t2,((C_word*)t0)[2]);}}

/* k808 */
static void C_ccall f_809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:104: g187 */
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* f_833 */
static void C_ccall f_833(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_833r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_833r(t0,t1,t2);}}

static void C_ccall f_833r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_838,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:104: k183 */
t4=((C_word*)t0)[2];
((C_proc3)C_fast_retrieve_proc(t4))(3,t4,t1,t3);}

/* f_792 */
static void C_ccall f_792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_792,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* k912 in loop in k903 in scan-input-lines in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_913,2,t0,t1);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:127: rx */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* f_824 */
static void C_ccall f_824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_824,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k1077 in k1075 in k1047 in k1045 in k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),((C_word*)t0)[3]);}

/* k1075 in k1047 in k1045 in k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:202: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[71],((C_word*)t0)[3]);}

/* k1070 in k1047 in k1045 in k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:204: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1040(t2,((C_word*)t0)[3]);}

/* k866 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:90: display */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* k863 in k725 in k723 in k721 in k719 in k717 in k715 in k882 in k711 in k706 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:90: display */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* f_838 */
static void C_ccall f_838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_838,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_894 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_894,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k891 in k702 in compile-file in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:87: file-exists? */
t2=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1124 in k1122 in k1114 in k1112 in k1110 in k1108 in k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm:192: display */
t2=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[76],((C_word*)t0)[3]);}

/* k1122 in k1114 in k1112 in k1110 in k1108 in k1106 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:192: display */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* f_948 in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_948,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_953,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t7=C_i_foreign_string_argumentp(t2);
/* utils.scm:171: ##sys#make-c-string */
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[56]+1)))(3,*((C_word*)lf[56]+1),t6,t7);}
else{
t7=t6;
f_953(2,t7,C_SCHEME_FALSE);}}

/* k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:194: get-input */
t3=((C_word*)t0)[6];
f_985(t3,t2);}

/* k1045 in k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_1046(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1046,2,t0,t1);}
t2=(*a=C_VECTOR_TYPE|1,a[1]=t1,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1048,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(((C_word*)t2)[1]))){
t4=C_set_block_item(t2,0,lf[73]);
t5=t3;
f_1048(t5,t4);}
else{
if(C_truep(((C_word*)t0)[5])){
if(C_truep(C_i_string_equal_p(lf[74],((C_word*)t2)[1]))){
t4=C_set_block_item(t2,0,((C_word*)t0)[5]);
t5=t3;
f_1048(t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_1048(t5,t4);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_1048(t5,t4);}}}

/* k1047 in k1045 in k1043 in loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_fcall f_1048(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1048,NULL,2,t0,t1);}
if(C_truep(C_i_string_ci_equal_p(lf[67],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
if(C_truep(C_i_string_ci_equal_p(lf[68],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_truep(((C_word*)t0)[4])?C_i_string_ci_equal_p(lf[69],((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_FALSE);
if(C_truep(t2)){
/* utils.scm:199: abort */
t3=((C_word*)t0)[4];
((C_proc2)C_fast_retrieve_proc(t3))(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1071,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[70]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1076,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t6=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(10),*((C_word*)lf[70]+1));}
else{
t4=*((C_word*)lf[70]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1083,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t6=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(10),*((C_word*)lf[70]+1));}}}}}

/* loop in k982 in k980 in yes-or-no? in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_fcall f_1040(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1040,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1044,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=t2;
f_1044(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[70]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1107,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t5=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(10),*((C_word*)lf[70]+1));}}

/* scan-input-lines in k693 in k691 in k687 in k543 in k541 in k539 in k537 in k535 in k533 */
static void C_ccall f_897(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_897r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_897r(t0,t1,t2,t3);}}

static void C_ccall f_897r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[6]+1):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_904,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(t2))){
t7=t6;
f_904(t7,t2);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_935,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:123: irregex */
t8=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[105] = {
{"f_1118:utils_2escm",(void*)f_1118},
{"f_1116:utils_2escm",(void*)f_1116},
{"f_1111:utils_2escm",(void*)f_1111},
{"f_1113:utils_2escm",(void*)f_1113},
{"f_1035:utils_2escm",(void*)f_1035},
{"f_781:utils_2escm",(void*)f_781},
{"f_783:utils_2escm",(void*)f_783},
{"f_786:utils_2escm",(void*)f_786},
{"f_787:utils_2escm",(void*)f_787},
{"f_904:utils_2escm",(void*)f_904},
{"f_909:utils_2escm",(void*)f_909},
{"f_773:utils_2escm",(void*)f_773},
{"f_973:utils_2escm",(void*)f_973},
{"f_883:utils_2escm",(void*)f_883},
{"f_776:utils_2escm",(void*)f_776},
{"f_936:utils_2escm",(void*)f_936},
{"f_935:utils_2escm",(void*)f_935},
{"f_871:utils_2escm",(void*)f_871},
{"f_600:utils_2escm",(void*)f_600},
{"f_575:utils_2escm",(void*)f_575},
{"f_991:utils_2escm",(void*)f_991},
{"f_877:utils_2escm",(void*)f_877},
{"f_953:utils_2escm",(void*)f_953},
{"f_957:utils_2escm",(void*)f_957},
{"f_564:utils_2escm",(void*)f_564},
{"f_1085:utils_2escm",(void*)f_1085},
{"f_538:utils_2escm",(void*)f_538},
{"f_536:utils_2escm",(void*)f_536},
{"f_595:utils_2escm",(void*)f_595},
{"f_1083:utils_2escm",(void*)f_1083},
{"f_534:utils_2escm",(void*)f_534},
{"f_726:utils_2escm",(void*)f_726},
{"f_724:utils_2escm",(void*)f_724},
{"f_722:utils_2escm",(void*)f_722},
{"f_720:utils_2escm",(void*)f_720},
{"f_728:utils_2escm",(void*)f_728},
{"f_583:utils_2escm",(void*)f_583},
{"toplevel:utils_2escm",(void*)C_utils_toplevel},
{"f_716:utils_2escm",(void*)f_716},
{"f_712:utils_2escm",(void*)f_712},
{"f_718:utils_2escm",(void*)f_718},
{"f_550:utils_2escm",(void*)f_550},
{"f_552:utils_2escm",(void*)f_552},
{"f_1109:utils_2escm",(void*)f_1109},
{"f_1107:utils_2escm",(void*)f_1107},
{"f_546:utils_2escm",(void*)f_546},
{"f_814:utils_2escm",(void*)f_814},
{"f_540:utils_2escm",(void*)f_540},
{"f_542:utils_2escm",(void*)f_542},
{"f_544:utils_2escm",(void*)f_544},
{"f_829:utils_2escm",(void*)f_829},
{"f_827:utils_2escm",(void*)f_827},
{"f_983:utils_2escm",(void*)f_983},
{"f_981:utils_2escm",(void*)f_981},
{"f_985:utils_2escm",(void*)f_985},
{"f_668:utils_2escm",(void*)f_668},
{"f_819:utils_2escm",(void*)f_819},
{"f_763:utils_2escm",(void*)f_763},
{"f_768:utils_2escm",(void*)f_768},
{"f_638:utils_2escm",(void*)f_638},
{"f_695:utils_2escm",(void*)f_695},
{"f_692:utils_2escm",(void*)f_692},
{"f_694:utils_2escm",(void*)f_694},
{"f_750:utils_2escm",(void*)f_750},
{"f_758:utils_2escm",(void*)f_758},
{"f_689:utils_2escm",(void*)f_689},
{"f_620:utils_2escm",(void*)f_620},
{"f_703:utils_2escm",(void*)f_703},
{"f_707:utils_2escm",(void*)f_707},
{"f_740:utils_2escm",(void*)f_740},
{"f_742:utils_2escm",(void*)f_742},
{"f_857:utils_2escm",(void*)f_857},
{"f_1139:utils_2escm",(void*)f_1139},
{"f_730:utils_2escm",(void*)f_730},
{"f_732:utils_2escm",(void*)f_732},
{"f_806:utils_2escm",(void*)f_806},
{"f_735:utils_2escm",(void*)f_735},
{"f_801:utils_2escm",(void*)f_801},
{"f_641:utils_2escm",(void*)f_641},
{"f_738:utils_2escm",(void*)f_738},
{"f_643:utils_2escm",(void*)f_643},
{"f_847:utils_2escm",(void*)f_847},
{"f_921:utils_2escm",(void*)f_921},
{"f_809:utils_2escm",(void*)f_809},
{"f_833:utils_2escm",(void*)f_833},
{"f_792:utils_2escm",(void*)f_792},
{"f_913:utils_2escm",(void*)f_913},
{"f_824:utils_2escm",(void*)f_824},
{"f_1078:utils_2escm",(void*)f_1078},
{"f_1076:utils_2escm",(void*)f_1076},
{"f_1071:utils_2escm",(void*)f_1071},
{"f_867:utils_2escm",(void*)f_867},
{"f_864:utils_2escm",(void*)f_864},
{"f_838:utils_2escm",(void*)f_838},
{"f_894:utils_2escm",(void*)f_894},
{"f_892:utils_2escm",(void*)f_892},
{"f_1125:utils_2escm",(void*)f_1125},
{"f_1123:utils_2escm",(void*)f_1123},
{"f_948:utils_2escm",(void*)f_948},
{"f_1044:utils_2escm",(void*)f_1044},
{"f_1046:utils_2escm",(void*)f_1046},
{"f_1048:utils_2escm",(void*)f_1048},
{"f_1040:utils_2escm",(void*)f_1040},
{"f_897:utils_2escm",(void*)f_897},
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
S|  printf		4
S|  sprintf		1
S|  map		1
o|eliminated procedure checks: 15 
o|specializations:
o|  2 (eqv? (not float) *)
o|  2 (##sys#call-with-values (procedure () *) *)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (memq * list)
o|  1 (eqv? * (not float))
o|  3 (zero? fixnum)
o|Removed `not' forms: 3 
o|inlining procedure: k553 
o|inlining procedure: k553 
o|inlining procedure: k570 
o|inlining procedure: k570 
o|inlining procedure: k601 
o|inlining procedure: k601 
o|inlining procedure: k622 
o|inlining procedure: k622 
o|substituted constant variable: a636 
o|inlining procedure: k646 
o|inlining procedure: k646 
o|substituted constant variable: a676 
o|inlining procedure: k743 
o|inlining procedure: k743 
o|inlining procedure: k853 
o|inlining procedure: k853 
o|inlining procedure: k859 
o|inlining procedure: k859 
o|inlining procedure: k869 
o|inlining procedure: k869 
o|inlining procedure: k879 
o|inlining procedure: k879 
o|contracted procedure: k884 
o|inlining procedure: k914 
o|inlining procedure: k914 
o|inlining procedure: k988 
o|inlining procedure: k998 
o|inlining procedure: k998 
o|substituted constant variable: a1005 
o|substituted constant variable: a1007 
o|contracted procedure: k1015 
o|inlining procedure: k1013 
o|inlining procedure: k1024 
o|inlining procedure: k1024 
o|inlining procedure: k1013 
o|inlining procedure: k988 
o|inlining procedure: k1049 
o|inlining procedure: k1049 
o|inlining procedure: k1061 
o|inlining procedure: k1061 
o|propagated global variable: out320324 ##sys#standard-output 
o|propagated global variable: out330334 ##sys#standard-output 
o|inlining procedure: k1096 
o|inlining procedure: k1096 
o|inlining procedure: k1117 
o|propagated global variable: out299303 ##sys#standard-output 
o|inlining procedure: k1117 
o|inlining procedure: k1130 
o|inlining procedure: k1130 
o|propagated global variable: out287291 ##sys#standard-output 
o|replaced variables: 101 
o|removed binding forms: 18 
o|substituted constant variable: r7441152 
o|substituted constant variable: a8521153 
o|substituted constant variable: a8521154 
o|substituted constant variable: a8781163 
o|substituted constant variable: a8781164 
o|substituted constant variable: r9151165 
o|substituted constant variable: r9991168 
o|substituted constant variable: r9991169 
o|inlining procedure: k1013 
o|inlining procedure: k1013 
o|substituted constant variable: r10251171 
o|inlining procedure: k1013 
o|substituted constant variable: r10251172 
o|substituted constant variable: a10121173 
o|substituted constant variable: r10501175 
o|substituted constant variable: a11291189 
o|substituted constant variable: a11291190 
o|converted assignments to bindings: (get-input270) 
o|simplifications: ((let . 1)) 
o|replaced variables: 7 
o|removed binding forms: 99 
o|inlining procedure: k626 
o|inlining procedure: k626 
o|substituted constant variable: a10121197 
o|substituted constant variable: a10121198 
o|substituted constant variable: a10121199 
o|removed binding forms: 22 
o|inlining procedure: k1099 
o|simplifications: ((let . 1)) 
o|removed binding forms: 4 
o|substituted constant variable: r11001217 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 9) (##core#call . 56)) 
o|  call simplifications:
o|    ##sys#fudge
o|    not
o|    string=?
o|    string-ci=?	5
o|    ##sys#foreign-string-argument	2
o|    ##sys#foreign-fixnum-argument
o|    procedure?
o|    eof-object?	2
o|    ##sys#get-keyword	5
o|    write-char	7
o|    ##sys#apply	2
o|    string-length
o|    string->list
o|    pair?
o|    cons
o|    ##sys#setslot
o|    ##sys#slot	2
o|    char-whitespace?
o|    string	4
o|    null?	3
o|    car	3
o|    read-string	2
o|    apply
o|    eq?	7
o|contracted procedure: k556 
o|contracted procedure: k588 
o|contracted procedure: k567 
o|contracted procedure: k604 
o|contracted procedure: k673 
o|contracted procedure: k613 
o|contracted procedure: k624 
o|contracted procedure: k648 
o|contracted procedure: k651 
o|contracted procedure: k660 
o|contracted procedure: k670 
o|contracted procedure: k677 
o|contracted procedure: k698 
o|contracted procedure: k700 
o|contracted procedure: k704 
o|contracted procedure: k708 
o|contracted procedure: k713 
o|contracted procedure: k746 
o|contracted procedure: k754 
o|contracted procedure: k941 
o|contracted procedure: k900 
o|contracted procedure: k917 
o|contracted procedure: k931 
o|contracted procedure: k959 
o|contracted procedure: k965 
o|contracted procedure: k971 
o|contracted procedure: k976 
o|contracted procedure: k978 
o|contracted procedure: k995 
o|contracted procedure: k1001 
o|contracted procedure: k1009 
o|contracted procedure: k1021 
o|contracted procedure: k1027 
o|contracted procedure: k1052 
o|contracted procedure: k1058 
o|contracted procedure: k1064 
o|contracted procedure: k1092 
o|contracted procedure: k1099 
o|contracted procedure: k1136 
o|simplifications: ((let . 10)) 
o|removed binding forms: 39 
o|inlining procedure: k653 
o|inlining procedure: k653 
o|inlining procedure: k955 
o|replaced variables: 11 
o|substituted constant variable: r9561262 
o|removed binding forms: 9 
o|removed binding forms: 1 
o|customizable procedures: (k982 get-input270 k1047 loop283 k903 loop235 map-loop98119) 
o|calls to known targets: 22 
o|fast box initializations: 5 
*/
/* end of file */
