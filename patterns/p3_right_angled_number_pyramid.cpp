/*

Pattern 3A: Right-Angled Number Pyramid - I

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <iostream>
#include "patterns.hpp"
using namespace std;

void right_angled_number_pyramid_1(int n) {
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout << j;
        }

        cout << endl;
    }
}


/*

Pattern 3B: Right-Angled Number Pyramid - II

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

void right_angled_number_pyramid_2(int n) {
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout << i;
        }
        cout << endl;
    }
}