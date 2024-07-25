```
#include <iostream>
#include <string>

std::string newWord(std::string s) {
    std::string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];
    return rev;
}

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5)
                result += newWord(word);
            else
                result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5)
        result += newWord(word);
    else
        result += word;

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}