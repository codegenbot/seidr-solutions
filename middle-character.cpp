#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    int length = s.length();
    int mid = length / 2;
    std::cout << "Middle characters: ";
    if (length % 2 == 0) {
        std::cout << s.substr(mid - 1, 2);
    } else {
        std::cout << s.substr(mid, 1);
    }
    std::cout << std::endl;

    return 0;
}