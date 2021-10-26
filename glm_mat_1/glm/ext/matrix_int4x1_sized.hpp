/// @ref ext_matrix_int4x1_sized
/// @file glm/ext/matrix_int4x1_sized.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_int4x1_sized GLM_EXT_matrix_int4x1_sized
/// @ingroup ext
///
/// Include <glm/ext/matrix_int4x1_sized.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat4x1.hpp"
#include "../ext/scalar_int_sized.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_int4x1_sized extension included")
#endif

namespace glm
{
	/// @addtogroup ext_matrix_int4x1_sized
	/// @{

	/// 8 bit unsigned integer 4x1 matrix.
	///
	/// @see ext_matrix_int4x1_sized
	typedef mat<4, 1, int8, defaultp>				i8mat4x1;

	/// 16 bit unsigned integer 4x1 matrix.
	///
	/// @see ext_matrix_int4x1_sized
	typedef mat<4, 1, int16, defaultp>				i16mat4x1;

	/// 32 bit unsigned integer 4x1 matrix.
	///
	/// @see ext_matrix_int4x1_sized
	typedef mat<4, 1, int32, defaultp>				i32mat4x1;

	/// 64 bit unsigned integer 4x1 matrix.
	///
	/// @see ext_matrix_int4x1_sized
	typedef mat<4, 1, int64, defaultp>				i64mat4x1;

	/// @}
}//namespace glm
