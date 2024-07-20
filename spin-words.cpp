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

    // Add the last word
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    output += word;

    return output;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}