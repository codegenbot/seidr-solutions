#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    int n = s.size();
    if (n % 2 == 0) {
        std::cout << s.substr(n / 2 - 1, 2);
    } else {
        std::cout << s[n / 2];
    }
    return 0;
}