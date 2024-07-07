```cpp
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    int len = s.length();
    if (len % 2 == 1) {
        return std::to_string(s[len / 2]);
    } else {
        return (s[(len - 1) / 2] + s[len / 2]);
    }
}