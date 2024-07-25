#pragma once
#include "../../ginner_math/ginner_math.h"
#include <cassert>

namespace gin
{

	void test_mat2x2()
	{

		gin::vec2<int> v, expected_v, actual_v;
		gin::mat2x2<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat2x2i(1, 2, 3, 4);
		m2 = mat2x2i(1, 2, 3, 4);
		v = gin::vec2i(1, 2);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat2x2i(1, 2, 3, 4);
		assert("mat2x2 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat2x2i(-1, -2, -3, -4);
		assert("mat2x2 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat2x2i(2, 4, 6, 8);
		assert("mat2x2 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat2x2i(0, 0, 0, 0);
		assert("mat2x2 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat2x2i(2, 4, 6, 8);
		assert("mat2x2 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat2x2i(0, 0, 0, 0);
		assert("mat2x2 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat2x2i(2, 3, 4, 5);
		assert("mat2x2 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat2x2 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat2x2i(2, 3, 4, 5);
		assert("mat2x2 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat2x2i(1, 2, 3, 4);
		assert("mat2x2 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat2x2i(0, 1, 2, 3);
		assert("mat2x2 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat2x2 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat2x2i(0, 1, 2, 3);
		assert("mat2x2 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat2x2i(1, 2, 3, 4);
		assert("mat2x2 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat2x2i(2, 4, 6, 8);
		assert("mat2x2 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat2x2i(2, 4, 6, 8);
		assert("mat2x2 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat2x2i(2, 4, 6, 8);
		assert("mat2x2 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat2x2i(0, 1, 1, 2);
		assert("mat2x2 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat2x2i(0, 1, 1, 2);
		assert("mat2x2 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat2x2i(1, 0, 1, 0);
		assert("mat2x2 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat2x2i(1, 0, 1, 0);
		assert("mat2x2 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat2x2i(1, 2, 3, 4);

		// Binary '*' operator (m * v)
		actual_v = m1 * v;
		expected_v = vec2i(5, 11);
		assert("mat2x2 test: binary '*' (m * v) : " && (actual_v == expected_v));

		// Binary '*' operator (v * m)
		actual_v = v * m1;
		expected_v = vec2i(7, 10);
		assert("mat2x2 test: binary '*' (v * m) : " && (actual_v == expected_v));

		std::cout << "mat2x2 tests passed.\n";

	}

	void test_mat2x3()
	{

		gin::vec2<int> v1, expected_v1, actual_v1;
		gin::vec3<int> v2, expected_v2, actual_v2;
		gin::mat2x3<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat2x3i(1, 2, 3, 4, 5, 6);
		m2 = mat2x3i(1, 2, 3, 4, 5, 6);
		v1 = gin::vec2i(1, 2);
		v2 = gin::vec3i(1, 2, 3);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat2x3i(1, 2, 3, 4, 5, 6);
		assert("mat2x3 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat2x3i(-1, -2, -3, -4, -5, -6);
		assert("mat2x3 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat2x3i(2, 4, 6, 8, 10, 12);
		assert("mat2x3 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat2x3i(0, 0, 0, 0, 0, 0);
		assert("mat2x3 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat2x3i(2, 4, 6, 8, 10, 12);
		assert("mat2x3 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat2x3i(0, 0, 0, 0, 0, 0);
		assert("mat2x3 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat2x3i(2, 3, 4, 5, 6, 7);
		assert("mat2x3 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat2x3 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat2x3i(2, 3, 4, 5, 6, 7);
		assert("mat2x3 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat2x3i(1, 2, 3, 4, 5, 6);
		assert("mat2x3 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat2x3i(0, 1, 2, 3, 4, 5);
		assert("mat2x3 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat2x3 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat2x3i(0, 1, 2, 3, 4, 5);
		assert("mat2x3 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat2x3i(1, 2, 3, 4, 5, 6);
		assert("mat2x3 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat2x3i(2, 4, 6, 8, 10, 12);
		assert("mat2x3 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat2x3i(2, 4, 6, 8, 10, 12);
		assert("mat2x3 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat2x3i(2, 4, 6, 8, 10, 12);
		assert("mat2x3 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat2x3i(0, 1, 1, 2, 2, 3);
		assert("mat2x3 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat2x3i(0, 1, 1, 2, 2, 3);
		assert("mat2x3 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat2x3i(1, 0, 1, 0, 1, 0);
		assert("mat2x3 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat2x3i(1, 0, 1, 0, 1, 0);
		assert("mat2x3 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat2x3i(1, 2, 3, 4, 5, 6);

		// Binary '*' operator (m * v)
		actual_v1 = m1 * v2;
		expected_v1 = vec2i(14, 32);
		assert("mat2x3 test: binary '*' (m * v) : " && (actual_v1 == expected_v1));

		// Binary '*' operator (v * m)
		actual_v2 = v1 * m1;
		expected_v2 = vec3i(9, 12, 15);
		assert("mat2x3 test: binary '*' (v * m) : " && (actual_v2 == expected_v2));

		std::cout << "mat2x3 tests passed.\n";

	}
	
	void test_mat2x4()
	{

		gin::vec2<int> v1, expected_v1, actual_v1;
		gin::vec4<int> v2, expected_v2, actual_v2;
		gin::mat2x4<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);
		m2 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);
		v1 = gin::vec2i(1, 2);
		v2 = gin::vec4i(1, 2, 3, 4);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat2x4 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat2x4i(-1, -2, -3, -4, -5, -6, -7, -8);
		assert("mat2x4 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat2x4i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat2x4 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat2x4i(0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat2x4 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat2x4i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat2x4 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat2x4i(0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat2x4 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat2x4i(2, 3, 4, 5, 6, 7, 8, 9);
		assert("mat2x4 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat2x4 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat2x4i(2, 3, 4, 5, 6, 7, 8, 9);
		assert("mat2x4 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat2x4 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat2x4i(0, 1, 2, 3, 4, 5, 6, 7);
		assert("mat2x4 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat2x4 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat2x4i(0, 1, 2, 3, 4, 5, 6, 7);
		assert("mat2x4 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat2x4 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat2x4i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat2x4 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat2x4i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat2x4 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat2x4i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat2x4 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat2x4i(0, 1, 1, 2, 2, 3, 3, 4);
		assert("mat2x4 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat2x4i(0, 1, 1, 2, 2, 3, 3, 4);
		assert("mat2x4 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat2x4i(1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat2x4 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat2x4i(1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat2x4 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '*' operator (m * v)
		actual_v1 = m1 * v2;
		expected_v1 = vec2i(30, 70);
		assert("mat2x4 test: binary '*' (m * v) : " && (actual_v1 == expected_v1));

		// Binary '*' operator (v * m)
		actual_v2 = v1 * m1;
		expected_v2 = vec4i(11, 14, 17, 20);
		assert("mat2x4 test: binary '*' (v * m) : " && (actual_v2 == expected_v2));

		std::cout << "mat2x4 tests passed.\n";

	}

	void test_mat3x2()
	{

		gin::vec2<int> v1, expected_v1, actual_v1;
		gin::vec3<int> v2, expected_v2, actual_v2;
		gin::mat3x2<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat3x2i(1, 2, 3, 4, 5, 6);
		m2 = mat3x2i(1, 2, 3, 4, 5, 6);
		v1 = gin::vec2i(1, 2);
		v2 = gin::vec3i(1, 2, 3);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat3x2i(1, 2, 3, 4, 5, 6);
		assert("mat3x2 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat3x2i(-1, -2, -3, -4, -5, -6);
		assert("mat3x2 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat3x2i(2, 4, 6, 8, 10, 12);
		assert("mat3x2 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat3x2i(0, 0, 0, 0, 0, 0);
		assert("mat3x2 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat3x2i(2, 4, 6, 8, 10, 12);
		assert("mat3x2 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat3x2i(0, 0, 0, 0, 0, 0);
		assert("mat3x2 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat3x2i(2, 3, 4, 5, 6, 7);
		assert("mat3x2 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat3x2 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat3x2i(2, 3, 4, 5, 6, 7);
		assert("mat3x2 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat3x2i(1, 2, 3, 4, 5, 6);
		assert("mat3x2 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat3x2i(0, 1, 2, 3, 4, 5);
		assert("mat3x2 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat3x2 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat3x2i(0, 1, 2, 3, 4, 5);
		assert("mat3x2 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat3x2i(1, 2, 3, 4, 5, 6);
		assert("mat3x2 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat3x2i(2, 4, 6, 8, 10, 12);
		assert("mat3x2 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat3x2i(2, 4, 6, 8, 10, 12);
		assert("mat3x2 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat3x2i(2, 4, 6, 8, 10, 12);
		assert("mat3x2 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat3x2i(0, 1, 1, 2, 2, 3);
		assert("mat3x2 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat3x2i(0, 1, 1, 2, 2, 3);
		assert("mat3x2 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat3x2i(1, 0, 1, 0, 1, 0);
		assert("mat3x2 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat3x2i(1, 0, 1, 0, 1, 0);
		assert("mat3x2 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat3x2i(1, 2, 3, 4, 5, 6);

		// Binary '*' operator (m * v)
		actual_v2 = m1 * v1;
		expected_v2 = vec3i(5, 11, 17);
		assert("mat3x2 test: binary '*' (m * v) : " && (actual_v1 == expected_v1));

		// Binary '*' operator (v * m)
		actual_v1 = v2 * m1;
		expected_v1 = vec2i(22, 28);
		assert("mat3x2 test: binary '*' (v * m) : " && (actual_v2 == expected_v2));

		std::cout << "mat3x2 tests passed.\n";

	}

	void test_mat3x3()
	{

		gin::vec3<int> v, expected_v, actual_v;
		gin::mat3x3<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);
		m2 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);
		v = gin::vec3i(1, 2, 3);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);
		assert("mat3x3 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat3x3i(-1, -2, -3, -4, -5, -6, -7, -8, -9);
		assert("mat3x3 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat3x3i(2, 4, 6, 8, 10, 12, 14, 16, 18);
		assert("mat3x3 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat3x3i(0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat3x3 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat3x3i(2, 4, 6, 8, 10, 12, 14, 16, 18);
		assert("mat3x3 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat3x3i(0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat3x3 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat3x3i(2, 3, 4, 5, 6, 7, 8, 9, 10);
		assert("mat3x3 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat3x3 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat3x3i(2, 3, 4, 5, 6, 7, 8, 9, 10);
		assert("mat3x3 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);
		assert("mat3x3 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat3x3i(0, 1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat3x3 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat3x3 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat3x3i(0, 1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat3x3 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);
		assert("mat3x3 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat3x3i(2, 4, 6, 8, 10, 12, 14, 16, 18);
		assert("mat3x3 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat3x3i(2, 4, 6, 8, 10, 12, 14, 16, 18);
		assert("mat3x3 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat3x3i(2, 4, 6, 8, 10, 12, 14, 16, 18);
		assert("mat3x3 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat3x3i(0, 1, 1, 2, 2, 3, 3, 4, 4);
		assert("mat3x3 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat3x3i(0, 1, 1, 2, 2, 3, 3, 4, 4);
		assert("mat3x3 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat3x3i(1, 0, 1, 0, 1, 0, 1, 0, 1);
		assert("mat3x3 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat3x3i(1, 0, 1, 0, 1, 0, 1, 0, 1);
		assert("mat3x3 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);

		// Binary '*' operator (m * v)
		actual_v = m1 * v;
		expected_v = vec3i(14, 32, 50);
		assert("mat3x3 test: binary '*' (m * v) : " && (actual_v == expected_v));

		// Binary '*' operator (v * m)
		actual_v = v * m1;
		expected_v = vec3i(30, 36, 42);
		assert("mat3x3 test: binary '*' (v * m) : " && (actual_v == expected_v));

		std::cout << "mat3x3 tests passed.\n";

	}

	void test_mat3x4()
	{

		gin::vec3<int> v1, expected_v1, actual_v1;
		gin::vec4<int> v2, expected_v2, actual_v2;
		gin::mat3x4<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		m2 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		v1 = gin::vec3i(1, 2, 3);
		v2 = gin::vec4i(1, 2, 3, 4);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		assert("mat3x4 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat3x4i(-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12);
		assert("mat3x4 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat3x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat3x4 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat3x4i(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat3x4 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat3x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat3x4 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat3x4i(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat3x4 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat3x4i(2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ,12, 13);
		assert("mat3x4 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat3x4 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat3x4i(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13);
		assert("mat3x4 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		assert("mat3x4 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat3x4i(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
		assert("mat3x4 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat3x4 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat3x4i(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
		assert("mat3x4 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		assert("mat3x4 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat3x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat3x4 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat3x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat3x4 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat3x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat3x4 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat3x4i(0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6);
		assert("mat3x4 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat3x4i(0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6);
		assert("mat3x4 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat3x4i(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat3x4 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat3x4i(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat3x4 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '*' operator (m * v)
		actual_v1 = m1 * v2;
		expected_v1 = vec3i(30, 70, 110);
		assert("mat3x4 test: binary '*' (m * v) : " && (actual_v1 == expected_v1));

		// Binary '*' operator (v * m)
		actual_v2 = v1 * m1;
		expected_v2 = vec4i(38, 44, 50, 56);
		assert("mat3x4 test: binary '*' (v * m) : " && (actual_v2 == expected_v2));

		std::cout << "mat3x4 tests passed.\n";

	}

	void test_mat4x2()
	{

		gin::vec2<int> v1, expected_v1, actual_v1;
		gin::vec4<int> v2, expected_v2, actual_v2;
		gin::mat4x2<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);
		m2 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);
		v1 = gin::vec2i(1, 2);
		v2 = gin::vec4i(1, 2, 3, 4);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat4x2 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat4x2i(-1, -2, -3, -4, -5, -6, -7, -8);
		assert("mat4x2 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat4x2i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat4x2 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat4x2i(0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat4x2 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat4x2i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat4x2 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat4x2i(0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat4x2 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat4x2i(2, 3, 4, 5, 6, 7, 8, 9);
		assert("mat4x2 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat4x2 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat4x2i(2, 3, 4, 5, 6, 7, 8, 9);
		assert("mat4x2 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat4x2 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat4x2i(0, 1, 2, 3, 4, 5, 6, 7);
		assert("mat4x2 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat4x2 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat4x2i(0, 1, 2, 3, 4, 5, 6, 7);
		assert("mat4x2 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);
		assert("mat4x2 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat4x2i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat4x2 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat4x2i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat4x2 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat4x2i(2, 4, 6, 8, 10, 12, 14, 16);
		assert("mat4x2 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat4x2i(0, 1, 1, 2, 2, 3, 3, 4);
		assert("mat4x2 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat4x2i(0, 1, 1, 2, 2, 3, 3, 4);
		assert("mat4x2 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat4x2i(1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat4x2 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat4x2i(1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat4x2 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);

		// Binary '*' operator (m * v)
		actual_v2 = m1 * v1;
		expected_v2 = vec4i(5, 11, 17, 23);
		assert("mat4x2 test: binary '*' (m * v) : " && (actual_v1 == expected_v1));

		// Binary '*' operator (v * m)
		actual_v1 = v2 * m1;
		expected_v1 = vec2i(50, 60);
		assert("mat4x2 test: binary '*' (v * m) : " && (actual_v2 == expected_v2));

		std::cout << "mat4x2 tests passed.\n";

	}

	void test_mat4x3()
	{

		gin::vec3<int> v1, expected_v1, actual_v1;
		gin::vec4<int> v2, expected_v2, actual_v2;
		gin::mat4x3<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		m2 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		v1 = gin::vec3i(1, 2, 3);
		v2 = gin::vec4i(1, 2, 3, 4);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		assert("mat4x3 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat4x3i(-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12);
		assert("mat4x3 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat4x3i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat4x3 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat4x3i(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat4x3 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat4x3i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat4x3 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat4x3i(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat4x3 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat4x3i(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13);
		assert("mat4x3 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat4x3 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat4x3i(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13);
		assert("mat4x3 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		assert("mat4x3 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat4x3i(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
		assert("mat4x3 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat4x3 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat4x3i(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
		assert("mat4x3 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		assert("mat4x3 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat4x3i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat4x3 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat4x3i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat4x3 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat4x3i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24);
		assert("mat4x3 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat4x3i(0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6);
		assert("mat4x3 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat4x3i(0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6);
		assert("mat4x3 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat4x3i(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat4x3 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat4x3i(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat4x3 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		// Binary '*' operator (m * v)
		actual_v2 = m1 * v1;
		expected_v2 = vec4i(14, 32, 50, 68);
		assert("mat4x3 test: binary '*' (m * v) : " && (actual_v1 == expected_v1));

		// Binary '*' operator (v * m)
		actual_v1 = v2 * m1;
		expected_v1= vec3i(70, 80, 90);
		assert("mat4x3 test: binary '*' (v * m) : " && (actual_v2 == expected_v2));

		std::cout << "mat4x3 tests passed.\n";

	}

	void test_mat4x4()
	{

		gin::vec4<int> v, expected_v, actual_v;
		gin::mat4x4<int> m1, m2, actual_m, expected_m;
		int k;

		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
		m2 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
		v = gin::vec4i(1, 2, 3, 4);
		k = 2;

		// Unary '+' operator
		actual_m = (+m1);
		expected_m = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
		assert("mat4x4 test: unary '+' : " && (actual_m == expected_m));

		// Unary '-' operator
		actual_m = (-m1);
		expected_m = mat4x4i(-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16);
		assert("mat4x4 test: unary '-' : " && (actual_m == expected_m));

		// Binary '+' operator
		actual_m = m1 + m2;
		expected_m = mat4x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32);
		assert("mat4x4 test: binary '+' : " && (actual_m == expected_m));

		// Binary '-' operator
		actual_m = m1 - m2;
		expected_m = mat4x4i(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat4x4 test: binary '-' : " && (actual_m == expected_m));

		// Unary '+=' operator
		m1 += m2;
		expected_m = mat4x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32);
		assert("mat4x4 test: unary '+=' : " && (m1 == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Unary '-=' operator
		m1 -= m2;
		expected_m = mat4x4i(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		assert("mat4x4 test: unary '-=' : " && (m1 == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Unary '++' operator (prefix)
		actual_m = ++m1;
		expected_m = mat4x4i(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17);
		assert("mat4x4 test: unary '++' (prefix) : " && (m1 == expected_m));
		assert("mat4x4 test: unary '++' (prefix) : " && (actual_m == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Unary '++' operator (postfix)
		actual_m = m1++;
		expected_m = mat4x4i(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17);
		assert("mat4x4 test: unary '++' (postfix) : " && (m1 == expected_m));
		expected_m = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
		assert("mat4x4 test: unary '++' (postfix) : " && (actual_m == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Unary '--' operator (prefix)
		actual_m = --m1;
		expected_m = mat4x4i(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
		assert("mat4x4 test: unary '--' (prefix) : " && (m1 == expected_m));
		assert("mat4x4 test: unary '--' (prefix) : " && (actual_m == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Unary '--' operator (postfix)
		actual_m = m1--;
		expected_m = mat4x4i(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
		assert("mat4x4 test: unary '--' (postfix) : " && (m1 == expected_m));
		expected_m = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
		assert("mat4x4 test: unary '--' (postfix) : " && (actual_m == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Binary '*' operator (m * k)
		actual_m = m1 * k;
		expected_m = mat4x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32);
		assert("mat4x4 test: binary '*' (m * k) : " && (actual_m == expected_m));

		// Binary '*' operator (k * m)
		actual_m = k * m1;
		expected_m = mat4x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32);
		assert("mat4x4 test: binary '*' (k * m) : " && (actual_m == expected_m));

		// Unary '*=' operator
		m1 *= k;
		expected_m = mat4x4i(2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32);
		assert("mat4x4 test: unary '*=' : " && (m1 == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Binary '/' operator (m / k)
		actual_m = m1 / k;
		expected_m = mat4x4i(0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8);
		assert("mat4x4 test: binary '/' : " && (actual_m == expected_m));

		// Unary '/=' operator
		m1 /= k;
		expected_m = mat4x4i(0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8);
		assert("mat4x4 test: unary '/=' : " && (m1 == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Binary '%' operator (m % k)
		actual_m = m1 % k;
		expected_m = mat4x4i(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat4x4 test: binary '%' : " && (actual_m == expected_m));

		// Unary '%=' operator
		m1 %= k;
		expected_m = mat4x4i(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0);
		assert("mat4x4 test: unary '%=' : " && (m1 == expected_m));
		m1 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Binary '*' operator (m * v)
		actual_v = m1 * v;
		expected_v = vec4i(30, 70, 110, 150);
		assert("mat4x4 test: binary '*' (m * v) : " && (actual_v == expected_v));

		// Binary '*' operator (v * m)
		actual_v = v * m1;
		expected_v = vec4i(90, 100, 110, 120);
		assert("mat4x4 test: binary '*' (v * m) : " && (actual_v == expected_v));

		std::cout << "mat4x4 tests passed.\n";

	}

	void test_matrix_multiplication()
	{

		mat2x2i m2x2, actual_m2x2, expected_m2x2;
		mat2x3i m2x3, actual_m2x3, expected_m2x3;
		mat2x4i m2x4, actual_m2x4, expected_m2x4;

		mat3x2i m3x2, actual_m3x2, expected_m3x2;
		mat3x3i m3x3, actual_m3x3, expected_m3x3;
		mat3x4i m3x4, actual_m3x4, expected_m3x4;

		mat4x2i m4x2, actual_m4x2, expected_m4x2;
		mat4x3i m4x3, actual_m4x3, expected_m4x3;
		mat4x4i m4x4, actual_m4x4, expected_m4x4;

		m2x2 = mat2x2i(1, 2, 3, 4);
		m2x3 = mat2x3i(1, 2, 3, 4, 5, 6);
		m2x4 = mat2x4i(1, 2, 3, 4, 5, 6, 7, 8);

		m3x2 = mat3x2i(1, 2, 3, 4, 5, 6);
		m3x3 = mat3x3i(1, 2, 3, 4, 5, 6, 7, 8, 9);
		m3x4 = mat3x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);

		m4x2 = mat4x2i(1, 2, 3, 4, 5, 6, 7, 8);
		m4x3 = mat4x3i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		m4x4 = mat4x4i(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

		// Binary '*' operator (m2x2 * m2x2)
		actual_m2x2 = m2x2 * m2x2;
		expected_m2x2 = mat2x2i(7, 10, 15, 22);
		assert("mat2x2 test: binary '*' (m2x2 * m2x2) : " && (actual_m2x2 == expected_m2x2));

		// Binary '*' operator (m2x2 * m2x3)
		actual_m2x3 = m2x2 * m2x3;
		expected_m2x3 = mat2x3i(9, 12, 15, 19, 26, 33);
		assert("mat2x2 test: binary '*' (m2x2 * m2x3) : " && (actual_m2x3 == expected_m2x3));

		// Binary '*' operator (m2x2 * m2x3)
		actual_m2x4 = m2x2 * m2x4;
		expected_m2x4 = mat2x4i(11, 14, 17, 20, 23, 30, 37, 44);
		assert("mat2x2 test: binary '*' (m2x2 * m2x4) : " && (actual_m2x4 == expected_m2x4));


		// Binary '*' operator (m2x3 * m3x2)
		actual_m2x2 = m2x3 * m3x2;
		expected_m2x2 = mat2x2i(22, 28, 49, 64);
		assert("mat2x3 test: binary '*' (m2x3 * m3x2) : " && (actual_m2x2 == expected_m2x2));

		// Binary '*' operator (m2x3 * m3x3)
		actual_m2x3 = m2x3 * m3x3;
		expected_m2x3 = mat2x3i(30, 36, 42, 66, 81, 96);
		assert("mat2x3 test: binary '*' (m2x3 * m3x3) : " && (actual_m2x3 == expected_m2x3));

		// Binary '*' operator (m2x3 * m3x4)
		actual_m2x4 = m2x3 * m3x4;
		expected_m2x4 = mat2x4i(38, 44, 50, 56, 83, 98, 113, 128);
		assert("mat2x3 test: binary '*' (m2x3 * m3x4) : " && (actual_m2x4 == expected_m2x4));


		// Binary '*' operator (m2x4 * m4x2)
		actual_m2x2 = m2x4 * m4x2;
		expected_m2x2 = mat2x2i(50, 60, 114, 140);
		assert("mat2x4 test: binary '*' (m2x4 * m4x2) : " && (actual_m2x2 == expected_m2x2));

		// Binary '*' operator (m2x4 * m4x3)
		actual_m2x3 = m2x4 * m4x3;
		expected_m2x3 = mat2x3i(70, 80, 90, 158, 184, 210);
		assert("mat2x4 test: binary '*' (m2x4 * m4x3) : " && (actual_m2x3 == expected_m2x3));

		// Binary '*' operator (m2x4 * m4x4)
		actual_m2x4 = m2x4 * m4x4;
		expected_m2x4 = mat2x4i(90, 100, 110, 120, 202, 228, 254, 280);
		assert("mat2x4 test: binary '*' (m2x4 * m4x4) : " && (actual_m2x4 == expected_m2x4));


		// Binary '*' operator (m3x2 * m2x2)
		actual_m3x2 = m3x2 * m2x2;
		expected_m3x2 = mat3x2i(7, 10, 15, 22, 23, 34);
		assert("mat3x2 test: binary '*' (m3x2 * m2x2) : " && (actual_m3x2 == expected_m3x2));

		// Binary '*' operator (m3x2 * m2x3)
		actual_m3x3 = m3x2 * m2x3;
		expected_m3x3 = mat3x3i(9, 12, 15, 19, 26, 33, 29, 40, 51);
		assert("mat3x2 test: binary '*' (m3x2 * m2x3) : " && (actual_m3x3 == expected_m3x3));

		// Binary '*' operator (m3x2 * m2x4)
		actual_m3x4 = m3x2 * m2x4;
		expected_m3x4 = mat3x4i(11, 14, 17, 20, 23, 30, 37, 44, 35, 46, 57, 68);
		assert("mat3x2 test: binary '*' (m3x2 * m2x4) : " && (actual_m3x4 == expected_m3x4));


		// Binary '*' operator (m3x3 * m3x2)
		actual_m3x2 = m3x3 * m3x2;
		expected_m3x2 = mat3x2i(22, 28, 49, 64, 76, 100);
		assert("mat3x2 test: binary '*' (m3x3 * m3x2) : " && (actual_m3x2 == expected_m3x2));

		// Binary '*' operator (m3x3 * m3x3)
		actual_m3x3 = m3x3 * m3x3;
		expected_m3x3 = mat3x3i(30, 36, 42, 66, 81, 96, 102, 126, 150);
		assert("mat3x3 test: binary '*' (m3x3 * m3x3) : " && (actual_m3x3 == expected_m3x3));

		// Binary '*' operator (m3x3 * m3x4)
		actual_m3x4 = m3x3 * m3x4;
		expected_m3x4 = mat3x4i(38, 44, 50, 56, 83, 98, 113, 128, 128, 152, 176, 200);
		assert("mat3x3 test: binary '*' (m3x3 * m3x4) : " && (actual_m3x4 == expected_m3x4));


		// Binary '*' operator (m3x4 * m4x2)
		actual_m3x2 = m3x4 * m4x2;
		expected_m3x2 = mat3x2i(50, 60, 114, 140, 178, 220);
		assert("mat3x4 test: binary '*' (m3x4 * m4x2) : " && (actual_m3x2 == expected_m3x2));

		// Binary '*' operator (m3x4 * m4x3)
		actual_m3x3 = m3x4 * m4x3;
		expected_m3x3 = mat3x3i(70, 80, 90, 158, 184, 210, 246, 288, 330);
		assert("mat3x4 test: binary '*' (m3x4 * m4x3) : " && (actual_m3x3 == expected_m3x3));

		// Binary '*' operator (m3x4 * m4x4)
		actual_m3x4 = m3x4 * m4x4;
		expected_m3x4 = mat3x4i(90, 100, 110, 120, 202, 228, 254, 280, 314, 356, 398, 440);
		assert("mat3x4 test: binary '*' (m3x4 * m4x4) : " && (actual_m3x4 == expected_m3x4));


		// Binary '*' operator (m4x2 * m2x2)
		actual_m4x2 = m4x2 * m2x2;
		expected_m4x2 = mat4x2i(7, 10, 15, 22, 23, 34, 31, 46);
		assert("mat4x2 test: binary '*' (m4x2 * m2x2) : " && (actual_m4x2 == expected_m4x2));

		// Binary '*' operator (m4x2 * m2x3)
		actual_m4x3 = m4x2 * m2x3;
		expected_m4x3 = mat4x3i(9, 12, 15, 19, 26, 33, 29, 40, 51, 39, 54, 69);
		assert("mat4x2 test: binary '*' (m4x2 * m2x3) : " && (actual_m4x3 == expected_m4x3));

		// Binary '*' operator (m4x2 * m2x4)
		actual_m4x4 = m4x2 * m2x4;
		expected_m4x4 = mat4x4i(11, 14, 17, 20, 23, 30, 37, 44, 35, 46, 57, 68, 47, 62, 77, 92);
		assert("mat4x2 test: binary '*' (m4x2 * m2x4) : " && (actual_m4x4 == expected_m4x4));


		// Binary '*' operator (m4x3 * m3x2)
		actual_m4x2 = m4x3 * m3x2;
		expected_m4x2 = mat4x2i(22, 28, 49, 64, 76, 100, 103, 136);
		assert("mat4x3 test: binary '*' (m4x3 * m3x2) : " && (actual_m4x2 == expected_m4x2));

		// Binary '*' operator (m4x3 * m3x3)
		actual_m4x3 = m4x3 * m3x3;
		expected_m4x3 = mat4x3i(30, 36, 42, 66, 81, 96, 102, 126, 150, 138, 171, 204);
		assert("mat4x3 test: binary '*' (m4x3 * m3x3) : " && (actual_m4x3 == expected_m4x3));

		// Binary '*' operator (m4x3 * m3x4)
		actual_m4x4 = m4x3 * m3x4;
		expected_m4x4 = mat4x4i(38, 44, 50, 56, 83, 98, 113, 128, 128, 152, 176, 200, 173, 206, 239, 272);
		assert("mat4x3 test: binary '*' (m4x3 * m3x4) : " && (actual_m4x4 == expected_m4x4));


		// Binary '*' operator (m4x4 * m4x2)
		actual_m4x2 = m4x4 * m4x2;
		expected_m4x2 = mat4x2i(50, 60, 114, 140, 178, 220, 242, 300);
		assert("mat4x4 test: binary '*' (m4x4 * m4x2) : " && (actual_m4x2 == expected_m4x2));

		// Binary '*' operator (m4x4 * m4x3)
		actual_m4x3 = m4x4 * m4x3;
		expected_m4x3 = mat4x3i(70, 80, 90, 158, 184, 210, 246, 288, 330, 334, 392, 450);
		assert("mat4x4 test: binary '*' (m4x4 * m4x3) : " && (actual_m4x3 == expected_m4x3));

		// Binary '*' operator (m4x4 * m4x4)
		actual_m4x4 = m4x4 * m4x4;
		expected_m4x4 = mat4x4i(90, 100, 110, 120, 202, 228, 254, 280, 314, 356, 398, 440, 426, 484, 542, 600);
		assert("mat4x4 test: binary '*' (m4x4 * m4x4) : " && (actual_m4x4 == expected_m4x4));

		std::cout << "matrix multiplication tests passed.\n";

	}



	void test_mat()
	{
		test_mat2x2();
		test_mat2x3();
		test_mat2x4();
		test_mat3x2();
		test_mat3x3();
		test_mat3x4();
		test_mat4x2();
		test_mat4x3();
		test_mat4x4();
		test_matrix_multiplication();
	}


}