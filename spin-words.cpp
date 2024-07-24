#include <string>
#include <algorithm>
#include <iostream>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                word = std::string(word.rbegin(), word.rend());
            }
            result += word + " ";
            word.clear();
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        word = std::string(word.rbegin(), word.rend());
    }
    result += word;

    return result;
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
    return 0;
}