```
#include <string>
#include <iostream>

int main() {
    string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    int len = s.length();
    if (len % 2 == 0) {
        string mid1 = s.substr(len / 2 - 1, 1);
        string firstMid = s.substr(len / 2, 1);
        std::cout << "Middle characters are: " << mid1 + firstMid << std::endl;
    } else {
        string middleChar = s.substr(len / 2, 1);
        std::cout << "Middle character is: " << middleChar << std::endl;
    }

    return 0;
}