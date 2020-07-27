#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>
#include <string>

int diagonalDifference(const std::vector<std::vector<int>>& arr);
std::vector<double> plusMinus(const std::vector<int>& arr);
int stairs(int n);
std::tuple<unsigned int, unsigned int> miniMaxSum(std::vector<unsigned int>& vec);
int birthdayCakeCandles(const std::vector<int>& vec);
int birthdayCakeCandlesSTL(const std::vector<int>& vec);
std::string timeConversion(const std::string& s);

#endif //ALGORITHMS_H
