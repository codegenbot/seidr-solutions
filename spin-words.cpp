#include <iostream>
#include <sstream>
#include <vector>

std::string spinWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::vector<std::string> words;
    std::string word;

    // Split the sentence into words
    while (iss >> word) {
        words.push_back(word);
    }

    // Reverse words with 5 or more letters
    for (std::string& w : words) {
        if (w.length() >= 5) {
            std::reverse(w.begin(), w.end());
        }
    }

    // Join the words back into a sentence
    std::ostringstream oss;
    for (const std::string& w : words) {
        oss << w << " ";
    }

    std::string result = oss.str();

    // Remove trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string result = spinWords(sentence);
    std::cout << result << std::endl;

    return 0;
}