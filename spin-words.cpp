#include <sstream>
#include <iostream>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    while (getline(ss, word, ' ')) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("Hello World");
    return 0;
}