#include <iostream>
#include <string>
#include <math.h>
#include "maths.hpp"

using namespace std;

// binary conversion (num to binary)
static string binary(int num) {
    if (num == 0) return "0";

    string bin = "";

    while(num > 0) {
        // 1. Get the remainder (0 or 1) and add it to the front
        bin = to_string(num % 2) + bin;
        
        // 2. Divide the number by 2 to move to the next digit
        num = num / 2;
    }

    return bin;
}

// Revert binary to number
static int revert(string &str) {
    int ans = 0;

    for (char c : str) {
        ans = ans * 2 + (c - '0');
    }

    return ans;
}


// Adding 2 binary numbers
void binary_addition(int& a, int& b) {    
    // converting to binary
    string x = binary(a);
    cout << "Binary of " << a << " is: " << x << endl;

    string y = binary(b);
    cout << "Binary of " << b << " is: " << y << endl;
    
    string res;

    int i = x.size()-1;
    int j = y.size()-1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        
        if (i >= 0) {
            sum += x[i--] - '0';
        }

        if (j >= 0) {
            sum += y[j--] - '0';
        }

        res = char('0' + sum % 2) + res;
        
        carry = sum / 2;
    }

    cout << "Binary addition of " << a << " and " << b << " is: " << res << endl;
    cout << "Binary addition of " << a << " and " << b << " is: " << revert(res) << endl;
}