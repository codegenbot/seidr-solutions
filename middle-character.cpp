#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int middleIndex = len / 2;
    return len % 2 == 0 ? s.substr(middleIndex - 1, 2) : s.substr(len/2, 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  
    if(input.empty()) {
        std::cout << "";
    } else {
        std::cout << middleCharacter(input) << std::endl;  
    }
    return 0;
}