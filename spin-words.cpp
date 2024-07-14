#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }
    
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    
    return result;
}

int main() {
    // Test cases
    std::cout << spinWords("a") << std::endl;  // a
    std::cout << spinWords("this is a test") << std::endl;  // this is a test
    std::cout << spinWords("this is another test") << std::endl;  // this is rehtona test
    std::cout << spinWords("hi") << std::endl;  // hi
    
    return 0;
}