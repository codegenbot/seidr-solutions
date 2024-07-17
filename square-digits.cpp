#include <iostream>
#include <string>

std::string squareDigitsStr(std::string n) {
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        int squared = digit * digit;
        char c2 = '0' + squared % 10; // get the last digit of the square
        char head = '1' + squared / 10; // get the rest of the square
        result += std::string(1, head) + std::string(1, c2); 
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::getline(std::cin, input);
    std::cout << "The square of the digits is: " << squareDigitsStr(input) << std::endl;
}