/// @ref ext_matrix_int1x4_sized
/// @file glm/ext/matrix_int1x4_sized.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_int1x4_sized GLM_EXT_matrix_int1x4_sized
/// @ingroup ext
///
/// Include <glm/ext/matrix_int1x4_sized.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat1x4.hpp"
#include <glm/ext/scalar_int_sized.hpp>

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_int1x4_sized extension included")
#endif

namespace glm
{
	/// @addtogroup ext_matrix_int1x4_sized
	/// @{

	/// 8 bit unsigned integer 1x4 matrix.
	///
	/// @see ext_matrix_int1x4_sized
	typedef mat<1, 4, int8, defaultp>				i8mat1x4;

	/// 16 bit unsigned integer 1x4 matrix.
	///
	/// @see ext_matrix_int1x4_sized
	typedef mat<1, 4, int16, defaultp>				i16mat1x4;

	/// 32 bit unsigned integer 1x4 matrix.
	///
	/// @see ext_matrix_int1x4_sized
	typedef mat<1, 4, int32, defaultp>				i32mat1x4;

	/// 64 bit unsigned integer 1x4 matrix.
	///
	/// @see ext_matrix_int1x4_sized
	typedef mat<1, 4, int64, defaultp>				i64mat1x4;

	/// @}
}//namespace glm
