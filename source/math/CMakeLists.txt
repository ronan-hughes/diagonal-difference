set(SOURCE_FILES src/Algorithms.cpp)
include_directories(src)

add_library(math STATIC ${SOURCE_FILES})
target_link_libraries(math)

#unit tests
add_executable(math-test test/MathTest.cpp)
target_link_libraries(math-test math gtest gtest_main)

#benchmarks
add_executable(math-benchmark benchmark/MathBenchmark.cpp)
target_link_libraries(math-benchmark math benchmark benchmark_main)