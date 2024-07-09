#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    if (len % 2 == 0) { 
        int middleIndex = len / 2; 
        char first = s[middleIndex - 1];
        char second = s[middleIndex];
        return std::to_string(first) + std::to_string(second); 
    } else {
        return std::to_string(s[len/2]);
    }
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