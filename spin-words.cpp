#include <iostream>
#include <sstream>

std::string spinWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word, result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back();  // Remove the last space
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string result = spinWords(sentence);
    std::cout << result << std::endl;

    return 0;
}