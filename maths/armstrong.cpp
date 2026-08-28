#include <iostream>
#include <bits/stdc++.h> 
#include <cmath> 
#include "maths.hpp"

using namespace std;

// Function to count the number of digits in a number
int count_digits(int num) {
    // 0 has exactly one digit
    if (num == 0) return 1;

    // abs() handles negative numbers
    // log10(num) gives the number of digits - 1
    return log10(abs(num)) + 1;
}

// An Armstrong number is a number equal to the sum of its digits, each raised to the power of the number of digits.
// Example: 153 = 1³ + 5³ + 3³ = 153.
bool check_armstrong(int num) {
    int sum = 0;
    int original = num; // Store the original number
    int n = count_digits(num); // Find the number of digits in the given number
    
    // Negative numbers are not considered Armstrong numbers
    if (num < 0) return false;

    // Every single-digit number is an Armstrong number
    if (num <= 9) return true;

    while(num > 0) {
        int temp = num % 10;
        sum = pow(temp, n) + sum;
        num = num / 10;
    }

    // If the calculated sum equals the original number,
    // then the number is an Armstrong number
    return sum == original;
}
