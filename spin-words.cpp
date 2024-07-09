#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::stringstream ss(str);
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

    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (temp.length() >= 5) {
            std::reverse(temp.begin(), temp.end()); 
            result += temp + " ";
        } else {
            result += temp + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
}