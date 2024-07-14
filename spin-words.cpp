#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t start = 0;
    for (std::size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::string word = str.substr(start, i - start);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + (i == str.size() ? "" : " ");
            start = i + 1;
        }
    }
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}