#include "math.h"

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

void nextPrime(std::vector<long>& primes) {

    if(primes.empty()) {
        primes.push_back(2);
        return;
    }

    long next = primes.back();
    bool isPrime;

    while(true) {
        isPrime = true;
        next++;

        for(const auto& prime : primes) {
            if( next % prime == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            primes.push_back(next);
            return;
        }
    }
}

int maxPrimeFactors(unsigned long long n) {

    std::vector<long> primes;
    int count = 0;
    unsigned long long total = 1;
    while(true) {
        nextPrime(primes);
        total *= primes.back();
        if( total > n)
            break;
        count++;
    }
    return count;
}

int connectingTowns(int n, std::vector<int> routes) {
    int res = 1;
    for ( auto i : routes) {
        res *= i;
        res %= 1234567;
    }
    return res;
}