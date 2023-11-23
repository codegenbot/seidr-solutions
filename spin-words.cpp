#include <iostream>
#include <string>
#include <sstream>

std::string reverseLongWords(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        oss << word << " ";
    }

    std::string result = oss.str();
    result.pop_back(); // remove the trailing space
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseLongWords(input);
    std::cout << output << std::endl;

    return 0;
}