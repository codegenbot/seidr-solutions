#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string spinWords(const std::string& input) {
    std::vector<std::string> words = split(input, " ");
    for (auto& word : words) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
    }
    return join(words, " ");
}

std::vector<std::string> split(const std::string& str, const std::string& delimiter) {
    size_t pos = 0;
    std::vector<std::string> tokens;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens;
}

std::string join(const std::vector<std::string>& words, const std::string& delimiter) {
    std::string output = "";
    for (const auto& word : words) {
        output += word;
        if (!delimiter.empty()) {
            output += delimiter;
        }
    }
    return output;
}

int main() {
    std::cout << spinWords("This is a test string") << std::endl; // hi
    return 0;
}