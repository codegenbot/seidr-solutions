#include <vector>
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        long long square = (long long)digit * digit;
        output += std::to_string(square);
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    std::cout << "Square digits: " << squareDigits(input) << std::endl;
    return 0;
}