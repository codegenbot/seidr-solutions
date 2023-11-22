#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string reverseWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back(); // Remove the last space

    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string reversed = reverseWords(sentence);
    std::cout << reversed << std::endl;

    return 0;
}