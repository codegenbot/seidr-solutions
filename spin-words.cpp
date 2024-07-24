#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string temp = "";

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            if (temp.length() >= 5) {
                for (int j = temp.length() - 1; j >= 0; j--) {
                    result += temp[j];
                }
            } else {
                result += temp;
            }
            temp = "";
        } else {
            temp += str[i];
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