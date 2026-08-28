#include <iostream>
#include <vector>
#include "dsa/recursion/recursion.hpp"

using namespace std;

int main() {
    vector<int> ans = fibonacci(6);

    for (int i: ans) {
        cout << i << " ";
    }

    return 0;
}