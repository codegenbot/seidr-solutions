#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << squareDigits(input);
    std::cout << std::endl;
    return 0;