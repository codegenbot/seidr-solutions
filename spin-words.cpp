#include <iostream>
#include <string>
#include <cstring>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        size_t nextPos = sentence.find(" ", pos + 1);
        
        if (nextPos == std::string::npos || sentence.length() - pos >= 5) {
            if(sentence.length() - pos >= 5) {
                std::reverse(sentence.substr(pos, nextPos - pos).begin(), (sentence.substr(pos, nextPos - pos)).end());
            }
            
            result += sentence.substr(pos, nextPos - pos) + " ";
        } else {
            result += sentence.substr(pos, nextPos - pos) + " ";
            pos = nextPos;
        }
    }
    
    if(sentence.length() - pos >= 5) {
        std::reverse(sentence.substr(pos).begin(), (sentence.substr(pos)).end());
    }
    
    result += sentence.substr(pos);
    
    return result;
}

int main() {
    std::string sentence;
    while (std::cin >> sentence) {
        std::cout << spinWords(sentence) << std::endl;
    }
    return 0;
}