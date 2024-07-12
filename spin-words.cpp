#include <iostream>
#include <sstream>
#include <string>

std::string spinWords(const std::string &sentence) {
    std::istringstream iss(sentence);
    std::ostringstream oss;
    std::string word;
    while (iss >> word) {
        if (word.size() >= 5) {
            for (int i = word.size() - 1; i >= 0; --i) {
                oss << word[i];
            }
        } else {
            oss << word;
        }
        oss << ' ';
    }
    std::string result = oss.str();
    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string output = spinWords(input);
    std::cout << output << std::endl;
    return 0;
}