#include <iostream>
#include <string>

std::string reverseWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            result += ' ';
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        for (int j = word.length() - 1; j >= 0; j--) {
            result += word[j];
        }
    } else {
        result += word;
    }

    return result;
}

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::string result = reverseWords(str);
    std::cout << result << std::endl;

    return 0;
}