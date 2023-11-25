#include <iostream>
#include <string>
#include <sstream>

std::string reverseLongWords(std::string input) {
    std::stringstream ss(input);
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
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseLongWords(input);
    std::cout << output << std::endl;

    return 0;
}