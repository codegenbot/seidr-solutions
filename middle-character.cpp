#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return std::string(1, s[len / 2]);
    }
}

int main() {
    std::cout << middleCharacter("Hello") << std::endl;
    return 0;
}