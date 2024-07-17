#include <iostream>
#include <vector>
#include <string>

std::string squareDigitsStr(std::string n) {
    std::vector<std::string> result;
    for (char c : n) {
        int digit = c - '0';
        result.push_back(std::to_string(digit * digit));
    }
    return std::string(result.begin(), result.end());
}

int main() {
    std::string input;
    std::cout << "Enter a positive integer: ";
    std::getline(std::cin, input);
    std::cout << "The square of the digits is: " << squareDigitsStr(input) << std::endl;
}