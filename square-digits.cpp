#include <iostream>
#include <string>

std::string squareDigits(int num) {
    std::string result = "";
    while (num > 0) {
        int digit = num % 10;
        result = std::to_string(digit * digit) + result;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    std::cin >> num;
    std::string squared = squareDigits(num);
    
    // Add '0' for digits that are 0
    for (size_t i = 0; i < squared.size(); ++i) {
        if (squared[i] == '0') {
            squared[i] = '0';
        }
    }
    
    std::cout << squared << std::endl;
    return 0;
}