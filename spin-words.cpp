#include <string>
#include <algorithm>
#include <iostream>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += str[i];
        }
    }

    result += word; // No need to check the length here
    std::string revWord = word;
    if (word.length() >= 5) std::reverse(revWord.begin(), revWord.end());
    result += revWord;
    return result;
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
    return 0;
}