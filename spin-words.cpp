#include <iostream>
#include <string>

bool isSpace(char c);

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (word.length() >= 5) {
                std::string revWord = "";
                for (int j = word.length() - 1; j >= 0; j--) {
                    revWord += word[j];
                }
                result += revWord + " ";
                word = "";
            } else {
                result += word + " ";
                word = "";
            }
        } else if (i == sentence.length() - 1) {
            word += sentence[i];
            if (word.length() >= 5) {
                std::string revWord = "";
                for (int j = word.length() - 1; j >= 0; j--) {
                    revWord += word[j];
                }
                result += revWord;
            } else {
                result += word;
            }
        } else {
            word += sentence[i];
        }
    }
    
    return result;
}

bool isSpace(char c) {
    return c == ' ';
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    return 0;
}