#include "Algorithms.h"
#include <algorithm>
#include <iostream>

int diagonalDifference(std::vector<std::vector<int>> arr) {

    int mainDiag = 0, otherDiag = 0;

    int count = arr.size()-1;

    for (int i = 0; i < arr.size(); i++) {
        mainDiag += arr[i][i];
        otherDiag += arr[i][count--];
    }

    return abs(mainDiag - otherDiag);
}

std::vector<double> plusMinus(std::vector<int> arr) {
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