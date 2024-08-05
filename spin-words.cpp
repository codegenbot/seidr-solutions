#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= sentence.size(); ++i) {
        if (i == sentence.size() || sentence[i] == ' ') {
            words.push_back(sentence.substr(start, i - start));
            start = i + 1;
        }
    }

    for (size_t i = 0; i < words.size(); ++i) {
        if (words[i].size() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
        }
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += ' ';
        }
    }

    return result;
}

int main() {
    // Example usage
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}