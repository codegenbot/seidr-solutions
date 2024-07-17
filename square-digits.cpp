```
#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        int square = digit * digit;
        result += std::to_string(square);
    }
    return result;
}