/// @ref ext_matrix_uint1x1_sized
/// @file glm/ext/matrix_uint1x1_sized.hpp
///
/// @see core (dependence)
///
/// @defgroup ext_matrix_uint1x1_sized GLM_EXT_matrix_uint1x1_sized
/// @ingroup ext
///
/// Include <glm/ext/matrix_uint1x1_sized.hpp> to use the features of this extension.
///
/// Defines a number of matrices with integer types.

#pragma once

// Dependency:
#include "../mat1x1.hpp"
#include <glm/ext/scalar_uint_sized.hpp>

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	pragma message("GLM: GLM_EXT_matrix_uint1x1_sized extension included")
#endif

namespace glm
{
	/// @addtogroup ext_matrix_uint1x1_sized
	/// @{

	/// 8 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint8, defaultp>				u8mat1x1;

	/// 16 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint16, defaultp>				u16mat1x1;

	/// 32 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint32, defaultp>				u32mat1x1;

	/// 64 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint64, defaultp>				u64mat1x1;


	/// 8 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint8, defaultp>				u8mat1;

	/// 16 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint16, defaultp>				u16mat1;

	/// 32 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint32, defaultp>				u32mat1;

	/// 64 bit unsigned integer 1x1 matrix.
	///
	/// @see ext_matrix_uint1x1_sized
	typedef mat<1, 1, uint64, defaultp>				u64mat1;

	/// @}
}//namespace glm
