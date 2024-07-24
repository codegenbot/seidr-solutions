#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() - 1 || str[i + 1] == ' ') {
            word = str.substr(i);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result = result + word;
            if (i < str.length() - 1 && str[i+1] != ' ')
                result += " ";
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}