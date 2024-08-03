#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::string word = "";

    for (char c : input) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    output += word;

    return output;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);
        if (input == "exit") break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}