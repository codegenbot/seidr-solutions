```c++
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t start = 0;
    for (size_t i = 0; i <= sentence.size(); ++i) {
        if (i == sentence.size() || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            if (word.size() >= 5) {
                result += std::string(word.rbegin(), word.rend()) + " ";
            } else {
                result += word + " ";
            }
            start = i + 1;
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}