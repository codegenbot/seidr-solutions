#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a string: ";
    std::string str;
    std::cin >> str;

    std::string middleCharacter(string s) {
        int len = s.length();
        if (len % 2 == 1)
            return string(1, s[len / 2]);
        else
            return string(1, s[(len - 1) / 2]) + string(1, s[(len + 1) / 2]);
    }

    std::cout << "The middle character(s) is/are: " << middleCharacter(str) << std::endl;
}