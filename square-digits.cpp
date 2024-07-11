#include <iostream>
#include <string>

int main() {
    unsigned int num;
    std::cin >> num;
    std::string result = "";

    if (num == 0) {
        result = "0";
    }

    while (num > 0) {
        int digit = num % 10;
        int square = digit * digit;
        result = std::to_string(square) + result;
        num /= 10;
    }

    std::cout << result << std::endl;
    return 0;
}