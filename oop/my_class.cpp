#include <iostream>
#include "my_class.hpp"

using namespace std;

// Constructor definition
// Uses an initializer list to initialize member variables.
MyClass::MyClass(
    string name,
    int age,
    vector<string> hobbies
): name(name), age(age), hobbies(hobbies) {}

// Member function definition
// Prints the object's details to the console.
void MyClass::display_details() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hobbies: ";

    for (auto it : hobbies) {
        cout << it << " ";
    }

    cout << endl;
}

