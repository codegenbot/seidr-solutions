#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    getline(std::cin, input);

    // Split the input string into words.
    std::istringstream iss(input);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    // Reverse each word that is 5 or more letters long.
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversedWord = words[i];
            std::reverse(reversedWord.begin(), reversedWord.end());
            words[i] = reversedWord;
        }
    }

    // Join the words back together into a single string.
    std::ostringstream oss;
    for (int i = 0; i < words.size(); i++) {
        oss << words[i];
        if (i != words.size() - 1) {
            oss << ' ';
        }
    }

    // Print the resulting string.
    std::string output = oss.str();
    std::cout << output << '\n';

    return 0;
}