#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordLength = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= i - wordLength; j--) {
                    result += sentence[j];
                }
            } else {
                result += " ";
            }
            wordLength = 0;
        } else {
            wordLength++;
            result += sentence[i];
        }
    }
    if (wordLength >= 5) {
        for (int i = sentence.length() - 1; i >= sentence.length() - wordLength; i--) {
            result += sentence[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}