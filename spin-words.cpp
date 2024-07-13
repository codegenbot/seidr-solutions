#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    std::reverse(word.begin(), word.end());
                }
                
                if (i < str.length()) {
                    result += " ";
                } else {
                    result = "";
                }
                word.clear();
            }
        } else {
            word += str[i];
        }
    }
    
    return result;
}

int main() {
    std::string str, result;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    if (!str.empty()) {
        std::cout << "Enter a string: " << spinWords(str) << std::endl;
    } else {
        std::cout << "Enter a string: No input provided." << std::endl;
    }
    
    return 0;
}