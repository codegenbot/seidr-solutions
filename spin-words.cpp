#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
                result += word + " ";
                word = "";
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
        result += word;
    } else {
        result += word;
    }

    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);
        if (input == "exit") break;
        std::cout << "Spin words: " << spinWords(input) << std::endl;
    }
    return 0;
}