#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int i = 0;
    std::string word;

    while (i < sentence.length()) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() >= 5) { // Changed 4 to 5
                std::string reversedWord(word.rbegin(), word.rend());
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            word = "";
        }
        i++;
    }

    // Process the last word
    if (word.length() >= 5) {
        std::string reversedWord(word.rbegin(), word.rend());
        result += reversedWord;
    } else {
        result += word;
    }

    return result;