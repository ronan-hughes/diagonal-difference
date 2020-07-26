#include "Algorithms.h"
#include <algorithm>
#include <iostream>
#include <numeric>

int diagonalDifference(const std::vector<std::vector<int>>& arr) {

    int mainDiag = 0, otherDiag = 0;

    int count = arr.size()-1;

    for (int i = 0; i < arr.size(); i++) {
        mainDiag += arr[i][i];
        otherDiag += arr[i][count--];
    }

    return abs(mainDiag - otherDiag);
}

std::vector<double> plusMinus(const std::vector<int>& arr) {
    std::vector<double> res;
    res.reserve(3);

    res.push_back(std::count_if(arr.begin(), arr.end(), [](int n){return n>0;}) / (double)arr.size());
    res.push_back(std::count_if(arr.begin(), arr.end(), [](int n){return n<0;}) / (double)arr.size());
    res.push_back(std::count_if(arr.begin(), arr.end(), [](int n){return n==0;}) / (double)arr.size());

    return res;
}

int stairs(int n) {

    int spaces = n-1;
    std::vector<std::string> vec(n);

    for( int i = n -1; i >= 0; --i ) {
        std::fill(vec.begin(), vec.begin()+i, " ");
        std::fill(vec.begin()+i, vec.end(), "#");
        std::copy(vec.begin(), vec.end(),
                  std::ostream_iterator<std::string>(std::cout));
        std::cout << std::endl;
    }
    return 1;
}

std::tuple<unsigned int, unsigned int> miniMaxSum(std::vector<unsigned int>& vec) {

    std::tuple<unsigned int, unsigned int> ret;

    std::sort(vec.begin(), vec.end());

    unsigned int min = std::accumulate(vec.begin(), vec.begin()+4, 0);
    unsigned int max = std::accumulate(vec.begin()+1, vec.end(), 0);

    return std::make_tuple(min, max);
}