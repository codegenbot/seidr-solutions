#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() - 1 || str[i] == ' ') {
            if (word.length() >= 5) {
                result += " " + std::string(word.rbegin(), word.rend());
            } else {
                result += " " + word;
            }
            
            word.clear();
        } else {
            word += str[i];
        }
    }
    
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