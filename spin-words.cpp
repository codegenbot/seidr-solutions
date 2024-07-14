#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        size_t start = pos;
        pos += strspn(sentence.c_str() + pos, " ");
        
        if (pos - start >= 5) {
            std::reverse(sentence.begin() + start, sentence.begin() + pos);
        }
        
        result += sentence.substr(start, pos - start);
        
        sentence.erase(0, pos);
    }
    
    if (sentence.length() >= 5) {
        std::reverse(sentence.begin(), sentence.end());
    }
    
    return result + sentence;
}

int main() {
    // test cases
    std::cout << spinWords("a") << std::endl;     // "a"
    std::cout << spinWords("this is a test") << std::endl;  // "this is a test"
    std::cout << spinWords("this is another test") << std::endl;  // "this is rehtona test"
    std::cout << spinWords("hi") << std::endl;     // "hi"
    
    return 0;
}