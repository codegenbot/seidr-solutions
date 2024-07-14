#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t prev = 0;
    for (std::size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::string word = str.substr(prev, i - prev);
            if (word.size() >= 5)
                std::reverse(word.begin(), word.end());
            result += word + " ";
            prev = i + 1;
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}