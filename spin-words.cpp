#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}