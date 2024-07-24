#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                if (word.length() >= 5) {
                    std::string reversedWord(word.rbegin(), word.rend());
                    result += (reversedWord + " ");
                } else {
                    result += (word + " ");
                }
                word.clear();
            } else {
                result += (word + " ");
                word.clear();
            }
        } else {
            word += str[i];
        }
    }
    
    // Check the last word
    if (word.length() >= 5) {
        std::string reversedWord(word.rbegin(), word.rend());
        result += (reversedWord);
    } else {
        result += (word);
    }
    
    return result;
}