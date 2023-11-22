#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(std::string str) {
    std::istringstream iss(str);
    std::ostringstream oss;
    std::string word;
    bool firstWord = true;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        if (!firstWord) {
            oss << " ";
        }
        oss << word;
        firstWord = false;
    }

    return oss.str();
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << reverseWords(input) << std::endl;
    return 0;
}