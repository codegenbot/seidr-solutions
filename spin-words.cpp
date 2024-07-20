#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t wordPos = str.find(" ", pos);
        
        if (wordPos - pos >= 5) {
            std::string word = str.substr(pos, wordPos - pos);
            std::reverse(word.begin(), word.end());
            result += word + " ";
        } else {
            result += str.substr(pos, wordPos - pos) + " ";
        }
        
        pos = wordPos + 1;
    }
    
    if (pos >= 5) {
        std::string word = str.substr(pos);
        std::reverse(word.begin(), word.end());
        result += word;
    } else {
        result += str;
    }
    
    return result;
}

int main() {
    // Your test cases here
    std::cout << spinWords("a") << std::endl;  // Should print "a"
    std::cout << spinWords("this is a test") << std::endl;  // Should print "this is a tset"
    std::cout << spinWords("this is another test") << std::endl;  // Should print "this is rehtona tset"
    std::cout << spinWords("hi") << std::endl;  // Should print "hi"
    
    return 0;
}