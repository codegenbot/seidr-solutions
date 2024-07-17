#include <iostream>
#include <string>

std::string squareDigitsStr(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::getline(std::cin, input);
    std::cout << "The square of the digits is: " << squareDigitsStr(input) << std::endl;
}