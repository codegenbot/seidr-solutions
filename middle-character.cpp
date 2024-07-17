#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    int len = 0;
    for (char c : input) {
        if (!std::isspace(c)) {
            len++;
        }
    }
    if (input.empty()) {
        return "";
    }
    if (len % 2 == 1) {
        return std::string(1, input.substr(len / 2 - len / (len > 0), 1)[0]);
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
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}