#include <iostream>
#include <sstream>

std::string reverseWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::string result;

    while (iss >> word) {
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

    std::cout << reverseWords(sentence) << std::endl;

    return 0;
}