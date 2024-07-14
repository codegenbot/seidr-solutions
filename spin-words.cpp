#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::stringstream result;

    while (getline(ss, word, ' ')) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result << word << " ";
    }

    return result.str();
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    return 0;
}