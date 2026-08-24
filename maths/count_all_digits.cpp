#include <iostream>
#include "maths.hpp"
using namespace std;

// Count all digits of a number
int count_all_digits(int n) {
    int count = 0;

    while (n > 0) {
        int temp = n % 10;
        count++;
        n = n / 10;
    }
    
    return count;
}