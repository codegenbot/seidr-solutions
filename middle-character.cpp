```cpp
#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len/2 - 1, 2) : std::string{1, s[len/2]};
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}