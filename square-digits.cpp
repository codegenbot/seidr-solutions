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
    std::string test = "493193";
    std::cout << squareDigits(test) << std::endl;  
    return 0;
}