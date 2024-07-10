#include <string> 

std::string spinWords(const std::string &sentence) {
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}