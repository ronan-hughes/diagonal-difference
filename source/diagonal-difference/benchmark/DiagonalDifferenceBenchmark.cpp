#include <benchmark/benchmark.h>
#include "DiagonalDifference.h"

static void BM_DiagonalDifference(benchmark::State& state) {
    std::vector<std::vector<int>> vec;
    vec.push_back({3, 3, 5});
    vec.push_back({2, 4, 6});
    vec.push_back({7, 9, 11});

    for (auto _ : state) {
        diagonalDifference(vec);
    }
}

BENCHMARK(BM_DiagonalDifference);