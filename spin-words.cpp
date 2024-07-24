#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int len = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            len = 0;
            result += " ";
        } else {
            len++;
            result += str[i];
            if (len >= 5) {
                for (int j = len - 1; j >= 0; j--) {
                    result += str[i - j];
                }
                i -= len;
            }
        }
    }
    return result;
}