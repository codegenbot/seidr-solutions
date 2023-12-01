#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string spinWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::vector<std::string> words;

    // Split the sentence into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse words with length >= 5
    for (std::string& w : words) {
        if (w.length() >= 5) {
            std::reverse(w.begin(), w.end());
        }
    }

    // Join the words back into a sentence
    std::stringstream result;
    for (const std::string& w : words) {
        result << w << " ";
    }

    // Remove the trailing space
    std::string finalResult = result.str();
    finalResult.pop_back();

    return finalResult;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string output = spinWords(input);
    std::cout << output << std::endl;
    return 0;
}