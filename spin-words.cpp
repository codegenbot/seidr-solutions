#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::string word = str.substr(start, i - start);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = i + 1;
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}