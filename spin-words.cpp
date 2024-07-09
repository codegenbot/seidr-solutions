#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    
    for (std::string word; iss >> word;) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
    }
    
    return result.substr(0, result.size()-1); 
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}