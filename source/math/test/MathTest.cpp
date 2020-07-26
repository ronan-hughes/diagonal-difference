#include "gtest/gtest.h"
#include "Math.h"

TEST(MathTest, army_game_vector) {
    EXPECT_EQ(armyGameVector(0),0);
    EXPECT_EQ(armyGameVector(1),1);
    EXPECT_EQ(armyGameVector(2),1);
    EXPECT_EQ(armyGameVector(3),2);
    EXPECT_EQ(armyGameVector(4),2);
    EXPECT_EQ(armyGameVector(5),3);
}

TEST(MathTest, army_game_matrix) {
    EXPECT_EQ(armyGame(3, 2), 2);
}

TEST(MathTest, next_prime) {
    std::vector<long> primes;

    for( int i = 0; i< 100; ++i) {
        nextPrime(primes);
    }

    EXPECT_EQ(primes.back(), 541);
}

TEST(MathTest, max_prime_factors) {
   EXPECT_EQ(maxPrimeFactors(614889782588491410), 15);
}