#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordLength;
    std::string word;

    for (int i = 0; i < sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            wordLength = i - word.length();
            if (wordLength >= 5) {
                std::string reversedWord = "";
                for (int j = wordLength - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string input;
    while (std::cout << "Enter a string: ", std::getline(std::cin, input)) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}