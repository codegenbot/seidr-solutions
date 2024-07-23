#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    
    for(size_t end = 0; end <= str.size(); ) {
        if(str[end] == ' ' || end == str.size()) {
            size_t len = end - start;
            
            if(len >= 5) {
                std::string word = str.substr(start, len);
                result += std::string(word.rbegin(), word.rend());
            } else {
                result += str.substr(start, len);
            }
            
            if(end < str.size()) {
                result += ' ';
            }
            
            start = end + 1;
        }
        end++;
    }
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    
    return 0;
}