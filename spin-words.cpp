```c++
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::string reversedWord(word);
                std::reverse(reversedWord.begin(), reversedWord.end());
                result += (reversedWord + " ");
            } else {
                result += (word + " ");
            }
            word.clear();
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        std::string tempWord = word;
        std::reverse(tempWord.begin(), tempWord.end());
        result += (tempWord);
    } else {
        result += word;
    }

    return result;
}