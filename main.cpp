#include <iostream>

#include "ginner_tests/ginner_math_tests/ginner_vec_tests.h"
#include "ginner_tests/ginner_math_tests/ginner_mat_tests.h"
#include "ginner_tests/ginner_math_tests/ginner_func_tests.h"


#define RUN_TESTS



void run_tests()
{
#ifdef RUN_TESTS
	gin::test_vec();
	gin::test_mat();
	gin::test_func();
#endif
}



int main()
{
	run_tests();
	return 0;
}