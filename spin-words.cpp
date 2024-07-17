#include <vector>
#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    for (const auto& word : input.split(" ")) {
        if (word.length() >= 5) {
            for (int i = word.length() - 1; i >= 0; --i) {
                output += word[i];
            }
        } else {
            output += word + " ";
        }
    }
    return output;
}

std::string std::string::split(const char* delimiter) const {
    std::vector<std::string> words;
    size_t pos = 0, pos2 = this->find(delimiter);
    while (pos2 != std::string::npos) {
        words.push_back(std::string(this->substr(pos, pos2 - pos)));
        pos = pos2 + delimiter->length();
        pos2 = this->find(delimiter, pos);
    }
    words.push_back(std::string(this->substr(pos)));
    return join(words, " ");
}

std::string std::string::join(const std::vector<std::string>& words, const char* delimiter) {
    std::string output;
    for (const auto& word : words) {
        output += word + delimiter;
    }
    if (!output.empty()) {
        output.pop_back();
    }
    return output;
}