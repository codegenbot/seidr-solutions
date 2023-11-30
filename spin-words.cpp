#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::ostringstream oss;
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        oss << word << " ";
    }

    std::string result = oss.str();
    result.pop_back();  // remove the trailing space
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    return 0;
}