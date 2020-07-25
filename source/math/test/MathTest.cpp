#include "gtest/gtest.h"
#include "Math.h"

TEST(AlgorithmsTest, army_game_vector) {
    EXPECT_EQ(armyGameVector(0),0);
    EXPECT_EQ(armyGameVector(1),1);
    EXPECT_EQ(armyGameVector(2),1);
    EXPECT_EQ(armyGameVector(3),2);
    EXPECT_EQ(armyGameVector(4),2);
    EXPECT_EQ(armyGameVector(5),3);
}

TEST(AlgorithmsTest, army_game_matrix) {
    EXPECT_EQ(armyGame(3, 2), 2);
}