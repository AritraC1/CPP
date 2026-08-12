#include <iostream>
#include "basics.hpp"
using namespace std;

// For loop
void findEvenNumbers(int num) {
    for (int i = 0; i<=num; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}

// While loop
void numbers(int num) {
    int i = 1;
    while (i < num) {
        cout << i << endl;
        i = i+1;
    }
}

// Do while
void odd(int num) {
    int i = 0;
    do {
        if (i % 2 != 0) {
            cout << i << endl;
        }

        i = i+1;
    } while ( i < num);
}