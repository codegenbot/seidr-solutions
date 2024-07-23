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

    result += word;

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ' && i+1 < result.length()) {
            std::string temp = result.substr(i+1);
            if (temp.length() >= 5) { 
                std::reverse(temp.begin(), temp.end());
                result = result.substr(0, i+1) + temp;
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