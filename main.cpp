#include <iostream>
// #include "basics/loops.hpp"
#include "patterns/p1_rectangular_star.hpp"
using namespace std;

int main() {
    cout << "Hello World" << endl;
    
    // variables();
    // isAdult(12);
    // dayDate(8);
    // findEvenNumbers(10);
    // numbers(7);
    // odd(5);

    // Printing patterns
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    rectangular_star(n);

    return 0;
}