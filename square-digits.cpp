#include <iostream>
#include <string>

std::string squareDigits(int number) {
    std::string result = "";
    std::string numStr = std::to_string(number);
    
    for (char digit : numStr) {
        int num = digit - '0';
        int square = num * num;
        result += std::to_string(square);
    }
    
    return result;
}

int main() {
    int number;
    std::cin >> number;
    
    std::cout << squareDigits(number) << std::endl;
    
    return 0;
}