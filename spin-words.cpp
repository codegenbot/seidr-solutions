#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength = 0;
    
    for (char c : str) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i - 1];
            } else
                result += c;
            wordLength = 0;
        } else {
            ++wordLength;
            result += c;
        }
    }
    
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i - 1];
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