#include <iostream>
#include "maths.hpp"

using namespace std;

// Count all digits of a number
int count_all_digits(int n) {
    int count = 0;

    while (n > 0) {
        // Get the last digit of the number (% to get the reminder)
        int temp = n % 10;

        // Increase the digit count
        count++;

        // Remove the last digit from the number (/ to get the quotient)
        n = n / 10;
    }
    
    return count;
}