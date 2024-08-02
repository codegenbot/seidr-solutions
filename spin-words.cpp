```c++
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int wordLength = 0;
    for (char c : str) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i - 1];
            } else
                result += c;
            wordLength = 0;
        } else {
            wordLength++;
            result += c;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i - 1];
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string (or 'q' to quit): ";
        std::getline(std::cin, str);
        if (str == "q")
            break;
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}