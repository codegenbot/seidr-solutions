#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordStart = 0;
    
    for(int i=0; i<=sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            std::string word = sentence.substr(wordStart, i-wordStart);
            if(word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            wordStart = i+1;
        }
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