#include <iostream>

int squareDigits(int n) {
    int res = 0;
    while (n > 0) {
        int digit = n % 10;
        res = res * 10 + digit * digit;
        n /= 10;
    }
    return res;
}

int main() {
    std::cout << squareDigits(16) << std::endl; 
    // Output: 4
    return 0;
}