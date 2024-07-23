#include <string>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        if (isdigit(c)) { 
            result += std::to_string(digit * digit);
        }
    }
    return result;
}