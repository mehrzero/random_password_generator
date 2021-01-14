cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(rp9)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(PROJECT_LONG_NAME "random_password_generator")

file(GLOB headers "${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_LONG_NAME}/*.h"
                  "${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_LONG_NAME}/*.hpp")
file(GLOB sources "${CMAKE_CURRENT_SOURCE_DIR}/source/*.cxx")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(${PROJECT_NAME} ${headers} ${sources})
