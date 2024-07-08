#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> words;
    std::istringstream iss(s);
    for (std::string word; iss >> word; ) {
        words.push_back(word);
    }
    return words;
}

std::string join(const std::vector<std::string>& words, char delimiter) {
    std::ostringstream oss;
    for (auto& word : words) {
        oss << word << delimiter;
    }
    return oss.str();
}

int main() {
    std::string input;
    getline(std::cin, input);

    // Split the input string into words.
    std::vector<std::string> words = split(input, ' ');

    // Reverse each word that is 5 or more letters long.
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversedWord = words[i];
            std::reverse(reversedWord.begin(), reversedWord.end());
            words[i] = reversedWord;
        }
    }

    // Join the words back together into a single string.
    std::string output = join(words, ' ');

    std::cout << output << '\n';

    return 0;
}