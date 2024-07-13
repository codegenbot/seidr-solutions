#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= 0; j--) {
                    result += str[j];
                }
            } else {
                result += " ";
            }
            wordLength = 0;
        } else {
            result += str[i];
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int i = result.length() - 1; i >= 0; i--) {
            result += result[i];
        }
    }
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}