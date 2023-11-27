#include <iostream>
#include <string>
#include <cmath>

std::string squareDigits(int n) {
    std::string result = "";
    while (n > 0) {
        int digit = n % 10;
        int square = std::pow(digit, 2);
        result = std::to_string(square) + result;
        n /= 10;
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << squareDigits(n) << std::endl;
    return 0;
}