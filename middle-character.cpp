#include <string>
#include <iostream>

int main() {
    string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    int len = s.length();
    if (len % 2 == 0) {
        string mid1 = s.substr(len / 2 - 1, 1);
        string mid2 = s.substr(len / 2, 1);
        std::cout << "Middle characters are: " << mid1 + mid2 << std::endl;
    } else {
        string mid = s.substr(len / 2, 1);
        std::cout << "Middle character is: " << mid << std::endl;
    }

    return 0;
}