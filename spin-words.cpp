```cpp
#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    size_t wordStart = 0;
    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            std::string word = input.substr(wordStart, i - wordStart);
            if (word.size() >= 5) {
                output += std::string(word.rbegin(), word.rend());
            } else {
                output += word;
            }
            if (i < input.size()) {
                output += ' ';
            }
            wordStart = i + 1;
        }
    }
    return output;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words, or 'q' to quit: ";
        std::getline(std::cin, input);
        if (input == "q")
            break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}