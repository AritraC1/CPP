// Pass by reference
// Pass by reference means a function receives a reference to the original variable, so changes made inside the function affect the original variable.
void change_number(int &x) {
    x = 100;
}

// Pass by value
void change_pass_by_value(int x) {
    x = 100;
}

// Pass by reference
void change_pass_by_reference(int &x) {
    x = 100;
}

// With pass by value, the original variable doesn't change. With pass by reference, the original variable changes.
// Common use: swapping two variables

// Overloading functions
// Function overloading allows us to define multiple functions with the same name but with different parameters, 
// so that the same function name can perform different tasks depending on the values and types of arguments passed.
int add_numbers(int a, int b) {
    return a+b;
};

double add_numbers(double a, double b) {
    return a+b;
};