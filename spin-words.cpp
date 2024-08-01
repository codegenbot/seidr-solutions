#include <iostream>
#include <string>
#include <cstring>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        size_t nextPos = sentence.find(" ", pos + 1);
        
        if (nextPos == std::string::npos || strlen(&sentence.substr(pos, nextPos - pos)) >= 5) {
            if(strlen(&sentence.substr(pos, nextPos - pos)) >= 5) {
                std::reverse(&sentence.substr(pos, nextPos - pos).c_str(), &(&sentence.substr(pos, nextPos - pos) + (nextPos - pos)));
            }
            
            result += sentence.substr(pos, nextPos - pos) + " ";
        } else {
            result += sentence.substr(pos, nextPos - pos) + " ";
            pos = nextPos;
        }
    }
    
    if(strlen(&sentence.substr(pos)) >= 5) {
        std::reverse(sentence.substr(pos).c_str(), &sentence.substr(pos) + (sentence.length() - pos));
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