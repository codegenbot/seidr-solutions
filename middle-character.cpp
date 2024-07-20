#include <string>
#include <iostream>

std::string middleCharacter(std::string str) {
    int len = str.length();
    if(len % 2 == 1) {
        return std::string(1, str[len/2]);
    } else {
        return std::string(1, str[(len-1)/2]) + std::string(1, str[len/2]);
    }
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << middleCharacter(str) << std::endl;
    return 0;
}