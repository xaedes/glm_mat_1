/// @ref core
/// @file glm/detail/type_mat1x1.hpp

#pragma once

#include <glm/detail/type_vec1.hpp>

#include <limits>
#include <cstddef>

namespace glm
{
	template<typename T, qualifier Q>
	struct mat<1, 1, T, Q>
	{
		typedef vec<1, T, Q> col_type;
		typedef vec<1, T, Q> row_type;
		typedef mat<1, 1, T, Q> type;
		typedef mat<1, 1, T, Q> transpose_type;
		typedef T value_type;

	private:
		col_type value[1];

	public:
		// -- Accesses --

		typedef length_t length_type;
		GLM_FUNC_DECL static GLM_CONSTEXPR length_type length() { return 1; }

		GLM_FUNC_DECL col_type & operator[](length_type i);
		GLM_FUNC_DECL GLM_CONSTEXPR col_type const& operator[](length_type i) const;

		// -- Constructors --

		GLM_FUNC_DECL GLM_CONSTEXPR mat() GLM_DEFAULT_CTOR;
		template<qualifier P>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(mat<1, 1, T, P> const& m);

		GLM_FUNC_DECL explicit GLM_CONSTEXPR mat(T scalar);
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			T x0);
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			col_type const& v0);

		// -- Conversions --

		template<
			typename X1>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			X1 x1);

		template<typename V1>
		GLM_FUNC_DECL GLM_CONSTEXPR mat(
			vec<1, V1, Q> const& v1);

		// -- Matrix conversions --

		template<typename U, qualifier P>
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<1, 1, U, P> const& m);

		// GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<1, 1, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<1, 2, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<1, 3, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<1, 4, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 1, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 2, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 3, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<2, 4, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 1, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 2, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 3, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<3, 4, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 1, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 2, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 3, T, Q> const& x);
		GLM_FUNC_DECL GLM_EXPLICIT GLM_CONSTEXPR mat(mat<4, 4, T, Q> const& x);

		// -- Unary arithmetic operators --

		template<typename U>
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator=(mat<1, 1, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator+=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator+=(mat<1, 1, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator-=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator-=(mat<1, 1, U, Q> const& m);
		template<typename U>
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator*=(U s);
		template<typename U>
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator/=(U s);

		// -- Increment and decrement operators --

		GLM_FUNC_DECL mat<1, 1, T, Q> & operator++();
		GLM_FUNC_DECL mat<1, 1, T, Q> & operator--();
		GLM_FUNC_DECL mat<1, 1, T, Q> operator++(int);
		GLM_FUNC_DECL mat<1, 1, T, Q> operator--(int);
	};

	// -- Unary operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator+(mat<1, 1, T, Q> const& m);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator-(mat<1, 1, T, Q> const& m);

	// -- Binary operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator+(mat<1, 1, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator+(mat<1, 1, T, Q> const& m1, mat<1, 1, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator-(mat<1, 1, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator-(mat<1, 1, T, Q> const& m1, mat<1, 1, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator*(mat<1, 1, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator*(T scalar, mat<1, 1, T, Q> const& m);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL typename mat<1, 1, T, Q>::col_type operator*(mat<1, 1, T, Q> const& m, typename mat<1, 1, T, Q>::row_type const& v);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL typename mat<1, 1, T, Q>::row_type operator*(typename mat<1, 1, T, Q>::col_type const& v, mat<1, 1, T, Q> const& m);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator*(mat<1, 1, T, Q> const& m1, mat<1, 1, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<2, 1, T, Q> operator*(mat<1, 1, T, Q> const& m1, mat<2, 1, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<3, 1, T, Q> operator*(mat<1, 1, T, Q> const& m1,	mat<3, 1, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<4, 1, T, Q> operator*(mat<1, 1, T, Q> const& m1,	mat<4, 1, T, Q> const& m2);


	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator/(mat<1, 1, T, Q> const& m, T scalar);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL mat<1, 1, T, Q> operator/(T scalar, mat<1, 1, T, Q> const& m);

	// -- Boolean operators --

	template<typename T, qualifier Q>
	GLM_FUNC_DECL bool operator==(mat<1, 1, T, Q> const& m1, mat<1, 1, T, Q> const& m2);

	template<typename T, qualifier Q>
	GLM_FUNC_DECL bool operator!=(mat<1, 1, T, Q> const& m1, mat<1, 1, T, Q> const& m2);
}//namespace glm

#ifndef GLM_EXTERNAL_TEMPLATE
#include "type_mat1x1.inl"
#endif
