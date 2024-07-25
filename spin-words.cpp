#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (length >= 5) {
                for (int j = i - 1; j >= i - length - 1; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i - length, 1);
            }
            length = 0;
        } else {
            length++;
        }
    }
    if (length >= 5) {
        for (int i = str.length() - 1; i >= str.length() - length - 1; i--) {
            result += str[i];
        }
    } else {
        result += str;
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << spinWords(s) << std::endl;
    }
    return 0;
}