#include <iostream>
#include <sstream>
#include <string>

std::string reverseWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word, result;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string output = reverseWords(input);
    std::cout << output << std::endl;
    
    return 0;
}