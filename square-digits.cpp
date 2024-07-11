#include <iostream>
#include <string>

int main() {
    long long num; // Change type to long long
    std::cin >> num;
    std::string result = "";
    while (num > 0) {
        int digit = num % 10;
        result = std::to_string(digit * digit) + result;
        num /= 10;
    }
    std::cout << result << std::endl;
    return 0;
}