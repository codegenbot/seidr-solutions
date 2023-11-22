#include <iostream>
#include <sstream>
#include <string>

std::string reverseWords(std::string input) {
    std::istringstream iss(input);
    std::ostringstream oss;
    std::string word;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        oss << word << " ";
    }
    
    std::string output = oss.str();
    output.pop_back(); // Remove the extra space at the end
    
    return output;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string output = reverseWords(input);
    std::cout << output << std::endl;
    
    return 0;
}