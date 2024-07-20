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
                result += std::string(word.rbegin(), word.rend()) + " ";
            } else {
                result += word + " ";
            }
            word = "";
        }
        i++;
    }

    // Process the last word
    if (word.length() >= 5) {
        result += std::string(word.rbegin(), word.rend());
    } else {
        result += word;
    }

    return result.substr(0, result.find_last_of(" ") + 1);
}