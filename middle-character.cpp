#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    if (s.length() % 2 == 0) {
        std::cout << s.substr(s.length() / 2 - 1, 2);
    } else {
        std::cout << s[s.length() / 2];
    }
    return 0;
}