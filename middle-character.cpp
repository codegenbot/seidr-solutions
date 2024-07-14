#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    int middleIndex = len / 2;
    
    if (len % 2 != 0) {
        return s.substr(middleIndex, 1);
    }
    else {
        if(len % 4 == 0) {
            return s.substr(len/2-1, 2);
        } 
        else {
            return s.substr(len/2, 1);
        }
    }
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << middleCharacter(s) << std::endl; 
    return 0;
}