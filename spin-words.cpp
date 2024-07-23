```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            result += word;
            word = "";
        } else {
            word += c;
            
            // Additional check
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i)
                    result += word[i];
                word = ""; // Reset the word
            } else
                result += word;
        }
    }
    
    // Check the last word
    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    } else
        result += word;
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}