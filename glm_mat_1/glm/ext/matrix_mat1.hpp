/// @ref ext_matrix_mat1
/// @file glm/ext/matrix_mat1.hpp
///
/// @defgroup ext_matrix_mat1 GLM_EXT_matrix_mat1
/// @ingroup ext
//////
/// Defines a number of matrices with one column or one row.
/// Provides GLSL matrix functions for these matrices.
///
/// Include <glm/ext/matrix_mat1.hpp> to use these core features.

#pragma once

// Dependencies
#include <glm/detail/qualifier.hpp>
#include <glm/detail/setup.hpp>

#include "glm/mat1x1.hpp"
#include "glm/mat1x2.hpp"
#include "glm/mat1x3.hpp"
#include "glm/mat1x4.hpp"
#include "glm/mat2x1.hpp"
#include "glm/mat3x1.hpp"
#include "glm/mat4x1.hpp"


#include "matrix_double1x1.hpp"
#include "matrix_double1x1_precision.hpp"
#include "matrix_double1x2.hpp"
#include "matrix_double1x2_precision.hpp"
#include "matrix_double1x3.hpp"
#include "matrix_double1x3_precision.hpp"
#include "matrix_double1x4.hpp"
#include "matrix_double1x4_precision.hpp"
#include "matrix_double2x1.hpp"
#include "matrix_double2x1_precision.hpp"
#include "matrix_double3x1.hpp"
#include "matrix_double3x1_precision.hpp"
#include "matrix_double4x1.hpp"
#include "matrix_double4x1_precision.hpp"

#include "matrix_float1x1.hpp"
#include "matrix_float1x1_precision.hpp"
#include "matrix_float1x2.hpp"
#include "matrix_float1x2_precision.hpp"
#include "matrix_float1x3.hpp"
#include "matrix_float1x3_precision.hpp"
#include "matrix_float1x4.hpp"
#include "matrix_float1x4_precision.hpp"
#include "matrix_float2x1.hpp"
#include "matrix_float2x1_precision.hpp"
#include "matrix_float3x1.hpp"
#include "matrix_float3x1_precision.hpp"
#include "matrix_float4x1.hpp"
#include "matrix_float4x1_precision.hpp"

#include "matrix_int1x1.hpp"
#include "matrix_int1x1_sized.hpp"
#include "matrix_int1x2.hpp"
#include "matrix_int1x2_sized.hpp"
#include "matrix_int1x3.hpp"
#include "matrix_int1x3_sized.hpp"
#include "matrix_int1x4.hpp"
#include "matrix_int1x4_sized.hpp"
#include "matrix_int2x1.hpp"
#include "matrix_int2x1_sized.hpp"
#include "matrix_int3x1.hpp"
#include "matrix_int3x1_sized.hpp"
#include "matrix_int4x1.hpp"
#include "matrix_int4x1_sized.hpp"

#include "matrix_uint1x1.hpp"
#include "matrix_uint1x1_sized.hpp"
#include "matrix_uint1x2.hpp"
#include "matrix_uint1x2_sized.hpp"
#include "matrix_uint1x3.hpp"
#include "matrix_uint1x3_sized.hpp"
#include "matrix_uint1x4.hpp"
#include "matrix_uint1x4_sized.hpp"
#include "matrix_uint2x1.hpp"
#include "matrix_uint2x1_sized.hpp"
#include "matrix_uint3x1.hpp"
#include "matrix_uint3x1_sized.hpp"
#include "matrix_uint4x1.hpp"
#include "matrix_uint4x1_sized.hpp"

namespace glm {
namespace detail
{
    //template<length_t C, length_t R, typename T, qualifier Q>
    //struct outerProduct_trait{};

    template<typename T, qualifier Q>
    struct outerProduct_trait<1, 1, T, Q>
    {
        typedef mat<1, 1, T, Q> type;
    };

    template<typename T, qualifier Q>
    struct outerProduct_trait<1, 2, T, Q>
    {
        typedef mat<2, 1, T, Q> type;
    };

    template<typename T, qualifier Q>
    struct outerProduct_trait<1, 3, T, Q>
    {
        typedef mat<3, 1, T, Q> type;
    };

    template<typename T, qualifier Q>
    struct outerProduct_trait<1, 4, T, Q>
    {
        typedef mat<4, 1, T, Q> type;
    };

    template<typename T, qualifier Q>
    struct outerProduct_trait<2, 1, T, Q>
    {
        typedef mat<1, 2, T, Q> type;
    };

    template<typename T, qualifier Q>
    struct outerProduct_trait<3, 1, T, Q>
    {
        typedef mat<1, 3, T, Q> type;
    };

    template<typename T, qualifier Q>
    struct outerProduct_trait<4, 1, T, Q>
    {
        typedef mat<1, 4, T, Q> type;
    };


}//namespace detail


}//namespace glm


#include "glm/detail/func_matrix_mat1.inl"
