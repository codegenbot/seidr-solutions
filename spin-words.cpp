#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::string word;

    // Split the input string into individual words
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ' || i == str.length()) {
            if (i != str.length()) {
                word += str[i];
            }
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += str[i];
        }
    }

    // Reverse the words that are 5 or more letters long
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversedWord;
            for (int j = words[i].length() - 1; j >= 0; j--) {
                reversedWord += words[i][j];
            }
            words[i] = reversedWord;
        }
    }

    // Join the words back into a single string
    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += ' ';
        }
        result += words[i];
    }

    return result;
}

int main() {
    // Read input from user
    std::cout << "Enter a string of one or more words (separated by spaces): ";
    std::string str;
    std::cin >> str;

    // Print the output
    std::cout << "The resulting string is: " << spinWords(str) << std::endl;

    return 0;
}