#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    bool inWord = false;
    int wordLength = 0;

    for (auto c : sentence + " ") { 
        if (c == ' ') {
            if (inWord && wordLength >= 5) {
                for (int i = --wordLength; i >= 0; --i)
                    result += sentence[wordLength - i];
            } else
                result += c;
            inWord = false;
            wordLength = 0;
        } else {
            inWord = true;
            result += c;
            wordLength++;
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