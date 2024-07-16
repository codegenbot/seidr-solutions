#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len/2 - 1, 2) : s.substr(len/2 - 1, 1);
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    
    // Process the string
    std::cout << middleCharacter(s) << std::endl;

    return 0;
}