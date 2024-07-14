#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); ) {
        if (str[i + 1] == ' ') {
            word = str.substr(i);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word.empty() ? "" : (word.length() >= 5 ? std::string(word.rbegin(), word.rend()) : word) + " ";
            i++;
        } else if (i == str.length() - 1 && str[i] != ' ') {
            word = str.substr(i);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word.empty() ? "" : (word.length() >= 5 ? std::string(word.rbegin(), word.rend()) : word);
        } else {
            i++;
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