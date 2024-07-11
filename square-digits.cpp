#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit * digit);
    }

    std::cout << output << std::endl;

    return 0;
}