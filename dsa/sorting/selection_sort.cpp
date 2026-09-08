#include <iostream>
#include <vector>

#include "utils/utils.hpp"

using namespace std;

// Selection sort
vector<int> selection_sort(vector<int> arr) {

    for (int i = 0; i < arr.size(); i++) {

        int minIndex = i;

        // Find index of minimum element
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap actual elements in arr
        swap(arr[i], arr[minIndex]);
    }

    return arr;
}