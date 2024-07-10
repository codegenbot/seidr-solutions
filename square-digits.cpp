#include <iostream>

int main() {
    int number;
    std::cin >> number;

    if (number <= 0) {
        std::cout << "Invalid input" << std::endl;
        return 1; // Exit program with error code 1
    }

    int temp = number;
    int result = 0;
    int base = 1;

    while (temp > 0) {
        int digit = temp % 10;
        result += digit * digit * base;
        temp /= 10;
        base *= 100;
    }

    std::cout << result << std::endl;

    return 0;
}