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

    vector<int> v2(5, 10);
    for (int i: v2){
        cout << i << endl;
    }

    cout << endl;

    cout << v[1] << endl;
}


// STL (Standard Template Library)
void stl() {
    // Pairs
    // explain_pairs();
    explain_vectors();
}