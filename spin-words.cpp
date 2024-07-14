#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::stringstream ss(input);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string (or 'q' to quit): ";
        std::getline(std::cin, input);
        if (input == "q") break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}