#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}

int main() {
    try {
        std::string input;
        std::cout << "Enter a positive integer: ";
        std::cin >> input;
        if (input.empty()) {
            throw std::runtime_error("Input cannot be empty");
        }
        for (char c : input) {
            if (!isdigit(c)) {
                throw std::invalid_argument("Invalid input. Only digits are allowed.");
            }
        }
        std::cout << "Square of each digit: " << squareDigits(input) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}