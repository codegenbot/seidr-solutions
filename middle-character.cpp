#include <iostream>
#include <string>

std::string middleCharacter(const std::string& str) {
    int len = str.size();
    if (len % 2 == 1) {
        return std::string(1, str[len/2]);
    } else {
        return str.substr((len/2)-1, 2);
    }
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}