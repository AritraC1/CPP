#include <bits/stdc++.h>
using namespace std;

int largest_element_in_array(int arr[], int n) {
    int largest = arr[0];

    for (int i = 0; i<n; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }

    return largest;
}