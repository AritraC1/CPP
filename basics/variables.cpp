#include <iostream>
#include <typeinfo>
#include "variables.hpp"
using namespace std;

// Variables
void variables() {
    // int
    int a = 5;
    cout << "The value of a is: " << a << " and type is: " << typeid(a).name() << endl;

    // long
    long b = 10;
    cout << "The value of b is: " << b << " and type is: " << typeid(b).name() << endl;

    // long long
    long long c = 15000000;
    cout << "The value of c is: " << c << " and type is: " << typeid(c).name() << endl;

    // float
    float d = 3.14;
    cout << "The value of d is: " << d << " and type is: " << typeid(d).name() << endl;

    // double - can hold both int and float 
    // but stores in single format: double-precision floating-point in the memory
    double e = 5.26;
    cout << "The value of e is: " << e << " and type is: " << typeid(e).name() << endl;
    
    double f = 5;
    cout << "The value of f is: " << f << " and type is: " << typeid(f).name() << endl;

    // string and getline
    string s;
    cin >> s; // takes only single word
    cout << s;

    string str;
    getline(cin, str); // takes full sentence
    cout << str;

    // char
    char ch = 'o';
    cout << ch;

}