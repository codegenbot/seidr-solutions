#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength;
    std::string word;

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] != ' ') {
            word += str[i];
            wordLength = word.length();
            if (wordLength >= 5) {
                std::string reversedWord = "";
                for (int j = wordLength - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            word.clear();
        }
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}