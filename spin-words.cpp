#include <iostream>
#include <sstream>
#include <algorithm>

int main() {
    std::string input;
    getline(std::cin, input);

    std::string word, result = "";
    std::stringstream ss(input);
    while (ss >> word) {
        if (word.size() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back();
    std::cout << result;

    return 0;
}