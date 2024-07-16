#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result;
    std::stringstream iss(str); 
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + " ";
    }

    return result;
}

int main() {
    std::cout << spinWords("Hello World this is a test") << std::endl;
    return 0;
}