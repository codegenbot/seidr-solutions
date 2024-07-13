```cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a string: ";
    std::string str;
    std::cin >> str;

    std::string middleCharacter(string str) {
        int len = str.length();
        if (len % 2 == 1)
            return string(1, str[len / 2]);
        else
            return string(1, str[(len - 1) / 2]) + string(1, str[(len + 1) / 2]);
    }

    std::cout << "The middle character(s) is/are: " << middleCharacter(str) << std::endl;
}