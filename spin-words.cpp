#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::stringstream result;

    while (iss >> word) {
        if (word.length() >= 5)
            result << std::string(word.rbegin(), word.rend()) << " ";
        else
            result << word << " ";
    }

    return result.str();
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}