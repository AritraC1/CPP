#include <iostream>
#include <vector>

#include "utils/utils.hpp"

using namespace std;

// Insertion sort
// Takes an element and place it in ots correct order
vector<int> insertion_sort(vector<int> arr) {

    for (int i = 1; i < arr.size(); i++) {

        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at its correct position
        arr[j + 1] = key;
    }

    return arr;
}
