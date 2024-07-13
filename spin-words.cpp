#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            size_t length = i - start;
            if (length >= 5) {
                std::string word = input.substr(start, length);
                output += std::string(word.rbegin(), word.rend());
            } else {
                output += input.substr(start, length);
            }
            if (i < input.size()) {
                output += ' ';
            }
            start = i + 1;
        }
    }

    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}