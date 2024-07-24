#include <algorithm>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result = "";
    std::string word;
    bool prevSpace = true;

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length()) {
            if (word.length() >= 5) {
                word = {word.rbegin(), word.rend()};
            }
            result += word + " ";
            word.clear();
        } else if (!prevSpace && str[i] == ' ') {
            if (word.length() >= 5) {
                std::string revWord = word;
                std::reverse(revWord.begin(), revWord.end());
                result += revWord + " ";
                word.clear();
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            if (str[i] == ' ') prevSpace = true;
            else prevSpace = false;
            word += str[i];
        }
    }

    return result.substr(0, result.length() - 1);
}