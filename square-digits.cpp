#include <iostream>
#include <string>
#include <cmath>

std::string squareDigits(int num) {
    std::string result = "";
    std::string numStr = std::to_string(num);
    
    for (char digit : numStr) {
        int square = pow(digit - '0', 2);
        result += std::to_string(square);
    }
    
    return result;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    
    std::string result = squareDigits(num);
    std::cout << "Output: " << result << std::endl;
    
    return 0;
}