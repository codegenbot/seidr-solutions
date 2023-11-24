#include <iostream>
#include <string>
#include <algorithm>

std::string reverseWords(const std::string& input) {
    std::string result;
    std::string word;
    std::size_t start = 0;
    std::size_t end = input.find(' ');

    while (end != std::string::npos) {
        word = input.substr(start, end - start);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + ' ';
        start = end + 1;
        end = input.find(' ', start);
    }

    word = input.substr(start);
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseWords(input);
    std::cout << output << std::endl;

    return 0;
}