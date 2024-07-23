#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(const std::string& input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            size_t length = i - start;
            std::string word = input.substr(start, length);

            if (length >= 5)
                std::reverse(word.begin(), word.end());

            output += word;

            if (i < input.size())
                output += ' ';

            start = i + 1;
        }
    }

    return output;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << '\n';
    }
    return 0;
}