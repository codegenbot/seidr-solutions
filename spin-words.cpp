#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        std::size_t nextPos = sentence.find(" ", pos + 1);
        if (nextPos == std::string::npos) {
            nextPos = sentence.length();
        }
        
        std::string word = sentence.substr(pos, nextPos - pos);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        pos = nextPos;
    }
    
    result += sentence.substr(pos);
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    
    return 0;
}