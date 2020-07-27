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

TEST(MathTest, connecting_towns) {
    std::vector<int>vec ({3,	784,	945,	778,	736,	252,	406,	796,	252,	621,	298,	513,	826,	159,	396,	502,	818,	820,	959,	826,	880,	728,	729,	26,	665,	609,	31,	711,	950,	908,	50,	203,	940,	863,	662,	476,	50,	733,	825,	871,	234,	133,	395,	680,	95,	290,	125,	909,	361,	593,	946,	534,	133,	798,	305,	266,	683,	856,	876,	446,	510,	900,	947,	254,	228,	101,	445,	125,	729,	559,	632,	978,	224,	767,	151,	290,	481,	912,	462,	638,	892,	823,	570,	718,	129,	699,	602,	965,	838,	943,	355,	968,	779,	928,});
    EXPECT_EQ(connectingTowns(95, vec), 868553);
}

TEST(MathTest, cutting_squares) {
    EXPECT_EQ(cuttingSquares(689715240, 759842301), 524074814996367239);
}