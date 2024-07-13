#include <iostream>
#include <string>

std::string squareDigits(long long n) {
    std::string result = "";
    while (n > 0) {
        int digit = n % 10;
        result = std::to_string(digit * digit) + result;
        n /= 10;
    }
    return result;
}

int main() {
    long long n;
    std::cin >> n;
    std::cout << squareDigits(n) << std::endl;
    return 0;
}