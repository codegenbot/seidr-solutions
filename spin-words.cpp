#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    size_t start = 0;
    while (start < input.size()) {
        size_t end = input.find(' ', start);
        if (end == std::string::npos) {
            end = input.size();
        }
        std::string word = input.substr(start, end - start);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        output += word + " ";
        start = end + 1;
    }
    return output.substr(0, output.size() - 1);
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words (separated by spaces), or 'q' to quit: ";
        std::getline(std::cin, input);
        if (input == "q") {
            break;
        }
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}