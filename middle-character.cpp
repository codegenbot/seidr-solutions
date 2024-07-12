#include <string>
#include <iostream>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    int len = s.length();
    if (len % 2 == 0) {
        std::string mid1 = s.substr(len / 2 - 1, 1);
        std::string mid2 = s.substr(len / 2, 1);
        std::cout << "Middle characters are: " << mid1 + mid2 << std::endl;
    } else {
        std::string mid = s.substr(len / 2, 1);
        std::cout << "Middle character is: " << mid << std::endl;
    }

    return 0;
}