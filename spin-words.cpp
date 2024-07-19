#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (word.length() >= 5) {
                result += (word.length() >= 5) ? word.substr(word.length() - 1) + word.substr(0, word.length() - 1) : word;
            } else {
                result += word + " ";
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }

    if (word.length() >= 5) {
        result += (word.length() >= 5) ? word.substr(word.length() - 1) + word.substr(0, word.length() - 1) : word;
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