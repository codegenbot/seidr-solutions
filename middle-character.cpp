#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = len / 2 + len % 2;
    return s.substr(mid - (len % 2), 1);
}

int main() {
    std::string input;
    // Ask user for input
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}