#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if(word.length() >= 5) {
                std::string temp = word;
                for(int j = temp.length()-1; j >= 0; j--) {
                    result += temp[j];
                }
                word = "";
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if(word.length() >= 5) {
        std::string temp = word;
        for(int j = temp.length()-1; j >= 0; j--) {
            result += temp[j];
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