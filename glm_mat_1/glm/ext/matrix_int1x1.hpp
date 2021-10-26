/// @ref ext_matrix_int1x1
/// @file glm/ext/matrix_int1x1.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_int1x1 GLM_EXT_matrix_int1x1
/// @ingroup ext
///
/// Include <glm/ext/matrix_int1x1.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat1x1.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_int1x1 extension included")
#endif

namespace glm
{
	/// @addtogroup ext_matrix_int1x1
	/// @{

	/// Unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_int1x1
	typedef mat<1, 1, int, defaultp>	imat1x1;

	/// Unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_int1x1
	typedef mat<1, 1, int, defaultp>	imat1;

	/// @}
}//namespace glm
