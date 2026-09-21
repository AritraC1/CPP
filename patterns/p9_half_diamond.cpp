/*

Pattern 9: Half Diamond

*
**
***
****
*****
****
***
**
*

*/

#include <iostream>
#include "patterns.hpp"

using namespace std;

static void upper_half(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

static void lower_half(int n) {
    for (int i = 0; i<n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void half_diamond(int n) {
    upper_half(n);
    lower_half(n);
}