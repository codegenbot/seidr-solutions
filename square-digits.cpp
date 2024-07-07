#include <string>

std::string squareDigits(int n) {
    std::string str = std::to_string(n);
    std::string result;
    for (char c : str) {
        int num = c - '0';
        result += std::to_string(num * num);
    }
    return result;