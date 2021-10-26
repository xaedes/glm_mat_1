/// @ref core
/// @file glm/ext/matrix_double1x1_precision.hpp

#pragma once
#include "../detail/type_mat1x1.hpp"

namespace glm
{
	/// @addtogroup core_matrix_precision
	/// @{

	/// 1 columns of 1 components matrix of double-precision floating-point numbers using low precision arithmetic in term of ULPs.
	///
	/// @note mat1x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<1, 1, double, lowp>		lowp_dmat1x1;

	/// 1 columns of 1 components matrix of double-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @note mat1x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<1, 1, double, mediump>	mediump_dmat1x1;

	/// 1 columns of 1 components matrix of double-precision floating-point numbers using medium precision arithmetic in term of ULPs.
	///
	/// @note mat1x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.7.2 Precision Qualifier</a>
	typedef mat<1, 1, double, highp>	highp_dmat1x1;

	/// @}
}//namespace glm
