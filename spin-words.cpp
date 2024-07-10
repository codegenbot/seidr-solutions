#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result;
    std::size_t pos = 0;
    
    while ((pos = str.find(' ')) != std::string::npos) {
        std::string word = str.substr(0, pos);
        
        if (word.length() >= 5) {
            for (int i = word.length() - 1; i >= 0; --i)
                result += word[i];
        } else
            result += word;
        
        str.erase(0, pos + 1);
    }
    
    if (str.length() >= 5) {
        for (int i = str.length() - 1; i >= 0; --i)
            result += str[i];
    } else
        result += str;
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}