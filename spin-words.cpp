```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t start = 0;
    
    while (start < sentence.length()) {
        size_t end = sentence.find(' ', start);
        if (end == std::string::npos) {
            end = sentence.length();
        }
        
        std::string word = sentence.substr(start, end - start);
        
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1); // remove the extra space at the end
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}