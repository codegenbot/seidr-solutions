#include <iostream>
#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int middleIndex = len / 2;
    std::string result;
    if(len % 2 == 0) {
        result = input.substr(middleIndex - 1, 2);
    } else {
        result = std::move(input.substr(middleIndex, 1));
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if(input.empty()) {
        std::cout << "Enter a non-empty string" << std::endl;
    } else {
        int len = input.length();
        std::cout << middleCharacter(input) << std::endl;
    }
    return 0;
}