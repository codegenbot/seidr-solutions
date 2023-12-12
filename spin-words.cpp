#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::string reverseWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::vector<std::string> words;

    // Split the sentence into words
    while (iss >> word) {
        words.push_back(word);
    }

    // Reverse words that are five or more letters long
    for (std::string& word : words) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
    }

    // Join the words back into a sentence
    std::ostringstream oss;
    for (const std::string& word : words) {
        oss << word << " ";
    }

    // Remove trailing space and return the resulting sentence
    std::string result = oss.str();
    result.pop_back();
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string result = reverseWords(sentence);
    std::cout << result << std::endl;

    return 0;
}