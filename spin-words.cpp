#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    int length;

    for (char c : sentence) {
        if (c == ' ') {
            if ((int)word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i)
                    result += word[i];
            } else
                result += word;
            word.clear();
        } else {
            word += c;
        }
    }

    if ((int)word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    } else
        result += word;

    return result;
}