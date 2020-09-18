#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <number_operations.h>
#define PROJECT_NAME    "number_operaions"

/* Prototypes for all the test functions */
void test_palindrome(void);
void test_even(void);
void test_prime(void);
void test_odd(void);
void test_positive(void);
void test_negative(void);
void test_divisible(void);
void test_sum_digits(void);
void test_perfect_square(void);
void test_armstrong(void);
void test_lcm(void);
void test_hcf(void);
void test_power_of_two(void);
void test_remainder(void);
void test_sum_nat(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
 
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "even", test_even);
  CU_add_test(suite, "prime", test_palindrome);
  CU_add_test(suite, "odd", test_odd);
  CU_add_test(suite, "positive", test_positive);
  CU_add_test(suite, "negative", test_negative);

  CU_add_test(suite, "divisible", test_divisible);
  CU_add_test(suite, "sum_of_digits", test_sum_digits);
  CU_add_test(suite, "perfect_square", test_perfect_square);
  CU_add_test(suite, "armstrong", test_armstrong);
  CU_add_test(suite, "lcm", test_lcm);
  CU_add_test(suite, "hcf", test_hcf);
  CU_add_test(suite, "power_of_two", test_power_of_two);
  CU_add_test(suite, "remainder", test_remainder);
  CU_add_test(suite, "Sum_nat_nos", test_sum_nat);
  
  


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
  
  /* Dummy fail*/
  CU_ASSERT(0 == is_palindrome(13));
}

void test_even(void) {
  CU_ASSERT(0 == is_even(3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == is_even(12));
}
void test_prime(void)
{CU_ASSERT(1 == is_prime(5));
  
  /* Dummy fail*/
  CU_ASSERT(-1 == is_prime(0));
}

void test_odd(void)
{
	CU_ASSERT(1 == is_odd(515));
  
  /* Dummy fail*/
  CU_ASSERT(0 == is_odd(14));
}

void test_positive(void){
	CU_ASSERT(1 == is_positive(515));
  
  /* Dummy fail*/
  CU_ASSERT(0 == is_positive(-13));
}

void test_negative(void){
	CU_ASSERT(1 == is_negative(-515));
  
  /* Dummy fail*/
  CU_ASSERT(0 == is_negative(13));
}

void test_divisible(void){
	CU_ASSERT(1 == is_divisible_by(5,5));
  
  /* Dummy fail*/
  CU_ASSERT(1 == is_divisible_by(5,10));
	
}

void test_sum_digits(void){
	CU_ASSERT(11 == calculate_sum_of_digits(515));
  
  /* Dummy fail*/
  CU_ASSERT(4 == calculate_sum_of_digits(13));
}

void test_perfect_square(void){
	CU_ASSERT(1 == isPerfectSquare(25));
  
  /* Dummy fail*/
  CU_ASSERT(0 == isPerfectSquare(13));
}

void test_armstrong(void)
{
	CU_ASSERT(1 == is_armstrong(153));
  
  /* Dummy fail*/
  CU_ASSERT(0 == is_armstrong(13));
}

void test_lcm(void){
	CU_ASSERT(10 == find_lcm(5,10));
  
  /* Dummy fail*/
  CU_ASSERT(2 == find_lcm(1,2));
}

void test_hcf(void){
	CU_ASSERT(1 == find_hcf(1,515));
  
  /* Dummy fail*/
  CU_ASSERT(13 == find_hcf(13,26));
}

void test_power_of_two(void){
	CU_ASSERT(1 == is_power_of_two(8));
  
  /* Dummy fail*/
  CU_ASSERT(0 == is_power_of_two(13));
}

void test_remainder(void){
	CU_ASSERT(0 == find_remainder(10,5));
  
  /* Dummy fail*/
  CU_ASSERT(1 == find_remainder(25,12));
}
void test_sum_nat(void){
	CU_ASSERT(3 == int find_sum_of_natural_nos(2);
  
  /* Dummy fail*/
  CU_ASSERT(1 == int find_sum_of_natural_nos(1));
}
	
