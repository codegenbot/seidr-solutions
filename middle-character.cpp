#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if (len % 2 == 0) {
        return s.substr(len / 2, 2);
    } else {
        return s.substr(len / 2, 1);
    }
}

int main() {
    std::string input;
    std::cin >> input;

    std::string result = middleCharacter(input);
    std::cout << result << std::endl;

    return 0;
}