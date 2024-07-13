#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string& input) {
    std::vector<std::string> words;
    std::istringstream ss(input);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.rbegin(), word.rend());
        }
        words.push_back(word);
    }

    std::stringstream result;
    for (const auto& word : words) {
        result << word << " ";
    }

    return result.str();
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}