#include <iostream>
#include <string>
#include <sstream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
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
    
    if(input.empty()) {
        std::cout << "Enter a non-empty string" << std::endl;
    } else {
        std::istringstream iss(input);
        std::string word;
        while (iss >> word) { 
            std::cout << middleCharacter(word) << std::endl; 
        }
    }
    return 0;
}