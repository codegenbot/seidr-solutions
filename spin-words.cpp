#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string reverseWords(const std::string& str) {
    std::stringstream ss(str);
    std::string word;
    std::vector<std::string> words;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }

    std::string result;
    for (const std::string& w : words) {
        result += w + " ";
    }
    result.pop_back(); // remove the last space

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseWords(input);
    std::cout << output << std::endl;

    return 0;
}