#include <iostream>
#include <string>

std::string middleCharacter(const std::string& str) {
    int length = str.length();
    int middle = length / 2;

    if (length % 2 == 0) {
        return str.substr(middle - 1, 2);
    } else {
        return str.substr(middle, 1);
    }
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string result = middleCharacter(input);
    std::cout << result << std::endl;

    return 0;
}