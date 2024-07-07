#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delim) {
    std::vector<std::string> words;
    // Implement the function to split the input string into words
    return words;
}

std::string join(const std::vector<std::string>& words, char delim) {
    std::string output;
    // Implement the function to join the words back together into a single string
    return output;
}

int main() {
    std::string input;
    getline(std::cin, input);

    // Split the input string into words.
    std::vector<std::string> words = split(input, ' ');

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversedWord = words[i];
            std::reverse(reversedWord.begin(), reversedWord.end());
            words[i] = reversedWord;
        }
    }

    // Join the words back together into a single string.
    std::string output = join(words, ' ');

    std::cout << output << '\n';

    return 0;
}