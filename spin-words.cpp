#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str[i - j];
                }
            } else {
                result += str.substr(i - length + 1, i);
            }
            result += " ";
            length = 0;
        } else {
            length++;
        }
    }
    if (length >= 5) {
        for (int j = length - 1; j >= 0; j--) {
            result += str[str.length() - j];
        }
    } else {
        result += str;
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}