cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
cmake_policy(VERSION 3.2)

project(glm_mat_1 LANGUAGES CXX)

enable_testing()

add_subdirectory(glm)
add_library(glm_mat_1::glm_mat_1 ALIAS glm_mat_1)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(test)

endif(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
