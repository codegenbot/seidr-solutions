#include <iostream>
#include <string>
#include <sstream>

std::string reverseLongWords(const std::string& input) {
    std::string result;
    std::stringstream ss(input);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseLongWords(input);
    std::cout << output << std::endl;

    return 0;
}