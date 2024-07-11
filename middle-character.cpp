```cpp
#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? std::string(1, s[len/2-1]) + std::string(1, s[len/2]) : std::string(1, s[len/2]);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}