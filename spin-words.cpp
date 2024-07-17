#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        size_t wordEnd = pos;
        if (wordEnd + 1 < str.length() && str[wordEnd] >= 'a' && str[wordEnd] <= 'z') {
            ++wordEnd;
        }
        int len = wordEnd - pos;
        if (len > 4) {
            for (int i = len - 1; i >= 0; --i) {
                result += str[pos + i];
            }
        } else {
            result += str.substr(pos, len);
        }
        str.erase(0, wordEnd + 1);
    }
    if (!str.empty()) {
        if (str.length() > 4) {
            for (int i = str.length() - 1; i >= 0; --i) {
                result += str[i];
            }
        } else {
            result += str;
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}