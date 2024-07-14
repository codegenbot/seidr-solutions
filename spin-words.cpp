#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = str.substr(i);
            
            word.erase(0, word.find_first_not_of(' ')); // Remove leading spaces
            word.erase(word.find_last_not_of(' ') + 1); // Remove trailing spaces
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            if (word.length() >= 5) {
                result += std::string(word.rbegin(), word.rend()) + ((i == str.length()) || (str[i+1] != ' ') ? " " : "");
            } else {
                result += word + ((i == str.length()) || (str[i+1] != ' ') ? " " : "");
            }
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}