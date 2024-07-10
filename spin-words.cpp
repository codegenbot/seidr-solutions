#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (word.length() >= 5)
                result += newWord(word);
            else
                result += word + " ";
            word = "";
        } else {
            word += sentence[i];
        }
    }

    if (word.length() >= 5)
        result += newWord(word);
    else
        result += word;

    return result;
}

std::string newWord(std::string s) {
    std::string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];
    return rev;
}