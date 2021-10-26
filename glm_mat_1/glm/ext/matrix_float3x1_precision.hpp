/// @ref core
/// @file glm/ext/matrix_float3x1_precision.hpp

#pragma once
#include "../detail/type_mat3x1.hpp"

namespace glm
{
	/// @addtogroup core_matrix_precision
	/// @{

	/// 3 columns of 1 components matrix of single-precision floating-point numbers using low precision arithmetic in term of ULPs.
	///
	/// @note mat3x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<3, 1, float, lowp>		lowp_mat3x1;

	/// 3 columns of 1 components matrix of single-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @note mat3x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<3, 1, float, mediump>	mediump_mat3x1;

	/// 3 columns of 1 components matrix of single-precision floating-point numbers using high precision arithmetic in term of ULPs.
	///
	/// @note mat3x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<3, 1, float, highp>		highp_mat3x1;

	/// @}
}//namespace glm
