#include <vector>
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        int squaredDigit = digit * digit;
        result += to_string(squaredDigit);
    }
    return result;
}

int main() {
    std::cout << squareDigits("0") << std::endl;  // output: 0
    std::cout << squareDigits("1") << std::endl;  // output: 1
    std::cout << squareDigits("2") << std::endl;  // output: 4
    std::cout << squareDigits("3") << std::endl;  // output: 9
    std::cout << squareDigits("4") << std::endl;  // output: 16
    return 0;
}