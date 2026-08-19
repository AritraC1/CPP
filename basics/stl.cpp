#include <bits/stdc++.h> // only works with gcc
#include "basics.hpp"
using namespace std;

// PAIRS
// Pair is a simple container that holds two values together. 
// These two values can be of different types, and they are stored as a single unit.
void explain_pairs() {
    // int can also be replaced with string, char, tuple, etc - data type can be anything 
    pair<int, int> p = {1, 3}; // p has values 1,3

    // Accessing the first and second value
    cout << p.first << " " << p.second << endl;

    // Nested pair 
    pair<int, pair<int, int>> pr = {1, {3, 4}};

    // Accessing nested pairs
    cout << pr.first << " " << pr.second.first << " " << pr.second.second << endl;

    pair<int, int> arr[] = {
        {0,1}, {2,3}, {4,5}
    };

    // Accessing in array
    cout << arr[0].first << " " << arr[1].second << endl;
}

// VECTORS
// A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity.
void explain_vectors() {
    // Declaring a vector
    vector<int> v;

    v.push_back(1); // slower
    v.emplace_back(2); // faster

    // why push_back() is slower than emplace_back()?
    // emplace_back() constructs the object directly in the container, 
    // while push_back() may require creating/moving/copying a temporary object first.
    // In other words: emplace_back() creates the object directly inside the container, 
    // while push_back() usually creates it first and then moves/copies it in.

    // Traditional way of printing a vector
    for (int i = 0; i<v.size(); i++) {
        cout << v[i] << endl;
    }

    cout << endl;

    // Modern way of printing a vector
    for (int i: v){
        cout << i << endl;
    }

    cout << endl;

    // Using Standard STL Iterators
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }

    cout << endl;

    vector<int> v2{5, 10, 15, 20};
    for (int i: v2){
        cout << i << endl;
    }

    cout << endl;

    cout << v[1] << endl;

    cout << endl;

    // Delete
    v2.erase(v2.begin()+1); // 10 (v2.begin() = 5)

    for (int i: v2){
        cout << i << endl;
    }

    // Insert
    v2.insert(v2.begin(), 0);

    cout << endl;

    for (int i: v2){
        cout << i << endl;
    }
}

// STACK
// Stack container follows LIFO (Last In First Out) order of insertion and deletion. 
// It means that most recently inserted element is removed first and the first inserted element will be removed last.
void explain_stack(){
    // Declaring a stack
    stack<int> st;

    // Inserting elements in a stack
    st.push(2); // {2}
    st.push(3); // {3, 2}
    st.push(4); // {4, 3, 2}
    st.push(5); // {5, 4, 3, 2}
    st.emplace(7); // {7, 5, 4, 3, 2}

    cout << st.top() << endl; // top: the first element

    st.pop(); // {5, 4, 3, 2} -> The top element is removed
 
    cout << st.top() << endl;

    // Size
    cout << st.size() << endl;

    cout << st.empty() << endl;

    // Generic 3 functions in a stack: Push, Pop, Top

    // Swap
    stack<int>st1, st2;
    st1.swap(st2);

}


// STL (Standard Template Library)
void stl() {
    // Pairs
    // explain_pairs();

    // Vectors
    // explain_vectors();

    // Lists and dequeue are exactly similar to vectors - same operations

    // Stack
    explain_stack();
}