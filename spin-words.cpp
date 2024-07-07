#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> split(const std::string& str, char delim) {
    std::vector<std::string> words;
    std::istringstream ss(str);
    std::string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

std::string join(const std::vector<std::string>& words, char delim) {
    std::ostringstream ss;
    for (auto& word : words) {
        if (!word.empty()) {
            ss << delim << word;
        }
    }
    return ss.str();
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