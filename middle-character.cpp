#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    if (n % 2 == 1) {
        std::cout << s[n / 2];
    } else {
        std::cout << s.substr(n / 2 - 1, 2);
    }
    return 0;
}