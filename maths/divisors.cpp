#include <iostream>
#include <bits/stdc++.h> 
#include "maths.hpp"

using namespace std;

// Function to find and return all divisors of a number
vector<int> print_all_divisors(int num) {
    vector<int> divisors;

    for (int i = 1; i<=num; i++) {
        if (num % i == 0) divisors.push_back(i);
    }

    return divisors;
}