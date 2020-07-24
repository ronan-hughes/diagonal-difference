#include "gtest/gtest.h"
#include "Algorithms.h"

TEST(DiagonalDifferenceTest, diagonal_difference) {
    std::vector<std::vector<int>> vec;

    vec.push_back({3, 3, 5});
    vec.push_back({2, 4, 6});
    vec.push_back({7, 9, 11});

    ASSERT_EQ(diagonalDifference(vec), 2);
}