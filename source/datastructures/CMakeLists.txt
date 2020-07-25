set(SOURCE_FILES src/Datastructures.cpp)
include_directories(src)

add_library(datastructures STATIC ${SOURCE_FILES})
target_link_libraries(datastructures)

#unit tests
add_executable(datastructures-test test/DatastructuresTest.cpp)
target_link_libraries(datastructures-test datastructures gtest gtest_main)

#benchmarks
add_executable(datastructures-benchmark benchmark/DatastructuresBenchmark.cpp)
target_link_libraries(datastructures-benchmark datastructures benchmark benchmark_main)