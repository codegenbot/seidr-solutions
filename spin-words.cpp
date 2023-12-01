#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    std::string word;
    std::string space = " ";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + space;
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << spinWords(input) << std::endl;
    return 0;
}