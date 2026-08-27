#include <iostream>
#include <bits/stdc++.h> 
#include "maths.hpp"
using namespace std;

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

int gcd(int a, int b) {
    vector<int> fac_a = factors(a);
    vector<int> fac_b = factors(b);

    set<int> common_factors;

    for (size_t i = 0; i<fac_a.size(); i++){
        for (size_t j = 0; j<fac_b.size(); j++) {
            if (fac_a[i] == fac_b[j]) {
                common_factors.insert(fac_b[j]);
            }
        }
    }

    if (!common_factors.empty()) {
        return *common_factors.rbegin();
    }

    return 1;

}