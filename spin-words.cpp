```cpp
#include<string>

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
                std::string temp = word;
                std::reverse(temp.begin(), temp.end());
                result += temp + " ";
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
        std::string temp = word;
        std::reverse(temp.begin(), temp.end());
        result += temp;
    }

    return result;