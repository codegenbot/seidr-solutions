#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        std::size_t wordPos = sentence.find(" ", pos);
        if (wordPos == std::string::npos) {
            wordPos = sentence.length();
        }
        
        std::string word = sentence.substr(pos, wordPos - pos);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        pos = wordPos + 1;
    }
    
    if (sentence.back() == ' ') {
        result.pop_back();
    }
    
    return result;
}

int main() {
    // Your code for input and output handling
    std::string sentence;
    while (std::cin >> sentence) {
        std::cout << spinWords(sentence) << std::endl;
    }
    return 0;
}