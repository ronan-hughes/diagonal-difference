set(SOURCE_FILES src/Algorithms.cpp)
include_directories(src)

add_library(algorithms STATIC ${SOURCE_FILES})
target_link_libraries(algorithms)

#unit tests
add_executable(algorithms-test test/AlgorithmsTest.cpp)
target_link_libraries(algorithms-test algorithms gtest gtest_main)

#benchmarks
add_executable(algorithms-benchmark benchmark/AlgorithmsBenchmark.cpp)
target_link_libraries(algorithms-benchmark algorithms benchmark benchmark_main)