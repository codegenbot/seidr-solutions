#include <iostream>
#include <string>

int main() {
    int len;
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    len = s.length();
    if (len % 2 == 1) {
        return std::to_string(s[len / 2]);
    } else {
        return std::to_string(s[(len - 1) / 2]) + std::to_string(s[len / 2]);
    }
}