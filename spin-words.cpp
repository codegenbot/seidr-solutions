#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string input) {
    std::string output = "";
    std::size_t pos = 0;
    
    while ((pos = input.find(" ")) != std::string::npos) {
        std::string word = input.substr(0, pos);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        output += word + " ";
        input.erase(0, pos + 1);
    }
    
    output += input;
    
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << spinWords(input) << std::endl;
    return 0;
}