#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    std::string temp;
    if(word.length() >= 5) { 
        std::reverse(word.begin(), word.end());
    }
    result += word;

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            word = result.substr(i+1);
            if (word.length() >= 5) { 
                std::reverse(word.begin(), word.end());
                result.replace(i+1, word.length(), word);
            } else {
                i++; 
            }
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;

    return 0;
}