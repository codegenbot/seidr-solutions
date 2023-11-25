#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::ostringstream oss;
    std::string word;
    bool firstWord = true;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }

        if (firstWord) {
            firstWord = false;
        } else {
            oss << " ";
        }
        
        oss << word;
    }

    return oss.str();
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    return 0;
}