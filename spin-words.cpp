#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        
        if (end == std::string::npos)
            end = str.length();
        
        std::string word = str.substr(start, end - start);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}