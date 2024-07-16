#include <iostream>
#include <string>

std::string middleCharacter(const std::string& str) {
    int length = str.length();
    if (length % 2 == 0) {
        return str.substr(length / 2 - 1, 2);
    } else {
        return str.substr(length / 2, 1);
    }
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::cout << "The middle character(s) are: " << middleCharacter(str);
    return 0;
}