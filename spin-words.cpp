#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(std::string str) {
    std::stringstream ss(str);
    std::string word, result;
    
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    if (!result.empty()) {
        result.pop_back();
    }
    
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string output = reverseWords(input);
    std::cout << output << std::endl;
    
    return 0;
}