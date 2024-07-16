#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string input) {
    std::string output = "";
    int start = 0;
    for (int i = 0; i <= input.size(); i++) {
        if (i == input.size() || input[i] == ' ') {
            std::string word = input.substr(start, i - start);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            start = i + 1;
        }
    }
    return output;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);
        if (input == "quit") break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}