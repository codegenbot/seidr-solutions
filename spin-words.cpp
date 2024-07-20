#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int i = 0;
    std::string word;

    while (i < sentence.length()) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() >= 5) {
                std::string reversedWord(word.begin(), word.end());
                std::reverse(reversedWord.begin(), reversedWord.end());
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
        std::string reversedWord(word.begin(), word.end());
        std::reverse(reversedWord.begin(), reversedWord.end());
        result += reversedWord;
    } else {
        result += word;
    }

    return result;
}