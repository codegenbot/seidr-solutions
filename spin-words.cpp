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
    int len;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            temp = "";
            len = i+1;
        } else {
            temp += result[i];
        }
        if (i+1 > len) {
            for (int j = temp.length()-1; j >= 0; j--) {
                result.replace(len, temp.length(), temp.substr(j, 1));
                len++;
            }
        } else {
            i++; 
        }
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