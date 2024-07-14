#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word + " ";
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; i--) {
            result += word[i];
        }
    } else {
        result += word;
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