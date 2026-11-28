#include "dsa/strings/strings.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "A man, a plan, a canal: Panama";

    bool ans = isPalindrome(s);

    if (ans) {
        cout << "True" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
