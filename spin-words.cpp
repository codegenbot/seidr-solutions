#include <iostream>
#include <sstream>
#include <string>

std::string spinWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word, result;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove trailing space
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::cout << spinWords(input) << std::endl;
    
    return 0;
}