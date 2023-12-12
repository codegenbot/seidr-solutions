#include <iostream>
#include <string>
#include <sstream>

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

    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }

    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string reversedSentence = reverseWords(sentence);
    std::cout << reversedSentence << std::endl;

    return 0;
}