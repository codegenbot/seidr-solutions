#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output;
    std::size_t pos = 0;

    while (pos < input.size()) {
        size_t spacePos = input.find(' ', pos);
        if (spacePos == std::string::npos) {
            spacePos = input.size();
        }

        std::string word = input.substr(pos, spacePos - pos);

        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }

        output += word + ' ';

        pos = spacePos + 1;
    }

    return output.substr(0, output.size() - 1);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << spinWords(input) << std::endl;

    return 0;
}