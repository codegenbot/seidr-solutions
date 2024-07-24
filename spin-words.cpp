#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordLength = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (wordLength >= 5) {
                result += reverseWord(sentence.substr(i - wordLength, wordLength)) + " ";
                wordLength = 0;
            } else {
                result += sentence.substr(i - wordLength, wordLength) + " ";
                wordLength = 0;
            }
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        result += reverseWord(sentence.substr(sentence.length() - wordLength, wordLength));
    } else {
        result += sentence;
    }
    return result;
}

std::string reverseWord(std::string str) {
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}