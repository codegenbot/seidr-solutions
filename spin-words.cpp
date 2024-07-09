#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    for (char c : str) {
        if (c == delimiter) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}

std::string join(const std::vector<std::string>& words, char delimiter) {
    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += delimiter;
        }
        result += words[i];
    }
    return result;
}

std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string temp = words[i];
            std::reverse(temp.begin(), temp.end());
            words[i] = temp;
        }
    }
    return join(words, ' ');
}