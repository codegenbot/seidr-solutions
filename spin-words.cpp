```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t prev = 0;
    for (std::size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::size_t wordLen = i - prev;
            if (wordLen >= 5) {
                std::string word = str.substr(prev, wordLen);
                std::reverse(word.begin(), word.end());
                result += word + " ";
            } else {
                result += str.substr(prev, wordLen) + " ";
            }
            prev = i + 1;
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}