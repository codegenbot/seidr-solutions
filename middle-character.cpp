```cpp
#include <string>
#include <iostream>

std::string middleCharacter(std::string str) {
    int len = str.length();
    return len % 2 == 0 ? str.substr(len/2-1, 2) : str.substr(len/2, 1);
}

int main() {
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);
    std::cout << "Middle character(s): " << middleCharacter(inputStr) << std::endl;
    return 0;
}