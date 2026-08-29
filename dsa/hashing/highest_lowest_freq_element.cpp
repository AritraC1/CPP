#include <bits/stdc++.h>

using namespace std;

// Find the highest and lowest frequency element
void highest_lowest_freq_element(int n) {
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

    int max_element = 0, min_element = 0;
    int max_freq = 0, min_freq = n;

    // traverse the map to find elements with max and min frequencies
    for (auto it : map) {
        int element = it.first;
        int count = it.second;

        // Update max frequency element
        if (count > max_freq) {
            max_freq = count;
            max_element = element;
        }

        // Update min frequency element
        if (count < min_freq || (count == min_freq && element < min_element)) {
            min_freq = count;
            min_element = element;
        }
    }

    cout << "\nThe highest frequency element is " << max_element << " with frequency: " << max_freq << endl;
    cout << "The lowest frequency element is " << min_element << " with frequency: " << min_freq << endl;
}