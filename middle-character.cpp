#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s); // Use getline() to read a whole line
    if (s.size() % 2 == 0) {
        std::cout << s.substr(s.size() / 2 - 1, 2);
    } else {
        std::cout << s.substr(s.size() / 2, 1); // Use substr() to get the single middle character
    }
    return 0;
}