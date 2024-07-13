#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(' ')) != std::string::npos) {
        std::size_t wordLength = pos;
        
        if (str.length() - pos > 4) {
            std::reverse(str.substr(pos).begin(), str.substr(pos).end());
        }
        
        result += str.substr(0, pos);
        str.erase(0, pos + 1);
    }
    
    if (str.length() > 4) {
        std::reverse(str.begin(), str.end());
    }
    
    result += str;
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}