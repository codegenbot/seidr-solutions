#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return s.substr(len/2, len % 2 == 0 ? 2 : 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}