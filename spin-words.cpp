#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::istringstream iss(input);
    std::string word;
    std::stringstream result;

    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result << word << " ";
    }

    return result.str();
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;

    return 0;
}