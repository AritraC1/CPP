#include "oop/my_class.hpp"

int main() {

    // Create an object named 'profile'.
    MyClass profile (
        "Tony",
        33,
        {"Cycling", "Shooting", "Reading"}
    );

    // Call a public member function of the object.
    // This will print all details stored in 'profile'.
    profile.display_details(); 

    // Copy constructor
    MyClass old_profile = profile;

    old_profile.display_details();

    return 0;
}