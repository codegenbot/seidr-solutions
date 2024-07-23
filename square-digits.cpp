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
    std::cout << squareDigits(16) << std::endl; // Output: 4
    std::cout << squareDigits(0) << std::endl;  // Output: 0
    std::cout << squareDigits(1) << std::endl;  // Output: 1
    std::cout << squareDigits(2) << std::endl;  // Output: 4
    std::cout << squareDigits(3) << std::endl;  // Output: 9
    return 0;
}