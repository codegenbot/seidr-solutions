#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    
    while (ss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        
        std::cout << word << " ";
    }
    
    return "";
}