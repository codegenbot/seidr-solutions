```
#include <vector>
#include <iostream>
#include <string>

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int num = c - '0';
        output += std::to_string(num * num);
    }
    return output;
}

int main() {
    std::cout << squareDigits("0") << std::endl; 
    std::cout << squareDigits("1") << std::endl; 
    std::cout << squareDigits("2") << std::endl; 
    std::cout << squareDigits("3") << std::endl; 
    std::cout << squareDigits("4") << std::endl; 
    return 0;
}