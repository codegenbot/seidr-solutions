#include <iostream>
#include <string>
#include <iomanip>

std::string middleCharacter(std::string str) {
    int len = str.length();
    
    if (len % 2 == 1) {
        return std::string(1, str[len/2]);
    } else {
        return str.substr(len/2 - 1, 2 - (len % 2));
    }
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << std::setw(1) << middleCharacter(input) << std::endl;
    return 0;
}