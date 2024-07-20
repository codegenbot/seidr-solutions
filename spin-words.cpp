#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::vector<std::string> words;
    std::string word;

    // Split the sentence into individual words
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i + 1] == ' ') {
            word = sentence.substr(i);
            words.push_back(word);
            i++;
        }
    }

    // Reverse the words that are five or more letters long
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
        }
    }

    // Join the reversed words back into a sentence
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
    // Read the input from user
    std::cout << "Enter a string of one or more words: ";
    std::string sentence;
    getline(std::cin, sentence);

    // Call the spinWords function and print the output
    std::cout << "Output: " << spinWords(sentence) << std::endl;

    return 0;
}