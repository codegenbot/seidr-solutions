```cpp
#include <algorithm>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int i = 0;
    std::string word;

    while (i < sentence.length()) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
                result += word + " ";
                word = "";
            } else {
                result += word + " ";
                word = "";
            }
        }
        i++;
    }

    // Process the last word
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
        result += word;
    } else {
        result += word;
    }

    return result;
}