#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string word;
    std::string result = ""; 

    for (int i = 0; i < str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    std::string revWord(word.rbegin(), word.rend());
                    result += revWord;
                } else {
                    result += word;
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
            std::string revWord(word.rbegin(), word.rend());
            result += " ";
            result += revWord;
        } else {
            result += " ";
            result += word;
        } 
    } 
    return result;
}