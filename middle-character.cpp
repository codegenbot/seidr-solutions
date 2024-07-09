#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    if (len == 1) {
        return "";
    } else {
        int middleIndex = len / 2;
        if(len % 2 != 0) {
            middleIndex++; 
        }
        std::string result;
        if(len % 2 == 0) {
            int mid1 = len / 2 - 1;
            if(mid1 >= 0 && mid1 < s.length()) { 
                result = s.substr(mid1, 2);
            } else {
                result = s.substr(middleIndex, 1); 
            }
        } else {
            result = s.substr(middleIndex, 1);
        }
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
        std::cout << middleCharacter(input) << std::endl;  
    }
    return 0;
}