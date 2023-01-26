namespace glm
{
	// -- Constructors --

#	if GLM_CONFIG_DEFAULTED_DEFAULT_CTOR == GLM_DISABLE
		template<typename T, qualifier Q>
		GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat()
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALIZER_LIST
				: value{col_type(1), col_type(0)}
#			endif
		{
#			if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INITIALISATION
				this->value[0] = col_type(1);
				this->value[1] = col_type(0);
#			endif
		}
#	endif

	template<typename T, qualifier Q>
	template<qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<2, 1, T, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = m[0];
			this->value[1] = m[1];
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(T s)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(s), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(s);
			this->value[1] = col_type(0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat
	(
		T x0,
		T x1
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0), col_type(x1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0);
			this->value[1] = col_type(x1);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(col_type const& v0, col_type const& v1)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0), col_type(v1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = v0;
			this->value[1] = v1;
#		endif
	}

	// -- Conversion constructors --

	template<typename T, qualifier Q>
	template<
		typename X0,
		typename X1>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat
	(
		X0 x0,
		X1 x1
	)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(x0), col_type(x1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(x0);
			this->value[1] = col_type(x1);
#		endif
	}

	template<typename T, qualifier Q>
	template<typename V0, typename V1>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(vec<1, V0, Q> const& v0, vec<1, V1, Q> const& v1)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(v0), col_type(v1)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(v0);
			this->value[1] = col_type(v1);
#		endif
	}

	// -- Conversion --

	template<typename T, qualifier Q>
	template<typename U, qualifier P>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<2, 1, U, P> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}


	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<1, 1, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<1, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<1, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<1, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(0)}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(0);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<2, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<2, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<2, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<3, 1, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<3, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<3, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<3, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<4, 1, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
			this->value[0] = col_type(m[0]);
			this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<4, 2, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
				this->value[0] = col_type(m[0]);
				this->value[1] = col_type(m[1]);
#		endif
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<4, 3, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
				this->value[0] = col_type(m[0]);
				this->value[1] = col_type(m[1]);
#		endif
	}


	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR mat<2, 1, T, Q>::mat(mat<4, 4, T, Q> const& m)
#		if GLM_HAS_INITIALIZER_LISTS
			: value{col_type(m[0]), col_type(m[1])}
#		endif
	{
#		if !GLM_HAS_INITIALIZER_LISTS
				this->value[0] = col_type(m[0]);
				this->value[1] = col_type(m[1]);
#		endif
	}

	// -- Accesses --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 1, T, Q>::col_type & mat<2, 1, T, Q>::operator[](typename mat<2, 1, T, Q>::length_type i)
	{
		assert(i < this->length());
		return this->value[i];
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER GLM_CONSTEXPR typename mat<2, 1, T, Q>::col_type const& mat<2, 1, T, Q>::operator[](typename mat<2, 1, T, Q>::length_type i) const
	{
		assert(i < this->length());
		return this->value[i];
	}

	// -- Unary updatable operators --

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q>& mat<2, 1, T, Q>::operator=(mat<2, 1, U, Q> const& m)
	{
		this->value[0] = m[0];
		this->value[1] = m[1];
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator+=(U s)
	{
		this->value[0] += s;
		this->value[1] += s;
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator+=(mat<2, 1, U, Q> const& m)
	{
		this->value[0] += m[0];
		this->value[1] += m[1];
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator-=(U s)
	{
		this->value[0] -= s;
		this->value[1] -= s;
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator-=(mat<2, 1, U, Q> const& m)
	{
		this->value[0] -= m[0];
		this->value[1] -= m[1];
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator*=(U s)
	{
		this->value[0] *= s;
		this->value[1] *= s;
		return *this;
	}

	template<typename T, qualifier Q>
	template<typename U>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator/=(U s)
	{
		this->value[0] /= s;
		this->value[1] /= s;
		return *this;
	}

	// -- Increment and decrement operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator++()
	{
		++this->value[0];
		++this->value[1];
		return *this;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> & mat<2, 1, T, Q>::operator--()
	{
		--this->value[0];
		--this->value[1];
		return *this;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> mat<2, 1, T, Q>::operator++(int)
	{
		mat<2, 1, T, Q> Result(*this);
		++*this;
		return Result;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> mat<2, 1, T, Q>::operator--(int)
	{
		mat<2, 1, T, Q> Result(*this);
		--*this;
		return Result;
	}

	// -- Unary arithmetic operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator+(mat<2, 1, T, Q> const& m)
	{
		return m;
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator-(mat<2, 1, T, Q> const& m)
	{
		return mat<2, 1, T, Q>(
			-m[0],
			-m[1]);
	}

	// -- Binary arithmetic operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator+(mat<2, 1, T, Q> const& m, T scalar)
	{
		return mat<2, 1, T, Q>(
			m[0] + scalar,
			m[1] + scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator+(mat<2, 1, T, Q> const& m1, mat<2, 1, T, Q> const& m2)
	{
		return mat<2, 1, T, Q>(
			m1[0] + m2[0],
			m1[1] + m2[1]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator-(mat<2, 1, T, Q> const& m, T scalar)
	{
		return mat<2, 1, T, Q>(
			m[0] - scalar,
			m[1] - scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator-(mat<2, 1, T, Q> const& m1, mat<2, 1, T, Q> const& m2)
	{
		return mat<2, 1, T, Q>(
			m1[0] - m2[0],
			m1[1] - m2[1]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator*(mat<2, 1, T, Q> const& m, T scalar)
	{
		return mat<2, 1, T, Q>(
			m[0] * scalar,
			m[1] * scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator*(T scalar, mat<2, 1, T, Q> const& m)
	{
		return mat<2, 1, T, Q>(
			m[0] * scalar,
			m[1] * scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 1, T, Q>::col_type operator*(mat<2, 1, T, Q> const& m, typename mat<2, 1, T, Q>::row_type const& v)
	{
		return typename mat<2, 1, T, Q>::col_type(
			m[0][0] * v.x + m[1][0] * v.y);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER typename mat<2, 1, T, Q>::row_type operator*(typename mat<2, 1, T, Q>::col_type const& v, mat<2, 1, T, Q> const& m)
	{
		return typename mat<2, 1, T, Q>::row_type(
			v.x * m[0][0] ,
			v.x * m[1][0] );
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<1, 1, T, Q> operator*(mat<2, 1, T, Q> const& m1, mat<1, 2, T, Q> const& m2)
	{
		return mat<1, 1, T, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1]);
	}
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator*(mat<2, 1, T, Q> const& m1, mat<2, 2, T, Q> const& m2)
	{
		return mat<2, 1, T, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<3, 1, T, Q> operator*(mat<2, 1, T, Q> const& m1, mat<3, 2, T, Q> const& m2)
	{
		return mat<3, 1, T, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<4, 1, T, Q> operator*(mat<2, 1, T, Q> const& m1, mat<4, 2, T, Q> const& m2)
	{
		return mat<4, 1, T, Q>(
			m1[0][0] * m2[0][0] + m1[1][0] * m2[0][1],
			m1[0][0] * m2[1][0] + m1[1][0] * m2[1][1],
			m1[0][0] * m2[2][0] + m1[1][0] * m2[2][1],
			m1[0][0] * m2[3][0] + m1[1][0] * m2[3][1]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator/(mat<2, 1, T, Q> const& m, T scalar)
	{
		return mat<2, 1, T, Q>(
			m[0] / scalar,
			m[1] / scalar);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER mat<2, 1, T, Q> operator/(T scalar, mat<2, 1, T, Q> const& m)
	{
		return mat<2, 1, T, Q>(
			scalar / m[0],
			scalar / m[1]);
	}

	// -- Boolean operators --

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator==(mat<2, 1, T, Q> const& m1, mat<2, 1, T, Q> const& m2)
	{
		return (m1[0] == m2[0]) && (m1[1] == m2[1]);
	}

	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER bool operator!=(mat<2, 1, T, Q> const& m1, mat<2, 1, T, Q> const& m2)
	{
		return (m1[0] != m2[0]) || (m1[1] != m2[1]);
	}
} //namespace glm
