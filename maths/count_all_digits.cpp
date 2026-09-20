#include <iostream>
#include "maths.hpp"

using namespace std;

// Count all digits of a number
int count_all_digits(int n) {
    int count = 0;

    // Special case: 0 has one digit
    if (n == 0) {
        return 1;
    }

    // Special case: Handle negative numbers
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        // Increase the digit count
        count++;

        // Remove the last digit from the number (/ to get the quotient)
        n = n / 10;
    }
    
    return count;
}