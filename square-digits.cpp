#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::cin >> input;

    // Check for valid input
    for (char digit : input) {
        if (!isdigit(digit)) {
            std::cerr << "Invalid input. Please enter a non-negative integer only." << std::endl;
            return 1;
        }
    }

    std::string output = "";
    for (char digit : input) {
        int num = digit - '0';
        output += std::to_string(num * num);
    }

    std::cout << output << std::endl;

    return 0;
}