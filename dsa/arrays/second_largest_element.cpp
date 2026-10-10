#include <bits/stdc++.h>
using namespace std;

// second largest element without sorting
void second_largest_element(int arr[], int n) {
    int largest = arr[0];
    int sec_largest = 0;

    for (int i = 1; i<n; i++) {
        if (largest < arr[i]) {
            sec_largest = largest;
            largest = arr[i];
        }
    }

    cout << "Second largest = " << sec_largest << endl;
}