#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    int len = input.length();
    int mid = len / 2;
    return len % 2 ? std::string(1, input[mid]) : input.substr(mid-1, 2);
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