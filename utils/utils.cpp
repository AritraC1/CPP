#include <iostream>
#include <vector>

namespace Utils {
    // Swap 2 numbers utility
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    // Print vector utility
    void print_vectors(const std::vector<int>& arr) {
        for (int num : arr) {
            std::cout << num << " ";
        }
        
        std::cout << std::endl;
    }

    // Manually delete a number from array
    void delete_num_from_array(int arr[], int& n, int index) {
        if (index < 0 || index >= n) return;

        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    // Print array
    void print_arrays(int* arr, int n) {
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}