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
    getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}