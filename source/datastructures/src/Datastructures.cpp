#include <iostream>
#include "Datastructures.h"

int maxHourglassSum(std::vector<std::vector<int>> vec) {

    int x = vec.size() - 2;
    int y = vec.begin()->size() - 2;
    int max = INT_MIN;

    for( int i = 0; i<x; ++i) {
        for( int j = 0; j<y; ++j) {
            int hourglass_top = vec[i][j] + vec[i][j+1] + vec[i][j+2];
            int hourglass_mid = vec[i+1][j+1];
            int hourglass_end = vec[i+2][j] + vec[i+2][j+1] + vec[i+2][j+2];
            int hourglass_tot = hourglass_top + hourglass_mid + hourglass_end;
            max = hourglass_tot > max ? hourglass_tot : max;
        }
    }

    return max;
}