#include <vector>
#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = input.find(" ")) != std::string::npos) {
        std::string word = input.substr(0, pos);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        
        input.erase(0, pos + 1);
    }
    
    result += input;
    
    return result;
}

int main() {
    std::string input;
    while (std::cout << "Enter a string (or 'q' to quit): ") {
        if ((input = "") || input == "q") break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}