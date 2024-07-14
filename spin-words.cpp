#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result;
    size_t pos = 0;
    
    while ((pos = str.find(' ')) != std::string::npos) {
        size_t len = pos + 1;
        
        if (len <= 4 || len > str.length()) break;
        
        result += str.substr(pos, len - pos) + " ";
        str.erase(0, len);
    }
    
    // Reverse the remaining string
    for (size_t i = 0; i < str.length(); i++) {
        result += str[str.length() - i - 1];
    }
    
    return result;
}

int main() {
    std::string input;
    
    while (true) {
        std::cout << "Enter a string of one or more words (or 'q' to quit): ";
        std::cin >> input;
        
        if (input == "q") break;
        
        std::cout << spinWords(input) << std::endl;
    }
    
    return 0;
}