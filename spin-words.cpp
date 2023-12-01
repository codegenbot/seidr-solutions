#include <iostream>
#include <sstream>
#include <algorithm>

std::string reverseWords(std::string str) {
    std::stringstream ss(str);
    std::string word, result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + ' ';
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << reverseWords(input) << std::endl;

    return 0;
}