cmake_minimum_required(VERSION 3.7)
project(overridden_equals_test)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_definitions(-DLIB_GMP)
find_package(GMP)

set(SOURCE_FILES big_integer_gmp.cpp main.cxx)
add_executable(overridden_equals_test ${SOURCE_FILES})
target_link_libraries(overridden_equals_test PRIVATE ${GMP_LIBRARIES})