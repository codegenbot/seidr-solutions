#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    int len = input.length();
    if (len % 2 == 1) {
        return std::string(1, input.at(len / 2));
    } else {
        return input.substr((len - 1) / 2, 2);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    if (!(std::getline(std::cin, input)) || input.empty()) {
        std::cout << "Input is empty." << std::endl;
        return 0;
    }
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}