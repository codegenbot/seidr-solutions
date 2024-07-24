#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            std::string tempWord = word;
            if (tempWord.length() >= 5) {
                std::string reversedWord = std::string(tempWord.rbegin(), tempWord.rend());
                result += (reversedWord + " ");
            } else {
                result += (word + " ");
            }
            word.clear();
        } else {
            word += str[i];
        }
    }
    
    // Check the last word
    if (word.length() >= 5) {
        std::string tempWord = word;
        std::string reversedWord = std::string(tempWord.rbegin(), tempWord.rend());
        result += (reversedWord);
    } else {
        result += (word);
    }
    
    return result;
}