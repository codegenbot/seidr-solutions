#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
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
    std::cout << spinWords("a") << std::endl; // should print "a"
    std::cout << spinWords("this is a test") << std::endl; // should print "this is a test"
    std::cout << spinWords("this is another test") << std::endl; // should print "this is rehtona test"
    std::cout << spinWords("hi") << std::endl; // should print "hi"
    
    return 0;
}