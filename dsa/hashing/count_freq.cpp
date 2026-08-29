#include <bits/stdc++.h>

using namespace std;

void count_frequency(int n) {
    // Array declared
    int arr[n];

    // taking input in array
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    // Map
    unordered_map<int, int> map;

    for (int i = 0; i<n; i++) {
        map[arr[i]]++;
    }

    // print element with freq
    for (auto it : map) {
        int ele = it.first;
        int freq = it.second;

        cout << "Element: " << ele << " Freq: " << freq << endl;
    }
}