```cpp
#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= i - wordLength; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i - wordLength, i);
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int i = str.length() - 1; i >= str.length() - wordLength; i--) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << spinWords(input) << std::endl;
    return 0;
}