Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= i - wordLength - 1; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i - wordLength, wordLength + 1);
            }
            result += ' ';
            wordLength = 0;
        } else {
            wordLength++;
        }
    }

    if (wordLength >= 5) {
        for (int j = str.length() - 1; j >= str.length() - wordLength - 1; j--) {
            result += str[j];
        }
    } else {
        result += str;
    }

    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words (separated by spaces), or 'q' to quit: ";
        std::getline(std::cin, input);
        if (input == "q") break;
        std::cout << spinWords(input) << '\n';
    }
    return 0;
}