#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    int length = 0;

    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            result += ' ';
            length = 0;
        } else {
            length++;
            if (length >= 5) {
                result += str[i];
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