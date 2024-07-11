#include <string>
#include <iostream>

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
    std::getline(std::cin, s);

    std::string result = middleCharacter(s);
    std::cout << "Result: " << result << std::endl;

    return 0;
}