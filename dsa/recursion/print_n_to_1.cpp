#include <iostream>
#include "recursion.hpp"

using namespace std;

// Print N to 1 using Recursion
void print_till_1(int n){
    if (n == 0) return;
    
    cout << n << endl;

    print_till_1(n-1);
}