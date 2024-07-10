#pragma once
#include "../../ginner_math/ginner_math.h"
#include <cassert>

namespace gin
{

	void test_vec1()
	{

		vec1i v1, v2, expected;
		int k;

		// Unary '+' operator
		v1.x = 2;
		expected.x = 2;
		assert("vec1 test: unary '+' : " && ((+v1) == expected));

		// Unary '-' operator
		v1.x = -44;
		expected.x = 44;
		assert("vec1 test: unary '-' : " && ((-v1) == expected));

		// Binary '+' operator
		v1.x = 10;
		v2.x = -22;
		expected.x = -12;
		assert("vec1 test: binary '+' : " && ((v1 + v2) == expected));
		assert("vec1 test: binary '+' : " && ((v2 + v1) == expected));

		// Binary '-' operator
		v1.x = -37;
		v2.x = -19;
		expected.x = -18;
		assert("vec1 test: binary '-' : " && ((v1 - v2) == expected));
		assert("vec1 test: binary '-' : " && ((v2 - v1) == -expected));

		// Unary '+=' operator
		v1.x = 13;
		v2.x = 1;
		expected.x = 14;
		assert("vec1 test: unary '+=' : " && ((v1 += v2) == expected));

		// Unary '-=' operator
		v1.x = 5;
		v2.x = -11;
		expected.x = 16;
		assert("vec1 test: unary '-=' : " && ((v1 -= v2) == expected));

		// Binary '*' operator
		v1.x = 50;
		k = 4;
		expected.x = 200;
		assert("vec1 test: binary '*' : " && ((v1 * k) == expected));
		assert("vec1 test: binary '*' : " && ((k * v1) == expected));

		// Unary '*=' operator
		v1.x = 14;
		k = -6;
		expected.x = -84;
		assert("vec1 test: unary '*=' : " && ((v1 *= k) == expected));

		// Binary '/' operator
		v1.x = 20;
		k = 4;
		expected.x = 5;
		assert("vec1 test: binary '/' : " && ((v1 / k) == expected));

		// Unary '/=' operator
		v1.x = 14;
		k = 2;
		expected.x = 7;
		assert("vec1 test: unary '/=' : " && ((v1 /= k) == expected));

		std::cout << "vec1 tests passed.\n";

	}

	void test_vec2()
	{

		vec2i v1, v2, expected;
		int k;

		// Unary '+' operator
		v1.x = 39;
		v1.y = -17;
		expected.x = 39;
		expected.y = -17;
		assert("vec2 test: unary '+' : " && ((+v1) == expected));

		// Unary '-' operator
		v1.x = 15;
		v1.y = -3;
		expected.x = -15;
		expected.y = 3;
		assert("vec2 test: unary '-' : " && ((-v1) == expected));

		// Binary '+' operator
		v1.x = -3;
		v1.y = -3;
		v2.x = -15;
		v2.y = 40;
		expected.x = -18;
		expected.y = 37;
		assert("vec2 test: binary '+' : " && ((v1 + v2) == expected));
		assert("vec2 test: binary '+' : " && ((v2 + v1) == expected));

		// Binary '-' operator
		v1.x = 1;
		v1.y = 33;
		v2.x = -2;
		v2.y = 57;
		expected.x = 3;
		expected.y = -24;
		assert("vec2 test: binary '-' : " && ((v1 - v2) == expected));
		assert("vec2 test: binary '-' : " && ((v2 - v1) == -expected));

		// Unary '+=' operator
		v1.x = 4;
		v1.y = -10;
		v2.x = 0;
		v2.y = 11;
		expected.x = 4;
		expected.y = 1;
		assert("vec2 test: unary '+=' : " && ((v1 += v2) == expected));

		// Unary '-=' operator
		v1.x = 17;
		v1.y = 22;
		v2.x = 14;
		v2.y = 30;
		expected.x = 3;
		expected.y = -8;
		assert("vec2 test: unary '-=' : " && ((v1 -= v2) == expected));

		// Binary '*' operator
		v1.x = 2;
		v1.y = 3;
		k = 5;
		expected.x = 10;
		expected.y = 15;
		assert("vec2 test: binary '*' : " && ((v1 * k) == expected));
		assert("vec2 test: binary '*' : " && ((k * v1) == expected));

		// Unary '*=' operator
		v1.x = 40;
		v1.y = -22;
		k = -5;
		expected.x = -200;
		expected.y = 110;
		assert("vec2 test: unary '*=' : " && ((v1 *= k) == expected));

		// Binary '/' operator
		v1.x = 6;
		v1.y = 16;
		k = 4;
		expected.x = 1;
		expected.y = 4;
		assert("vec2 test: binary '/' : " && ((v1 / k) == expected));

		// Unary '/=' operator
		v1.x = 40;
		v1.y = -22;
		k = -5;
		expected.x = -8;
		expected.y = 4;
		assert("vec2 test: unary '/=' : " && ((v1 /= k) == expected));

		std::cout << "vec2 tests passed.\n";

	}

	void test_vec3()
	{

		vec3i v1, v2, expected;
		int k;

		// Unary '+' operator
		v1.x = 39;
		v1.y = -17;
		v1.z = 0;
		expected.x = 39;
		expected.y = -17;
		expected.z = 0;
		assert("vec3 test: unary '+' : " && ((+v1) == expected));

		// Unary '-' operator
		v1.x = 15;
		v1.y = -3;
		v1.z = -9;
		expected.x = -15;
		expected.y = 3;
		expected.z = 9;
		assert("vec3 test: unary '-' : " && ((-v1) == expected));

		// Binary '+' operator
		v1.x = -3;
		v1.y = -3;
		v1.z = 55;
		v2.x = -15;
		v2.y = 40;
		v2.z = 150;
		expected.x = -18;
		expected.y = 37;
		expected.z = 205;
		assert("vec3 test: binary '+' : " && ((v1 + v2) == expected));
		assert("vec3 test: binary '+' : " && ((v2 + v1) == expected));

		// Binary '-' operator
		v1.x = 1;
		v1.y = 33;
		v1.z = -17;
		v2.x = -2;
		v2.y = 57;
		v2.z = 100;
		expected.x = 3;
		expected.y = -24;
		expected.z = -117;
		assert("vec3 test: binary '-' : " && ((v1 - v2) == expected));
		assert("vec3 test: binary '-' : " && ((v2 - v1) == -expected));

		// Unary '+=' operator
		v1.x = 4;
		v1.y = -10;
		v1.z = 44;
		v2.x = 0;
		v2.y = 11;
		v2.z = 11;
		expected.x = 4;
		expected.y = 1;
		expected.z = 55;
		assert("vec3 test: unary '+=' : " && ((v1 += v2) == expected));

		// Unary '-=' operator
		v1.x = 17;
		v1.y = 22;
		v1.z = 41;
		v2.x = 14;
		v2.y = 30;
		v2.z = 250;
		expected.x = 3;
		expected.y = -8;
		expected.z = -209;
		assert("vec3 test: unary '-=' : " && ((v1 -= v2) == expected));

		// Binary '*' operator
		v1.x = 2;
		v1.y = 3;
		v1.z = 14;
		k = 5;
		expected.x = 10;
		expected.y = 15;
		expected.z = 70;
		assert("vec3 test: binary '*' : " && ((v1 * k) == expected));
		assert("vec3 test: binary '*' : " && ((k * v1) == expected));

		// Unary '*=' operator
		v1.x = 40;
		v1.y = -22;
		v1.z = -2;
		k = -5;
		expected.x = -200;
		expected.y = 110;
		expected.z = 10;
		assert("vec3 test: unary '*=' : " && ((v1 *= k) == expected));

		// Binary '/' operator
		v1.x = 100;
		v1.y = 10;
		v1.z = 0;
		k = 10;
		expected.x = 10;
		expected.y = 1;
		expected.z = 0;
		assert("vec3 test: binary '/' : " && ((v1 / k) == expected));

		// Unary '/=' operator
		v1.x = 40;
		v1.y = -22;
		v1.z = -2;
		k = -5;
		expected.x = -8;
		expected.y = 4;
		expected.z = 0;
		assert("vec3 test: unary '/=' : " && ((v1 /= k) == expected));

		std::cout << "vec3 tests passed.\n";

	}

	void test_vec4()
	{

		vec4i v1, v2, expected;
		int k;

		// Unary '+' operator
		v1.x = 39;
		v1.y = -17;
		v1.z = 0;
		v1.w = 99;
		expected.x = 39;
		expected.y = -17;
		expected.z = 0;
		expected.w = 99;
		assert("vec4 test: unary '+' : " && ((+v1) == expected));

		// Unary '-' operator
		v1.x = 15;
		v1.y = -3;
		v1.z = -9;
		v1.w = 3;
		expected.x = -15;
		expected.y = 3;
		expected.z = 9;
		expected.w = -3;
		assert("vec4 test: unary '-' : " && ((-v1) == expected));

		// Binary '+' operator
		v1.x = -3;
		v1.y = -3;
		v1.z = 55;
		v1.w = 101;
		v2.x = -15;
		v2.y = 40;
		v2.z = 150;
		v2.w = 29;
		expected.x = -18;
		expected.y = 37;
		expected.z = 205;
		expected.w = 130;
		assert("vec4 test: binary '+' : " && ((v1 + v2) == expected));
		assert("vec4 test: binary '+' : " && ((v2 + v1) == expected));

		// Binary '-' operator
		v1.x = 1;
		v1.y = 33;
		v1.z = -17;
		v1.w = -458;
		v2.x = -2;
		v2.y = 57;
		v2.z = 100;
		v2.w = -500;
		expected.x = 3;
		expected.y = -24;
		expected.z = -117;
		expected.w = 42;
		assert("vec4 test: binary '-' : " && ((v1 - v2) == expected));
		assert("vec4 test: binary '-' : " && ((v2 - v1) == -expected));

		// Unary '+=' operator
		v1.x = 4;
		v1.y = -10;
		v1.z = 44;
		v1.w = 10;
		v2.x = 0;
		v2.y = 11;
		v2.z = 11;
		v2.w = 50;
		expected.x = 4;
		expected.y = 1;
		expected.z = 55;
		expected.w = 60;
		assert("vec4 test: unary '+=' : " && ((v1 += v2) == expected));

		// Unary '-=' operator
		v1.x = 17;
		v1.y = 22;
		v1.z = 41;
		v1.w = 91;
		v2.x = 14;
		v2.y = 30;
		v2.z = 250;
		v2.w = 77;
		expected.x = 3;
		expected.y = -8;
		expected.z = -209;
		expected.w = 14;
		assert("vec4 test: unary '-=' : " && ((v1 -= v2) == expected));

		// Binary '*' operator
		v1.x = 2;
		v1.y = 3;
		v1.z = 14;
		v1.w = -99;
		k = 5;
		expected.x = 10;
		expected.y = 15;
		expected.z = 70;
		expected.w = -495;
		assert("vec4 test: binary '*' : " && ((v1 * k) == expected));
		assert("vec4 test: binary '*' : " && ((k * v1) == expected));

		// Unary '*=' operator
		v1.x = 40;
		v1.y = -22;
		v1.z = -2;
		v1.w = 14;
		k = -5;
		expected.x = -200;
		expected.y = 110;
		expected.z = 10;
		expected.w = -70;
		assert("vec4 test: unary '*=' : " && ((v1 *= k) == expected));

		// Binary '/' operator
		v1.x = 225;
		v1.y = -2;
		v1.z = 1;
		v1.w = -7;
		k = 5;
		expected.x = 45;
		expected.y = 0;
		expected.z = 0;
		expected.w = -1;
		assert("vec4 test: binary '/' : " && ((v1 / k) == expected));

		// Unary '/=' operator
		v1.x = 40;
		v1.y = -22;
		v1.z = -2;
		v1.w = 14;
		k = -5;
		expected.x = -8;
		expected.y = 4;
		expected.z = 0;
		expected.w = -2;
		assert("vec4 test: unary '/=' : " && ((v1 /= k) == expected));

		std::cout << "vec4 tests passed.\n";

	}



	void test_vec()
	{
		test_vec1();
		test_vec2();
		test_vec3();
		test_vec4();
	}


}