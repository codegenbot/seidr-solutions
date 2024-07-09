#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    if (len % 2 == 0) { 
        int middleIndex1 = len / 2 - 1;
        int middleIndex2 = len / 2;
        return s.substr(middleIndex1, 2);
    } else {
        return s.substr(len/2, 1);
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