Here is the corrected code:

```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            for (int j = i - 1; j >= 0; j--) {
                if (!std::isspace(sentence[j])) {
                    result += sentence[j];
                    break;
                }
            }
            result += " ";
        } else if (i == sentence.length() - 1) {
            for (int j = i; j >= 0; j--) {
                if (!std::isspace(sentence[j])) {
                    result += sentence[j];
                    break;
                }
            }
        } else {
            word += sentence[i];
        }
        
        if (word.length() >= 5) {
            std::string revWord = "";
            for (int i = word.length() - 1; i >= 0; i--) {
                revWord += word[i];
            }
            result += revWord + " ";
            word = "";
        } else {
            if (!word.empty()) {
                result += word + " ";
                word = "";
            }
        }
    }
    
    return result;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    return 0;
}