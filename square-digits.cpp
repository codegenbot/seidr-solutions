#include <vector>
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        int digit = c - '0'; 
        result += std::to_string(digit * digit); 
    }
    return result;
}

int main() {
    std::cout << squareDigits("0") << std::endl;  
    std::cout << squareDigits("1") << std::endl;  
    std::cout << squareDigits("2") << std::endl;  
    std::cout << squareDigits("3") << std::endl;  
    std::cout << squareDigits("4") << std::endl;  
    return 0;
}