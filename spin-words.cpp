#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t prev = 0;
    for (std::size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::size_t curr = i;
            if (curr - prev >= 5) {
                std::string word = str.substr(prev, curr - prev);
                std::reverse(word.begin(), word.end());
                result += word + " ";
            } else {
                result += str.substr(prev, curr - prev) + " ";
            }
            prev = i + 1;
        }
    }
    return result.substr(0, result.size() - 1);
}