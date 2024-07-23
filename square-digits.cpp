#include <string>
#include <iostream>

std::string squareDigits(int n) {
    std::string str = std::to_string(n);
    std::string result;
    for (char c : str) {
        int digit = c - '0';
        int squaredDigit = digit * digit;
        std::string digitStr = std::to_string(squaredDigit);
        result += digitStr;
    }
    return result;
}

int main() {
    int input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    std::cout << squareDigits(input) << std::endl;
    return 0;
}