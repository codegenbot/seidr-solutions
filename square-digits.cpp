#include <vector>
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
    std::cout << squareDigits("9") << std::endl;
    std::cout << squareDigits("34") << std::endl;
    std::cout << squareDigits("56789") << std::endl;
    return 0;
}