#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;

    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }

    std::cout << result << std::endl;

    return 0;
}