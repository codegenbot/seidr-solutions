#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    int wordLength = 0;
    for (char c : input) {
        if (c == ' ') {
            if (wordLength >= 5) {
                std::reverse(output.begin() + wordLength, output.end());
            }
            output += c;
            wordLength = 0;
        } else {
            output += c;
            wordLength++;
        }
    }
    // check the last word
    if (wordLength >= 5) {
        std::reverse(output.begin() + wordLength, output.end());
    }
    return output;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "input: ";
        std::cin >> input;
        std::cout << "output: " << spinWords(input) << std::endl;
    }
    return 0;
}