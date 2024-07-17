Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t prevPos = 0;
    for (std::size_t pos = 0; pos <= str.size(); ++pos) {
        if (pos == str.size() || str[pos] == ' ') {
            std::size_t len = pos - prevPos;
            if (len >= 5) {
                for (int i = len - 1; i >= 0; --i)
                    result += str[prevPos + i];
            } else
                result += str.substr(prevPos, len);
            if (pos < str.size())
                result += ' ';
            prevPos = pos + 1;
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