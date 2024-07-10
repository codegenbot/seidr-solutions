#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = sentence.find(' ')) != std::string::npos) {
        std::string word = sentence.substr(0, pos);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        sentence.erase(0, pos + 1);
    }
    
    result += sentence;
    
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}