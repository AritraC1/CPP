/*

Pattern 1: Rectangular Star

****
****
****
****

*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

void rectangular_star(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << " " << endl;
    }
}