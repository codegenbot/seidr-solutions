#include <iostream>
#include <string>
#include <cmath>

std::string squareDigits(int num) {
    std::string result = "";
    while (num > 0) {
        int digit = num % 10;
        result = std::to_string(pow(digit, 2)) + result;
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