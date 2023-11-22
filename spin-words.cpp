#include <iostream>
#include <sstream>

std::string spinWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word, result;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove last space character
    
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    
    return 0;
}