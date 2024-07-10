#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;

    for (char c : sentence) {
        if (c == ' ') {
            result += c;
        } else {
            word += c;
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word;
            word = "";
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