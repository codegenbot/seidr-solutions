#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string spinWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word, result;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back();
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    std::cout << spinWords(sentence) << std::endl;
    
    return 0;
}