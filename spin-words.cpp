#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string output;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == ' ') {
            size_t length = i - start;
            if (length >= 5) {
                std::string word = str.substr(start, length);
                std::reverse(word.begin(), word.end());
                output += word;
            } else {
                output += str.substr(start, length);
            }
            if (i < str.size()) {
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