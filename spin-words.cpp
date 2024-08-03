#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += str[i];
        } else if (i >= str.length() - 5) {
            for (int j = i; j >= i - 4; j--) {
                result += str[j];
            }
            i -= 4;
        } else {
            for (int j = i; j < str.length(); j++) {
                if (str[j] == ' ') {
                    break;
                }
                result += str[j];
            }
            result += " ";
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