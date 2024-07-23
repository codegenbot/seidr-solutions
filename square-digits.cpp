#include <iostream>

int squareDigits(int n) {
    int result = 0;
    while (n > 0) {
        int digit = n % 10;
        result = result * 10 + digit * digit;
        n /= 10;
    }
    return result;
}

int main() {
    std::cout << squareDigits(0) << std::endl; 
    std::cout << squareDigits(1) << std::endl; 
    std::cout << squareDigits(2) << std::endl; 
    std::cout << squareDigits(3) << std::endl; 
    std::cout << squareDigits(4) << std::endl; 
    return 0;
}