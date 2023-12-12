#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string reverseLongWords(const std::string& input) {
    std::stringstream ss(input);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    if (!result.empty()) {
        result.pop_back(); // remove trailing space
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseLongWords(input);
    std::cout << output << std::endl;

    return 0;
}