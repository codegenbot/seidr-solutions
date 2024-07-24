```cpp
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::string temp(word.rbegin(), word.rend());
                result += temp + " ";
                word.clear();
            } else {
                result += word + " ";
                word.clear();
            }
        } else {
            word += str[i];
        }
    }
    
    // Check the last word
    if (word.length() >= 5) {
        std::string temp(word.rbegin(), word.rend());
        result += temp;
    } else {
        result += word;
    }
    
    return result;
}