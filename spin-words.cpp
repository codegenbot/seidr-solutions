#include <string>
#include <algorithm>
#include <iostream>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::string revWord = word;
                std::reverse(revWord.begin(), revWord.end());
                result += revWord + " ";
                word.clear();
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    result += word; // No need to check the length here
    return result;
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
    return 0;
}