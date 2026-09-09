#include <iostream>
#include <vector>

#include "utils/utils.hpp"

using namespace std;

// Bubble sort
vector<int> bubble_sort(vector<int> arr) {

    for (int i = 0; i < arr.size(); i++) {

        for (int j = 0; j < arr.size() - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return arr;
}
