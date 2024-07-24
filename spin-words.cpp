#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    std::size_t start = 0;
    for (std::size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::size_t len = i - start;
            if (len >= 5) {
                std::string word = str.substr(start, len);
                for (int j = len - 1; j >= 0; --j) {
                    result += word[j];
                }
            } else {
                result += str.substr(start, len);
            }
            start = i + 1;
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}