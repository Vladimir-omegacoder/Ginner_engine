#include <iostream>

#include "ginner_tests/ginner_math_tests/ginner_vec_tests.h"



#define RUN_TESTS

void run_tests()
{
#ifdef RUN_TESTS
	gin::test_vec();
#endif
}


int main()
{
	run_tests();
	return 0;
}