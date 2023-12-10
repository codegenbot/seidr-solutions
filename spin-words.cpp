#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string spinWords(const std::string& sentence) {
    std::string result = "";
    std::string word = "";
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + ' ';
            word = "";
        }
    }
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    return 0;
}