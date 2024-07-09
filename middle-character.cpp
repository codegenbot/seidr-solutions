#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int mid1 = len / 2;
    int mid2 = (len % 2 == 0)? mid1 - 1 : mid1;
    
    return s.substr(mid2, len%2==0 ? 2: 1);
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