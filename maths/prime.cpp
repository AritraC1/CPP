#include <iostream>
#include "maths.hpp"

using namespace std;

// check prime
bool check_prime(int n) {
    // Numbers less than 2 are not prime
    if (n < 2) return false;

    // Check possible factors from 2 up to the square root of n
    for (int i = 2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}