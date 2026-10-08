#include <iostream>
#include "dsa/arrays/arrays_.hpp"

using namespace std;

int main() {
    int arr[] = {3, 2, 1, 3, 2};
    int n = 5;

    int ans = largest_element_in_array(arr, n);
    cout << "largest element: " << ans << endl;
}