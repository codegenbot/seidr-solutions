#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string& input) {
    std::istringstream ss(input);
    std::string word;

    std::string result;
    
    while (getline(ss, word, ' ')) {
        if (word.length() >= 5) {
            std::reverse(word.rbegin(), word.rend());
        }
        result += word + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}