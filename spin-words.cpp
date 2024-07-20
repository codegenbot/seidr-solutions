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
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str[i - j];
                }
            } else {
                result += str[i];
            }
        }
    }

    return result;
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