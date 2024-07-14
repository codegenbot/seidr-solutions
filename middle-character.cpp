#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if (len == 0) { 
        return "";
    } else if (len % 2 == 0) { 
        return s.substr(len / 2 - 1, 2); // Return two characters for even length
    } else {
        return s.substr(len / 2, 1); // Return one character for odd lengths
    }
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);  
    std::cout << middleCharacter(s);
    return 0;
}