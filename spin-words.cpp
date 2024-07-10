#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int start = 0;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            std::string word = str.substr(start, i - start);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    // Test the function
    std::cout << spinWords("a") << std::endl; // Should print: a
    std::cout << spinWords("this is a test") << std::endl; // Should print: this is a test
    std::cout << spinWords("this is another test") << std::endl; // Should print: this is rehtona test
    std::cout << spinWords("hi") << std::endl; // Should print: hi
    
    return 0;
}