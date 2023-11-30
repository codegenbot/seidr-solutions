#include <iostream>
#include <string>
#include <cmath>

std::string squareDigits(int num) {
    std::string result = "";
    while (num > 0) {
        int digit = num % 10;
        int square = digit * digit;
        result = std::to_string(square) + result;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << squareDigits(num) << std::endl;
    return 0;
}