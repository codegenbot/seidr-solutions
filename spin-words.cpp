#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordStart = 0;
    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            std::string word = str.substr(wordStart, i - wordStart);
            if(word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            wordStart = i + 1;
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