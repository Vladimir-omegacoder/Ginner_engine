#pragma once
#ifndef GINNER_TYPES
#define GINNER_TYPES

#define GINNER_CONSTEXPR constexpr
#define GINNER_EXPLICIT explicit


namespace gin
{

	using length_t = int;


	template <length_t L, typename T> struct vec;

	using vec1i = vec<1, int>;
	using vec2i = vec<2, int>;
	using vec3i = vec<3, int>;
	using vec4i = vec<4, int>;

	using vec1l = vec<1, long>;
	using vec2l = vec<2, long>;
	using vec3l = vec<3, long>;
	using vec4l = vec<4, long>;

	using vec1f = vec<1, float>;
	using vec2f = vec<2, float>;
	using vec3f = vec<3, float>;
	using vec4f = vec<4, float>;

	using vec1d = vec<1, double>;
	using vec2d = vec<2, double>;
	using vec3d = vec<3, double>;
	using vec4d = vec<4, double>;



	template <length_t C, length_t R, typename T> struct mat;

	template <typename T> using mat2x2 = mat<2, 2, T>;
	template <typename T> using mat2x3 = mat<2, 3, T>;
	template <typename T> using mat2x4 = mat<2, 4, T>;

	template <typename T> using mat3x2 = mat<3, 2, T>;
	template <typename T> using mat3x3 = mat<3, 3, T>;
	template <typename T> using mat3x4 = mat<3, 4, T>;

	template <typename T> using mat4x2 = mat<4, 2, T>;
	template <typename T> using mat4x3 = mat<4, 3, T>;
	template <typename T> using mat4x4 = mat<4, 4, T>;

}

#endif