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
	TEST_ASSERT_EQUAL_STRING("isoscales", name);
}

void test_getTriangleName_given_2_3_3_should_return_isoscales(void) 
{
	char *name;
	
	name = getTriangleName(2, 3, 3);
	TEST_ASSERT_EQUAL_STRING("isoscales", name);
}

void test_getTriangleName_given_3_2_3_should_return_isoscales(void) 
{
	char *name;
	
	name = getTriangleName(3, 2, 3);
	TEST_ASSERT_EQUAL_STRING("isoscales", name);
}


void test_getTriangleName_given_1_2_3_should_return_scalene(void)
{

 char *name;
 
 name= getTriangleName(4,2,3);
 TEST_ASSERT_EQUAL_STRING("scalene", name);
}

void test_getTraingleName_given_3_3_3_should_return_equilateral(void)
{
	char *name;
	
	name = getTriangleName(3,3,3);
	TEST_ASSERT_EQUAL_STRING("equilateral",name);
}

void test_getTraingleName_given_1_1_3_should_return_invalid(void)
{
   char *name;
   
   name = getTriangleName(1,1,3);
   TEST_ASSERT_EQUAL_STRING("invalid",name);
}  



void test_areLengthAllStictlyPositive_given_0_4_3_should_throw_exception(void) {

    CEXCEPTION_T	err;
      Try{
          areLengthAllStictlyPositive(0,4,3) ;
		  TEST_FAIL_MESSAGE("Should generate an exception due to divide by 0.")
        } Catch(err) {
		TEST_ASSERT_EQUAL(ERR_DIVIDE_IS_NOT_STRICTLY_POSITIVE, err);
		printf("Success: Exception generated. Error code: %d.\n", err);
	}	 
		  	  
}

void test_areLengthAllStictlyPositive_given_2_4_3_should_not_throw_exception(void) {

    CEXCEPTION_T	err;
	Try {
		areLengthAllStictlyPositive(2,4,3) ;
		printf("Success: No exception generated.\n");
	} Catch(err) {
		TEST_FAIL_MESSAGE("Do not expect exception to be generated.")	
	}	
}

 //void test_areLengthAllStictlyPositive_given_3_4_8_should_throw_exception(void) {

  //CEXCEPTION_T  err;
  //Try{
  //    test_areLengthAllStictlyPositive(3,4,8) ;
	//  TEST_FAIL_MESSAGE("Should generate an expection due NoCorrect Side of triangle\n")
	//}Catch (err){
	//TEST_ASSERT_EQUAL( ERR_NOT_TRIANGLE, err);
//	printf("Sucess: Expection generated, Error code: %d.\n", err);
	//}
	
  // }








   