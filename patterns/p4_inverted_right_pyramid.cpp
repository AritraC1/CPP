/*

Pattern 4: Inverted Right Pyramid

*****
****
***
**
*

*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

void inverted_right_pyramid(int n) {
    for (int i = 0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}
