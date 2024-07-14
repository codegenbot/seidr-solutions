#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string output = "";
    int wordLength = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    output += sentence[i - j];
                }
            } else {
                output += " ";
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; i--) {
            output += sentence[i];
        }
    } else {
        output = sentence;
    }
    return output;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}