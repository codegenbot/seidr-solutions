#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            word = "";
        } else {
            word += str[i];
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
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi

    return 0;
}