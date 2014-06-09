#include "unity.h"
#include "Triangle.h"
#include "CException.h"


char *getTriangleName(int side1, int side2, int side3);



void setUp(void) {}



void tearDown(void) {}



void test_getTriangleName_given_2_2_3_should_return_isoscales(void)

{

 char *name;



 name = getTriangleName(2, 2, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)16);

}



void test_getTriangleName_given_2_3_3_should_return_isoscales(void)

{

 char *name;



 name = getTriangleName(2, 3, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)24);

}



void test_getTriangleName_given_3_2_3_should_return_isoscales(void)

{

 char *name;



 name = getTriangleName(3, 2, 3);

 UnityAssertEqualString((const char*)("isoscales"), (const char*)(name), (((void *)0)), (_U_UINT)32);

}





void test_getTriangleName_given_1_2_3_should_return_scalene(void)

{



 char *name;



 name= getTriangleName(4,2,3);

 UnityAssertEqualString((const char*)("scalene"), (const char*)(name), (((void *)0)), (_U_UINT)42);

}



void test_getTraingleName_given_3_3_3_should_return_equilateral(void)

{

 char *name;



 name = getTriangleName(3,3,3);

 UnityAssertEqualString((const char*)("equilateral"), (const char*)(name), (((void *)0)), (_U_UINT)50);

}



void test_getTraingleName_given_1_1_3_should_return_invalid(void)

{

   char *name;



   name = getTriangleName(1,1,3);

   UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)58);

}







void test_areLengthAllStictlyPositive_given_0_4_3_should_throw_exception(void) {



    unsigned int err;

      { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

          areLengthAllStictlyPositive(0,4,3) ;

    UnityFail( ("Should generate an exception due to divide by 0."), (_U_UINT)68);

        } else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)) {

  UnityAssertEqualNumber((_U_SINT)((ERR_DIVIDE_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)70, UNITY_DISPLAY_STYLE_INT);

  printf("Success: Exception generated. Error code: %d.\n", err);

 }



}



void test_areLengthAllStictlyPositive_given_2_4_3_should_not_throw_exception(void) {



    unsigned int err;

 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame) {

  areLengthAllStictlyPositive(2,4,3) ;

  printf("Success: No exception generated.\n");

 } else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)) {

  UnityFail( ("Do not expect exception to be generated."), (_U_UINT)83);

 }

}
