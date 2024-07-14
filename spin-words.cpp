#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::istringstream iss(input);
    std::string word;
    std::string output;

    while (iss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        output += word + " ";
    }

    return output.substr(0, output.size() - 1);
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("another test") << std::endl;
    return 0;
}