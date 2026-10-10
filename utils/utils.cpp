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
}