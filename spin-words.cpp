```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    
    size_t prevPos = 0;
    size_t pos = 0;
    while ((pos = str.find(' ', prevPos)) != std::string::npos) {
        std::string word = str.substr(prevPos, pos - prevPos);
        
        if (word.length() > 4)
            word = std::string(word.rbegin(), word.rend());
        
        result += word + " ";
        prevPos = pos + 1;
    }
    
    result += str.substr(prevPos);
    if (!result.empty())
        result.back() = ' ';
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}