#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return s.substr(len / 2, 1);
    }
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Middle character(s): " << middleCharacter(str) << std::endl;
    return 0;
}