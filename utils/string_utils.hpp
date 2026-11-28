#pragma once

#include <string>
#include <vector>

namespace utils {
    // Remove spaces and remove special characters from a string
    void remove_spaces_special_chars(std::string& s);

    // Convert string into array of characters
    std::vector<char> string_to_char_arr(const std::string& s);

    // To lowercase
    std::string to_lower(const std::string& s);

    // To uppercase
    std::string to_upper(const std::string& s);
}