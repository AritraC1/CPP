#include <iostream>
#include "recursion.hpp"

using namespace std;

// Print 1 to N using Recursion
void print_till_n(int start, int stop){
    if (start > stop) return;
    
    cout << start << endl;

    print_till_n(start+1, stop);
}