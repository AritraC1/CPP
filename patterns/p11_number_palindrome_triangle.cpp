/*

Pattern 11: Number Palindrome Triangle

1        1
12      21
123    321
1234  4321
1234554321


*/

#include <iostream>
#include "patterns.hpp"

using namespace std;

void number_palindrome_triangle(int n) {
    for (int i = 0; i<n; i++) {
        // Left
        for (int j = 1; j <= i+1; j++)  {
            cout << j;
        }

        // Mid space
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }

        // right
        for (int j = i + 1; j > 0; j--) {
            cout << j;
        }


        cout << endl;
        
    }
}