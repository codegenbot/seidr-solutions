#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    int len = input.length();
    return input.substr(len / 2, len % 2 == 0 ? 2 : 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    if (!(std::getline(std::cin, input)) || input.empty()) {
        std::cout << "Input is empty." << std::endl;
        return 0;
    }
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}