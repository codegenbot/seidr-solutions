#include <iostream>
#include <sstream>

std::string reverseWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::ostringstream oss;

    std::string word;
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        oss << word << " ";
    }

    std::string result = oss.str();
    result.erase(result.size() - 1);  // Remove trailing space
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string result = reverseWords(sentence);
    std::cout << result << std::endl;

    return 0;
}