#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <number_operations.h>
#define PROJECT_NAME    "number_operaions"

/* Prototypes for all the test functions */
void test_palindrome(void);
void test_even(void);
void test_prime(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "not even", test_palindrome);
  CU_add_test(suite, "even", test_even);
  CU_add_test(suite, "prime", test_prime);
  


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_palindrome(void) {
  
  CU_ASSERT(1 == is_palindrome(515));
  
  
  CU_ASSERT(0 == is_palindrome(13));
}

void test_even(void) {
  CU_ASSERT(0 == is_even(3));
  
  
  CU_ASSERT(1 == is_even(12));
}
void test_prime(void)
{CU_ASSERT(1 == is_prime(5));
  
  
  CU_ASSERT(-1 == is_prime(0));
}
