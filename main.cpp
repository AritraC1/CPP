#include <iostream>
#include "maths/maths.hpp"
using namespace std;

int main() {
    vector<int> ans = print_all_divisors(36);

    for (int i: ans) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}