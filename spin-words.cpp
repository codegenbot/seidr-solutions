#include <string>
#include <iostream>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int start = 0;
    
    for(int i = 0; i <= sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            
            if(word.length() >= 5) {
                std::string reversedWord = "";
                for(int j = word.length() - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            
            start = i + 1;
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    // Test cases
    std::cout << spinWords("a") << std::endl; 
    std::cout << spinWords("this is a test") << std::endl; 
    std::cout << spinWords("this is another test") << std::endl; 
    std::cout << spinWords("hi") << std::endl; 

    return 0;
}