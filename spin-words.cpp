#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                word = std::string(word.rbegin(), word.rend());
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5)
        word = std::string(word.rbegin(), word.rend());
    
    result += word;
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    
    return 0;
}