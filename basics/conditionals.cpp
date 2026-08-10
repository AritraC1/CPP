#include <iostream>
#include "conditionals.hpp"
using namespace std;

// conditionals
void isAdult(int age) 
{
    if (age < 18) {
        cout << "Not an Adult" << endl;
    }

    else if (age == 18) {
        cout << "Just Adult" << endl;
    }

    else {
        cout <<  "Yes Adult" << endl;
    }
}