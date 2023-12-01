#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word, result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

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