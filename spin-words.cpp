#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string spinWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::vector<std::string> words;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }

    std::ostringstream oss;
    for (const std::string& w : words) {
        oss << w << " ";
    }

    std::string result = oss.str();
    result.pop_back();  // Remove the trailing space
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::cout << spinWords(sentence) << std::endl;

    return 0;
}