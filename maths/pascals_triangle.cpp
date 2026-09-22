/*

Pascal Triangle Variation 1: 
Given row 'r' and column 'c', find the element at that place. Eg. input: r = 5, c = 3 output: 6

Example of Pascal Triangle

     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1

*/

#include <iostream>

using namespace std;

int pascals_triangle_1(int r, int c) {
    int res = 1;
    
    // Convert 1-based row and column indices to 0-based
    // Pascal Triangle element at (r, c) = (r-1)C(c-1)
    r = r - 1;
    c = c - 1;

    // Compute nCr iteratively:
    // nCr = n!/((n-r)! * r!)
    // without calculating factorials
    for (int i = 0; i<c; i++) {
        // Multiply by the next numerator term
        res = res * (r-i);

        // Divide by the next denominator term
        res = res / (i+1);
    }

     // Return the element at row r and column c
    return res;
}