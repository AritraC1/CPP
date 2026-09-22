/*

Pattern 10: Binary Right Angled Triangle

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1

Observations:
- Odd rows start with 1
- Even rows start with 0

core logic: (i + j) % 2

*/

#include <iostream>

using namespace std;

void binary_right_angled_triangle(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<=i; j++) {
            if ((i+j)%2 == 0) {
                cout << 1 << " ";
            }
            else {
                cout << 0 << " ";
            }
        }

        cout << endl;
    }
}