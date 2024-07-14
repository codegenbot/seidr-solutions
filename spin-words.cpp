```
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::stringstream ss;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; i--) {
                    ss << word[i];
                }
            } else {
                ss << word;
            }
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; i--) {
            ss << word[i];
        }
    } else {
        ss << word;
    }

    return ss.str();
}