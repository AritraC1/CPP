#include <iostream>
#include <bits/stdc++.h> 
#include <cmath> 
#include "maths.hpp"
using namespace std;

int count_digits(int num) {
    if (num == 0) return 1;
    return log10(abs(num)) + 1;
}

bool check_armstrong(int num) {
    int sum = 0;
    int original = num;
    int n = count_digits(num);
    
    if (num < 0) return false;

    if (num <= 9) return true;

    while(num > 0) {
        int temp = num % 10;
        sum = pow(temp, n) + sum;
        num = num / 10;
    }

    return sum == original;
}
