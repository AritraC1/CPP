#pragma once

#include <vector>

namespace Utils {
    // Swap 2 numbers
    void swap(int& a, int& b);

    // Print vectors
    void print_vectors(const std::vector<int>& arr);

    // Print arrays
    void print_arrays(int* arr, int n);

    // manually delete a number from array
    void delete_num_from_array(int arr[], int& n, int index);

    // Reverse an array
    void reverse_array(int arr[], int start, int end);
}