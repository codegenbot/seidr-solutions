#include <string>
#include <iostream>

std::string middleCharacter(std::string inputStr) {
    int len = inputStr.length();
    return len % 2 == 0 ? inputStr.substr(len/2-1, 2) : inputStr.substr(len/2, 1);
}

int main() {
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);
    std::cout << "Middle character(s): " << middleCharacter(inputStr) << std::endl;
    return 0;
}