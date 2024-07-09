#include <iostream>
#include <string>

int main() {
    int num;
    std::cin >> num;

    std::string output = "";
    while (num > 0) {
        int digit = num % 10;
        output = std::to_string(digit * digit) + output;
        num /= 10;
    }

    std::cout << output << std::endl;

    return 0;
}