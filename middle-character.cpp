#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    if (input.empty()) {
        return "";
    }
    int len = input.length();
    if (len == 1) {
        return input;
    }
    if (len % 2 == 1) {
        return input.substr(len / 2, 1);
    } else {
        return input.substr((len - 1) / 2, 2);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    if (!(std::getline(std::cin, input))) { 
        std::cout << "Input is empty." << std::endl;
        return 0;
    }
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}