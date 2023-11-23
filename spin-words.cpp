#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string reverseWords(const std::string& input) {
    std::istringstream iss(input);
    std::vector<std::string> words;
    std::string word;

    // Split the input string into words
    while (iss >> word) {
        words.push_back(word);
    }

    // Reverse words that are five or more letters long
    for (std::string& w : words) {
        if (w.length() >= 5) {
            std::reverse(w.begin(), w.end());
        }
    }

    // Concatenate the reversed words
    std::ostringstream oss;
    for (const std::string& w : words) {
        oss << w << " ";
    }

    // Remove the trailing space and return the resulting string
    std::string result = oss.str();
    result.pop_back();
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseWords(input);
    std::cout << output << std::endl;

    return 0;
}