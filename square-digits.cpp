#include <string>
#include <iostream>

int main() {
    std::string input = "123"; 
    std::cout << squareDigits(input) << std::endl;
    return 0;
}

std::string squareDigits(std::string input) {
    std::string output;
    
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit*digit);
        
    }
    return output;
}