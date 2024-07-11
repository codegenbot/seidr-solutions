```cpp
#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    std::string result = len % 2 == 0 ? s.substr(len/2-1, 2) : s.substr(len/2, 1);
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}