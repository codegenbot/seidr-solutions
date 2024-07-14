```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordStart = 0;
    
    for (int i = 0; i <= sentence.size(); i++) {
        if (i == sentence.size() || sentence[i] == ' ') {
            std::string word = sentence.substr(wordStart, i - wordStart);
            
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            wordStart = i + 1;
        }
    }
    
    return result;
}

int main() {
    std::string sentence;
    
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, sentence);
        
        if (sentence == "exit")
            break;
        
        std::cout << spinWords(sentence) << std::endl;
    }
    
    return 0;
}