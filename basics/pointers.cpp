#include <iostream>
#include <vector>
#include <string>
#include "basics.hpp"

using namespace std;

/*

POINTERS
Pointer is a variable that stores the address of another variable or function

Why use a pointer?

1. It lets you work with the original thing instead of copy and lets you manage memory yourself.
2. It saves time and memory
3. Can be used to build linked structures like linked lists where the pointers point to next one
4. Gets memory at run-time -> useful when you dont know the size ahead of time
5. We can allocate memory dynamically on the heap or free-store -> This memory doesnot have a variable name, the only way to get it is via POINTERS.

*/

void pointers() {
    // Declaring pointers
    // variable_type *pointer_name; (It can also be written as `variable_type* pointer_name`)
    // int* int_ptr;
    // cout << "int pointer: " << int_ptr << endl; // points to garbage

    /*
        double* double_ptr;
        char* char_ptr;
        string *string_ptr;

        This is read right to left: int_ptr is pointer to integer

        In CPP, its very important that you always initialize all pointer variables
        before you use them, if not initialized it will have a garbage data -> unitialized pointers point anywhere
    */

    // Declaring a pointer as a null pointer -> to point nowhere
    // variable_type *pointer_name nullptr;

    int* int_ptr {nullptr};
    cout << "int pointer: " << int_ptr << endl;

    // Accessing pointer address
    // `&` address operator is a unary operator used in an expression which evaluates to the address of its operand
    // Note: The operand must have an `l value`, so it can't be a const or expression that evaluates to temp value

    int num{10};

    // value
    cout << "Value of num: " << num << endl;

    // sizeof of num = how much storage is allocated by num (how much storage is needed to store an integer on the machine)
    cout << "Sizeof of num: " << sizeof(num) << endl; // 4 byte

    // Address of num
    cout << "Address of num: " << &num << endl; // 0x16d39e114 - hexadecimal (base 16 number)
    cout << "Address of &num: " << sizeof(&num) << endl; // size of what it points to


    // `sizeof` of a pointer variable
    // Do not confuse the size of a pointer and the size of what it points to
    // All pointers in a program have the same size
    // They may be pointing to a very large or very small types

    int* p1 {nullptr};
    cout << p1 << endl; // 0
    cout << sizeof(p1) << endl; // 8
    cout << &p1 << endl; // 0x16dc72108
    cout << sizeof(&p1) << endl; // 8

    cout << endl;
    
    double* p2 {nullptr};
    cout << p2 << endl; // 0
    cout << sizeof(p2) << endl; // 8
    cout << &p2 << endl; // 0x16dc72100
    cout << sizeof(&p2) << endl; // 8

    cout << endl;
    
    unsigned long long* p3 {nullptr};
    cout << p3 << endl; // 0
    cout << sizeof(p3) << endl; // 8
    cout << &p3 << endl; // 0x16dc720f8
    cout << sizeof(&p3) << endl; // 8

    cout << endl;
    
    vector<string>* p4 {nullptr};
    cout << p4 << endl; // 0
    cout << sizeof(p4) << endl; // 8
    cout << &p4 << endl; // 0x16dc720f0
    cout << sizeof(&p4) << endl; // 8

    cout << endl;
    
    string* p5 {nullptr};
    cout << p5 << endl; // 0
    cout << sizeof(p5) << endl; // 8
    cout << &p5 << endl; // 0x16dc720e8
    cout << sizeof(&p5) << endl; // 8

    cout << endl;

    // on a 64-bit system every pointer is 8 bytes (64 bits).

    // Typed pointers
    // The compiler will make sure that the address stored in the pointer variable is of the correct type
    int score{10};
    // double high_temp{100.7};

    int* score_ptr {nullptr};

    score_ptr = &score; // OK
    // score_ptr = &high_temp; // Compiler error -  cannot convert 'double*' to 'int*'

    cout << score_ptr << endl;

    cout << "---------"  << endl;

    // Derefencing pointers
    // accessing the data we are pointing to using *

    int marks{100};
    int* marks_ptr {&marks};

    cout << *marks_ptr << endl; // 100
    
    *marks_ptr = 200;
    cout << *marks_ptr << endl; // 200
    cout << marks << endl; // 200

    cout << "---------"  << endl;

    // Dynamic memory allocation
    // We use `new` keyword to allocate memory at run-time

    int* new_ptr {nullptr};

    new_ptr = new int; // allocate an integer on the heap

    cout << new_ptr << endl;
    cout << *new_ptr << endl;

    *new_ptr = 200;

    cout << *new_ptr << endl;

    // Using `delete` to deallocate memory
    delete new_ptr;
    new_ptr = nullptr;

    // delete frees the memory, but the pointer still holds the old address, so set new_ptr = nullptr afterward to avoid a dangling pointer.
}