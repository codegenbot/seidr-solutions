#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    int length = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            length = 0;
        } else {
            length++;
        }
        if (i == str.length() - 1 || str[i + 1] == ' ') {
            if (length >= 5) {
                std::string temp;
                for (int j = length - 1; j >= 0; j--) {
                    temp += str[i - j];
                }
                result += temp + " ";
            } else {
                result += str.substr(i - length + 1, length) + " ";
            }
        }
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string: ";
        std::cin >> str;
        if (str == "exit") break;
        std::cout << "Spin words: " << spinWords(str) << std::endl;
    }
    return 0;
}