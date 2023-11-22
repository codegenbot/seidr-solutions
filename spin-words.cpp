#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string reverseWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::vector<std::string> words;

    // Split the sentence into individual words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the words that are five or more letters long
    for (std::string& word : words) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
    }

    // Combine the words back into a sentence
    std::string result;
    for (const std::string& word : words) {
        result += word + " ";
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string result = reverseWords(sentence);
    std::cout << result << std::endl;

    return 0;
}