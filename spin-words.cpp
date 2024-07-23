#include <iostream>
#include <string>

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

    result += word;

    std::string temp;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            temp = result.substr(i+1);
            result.replace(i+1, temp.length(), reverse(temp));
            i++; 
        }
    }

    return result;
}

std::string reverse(const std::string& str) {
    std::string reversed;
    for(int i = str.length() - 1; i >= 0; --i)
        reversed += str[i];
    return reversed;
}