```cpp
#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result;
    int wordLength = 0;

    for (char c : str) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i) {
                    result += str[wordLength - i - 1];
                }
            } else {
                result += c;
            }
            wordLength = 0;
        } else {
            result += c;
            ++wordLength;
        }
    }

    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i) {
            result += str[wordLength - i - 1];
        }
    } else {
        result = str;
    }

    return result;
}

std::string spinWords(std::string str) {
    std::string result;
    int length = 0;

    for (char c : str + " ") {
        if (c == ' ') {
            if (length >= 5) {
                char temp[length + 1];
                int i = length - 1;
                for (; i >= 0; --i)
                    temp[i] = str[length - i - 1];
                temp[i + 1] = '\0';
                result.append(temp);
            } else
                result += c;
            length = 0;
        } else {
            result += c;
            ++length;
        }
    }

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string: ";
        std::cin >> str;
        std::cin.ignore();
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}