#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string word;
    bool first = true;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }

        if (!first) {
            std::cout << " ";
        }
        std::cout << word;
        first = false;
    }

    return 0;
}