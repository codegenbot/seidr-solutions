#include <string>

std::string squareDigits(int n) {
    std::string str = std::to_string(n);
    std::string result;
    for (char c : str) {
        int digit = c - '0';
        digit = digit * digit;
        result += std::to_string(digit);
    }
    return result;