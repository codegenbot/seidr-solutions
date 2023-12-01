#include <iostream>
#include <string>

std::string getMiddleCharacter(const std::string& str) {
    int length = str.length();
    if (length % 2 == 1) {
        return std::string(1, str[length / 2]);
    } else {
        return str.substr(length / 2 - 1, 2);
    }
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << getMiddleCharacter(input) << std::endl;
    return 0;
}