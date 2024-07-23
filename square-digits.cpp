#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    if (n == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    std::string result = "";
    while (n > 0) {
        int digit = n % 10;
        result = std::to_string(digit * digit) + result;
        n /= 10;
    }

    std::cout << result << std::endl;

    return 0;
}