#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int mid = len / 2;
    return len % 2 == 0 ? s.substr(mid - 1, 2) : s.substr(mid, 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}