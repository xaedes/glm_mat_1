/// @ref ext_matrix_uint1x3
/// @file glm/ext/matrix_uint1x3.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_int1x3 GLM_EXT_matrix_uint1x3
/// @ingroup ext
///
/// Include <glm/ext/matrix_uint1x3.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat1x3.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_uint1x3 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_matrix_uint1x3
	/// @{

	/// Unsigned integer 1x3 matrix.
	///
	/// @see ext_matrix_uint1x3
	typedef mat<1, 3, uint, defaultp>	umat1x3;

	/// @}
}//namespace glm
