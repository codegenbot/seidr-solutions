#include <iostream>
#include <string>

std::string middleCharacter(std::string s);

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}

std::string middleCharacter(std::string s) {
    int n = s.size();
    if (n % 2 == 0) {
        return s.substr(n / 2 - 1, 2);
    } else {
        return s.substr(n / 2, 1);
    }
}