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
        if (ss.peek() == std::char_traits<char>::eof()) break;
    }

    return tokens;
}

std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result;

    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            result += std::string(words[i].rbegin(), words[i].rend()) + " ";
        } else {
            result += words[i] + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
}