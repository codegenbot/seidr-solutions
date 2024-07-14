#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (char c : sentence) {
        if (c == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    result += word;
    
    size_t pos = 0;
    while ((pos = result.find(" ")) != std::string::npos) {
        size_t endPos = result.find(" ", pos + 1);
        if (endPos == std::string::npos || strlen(&result[pos]) >= 5) {
            std::reverse(&result[pos], &result[endPos]);
        }
        pos = endPos;
    }
    
    return result;
}