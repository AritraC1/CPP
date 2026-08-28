#include <iostream>
#include "maths.hpp"

using namespace std;

// reverse number
int reverse(int num){
    int rev = 0;

    while (num != 0) {
        int last_digit = num % 10;
        rev = (rev * 10) + last_digit;
        num = num / 10;
    }

    return rev;
}

// Palindrome number
// A palindrome reads the same forwards and backwards
bool check_palindrome(int num) {
    if (num != reverse(num)) {
        return false;
    }
    
    return true;
}