```cpp
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    for (char c : str) {
        if (c == ' ') {
            words.push_back("");
        } else {
            words.back() += c;
        }
    }

    for (auto& word : words) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
    }

    std::string result = "";
    for (const auto& word : words) {
        result += word + " ";
    }

    return result.substr(0, result.length()-1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}