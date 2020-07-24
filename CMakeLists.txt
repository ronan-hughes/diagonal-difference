cmake_minimum_required(VERSION 3.16)
project(hacker-rank-algorithms)

set(CMAKE_CXX_STANDARD 14)

include(cmake/include_googletest.cmake)
include(cmake/include_googlebenchmark.cmake)

add_subdirectory(source)