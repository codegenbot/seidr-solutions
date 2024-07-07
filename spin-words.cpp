```c++
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    
    while (start < str.size()) {
        size_t spacePos = str.find(" ", start);
        
        if (spacePos == std::string::npos) 
            spacePos = str.size();
            
        std::string word = str.substr(start, spacePos - start);
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
        
        start = spacePos + 1;
    }
    
    return result.substr(0, result.size() - 1); 
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
}