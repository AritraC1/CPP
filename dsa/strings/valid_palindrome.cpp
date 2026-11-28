/*

LC 125: Valid Palindrome

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.


Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.


*/

#include "utils/string_utils.hpp"

#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string s) {
    // Remove spaces and special characters
    utils::remove_spaces_special_chars(s);

    // Convert to lowercase
    s = utils::to_lower(s);

    // convert to array
    vector<char> arr = utils::string_to_char_arr(s);

    // Match first and last
    int n = arr.size();
    int i = 0;
    int j = n-1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}