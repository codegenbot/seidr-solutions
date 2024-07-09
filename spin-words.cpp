#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> words;
    std::string word;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c || i == str.length() - 1) {
            if (i > 0) {
                words.push_back(word);
                word.clear();
            }
            if (i != str.length() - 1) {
                word += str[i];
            }
        } else {
            word += str[i];
        }
    }
    if (!word.empty()) {
        words.push_back(word);
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
    return join(words, ' ').empty() ? "" : join(words, ' ');
}

int main() {
    std::cout << "Enter a string: ";
    std::string str;
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}