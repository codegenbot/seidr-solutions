#include <string>
#include <iostream>

std::string squareDigits(std::string input) {
    long num = std::stol(input); 
    std::string output = "";
    while (num > 0) {
        int digit = num % 10; 
        digit *= digit; 
        output += std::to_string(digit);
        num /= 10;
    }
    return std::string(output.rbegin(), output.rend()); 
}

int main() { 
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input);
    std::cout << "Squared digits: " << squareDigits(input) << std::endl;
    return 0;
}