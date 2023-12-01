#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

    result.pop_back(); // Remove the trailing space
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string reversedSentence = reverseWords(sentence);
    std::cout << reversedSentence << std::endl;

    return 0;
}