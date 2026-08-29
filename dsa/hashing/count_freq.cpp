#include <bits/stdc++.h>

using namespace std;

// Count frequency of each element in the array
void count_frequency(int n) {
    // Array declared
    int arr[n];

    // taking input in array
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    // Map
    unordered_map<int, int> map;

    // Count frequencies of all elements
    for (int i = 0; i<n; i++) {
        map[arr[i]]++;
    }

    // traverse the map and print element with freq
    for (auto it : map) {
        int ele = it.first;
        int freq = it.second;

        cout << "Element: " << ele << " Freq: " << freq << endl;
    }
}