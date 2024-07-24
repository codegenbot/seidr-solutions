#include <iostream>
#include <string>

int main() {
    std::string s;

    std::cin >> s;

    if (s.size() % 2 == 0) {
        std::cout << s.substr(s.size() / 2 - 1, 2);
    } else {
        std::cout << s[s.size() / 2];
    }

    return 0;
}