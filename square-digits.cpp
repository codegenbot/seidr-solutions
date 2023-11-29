#include <iostream>
#include <string>

std::string squareDigits(int n) {
    std::string result = "";
    while (n > 0) {
        int digit = n % 10;
        result = std::to_string(digit * digit) + result;
        n /= 10;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "Output: " << squareDigits(n) << std::endl;
    return 0;
}