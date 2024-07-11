#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return s.substr(length / 2 - 1, 2);
    } else {
        return s.substr(length / 2, 1);
    }
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "Middle character is: " << middleCharacter(s) << std::endl;
    return 0;
}