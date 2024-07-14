#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int wordLength = 0;
    bool inWord = false;

    for (char c : sentence) {
        if (c == ' ') {
            if (inWord && wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += sentence[wordLength - i - 1];
            }
            inWord = false;
            result += ' ';
        } else {
            inWord = true;
            wordLength++;
            result += c;
        }
    }

    if (inWord && wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += sentence[wordLength - i - 1];
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