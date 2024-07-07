#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::string result = "";
    std::stringstream ss("");
    std::string word;

    while (ss << str >> word) {
        if (word.length() >= 5)
            word = std::string(word.rbegin(), word.rend());
        result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
}