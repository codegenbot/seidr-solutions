#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            wordLength = i - result.length();
            if (wordLength >= 5) {
                std::string temp = result.substr(result.length() - wordLength);
                for (int j = temp.length(); j > 0; j--) {
                    result += temp[j - 1];
                }
            } else {
                result += result;
            }
            result += " ";
        } else {
            result += str[i];
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}