#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        // Square each digit and convert back to string
        result += std::to_string(digit * digit);
    }
    return result;
}

int main() {
    std::cout << squareDigits("355637") << std::endl; 
    return 0;
}