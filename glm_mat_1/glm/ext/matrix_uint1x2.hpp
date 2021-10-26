/// @ref ext_matrix_uint1x2
/// @file glm/ext/matrix_uint1x2.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_int1x2 GLM_EXT_matrix_uint1x2
/// @ingroup ext
///
/// Include <glm/ext/matrix_uint1x2.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat1x2.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_uint1x2 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_matrix_uint1x2
	/// @{

	/// Unsigned integer 1x2 matrix.
	///
	/// @see ext_matrix_uint1x2
	typedef mat<1, 2, uint, defaultp>	umat1x2;

	/// @}
}//namespace glm
