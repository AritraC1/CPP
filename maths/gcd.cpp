#include <iostream>
#include <bits/stdc++.h> 
#include "maths.hpp"

using namespace std;

// Function to find all factors (divisors) of a number
vector<int> factors(int num) {
    vector<int> fac;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            // cout << "Factors of " << num << " are: " << i << endl;
            fac.push_back(i);
        }
    }

    return fac;
}

// Function to find the Greatest Common Divisor (GCD) of two numbers
int gcd(int a, int b) {
    // Find all factors of a
    vector<int> fac_a = factors(a);

    // Find all factors of b
    vector<int> fac_b = factors(b);

    // Set to store common factors
    set<int> common_factors;

    for (size_t i = 0; i<fac_a.size(); i++){
        for (size_t j = 0; j<fac_b.size(); j++) {
            if (fac_a[i] == fac_b[j]) {
                common_factors.insert(fac_b[j]);
            }
        }
    }

    // If common factors were found, rbegin() points to the largest common factor
    if (!common_factors.empty()) {
        return *common_factors.rbegin();
    }

    // Return 1 as the default GCD
    return 1;
}