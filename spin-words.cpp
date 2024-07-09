```cpp
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::istringstream ss(str);
    std::string token;
    std::vector<std::string> tokens;

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token); 
    }

    return tokens;
}

std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result;

    for (const auto& word : words) {
        if (word.length() >= 5) {
            result += std::string(word.rbegin(), word.rend()) + " ";
        } else {
            result += word + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
}