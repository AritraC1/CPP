/*

Pattern 2: Right-Angled Triangle

*
**
***
****
*****

*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

void right_angled_triangle(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<=i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}