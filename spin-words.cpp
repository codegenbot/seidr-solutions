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

    int j = 0;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ' || i == result.length() - 1) {
            std::string temp = result.substr(j, i-j+1);
            if (temp.length() >= 5) { 
                for (int k = temp.length()-1; k >= 0; k--) {
                    result.replace(i-j, i-j+1, temp.substr(k, 1));
                }
            } else {
                j = i+1;
            }
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