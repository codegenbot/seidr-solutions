#include <string>
#include <stringstream>
#include <iostream>

std::string spinWords(std::string str) {
    std::string result;
    std::stringstream iss(str); 
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size()-1); 
}

int main() {
    std::string str = "Hello World this is a test";
    std::cout << spinWords(str) << std::endl;
    return 0;
}