#include <iostream>
#include <string>
#include <sstream>

std::string spinWords(const std::string& str) {
    std::istringstream iss(str);
    std::string word, result;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove the trailing space
    
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::cout << spinWords(input) << std::endl;
    
    return 0;
}