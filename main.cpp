#include <iostream>
#include "dsa/arrays/arrays_.hpp"
#include "utils/utils.hpp"

using namespace std;

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};
    int len = 6;
    int n = 2;

    cout << "Original Array: " << endl;
    Utils::print_arrays(arr, len);

    right_array(arr, len, n);

    cout << "\nRight rotated Array by " << n << " places: " << endl;
    Utils::print_arrays(arr, len);

    return 0;
}