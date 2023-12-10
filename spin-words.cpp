#include <iostream>
#include <sstream>
#include <string>

std::string reverseWords(const std::string& input) {
    std::stringstream ss(input);
    std::string word, result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << reverseWords(input) << std::endl;

    return 0;
}