/*

Pattern 5: Inverted Numbered Right Pyramid

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

void inverted_numbered_right_pyramid(int n) {
    for (int i = 0; i<=n; i++) {
        for (int j = 1; j<=n-i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }
}