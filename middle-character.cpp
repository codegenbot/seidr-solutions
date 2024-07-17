```cpp
#include <iostream>
#include <string>

std::string middleCharacter(std::string input) {
    int len = input.length();
    if (len % 2 == 1) {
        return input.substr(len / 2, 1);
    } else {
        return input.substr((len - 1) / 2, 2);
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 
    if (input.empty()) {
        std::cout << "Input is empty." << std::endl;
        return 0;
    }
    if (!input.empty()) { 
        std::cout << middleCharacter(input) << std::endl; 
    } 
    return 0;
}