cmake_minimum_required (VERSION 2.6)
project (example)
add_executable(example1 example1.cxx)

set (example1_VERSION_MAJOR 1)
set (example1_VERSION_MINOR 0)

target_link_libraries (example1 PocoFoundation)

set (CPP_11_FLAGS "-std=c++11")
set (example_string_VERSION_MAJOR 1)
set (example_string_VERSION_MINOR 0)
set (CMAKE_CXX_FLAGS "${CPP_11_FLAGS}")

add_executable(example_string example_string.cxx)
target_link_libraries (example_string PocoFoundation)
