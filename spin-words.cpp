#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (i == sentence.length() - 1 || sentence[i] == ' ') {
            if (word.length() >= 5) {
                std::string reversedWord = "";
                for (int j = word.length() - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord + " ";
                word = "";
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            word += sentence[i];
        }
    }
    
    return result;
}

int main() {
    std::string input;
    while (std::cout << "Enter a string: ", getline(std::cin, input)) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}