#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::string result = "";
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        result += word.size() >= 5 ? std::string(word.rbegin(), word.rend()) : word + " ";
    }
    return result.substr(0, result.size() - 1); 
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
}