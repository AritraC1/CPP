#include "string_utils.hpp"

#include <string>
#include <algorithm> 
#include <cctype>

namespace utils {
    // Remove spaces and remove special characters from a string
    void remove_spaces_special_chars(std::string& s) {
        s.erase(
            std::remove_if(s.begin(), s.end(), [](unsigned char c) {
                return !std::isalnum(c);
            }),
            s.end()
        );
    }

    // Convert string into array of characters
    std::vector<char> string_to_char_arr(const std::string& s) {
        // Copy all characters from the string into the vector
        std::vector<char> arr(s.begin(), s.end());
        
        // Append a null terminator to mark the end of the C-style string
        arr.push_back('\0');

        return arr;
    }

    // To Lowercase
    std::string to_lower(const std::string& s) {
        std::string result = s;

        for (std::size_t i = 0; i < result.length(); i++) {
            result[i] = std::tolower(static_cast<unsigned char>(result[i]));
        }

        return result;
    }

    // To Uppercase
    std::string to_upper(const std::string& s) {
        std::string result = s;

        for (std::size_t i = 0; i < result.length(); i++) {
            result[i] = std::toupper(static_cast<unsigned char>(result[i]));
        }

        return result;
    }
}