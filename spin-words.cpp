#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word, result;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    
    std::cout << spinWords(sentence) << std::endl;
    
    return 0;
}