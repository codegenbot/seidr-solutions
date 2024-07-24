#include <iostream>
#include <string>

std::string spinWords(std::string s) {
    std::string result = "";
    std::size_t prev = 0;
    for (std::size_t i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            std::string word = s.substr(prev, i - prev);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            prev = i + 1;
        }
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}