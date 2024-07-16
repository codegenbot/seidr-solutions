#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            i++;
            continue;
        }
        
        std::string word = "";
        while (i < str.length() && str[i] != ' ') {
            word += str[i];
            i++;
        }
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word;
        if (i < str.length()) {
            result += " ";
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