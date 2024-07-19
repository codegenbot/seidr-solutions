#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int i = 0;

    while (i < sentence.length()) {
        if (i == sentence.length() - 1 || sentence[i + 1] == ' ') {
            if (i >= 4) {
                std::string reversedWord(word.rbegin(), word.rend());
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            word = "";
        } else {
            if (sentence[i] != ' ') {
                word += sentence[i];
            }
        }
        i++;
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