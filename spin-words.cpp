#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    bool isWordLongEnough = false;
    for (char c : str) {
        if (c == ' ') {
            if (isWordLongEnough) {
                char temp[c + 1];
                int i = 0;
                for (int j = wordLength - 1; j >= 0; --j)
                    temp[i++] = str[wordLength - j - 1];
                temp[i] = '\0';
                result += temp;
            } else
                result += c;
            isWordLongEnough = false;
        } else {
            if (!isWordLongEnough) {
                wordLength++;
                if (wordLength >= 5)
                    isWordLongEnough = true;
            }
            result += c;
        }
    }
    if (isWordLongEnough) {
        char temp[c + 1];
        int i = 0;
        for (int j = wordLength - 1; j >= 0; --j)
            temp[i++] = str[wordLength - j - 1];
        temp[i] = '\0';
        result += temp;
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