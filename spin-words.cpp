#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    bool inWord = false;
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (!inWord && str[i] != ' ') {
            inWord = true;
            word += str[i];
        } else if (inWord && (str[i] == ' ' || i == str.length() - 1)) {
            inWord = false;
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word.clear();
        } else if (inWord) {
            word += str[i];
        }
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}