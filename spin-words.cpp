#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int start = 0;
    for (int i = 0; i <= sentence.size(); i++) {
        if (i == sentence.size() || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = i + 1;
        }
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