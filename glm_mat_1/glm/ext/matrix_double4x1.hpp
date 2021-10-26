/// @ref core
/// @file glm/ext/matrix_double4x1.hpp

#pragma once
#include "../detail/type_mat4x1.hpp"

namespace glm
{
	/// @addtogroup core_matrix
	/// @{

	/// 4 columns of 1 components matrix of double-precision floating-point numbers.
	///
	/// @note mat4x1 is not part of GLSL 4.20.8 specification.
	/// @see <a href="http://www.opengl.org/registry/doc/GLSLangSpec.4.20.8.pdf">GLSL 4.20.8 specification, section 4.1.6 Matrices</a>
	typedef mat<4, 1, double, defaultp>		dmat4x1;

	/// @}
}//namespace glm
