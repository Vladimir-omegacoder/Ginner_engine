#pragma once
#include "../../ginner_math/ginner_math.h"
#include <cassert>

namespace gin
{

	void test_vector_operations()
	{

		vec1f v1, expected_v1, actual_v1;
		vec2f v2, expected_v2, actual_v2;
		vec3f v3, expected_v3, actual_v3;
		vec4f v4, expected_v4, actual_v4;
		float expected_s, actual_s;
		const float eps = 1e-7f;

		v1 = vec1f(1);
		v2 = vec2f(1, 2);
		v3 = vec3f(1, 2, 3);
		v4 = vec4f(1, 2, 3, 4);

		// Dot product v1
		actual_s = dot(v1, v1);
		expected_s = 1.f;
		assert("dot product test: vec1: " && epsilon_equal(actual_s, expected_s, eps));

		// Dot product v2
		actual_s = dot(v2, v2);
		expected_s = 5.f;
		assert("dot product test: vec2: " && epsilon_equal(actual_s, expected_s, eps));

		// Dot product v3
		actual_s = dot(v3, v3);
		expected_s = 14.f;
		assert("dot product test: vec3: " && epsilon_equal(actual_s, expected_s, eps));

		// Dot product v4
		actual_s = dot(v4, v4);
		expected_s = 30.f;
		assert("dot product test: vec4: " && epsilon_equal(actual_s, expected_s, eps));

		// Cross product
		actual_v3 = cross(v3, v3);
		expected_v3 = vec3f(0, 0, 0);
		assert("cross product test: " && epsilon_equal(actual_v3, expected_v3, eps));

		// Length v1
		actual_s = length(v1);
		expected_s = 1.f;
		assert("length test: vec1: " && epsilon_equal(actual_s, expected_s, eps));

		// Length v2
		actual_s = length(v2);
		expected_s = 2.236067977f;
		assert("length test: vec2: " && epsilon_equal(actual_s, expected_s, eps));

		// Length v3
		actual_s = length(v3);
		expected_s = 3.741657386f;
		assert("length test: vec3: " && epsilon_equal(actual_s, expected_s, eps));

		// Length v4
		actual_s = length(v4);
		expected_s = 5.477225575f;
		assert("length test: vec4: " && epsilon_equal(actual_s, expected_s, eps));

		// Distance v1
		actual_s = distance(vec1f(0), v1);
		expected_s = 1.f;
		assert("Distance test: vec1: " && epsilon_equal(actual_s, expected_s, eps));

		// Distance v2
		actual_s = distance(vec2f(0, 0), v2);
		expected_s = 2.236067977f;
		assert("Distance test: vec2: " && epsilon_equal(actual_s, expected_s, eps));

		// Distance v3
		actual_s = distance(vec3f(0, 0, 0), v3);
		expected_s = 3.741657386f;
		assert("Distance test: vec3: " && epsilon_equal(actual_s, expected_s, eps));

		// Distance v4
		actual_s = distance(vec4f(0, 0, 0, 0), v4);
		expected_s = 5.477225575f;
		assert("Distance test: vec4: " && epsilon_equal(actual_s, expected_s, eps));

		// Normalize v1
		actual_v1 = normalize(v1);
		expected_v1 = vec1f(1);
		assert("Normalize test: vec1: " && epsilon_equal(actual_v1, expected_v1, eps));

		// Normalize v2
		actual_v2 = normalize(v2);
		expected_v2 = vec2f(0.447213595f, 0.894427191f);
		assert("Normalize test: vec2: " && epsilon_equal(actual_v2, expected_v2, eps));

		// Normalize v3
		actual_v3 = normalize(v3);
		expected_v3 = vec3f(0.267261241f, 0.534522483f, 0.801783725f);
		assert("Normalize test: vec3: " && epsilon_equal(actual_v3, expected_v3, eps));

		// Normalize v4
		actual_v4 = normalize(v4);
		expected_v4 = vec4f(0.182574185f, 0.365148371f, 0.547722557f, 0.730296743f);
		assert("Normalize test: vec4: " && epsilon_equal(actual_v4, expected_v4, eps));

		std::cout << "vector operations tests passed.\n";

	}

	void test_matrix_operations()
	{

		mat2x2f m2x2, expected_m2x2, actual_m2x2;
		mat2x3f m2x3, expected_m2x3, actual_m2x3;
		mat2x4f m2x4, expected_m2x4, actual_m2x4;
		mat3x2f m3x2, expected_m3x2, actual_m3x2;
		mat3x3f m3x3, expected_m3x3, actual_m3x3;
		mat3x4f m3x4, expected_m3x4, actual_m3x4;
		mat4x2f m4x2, expected_m4x2, actual_m4x2;
		mat4x3f m4x3, expected_m4x3, actual_m4x3;
		mat4x4f m4x4, expected_m4x4, actual_m4x4;
		float expected_s, actual_s;
		const float eps = 1e-7f;

		m2x2 = mat2x2f(1, 2, 3, 4);
		m2x3 = mat2x3f(1, 2, 3, 4, 5, 6);
		m2x4 = mat2x4f(1, 2, 3, 4, 5, 6, 7, 8);
		m3x2 = mat3x2f(1, 2, 3, 4, 5, 6);
		m3x3 = mat3x3f(4, 2, 1, 6, 1, 2, 3, 0, -4);
		m3x4 = mat3x4f(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		m4x2 = mat4x2f(1, 2, 3, 4, 5, 6, 7, 8);
		m4x3 = mat4x3f(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
		m4x4 = mat4x4f(2, 3, 2, 5, 1, 7, 0, 2, 3, 5, 2, 3, 9, 2, 1, 4);

		// Determinant m2x2
		actual_s = determinant(m2x2);
		expected_s = -2;
		assert("determinant test: mat2x2: " && epsilon_equal(actual_s, expected_s, eps));

		// Determinant m3x3
		actual_s = determinant(m3x3);
		expected_s = 41;
		assert("determinant test: mat3x3: " && epsilon_equal(actual_s, expected_s, eps));

		// Determinant m4x4
		actual_s = determinant(m4x4);
		expected_s = -299;
		assert("determinant test: mat4x4: " && epsilon_equal(actual_s, expected_s, eps));

		// Inverse m2x2
		actual_m2x2 = inverse(m2x2);
		expected_m2x2 = mat2x2f(-2, 1, 1.5f, -0.5f);
		assert("inverse test: mat2x2: " && epsilon_equal(actual_m2x2, expected_m2x2, eps));

		// Inverse m3x3
		actual_m3x3 = inverse(m3x3);
		expected_m3x3 = mat3x3f(
			-0.097560975f, 0.195121951f, 0.073170731f,
			0.731707317f, -0.463414634f, -0.048780487f,
			-0.073170731f, 0.146341463f, -0.195121951f);
		assert("inverse test: mat3x3: " && epsilon_equal(actual_m3x3, expected_m3x3, eps));

		// Inverse m4x4
		actual_m4x4 = inverse(m4x4);
		expected_m4x4 = mat4x4f(
			-0.123745819f, -0.026755852f,  0.063545150f,  0.120401337f,
			-0.083612040f,  0.117056856f,  0.096989966f, -0.026755852f,
			-0.137123745f, -0.408026755f,  0.719063545f, -0.163879598f,
			 0.354515050f,  0.103678929f, -0.371237458f,  0.033444816f);
		assert("inverse test: mat4x4: " && epsilon_equal(actual_m4x4, expected_m4x4, eps));

		// Transpose m2x2
		actual_m2x2 = transpose(m2x2);
		expected_m2x2 = mat2x2f(1, 3, 2, 4);
		assert("transpose test: mat2x2: " && epsilon_equal(actual_m2x2, expected_m2x2, eps));

		// Transpose m2x3
		actual_m3x2 = transpose(m2x3);
		expected_m3x2 = mat3x2f(1, 4, 2, 5, 3, 6);
		assert("transpose test: mat2x3: " && epsilon_equal(actual_m3x2, expected_m3x2, eps));

		// Transpose m2x4
		actual_m4x2 = transpose(m2x4);
		expected_m4x2 = mat4x2f(1, 5, 2, 6, 3, 7, 4, 8);
		assert("transpose test: mat2x4: " && epsilon_equal(actual_m4x2, expected_m4x2, eps));

		// Transpose m3x2
		actual_m2x3 = transpose(m3x2);
		expected_m2x3 = mat2x3f(1, 3, 5, 2, 4, 6);
		assert("transpose test: mat3x2: " && epsilon_equal(actual_m2x3, expected_m2x3, eps));

		// Transpose m3x3
		actual_m3x3 = transpose(m3x3);
		expected_m3x3 = mat3x3f(4, 6, 3, 2, 1, 0, 1, 2, -4);
		assert("transpose test: mat3x3: " && epsilon_equal(actual_m3x3, expected_m3x3, eps));

		// Transpose m3x4
		actual_m4x3 = transpose(m3x4);
		expected_m4x3 = mat4x3f(1, 5, 9, 2, 6, 10, 3, 7, 11, 4, 8, 12);
		assert("transpose test: mat3x4: " && epsilon_equal(actual_m4x3, expected_m4x3, eps));

		// Transpose m4x2
		actual_m2x4 = transpose(m4x2);
		expected_m2x4 = mat2x4f(1, 3, 5, 7, 2, 4, 6, 8);
		assert("transpose test: mat4x2: " && epsilon_equal(actual_m2x4, expected_m2x4, eps));

		// Transpose m4x3
		actual_m3x4 = transpose(m4x3);
		expected_m3x4 = mat3x4f(1, 4, 7, 10, 2, 5, 8, 11, 3, 6, 9, 12);
		assert("transpose test: mat4x3: " && epsilon_equal(actual_m3x4, expected_m3x4, eps));

		// Transpose m4x4
		actual_m4x4 = transpose(m4x4);
		expected_m4x4 = mat4x4f(2, 1, 3, 9, 3, 7, 5, 2, 2, 0, 2, 1, 5, 2, 3, 4);
		assert("transpose test: mat4x4: " && epsilon_equal(actual_m4x4, expected_m4x4, eps));

	}

	void test_func()
	{
		test_vector_operations();
		test_matrix_operations();
	}


}