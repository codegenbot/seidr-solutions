```cpp
#include <string>
#include <iostream>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::string revWord;
                for (int j = word.length() - 1; j >= 0; j--)
                    revWord += word[j];
                result += revWord + " ";
                word = "";
            } else
                result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        std::string revWord;
        for (int j = word.length() - 1; j >= 0; j--)
            revWord += word[j];
        result += revWord + " ";
    } else
        result += word + " ";

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}