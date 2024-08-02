#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    std::cout << squareDigits("9") << std::endl; // Example usage
    return 0;
}