#include <bits/stdc++.h>
using namespace std;

void largest_element_in_array(int arr[], int n) {
    int largest = arr[0];

    for (int i = 1; i<n; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }

    cout << "largest element: " << largest << endl;;
}