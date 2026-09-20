#include <iostream>
#include <vector>

#include "dsa/sorting/sorting.hpp"
#include "utils/utils.hpp"

using namespace std;

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    bubble_sort(arr);
    print_vectors(arr);
}