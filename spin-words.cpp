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

    return result;
}