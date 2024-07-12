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
    int num;
    std::cin >> num;
    std::cout << squareDigits(num) << std::endl;
    return 0;
}