#pragma once

#include <vector>

namespace Utils {
    // Swap 2 numbers
    void swap(int& a, int& b);

    // Print vectors
    void print_vectors(const std::vector<int>& arr);

    // manually delete a number from array
    void delete_num_from_array(int arr, int n);

    // Print arrays
    void print_arrays(int* arr, int n);
}