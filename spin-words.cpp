#include <iostream>
#include <sstream>

std::string spinWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::ostringstream oss;
    
    std::string word;
    bool firstWord = true;
    
    while (iss >> word) {
        if (word.size() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        if (!firstWord) {
            oss << ' ';
        }
        
        oss << word;
        firstWord = false;
    }
    
    return oss.str();
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    std::cout << spinWords(sentence);
    
    return 0;
}