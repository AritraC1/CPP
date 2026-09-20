#include <iostream>
#include <vector>

#include "utils.hpp"

void print_vectors(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    
    std::cout << std::endl;
}