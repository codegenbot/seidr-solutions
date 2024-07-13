#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::stringstream ss(input);
    std::string word;
    std::string output = "";

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        output += word + " ";
    }

    return output.substr(0, output.size() - 1);
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words (or 'q' to quit): ";
        std::cin >> input;
        if (input == "q") break;
        std::cout << "Spin-words: " << spinWords(input) << std::endl;
    }
    return 0;
}