/// @ref core
/// @file glm/ext/matrix_float2x1_precision.hpp

#pragma once
#include "../detail/type_mat2x1.hpp"

namespace glm
{
	/// @addtogroup core_matrix_precision
	/// @{

	/// 2 columns of 1 components matrix of single-precision floating-point numbers using low precision arithmetic in term of ULPs.
	///
	/// @note mat2x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<2, 1, float, lowp>		lowp_mat2x1;

	/// 2 columns of 1 components matrix of single-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @note mat2x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<2, 1, float, mediump>	mediump_mat2x1;

	/// 2 columns of 1 components matrix of single-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @note mat2x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<2, 1, float, highp>		highp_mat2x1;

	/// @}
}//namespace glm
