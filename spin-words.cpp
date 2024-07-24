#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            size_t len = i - start;
            words.push_back(str.substr(start, len));
            start = i + 1;
        }
    }

    for (size_t i = 0; i < words.size(); ++i) {
        if (words[i].size() >= 5)
            std::reverse(words[i].begin(), words[i].end());
    }

    std::string result;
    for (const auto& word : words)
        result += word + " ";

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}