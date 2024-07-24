#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    std::string reversed = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() - 1 || str[i + 1] == ' ') {
            word = str.substr(i);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            reversed += word;
            if (!result.empty()) {
                result += " ";
            } else {
                result = reversed;
            }
            reversed = "";
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    std::cout << spinWords(input) << std::endl; 
    return 0;
}