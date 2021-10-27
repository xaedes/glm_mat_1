/// @ref ext_matrix_mat1
/// @file glm/detail/setup_mat1.hpp
/// 
#pragma once

#ifndef GLM_DEFAULT_CTOR
#if GLM_CONFIG_CTOR_INIT == GLM_CTOR_INIT_DISABLE && GLM_CONFIG_DEFAULTED_FUNCTIONS == GLM_ENABLE
#   define GLM_CONFIG_DEFAULTED_DEFAULT_CTOR GLM_ENABLE
#   define GLM_DEFAULT_CTOR GLM_DEFAULT
#else
#   define GLM_CONFIG_DEFAULTED_DEFAULT_CTOR GLM_DISABLE
#   define GLM_DEFAULT_CTOR
#endif
#endif
