#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    if (n % 2 == 0) {
        std::cout << s.substr(n/2 - 1, 2);
    } else {
        std::cout << s.substr(n/2, 1);
    }
    return 0;
}