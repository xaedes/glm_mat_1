/// @ref core
/// @file glm/ext/matrix_float2x1.hpp

#pragma once
#include "../detail/type_mat2x1.hpp"

namespace glm
{
	/// @addtogroup core_matrix
	/// @{

	/// 2 columns of 1 components matrix of single-precision floating-point numbers.
	///
	/// @note mat2x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<2, 1, float, defaultp>		mat2x1;

	/// @}
}//namespace glm
