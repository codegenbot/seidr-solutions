#include <iostream>
#include <string>

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
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}