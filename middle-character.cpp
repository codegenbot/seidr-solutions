#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "Invalid Input";
    
    std::string result;
    if(len % 2 == 0) {
        result = s.substr(len/2-1, 2);
    } else {
        result = s.substr(len/2, 1);
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if(input.find('\0') != std::string::npos) { 
        std::cout << "Invalid Input. Null character not allowed." << std::endl;
        return 1; 
    }
    
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}