#include <iostream>
#include <string>
#include <typeinfo>
#include "basics.hpp"

using namespace std;

// VARIABLES
// A variable has an address in memory where they are bound to.
// A variable has a type and it stores value
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

    // CONST
    // `const` there value cannot change once declared

    // Types of constants

    // literal constant
    int age = 20;
    string name = "John";
    cout << name << " is " << age << " years old." << endl;
    
    // Declared constant (const keyword)
    const double pi = 3.14;
    // pi = 3; compiler error
    cout << "Value of Pi:" << pi << endl;
    
    // Constant expression (constexpr keyword)
    // A constant expression is an expression whose value can be determined at compile time.
    constexpr int x = 10;
    constexpr int y = 20;
    constexpr int sum = x + y;
    cout << "Sum is = " << sum << endl;

    // Note: const → value cannot be changed. | constexpr → value can be determined at compile time.
    
    // Enumerated constants (enum keyword)
    enum Day {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    };
    Day today = WEDNESDAY;
    cout << "Today is: " << today << endl;
    
    // Define costants (#define)
    // #define months 12; 
    // cout << "Number of months:" << months << endl; dont use defined constants in modern c++
}