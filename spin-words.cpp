#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t start = 0;
    
    for (std::size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            std::size_t len = i - start;
            
            if (len >= 5) {
                std::string word = str.substr(start, len);
                std::reverse(word.begin(), word.end());
                result += word + " ";
            } else {
                result += str.substr(start, len) + " ";
            }
            
            start = i + 1;
        }
    }
    
    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    
    return 0;
}