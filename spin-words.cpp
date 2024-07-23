#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    bool longWord = false;
    std::string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (!longWord) {
                result += word + " ";
                word = "";
            } else {
                word = std::string(word.rbegin(), word.rend()); 
                result += word + " "; 
                word = "";
                longWord = false;
            }
        } else {
            word += c;
            if (word.length() >= 5) {
                longWord = true;
            }
        }
    }

    if (!longWord) {
        result += word;
    } else {
        word = std::string(word.rbegin(), word.rend()); 
        result += word + " ";
        word = "";
        longWord = false;
    }

    return result;