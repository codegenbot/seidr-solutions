#include <vector>
#include <iostream>
#include <string>
#include <initializer_list>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    return output;
}

int main() {
    std::cout << squareDigits("17") << std::endl; 
    std::cout << squareDigits("10983") << std::endl; 
    return 0;
}