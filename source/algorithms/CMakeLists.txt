set(SOURCE_FILES src/Algorithms.cpp)
include_directories(src)

add_library(hacker-rank-algorithms STATIC ${SOURCE_FILES})
target_link_libraries(hacker-rank-algorithms)

#unit tests
add_executable(hacker-rank-algorithms-test test/AlgorithmsTest.cpp)
target_link_libraries(hacker-rank-algorithms-test hacker-rank-algorithms gtest gtest_main)

#benchmarks
add_executable(hacker-rank-algorithms-benchmark benchmark/AlgorithmsBenchmark.cpp)
target_link_libraries(hacker-rank-algorithms-benchmark hacker-rank-algorithms benchmark benchmark_main)