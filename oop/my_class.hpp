#include <iostream>
#include <string.h>
#include <vector>

// Class declaration
// Defines the structure (data + functions) of a MyClass object.
class MyClass {
    // Data members or attributes (variables)
    // Store the state of an object.
    std::string name;
    int age;
    std::vector<std::string> hobbies;

    // Public members can be accessed from outside the class.
    public:
        // Constructor
        // Initializes a new MyClass object with the provided values.
        MyClass(
                std::string name, 
                int age,
                std::vector<std::string> hobbies
        );

        // Member function
        // Displays all details of the object.
        // 'const' means this function cannot modify object data - This function promises not to modify any member variables of the object.
        // Reading data is allowed.
        void display_details() const;
};

// By default, class members are private.
// Private members can only be accessed from inside the class.