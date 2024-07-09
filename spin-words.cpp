#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    for (char c : str) {
        if (c == delimiter) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}

std::string join(const std::vector<std::string>& words, char delimiter) {
    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += delimiter;
        }
        result += words[i];
    }
    return result;
}

std::string spinWords(std::string str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result; 
    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (words[i].length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            result += temp;
        } else {
            result += temp + " ";
        }
    }
    return join(std::vector<std::string>{result}, ' ');
}

int main() {
    std::string str = "Hello World";
    std::cout << spinWords(str) << std::endl;
    return 0;
}