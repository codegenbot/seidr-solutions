#include <algorithm>

std::string spinWords(std::string str) {
    std::string word;
    std::string result = ""; 

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    std::reverse(std::begin(word), std::end(word));
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
    
    if (!word.empty()) {
        if (word.length() >= 5) {
            std::reverse(std::begin(word), std::end(word));
        }
        result += " ";
        result += word;
    } else {
        result = str; 
    }
    
    return result;