#include <iostream>
#include <string>

std::string getMiddleCharacter(const std::string& s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2 - 1, 2);
    } else {
        return s.substr(len / 2, 1);
    }
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << getMiddleCharacter(s) << std::endl;
    return 0;
}