#include <iostream>
#include <sstream>
#include <string>

std::string spinWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::ostringstream oss;
    std::string word;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        oss << word << " ";
    }
    
    std::string result = oss.str();
    result.pop_back(); // Remove the trailing space
    
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    std::string result = spinWords(sentence);
    std::cout << result << std::endl;
    
    return 0;
}