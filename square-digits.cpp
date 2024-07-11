#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    int number = std::stoi(input);
    std::string result = "";
    
    while (number > 0) {
        int digit = number % 10;
        result += std::to_string(digit * digit);
        number /= 10;
    }
    return result;
}

int main() {
    std::cout << squareDigits("355637") << std::endl; 
    return 0;
}