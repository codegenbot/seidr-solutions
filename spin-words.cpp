#include <iostream>
#include <string>
#include <vector>
#include <sstream>

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
        if(words[i].length() >= 5) {
            std::string reversed = "";
            for(int j = words[i].length()-1; j>=0; --j)
                reversed += words[i][j];
            result += reversed + " ";
        } else {
            result += words[i] + " ";
        }
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
}