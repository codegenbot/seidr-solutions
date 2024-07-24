#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str);
    for (auto &word : words) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
    }
    return concatenate(words);
}

std::vector<std::string> split(const std::string &str) {
    std::vector<std::string> result;
    std::string temp = "";
    for (char c : str) {
        if (c == ' ') {
            result.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    if (!temp.empty()) {
        result.push_back(temp);
    }
    return result;
}

std::string concatenate(const std::vector<std::string> &words) {
    std::string result = "";
    for (const auto &word : words) {
        result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}