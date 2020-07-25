#include "gtest/gtest.h"
#include "Datastructures.h"

TEST(DatastructuresTest, max_hourglass_sum) {
    std::vector<std::vector<int>> vec;

    vec.push_back({-9, -9, -9, 1, 1, 1});
    vec.push_back({0, -9, 0, 4, 3, 2});
    vec.push_back({-9, -9, -9, 1, 2, 3});
    vec.push_back({0, 0, 8, 6, 6, 0});
    vec.push_back({0, 0, 0, -2, 0, 0});
    vec.push_back({0, 0, 1, 2, 4, 0});

    EXPECT_EQ(maxHourglassSum(vec), 28);
}

TEST(DatastructuresTest, max_hourglass_sum_test_3) {
    std::vector<std::vector<int>> vec;

    vec.push_back({-1, -1, 0, -9, -2, -2});
    vec.push_back({-2, -1, -6, -8, -2, -5});
    vec.push_back({-1, -1, -1, -2, -3, -4});
    vec.push_back({-1, -9, -2, -4, -4, -5});
    vec.push_back({-7, -3, -3, -2, -9, -9});
    vec.push_back({-1, -3, -1, -2, -4, -5});

    EXPECT_EQ(maxHourglassSum(vec), -6);
}
