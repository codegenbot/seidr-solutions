#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream iss(line);
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