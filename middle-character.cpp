#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int start = len / 2;
    if(len % 2 == 1) { 
        std::string result = s.substr(start, 1); 
    } else { 
        std::string result = s.substr(start - 1, 2);
    }
    
    return result;
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