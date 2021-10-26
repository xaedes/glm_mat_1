/// @ref core
/// @file glm/ext/matrix_float1x3_precision.hpp

#pragma once
#include "../detail/type_mat1x3.hpp"

namespace glm
{
	/// @addtogroup core_matrix_precision
	/// @{

	/// 1 columns of 3 components matrix of single-precision floating-point numbers using low precision arithmetic in term of ULPs.
	///
	/// @note mat1x3 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<1, 3, float, lowp>		lowp_mat1x3;

	/// 1 columns of 3 components matrix of single-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @note mat1x3 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<1, 3, float, mediump>	mediump_mat1x3;

	/// 1 columns of 3 components matrix of single-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @note mat1x3 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<1, 3, float, highp>		highp_mat1x3;

	/// @}
}//namespace glm
