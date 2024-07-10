#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::vector<std::string> words;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            string word = input.substr(start, i - start);
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            words.push_back(word);
            start = i + 1;
        }
    }

    for (const auto& word : words) {
        output += word + " ";
    }

    return output.substr(0, output.size() - 1); // remove the trailing space
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, input);
        if (input == "exit") break;
        std::cout << "Spin words: " << spinWords(input) << std::endl;
    }
    return 0;
}