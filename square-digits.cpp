#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    string input;
    std::cout << "Enter a positive integer: ";
    std::getline(std::cin, input);
    std::cout << "The square digits are: " << squareDigits(input) << std::endl;
    return 0;