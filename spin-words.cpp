#include <iostream>
#include <sstream>

std::string reverseWords(const std::string& str) {
    std::istringstream iss(str);
    std::ostringstream oss;
    std::string word;
    bool firstWord = true;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }

        if (firstWord) {
            oss << word;
            firstWord = false;
        } else {
            oss << " " << word;
        }
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