#include <iostream>
#include <vector>
#include "dsa/sorting/sorting.hpp"

int main() {
    std::vector<int> arr = {13, 46, 24, 52, 20, 9};
    std::vector<int> ans = selection_sort(arr);

    std::cout << "Original Array: ";
    for (const int i: arr) {
        std::cout << i  << " ";
    }

    std::cout << std::endl;

    std::cout << "Sorted Array: ";
    for (const int i: ans) {
        std::cout << i  << " ";
    }

    std::cout << std::endl;
}