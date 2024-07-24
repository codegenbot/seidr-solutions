#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}

int main() {
    // Read the input from user
    std::string sentence;
    std::cout << "Enter a string of one or more words: ";
    std::getline(std::cin, sentence);

    // Call the spinWords function and print the output
    std::cout << "The result is: " << spinWords(sentence) << std::endl;

    return 0;
}