#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t pos = 0;
    
    while (pos < sentence.length()) {
        if (sentence.find(" ", pos) == std::string::npos || 
            pos + 1 >= sentence.length() || 
            sentence.at(pos + 1) == ' ') {
            result += sentence.substr(pos);
            break;
        }
        
        size_t spacePos = sentence.find(" ", pos);
        if (spacePos - pos <= 4) {
            result += sentence.substr(pos, spacePos - pos + 1);
            pos = spacePos + 1;
        } else {
            std::string word = sentence.substr(pos, spacePos - pos);
            for (int i = word.length() - 1; i >= 0; --i) {
                result += word.at(i);
            }
            pos = spacePos + 1;
        }
    }
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}