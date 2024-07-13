#include <iostream>
#include <string>

std::string squareDigits(int n) {
    std::string result = "";
    result = std::to_string(n % 10 * (n % 10)) + result;
    while (n > 0) {
        int digit = n % 10;
        result = std::to_string(digit * digit) + result;
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