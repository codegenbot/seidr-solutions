Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t wordLength = str.substr(pos).find(" ") == std::string::npos ? str.length() - pos : str.find(" ", pos);
        if (wordLength >= 5) {
            result += std::string(wordLength - 4, ' ') + std::string(str.substr(pos, wordLength)).reverse();
        } else {
            result += str.substr(pos, wordLength) + " ";
        }
        str.erase(0, wordLength + 1);
    }
    if (str.length() >= 5) {
        result += std::string(str.length() - 4, ' ') + str.reverse();
    } else {
        result += str;
    }
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}