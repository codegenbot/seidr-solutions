#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(const std::string& input) {
    std::istringstream iss(input);
    std::string word;
    std::string result;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove the trailing space
    
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string output = reverseWords(input);
    std::cout << output << std::endl;
    
    return 0;
}