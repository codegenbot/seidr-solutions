#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t prevPos = 0;
    for (int i = 0; i <= sentence.size(); ++i) {
        if (i == sentence.size() || ' ' == sentence[i]) {
            std::size_t wordSize = i - prevPos;
            if (wordSize >= 5) {
                std::reverse(sentence.begin() + prevPos, sentence.begin() + i);
            }
            result += sentence.substr(prevPos, wordSize);
            prevPos = i + 1;
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