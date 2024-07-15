#include <string>

std::string squareDigits(std::string input) {
    std::string result;
    for(char c : input) {
        int digit = c - '0';
        result += (digit * digit) + "";
    }
}