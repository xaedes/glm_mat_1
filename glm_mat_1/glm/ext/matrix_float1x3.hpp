/// @ref core
/// @file glm/ext/matrix_float1x3.hpp

#pragma once
#include "../detail/type_mat1x3.hpp"

namespace glm
{
	/// @addtogroup core_matrix
	/// @{

	/// 1 columns of 3 components matrix of single-precision floating-point numbers.
	///
	/// @note mat1x3 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<1, 3, float, defaultp>		mat1x3;

	/// @}
}//namespace glm
