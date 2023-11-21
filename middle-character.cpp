#include <iostream>
#include <string>

std::string middleCharacter(const std::string& str) {
    int length = str.length();
    int middle = (length - 1) / 2;

    if (length % 2 == 0) {
        return str.substr(middle, 2);
    } else {
        return str.substr(middle, 1);
    }
}

int main() {
    std::string input;
    std::cin >> input;

    std::string result = middleCharacter(input);
    std::cout << result << std::endl;

    return 0;
}