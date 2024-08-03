#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] != ' ') {
            word += str[i];
        } else {
            if(word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }
    
    if(word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    
    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("a") << std::endl;
    return 0;
}