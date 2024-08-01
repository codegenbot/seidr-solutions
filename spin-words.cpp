#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t prevSpace = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::string word = str.substr(prevSpace, i - prevSpace);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            prevSpace = i + 1;
        }
    }
    return result.substr(0, result.size() - 1); // remove trailing space
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}