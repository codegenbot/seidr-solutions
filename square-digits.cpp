#include <iostream>
#include <string>

std::string squareDigitsStr(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        int squared = digit * digit;
        char c2 = '0' + squared % 10; 
        char head = '1' + squared / 10; 
        result = std::string(1, head) + std::string(1, c2) + result; // concatenate in reverse order
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::getline(std::cin, input);
    std::cout << "The square of the digits is: " << squareDigitsStr(input) << std::endl;
}