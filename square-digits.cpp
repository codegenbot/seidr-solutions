#include <iostream>

int squareDigits(int n) {
    int temp = n;
    int result = 0;
    while (temp != 0) {
        int digit = temp % 10;
        temp /= 10;
        result = result * 10 + digit * digit;
    }
    return result;
}

int main() {
    std::cout << squareDigits(14) << std::endl; 
    // Output: 81
    return 0;
}