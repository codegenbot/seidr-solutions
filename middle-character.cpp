#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int start = s.length() / 2;
    bool isOddLength = s.length() % 2 != 0;
    int end = start + (isOddLength ? 1 : 2);
    return s.substr(start, end - start);
}

int main() {
    std::string input;
    // Ask user for input
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}