#include "gtest/gtest.h"
#include "Algorithms.h"

TEST(AlgorithmsTest, diagonal_difference) {
    std::vector<std::vector<int>> vec;

    vec.push_back({3, 3, 5});
    vec.push_back({2, 4, 6});
    vec.push_back({7, 9, 11});

    EXPECT_EQ(diagonalDifference(vec), 2);
}

TEST(AlgorithmsTest, plus_minus) {
    std::vector<int> vec({1, -3, 4, 0, 3, -2});

    auto results = plusMinus(vec);

    EXPECT_EQ(results.size(), 3);
    EXPECT_NEAR(results.at(0), 0.5, 0.00001);
    EXPECT_NEAR(results.at(1), 0.33333, 0.00001);
    EXPECT_NEAR(results.at(2), 0.16666, 0.00001);
}

TEST(AlgorithmsTest, stairs) {
    EXPECT_EQ(stairs(6), 1);
}

TEST(AlgorithmsTest, mini_max_sum) {

    std::vector<unsigned int> vec({256741038, 623958417, 467905213, 714532089, 938071625});

    auto res = miniMaxSum(vec);

    EXPECT_EQ(std::get<0>(res), 2063136757);
    EXPECT_EQ(std::get<1>(res), 2744467344);
}

TEST(AlgorithmsTest, birthday_candles) {

    std::vector<int> vec({3, 2, 1, 3});

    auto res = birthdayCakeCandlesSTL(vec);

    EXPECT_EQ(birthdayCakeCandlesSTL(vec), 2);
    EXPECT_EQ(birthdayCakeCandles(vec), 2);
}

TEST(AlgorithmsTest, time_conversion) {
    EXPECT_EQ(timeConversion("07:05:45AM"), "07:05:45");
    EXPECT_EQ(timeConversion("07:05:45PM"), "19:05:45");
    EXPECT_EQ(timeConversion("12:40:22AM"), "00:40:22");
    EXPECT_EQ(timeConversion("12:40:22PM"), "12:40:22");
}