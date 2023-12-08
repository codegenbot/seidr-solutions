#include <iostream>
#include <string>

std::string getMiddleCharacter(const std::string& input) {
    int length = input.length();
    if (length % 2 == 1) {
        return std::string(1, input[length / 2]);
    } else {
        return input.substr(length / 2 - 1, 2);
    }
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << getMiddleCharacter(input) << std::endl;
    return 0;
}