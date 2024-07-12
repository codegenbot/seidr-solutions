#include <string>
#include <iostream>

int main() {
    string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    int len = s.length();
    if (len % 2 == 0) {
        string firstMid = s.substr(len / 2 - 1, 1);
        string secondMid = s.substr(len / 2, 1);
        std::cout << "Middle characters are: " << firstMid + secondMid << std::endl;
    } else {
        string middleChar = s.substr(len / 2, 1);
        std::cout << "Middle character is: " << middleChar << std::endl;
    }

    return 0;
}