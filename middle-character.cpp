#include <iostream>
#include <string>

std::string middleCharacter(const std::string& str) {
    int length = str.length();
    if (length % 2 == 1) {
        return std::string(1, str[length / 2]);
    } else {
        return str.substr(length / 2 - 1, 2);
    }
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << middleCharacter(str) << std::endl;
    return 0;
}