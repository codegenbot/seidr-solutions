#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= i - wordLength; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i, 1); 
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }

    if (wordLength >= 5) {
        std::string reversedWord;
        for (int i = str.length() - 1; i >= str.length() - wordLength; i--) {
            reversedWord += str[i];
        }
        result += reversedWord + " ";
    } 
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}