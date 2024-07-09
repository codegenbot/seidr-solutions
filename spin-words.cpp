#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> words;
    std::string word;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == c) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
            if (i < str.length()) {
                word += str[i];
            }
        } else {
            word += str[i];
        }
    }
    return words;
}

std::string join(const std::vector<std::string>& vec, char c) {
    std::string result;
    for (int i = 0; i < vec.size(); i++) {
        if (i > 0) {
            result += c;
        }
        result += vec[i];
    }
    return result;
}

std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
        }
    }
    return join(words, ' ');
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}