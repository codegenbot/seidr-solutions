#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::stringstream stream(sentence);
    std::string word;

    std::string result = "";

    while (stream >> word) {
        if (word.length() >= 5)
            word = string(word.rbegin(), word.rend());
        result += word + " ";
    }

    return result.substr(0, result.size()-1); // Remove the trailing space
}

int main() {
    std::string input;
    while (std::cout << "Enter a sentence ('' to stop): ") {
        std::getline(std::cin, input);
        if (input.empty()) break;
        std::cout << spinWords(input) << '\n';
    }
    return 0;
}