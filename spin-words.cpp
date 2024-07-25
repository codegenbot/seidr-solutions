#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    std::string word;
    
    for (char c : input) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    output += word;
    
    return output;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    
    return 0;
}