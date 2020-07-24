set(SOURCE_FILES src/DiagonalDifference.cpp)
include_directories(src)

add_library(diagonal-difference STATIC ${SOURCE_FILES})
target_link_libraries(diagonal-difference)

#unit tests
add_executable(diagonal-difference-test test/DiagonalDifferenceTest.cpp)
target_link_libraries(diagonal-difference-test diagonal-difference gtest gtest_main)

#benchmarks
add_executable(diagonal-difference-benchmark benchmark/DiagonalDifferenceBenchmark.cpp)
target_link_libraries(diagonal-difference-benchmark diagonal-difference benchmark benchmark_main)