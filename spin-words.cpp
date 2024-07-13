#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(' ')) != std::string::npos) {
        std::string word = str.substr(0, pos);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        str.erase(0, pos + 1);
    }
    
    // handle the last word
    std::string word = str;
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    
    result += word;
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    if (!str.empty()) {
        std::cout << spinWords(str) << std::endl;
    } else {
        std::cout << "No input provided." << std::endl;
    }
    
    return 0;
}