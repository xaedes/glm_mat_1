namespace glm
{
	// -- Constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat()
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALIZER_LIST
				: value{col_type(1, 0)}
#			endif
		{
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALISATION
				this->value[0] = col_type(1, 0);
#			endif
		}
#	endif

	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<1, 2, T, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = m[0];
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(T s)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(s, 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(s, 0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat
	(
		T x0, T y0
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(col_type const& v0)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = v0;
#		endif
	}

	// -- Conversion constructors --

	template<typename T, qualifier Q>
	template<
		typename X0, typename Y0>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat
	(
		X0 x0, Y0 y0
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0, y0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0, y0);
#		endif
	}

	template<typename T, qualifier Q>
	template<typename V1>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(vec<2, V1, Q> const& v0)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v0);
#		endif
	}

	// -- Matrix conversions --

	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<1, 2, U, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<1, 1, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<1, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<1, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<2, 1, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<2, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<2, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<2, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}


	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<3, 1, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<3, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<3, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<3, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<4, 1, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0], 0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0], 0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<4, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<4, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<1, 2, T, Q>::mat(mat<4, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
#		endif
	}


	// -- Accesses --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<1, 2, T, Q>::col_type & mat<1, 2, T, Q>::operator[](typename mat<1, 2, T, Q>::length_type i)
	{
		assert(i < this->length());
		return this->value[i];
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename mat<1, 2, T, Q>::col_type const& mat<1, 2, T, Q>::operator[](typename mat<1, 2, T, Q>::length_type i) const
	{
		assert(i < this->length());
		return this->value[i];
	}

	// -- Unary updatable operators --

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator=(mat<1, 2, U, Q> const& m)
	{
		this->value[0] = m[0];
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator+=(U s)
	{
		this->value[0] += s;
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator+=(mat<1, 2, U, Q> const& m)
	{
		this->value[0] += m[0];
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator-=(U s)
	{
		this->value[0] -= s;
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator-=(mat<1, 2, U, Q> const& m)
	{
		this->value[0] -= m[0];
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator*=(U s)
	{
		this->value[0] *= s;
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> & mat<1, 2, T, Q>::operator/=(U s)
	{
		this->value[0] /= s;
		return *this;
	}

	// -- Increment and decrement operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator++()
	{
		++this->value[0];
		return *this;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q>& mat<1, 2, T, Q>::operator--()
	{
		--this->value[0];
		return *this;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> mat<1, 2, T, Q>::operator++(int)
	{
		mat<1, 2, T, Q> Result(*this);
		++*this;
		return Result;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> mat<1, 2, T, Q>::operator--(int)
	{
		mat<1, 2, T, Q> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary arithmetic operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator+(mat<1, 2, T, Q> const& m)
	{
		return m;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator-(mat<1, 2, T, Q> const& m)
	{
		return mat<1, 2, T, Q>(-m[0]);
	}

	// -- Binary arithmetic operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator+(mat<1, 2, T, Q> const& m, T scalar)
	{
		return mat<1, 2, T, Q>(m[0] + scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator+(mat<1, 2, T, Q> const& m1, mat<1, 2, T, Q> const& m2)
	{
		return mat<1, 2, T, Q>(m1[0] + m2[0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator-(mat<1, 2, T, Q> const& m,	T scalar)
	{
		return mat<1, 2, T, Q>(m[0] - scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator-(mat<1, 2, T, Q> const& m1, mat<1, 2, T, Q> const& m2)
	{
		return mat<1, 2, T, Q>(m1[0] - m2[0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator*(mat<1, 2, T, Q> const& m, T scalar)
	{
		return mat<1, 2, T, Q>(m[0] * scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator*(T scalar, mat<1, 2, T, Q> const& m)
	{
		return mat<1, 2, T, Q>(m[0] * scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<1, 2, T, Q>::col_type operator*
	(
		mat<1, 2, T, Q> const& m,
		typename mat<1, 2, T, Q>::row_type const& v
	)
	{
		return typename mat<1, 2, T, Q>::col_type(
			m[0][0] * v.x,
			m[0][1] * v.x);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<1, 2, T, Q>::row_type operator*
	(
		typename mat<1, 2, T, Q>::col_type const& v,
		mat<1, 2, T, Q> const& m
	)
	{
		return typename mat<1, 2, T, Q>::row_type(
			v.x * m[0][0] + v.y * m[0][1]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator*(mat<1, 2, T, Q> const& m1, mat<1, 1, T, Q> const& m2)
	{
		return mat<1, 2, T, Q>(
			m1[0][0] * m2[0][0],
			m1[0][1] * m2[0][0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 2, T, Q> operator*(mat<1, 2, T, Q> const& m1, mat<2, 1, T, Q> const& m2)
	{
		return mat<2, 2, T, Q>(
			m1[0][0] * m2[0][0],
			m1[0][1] * m2[0][0],
			m1[0][0] * m2[1][0],
			m1[0][1] * m2[1][0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 2, T, Q> operator*(mat<1, 2, T, Q> const& m1, mat<3, 1, T, Q> const& m2)
	{
		return mat<3, 2, T, Q>(
			m1[0][0] * m2[0][0],
			m1[0][1] * m2[0][0],
			m1[0][0] * m2[1][0],
			m1[0][1] * m2[1][0],
			m1[0][0] * m2[2][0],
			m1[0][1] * m2[2][0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 2, T, Q> operator*(mat<1, 2, T, Q> const& m1, mat<4, 1, T, Q> const& m2)
	{
		return mat<4, 2, T, Q>(
			m1[0][0] * m2[0][0],
			m1[0][1] * m2[0][0],
			m1[0][0] * m2[1][0],
			m1[0][1] * m2[1][0],
			m1[0][0] * m2[2][0],
			m1[0][1] * m2[2][0],
			m1[0][0] * m2[3][0],
			m1[0][1] * m2[3][0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator/(mat<1, 2, T, Q> const& m,	T scalar)
	{
		return mat<1, 2, T, Q>(m[0] / scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 2, T, Q> operator/(T scalar, mat<1, 2, T, Q> const& m)
	{
		return mat<1, 2, T, Q>(scalar / m[0]);
	}

	// -- Boolean operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator==(mat<1, 2, T, Q> const& m1, mat<1, 2, T, Q> const& m2)
	{
		return (m1[0] == m2[0]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(mat<1, 2, T, Q> const& m1, mat<1, 2, T, Q> const& m2)
	{
		return (m1[0] != m2[0]);
	}
} //namespace glm
