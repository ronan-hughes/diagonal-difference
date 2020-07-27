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

/* O(N) */
int birthdayCakeCandles(const std::vector<int>& vec) {

    int max = 0, count = 0;

    for( const auto& i : vec) {
        if( i == max) {
            count++;
        }
        if( i > max) {
            max = i;
            count = 1;
        }
    }
    return count;
}

/* O(N) for both operations */
int birthdayCakeCandlesSTL(const std::vector<int>& vec) {
    const auto& max = std::max_element(vec.begin(), vec.end());
    return std::count_if(vec.begin(), vec.end(), [max](int i){ return i == *max;});
}

std::string timeConversion(const std::string& s) {
    short hour = std::stoi(s.substr(0, 2));

    bool am = !s.substr(s.length()-2).compare("AM");

    if( am && hour == 12)
        return std::string("00").append(s.substr(2, 6));

    if( am )
        return s.substr(0, s.length()-2);

    if( !am && hour == 12 )
        return s.substr(0, s.length()-2);

    hour += 12;

    return std::to_string(hour).append(s.substr(2, 6));

}