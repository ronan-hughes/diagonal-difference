#include <benchmark/benchmark.h>
#include "Algorithms.h"

static void BM_DiagonalDifference(benchmark::State& state) {
    std::vector<std::vector<int>> vec;
    vec.push_back({3, 3, 5});
    vec.push_back({2, 4, 6});
    vec.push_back({7, 9, 11});

    for (auto _ : state) {
        diagonalDifference(vec);
    }
}

static void BM_PlusMinus(benchmark::State& state) {
    std::vector<int> vec({1, -3, 4, 0, 3, -2});

    for (auto _ : state) {
        plusMinus(vec);
    }
}

BENCHMARK(BM_DiagonalDifference);
BENCHMARK(BM_PlusMinus);