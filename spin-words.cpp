#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    std::size_t pos = 0;
    
    while ((pos = input.find(" ")) != std::string::npos) {
        std::size_t nextPos = input.find(" ", pos + 1);
        
        if (nextPos == std::string::npos)
            nextPos = input.length();
        
        std::string word = input.substr(pos + 1, nextPos - pos - 1);
        
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        
        output += word + " ";
        pos = nextPos;
    }
    
    // Add the last word
    output += input.substr(pos);
    
    return output;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}