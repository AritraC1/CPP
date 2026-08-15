/*

Pattern 7: Inverted Star Pyramid

* * * * * * * * *
  * * * * * * *
    * * * * *
     * * *
       *

*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

void inverted_star_pyrmaid(int n) {
    for (int i = 0; i<n; i++) {
        // Leading space
        for (int j=0; j<i; j++) {
            cout << " ";
        }

        // Star
        for (int j = 0; j<2*(n-i)-1; j++) {
            cout << "*";
        }

        // Trailing space
        for (int j=0; j<i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}