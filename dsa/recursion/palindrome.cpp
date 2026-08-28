#include <iostream>
#include <string>
#include "recursion.hpp"

using namespace std;

bool check_palindrome(string s) {
    // Base case: empty string or one character
    if (s.size() <= 1) return true;

    // If first and last characters don't match
    if (s.front() != s.back()) return false;

    // Recursively check the middle
    return check_palindrome(s.substr(1, s.size() - 2));
}