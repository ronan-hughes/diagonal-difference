#include "Math.h"

int armyGameVector(int n) {
    return (n/2) + (n%2);
}

int armyGame(int n, int m) {
    int total_blocks = n*m;
    int blocks_of_four = (n/2) * (m/2);
    int num_blocks_left_over = total_blocks - (blocks_of_four * 4);
    int joins_left_over = armyGameVector(num_blocks_left_over);
    return blocks_of_four + joins_left_over;
}