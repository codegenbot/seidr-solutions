#include <iostream>
#include <sstream>

std::string reverseWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::ostringstream oss;
    std::string word;
    bool firstWord = true;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        if (!firstWord) {
            oss << " ";
        } else {
            firstWord = false;
        }
        
        oss << word;
    }
    
    return oss.str();
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    std::string reversedSentence = reverseWords(sentence);
    std::cout << reversedSentence << std::endl;
    
    return 0;
}