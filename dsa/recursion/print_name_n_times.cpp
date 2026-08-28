#include <iostream>
#include <string>
#include "recursion.hpp"
using namespace std;

void print_name(string name, int n) {
    // Base condition
    if (n == 0) return;
    
    cout << name << endl;
    print_name(name, n-1);
}