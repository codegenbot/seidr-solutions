#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    std::cout << "Input: 49393\nOutput: " << squareDigits("49393") << std::endl;
    std::cout << "Input: 12345\nOutput: " << squareDigits("12345") << std::endl;
    std::cout << "Input: 5850\nOutput: " << squareDigits("5850") << std::endl;
    return 0;
}