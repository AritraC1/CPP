/*

Pattern 8: Diamond Star Pattern

        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
     * * *
       *


*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

void upper_half(int n) {
    for (int i = 0; i < n; i++) {

        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void lower_half(int n) {
    for (int i = n - 1; i >= 0; i--) {

        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void diamond_star(int n) {
    upper_half(n);
    lower_half(n);
}