#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr((len-1)/2, 2);
    } else {
        return s.substr((len-1)/2, 1);
    }
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << middleCharacter(input) << std::endl;
    return 0;
}