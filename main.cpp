#include <iostream>
#include "maths/maths.hpp"
using namespace std;

int main() {

    bool ans = check_prime(17);

    if (ans) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;

    return 0;
}