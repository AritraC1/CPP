#include <iostream>
#include <vector>
#include "dsa/sorting/sorting.hpp"

using namespace std;

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    vector<int> ans = insertion_sort(arr);

    cout << "Original Array: ";
    for (const int i: arr) {
        cout << i  << " ";
    }

    cout << endl;

    cout << "Sorted Array: ";
    for (const int i: ans) {
        cout << i  << " ";
    }

    cout << endl;
}