#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::vector<std::string> split(const std::string& str, char del) {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string token;

    while (std::getline(ss, token, del)) {
        result.push_back(token);
    }

    return result;
}

std::string join(const std::vector<std::string>& vec, char del) {
    std::string result;

    for (const auto& str : vec) {
        result += str;
        if (!str.empty()) {
            result += del;
        }
    }

    return result;
}

std::string spinWords(const std::string& str) {
    std::vector<std::string> words = split(str, ' ');
    std::string result;

    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (words[i].length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            if (i > 0) { 
                result += " ";
            }
            result += temp;
        } else {
            result += temp + " ";
        }
    }

    return join(std::vector<std::string>{result}, ' ');
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;

    return 0;
}