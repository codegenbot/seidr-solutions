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
                for(int j = word.length()-1; j >= 0; --j)
                    result += word[j];
                result += " ";
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
        for(int j = word.length()-1; j >= 0; --j)
            result += word[j];
    } else {
        result += word;
    }

    return result;
}