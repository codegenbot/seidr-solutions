```cpp
#include <iostream>
#include <string>

std::string middleCharacter(const std::string& s) {
    int len = s.length();
    int mid = len % 2 == 0 ? (len / 2) : len / 2;

    return len % 2 == 0 ? s.substr(mid - 1, 2) : std::string(1, s[mid]);
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "The middle character(s) is/are: " << middleCharacter(input);

    return 0;
}