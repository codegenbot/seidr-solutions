#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t wordPos = str.find(" ", pos);
        if (wordPos == std::string::npos || wordPos - pos > 4) {
            result += str.substr(pos, wordPos - pos) + " ";
        } else {
            result += str.substr(pos, wordPos - pos) + " ";
            for (int i = wordPos; i < str.length(); i++) {
                if (str[i] == ' ') {
                    break;
                }
                result += str[i];
            }
            result += " ";
        }
        pos = wordPos + 1;
    }
    result += str.substr(pos);
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, str);
        if (str == "exit") break;
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}