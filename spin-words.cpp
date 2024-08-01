```
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    bool isWordLongEnough = false;
    int wordLength = 0;

    for (char c : str) {
        if (c == ' ') {
            if (isWordLongEnough) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i - 1];
            } else
                result += c;
            isWordLongEnough = false;
            wordLength = 0;
        } else {
            wordLength++;
            if (wordLength >= 5) {
                isWordLongEnough = true;
            }
            if (!isWordLongEnough)
                result += c;
            else
                result += str[wordLength - 1];
        }
    }

    if (isWordLongEnough) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i - 1];
    }

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string (or 'q' to quit): ";
        std::cin >> str;
        if (str == "q")
            break;
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}