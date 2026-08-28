#include <iostream>
#include <cmath>
#include "maths.hpp"

using namespace std;

// Reverse a number
int reverse_number(int num) {
    int rev = 0;
    int n = count_all_digits(num);

    while (n > 0) {
        int rem = num % 10;
        rev = rem * pow(10, n-1) + rev;
        n = n-1;
        num = num / 10;
    }

    return rev;
}