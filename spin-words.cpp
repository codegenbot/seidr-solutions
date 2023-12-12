#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;
    std::string word;
    bool firstWord = true;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }

        if (!firstWord) {
            oss << " ";
        } else {
            firstWord = false;
        }

        oss << word;
    }

    return oss.str();
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string output = reverseWords(input);
    std::cout << output << std::endl;
    return 0;
}