#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        size_t nextPos = sentence.find(" ", pos + 1);
        if (nextPos == std::string::npos) nextPos = sentence.length();
        
        if (nextPos - pos > 4) {
            std::string word = sentence.substr(pos, nextPos - pos);
            std::reverse(word.begin(), word.end());
            result += word + " ";
        } else {
            result += sentence.substr(pos, nextPos - pos) + " ";
        }
        
        pos = nextPos;
    }
    
    if (sentence.length() > 4)
        std::reverse(sentence.begin() + pos, sentence.end());
    else
        result += sentence;
    
    return result;
}

int main() {
    // Example usage:
    std::cout << spinWords("this is a test") << std::endl; // Output: "this is a tset"
    std::cout << spinWords("hi") << std::endl; // Output: "hi"
    return 0;
}