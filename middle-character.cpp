#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    int len = input.length();
    if (len % 2 == 1) {
        return input.substr(len / 2, 1);
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
    input = input.erase(input.find_last_not_of(" ") + 1);
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}