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
// It means that the most recently inserted element is removed first and the first inserted element will be removed last.
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

// QUEUE
// A queue is a container adapter that stores elements in FIFO (First In, First Out) order. 
// It allows elements to be inserted from the back and removed from the front, ensuring the first inserted element is removed first.
void explain_queue() {
    queue<int> q;

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    cout << "Front: " << q.front() << " Back: " << q.back() << endl;

    q.pop();

    cout << q.front();

    // size, swap, and empty same as stack
}

// PRIORITY QUEUE
// A priority queue is an abstract data type similar to a regular queue, but with one key difference: each element in the priority queue is associated with a priority level, and elements are dequeued based on their priority rather than their arrival time. 
// Higher priority elements are dequeued before lower priority ones.
void explain_pq() {
    priority_queue<int> pq;

    // Max Heap
    pq.push(2); // {2}
    pq.push(4); // {4, 2}
    pq.push(1); // {4, 2, 1}
    pq.push(5); // {5, 4, 2, 1}
    pq.emplace(3); // {5, 4, 3, 2, 1}

    cout << "Top: " << pq.top() << endl;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); // {5}
    pq1.push(2); // {2, 5}
    pq1.push(8); // {2, 5, 8}
    pq1.emplace(10); // {2, 5, 8, 10}

    cout << "Top: " << pq1.top() << endl;

    // push and pop - logn
    // top - O(1)
}

// SET
// A Set is a container which stores unique elements in some sorted order. It is an implementation of a Self-Balancing Binary Search Tree.
// It does not allow duplicates, Search, insert, and delete in O(log n) time, Elements are always sorted in ascending order by default.
void explain_set() {
    // Creating an empty set
    set<int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.emplace(5);
    s1.emplace(4);
    
    // `it` is an iterator 
    // auto it1 = s1.find(5);
    // auto it2 = s1.find(8);

    // erases 4
    s1.erase(4);

    int count = s1.count(8);
    cout << "Count: " << count << endl;


    // Initialize set with list 
    set<int> s2 = {1, 2, 3, 2, 1}; 

    for (int i : s2) {
        cout << i << " ";
    }

    cout << endl;

    // lower_bound() and upper_bound() function works in the same way as in vector
    
    auto it1 = s2.upper_bound(2);
    auto it2 = s2.lower_bound(3);

    // in SET, everything happens in a log(N) time complexity
}

// MULTISET
// Multiset is an associative container similar to a set, but it can store multiple elements with the same value. 
// It is sorted in increasing order by default, but it can be changed to any desired order using a custom comparator.
void explain_multiset() {
    multiset<int> mst;

    mst.insert(1); // {1}
    mst.insert(1); // {1, 1}
    mst.insert(1); // {1, 1, 1}
    mst.emplace(1); // {1, 1, 1, 1}

    for (int i : mst) {
        cout << i << " ";
    }

    cout << endl;

    mst.erase(1); // erases all the 1s in the set

    int count = mst.count(1);
    cout << "Count: " << count << endl;

    mst.emplace(2);
    mst.emplace(2);
    mst.emplace(2);

    for (int i : mst) {
        cout << i << " ";
    }

    cout << endl;

    mst.erase(mst.find(2)); // only a single 2 is erased

    for (int i : mst) {
        cout << i << " ";
    }

    cout << endl;

    // erase(start, end)
    mst.erase(mst.find(2), next(mst.find(2), 2));

    for (int i : mst) {
        cout << i << " ";
    }

    // rest all functions are same as set
}

// STL (Standard Template Library)
void stl() {
    // Pairs
    // explain_pairs();

    // Vectors
    // explain_vectors();

    // Lists and dequeue are exactly similar to vectors - same operations

    // Stack
    // explain_stack();

    // Queue
    // explain_queue();

    // Priority queue
    // explain_pq();

    // Set
    // explain_set();

    // Multiset
    explain_multiset();
}