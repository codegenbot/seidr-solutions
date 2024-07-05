#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    int len = s.length();
    if (len % 2 == 0) {
        return std::cout << s.substr(len / 2 - 1, 2) << std::endl;
    } else {
        return std::cout << std::string(1, s[len / 2]) << std::endl;
    }
}