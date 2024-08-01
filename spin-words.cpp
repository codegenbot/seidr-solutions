#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string word;
    std::string result;
    std::istringstream iss(input);

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back(); // remove extra space at the end
    std::cout << result;

    return 0;
}