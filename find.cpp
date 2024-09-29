#include "find.hpp"

int find(const std::string &str, char ch) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            return static_cast<int>(i); 
        }
    }
    return -1; 
}

int find(const std::string &str, const std::string &subStr) {
    size_t strLength = str.length();
    size_t subStrLength = subStr.length();

    for (size_t i = 0; i <= strLength - subStrLength; ++i) {
        if (str.substr(i, subStrLength) == subStr) {
            return static_cast<int>(i); 
        }
    }
    return -1; 
}
