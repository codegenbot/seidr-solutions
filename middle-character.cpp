#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0)
        return s.substr(len/2-1, 2);
    else 
        return s.substr(len/2, 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cin.ignore(); 
    std::cout << "Middle character(s): " << middleCharacter(input) << std::endl;
    return 0;
}