#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string output = "";
    size_t start = 0;
    for (size_t i = 0; i <= input.size(); i++) {
        if (i == input.size() || input[i] == ' ') {
            size_t length = i - start;
            std::string word = input.substr(start, length);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            start = i + 1;
        }
    }

    std::cout << "Output: " << output << std::endl;

    return 0;
}