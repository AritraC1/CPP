/*

Pattern 6: Star Pyramid

        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *

*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

// TODO
void star_pyramid(int n) {
    for (int i = 0; i<n; i++) {
        // Space
        for (int j = n-i-1; j>0; j--) {
            cout << " ";
        }

        // Star
        for (int j = 0; j< 2*i + 1; j++) {
            cout << "*";
        }
        
        // Space
        for (int j = n-i-1; j>0; j--) {
            cout << " ";
        }

        cout << endl;
    }
}