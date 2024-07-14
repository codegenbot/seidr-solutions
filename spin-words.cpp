#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    result += str[i - wordLength + j];
                }
            } else {
                result += str.substr(i - wordLength + 1, wordLength);
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; i--) {
            result += str[wordLength - i - 1];
        }
    } else {
        result = str;
    }
    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}