#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    if (len % 2 != 0) { 
        int middleIndex = len / 2;
        return s.substr(middleIndex, 1);
    } else {
        int middleIndex = len / 2;
        std::string result = s.substr(middleIndex - 1, 2); 
        if (result[0] >= 'a' && result[0] <= 'z') return result; 
        return result;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if(input.empty()) {
        std::cout << "";
    } else {
        int len = input.length();
        std::cout << middleCharacter(input) << std::endl;
    }
    return 0;
}