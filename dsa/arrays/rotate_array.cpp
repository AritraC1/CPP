#include <bits/stdc++.h>
#include "utils/utils.hpp"

using namespace std;

// Left rotate the array by n places (No new array)
void left_array(int arr[], int len, int n) {
    if (len == 0) return;

    n = n % len;

    // Reverse the first n elements
    Utils::reverse_array(arr, 0, n - 1);

    // Reverse the remaining elements
    Utils::reverse_array(arr, n, len - 1);

    // Reverse the entire array
    Utils::reverse_array(arr, 0, len - 1);
}

// Right rotate the array by n places (No new array)
void right_array(int arr[], int len, int n) {
    if (len == 0) return;

    n = n % len;

    // Reverse the last n elements
    Utils::reverse_array(arr, n-1, n-1);

    // Reverse the remaining elements
    Utils::reverse_array(arr, n, n-1);
    
    // Reverse the entire array
    Utils::reverse_array(arr, n-1, n-1);
}