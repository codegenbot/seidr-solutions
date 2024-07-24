#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::string word;

    // Split the string into individual words
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = str.substr(i);
            words.push_back(word);
            i++;
        }
    }

    // Reverse the words that are five or more letters long
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::string reversedWord;
            for (int j = words[i].length() - 1; j >= 0; j--) {
                reversedWord += words[i][j];
            }
            words[i] = reversedWord;
        }
    }

    // Join the words back into a string
    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        result += words[i];
    }

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}