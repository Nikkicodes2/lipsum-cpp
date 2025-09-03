cmake_minimum_required(VERSION 3.15)
project(lipsum-cpp)
add_library(lipsum-cpp INTERFACE)
target_include_directories(lipsum-cpp INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/src")
