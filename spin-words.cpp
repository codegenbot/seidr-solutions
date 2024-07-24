#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            std::string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}